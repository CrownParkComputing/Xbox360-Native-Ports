#include "soulcalibur2_funcs.3.h"

DEFINE_REX_FUNC(sub_820E0088) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1980(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1980);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1984(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1984);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f1,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// bl 0x822d4c88
	ctx.lr = 0x820E00AC;
	sub_822D4C88(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E6980) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// lfs f0,15968(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15968);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-700(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + -700, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E7268) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822c80d0
	ctx.lr = 0x820E7284;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x820e72a0
	if (ctx.cr0.eq) goto loc_820E72A0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stb r11,8(r3)
	REX_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// b 0x820e72a4
	goto loc_820E72A4;
loc_820E72A0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_820E72A4:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// stb r11,8(r3)
	REX_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_820E9AF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,396(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820EA3B8) {
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
	// stw r4,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r4.u32);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// stw r5,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r5.u32);
	// bgt cr6,0x820ea3e0
	if (ctx.cr6.gt) goto loc_820EA3E0;
	// li r6,1
	ctx.r6.s64 = 1;
loc_820EA3E0:
	// stw r6,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r6.u32);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lwz r3,-28236(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -28236);
	// bl 0x822025c8
	ctx.lr = 0x820EA3F0;
	sub_822025C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f1,108(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 108, temp.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
	// stw r9,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_820EDAD0) {
	REX_FUNC_PROLOGUE();
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-28296
	ctx.r8.s64 = ctx.r9.s64 + -28296;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-28296(r9)
	REX_STORE_U32(ctx.r9.u32 + -28296, ctx.r11.u32);
	// stw r10,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820EE240) {
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
	// lwz r4,392(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 392);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820ee2fc
	if (ctx.cr6.eq) goto loc_820EE2FC;
	// lwz r7,92(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820ee2fc
	if (ctx.cr6.eq) goto loc_820EE2FC;
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820ee2b8
	if (!ctx.cr6.gt) goto loc_820EE2B8;
	// addi r11,r3,112
	ctx.r11.s64 = ctx.r3.s64 + 112;
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
loc_820EE28C:
	// add r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwzu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzu r5,8(r8)
	ea = 8 + ctx.r8.u32;
	ctx.r5.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// lwz r30,4(r7)
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r30.s32, ctx.xer);
	// lhz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 4);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r31,r6,r31
	r31.u64 = ctx.r6.u64 + r31.u64;
	// blt cr6,0x820ee28c
	if (ctx.cr6.lt) goto loc_820EE28C;
loc_820EE2B8:
	// stw r31,380(r3)
	REX_STORE_U32(ctx.r3.u32 + 380, r31.u32);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lwz r4,32(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// addi r3,r11,-28232
	ctx.r3.s64 = ctx.r11.s64 + -28232;
	// bl 0x82202540
	ctx.lr = 0x820EE2CC;
	sub_82202540(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x820e9b08
	ctx.lr = 0x820EE2E8;
	sub_820E9B08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e9b00
	ctx.lr = 0x820EE2F8;
	sub_820E9B00(ctx, base);
	// b 0x820ee300
	goto loc_820EE300;
loc_820EE2FC:
	// bl 0x820eded0
	ctx.lr = 0x820EE300;
	sub_820EDED0(ctx, base);
loc_820EE300:
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

DEFINE_REX_FUNC(sub_820F2F68) {
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
	ctx.lr = 0x820F2F70;
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F2F94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x820f3020
	if (!ctx.cr6.lt) goto loc_820F3020;
	// li r30,0
	r30.s64 = 0;
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x820f2fec
	if (!ctx.cr6.gt) goto loc_820F2FEC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f30.f64 = double(temp.f32);
	// lfs f31,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
loc_820F2FC0:
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x820f2fd8
	if (!ctx.cr6.eq) goto loc_820F2FD8;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// b 0x820f2fdc
	goto loc_820F2FDC;
loc_820F2FD8:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
loc_820F2FDC:
	// bl 0x82202560
	ctx.lr = 0x820F2FE0;
	sub_82202560(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// blt cr6,0x820f2fc0
	if (ctx.cr6.lt) goto loc_820F2FC0;
loc_820F2FEC:
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r11,32336
	ctx.r3.s64 = ctx.r11.s64 + 32336;
	// bl 0x820ea210
	ctx.lr = 0x820F2FFC;
	sub_820EA210(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// bge cr6,0x820f3018
	if (!ctx.cr6.lt) goto loc_820F3018;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x82201ac8
	ctx.lr = 0x820F3018;
	sub_82201AC8(ctx, base);
loc_820F3018:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
loc_820F3020:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_820F93D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r3,7388
	ctx.r9.s64 = ctx.r3.s64 + 7388;
	// stw r11,7256(r3)
	REX_STORE_U32(ctx.r3.u32 + 7256, ctx.r11.u32);
	// stw r11,4188(r3)
	REX_STORE_U32(ctx.r3.u32 + 4188, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r11,4192(r3)
	REX_STORE_U32(ctx.r3.u32 + 4192, ctx.r11.u32);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// stw r11,6364(r3)
	REX_STORE_U32(ctx.r3.u32 + 6364, ctx.r11.u32);
	// stw r11,6396(r3)
	REX_STORE_U32(ctx.r3.u32 + 6396, ctx.r11.u32);
	// stw r8,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
loc_820F940C:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x820f940c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F940C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FB518) {
	REX_FUNC_PROLOGUE();
	// lwz r11,6352(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 6352);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FB5D0) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,7256(r3)
	REX_STORE_U32(ctx.r3.u32 + 7256, ctx.r11.u32);
	// stw r11,4188(r3)
	REX_STORE_U32(ctx.r3.u32 + 4188, ctx.r11.u32);
	// stw r11,6348(r3)
	REX_STORE_U32(ctx.r3.u32 + 6348, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,4192(r3)
	REX_STORE_U32(ctx.r3.u32 + 4192, ctx.r11.u32);
	// stw r11,6360(r3)
	REX_STORE_U32(ctx.r3.u32 + 6360, ctx.r11.u32);
	// stw r11,6364(r3)
	REX_STORE_U32(ctx.r3.u32 + 6364, ctx.r11.u32);
	// stw r11,6352(r3)
	REX_STORE_U32(ctx.r3.u32 + 6352, ctx.r11.u32);
	// stw r11,6368(r3)
	REX_STORE_U32(ctx.r3.u32 + 6368, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FC248) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r9,r11,9044
	ctx.r9.s64 = ctx.r11.s64 + 9044;
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
loc_820FC26C:
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
	// bdnz 0x820fc26c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FC26C;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820FC2C0:
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
	// bdnz 0x820fc2c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FC2C0;
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

DEFINE_REX_FUNC(sub_820FEC80) {
	REX_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820fe770
	sub_820FE770(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820FED80) {
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
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8968(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8968);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// stw r11,8968(r10)
	REX_STORE_U32(ctx.r10.u32 + 8968, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820fee44
	if (ctx.cr6.eq) goto loc_820FEE44;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820fee18
	if (ctx.cr6.eq) goto loc_820FEE18;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820fedec
	if (ctx.cr6.eq) goto loc_820FEDEC;
	// bl 0x821fedc8
	ctx.lr = 0x820FEDC4;
	sub_821FEDC8(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x820fee6c
	goto loc_820FEE6C;
loc_820FEDEC:
	// bl 0x821feec8
	ctx.lr = 0x820FEDF0;
	sub_821FEEC8(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x820fee6c
	goto loc_820FEE6C;
loc_820FEE18:
	// bl 0x821fee88
	ctx.lr = 0x820FEE1C;
	sub_821FEE88(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x820fee6c
	goto loc_820FEE6C;
loc_820FEE44:
	// bl 0x821fee08
	ctx.lr = 0x820FEE48;
	sub_821FEE08(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_820FEE6C:
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

DEFINE_REX_FUNC(sub_82106C48) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,432
	ctx.r10.s64 = ctx.r10.s64 + 432;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r9,r9,13128
	ctx.r9.s64 = ctx.r9.s64 + 13128;
	// lwz r10,220(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 220);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r4,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r4.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lbz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// mulli r10,r10,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// stwx r11,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lbz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// mulli r10,r10,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// stwx r11,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82106cbc
	if (!ctx.cr0.eq) goto loc_82106CBC;
	// b 0x820fec80
	sub_820FEC80(ctx, base);
	return;
loc_82106CBC:
	// b 0x820fec88
	sub_820FEC88(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821077F8) {
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
	// bl 0x82106650
	ctx.lr = 0x8210780C;
	sub_82106650(ctx, base);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,25
	ctx.r11.s64 = 25;
	// addi r31,r10,22960
	r31.s64 = ctx.r10.s64 + 22960;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x82106c48
	ctx.lr = 0x82107828;
	sub_82106C48(ctx, base);
	// li r11,120
	ctx.r11.s64 = 120;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x82100c80
	ctx.lr = 0x8210783C;
	sub_82100C80(ctx, base);
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

DEFINE_REX_FUNC(sub_821098E8) {
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
	// bl 0x822d4e5c
	ctx.lr = 0x821098F0;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x822d4f34
	ctx.lr = 0x821098F8;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r10,22928
	ctx.r11.s64 = ctx.r10.s64 + 22928;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,16308(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16308);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f30,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f30.f64 = double(temp.f32);
	// lis r31,-32256
	r31.s64 = -2113929216;
	// lfs f13,16628(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16628);
	ctx.f13.f64 = double(temp.f32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stfs f0,22928(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 22928, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r30,r1,128
	r30.s64 = ctx.r1.s64 + 128;
	// stfs f30,16(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r28,r1,144
	r28.s64 = ctx.r1.s64 + 144;
	// stfs f30,20(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r27,r1,160
	r27.s64 = ctx.r1.s64 + 160;
	// stfs f30,24(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r26,r1,176
	r26.s64 = ctx.r1.s64 + 176;
	// lfs f0,26832(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 26832);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// lfs f13,26624(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 26624);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// lfs f12,28072(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28072);
	ctx.f12.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f11,28076(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28076);
	ctx.f11.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f0,1992(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r19,0(r8)
	r19.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r18,4(r8)
	r18.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r17,8(r8)
	r17.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,28(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r24,16(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r23,20(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mr r25,r31
	r25.u64 = r31.u64;
	// lwz r22,24(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mr r21,r24
	r21.u64 = r24.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r20,r23
	r20.u64 = r23.u64;
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stw r24,0(r30)
	REX_STORE_U32(r30.u32 + 0, r24.u32);
	// stw r23,4(r30)
	REX_STORE_U32(r30.u32 + 4, r23.u32);
	// stw r22,8(r30)
	REX_STORE_U32(r30.u32 + 8, r22.u32);
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
	// stw r24,0(r28)
	REX_STORE_U32(r28.u32 + 0, r24.u32);
	// stw r23,4(r28)
	REX_STORE_U32(r28.u32 + 4, r23.u32);
	// stw r22,8(r28)
	REX_STORE_U32(r28.u32 + 8, r22.u32);
	// stw r31,12(r28)
	REX_STORE_U32(r28.u32 + 12, r31.u32);
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// stw r7,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r7.u32);
	// stw r6,8(r27)
	REX_STORE_U32(r27.u32 + 8, ctx.r6.u32);
	// stw r9,12(r27)
	REX_STORE_U32(r27.u32 + 12, ctx.r9.u32);
	// stw r19,0(r26)
	REX_STORE_U32(r26.u32 + 0, r19.u32);
	// stw r18,4(r26)
	REX_STORE_U32(r26.u32 + 4, r18.u32);
	// stw r17,8(r26)
	REX_STORE_U32(r26.u32 + 8, r17.u32);
	// stw r8,12(r26)
	REX_STORE_U32(r26.u32 + 12, ctx.r8.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// bl 0x821f7248
	ctx.lr = 0x82109A44;
	sub_821F7248(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,620(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82109a80
	if (!ctx.cr6.gt) goto loc_82109A80;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82109A80:
	// lfs f13,624(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r27,84(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r11,r27
	ctx.r11.s64 = r27.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82109ab4
	if (!ctx.cr6.gt) goto loc_82109AB4;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_82109AB4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,632(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 632);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,2344(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2344);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82109af4
	if (!ctx.cr6.gt) goto loc_82109AF4;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82109AF4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x82109b00
	if (!ctx.cr6.eq) goto loc_82109B00;
	// li r31,100
	r31.s64 = 100;
loc_82109B00:
	// lfs f13,628(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r11,r28
	ctx.r11.s64 = r28.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82109b34
	if (!ctx.cr6.gt) goto loc_82109B34;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_82109B34:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// addi r26,r11,432
	r26.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,80
	ctx.r3.u64 = ctx.r3.u64 | 80;
	// lwz r4,344(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82109B4C;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lfd f31,27544(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 27544);
	// addi r3,r7,27512
	ctx.r3.s64 = ctx.r7.s64 + 27512;
	// lfd f2,27536(r10)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r10.u32 + 27536);
	// lis r7,-1
	ctx.r7.s64 = -65536;
	// lfd f29,28064(r9)
	f29.u64 = REX_LOAD_U64(ctx.r9.u32 + 28064);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// stfd f31,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f29,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f29.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ori r7,r7,255
	ctx.r7.u64 = ctx.r7.u64 | 255;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x821eacb0
	ctx.lr = 0x82109B9C;
	sub_821EACB0(ctx, base);
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// lwz r4,344(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 344);
	// ori r3,r3,81
	ctx.r3.u64 = ctx.r3.u64 | 81;
	// bl 0x820e68b8
	ctx.lr = 0x82109BAC;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f28,28056(r11)
	ctx.fpscr.disableFlushMode();
	f28.u64 = REX_LOAD_U64(ctx.r11.u32 + 28056);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfd f31,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f29,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f29.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// stfd f28,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f28.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// addi r25,r10,28032
	r25.s64 = ctx.r10.s64 + 28032;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// lis r7,20735
	ctx.r7.s64 = 1358888960;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// bl 0x821eacb0
	ctx.lr = 0x82109BF4;
	sub_821EACB0(ctx, base);
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// lwz r4,344(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 344);
	// ori r3,r3,82
	ctx.r3.u64 = ctx.r3.u64 | 82;
	// bl 0x820e68b8
	ctx.lr = 0x82109C04;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f27,28024(r11)
	ctx.fpscr.disableFlushMode();
	f27.u64 = REX_LOAD_U64(ctx.r11.u32 + 28024);
	// lis r7,20735
	ctx.r7.s64 = 1358888960;
	// stfd f31,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f29,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f29.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// stfd f27,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f27.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// bl 0x821eacb0
	ctx.lr = 0x82109C44;
	sub_821EACB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// addi r11,r11,28016
	ctx.r11.s64 = ctx.r11.s64 + 28016;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// cmpwi cr6,r31,120
	ctx.cr6.compare<int32_t>(r31.s32, 120, ctx.xer);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// addi r3,r10,27992
	ctx.r3.s64 = ctx.r10.s64 + 27992;
	// lfd f29,0(r11)
	f29.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// blt cr6,0x82109c9c
	if (ctx.cr6.lt) goto loc_82109C9C;
	// stfd f31,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f28,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f28.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f29,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f29.u64);
	// lis r7,-256
	ctx.r7.s64 = -16777216;
	// ori r7,r7,255
	ctx.r7.u64 = ctx.r7.u64 | 255;
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x82109C98;
	sub_821EACB0(ctx, base);
	// b 0x82109cbc
	goto loc_82109CBC;
loc_82109C9C:
	// stfd f2,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f3,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x82109CBC;
	sub_821EACB0(ctx, base);
loc_82109CBC:
	// stfd f31,40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f29,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f29.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfd f27,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f27.u64);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// addi r31,r11,27976
	r31.s64 = ctx.r11.s64 + 27976;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x82109CF8;
	sub_821EACB0(ctx, base);
	// lfs f0,628(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x82109d58
	if (!ctx.cr6.gt) goto loc_82109D58;
	// lwz r11,636(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 636);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82109d58
	if (!ctx.cr6.gt) goto loc_82109D58;
	// cmpwi cr6,r28,100
	ctx.cr6.compare<int32_t>(r28.s32, 100, ctx.xer);
	// lis r7,-256
	ctx.r7.s64 = -16777216;
	// bgt cr6,0x82109d20
	if (ctx.cr6.gt) goto loc_82109D20;
	// lis r7,-1
	ctx.r7.s64 = -65536;
loc_82109D20:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfd f31,40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// stfd f27,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f27.u64);
	// ori r7,r7,255
	ctx.r7.u64 = ctx.r7.u64 | 255;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// lfd f1,27968(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 27968);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x82109D58;
	sub_821EACB0(ctx, base);
loc_82109D58:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x822d4f80
	ctx.lr = 0x82109D64;
	// b 0x822d4eac
	return;
}

DEFINE_REX_FUNC(sub_8211D0C8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e8c
	ctx.lr = 0x8211D0D0;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f2c
	ctx.lr = 0x8211D0D8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,136
	r31.s64 = ctx.r3.s64 + 136;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r5,r31,116
	ctx.r5.s64 = r31.s64 + 116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x820e1bf0
	ctx.lr = 0x8211D0F4;
	sub_820E1BF0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r29,296
	ctx.r4.s64 = r29.s64 + 296;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1ec0
	ctx.lr = 0x8211D104;
	sub_820E1EC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e22e8
	ctx.lr = 0x8211D10C;
	sub_820E22E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	f26.f64 = ctx.f1.f64;
	// bl 0x820e2290
	ctx.lr = 0x8211D11C;
	sub_820E2290(ctx, base);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,232(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,236(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// lfs f30,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f30.f64 = double(temp.f32);
	// lfs f31,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f11,f30
	ctx.cr6.compare(ctx.f11.f64, f30.f64);
	// lfs f25,16268(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16268);
	f25.f64 = double(temp.f32);
	// fsubs f12,f31,f12
	ctx.f12.f64 = double(float(f31.f64 - ctx.f12.f64));
	// ble cr6,0x8211d208
	if (!ctx.cr6.gt) goto loc_8211D208;
	// lfs f11,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f26,f11
	ctx.cr6.compare(f26.f64, ctx.f11.f64);
	// bge cr6,0x8211d208
	if (!ctx.cr6.lt) goto loc_8211D208;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8211d208
	if (!ctx.cr6.lt) goto loc_8211D208;
	// lfs f10,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fabs f10,f10
	ctx.f10.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fsubs f10,f31,f10
	ctx.f10.f64 = double(float(f31.f64 - ctx.f10.f64));
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// bge cr6,0x8211d208
	if (!ctx.cr6.lt) goto loc_8211D208;
	// fdivs f11,f26,f11
	ctx.f11.f64 = double(float(f26.f64 / ctx.f11.f64));
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 - ctx.f0.f64));
	// fsubs f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 - ctx.f13.f64));
	// fsubs f1,f31,f11
	ctx.f1.f64 = double(float(f31.f64 - ctx.f11.f64));
	// fdivs f29,f10,f0
	f29.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// fdivs f28,f12,f13
	f28.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// beq cr6,0x8211d1b8
	if (ctx.cr6.eq) goto loc_8211D1B8;
	// bl 0x820e0188
	ctx.lr = 0x8211D1A8;
	sub_820E0188(ctx, base);
	// fmuls f1,f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f25.f64));
	// bl 0x820e0160
	ctx.lr = 0x8211D1B0;
	sub_820E0160(ctx, base);
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// b 0x8211d1bc
	goto loc_8211D1BC;
loc_8211D1B8:
	// fmr f27,f30
	ctx.fpscr.disableFlushMode();
	f27.f64 = f30.f64;
loc_8211D1BC:
	// fcmpu cr6,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f28.f64);
	// ble cr6,0x8211d1d4
	if (!ctx.cr6.gt) goto loc_8211D1D4;
	// fcmpu cr6,f29,f30
	ctx.cr6.compare(f29.f64, f30.f64);
	// beq cr6,0x8211d1f8
	if (ctx.cr6.eq) goto loc_8211D1F8;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// b 0x8211d1e0
	goto loc_8211D1E0;
loc_8211D1D4:
	// fcmpu cr6,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f28.f64, f30.f64);
	// beq cr6,0x8211d1f8
	if (ctx.cr6.eq) goto loc_8211D1F8;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
loc_8211D1E0:
	// bl 0x820e0188
	ctx.lr = 0x8211D1E4;
	sub_820E0188(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16204);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x820e0160
	ctx.lr = 0x8211D1F4;
	sub_820E0160(ctx, base);
	// b 0x8211d1fc
	goto loc_8211D1FC;
loc_8211D1F8:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
loc_8211D1FC:
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 - ctx.f1.f64));
	// fmuls f29,f0,f27
	f29.f64 = double(float(ctx.f0.f64 * f27.f64));
	// b 0x8211d20c
	goto loc_8211D20C;
loc_8211D208:
	// fmr f29,f30
	ctx.fpscr.disableFlushMode();
	f29.f64 = f30.f64;
loc_8211D20C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(f29.f64, ctx.f0.f64);
	// bge cr6,0x8211d250
	if (!ctx.cr6.lt) goto loc_8211D250;
	// lfs f0,108(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x8211d250
	if (!ctx.cr6.gt) goto loc_8211D250;
	// fcmpu cr6,f26,f0
	ctx.cr6.compare(f26.f64, ctx.f0.f64);
	// bge cr6,0x8211d250
	if (!ctx.cr6.lt) goto loc_8211D250;
	// fdivs f0,f26,f0
	ctx.f0.f64 = double(float(f26.f64 / ctx.f0.f64));
	// fsubs f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 - ctx.f0.f64));
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// beq cr6,0x8211d250
	if (ctx.cr6.eq) goto loc_8211D250;
	// bl 0x820e0188
	ctx.lr = 0x8211D244;
	sub_820E0188(ctx, base);
	// fmuls f1,f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f25.f64));
	// bl 0x820e0160
	ctx.lr = 0x8211D24C;
	sub_820E0160(ctx, base);
	// b 0x8211d254
	goto loc_8211D254;
loc_8211D250:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
loc_8211D254:
	// fcmpu cr6,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, ctx.f1.f64);
	// bge cr6,0x8211d260
	if (!ctx.cr6.lt) goto loc_8211D260;
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
loc_8211D260:
	// addi r31,r29,96
	r31.s64 = r29.s64 + 96;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// addi r5,r29,112
	ctx.r5.s64 = r29.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e1cc0
	ctx.lr = 0x8211D274;
	sub_820E1CC0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8211d29c
	if (ctx.cr6.eq) goto loc_8211D29C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
loc_8211D29C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f78
	ctx.lr = 0x8211D2AC;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82124268) {
	REX_FUNC_PROLOGUE();
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
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r4,49
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 49, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lwz r11,2812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2812);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r1,32
	ctx.r9.s64 = ctx.r1.s64 + 32;
	// addi r11,r11,654
	ctx.r11.s64 = ctx.r11.s64 + 654;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,-16(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// stwx r4,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u32);
loc_821242B4:
	// addi r10,r9,7
	ctx.r10.s64 = ctx.r9.s64 + 7;
	// lwz r11,2812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2812);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r11,2812(r3)
	REX_STORE_U32(ctx.r3.u32 + 2812, ctx.r11.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r10,49
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 49, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// addi r11,r11,654
	ctx.r11.s64 = ctx.r11.s64 + 654;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// b 0x821242b4
	goto loc_821242B4;
}

DEFINE_REX_FUNC(sub_821256C0) {
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
	ctx.lr = 0x821256C8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r11,-24048
	ctx.r11.s64 = ctx.r11.s64 + -24048;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82125848
	if (ctx.cr0.eq) goto loc_82125848;
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82125848
	if (ctx.cr0.eq) goto loc_82125848;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// li r29,-1
	r29.s64 = -1;
	// addi r30,r11,-27676
	r30.s64 = ctx.r11.s64 + -27676;
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82128648
	ctx.lr = 0x82125720;
	sub_82128648(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82128648
	ctx.lr = 0x82125730;
	sub_82128648(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// bgt cr6,0x82125780
	if (ctx.cr6.gt) goto loc_82125780;
loc_8212573C:
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(r31.s32, r26.s32, ctx.xer);
	// bgt cr6,0x821257b0
	if (ctx.cr6.gt) goto loc_821257B0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82128aa8
	ctx.lr = 0x82125768;
	sub_82128AA8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// blt 0x8212573c
	if (ctx.cr0.lt) goto loc_8212573C;
	// b 0x821257b0
	goto loc_821257B0;
loc_82125778:
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(r31.s32, r26.s32, ctx.xer);
	// blt cr6,0x821257b0
	if (ctx.cr6.lt) goto loc_821257B0;
loc_82125780:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82128aa8
	ctx.lr = 0x821257A4;
	sub_82128AA8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// blt 0x82125778
	if (ctx.cr0.lt) goto loc_82125778;
loc_821257B0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge cr6,0x821257c4
	if (!ctx.cr6.lt) goto loc_821257C4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82125858
	goto loc_82125858;
loc_821257C4:
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x821257f4
	if (ctx.cr6.eq) goto loc_821257F4;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// stw r9,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r9.u32);
	// stw r8,8(r25)
	REX_STORE_U32(r25.u32 + 8, ctx.r8.u32);
	// stw r11,12(r25)
	REX_STORE_U32(r25.u32 + 12, ctx.r11.u32);
loc_821257F4:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82125858
	if (ctx.cr6.eq) goto loc_82125858;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lha r11,30(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 30));
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82125820
	if (!ctx.cr6.lt) goto loc_82125820;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// rlwinm r10,r29,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// b 0x82125824
	goto loc_82125824;
loc_82125820:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82125824:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r24)
	REX_STORE_U32(r24.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r24)
	REX_STORE_U32(r24.u32 + 8, ctx.r10.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r24)
	REX_STORE_U32(r24.u32 + 12, ctx.r11.u32);
	// b 0x82125858
	goto loc_82125858;
loc_82125848:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lfs f2,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821249c0
	ctx.lr = 0x82125858;
	sub_821249C0(ctx, base);
loc_82125858:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8212B388) {
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
	// clrlwi. r30,r3,27
	r30.u64 = ctx.r3.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8212b3c4
	if (ctx.cr0.lt) goto loc_8212B3C4;
	// cmpwi cr6,r30,17
	ctx.cr6.compare<int32_t>(r30.s32, 17, ctx.xer);
	// bge cr6,0x8212b3c4
	if (!ctx.cr6.lt) goto loc_8212B3C4;
	// bl 0x8211fb50
	ctx.lr = 0x8212B3B0;
	sub_8211FB50(ctx, base);
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-5880
	ctx.r9.s64 = ctx.r11.s64 + -5880;
	// lfsx f1,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8212b3cc
	goto loc_8212B3CC;
loc_8212B3C4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,2384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2384);
	ctx.f1.f64 = double(temp.f32);
loc_8212B3CC:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r31,r11,20104
	r31.s64 = ctx.r11.s64 + 20104;
	// stfs f1,20104(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 20104, temp.u32);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r11,30(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x8212b414
	if (!ctx.cr6.eq) goto loc_8212B414;
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(r30.s32, 15, ctx.xer);
	// beq cr6,0x8212b3fc
	if (ctx.cr6.eq) goto loc_8212B3FC;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(r30.s32, 16, ctx.xer);
	// bne cr6,0x8212b414
	if (!ctx.cr6.eq) goto loc_8212B414;
loc_8212B3FC:
	// bl 0x821359a8
	ctx.lr = 0x8212B400;
	sub_821359A8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-29172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -29172);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f1,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f1,0(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
loc_8212B414:
	// bl 0x822031b8
	ctx.lr = 0x8212B418;
	sub_822031B8(ctx, base);
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

DEFINE_REX_FUNC(sub_8212D560) {
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
	ctx.lr = 0x8212D568;
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212d7b4
	if (!ctx.cr6.eq) goto loc_8212D7B4;
	// bl 0x821159c8
	ctx.lr = 0x8212D598;
	sub_821159C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8212d7b4
	if (!ctx.cr0.eq) goto loc_8212D7B4;
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r10,20312
	ctx.r10.s64 = ctx.r10.s64 + 20312;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,13128
	ctx.r11.s64 = ctx.r9.s64 + 13128;
	// li r29,0
	r29.s64 = 0;
	// mr r26,r29
	r26.u64 = r29.u64;
	// lwzx r9,r30,r10
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	// lwz r11,1856(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1856);
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bge cr6,0x8212d5dc
	if (!ctx.cr6.lt) goto loc_8212D5DC;
	// li r26,1
	r26.s64 = 1;
loc_8212D5DC:
	// lhz r9,606(r28)
	ctx.r9.u64 = REX_LOAD_U16(r28.u32 + 606);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8212d5ec
	if (!ctx.cr6.eq) goto loc_8212D5EC;
	// li r27,31
	r27.s64 = 31;
loc_8212D5EC:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stwx r11,r30,r10
	REX_STORE_U32(r30.u32 + ctx.r10.u32, ctx.r11.u32);
	// lhz r11,98(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 98);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// lfs f31,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f31.f64 = double(temp.f32);
	// beq cr6,0x8212d640
	if (ctx.cr6.eq) goto loc_8212D640;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// ble cr6,0x8212d658
	if (!ctx.cr6.gt) goto loc_8212D658;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// ble cr6,0x8212d628
	if (!ctx.cr6.gt) goto loc_8212D628;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// beq cr6,0x8212d628
	if (ctx.cr6.eq) goto loc_8212D628;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bne cr6,0x8212d658
	if (!ctx.cr6.eq) goto loc_8212D658;
	// b 0x8212d640
	goto loc_8212D640;
loc_8212D628:
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8212d7c8
	ctx.lr = 0x8212D640;
	sub_8212D7C8(ctx, base);
loc_8212D640:
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8212d7c8
	ctx.lr = 0x8212D658;
	sub_8212D7C8(ctx, base);
loc_8212D658:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8211fcb8
	ctx.lr = 0x8212D660;
	sub_8211FCB8(ctx, base);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8212c610
	ctx.lr = 0x8212D66C;
	sub_8212C610(ctx, base);
	// cmpwi cr6,r27,30
	ctx.cr6.compare<int32_t>(r27.s32, 30, ctx.xer);
	// beq cr6,0x8212d760
	if (ctx.cr6.eq) goto loc_8212D760;
	// cmpwi cr6,r27,31
	ctx.cr6.compare<int32_t>(r27.s32, 31, ctx.xer);
	// beq cr6,0x8212d718
	if (ctx.cr6.eq) goto loc_8212D718;
	// cmpwi cr6,r27,33
	ctx.cr6.compare<int32_t>(r27.s32, 33, ctx.xer);
	// beq cr6,0x8212d6dc
	if (ctx.cr6.eq) goto loc_8212D6DC;
	// cmpwi cr6,r27,67
	ctx.cr6.compare<int32_t>(r27.s32, 67, ctx.xer);
	// ble cr6,0x8212d7ac
	if (!ctx.cr6.gt) goto loc_8212D7AC;
	// cmpwi cr6,r27,70
	ctx.cr6.compare<int32_t>(r27.s32, 70, ctx.xer);
	// bgt cr6,0x8212d7ac
	if (ctx.cr6.gt) goto loc_8212D7AC;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// sth r3,104(r1)
	REX_STORE_U16(ctx.r1.u32 + 104, ctx.r3.u16);
	// subfic r10,r27,75
	ctx.xer.ca = r27.u32 <= 75;
	ctx.r10.u64 = static_cast<uint64_t>(75) - r27.u64;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r11,10804
	ctx.r11.s64 = ctx.r11.s64 + 10804;
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// addi r3,r10,15284
	ctx.r3.s64 = ctx.r10.s64 + 15284;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// sth r11,106(r1)
	REX_STORE_U16(ctx.r1.u32 + 106, ctx.r11.u16);
	// b 0x8212d7a0
	goto loc_8212D7A0;
loc_8212D6DC:
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r10,r10,10804
	ctx.r10.s64 = ctx.r10.s64 + 10804;
	// sth r3,136(r1)
	REX_STORE_U16(ctx.r1.u32 + 136, ctx.r3.u16);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// stw r29,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r29.u32);
	// lwzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	// stw r29,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r29.u32);
	// sth r11,138(r1)
	REX_STORE_U16(ctx.r1.u32 + 138, ctx.r11.u16);
	// b 0x8212d798
	goto loc_8212D798;
loc_8212D718:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// sth r3,168(r1)
	REX_STORE_U16(ctx.r1.u32 + 168, ctx.r3.u16);
	// li r10,3
	ctx.r10.s64 = 3;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r11,r11,10804
	ctx.r11.s64 = ctx.r11.s64 + 10804;
	// stfs f31,164(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r10,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// addi r9,r25,1
	ctx.r9.s64 = r25.s64 + 1;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// stw r31,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r31.u32);
	// stw r9,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r29,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r29.u32);
	// addi r3,r10,15284
	ctx.r3.s64 = ctx.r10.s64 + 15284;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// stw r29,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, r29.u32);
	// sth r11,170(r1)
	REX_STORE_U16(ctx.r1.u32 + 170, ctx.r11.u16);
	// b 0x8212d7a0
	goto loc_8212D7A0;
loc_8212D760:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// stfs f31,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stfs f31,196(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// addi r11,r11,10804
	ctx.r11.s64 = ctx.r11.s64 + 10804;
	// sth r3,200(r1)
	REX_STORE_U16(ctx.r1.u32 + 200, ctx.r3.u16);
	// stw r31,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r31.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r10,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// stw r26,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, r26.u32);
	// stw r29,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, r29.u32);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// stw r29,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, r29.u32);
	// sth r11,202(r1)
	REX_STORE_U16(ctx.r1.u32 + 202, ctx.r11.u16);
loc_8212D798:
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r3,r9,15284
	ctx.r3.s64 = ctx.r9.s64 + 15284;
loc_8212D7A0:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82203fe0
	ctx.lr = 0x8212D7A8;
	sub_82203FE0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8212D7AC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8212d7b8
	goto loc_8212D7B8;
loc_8212D7B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8212D7B8:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82135DC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82135DC8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r7,r11,23912
	ctx.r7.s64 = ctx.r11.s64 + 23912;
	// lwz r11,48(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82135e80
	if (ctx.cr6.eq) goto loc_82135E80;
	// lwz r11,20(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lwz r30,76(r7)
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 76);
	// lwz r5,32(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// lwz r4,28(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// addi r31,r10,22000
	r31.s64 = ctx.r10.s64 + 22000;
	// beq cr6,0x82135e0c
	if (ctx.cr6.eq) goto loc_82135E0C;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x82135e6c
	if (!ctx.cr6.eq) goto loc_82135E6C;
loc_82135E0C:
	// mulli r11,r30,54
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(54));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r10,r31,144
	ctx.r10.s64 = r31.s64 + 144;
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82135e40
	if (!ctx.cr0.gt) goto loc_82135E40;
	// lfs f0,84(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82135ea4
	goto loc_82135EA4;
loc_82135E40:
	// mulli r11,r30,324
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(324));
	// li r6,0
	ctx.r6.s64 = 0;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// bl 0x82133d38
	ctx.lr = 0x82135E50;
	sub_82133D38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x82135e6c
	if (ctx.cr0.gt) goto loc_82135E6C;
	// lfs f0,84(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82135ea4
	goto loc_82135EA4;
loc_82135E6C:
	// mulli r11,r30,324
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(324));
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// bl 0x82133d38
	ctx.lr = 0x82135E7C;
	sub_82133D38(ctx, base);
	// b 0x82135ea4
	goto loc_82135EA4;
loc_82135E80:
	// lwz r11,76(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 76);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r5,24(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 24);
	// addi r10,r10,21824
	ctx.r10.s64 = ctx.r10.s64 + 21824;
	// lwz r4,20(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// mulli r11,r11,88
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(88));
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82133180
	ctx.lr = 0x82135EA4;
	sub_82133180(ctx, base);
loc_82135EA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8213F980) {
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
	ctx.lr = 0x8213F9A8;
	sub_821FF668(ctx, base);
	// lis r30,-32169
	r30.s64 = -2108227584;
	// lwz r31,23876(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 23876);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8213f9c8
	if (ctx.cr6.eq) goto loc_8213F9C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e48c0
	ctx.lr = 0x8213F9C0;
	sub_820E48C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x8213F9C8;
	sub_822C80A8(ctx, base);
loc_8213F9C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23876(r30)
	REX_STORE_U32(r30.u32 + 23876, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82141538) {
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
	ctx.lr = 0x82141540;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r29,r11,23232
	r29.s64 = ctx.r11.s64 + 23232;
	// li r28,0
	r28.s64 = 0;
	// addi r26,r10,22984
	r26.s64 = ctx.r10.s64 + 22984;
	// lwz r31,4(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 4);
loc_8214155C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82141560:
	// li r27,0
	r27.s64 = 0;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
loc_82141568:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82132ef8
	ctx.lr = 0x82141578;
	sub_82132EF8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821415d0
	if (!ctx.cr6.eq) goto loc_821415D0;
	// lbzx r11,r26,r28
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + r28.u32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// lis r9,16384
	ctx.r9.s64 = 1073741824;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r11,r11,58
	ctx.r11.s64 = ctx.r11.s64 + 58;
	// lis r10,-4096
	ctx.r10.s64 = -268435456;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r10.u32);
	// lwz r31,4(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 4);
loc_821415D0:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(r27.s32, 4, ctx.xer);
	// blt cr6,0x82141568
	if (ctx.cr6.lt) goto loc_82141568;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// blt cr6,0x82141560
	if (ctx.cr6.lt) goto loc_82141560;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpwi cr6,r28,16
	ctx.cr6.compare<int32_t>(r28.s32, 16, ctx.xer);
	// blt cr6,0x8214155c
	if (ctx.cr6.lt) goto loc_8214155C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82149B80) {
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
	ctx.lr = 0x82149B88;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,48
	ctx.r4.s64 = ctx.r3.s64 + 48;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x820e0af8
	ctx.lr = 0x82149BA4;
	sub_820E0AF8(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x820e0590
	ctx.lr = 0x82149BBC;
	sub_820E0590(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e0250
	ctx.lr = 0x82149BC8;
	sub_820E0250(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x820e0590
	ctx.lr = 0x82149BE0;
	sub_820E0590(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f31,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x820e1528
	ctx.lr = 0x82149C0C;
	sub_820E1528(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1890
	ctx.lr = 0x82149C20;
	sub_820E1890(ctx, base);
	// lha r11,20(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 20));
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r30,r11,r29
	r30.u64 = ctx.r11.u64 + r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e0af8
	ctx.lr = 0x82149C38;
	sub_820E0AF8(ctx, base);
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x820e0af8
	ctx.lr = 0x82149C44;
	sub_820E0AF8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x820e0590
	ctx.lr = 0x82149C54;
	sub_820E0590(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 48, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 52, temp.u32);
	// lfs f0,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 56, temp.u32);
	// stfs f31,60(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 60, temp.u32);
	// lha r11,22(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 22));
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x820e0368
	ctx.lr = 0x82149C88;
	sub_820E0368(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8214CE58) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,-19240
	ctx.r6.s64 = ctx.r10.s64 + -19240;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x821f7d50
	ctx.lr = 0x8214CE9C;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214cebc
	if (ctx.cr0.eq) goto loc_8214CEBC;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r31,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-19368
	ctx.r10.s64 = ctx.r10.s64 + -19368;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8214cec0
	goto loc_8214CEC0;
loc_8214CEBC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8214CEC0:
	// addi r8,r31,32
	ctx.r8.s64 = r31.s64 + 32;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r10,r10,-7072
	ctx.r10.s64 = ctx.r10.s64 + -7072;
	// ori r9,r9,3696
	ctx.r9.u64 = ctx.r9.u64 | 3696;
	// stwx r11,r8,r30
	REX_STORE_U32(ctx.r8.u32 + r30.u32, ctx.r11.u32);
	// addi r11,r10,19420
	ctx.r11.s64 = ctx.r10.s64 + 19420;
	// mullw r9,r31,r9
	ctx.r9.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_8214F2A0) {
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
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,68(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// ori r11,r11,3696
	ctx.r11.u64 = ctx.r11.u64 | 3696;
	// addi r9,r9,-7072
	ctx.r9.s64 = ctx.r9.s64 + -7072;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lbzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// addi r11,r10,-28232
	ctx.r11.s64 = ctx.r10.s64 + -28232;
	// mulli r10,r9,160
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(160));
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82202540
	ctx.lr = 0x8214F2F4;
	sub_82202540(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82200a98
	ctx.lr = 0x8214F300;
	sub_82200A98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82200a38
	ctx.lr = 0x8214F308;
	sub_82200A38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f1,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f12,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f12.f64 = double(temp.f32);
	// stb r8,140(r31)
	REX_STORE_U8(r31.u32 + 140, ctx.r8.u8);
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-18884(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -18884);
	ctx.f13.f64 = double(temp.f32);
	// stfs f12,116(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// stfs f13,128(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f13,132(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
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

DEFINE_REX_FUNC(sub_82152298) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,24293(r10)
	REX_STORE_U8(ctx.r10.u32 + 24293, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821523E0) {
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
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r3,5624
	ctx.r11.s64 = ctx.r3.s64 + 5624;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,1996(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,-19588
	ctx.r9.s64 = ctx.r9.s64 + -19588;
loc_82152414:
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// sth r10,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// sth r10,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r10.u16);
	// sth r10,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r10.u16);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// sth r10,24(r11)
	REX_STORE_U16(ctx.r11.u32 + 24, ctx.r10.u16);
	// sth r10,26(r11)
	REX_STORE_U16(ctx.r11.u32 + 26, ctx.r10.u16);
	// stfsu f0,28(r11)
	ctx.fpscr.disableFlushMode();
	ea = 28 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82152414
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82152414;
	// addi r3,r31,5684
	ctx.r3.s64 = r31.s64 + 5684;
	// bl 0x8214c818
	ctx.lr = 0x82152440;
	sub_8214C818(ctx, base);
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

DEFINE_REX_FUNC(sub_82157FF8) {
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
	ctx.lr = 0x82158000;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x822d4f28
	ctx.lr = 0x82158008;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821b0030
	ctx.lr = 0x82158018;
	sub_821B0030(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82158034
	if (ctx.cr6.eq) goto loc_82158034;
	// bl 0x821523e0
	ctx.lr = 0x82158030;
	sub_821523E0(ctx, base);
	// b 0x82158038
	goto loc_82158038;
loc_82158034:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82158038:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// stw r3,116(r30)
	REX_STORE_U32(r30.u32 + 116, ctx.r3.u32);
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r8,r11,-7176
	ctx.r8.s64 = ctx.r11.s64 + -7176;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// li r25,1
	r25.s64 = 1;
	// stb r31,7704(r10)
	REX_STORE_U8(ctx.r10.u32 + 7704, r31.u8);
	// addi r23,r9,432
	r23.s64 = ctx.r9.s64 + 432;
	// lwz r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x821580cc
	if (ctx.cr6.eq) goto loc_821580CC;
	// li r5,5624
	ctx.r5.s64 = 5624;
	// lwz r3,116(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 116);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82158078;
	sub_822D5870(ctx, base);
	// lwz r10,116(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 116);
	// lis r11,19283
	ctx.r11.s64 = 1263730688;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r11,r11,17740
	ctx.r11.u64 = ctx.r11.u64 | 17740;
	// ori r4,r4,38912
	ctx.r4.u64 = ctx.r4.u64 | 38912;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 116);
	// stw r29,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r29.u32);
	// bl 0x821af9a0
	ctx.lr = 0x821580A0;
	sub_821AF9A0(ctx, base);
	// lha r11,30(r23)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r23.u32 + 30));
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// blt cr6,0x821580c4
	if (ctx.cr6.lt) goto loc_821580C4;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// ble cr6,0x821580cc
	if (!ctx.cr6.gt) goto loc_821580CC;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// ble cr6,0x821580c4
	if (!ctx.cr6.gt) goto loc_821580C4;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x821580cc
	if (!ctx.cr6.gt) goto loc_821580CC;
loc_821580C4:
	// sth r25,100(r30)
	REX_STORE_U16(r30.u32 + 100, r25.u16);
	// b 0x821580d0
	goto loc_821580D0;
loc_821580CC:
	// sth r31,100(r30)
	REX_STORE_U16(r30.u32 + 100, r31.u16);
loc_821580D0:
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// stb r31,102(r30)
	REX_STORE_U8(r30.u32 + 102, r31.u8);
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r9,336(r30)
	REX_STORE_U32(r30.u32 + 336, ctx.r9.u32);
	// stb r31,24293(r10)
	REX_STORE_U8(ctx.r10.u32 + 24293, r31.u8);
	// bl 0x82152178
	ctx.lr = 0x821580EC;
	sub_82152178(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r26,5628
	r26.s64 = 5628;
	// addi r22,r11,-7072
	r22.s64 = ctx.r11.s64 + -7072;
	// addi r24,r30,120
	r24.s64 = r30.s64 + 120;
	// addi r27,r22,19420
	r27.s64 = r22.s64 + 19420;
	// addi r28,r30,104
	r28.s64 = r30.s64 + 104;
loc_82158104:
	// lbz r11,-19414(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + -19414);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8215817c
	if (!ctx.cr0.eq) goto loc_8215817C;
	// sth r25,-12(r28)
	REX_STORE_U16(r28.u32 + -12, r25.u16);
	// lhz r11,-19280(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + -19280);
	// sth r11,152(r28)
	REX_STORE_U16(r28.u32 + 152, ctx.r11.u16);
	// lha r11,30(r23)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r23.u32 + 30));
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82158138
	if (ctx.cr6.eq) goto loc_82158138;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82158138
	if (ctx.cr6.eq) goto loc_82158138;
	// sth r25,-8(r28)
	REX_STORE_U16(r28.u32 + -8, r25.u16);
	// b 0x821581b8
	goto loc_821581B8;
loc_82158138:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82158168
	if (!ctx.cr6.eq) goto loc_82158168;
	// sth r31,-8(r28)
	REX_STORE_U16(r28.u32 + -8, r31.u16);
	// sth r31,8(r28)
	REX_STORE_U16(r28.u32 + 8, r31.u16);
	// lha r11,30(r23)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r23.u32 + 30));
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x82158174
	goto loc_82158174;
loc_82158168:
	// sth r25,-8(r28)
	REX_STORE_U16(r28.u32 + -8, r25.u16);
	// sth r25,8(r28)
	REX_STORE_U16(r28.u32 + 8, r25.u16);
	// lwz r11,-2952(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -2952);
loc_82158174:
	// sth r11,0(r28)
	REX_STORE_U16(r28.u32 + 0, ctx.r11.u16);
	// b 0x821581b8
	goto loc_821581B8;
loc_8215817C:
	// li r11,6
	ctx.r11.s64 = 6;
	// sth r31,-12(r28)
	REX_STORE_U16(r28.u32 + -12, r31.u16);
	// sth r11,-8(r28)
	REX_STORE_U16(r28.u32 + -8, ctx.r11.u16);
	// lha r11,30(r23)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r23.u32 + 30));
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x821581b0
	if (ctx.cr6.eq) goto loc_821581B0;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x821581a8
	if (!ctx.cr6.eq) goto loc_821581A8;
	// lwz r11,80(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821581b0
	if (!ctx.cr6.eq) goto loc_821581B0;
loc_821581A8:
	// sth r25,152(r28)
	REX_STORE_U16(r28.u32 + 152, r25.u16);
	// b 0x821581b8
	goto loc_821581B8;
loc_821581B0:
	// lhz r11,-19280(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + -19280);
	// sth r11,152(r28)
	REX_STORE_U16(r28.u32 + 152, ctx.r11.u16);
loc_821581B8:
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 116);
	// li r4,29
	ctx.r4.s64 = 29;
	// add r29,r26,r11
	r29.u64 = r26.u64 + ctx.r11.u64;
	// stw r29,0(r24)
	REX_STORE_U32(r24.u32 + 0, r29.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r11,r26,r11
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821581DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821581F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r10,-19274(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + -19274);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r10,18(r29)
	REX_STORE_U16(r29.u32 + 18, ctx.r10.u16);
	// lhz r10,-19274(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + -19274);
	// sth r31,20(r29)
	REX_STORE_U16(r29.u32 + 20, r31.u16);
	// sth r10,16(r29)
	REX_STORE_U16(r29.u32 + 16, ctx.r10.u16);
	// beq cr6,0x82158218
	if (ctx.cr6.eq) goto loc_82158218;
	// stb r31,188(r11)
	REX_STORE_U8(ctx.r11.u32 + 188, r31.u8);
loc_82158218:
	// addi r26,r26,28
	r26.s64 = r26.s64 + 28;
	// addis r27,r27,1
	r27.s64 = r27.s64 + 65536;
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// addi r27,r27,3696
	r27.s64 = r27.s64 + 3696;
	// cmpwi cr6,r26,5656
	ctx.cr6.compare<int32_t>(r26.s32, 5656, ctx.xer);
	// ble cr6,0x82158104
	if (!ctx.cr6.gt) goto loc_82158104;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// addi r11,r11,-21584
	ctx.r11.s64 = ctx.r11.s64 + -21584;
	// lis r8,-32169
	ctx.r8.s64 = -2108227584;
	// addi r10,r11,-1120
	ctx.r10.s64 = ctx.r11.s64 + -1120;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r10,24308(r9)
	REX_STORE_U32(ctx.r9.u32 + 24308, ctx.r10.u32);
	// lwz r10,116(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 116);
	// addi r10,r10,5684
	ctx.r10.s64 = ctx.r10.s64 + 5684;
	// stw r10,260(r30)
	REX_STORE_U32(r30.u32 + 260, ctx.r10.u32);
	// stw r11,24300(r8)
	REX_STORE_U32(ctx.r8.u32 + 24300, ctx.r11.u32);
	// stw r31,88(r30)
	REX_STORE_U32(r30.u32 + 88, r31.u32);
	// stw r31,84(r30)
	REX_STORE_U32(r30.u32 + 84, r31.u32);
	// sth r7,18(r30)
	REX_STORE_U16(r30.u32 + 18, ctx.r7.u16);
	// stw r31,324(r30)
	REX_STORE_U32(r30.u32 + 324, r31.u32);
	// stw r31,320(r30)
	REX_STORE_U32(r30.u32 + 320, r31.u32);
	// stw r31,132(r30)
	REX_STORE_U32(r30.u32 + 132, r31.u32);
	// stw r31,128(r30)
	REX_STORE_U32(r30.u32 + 128, r31.u32);
	// sth r31,110(r30)
	REX_STORE_U16(r30.u32 + 110, r31.u16);
	// sth r31,108(r30)
	REX_STORE_U16(r30.u32 + 108, r31.u16);
	// stw r31,228(r30)
	REX_STORE_U32(r30.u32 + 228, r31.u32);
	// stw r31,224(r30)
	REX_STORE_U32(r30.u32 + 224, r31.u32);
	// lhz r11,30(r23)
	ctx.r11.u64 = REX_LOAD_U16(r23.u32 + 30);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x82158324
	if (!ctx.cr6.eq) goto loc_82158324;
	// lwz r11,36(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 36);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x821582cc
	if (ctx.cr6.eq) goto loc_821582CC;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x821582c4
	if (ctx.cr6.eq) goto loc_821582C4;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x821582bc
	if (ctx.cr6.eq) goto loc_821582BC;
	// li r26,4
	r26.s64 = 4;
	// b 0x821582d0
	goto loc_821582D0;
loc_821582BC:
	// li r26,12
	r26.s64 = 12;
	// b 0x821582d0
	goto loc_821582D0;
loc_821582C4:
	// li r26,11
	r26.s64 = 11;
	// b 0x821582d0
	goto loc_821582D0;
loc_821582CC:
	// li r26,10
	r26.s64 = 10;
loc_821582D0:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// mr r29,r31
	r29.u64 = r31.u64;
	// addi r27,r11,28096
	r27.s64 = ctx.r11.s64 + 28096;
loc_821582DC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x821746f8
	ctx.lr = 0x821582F0;
	sub_821746F8(ctx, base);
	// lwz r28,144(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r28,999
	ctx.cr6.compare<int32_t>(r28.s32, 999, ctx.xer);
	// ble cr6,0x82158300
	if (!ctx.cr6.gt) goto loc_82158300;
	// li r28,999
	r28.s64 = 999;
loc_82158300:
	// lbz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 128);
	// bl 0x821b30e0
	ctx.lr = 0x82158308;
	sub_821B30E0(ctx, base);
	// addi r11,r3,170
	ctx.r11.s64 = ctx.r3.s64 + 170;
	// clrlwi r10,r28,16
	ctx.r10.u64 = r28.u32 & 0xFFFF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,21
	ctx.cr6.compare<int32_t>(r29.s32, 21, ctx.xer);
	// sthx r10,r11,r30
	REX_STORE_U16(ctx.r11.u32 + r30.u32, ctx.r10.u16);
	// blt cr6,0x821582dc
	if (ctx.cr6.lt) goto loc_821582DC;
loc_82158324:
	// sth r31,308(r30)
	REX_STORE_U16(r30.u32 + 308, r31.u16);
	// lha r11,30(r23)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r23.u32 + 30));
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82158344
	if (ctx.cr6.eq) goto loc_82158344;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82158344
	if (ctx.cr6.eq) goto loc_82158344;
	// sth r31,312(r30)
	REX_STORE_U16(r30.u32 + 312, r31.u16);
	// b 0x82158348
	goto loc_82158348;
loc_82158344:
	// sth r25,312(r30)
	REX_STORE_U16(r30.u32 + 312, r25.u16);
loc_82158348:
	// stw r31,408(r30)
	REX_STORE_U32(r30.u32 + 408, r31.u32);
	// lis r28,-32166
	r28.s64 = -2108030976;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r29,r9,7856
	r29.s64 = ctx.r9.s64 + 7856;
	// lfs f30,15628(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15628);
	f30.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fmr f6,f30
	ctx.f6.f64 = f30.f64;
	// lfs f28,15632(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15632);
	f28.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f29,16032(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16032);
	f29.f64 = double(temp.f32);
	// fmr f5,f28
	ctx.f5.f64 = f28.f64;
	// lfs f27,16036(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16036);
	f27.f64 = double(temp.f32);
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// fmr f3,f27
	ctx.f3.f64 = f27.f64;
	// lwz r11,7840(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 7840);
	// lfs f1,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x821eb750
	ctx.lr = 0x821583AC;
	sub_821EB750(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r11,7840(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 7840);
	// addi r3,r29,5040
	ctx.r3.s64 = r29.s64 + 5040;
	// fmr f6,f30
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = f30.f64;
	// li r10,1
	ctx.r10.s64 = 1;
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// lfs f25,-17208(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -17208);
	f25.f64 = double(temp.f32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// lfs f26,29700(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 29700);
	f26.f64 = double(temp.f32);
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// lfs f2,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f26
	ctx.f3.f64 = f26.f64;
	// lfs f1,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// fmr f5,f25
	ctx.f5.f64 = f25.f64;
	// bl 0x821eb750
	ctx.lr = 0x821583F0;
	sub_821EB750(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r11,7840(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 7840);
	// addi r3,r29,10080
	ctx.r3.s64 = r29.s64 + 10080;
	// li r10,1
	ctx.r10.s64 = 1;
	// fmr f6,f30
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = f30.f64;
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// fmr f3,f26
	ctx.f3.f64 = f26.f64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// lfs f24,-18420(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -18420);
	f24.f64 = double(temp.f32);
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// lfs f2,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// fmr f5,f24
	ctx.f5.f64 = f24.f64;
	// lfs f1,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821eb750
	ctx.lr = 0x8215842C;
	sub_821EB750(ctx, base);
	// lwz r11,7840(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 7840);
	// addi r3,r29,15120
	ctx.r3.s64 = r29.s64 + 15120;
	// li r10,1
	ctx.r10.s64 = 1;
	// fmr f6,f30
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = f30.f64;
	// fmr f5,f28
	ctx.f5.f64 = f28.f64;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// fmr f3,f27
	ctx.f3.f64 = f27.f64;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// lfs f2,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821eb750
	ctx.lr = 0x82158460;
	sub_821EB750(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f6,f30
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = f30.f64;
	// fmr f5,f28
	ctx.f5.f64 = f28.f64;
	// li r10,1
	ctx.r10.s64 = 1;
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// fmr f3,f27
	ctx.f3.f64 = f27.f64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821eb750
	ctx.lr = 0x82158498;
	sub_821EB750(ctx, base);
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fmr f6,f30
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = f30.f64;
	// addi r3,r29,5040
	ctx.r3.s64 = r29.s64 + 5040;
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// fmr f3,f26
	ctx.f3.f64 = f26.f64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmr f5,f25
	ctx.f5.f64 = f25.f64;
	// bl 0x821eb750
	ctx.lr = 0x821584C8;
	sub_821EB750(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r29,10080
	ctx.r3.s64 = r29.s64 + 10080;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// fmr f6,f30
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = f30.f64;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmr f5,f24
	ctx.f5.f64 = f24.f64;
	// fmr f3,f26
	ctx.f3.f64 = f26.f64;
	// bl 0x821eb750
	ctx.lr = 0x821584F8;
	sub_821EB750(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// addi r3,r29,15120
	ctx.r3.s64 = r29.s64 + 15120;
	// fmr f6,f30
	ctx.f6.f64 = f30.f64;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// fmr f5,f28
	ctx.f5.f64 = f28.f64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// fmr f3,f27
	ctx.f3.f64 = f27.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821eb750
	ctx.lr = 0x82158528;
	sub_821EB750(ctx, base);
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
	ctx.lr = 0x8215853C;
	sub_821FF668(ctx, base);
	// bl 0x82187b58
	ctx.lr = 0x82158540;
	sub_82187B58(ctx, base);
	// addi r4,r30,80
	ctx.r4.s64 = r30.s64 + 80;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x82188070
	ctx.lr = 0x8215854C;
	sub_82188070(ctx, base);
	// lhz r11,30(r23)
	ctx.r11.u64 = REX_LOAD_U16(r23.u32 + 30);
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bne cr6,0x821586f8
	if (!ctx.cr6.eq) goto loc_821586F8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82187bc8
	ctx.lr = 0x82158560;
	sub_82187BC8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x821586f8
	if (ctx.cr0.eq) goto loc_821586F8;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lwz r11,100(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 100);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r10,r10,31868
	ctx.r10.s64 = ctx.r10.s64 + 31868;
	// lis r26,-32165
	r26.s64 = -2107965440;
	// addi r6,r8,-17216
	ctx.r6.s64 = ctx.r8.s64 + -17216;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,104(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 104);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lbz r11,116(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 116);
	// stw r11,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// lwz r3,-32480(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + -32480);
	// bl 0x821f7d50
	ctx.lr = 0x821585B0;
	sub_821F7D50(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821585f0
	if (ctx.cr0.eq) goto loc_821585F0;
	// lis r3,3840
	ctx.r3.s64 = 251658240;
	// lwz r4,344(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 344);
	// ori r3,r3,53
	ctx.r3.u64 = ctx.r3.u64 | 53;
	// bl 0x820e68b8
	ctx.lr = 0x821585C8;
	sub_820E68B8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82187bd8
	ctx.lr = 0x821585D4;
	sub_82187BD8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stw r24,84(r29)
	REX_STORE_U32(r29.u32 + 84, r24.u32);
	// addi r11,r11,-19260
	ctx.r11.s64 = ctx.r11.s64 + -19260;
	// stw r31,88(r29)
	REX_STORE_U32(r29.u32 + 88, r31.u32);
	// stw r10,80(r29)
	REX_STORE_U32(r29.u32 + 80, ctx.r10.u32);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_821585F0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,-32480(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + -32480);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,26832(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26832);
	ctx.f0.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f30,31152(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 31152);
	f30.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f29,-18464(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -18464);
	f29.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f29,120(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x821f7d50
	ctx.lr = 0x82158638;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82158670
	if (ctx.cr0.eq) goto loc_82158670;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addis r11,r22,1
	ctx.r11.s64 = r22.s64 + 65536;
	// lwz r9,116(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 116);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r6,r11,3644
	ctx.r6.s64 = ctx.r11.s64 + 3644;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,44(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// bl 0x82195c40
	ctx.lr = 0x82158664;
	sub_82195C40(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// stw r3,24288(r11)
	REX_STORE_U32(ctx.r11.u32 + 24288, ctx.r3.u32);
	// b 0x8215867c
	goto loc_8215867C;
loc_82158670:
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r31,24288(r10)
	REX_STORE_U32(ctx.r10.u32 + 24288, r31.u32);
loc_8215867C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f30,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f29,120(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-32480(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + -32480);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f0,30016(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 30016);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x821586B4;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821586ec
	if (ctx.cr0.eq) goto loc_821586EC;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addis r11,r22,2
	ctx.r11.s64 = r22.s64 + 131072;
	// lwz r9,116(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 116);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r6,r11,7340
	ctx.r6.s64 = ctx.r11.s64 + 7340;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,44(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// bl 0x82195c40
	ctx.lr = 0x821586E0;
	sub_82195C40(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// stw r3,24284(r11)
	REX_STORE_U32(ctx.r11.u32 + 24284, ctx.r3.u32);
	// b 0x821586f8
	goto loc_821586F8;
loc_821586EC:
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r31,24284(r10)
	REX_STORE_U32(ctx.r10.u32 + 24284, r31.u32);
loc_821586F8:
	// li r11,3600
	ctx.r11.s64 = 3600;
	// sth r31,328(r30)
	REX_STORE_U16(r30.u32 + 328, r31.u16);
	// stb r31,332(r30)
	REX_STORE_U8(r30.u32 + 332, r31.u8);
	// sth r11,330(r30)
	REX_STORE_U16(r30.u32 + 330, ctx.r11.u16);
	// stw r25,28(r30)
	REX_STORE_U32(r30.u32 + 28, r25.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x822d4f74
	ctx.lr = 0x82158718;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82174DD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,196(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82174e00
	if (ctx.cr6.eq) goto loc_82174E00;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r3,128
	ctx.r9.s64 = ctx.r3.s64 + 128;
	// stw r10,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,136(r3)
	REX_STORE_U32(ctx.r3.u32 + 136, ctx.r10.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,140(r3)
	REX_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
loc_82174E00:
	// lwz r11,200(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82176778) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82176780;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// lwz r8,212(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// lwz r9,220(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// lwz r10,228(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82176320
	ctx.lr = 0x821767A4;
	sub_82176320(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r30,156(r31)
	REX_STORE_U32(r31.u32 + 156, r30.u32);
	// li r11,99
	ctx.r11.s64 = 99;
	// stw r29,160(r31)
	REX_STORE_U32(r31.u32 + 160, r29.u32);
	// addi r10,r10,-5868
	ctx.r10.s64 = ctx.r10.s64 + -5868;
	// stw r28,164(r31)
	REX_STORE_U32(r31.u32 + 164, r28.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r30,0
	ctx.r10.u64 = __builtin_rotateleft32(r30.u32, 0);
	// cmpwi cr6,r10,99
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 99, ctx.xer);
	// ble cr6,0x821767d0
	if (!ctx.cr6.gt) goto loc_821767D0;
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
loc_821767D0:
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmpwi cr6,r10,59
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 59, ctx.xer);
	// ble cr6,0x821767e4
	if (!ctx.cr6.gt) goto loc_821767E4;
	// li r10,59
	ctx.r10.s64 = 59;
	// stw r10,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r10.u32);
loc_821767E4:
	// lwz r10,164(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r10,99
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 99, ctx.xer);
	// ble cr6,0x821767f4
	if (!ctx.cr6.gt) goto loc_821767F4;
	// stw r11,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r11.u32);
loc_821767F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821785E0) {
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
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,208
	ctx.r4.s64 = ctx.r3.s64 + 208;
	// addi r3,r3,192
	ctx.r3.s64 = ctx.r3.s64 + 192;
	// lwz r11,108(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,108(r10)
	REX_STORE_U32(ctx.r10.u32 + 108, ctx.r11.u32);
	// bl 0x820e2320
	ctx.lr = 0x82178610;
	sub_820E2320(ctx, base);
	// lfs f0,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// stw r11,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r11.u32);
	// bge cr6,0x82178648
	if (!ctx.cr6.lt) goto loc_82178648;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r11.u32);
	// b 0x821786e4
	goto loc_821786E4;
loc_82178648:
	// mulli r4,r11,144
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(144));
	// stw r4,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r4.u32);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r5,r31,180
	ctx.r5.s64 = r31.s64 + 180;
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// lwz r3,496(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 496);
	// bl 0x82190558
	ctx.lr = 0x82178664;
	sub_82190558(ctx, base);
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821786e4
	if (ctx.cr6.eq) goto loc_821786E4;
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,128(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 128);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r11.u32);
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// bl 0x821e7888
	ctx.lr = 0x82178698;
	sub_821E7888(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// stb r11,110(r31)
	REX_STORE_U8(r31.u32 + 110, ctx.r11.u8);
	// addic. r3,r31,224
	ctx.xer.ca = r31.u32 > 4294967071;
	ctx.r3.s64 = r31.s64 + 224;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// sth r11,88(r31)
	REX_STORE_U16(r31.u32 + 88, ctx.r11.u16);
	// lfs f0,16304(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16304);
	ctx.f0.f64 = double(temp.f32);
	// std r8,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r8.u64);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// stb r10,90(r31)
	REX_STORE_U8(r31.u32 + 90, ctx.r10.u8);
	// stb r11,91(r31)
	REX_STORE_U8(r31.u32 + 91, ctx.r11.u8);
	// beq 0x821786d0
	if (ctx.cr0.eq) goto loc_821786D0;
	// stw r3,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r3.u32);
loc_821786D0:
	// stb r10,109(r31)
	REX_STORE_U8(r31.u32 + 109, ctx.r10.u8);
	// stb r11,105(r31)
	REX_STORE_U8(r31.u32 + 105, ctx.r11.u8);
	// stb r11,106(r31)
	REX_STORE_U8(r31.u32 + 106, ctx.r11.u8);
	// stb r11,107(r31)
	REX_STORE_U8(r31.u32 + 107, ctx.r11.u8);
	// bl 0x820e01b0
	ctx.lr = 0x821786E4;
	sub_820E01B0(ctx, base);
loc_821786E4:
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

DEFINE_REX_FUNC(sub_8217B1D8) {
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
	ctx.lr = 0x8217B1E0;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lfs f0,152(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,13128
	ctx.r10.s64 = ctx.r10.s64 + 13128;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lbz r10,1827(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1827);
	// stw r11,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8217b238
	if (!ctx.cr6.gt) goto loc_8217B238;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,-32480(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// sth r9,40(r10)
	REX_STORE_U16(ctx.r10.u32 + 40, ctx.r9.u16);
loc_8217B238:
	// lwz r10,132(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8217b274
	if (!ctx.cr6.lt) goto loc_8217B274;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// b 0x8217b2b8
	goto loc_8217B2B8;
loc_8217B274:
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lfs f13,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_8217B2B8:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// addi r29,r31,156
	r29.s64 = r31.s64 + 156;
	// addi r30,r31,172
	r30.s64 = r31.s64 + 172;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// stfs f0,172(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// stfs f0,236(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 236, temp.u32);
	// lwa r11,132(r31)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r31.u32 + 132));
	// lfs f0,144(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f13,152(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// fmadds f31,f12,f13,f0
	f31.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// bl 0x8217afb8
	ctx.lr = 0x8217B318;
	sub_8217AFB8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f2,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x820e0d78
	ctx.lr = 0x8217B334;
	sub_820E0D78(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8217b3a0
	if (ctx.cr6.eq) goto loc_8217B3A0;
	// lfs f0,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 - ctx.f0.f64));
	// lfs f0,2356(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2356);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8217b3a0
	if (!ctx.cr6.gt) goto loc_8217B3A0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-5008
	ctx.r6.s64 = ctx.r11.s64 + -5008;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,777
	ctx.r4.s64 = 777;
	// bl 0x821f7d50
	ctx.lr = 0x8217B37C;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217b398
	if (ctx.cr0.eq) goto loc_8217B398;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,236(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 236);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// bl 0x8217b078
	ctx.lr = 0x8217B398;
	sub_8217B078(ctx, base);
loc_8217B398:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
loc_8217B3A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82181638) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
loc_8218163C:
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8218166c
	if (ctx.cr6.eq) goto loc_8218166C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x8218163c
	if (ctx.cr6.lt) goto loc_8218163C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8218166C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82181B20) {
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
	ctx.lr = 0x82181B28;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82184098
	ctx.lr = 0x82181B3C;
	sub_82184098(ctx, base);
	// li r31,0
	r31.s64 = 0;
loc_82181B40:
	// addi r11,r31,2
	ctx.r11.s64 = r31.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r28
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82181b5c
	if (!ctx.cr6.eq) goto loc_82181B5C;
	// bl 0x821837e0
	ctx.lr = 0x82181B5C;
	sub_821837E0(ctx, base);
loc_82181B5C:
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// clrlwi r31,r11,24
	r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(r31.u32, 2, ctx.xer);
	// blt cr6,0x82181b40
	if (ctx.cr6.lt) goto loc_82181B40;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82181680
	ctx.lr = 0x82181B74;
	sub_82181680(ctx, base);
	// li r31,0
	r31.s64 = 0;
loc_82181B78:
	// addi r11,r31,2
	ctx.r11.s64 = r31.s64 + 2;
	// lwz r4,52(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 52);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r28
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// bl 0x82182850
	ctx.lr = 0x82181B8C;
	sub_82182850(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// clrlwi r31,r11,24
	r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(r31.u32, 2, ctx.xer);
	// blt cr6,0x82181b78
	if (ctx.cr6.lt) goto loc_82181B78;
	// lis r11,3839
	ctx.r11.s64 = 251592704;
	// li r27,0
	r27.s64 = 0;
	// ori r24,r11,65535
	r24.u64 = ctx.r11.u64 | 65535;
	// li r26,0
	r26.s64 = 0;
	// mr r25,r24
	r25.u64 = r24.u64;
loc_82181BB0:
	// li r30,1
	r30.s64 = 1;
	// mr r31,r24
	r31.u64 = r24.u64;
	// li r29,0
	r29.s64 = 0;
loc_82181BBC:
	// addi r11,r29,2
	ctx.r11.s64 = r29.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r28
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82181c0c
	if (!ctx.cr6.eq) goto loc_82181C0C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82182788
	ctx.lr = 0x82181BE0;
	sub_82182788(ctx, base);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82181bf4
	if (ctx.cr0.eq) goto loc_82181BF4;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82181bf8
	if (!ctx.cr0.eq) goto loc_82181BF8;
loc_82181BF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82181BF8:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r30,r11,24
	r30.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r31.s32, ctx.xer);
	// bge cr6,0x82181c0c
	if (!ctx.cr6.lt) goto loc_82181C0C;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_82181C0C:
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82181bbc
	if (ctx.cr6.lt) goto loc_82181BBC;
	// addi r11,r26,3
	ctx.r11.s64 = r26.s64 + 3;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r28.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82181c4c
	if (!ctx.cr0.eq) goto loc_82181C4C;
	// rlwinm r11,r26,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// bge cr6,0x82181c4c
	if (!ctx.cr6.lt) goto loc_82181C4C;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_82181C4C:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82181c60
	if (ctx.cr0.eq) goto loc_82181C60;
	// cmpw cr6,r31,r25
	ctx.cr6.compare<int32_t>(r31.s32, r25.s32, ctx.xer);
	// bge cr6,0x82181c60
	if (!ctx.cr6.lt) goto loc_82181C60;
	// mr r25,r31
	r25.u64 = r31.u64;
loc_82181C60:
	// addi r11,r26,1
	ctx.r11.s64 = r26.s64 + 1;
	// clrlwi r27,r11,24
	r27.u64 = ctx.r11.u32 & 0xFF;
	// mr r26,r27
	r26.u64 = r27.u64;
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(r27.u32, 2, ctx.xer);
	// blt cr6,0x82181bb0
	if (ctx.cr6.lt) goto loc_82181BB0;
	// cmpw cr6,r25,r24
	ctx.cr6.compare<int32_t>(r25.s32, r24.s32, ctx.xer);
	// beq cr6,0x82181ca8
	if (ctx.cr6.eq) goto loc_82181CA8;
	// stw r25,56(r28)
	REX_STORE_U32(r28.u32 + 56, r25.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x82181ca8
	if (!ctx.cr6.gt) goto loc_82181CA8;
	// addi r29,r25,-1
	r29.s64 = r25.s64 + -1;
	// addi r30,r28,12
	r30.s64 = r28.s64 + 12;
	// li r31,2
	r31.s64 = 2;
loc_82181C94:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// bl 0x821820e0
	ctx.lr = 0x82181CA0;
	sub_821820E0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82181c94
	if (!ctx.cr0.eq) goto loc_82181C94;
loc_82181CA8:
	// lwz r11,52(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 52);
	// lwz r10,64(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 64);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82181d30
	if (!ctx.cr6.gt) goto loc_82181D30;
	// li r31,0
	r31.s64 = 0;
	// li r29,0
	r29.s64 = 0;
loc_82181CC0:
	// addi r11,r29,2
	ctx.r11.s64 = r29.s64 + 2;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r30,r28
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + r28.u32);
	// bl 0x821828b8
	ctx.lr = 0x82181CD0;
	sub_821828B8(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// bgt cr6,0x82181ce4
	if (ctx.cr6.gt) goto loc_82181CE4;
	// lwzx r3,r30,r28
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + r28.u32);
	// bl 0x821828b8
	ctx.lr = 0x82181CE0;
	sub_821828B8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82181CE4:
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// clrlwi r29,r11,24
	r29.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(r29.u32, 2, ctx.xer);
	// blt cr6,0x82181cc0
	if (ctx.cr6.lt) goto loc_82181CC0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x82181d30
	if (!ctx.cr6.gt) goto loc_82181D30;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82181D24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,52(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 52);
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// stw r11,64(r28)
	REX_STORE_U32(r28.u32 + 64, ctx.r11.u32);
loc_82181D30:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_821888B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x821888C0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// lbz r11,3393(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 3393);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82188964
	if (ctx.cr0.eq) goto loc_82188964;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r31,2984
	r29.s64 = r31.s64 + 2984;
loc_821888E4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82208a68
	ctx.lr = 0x821888EC;
	sub_82208A68(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82188950
	if (ctx.cr6.eq) goto loc_82188950;
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// lwz r11,2980(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2980);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82188950
	if (!ctx.cr6.eq) goto loc_82188950;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82188950
	if (ctx.cr6.eq) goto loc_82188950;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82188940
	if (!ctx.cr6.eq) goto loc_82188940;
	// lbz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82188930
	if (ctx.cr0.eq) goto loc_82188930;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82187d00
	ctx.lr = 0x82188930;
	sub_82187D00(ctx, base);
loc_82188930:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,32(r28)
	REX_STORE_U8(r28.u32 + 32, ctx.r10.u8);
	// b 0x8218894c
	goto loc_8218894C;
loc_82188940:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82188950
	if (!ctx.cr6.eq) goto loc_82188950;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8218894C:
	// stb r11,3392(r31)
	REX_STORE_U8(r31.u32 + 3392, ctx.r11.u8);
loc_82188950:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// blt cr6,0x821888e4
	if (ctx.cr6.lt) goto loc_821888E4;
	// bl 0x821d1ed0
	ctx.lr = 0x82188964;
	sub_821D1ED0(ctx, base);
loc_82188964:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8218B478) {
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
	// addi r11,r11,-32480
	ctx.r11.s64 = ctx.r11.s64 + -32480;
	// lwz r31,12(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218b4b4
	if (ctx.cr6.eq) goto loc_8218B4B4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8218b4b4
	if (!ctx.cr6.eq) goto loc_8218B4B4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8218B4B4:
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
	ctx.lr = 0x8218B4C8;
	sub_821FF668(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218b4dc
	if (ctx.cr6.eq) goto loc_8218B4DC;
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8218B4DC:
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

DEFINE_REX_FUNC(sub_8218E4B0) {
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
	// bl 0x8218e8c0
	ctx.lr = 0x8218E4C8;
	sub_8218E8C0(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r11,30580(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 30580);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218e4f8
	if (ctx.cr6.eq) goto loc_8218E4F8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8218e4f0
	if (ctx.cr6.eq) goto loc_8218E4F0;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// b 0x8218e4f4
	goto loc_8218E4F4;
loc_8218E4F0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8218E4F4:
	// bl 0x8218cab8
	ctx.lr = 0x8218E4F8;
	sub_8218CAB8(ctx, base);
loc_8218E4F8:
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

DEFINE_REX_FUNC(sub_8218F500) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8218f5ac
	if (ctx.cr6.eq) goto loc_8218F5AC;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8218f57c
	if (ctx.cr6.eq) goto loc_8218F57C;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x8218f5e4
	if (!ctx.cr6.eq) goto loc_8218F5E4;
	// li r11,12
	ctx.r11.s64 = 12;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stb r11,36(r3)
	REX_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,2656
	ctx.r6.s64 = ctx.r11.s64 + 2656;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r10,21688
	ctx.r7.s64 = ctx.r10.s64 + 21688;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x8218F564;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8218f5e4
	if (ctx.cr0.eq) goto loc_8218F5E4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8218f5e4
	goto loc_8218F5E4;
loc_8218F57C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r31,92
	ctx.r6.s64 = r31.s64 + 92;
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r11,2648
	ctx.r5.s64 = ctx.r11.s64 + 2648;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82205d38
	ctx.lr = 0x8218F5A8;
	sub_82205D38(ctx, base);
	// b 0x8218f5e4
	goto loc_8218F5E4;
loc_8218F5AC:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,2640
	ctx.r6.s64 = ctx.r10.s64 + 2640;
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
	ctx.lr = 0x8218F5D4;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8218f5e4
	if (ctx.cr0.eq) goto loc_8218F5E4;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// bl 0x822067c0
	ctx.lr = 0x8218F5E4;
	sub_822067C0(ctx, base);
loc_8218F5E4:
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
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

DEFINE_REX_FUNC(sub_821938A0) {
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
	ctx.lr = 0x821938A8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r26,-32480(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x82187b58
	ctx.lr = 0x821938BC;
	sub_82187B58(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82187bd8
	ctx.lr = 0x821938C4;
	sub_82187BD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r10,1
	ctx.r10.s64 = 1;
	// bne 0x821938e8
	if (!ctx.cr0.eq) goto loc_821938E8;
	// addi r11,r11,-7072
	ctx.r11.s64 = ctx.r11.s64 + -7072;
	// sth r10,42(r27)
	REX_STORE_U16(r27.u32 + 42, ctx.r10.u16);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r31,r11,3696
	r31.s64 = ctx.r11.s64 + 3696;
	// b 0x821938f0
	goto loc_821938F0;
loc_821938E8:
	// addi r31,r11,-7072
	r31.s64 = ctx.r11.s64 + -7072;
	// sth r10,40(r27)
	REX_STORE_U16(r27.u32 + 40, ctx.r10.u16);
loc_821938F0:
	// addis r4,r31,1
	ctx.r4.s64 = r31.s64 + 65536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r4,3644
	ctx.r4.s64 = ctx.r4.s64 + 3644;
	// bl 0x82188818
	ctx.lr = 0x82193900;
	sub_82188818(ctx, base);
	// addis r30,r31,1
	r30.s64 = r31.s64 + 65536;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,20
	ctx.r8.s64 = 20;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r30,r30,3668
	r30.s64 = r30.s64 + 3668;
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r28,0
	r28.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,31
	ctx.r9.s64 = 31;
	// li r8,30
	ctx.r8.s64 = 30;
	// stw r28,0(r30)
	REX_STORE_U32(r30.u32 + 0, r28.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r31,r28
	r31.u64 = r28.u64;
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
loc_8219395C:
	// lwzu r3,4(r29)
	ea = 4 + r29.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// bl 0x821dcfb8
	ctx.lr = 0x82193964;
	sub_821DCFB8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// slw r10,r3,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r31.u8 & 0x3F));
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(r31.s32, 8, ctx.xer);
	// blt cr6,0x8219395c
	if (ctx.cr6.lt) goto loc_8219395C;
	// bl 0x821fec88
	ctx.lr = 0x82193984;
	sub_821FEC88(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r11,31868
	ctx.r11.s64 = ctx.r11.s64 + 31868;
	// stw r3,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r3.u32);
	// stw r3,44(r27)
	REX_STORE_U32(r27.u32 + 44, ctx.r3.u32);
	// stw r10,28(r27)
	REX_STORE_U32(r27.u32 + 28, ctx.r10.u32);
	// stw r28,68(r26)
	REX_STORE_U32(r26.u32 + 68, r28.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82198DD8) {
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
	ctx.lr = 0x82198DE0;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f34
	ctx.lr = 0x82198DE8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,103
	ctx.r3.s64 = 103;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// bl 0x82191bb0
	ctx.lr = 0x82198E00;
	sub_82191BB0(ctx, base);
	// lwa r11,96(r31)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r31.u32 + 96));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwa r10,100(r31)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(r31.u32 + 100));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f30.f64 = double(temp.f32);
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// lfs f31,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f31.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f1,88(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r3,104(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 104);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x821918a0
	ctx.lr = 0x82198E68;
	sub_821918A0(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f11,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stw r3,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// li r3,102
	ctx.r3.s64 = 102;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-24312(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -24312);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f12,-19184(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19184);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,20484(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20484);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f0,f11,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x82191bb0
	ctx.lr = 0x82198ECC;
	sub_82191BB0(ctx, base);
	// stfs f1,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r3,104(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 104);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// li r4,21
	ctx.r4.s64 = 21;
	// bl 0x821918a0
	ctx.lr = 0x82198EE8;
	sub_821918A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// stfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// li r3,101
	ctx.r3.s64 = 101;
	// lfs f29,15968(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15968);
	f29.f64 = double(temp.f32);
	// stfs f29,96(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f29,100(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82191bb0
	ctx.lr = 0x82198F0C;
	sub_82191BB0(ctx, base);
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// lfs f13,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f30,124(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// lfs f28,19796(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 19796);
	f28.f64 = double(temp.f32);
	// stfs f1,120(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,104(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 104);
	// addi r4,r11,22
	ctx.r4.s64 = ctx.r11.s64 + 22;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + f28.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x821918a0
	ctx.lr = 0x82198F70;
	sub_821918A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r3.u32);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f27,2344(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2344);
	f27.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fsubs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 - f27.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-32480(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x82198FAC;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82198fc8
	if (ctx.cr0.eq) goto loc_82198FC8;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r6,152(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 152);
	// lwz r4,104(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 104);
	// bl 0x82198b18
	ctx.lr = 0x82198FC4;
	sub_82198B18(ctx, base);
	// b 0x82198fcc
	goto loc_82198FCC;
loc_82198FC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82198FCC:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// stfs f29,96(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stfs f29,100(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r4,168(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 168);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r3,104(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 104);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fsubs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 - f28.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x821919e8
	ctx.lr = 0x82199024;
	sub_821919E8(ctx, base);
	// stw r3,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r3.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822c80d0
	ctx.lr = 0x82199030;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8219904c
	if (ctx.cr0.eq) goto loc_8219904C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x820e7330
	ctx.lr = 0x82199044;
	sub_820E7330(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82199050
	goto loc_82199050;
loc_8219904C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82199050:
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822c80d0
	ctx.lr = 0x8219905C;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82199078
	if (ctx.cr0.eq) goto loc_82199078;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x820e7330
	ctx.lr = 0x82199070;
	sub_820E7330(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8219907c
	goto loc_8219907C;
loc_82199078:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8219907C:
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822c80d0
	ctx.lr = 0x82199088;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821990a0
	if (ctx.cr0.eq) goto loc_821990A0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x820e7330
	ctx.lr = 0x8219909C;
	sub_820E7330(ctx, base);
	// b 0x821990a4
	goto loc_821990A4;
loc_821990A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821990A4:
	// stw r3,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r3.u32);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 148);
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// addis r3,r10,3840
	ctx.r3.s64 = ctx.r10.s64 + 251658240;
	// addi r3,r3,15
	ctx.r3.s64 = ctx.r3.s64 + 15;
	// lwz r4,344(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821990C4;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,28260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28260);
	f30.f64 = double(temp.f32);
	// li r29,-1
	r29.s64 = -1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 128);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// lfs f29,2340(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2340);
	f29.f64 = double(temp.f32);
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// bl 0x820e7428
	ctx.lr = 0x821990F8;
	sub_820E7428(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lfs f12,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f28,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f28.f64 = double(temp.f32);
	// lfs f0,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lfs f0,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f2,f0,f28,f12
	ctx.f2.f64 = double(float(-std::fma(ctx.f0.f64, f28.f64, -ctx.f12.f64)));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f11
	ctx.f12.f64 = double(ctx.f11.s64);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fadds f1,f0,f27
	ctx.f1.f64 = double(float(ctx.f0.f64 + f27.f64));
	// bl 0x820e7380
	ctx.lr = 0x8219914C;
	sub_820E7380(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r4,160(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 132);
	// fmr f4,f29
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f29.f64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820e7428
	ctx.lr = 0x8219916C;
	sub_820E7428(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 132);
	// lfs f11,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4464(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4464);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lfs f0,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f2,f0,f28,f11
	ctx.f2.f64 = double(float(-std::fma(ctx.f0.f64, f28.f64, -ctx.f11.f64)));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f10
	ctx.f11.f64 = double(ctx.f10.s64);
	// frsp f0,f11
	ctx.f0.f64 = double(float(ctx.f11.f64));
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// bl 0x820e7380
	ctx.lr = 0x821991C0;
	sub_820E7380(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r5,164(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 164);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-7488
	ctx.r4.s64 = ctx.r11.s64 + -7488;
	// bl 0x822d55f8
	ctx.lr = 0x821991D4;
	sub_822D55F8(ctx, base);
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// fmr f4,f29
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f29.f64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820e7428
	ctx.lr = 0x821991F4;
	sub_820E7428(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lfs f10,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,26820(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26820);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f2,f13,f28,f10
	ctx.f2.f64 = double(float(-std::fma(ctx.f13.f64, f28.f64, -ctx.f10.f64)));
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f9
	ctx.f10.f64 = double(ctx.f9.s64);
	// frsp f13,f10
	ctx.f13.f64 = double(float(ctx.f10.f64));
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fsubs f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 - f27.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// bl 0x820e7380
	ctx.lr = 0x82199250;
	sub_820E7380(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f80
	ctx.lr = 0x8219925C;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821AA0F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x821AA100;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822097f8
	ctx.lr = 0x821AA130;
	sub_822097F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821aa150
	if (ctx.cr0.eq) goto loc_821AA150;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_821AA13C:
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82208848
	ctx.lr = 0x821AA144;
	sub_82208848(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed8
	return;
loc_821AA150:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,308
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 308, ctx.xer);
	// beq cr6,0x821aa168
	if (ctx.cr6.eq) goto loc_821AA168;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,87
	r31.u64 = r31.u64 | 87;
	// b 0x821aa13c
	goto loc_821AA13C;
loc_821AA168:
	// li r28,0
	r28.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x822c80c8
	ctx.lr = 0x821AA17C;
	sub_822C80C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822d5870
	ctx.lr = 0x821AA18C;
	sub_822D5870(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82209740
	ctx.lr = 0x821AA1A4;
	sub_82209740(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x821aa1c8
	if (!ctx.cr0.eq) goto loc_821AA1C8;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aa1c8
	if (ctx.cr6.eq) goto loc_821AA1C8;
	// li r5,308
	ctx.r5.s64 = 308;
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822091c8
	ctx.lr = 0x821AA1C8;
	sub_822091C8(ctx, base);
loc_821AA1C8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821aa1d8
	if (ctx.cr6.eq) goto loc_821AA1D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821AA1D8;
	sub_822C80A8(ctx, base);
loc_821AA1D8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x821aa1ec
	if (!ctx.cr6.eq) goto loc_821AA1EC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
	// b 0x821aa1f8
	goto loc_821AA1F8;
loc_821AA1EC:
	// cmplwi cr6,r29,18
	ctx.cr6.compare<uint32_t>(r29.u32, 18, ctx.xer);
	// bne cr6,0x821aa1f8
	if (!ctx.cr6.eq) goto loc_821AA1F8;
	// stw r28,40(r30)
	REX_STORE_U32(r30.u32 + 40, r28.u32);
loc_821AA1F8:
	// mr r31,r29
	r31.u64 = r29.u64;
	// b 0x821aa13c
	goto loc_821AA13C;
}

DEFINE_REX_FUNC(sub_821AFFA8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// b 0x821d6210
	sub_821D6210(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821B0B88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821B0B90;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lha r3,88(r3)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 88));
	// bl 0x821b09f0
	ctx.lr = 0x821B0BA0;
	sub_821B09F0(ctx, base);
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r10,432
	r29.s64 = ctx.r10.s64 + 432;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,44(r29)
	REX_STORE_U32(r29.u32 + 44, ctx.r11.u32);
	// bl 0x821afed8
	ctx.lr = 0x821B0BB8;
	sub_821AFED8(ctx, base);
	// lhz r11,30(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 30);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x821b0c50
	if (!ctx.cr6.eq) goto loc_821B0C50;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821b0be8
	if (ctx.cr6.eq) goto loc_821B0BE8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821b0c00
	if (!ctx.cr6.eq) goto loc_821B0C00;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x821afef0
	ctx.lr = 0x821B0BE0;
	sub_821AFEF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821b0bf4
	goto loc_821B0BF4;
loc_821B0BE8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x821afef0
	ctx.lr = 0x821B0BF0;
	sub_821AFEF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
loc_821B0BF4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212e440
	ctx.lr = 0x821B0C00;
	sub_8212E440(ctx, base);
loc_821B0C00:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f1090
	ctx.lr = 0x821B0C18;
	sub_820F1090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820ef838
	ctx.lr = 0x821B0C20;
	sub_820EF838(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c54e0
	ctx.lr = 0x821B0C2C;
	sub_821C54E0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f4,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x821ca5a0
	ctx.lr = 0x821B0C48;
	sub_821CA5A0(ctx, base);
	// bl 0x820efad8
	ctx.lr = 0x821B0C4C;
	sub_820EFAD8(ctx, base);
	// b 0x821b0c84
	goto loc_821B0C84;
loc_821B0C50:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f4,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f3,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,28(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x821ca5a0
	ctx.lr = 0x821B0C6C;
	sub_821CA5A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c54e0
	ctx.lr = 0x821B0C78;
	sub_821C54E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821cd2a8
	ctx.lr = 0x821B0C84;
	sub_821CD2A8(ctx, base);
loc_821B0C84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821B5C30) {
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
	ctx.lr = 0x821B5C38;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// lbz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 14);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821b5d64
	if (!ctx.cr0.gt) goto loc_821B5D64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x821b5ca8
	if (!ctx.cr6.gt) goto loc_821B5CA8;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x821b5c68
	if (ctx.cr6.eq) goto loc_821B5C68;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bne cr6,0x821b5d64
	if (!ctx.cr6.eq) goto loc_821B5D64;
loc_821B5C68:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// li r4,8
	ctx.r4.s64 = 8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r30,r11,26800
	r30.s64 = ctx.r11.s64 + 26800;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x821b5c88
	if (ctx.cr6.eq) goto loc_821B5C88;
	// li r4,17
	ctx.r4.s64 = 17;
loc_821B5C88:
	// bl 0x8216e158
	ctx.lr = 0x821B5C8C;
	sub_8216E158(ctx, base);
	// lbz r11,26(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 26);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x8216e1f8
	ctx.lr = 0x821B5C9C;
	sub_8216E1F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216e2e0
	ctx.lr = 0x821B5CA4;
	sub_8216E2E0(ctx, base);
	// b 0x821b5d64
	goto loc_821B5D64;
loc_821B5CA8:
	// lbz r11,27(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 27);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// ori r7,r9,3696
	ctx.r7.u64 = ctx.r9.u64 | 3696;
	// addi r9,r8,-7072
	ctx.r9.s64 = ctx.r8.s64 + -7072;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r30,r11,r9
	r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r4,8
	ctx.r4.s64 = 8;
	// stb r11,6(r30)
	REX_STORE_U8(r30.u32 + 6, ctx.r11.u8);
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// lwz r28,8(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r29,r11,26800
	r29.s64 = ctx.r11.s64 + 26800;
	// stw r27,5440(r30)
	REX_STORE_U32(r30.u32 + 5440, r27.u32);
	// stw r27,5424(r30)
	REX_STORE_U32(r30.u32 + 5424, r27.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// beq cr6,0x821b5d00
	if (ctx.cr6.eq) goto loc_821B5D00;
	// li r4,17
	ctx.r4.s64 = 17;
loc_821B5D00:
	// bl 0x8216e158
	ctx.lr = 0x821B5D04;
	sub_8216E158(ctx, base);
	// lbz r11,26(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 26);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x8216e1f8
	ctx.lr = 0x821B5D14;
	sub_8216E1F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8216e2e0
	ctx.lr = 0x821B5D1C;
	sub_8216E2E0(ctx, base);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r10,3
	ctx.r10.s64 = 3;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// stw r10,80(r30)
	REX_STORE_U32(r30.u32 + 80, ctx.r10.u32);
	// beq cr6,0x821b5d40
	if (ctx.cr6.eq) goto loc_821B5D40;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r27,352(r31)
	REX_STORE_U32(r31.u32 + 352, r27.u32);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// stb r10,14(r31)
	REX_STORE_U8(r31.u32 + 14, ctx.r10.u8);
loc_821B5D40:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,224(r31)
	REX_STORE_U32(r31.u32 + 224, r28.u32);
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// sth r10,30(r31)
	REX_STORE_U16(r31.u32 + 30, ctx.r10.u16);
	// stb r11,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r11.u8);
	// bl 0x821b2a70
	ctx.lr = 0x821B5D58;
	sub_821B2A70(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821d9620
	ctx.lr = 0x821B5D64;
	sub_821D9620(ctx, base);
loc_821B5D64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821BED40) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,164
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(164));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r11,r11,9120
	ctx.xer.ca = ctx.r11.u32 > 4294958175;
	ctx.r11.s64 = ctx.r11.s64 + 9120;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f1,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// bgt cr6,0x821bed7c
	if (ctx.cr6.gt) goto loc_821BED7C;
	// stfs f1,64(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// b 0x821beda4
	goto loc_821BEDA4;
loc_821BED7C:
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// lfs f13,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stfs f12,80(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// stfs f13,72(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 72, temp.u32);
loc_821BEDA4:
	// stfs f0,76(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BFBF0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
loc_821BFC0C:
	// mulli r11,r6,896
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(896));
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// addi r3,r11,7224
	ctx.r3.s64 = ctx.r11.s64 + 7224;
	// sth r6,7224(r11)
	REX_STORE_U16(ctx.r11.u32 + 7224, ctx.r6.u16);
	// blt cr6,0x821bfc4c
	if (ctx.cr6.lt) goto loc_821BFC4C;
	// bne cr6,0x821bfc64
	if (!ctx.cr6.eq) goto loc_821BFC64;
	// addi r11,r7,9448
	ctx.r11.s64 = ctx.r7.s64 + 9448;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,136(r3)
	REX_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// addi r10,r7,9612
	ctx.r10.s64 = ctx.r7.s64 + 9612;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r9,9448(r7)
	REX_STORE_U16(ctx.r7.u32 + 9448, ctx.r9.u16);
	// stw r10,140(r3)
	REX_STORE_U32(ctx.r3.u32 + 140, ctx.r10.u32);
	// sth r11,9612(r7)
	REX_STORE_U16(ctx.r7.u32 + 9612, ctx.r11.u16);
	// b 0x821bfc64
	goto loc_821BFC64;
loc_821BFC4C:
	// addi r11,r7,9120
	ctx.r11.s64 = ctx.r7.s64 + 9120;
	// addi r10,r7,9284
	ctx.r10.s64 = ctx.r7.s64 + 9284;
	// stw r11,136(r3)
	REX_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// sth r4,9120(r7)
	REX_STORE_U16(ctx.r7.u32 + 9120, ctx.r4.u16);
	// stw r10,140(r3)
	REX_STORE_U32(ctx.r3.u32 + 140, ctx.r10.u32);
	// sth r5,9284(r7)
	REX_STORE_U16(ctx.r7.u32 + 9284, ctx.r5.u16);
loc_821BFC64:
	// bl 0x821be4f8
	ctx.lr = 0x821BFC68;
	sub_821BE4F8(ctx, base);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x821bfc0c
	if (!ctx.cr6.gt) goto loc_821BFC0C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r4,9306(r7)
	REX_STORE_U16(ctx.r7.u32 + 9306, ctx.r4.u16);
	// sth r4,9142(r7)
	REX_STORE_U16(ctx.r7.u32 + 9142, ctx.r4.u16);
	// sth r11,9778(r7)
	REX_STORE_U16(ctx.r7.u32 + 9778, ctx.r11.u16);
	// sth r5,9634(r7)
	REX_STORE_U16(ctx.r7.u32 + 9634, ctx.r5.u16);
	// sth r5,9470(r7)
	REX_STORE_U16(ctx.r7.u32 + 9470, ctx.r5.u16);
	// sth r11,9798(r7)
	REX_STORE_U16(ctx.r7.u32 + 9798, ctx.r11.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C1730) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r3,8120
	ctx.r4.s64 = ctx.r3.s64 + 8120;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x821c1680
	sub_821C1680(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821C2598) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,2020(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2020);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x821c25c4
	if (!ctx.cr6.lt) goto loc_821C25C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821c25e0
	goto loc_821C25E0;
loc_821C25C4:
	// stfs f1,3444(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 3444, temp.u32);
	// addi r4,r31,3444
	ctx.r4.s64 = r31.s64 + 3444;
	// li r5,124
	ctx.r5.s64 = 124;
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// bl 0x822d5428
	ctx.lr = 0x821C25D8;
	sub_822D5428(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
loc_821C25E0:
	// std r11,3576(r31)
	REX_STORE_U64(r31.u32 + 3576, ctx.r11.u64);
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

DEFINE_REX_FUNC(sub_821C3190) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,320
	ctx.r9.s64 = 320;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,1552
	ctx.r10.s64 = ctx.r3.s64 + 1552;
	// stw r11,1560(r3)
	REX_STORE_U32(ctx.r3.u32 + 1560, ctx.r11.u32);
	// stw r11,1556(r3)
	REX_STORE_U32(ctx.r3.u32 + 1556, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821C31A8:
	// sth r11,22(r10)
	REX_STORE_U16(ctx.r10.u32 + 22, ctx.r11.u16);
	// sth r11,20(r10)
	REX_STORE_U16(ctx.r10.u32 + 20, ctx.r11.u16);
	// sth r11,18(r10)
	REX_STORE_U16(ctx.r10.u32 + 18, ctx.r11.u16);
	// sth r11,16(r10)
	REX_STORE_U16(ctx.r10.u32 + 16, ctx.r11.u16);
	// sth r11,14(r10)
	REX_STORE_U16(ctx.r10.u32 + 14, ctx.r11.u16);
	// sthu r11,12(r10)
	ea = 12 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x821c31a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C31A8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C3FA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x821C3FB0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r30,r11,432
	r30.s64 = ctx.r11.s64 + 432;
	// lwz r28,-32480(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// lhz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c3fdc
	if (!ctx.cr0.eq) goto loc_821C3FDC;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,40(r28)
	REX_STORE_U16(r28.u32 + 40, ctx.r11.u16);
	// b 0x821c4260
	goto loc_821C4260;
loc_821C3FDC:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// addi r31,r10,-7072
	r31.s64 = ctx.r10.s64 + -7072;
	// blt cr6,0x821c405c
	if (ctx.cr6.lt) goto loc_821C405C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x821c4114
	if (!ctx.cr6.gt) goto loc_821C4114;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// ble cr6,0x821c405c
	if (!ctx.cr6.gt) goto loc_821C405C;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// bgt cr6,0x821c405c
	if (ctx.cr6.gt) goto loc_821C405C;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lwz r11,220(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 220);
	// addi r4,r11,10532
	ctx.r4.s64 = ctx.r11.s64 + 10532;
	// lwz r11,7792(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 7792);
	// addi r3,r11,4464
	ctx.r3.s64 = ctx.r11.s64 + 4464;
	// lwz r11,4464(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4464);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C402C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r4,220(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 220);
	// addi r3,r11,-27648
	ctx.r3.s64 = ctx.r11.s64 + -27648;
	// bl 0x82125f50
	ctx.lr = 0x821C403C;
	sub_82125F50(ctx, base);
	// lwz r3,220(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 220);
	// bl 0x82122f18
	ctx.lr = 0x821C4044;
	sub_82122F18(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r3,r11,-7072
	ctx.r3.s64 = ctx.r11.s64 + -7072;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r4,r11,3696
	ctx.r4.s64 = ctx.r11.s64 + 3696;
	// bl 0x82126988
	ctx.lr = 0x821C4058;
	sub_82126988(ctx, base);
	// b 0x821c4260
	goto loc_821C4260;
loc_821C405C:
	// lbz r11,210(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 210);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c4090
	if (!ctx.cr0.eq) goto loc_821C4090;
	// addi r10,r31,10532
	ctx.r10.s64 = r31.s64 + 10532;
	// lwz r11,10532(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10532);
	// addi r9,r31,10548
	ctx.r9.s64 = r31.s64 + 10548;
	// lwz r10,10536(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10536);
	// lwz r9,10540(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 10540);
	// lwz r8,10544(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 10544);
	// stw r11,10548(r31)
	REX_STORE_U32(r31.u32 + 10548, ctx.r11.u32);
	// stw r10,10552(r31)
	REX_STORE_U32(r31.u32 + 10552, ctx.r10.u32);
	// stw r9,10556(r31)
	REX_STORE_U32(r31.u32 + 10556, ctx.r9.u32);
	// stw r8,10560(r31)
	REX_STORE_U32(r31.u32 + 10560, ctx.r8.u32);
loc_821C4090:
	// lis r29,-32166
	r29.s64 = -2108030976;
	// addi r4,r31,10548
	ctx.r4.s64 = r31.s64 + 10548;
	// lwz r11,7792(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 7792);
	// addi r3,r11,4464
	ctx.r3.s64 = ctx.r11.s64 + 4464;
	// lwz r11,4464(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4464);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C40B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3906
	ctx.r11.u64 = ctx.r11.u64 | 3906;
	// lbzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c40f4
	if (!ctx.cr0.eq) goto loc_821C40F4;
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// addis r10,r31,1
	ctx.r10.s64 = r31.s64 + 65536;
	// addi r9,r11,14228
	ctx.r9.s64 = ctx.r11.s64 + 14228;
	// addi r9,r10,14244
	ctx.r9.s64 = ctx.r10.s64 + 14244;
	// lwz r9,14228(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 14228);
	// lwz r8,14232(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 14232);
	// lwz r7,14236(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 14236);
	// lwz r11,14240(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 14240);
	// stw r9,14244(r10)
	REX_STORE_U32(ctx.r10.u32 + 14244, ctx.r9.u32);
	// stw r8,14248(r10)
	REX_STORE_U32(ctx.r10.u32 + 14248, ctx.r8.u32);
	// stw r7,14252(r10)
	REX_STORE_U32(ctx.r10.u32 + 14252, ctx.r7.u32);
	// stw r11,14256(r10)
	REX_STORE_U32(ctx.r10.u32 + 14256, ctx.r11.u32);
loc_821C40F4:
	// lwz r11,7792(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 7792);
	// addis r10,r31,1
	ctx.r10.s64 = r31.s64 + 65536;
	// addi r3,r11,4464
	ctx.r3.s64 = ctx.r11.s64 + 4464;
	// addi r4,r10,14244
	ctx.r4.s64 = ctx.r10.s64 + 14244;
	// lwz r11,4464(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4464);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C4114;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C4114:
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c4260
	if (!ctx.cr0.eq) goto loc_821C4260;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3700
	ctx.r11.u64 = ctx.r11.u64 | 3700;
	// lbzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c4260
	if (!ctx.cr0.eq) goto loc_821C4260;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bfa30
	ctx.lr = 0x821C413C;
	sub_821BFA30(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821bfa30
	ctx.lr = 0x821C4148;
	sub_821BFA30(ctx, base);
	// lbz r11,25(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 25);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x821c417c
	if (!ctx.cr6.eq) goto loc_821C417C;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lbz r11,174(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 174);
	// ori r10,r10,3870
	ctx.r10.u64 = ctx.r10.u64 | 3870;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + ctx.r10.u32);
	// bne 0x821c4268
	if (!ctx.cr0.eq) goto loc_821C4268;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c417c
	if (ctx.cr6.eq) goto loc_821C417C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821C4178:
	// stb r11,25(r30)
	REX_STORE_U8(r30.u32 + 25, ctx.r11.u8);
loc_821C417C:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821c4260
	if (ctx.cr6.eq) goto loc_821C4260;
	// lwz r11,68(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 68);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x821c4248
	if (!ctx.cr6.gt) goto loc_821C4248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821c2f08
	ctx.lr = 0x821C41A0;
	sub_821C2F08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821c4248
	if (ctx.cr0.eq) goto loc_821C4248;
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821c2f08
	ctx.lr = 0x821C41B8;
	sub_821C2F08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821c4248
	if (ctx.cr0.eq) goto loc_821C4248;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r29,r11,-27648
	r29.s64 = ctx.r11.s64 + -27648;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82125f50
	ctx.lr = 0x821C41D4;
	sub_82125F50(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3696
	ctx.r4.s64 = ctx.r11.s64 + 3696;
	// bl 0x82125f50
	ctx.lr = 0x821C41E4;
	sub_82125F50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82122f18
	ctx.lr = 0x821C41EC;
	sub_82122F18(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x82122f18
	ctx.lr = 0x821C41F8;
	sub_82122F18(ctx, base);
	// lhz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 2);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x821c4248
	if (ctx.cr6.eq) goto loc_821C4248;
	// lbz r11,190(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 190);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// addi r30,r10,6648
	r30.s64 = ctx.r10.s64 + 6648;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c4224
	if (ctx.cr0.eq) goto loc_821C4224;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820fc750
	ctx.lr = 0x821C4224;
	sub_820FC750(ctx, base);
loc_821C4224:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3886
	ctx.r11.u64 = ctx.r11.u64 | 3886;
	// lbzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c4248
	if (ctx.cr0.eq) goto loc_821C4248;
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// addi r3,r30,596
	ctx.r3.s64 = r30.s64 + 596;
	// addi r4,r11,3696
	ctx.r4.s64 = ctx.r11.s64 + 3696;
	// bl 0x820fc750
	ctx.lr = 0x821C4248;
	sub_820FC750(ctx, base);
loc_821C4248:
	// lwz r11,68(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 68);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821c4260
	if (!ctx.cr6.lt) goto loc_821C4260;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r28)
	REX_STORE_U32(r28.u32 + 68, ctx.r11.u32);
loc_821C4260:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_821C4268:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x821c4178
	goto loc_821C4178;
}

DEFINE_REX_FUNC(sub_821CD298) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,10244(r3)
	REX_STORE_U32(ctx.r3.u32 + 10244, ctx.r11.u32);
	// b 0x821cb7d0
	sub_821CB7D0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821CD388) {
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
	// bl 0x821c8d68
	ctx.lr = 0x821CD3A0;
	sub_821C8D68(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x821cd3f4
	if (ctx.cr6.eq) goto loc_821CD3F4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x821cd3d0
	if (ctx.cr6.eq) goto loc_821CD3D0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x821cd3fc
	if (!ctx.cr6.eq) goto loc_821CD3FC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lha r4,5452(r11)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 5452));
	// bl 0x821d9110
	ctx.lr = 0x821CD3C8;
	sub_821D9110(ctx, base);
	// lha r4,88(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 88));
	// b 0x821cd3e4
	goto loc_821CD3E4;
loc_821CD3D0:
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x821dc8a0
	ctx.lr = 0x821CD3D8;
	sub_821DC8A0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// sth r11,88(r31)
	REX_STORE_U16(r31.u32 + 88, ctx.r11.u16);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_821CD3E4:
	// li r6,-1
	ctx.r6.s64 = -1;
	// lha r5,100(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 100));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821cb730
	ctx.lr = 0x821CD3F4;
	sub_821CB730(ctx, base);
loc_821CD3F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c5868
	ctx.lr = 0x821CD3FC;
	sub_821C5868(ctx, base);
loc_821CD3FC:
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

DEFINE_REX_FUNC(sub_821D0FC0) {
	REX_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x821d1038
	if (ctx.cr6.eq) goto loc_821D1038;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r8,r9,432
	ctx.r8.s64 = ctx.r9.s64 + 432;
	// lwz r9,464(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 464);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x821d1018
	if (ctx.cr6.lt) goto loc_821D1018;
	// beq cr6,0x821d100c
	if (ctx.cr6.eq) goto loc_821D100C;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x821d1000
	if (ctx.cr6.lt) goto loc_821D1000;
	// bne cr6,0x821d1020
	if (!ctx.cr6.eq) goto loc_821D1020;
	// li r11,14
	ctx.r11.s64 = 14;
	// li r10,14
	ctx.r10.s64 = 14;
	// b 0x821d1020
	goto loc_821D1020;
loc_821D1000:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x821d1020
	goto loc_821D1020;
loc_821D100C:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821d1020
	goto loc_821D1020;
loc_821D1018:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_821D1020:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,464(r8)
	REX_STORE_U32(ctx.r8.u32 + 464, ctx.r9.u32);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x821d1180
	if (ctx.cr6.lt) goto loc_821D1180;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x821d117c
	goto loc_821D117C;
loc_821D1038:
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,14
	ctx.r11.s64 = 14;
	// addi r8,r10,432
	ctx.r8.s64 = ctx.r10.s64 + 432;
	// li r10,14
	ctx.r10.s64 = 14;
	// lwz r9,80(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 80);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lha r9,30(r8)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + 30));
	// bne cr6,0x821d10d4
	if (!ctx.cr6.eq) goto loc_821D10D4;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x821d10c8
	if (ctx.cr6.eq) goto loc_821D10C8;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x821d1090
	if (ctx.cr6.eq) goto loc_821D1090;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x821d1084
	if (ctx.cr6.eq) goto loc_821D1084;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// bne cr6,0x821d1178
	if (!ctx.cr6.eq) goto loc_821D1178;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x821d1178
	goto loc_821D1178;
loc_821D1084:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,5
	ctx.r10.s64 = 5;
	// b 0x821d1178
	goto loc_821D1178;
loc_821D1090:
	// lwz r11,36(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821d10bc
	if (ctx.cr6.eq) goto loc_821D10BC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821d10b0
	if (ctx.cr6.eq) goto loc_821D10B0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x821d1178
	goto loc_821D1178;
loc_821D10B0:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x821d1178
	goto loc_821D1178;
loc_821D10BC:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x821d1178
	goto loc_821D1178;
loc_821D10C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x821d1178
	goto loc_821D1178;
loc_821D10D4:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x821d1170
	if (ctx.cr6.eq) goto loc_821D1170;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x821d1138
	if (ctx.cr6.eq) goto loc_821D1138;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x821d112c
	if (ctx.cr6.eq) goto loc_821D112C;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// bne cr6,0x821d1178
	if (!ctx.cr6.eq) goto loc_821D1178;
	// lwz r11,36(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x821d1120
	if (ctx.cr6.eq) goto loc_821D1120;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x821d1114
	if (ctx.cr6.eq) goto loc_821D1114;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,10
	ctx.r10.s64 = 10;
	// b 0x821d1178
	goto loc_821D1178;
loc_821D1114:
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,12
	ctx.r10.s64 = 12;
	// b 0x821d1178
	goto loc_821D1178;
loc_821D1120:
	// li r11,11
	ctx.r11.s64 = 11;
	// li r10,11
	ctx.r10.s64 = 11;
	// b 0x821d1178
	goto loc_821D1178;
loc_821D112C:
	// li r11,13
	ctx.r11.s64 = 13;
	// li r10,13
	ctx.r10.s64 = 13;
	// b 0x821d1178
	goto loc_821D1178;
loc_821D1138:
	// lwz r11,36(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821d1164
	if (ctx.cr6.eq) goto loc_821D1164;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821d1158
	if (ctx.cr6.eq) goto loc_821D1158;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,7
	ctx.r10.s64 = 7;
	// b 0x821d1178
	goto loc_821D1178;
loc_821D1158:
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,9
	ctx.r10.s64 = 9;
	// b 0x821d1178
	goto loc_821D1178;
loc_821D1164:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x821d1178
	goto loc_821D1178;
loc_821D1170:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,6
	ctx.r10.s64 = 6;
loc_821D1178:
	// li r9,3
	ctx.r9.s64 = 3;
loc_821D117C:
	// stw r9,464(r8)
	REX_STORE_U32(ctx.r8.u32 + 464, ctx.r9.u32);
loc_821D1180:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,468(r8)
	REX_STORE_U32(ctx.r8.u32 + 468, ctx.r10.u32);
	// stw r11,472(r8)
	REX_STORE_U32(ctx.r8.u32 + 472, ctx.r11.u32);
	// li r3,9
	ctx.r3.s64 = 9;
	// b 0x821d45b0
	sub_821D45B0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D6B90) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r11,r11,-7072
	ctx.r11.s64 = ctx.r11.s64 + -7072;
	// bne cr6,0x821d6bb0
	if (!ctx.cr6.eq) goto loc_821D6BB0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x821d6bc0
	goto loc_821D6BC0;
loc_821D6BB0:
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
loc_821D6BC0:
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,40(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// bne cr6,0x821d6bf0
	if (!ctx.cr6.eq) goto loc_821D6BF0;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r9,3700
	ctx.r9.u64 = ctx.r9.u64 | 3700;
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// b 0x821d6c14
	goto loc_821D6C14;
loc_821D6BF0:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r10,r10,3701
	ctx.r10.u64 = ctx.r10.u64 | 3701;
	// ori r8,r8,3700
	ctx.r8.u64 = ctx.r8.u64 | 3700;
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
loc_821D6C14:
	// lwz r9,40(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// ori r9,r8,3700
	ctx.r9.u64 = ctx.r8.u64 | 3700;
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D86D8) {
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
	// lbz r11,6(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 6);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d8774
	if (ctx.cr0.eq) goto loc_821D8774;
	// lhz r11,148(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 148);
	// lha r10,88(r3)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 88));
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x821d8730
	if (!ctx.cr6.eq) goto loc_821D8730;
	// lhz r10,150(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 150);
	// lhz r9,100(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 100);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821d8730
	if (!ctx.cr6.eq) goto loc_821D8730;
	// lhz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 140);
	// lhz r9,152(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 152);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821d8774
	if (ctx.cr6.eq) goto loc_821D8774;
loc_821D8730:
	// sth r11,88(r31)
	REX_STORE_U16(r31.u32 + 88, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r11,150(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 150);
	// sth r11,100(r31)
	REX_STORE_U16(r31.u32 + 100, ctx.r11.u16);
	// lhz r11,152(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 152);
	// lha r10,88(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 88));
	// lha r5,100(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 100));
	// sth r11,140(r31)
	REX_STORE_U16(r31.u32 + 140, ctx.r11.u16);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x821c9d30
	ctx.lr = 0x821D875C;
	sub_821C9D30(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r30,19668(r31)
	REX_STORE_U32(r31.u32 + 19668, r30.u32);
	// bl 0x821c3048
	ctx.lr = 0x821D8770;
	sub_821C3048(ctx, base);
	// stw r30,19676(r31)
	REX_STORE_U32(r31.u32 + 19676, r30.u32);
loc_821D8774:
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

DEFINE_REX_FUNC(sub_821DC148) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821DC150;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821dc6a0
	if (ctx.cr6.eq) goto loc_821DC6A0;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// addi r30,r10,432
	r30.s64 = ctx.r10.s64 + 432;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// sth r11,30(r30)
	REX_STORE_U16(r30.u32 + 30, ctx.r11.u16);
	// beq cr6,0x821dc188
	if (ctx.cr6.eq) goto loc_821DC188;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821dc188
	if (ctx.cr6.eq) goto loc_821DC188;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
loc_821DC188:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// stw r4,80(r30)
	REX_STORE_U32(r30.u32 + 80, ctx.r4.u32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addi r31,r11,-7072
	r31.s64 = ctx.r11.s64 + -7072;
	// ori r8,r8,21472
	ctx.r8.u64 = ctx.r8.u64 | 21472;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// stw r10,17780(r31)
	REX_STORE_U32(r31.u32 + 17780, ctx.r10.u32);
	// stwx r10,r31,r8
	REX_STORE_U32(r31.u32 + ctx.r8.u32, ctx.r10.u32);
	// ori r8,r5,21484
	ctx.r8.u64 = ctx.r5.u64 | 21484;
	// ori r7,r7,21476
	ctx.r7.u64 = ctx.r7.u64 | 21476;
	// stw r10,17792(r31)
	REX_STORE_U32(r31.u32 + 17792, ctx.r10.u32);
	// ori r6,r6,21480
	ctx.r6.u64 = ctx.r6.u64 | 21480;
	// stw r10,17804(r31)
	REX_STORE_U32(r31.u32 + 17804, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stwx r10,r31,r8
	REX_STORE_U32(r31.u32 + ctx.r8.u32, ctx.r10.u32);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stwx r9,r31,r7
	REX_STORE_U32(r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// stwx r11,r31,r6
	REX_STORE_U32(r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// ori r6,r4,21492
	ctx.r6.u64 = ctx.r4.u64 | 21492;
	// stw r11,17776(r31)
	REX_STORE_U32(r31.u32 + 17776, ctx.r11.u32);
	// ori r8,r3,21496
	ctx.r8.u64 = ctx.r3.u64 | 21496;
	// stw r9,17784(r31)
	REX_STORE_U32(r31.u32 + 17784, ctx.r9.u32);
	// ori r7,r5,21488
	ctx.r7.u64 = ctx.r5.u64 | 21488;
	// stw r11,17788(r31)
	REX_STORE_U32(r31.u32 + 17788, ctx.r11.u32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stw r9,17796(r31)
	REX_STORE_U32(r31.u32 + 17796, ctx.r9.u32);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r11,17800(r31)
	REX_STORE_U32(r31.u32 + 17800, ctx.r11.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// stwx r11,r31,r6
	REX_STORE_U32(r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// stwx r10,r31,r8
	REX_STORE_U32(r31.u32 + ctx.r8.u32, ctx.r10.u32);
	// ori r6,r4,21504
	ctx.r6.u64 = ctx.r4.u64 | 21504;
	// stwx r9,r31,r7
	REX_STORE_U32(r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// ori r8,r3,21508
	ctx.r8.u64 = ctx.r3.u64 | 21508;
	// ori r7,r5,21500
	ctx.r7.u64 = ctx.r5.u64 | 21500;
	// stw r9,17808(r31)
	REX_STORE_U32(r31.u32 + 17808, ctx.r9.u32);
	// stw r11,17812(r31)
	REX_STORE_U32(r31.u32 + 17812, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,600(r30)
	REX_STORE_U32(r30.u32 + 600, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r11,r31,r6
	REX_STORE_U32(r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stwx r10,r31,r8
	REX_STORE_U32(r31.u32 + ctx.r8.u32, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stwx r9,r31,r7
	REX_STORE_U32(r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,496(r30)
	REX_STORE_U32(r30.u32 + 496, ctx.r10.u32);
	// stw r9,532(r30)
	REX_STORE_U32(r30.u32 + 532, ctx.r9.u32);
	// sth r9,34(r30)
	REX_STORE_U16(r30.u32 + 34, ctx.r9.u16);
	// stw r11,516(r30)
	REX_STORE_U32(r30.u32 + 516, ctx.r11.u32);
	// sth r10,32(r30)
	REX_STORE_U16(r30.u32 + 32, ctx.r10.u16);
	// bl 0x821d9620
	ctx.lr = 0x821DC270;
	sub_821D9620(ctx, base);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,10(r30)
	REX_STORE_U16(r30.u32 + 10, ctx.r11.u16);
	// stw r11,23240(r10)
	REX_STORE_U32(ctx.r10.u32 + 23240, ctx.r11.u32);
	// bl 0x821d92a0
	ctx.lr = 0x821DC284;
	sub_821D92A0(ctx, base);
	// stfs f1,248(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 248, temp.u32);
	// bl 0x821d9370
	ctx.lr = 0x821DC28C;
	sub_821D9370(ctx, base);
	// stfs f1,252(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 252, temp.u32);
	// bl 0x821d9440
	ctx.lr = 0x821DC294;
	sub_821D9440(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sth r11,256(r30)
	REX_STORE_U16(r30.u32 + 256, ctx.r11.u16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,260(r30)
	REX_STORE_U16(r30.u32 + 260, ctx.r11.u16);
	// sth r11,258(r30)
	REX_STORE_U16(r30.u32 + 258, ctx.r11.u16);
	// bl 0x821daca0
	ctx.lr = 0x821DC2B4;
	sub_821DACA0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r10,17
	ctx.r10.s64 = 17;
	// addi r11,r11,4000
	ctx.r11.s64 = ctx.r11.s64 + 4000;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r11,200
	ctx.r9.s64 = ctx.r11.s64 + 200;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821DC2D0:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x821dc2d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DC2D0;
	// li r10,99
	ctx.r10.s64 = 99;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821DC2E8:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x821dc2e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DC2E8;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r7,r7,20340
	ctx.r7.u64 = ctx.r7.u64 | 20340;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stw r9,16640(r31)
	REX_STORE_U32(r31.u32 + 16640, ctx.r9.u32);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// stw r9,16624(r31)
	REX_STORE_U32(r31.u32 + 16624, ctx.r9.u32);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r9,16612(r31)
	REX_STORE_U32(r31.u32 + 16612, ctx.r9.u32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// stw r9,16600(r31)
	REX_STORE_U32(r31.u32 + 16600, ctx.r9.u32);
	// stwx r9,r31,r7
	REX_STORE_U32(r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// ori r7,r5,20332
	ctx.r7.u64 = ctx.r5.u64 | 20332;
	// ori r6,r6,20336
	ctx.r6.u64 = ctx.r6.u64 | 20336;
	// ori r8,r8,20324
	ctx.r8.u64 = ctx.r8.u64 | 20324;
	// ori r5,r4,20328
	ctx.r5.u64 = ctx.r4.u64 | 20328;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stwx r11,r31,r6
	REX_STORE_U32(r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// stwx r10,r31,r8
	REX_STORE_U32(r31.u32 + ctx.r8.u32, ctx.r10.u32);
	// stwx r9,r31,r5
	REX_STORE_U32(r31.u32 + ctx.r5.u32, ctx.r9.u32);
	// ori r6,r4,20316
	ctx.r6.u64 = ctx.r4.u64 | 20316;
	// ori r5,r3,20312
	ctx.r5.u64 = ctx.r3.u64 | 20312;
	// stwx r10,r31,r7
	REX_STORE_U32(r31.u32 + ctx.r7.u32, ctx.r10.u32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// stw r10,16644(r31)
	REX_STORE_U32(r31.u32 + 16644, ctx.r10.u32);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r10,16632(r31)
	REX_STORE_U32(r31.u32 + 16632, ctx.r10.u32);
	// ori r8,r8,20320
	ctx.r8.u64 = ctx.r8.u64 | 20320;
	// stw r10,16616(r31)
	REX_STORE_U32(r31.u32 + 16616, ctx.r10.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// stwx r10,r31,r6
	REX_STORE_U32(r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// lis r29,1
	r29.s64 = 65536;
	// stwx r9,r31,r5
	REX_STORE_U32(r31.u32 + ctx.r5.u32, ctx.r9.u32);
	// ori r6,r4,20344
	ctx.r6.u64 = ctx.r4.u64 | 20344;
	// stw r10,16604(r31)
	REX_STORE_U32(r31.u32 + 16604, ctx.r10.u32);
	// ori r5,r3,20304
	ctx.r5.u64 = ctx.r3.u64 | 20304;
	// stw r11,16628(r31)
	REX_STORE_U32(r31.u32 + 16628, ctx.r11.u32);
	// ori r4,r29,20300
	ctx.r4.u64 = r29.u64 | 20300;
	// stwx r11,r31,r8
	REX_STORE_U32(r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r11,16636(r31)
	REX_STORE_U32(r31.u32 + 16636, ctx.r11.u32);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// stw r11,16620(r31)
	REX_STORE_U32(r31.u32 + 16620, ctx.r11.u32);
	// stw r11,16608(r31)
	REX_STORE_U32(r31.u32 + 16608, ctx.r11.u32);
	// stwx r10,r31,r5
	REX_STORE_U32(r31.u32 + ctx.r5.u32, ctx.r10.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stwx r9,r31,r4
	REX_STORE_U32(r31.u32 + ctx.r4.u32, ctx.r9.u32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lfs f0,1996(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// ori r7,r7,20308
	ctx.r7.u64 = ctx.r7.u64 | 20308;
	// ori r8,r10,20296
	ctx.r8.u64 = ctx.r10.u64 | 20296;
	// stfs f0,16648(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16648, temp.u32);
	// ori r9,r9,20292
	ctx.r9.u64 = ctx.r9.u64 | 20292;
	// stfsx f0,r31,r6
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + ctx.r6.u32, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,16596(r31)
	REX_STORE_U32(r31.u32 + 16596, ctx.r11.u32);
	// stwx r11,r31,r7
	REX_STORE_U32(r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// lis r7,-32170
	ctx.r7.s64 = -2108293120;
	// stwx r11,r31,r8
	REX_STORE_U32(r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// stwx r10,r31,r9
	REX_STORE_U32(r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r3,r7,22960
	ctx.r3.s64 = ctx.r7.s64 + 22960;
	// bl 0x821094b8
	ctx.lr = 0x821DC3F4;
	sub_821094B8(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r9,r10,9912
	ctx.r9.u64 = ctx.r10.u64 | 9912;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,6216(r31)
	REX_STORE_U32(r31.u32 + 6216, ctx.r10.u32);
	// stwx r11,r31,r9
	REX_STORE_U32(r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// lha r11,30(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 30));
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821dc448
	if (ctx.cr6.eq) goto loc_821DC448;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x821dc43c
	if (ctx.cr6.eq) goto loc_821DC43C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x821dc43c
	if (ctx.cr6.eq) goto loc_821DC43C;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x821dc460
	if (!ctx.cr6.eq) goto loc_821DC460;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,10(r30)
	REX_STORE_U16(r30.u32 + 10, ctx.r11.u16);
	// b 0x821dc460
	goto loc_821DC460;
loc_821DC43C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,736(r30)
	REX_STORE_U32(r30.u32 + 736, ctx.r11.u32);
	// b 0x821dc460
	goto loc_821DC460;
loc_821DC448:
	// li r11,33
	ctx.r11.s64 = 33;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r30,606
	ctx.r10.s64 = r30.s64 + 606;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821DC458:
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x821dc458
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DC458;
loc_821DC460:
	// bl 0x821d98a0
	ctx.lr = 0x821DC464;
	sub_821D98A0(ctx, base);
	// bl 0x821da948
	ctx.lr = 0x821DC468;
	sub_821DA948(ctx, base);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r29,r11,-27144
	r29.s64 = ctx.r11.s64 + -27144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820f5df8
	ctx.lr = 0x821DC47C;
	sub_820F5DF8(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// addi r3,r29,9504
	ctx.r3.s64 = r29.s64 + 9504;
	// addi r4,r11,3696
	ctx.r4.s64 = ctx.r11.s64 + 3696;
	// bl 0x820f5df8
	ctx.lr = 0x821DC48C;
	sub_820F5DF8(ctx, base);
	// lha r11,30(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 30));
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bgt cr6,0x821dc64c
	if (ctx.cr6.gt) goto loc_821DC64C;
	// beq cr6,0x821dc628
	if (ctx.cr6.eq) goto loc_821DC628;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821dc604
	if (ctx.cr6.eq) goto loc_821DC604;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821dc570
	if (ctx.cr6.eq) goto loc_821DC570;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821dc54c
	if (ctx.cr6.eq) goto loc_821DC54C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821dc6a0
	if (!ctx.cr6.eq) goto loc_821DC6A0;
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 344);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821dc4d8
	if (ctx.cr6.eq) goto loc_821DC4D8;
	// ori r3,r3,19
	ctx.r3.u64 = ctx.r3.u64 | 19;
	// b 0x821dc4dc
	goto loc_821DC4DC;
loc_821DC4D8:
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
loc_821DC4DC:
	// bl 0x820e68b8
	ctx.lr = 0x821DC4E0;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r31,r11,21804
	r31.s64 = ctx.r11.s64 + 21804;
	// addi r3,r30,748
	ctx.r3.s64 = r30.s64 + 748;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822d55f8
	ctx.lr = 0x821DC4F8;
	sub_822D55F8(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x821dc540
	if (ctx.cr6.eq) goto loc_821DC540;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x821dc534
	if (ctx.cr6.eq) goto loc_821DC534;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x821dc6a0
	if (!ctx.cr6.eq) goto loc_821DC6A0;
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
loc_821DC51C:
	// lwz r4,344(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821DC524;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,812
	ctx.r3.s64 = r30.s64 + 812;
	// b 0x821dc69c
	goto loc_821DC69C;
loc_821DC534:
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// b 0x821dc51c
	goto loc_821DC51C;
loc_821DC540:
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// ori r3,r3,20
	ctx.r3.u64 = ctx.r3.u64 | 20;
	// b 0x821dc51c
	goto loc_821DC51C;
loc_821DC54C:
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 344);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821dc568
	if (ctx.cr6.eq) goto loc_821DC568;
	// ori r3,r3,27
	ctx.r3.u64 = ctx.r3.u64 | 27;
	// b 0x821dc688
	goto loc_821DC688;
loc_821DC568:
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// b 0x821dc688
	goto loc_821DC688;
loc_821DC570:
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 344);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821dc58c
	if (ctx.cr6.eq) goto loc_821DC58C;
	// ori r3,r3,15
	ctx.r3.u64 = ctx.r3.u64 | 15;
	// b 0x821dc590
	goto loc_821DC590;
loc_821DC58C:
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
loc_821DC590:
	// bl 0x820e68b8
	ctx.lr = 0x821DC594;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r31,r11,21804
	r31.s64 = ctx.r11.s64 + 21804;
	// addi r3,r30,748
	ctx.r3.s64 = r30.s64 + 748;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822d55f8
	ctx.lr = 0x821DC5AC;
	sub_822D55F8(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821dc5f8
	if (ctx.cr6.eq) goto loc_821DC5F8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821dc5ec
	if (ctx.cr6.eq) goto loc_821DC5EC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821dc5e0
	if (ctx.cr6.eq) goto loc_821DC5E0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821dc5f8
	if (ctx.cr6.eq) goto loc_821DC5F8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821dc5ec
	if (ctx.cr6.eq) goto loc_821DC5EC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821dc6a0
	if (!ctx.cr6.eq) goto loc_821DC6A0;
loc_821DC5E0:
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// ori r3,r3,7
	ctx.r3.u64 = ctx.r3.u64 | 7;
	// b 0x821dc51c
	goto loc_821DC51C;
loc_821DC5EC:
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// b 0x821dc51c
	goto loc_821DC51C;
loc_821DC5F8:
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// b 0x821dc51c
	goto loc_821DC51C;
loc_821DC604:
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 344);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821dc620
	if (ctx.cr6.eq) goto loc_821DC620;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// b 0x821dc688
	goto loc_821DC688;
loc_821DC620:
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// b 0x821dc688
	goto loc_821DC688;
loc_821DC628:
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 344);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821dc644
	if (ctx.cr6.eq) goto loc_821DC644;
	// ori r3,r3,29
	ctx.r3.u64 = ctx.r3.u64 | 29;
	// b 0x821dc688
	goto loc_821DC688;
loc_821DC644:
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// b 0x821dc688
	goto loc_821DC688;
loc_821DC64C:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x821dc67c
	if (ctx.cr6.eq) goto loc_821DC67C;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x821dc670
	if (ctx.cr6.eq) goto loc_821DC670;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bne cr6,0x821dc6a0
	if (!ctx.cr6.eq) goto loc_821DC6A0;
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// ori r3,r3,247
	ctx.r3.u64 = ctx.r3.u64 | 247;
	// b 0x821dc684
	goto loc_821DC684;
loc_821DC670:
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// ori r3,r3,30
	ctx.r3.u64 = ctx.r3.u64 | 30;
	// b 0x821dc684
	goto loc_821DC684;
loc_821DC67C:
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// ori r3,r3,38
	ctx.r3.u64 = ctx.r3.u64 | 38;
loc_821DC684:
	// lwz r4,344(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 344);
loc_821DC688:
	// bl 0x820e68b8
	ctx.lr = 0x821DC68C;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,21804
	ctx.r4.s64 = ctx.r11.s64 + 21804;
	// addi r3,r30,748
	ctx.r3.s64 = r30.s64 + 748;
loc_821DC69C:
	// bl 0x822d55f8
	ctx.lr = 0x821DC6A0;
	sub_822D55F8(ctx, base);
loc_821DC6A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821EFA28) {
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
	ctx.lr = 0x821EFA30;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r11,-32032
	r29.s64 = ctx.r11.s64 + -32032;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821f28a0
	ctx.lr = 0x821EFA54;
	sub_821F28A0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,7792(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7792);
	// lwz r4,1684(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1684);
	// bl 0x821f2908
	ctx.lr = 0x821EFA68;
	sub_821F2908(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f2bf0
	ctx.lr = 0x821EFA78;
	sub_821F2BF0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ed290
	ctx.lr = 0x821EFA94;
	sub_821ED290(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// addi r8,r30,32
	ctx.r8.s64 = r30.s64 + 32;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r31,12
	ctx.r9.s64 = r31.s64 + 12;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f30,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	f30.f64 = double(temp.f32);
	// stfs f30,12(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f31,-13044(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -13044);
	f31.f64 = double(temp.f32);
loc_821EFAC0:
	// lbzx r11,r10,r8
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfsu f0,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x821efac0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821EFAC0;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// lfs f1,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ed290
	ctx.lr = 0x821EFAFC;
	sub_821ED290(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// addi r8,r30,36
	ctx.r8.s64 = r30.s64 + 36;
	// stfs f30,44(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,44
	ctx.r9.s64 = r31.s64 + 44;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821EFB18:
	// lbzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfsu f0,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x821efb18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821EFB18;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,40(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 40);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821f2c50
	ctx.lr = 0x821EFB5C;
	sub_821F2C50(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821F3FD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821F3FE0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r31,8(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x822aac90
	ctx.lr = 0x821F3FFC;
	sub_822AAC90(ctx, base);
	// lwz r11,288(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 288);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bgt cr6,0x821f4164
	if (ctx.cr6.gt) goto loc_821F4164;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,18416
	ctx.r12.s64 = ctx.r12.s64 + 18416;
	// lbzx r0,r12,r10
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r10.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// nop 
	// addi r12,r12,16436
	ctx.r12.s64 = ctx.r12.s64 + 16436;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_821F4034;
	case 1:
		goto loc_821F4050;
	case 2:
		goto loc_821F4088;
	case 3:
		goto loc_821F40B0;
	case 4:
		goto loc_821F40C8;
	case 5:
		goto loc_821F40EC;
	case 6:
		goto loc_821F4110;
	case 7:
		goto loc_821F4164;
	case 8:
		goto loc_821F4164;
	case 9:
		goto loc_821F4164;
	case 10:
		goto loc_821F4164;
	case 11:
		goto loc_821F4138;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_821F4034:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r30,r11,24,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// bl 0x822a1098
	ctx.lr = 0x821F404C;
	sub_822A1098(ctx, base);
	// b 0x821f4164
	goto loc_821F4164;
loc_821F4050:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a1098
	ctx.lr = 0x821F4060;
	sub_822A1098(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822aa070
	ctx.lr = 0x821F406C;
	sub_822AA070(ctx, base);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a13a0
	ctx.lr = 0x821F4084;
	sub_822A13A0(ctx, base);
	// b 0x821f4164
	goto loc_821F4164;
loc_821F4088:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a1098
	ctx.lr = 0x821F4098;
	sub_822A1098(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F409C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822aa070
	ctx.lr = 0x821F40A4;
	sub_822AA070(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x821f415c
	goto loc_821F415C;
loc_821F40B0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a1098
	ctx.lr = 0x821F40C0;
	sub_822A1098(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x821f409c
	goto loc_821F409C;
loc_821F40C8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a1098
	ctx.lr = 0x821F40D8;
	sub_822A1098(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822aa070
	ctx.lr = 0x821F40E4;
	sub_822AA070(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821f4158
	goto loc_821F4158;
loc_821F40EC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a1098
	ctx.lr = 0x821F40FC;
	sub_822A1098(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822aa070
	ctx.lr = 0x821F4108;
	sub_822AA070(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x821f4158
	goto loc_821F4158;
loc_821F4110:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a1098
	ctx.lr = 0x821F4120;
	sub_822A1098(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822aa070
	ctx.lr = 0x821F412C;
	sub_822AA070(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x821f415c
	goto loc_821F415C;
loc_821F4138:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a1098
	ctx.lr = 0x821F4148;
	sub_822A1098(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822aa070
	ctx.lr = 0x821F4154;
	sub_822AA070(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
loc_821F4158:
	// li r5,4
	ctx.r5.s64 = 4;
loc_821F415C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822aa060
	ctx.lr = 0x821F4164;
	sub_822AA060(ctx, base);
loc_821F4164:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a1098
	ctx.lr = 0x821F4174;
	sub_822A1098(ctx, base);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f4190
	if (ctx.cr0.eq) goto loc_821F4190;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822a14a8
	ctx.lr = 0x821F4190;
	sub_822A14A8(ctx, base);
loc_821F4190:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821FAF58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r3,1504
	ctx.r11.s64 = ctx.r3.s64 + 1504;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_821FAF68:
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stwu r10,16(r11)
	ea = 16 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821faf68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821FAF68;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FB9A8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e50
	ctx.lr = 0x821FB9B0;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f00
	ctx.lr = 0x821FB9B8;
	// stwu r1,-1440(r1)
	ea = -1440 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	r24.s64 = 0;
	// stw r4,1468(r1)
	REX_STORE_U32(ctx.r1.u32 + 1468, ctx.r4.u32);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// bge cr6,0x821fba08
	if (!ctx.cr6.lt) goto loc_821FBA08;
	// clrlwi. r9,r6,31
	ctx.r9.u64 = ctx.r6.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// bne 0x821fba0c
	if (!ctx.cr0.eq) goto loc_821FBA0C;
loc_821FB9E8:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821fb9e8
	if (ctx.cr0.eq) goto loc_821FB9E8;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821fba0c
	if (ctx.cr6.lt) goto loc_821FBA0C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821fba0c
	goto loc_821FBA0C;
loc_821FBA08:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_821FBA0C:
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// lwz r10,504(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 504);
	// lwzx r27,r9,r10
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bge cr6,0x821fba54
	if (!ctx.cr6.lt) goto loc_821FBA54;
	// clrlwi. r9,r20,31
	ctx.r9.u64 = r20.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r20,16
	ctx.r10.u64 = r20.u32 & 0xFFFF;
	// bne 0x821fba58
	if (!ctx.cr0.eq) goto loc_821FBA58;
loc_821FBA34:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821fba34
	if (ctx.cr0.eq) goto loc_821FBA34;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821fba58
	if (ctx.cr6.lt) goto loc_821FBA58;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821fba58
	goto loc_821FBA58;
loc_821FBA54:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_821FBA58:
	// addi r10,r11,51
	ctx.r10.s64 = ctx.r11.s64 + 51;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// lfsx f31,r10,r15
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r15.u32);
	f31.f64 = double(temp.f32);
	// bge cr6,0x821fba9c
	if (!ctx.cr6.lt) goto loc_821FBA9C;
	// clrlwi. r9,r20,31
	ctx.r9.u64 = r20.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r20,16
	ctx.r10.u64 = r20.u32 & 0xFFFF;
	// bne 0x821fbaa0
	if (!ctx.cr0.eq) goto loc_821FBAA0;
loc_821FBA7C:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821fba7c
	if (ctx.cr0.eq) goto loc_821FBA7C;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821fbaa0
	if (ctx.cr6.lt) goto loc_821FBAA0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821fbaa0
	goto loc_821FBAA0;
loc_821FBA9C:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_821FBAA0:
	// addi r10,r11,35
	ctx.r10.s64 = ctx.r11.s64 + 35;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// lfsx f30,r10,r15
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r15.u32);
	f30.f64 = double(temp.f32);
	// bge cr6,0x821fbae4
	if (!ctx.cr6.lt) goto loc_821FBAE4;
	// clrlwi. r9,r20,31
	ctx.r9.u64 = r20.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r20,16
	ctx.r10.u64 = r20.u32 & 0xFFFF;
	// bne 0x821fbae8
	if (!ctx.cr0.eq) goto loc_821FBAE8;
loc_821FBAC4:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821fbac4
	if (ctx.cr0.eq) goto loc_821FBAC4;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821fbae8
	if (ctx.cr6.lt) goto loc_821FBAE8;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821fbae8
	goto loc_821FBAE8;
loc_821FBAE4:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_821FBAE8:
	// addi r11,r11,67
	ctx.r11.s64 = ctx.r11.s64 + 67;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// lfs f29,2012(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2012);
	f29.f64 = double(temp.f32);
	// lfsx f0,r11,r15
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f29,96(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,320(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// beq cr6,0x821fbb90
	if (ctx.cr6.eq) goto loc_821FBB90;
loc_821FBB10:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821faf80
	ctx.lr = 0x821FBB18;
	sub_821FAF80(ctx, base);
	// lwz r30,48(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
	// lbz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821fbb50
	if (!ctx.cr0.eq) goto loc_821FBB50;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// fmuls f1,f30,f31
	ctx.f1.f64 = double(float(f30.f64 * f31.f64));
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x821fbb4c
	if (!ctx.cr6.eq) goto loc_821FBB4C;
	// fmuls f0,f1,f29
	ctx.f0.f64 = double(float(ctx.f1.f64 * f29.f64));
	// b 0x821fbb50
	goto loc_821FBB50;
loc_821FBB4C:
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
loc_821FBB50:
	// lfs f13,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r30,196
	ctx.r5.s64 = r30.s64 + 196;
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f13,64(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x820e1cf8
	ctx.lr = 0x821FBB7C;
	sub_820E1CF8(ctx, base);
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 88);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// mr r31,r29
	r31.u64 = r29.u64;
	// bne cr6,0x821fbb10
	if (!ctx.cr6.eq) goto loc_821FBB10;
loc_821FBB90:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// lfs f19,2384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	f19.f64 = double(temp.f32);
	// lfs f27,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f27.f64 = double(temp.f32);
	// beq cr6,0x821fbd84
	if (ctx.cr6.eq) goto loc_821FBD84;
loc_821FBBAC:
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// ble cr6,0x821fbbc8
	if (!ctx.cr6.gt) goto loc_821FBBC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821faf80
	ctx.lr = 0x821FBBC0;
	sub_821FAF80(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x821fbbac
	if (!ctx.cr0.eq) goto loc_821FBBAC;
loc_821FBBC8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821fbd84
	if (ctx.cr6.eq) goto loc_821FBD84;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lbz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821fbbec
	if (!ctx.cr0.eq) goto loc_821FBBEC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821faf80
	ctx.lr = 0x821FBBE8;
	sub_821FAF80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_821FBBEC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821fbd84
	if (ctx.cr6.eq) goto loc_821FBD84;
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x821fbd84
	if (!ctx.cr6.eq) goto loc_821FBD84;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addi r8,r11,132
	ctx.r8.s64 = ctx.r11.s64 + 132;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r24
	r30.u64 = r24.u64;
	// lwz r8,132(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,136(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r8,140(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r11,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r11,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// bl 0x821faf80
	ctx.lr = 0x821FBC5C;
	sub_821FAF80(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r11,r11,1992
	ctx.r11.s64 = ctx.r11.s64 + 1992;
	// lfs f30,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f30.f64 = double(temp.f32);
	// beq 0x821fbd18
	if (ctx.cr0.eq) goto loc_821FBD18;
loc_821FBC70:
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x821fbccc
	if (!ctx.cr6.eq) goto loc_821FBCCC;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// addi r9,r11,132
	ctx.r9.s64 = ctx.r11.s64 + 132;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r9,132(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,136(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,140(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x820e1b70
	ctx.lr = 0x821FBCB8;
	sub_820E1B70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821faf80
	ctx.lr = 0x821FBCC0;
	sub_821FAF80(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bne 0x821fbc70
	if (!ctx.cr0.eq) goto loc_821FBC70;
loc_821FBCCC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x821fbd18
	if (ctx.cr6.eq) goto loc_821FBD18;
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// lfs f0,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,212(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f12,216(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// std r11,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r11.u64);
	// lfd f11,224(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fdivs f11,f30,f11
	ctx.f11.f64 = double(float(f30.f64 / ctx.f11.f64));
	// fmuls f1,f0,f11
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f1,208(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fmuls f2,f13,f11
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f2,212(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fmuls f3,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f3,216(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// b 0x821fbd24
	goto loc_821FBD24;
loc_821FBD18:
	// lfs f3,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,212(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,208(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f1.f64 = double(temp.f32);
loc_821FBD24:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-13044(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -13044);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x821fbd4c
	if (!ctx.cr6.lt) goto loc_821FBD4C;
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x821fbd4c
	if (!ctx.cr6.lt) goto loc_821FBD4C;
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bge cr6,0x821fbd4c
	if (!ctx.cr6.lt) goto loc_821FBD4C;
	// stfs f27,248(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// b 0x821fbd58
	goto loc_821FBD58;
loc_821FBD4C:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lfs f4,220(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f4.f64 = double(temp.f32);
	// bl 0x82202c38
	ctx.lr = 0x821FBD58;
	sub_82202C38(ctx, base);
loc_821FBD58:
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// addi r16,r28,160
	r16.s64 = r28.s64 + 160;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,160(r28)
	REX_STORE_U32(r28.u32 + 160, ctx.r10.u32);
	// stw r9,164(r28)
	REX_STORE_U32(r28.u32 + 164, ctx.r9.u32);
	// stw r8,168(r28)
	REX_STORE_U32(r28.u32 + 168, ctx.r8.u32);
	// stw r11,172(r28)
	REX_STORE_U32(r28.u32 + 172, ctx.r11.u32);
	// b 0x821fbdb8
	goto loc_821FBDB8;
loc_821FBD84:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f19,164(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f19.f64);
	REX_STORE_U32(r28.u32 + 164, temp.u32);
	// stfs f19,168(r28)
	temp.f32 = float(f19.f64);
	REX_STORE_U32(r28.u32 + 168, temp.u32);
	// addi r16,r28,160
	r16.s64 = r28.s64 + 160;
	// addi r11,r11,1992
	ctx.r11.s64 = ctx.r11.s64 + 1992;
	// stfs f19,160(r28)
	temp.f32 = float(f19.f64);
	REX_STORE_U32(r28.u32 + 160, temp.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lfs f30,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f30.f64 = double(temp.f32);
	// stfs f30,172(r28)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r28.u32 + 172, temp.u32);
	// beq cr6,0x821fbef0
	if (ctx.cr6.eq) goto loc_821FBEF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821faf80
	ctx.lr = 0x821FBDB4;
	sub_821FAF80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_821FBDB8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821fbef0
	if (ctx.cr6.eq) goto loc_821FBEF0;
loc_821FBDC0:
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// ble cr6,0x821fbdd8
	if (!ctx.cr6.gt) goto loc_821FBDD8;
	// lwz r31,24(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x821fbdc0
	if (!ctx.cr6.eq) goto loc_821FBDC0;
loc_821FBDD8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821fbef0
	if (ctx.cr6.eq) goto loc_821FBEF0;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lbz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821fbdfc
	if (!ctx.cr0.eq) goto loc_821FBDFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821faf80
	ctx.lr = 0x821FBDF8;
	sub_821FAF80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_821FBDFC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821fbef0
	if (ctx.cr6.eq) goto loc_821FBEF0;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lbz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x821fbef0
	if (!ctx.cr6.eq) goto loc_821FBEF0;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r31,32
	ctx.r9.s64 = r31.s64 + 32;
	// mr r30,r24
	r30.u64 = r24.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x821faf80
	ctx.lr = 0x821FBE48;
	sub_821FAF80(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821fbec8
	if (ctx.cr0.eq) goto loc_821FBEC8;
loc_821FBE50:
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x821fbe80
	if (!ctx.cr6.eq) goto loc_821FBE80;
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x820e1b70
	ctx.lr = 0x821FBE6C;
	sub_820E1B70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821faf80
	ctx.lr = 0x821FBE74;
	sub_821FAF80(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bne 0x821fbe50
	if (!ctx.cr0.eq) goto loc_821FBE50;
loc_821FBE80:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x821fbec8
	if (ctx.cr6.eq) goto loc_821FBEC8;
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// lfs f0,256(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,260(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f12,264(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// std r11,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r11.u64);
	// lfd f11,224(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fdivs f11,f30,f11
	ctx.f11.f64 = double(float(f30.f64 / ctx.f11.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,256(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// fmuls f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f0,260(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// fmuls f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f0,264(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 264, temp.u32);
loc_821FBEC8:
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,188(r28)
	REX_STORE_U32(r28.u32 + 188, ctx.r10.u32);
	// stw r9,176(r28)
	REX_STORE_U32(r28.u32 + 176, ctx.r9.u32);
	// stw r8,180(r28)
	REX_STORE_U32(r28.u32 + 180, ctx.r8.u32);
	// stw r11,184(r28)
	REX_STORE_U32(r28.u32 + 184, ctx.r11.u32);
	// b 0x821fbefc
	goto loc_821FBEFC;
loc_821FBEF0:
	// stfs f30,180(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r28.u32 + 180, temp.u32);
	// stfs f30,184(r28)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r28.u32 + 184, temp.u32);
	// stfs f30,176(r28)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r28.u32 + 176, temp.u32);
loc_821FBEFC:
	// stfs f27,188(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r28.u32 + 188, temp.u32);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// addi r14,r28,176
	r14.s64 = r28.s64 + 176;
	// mr r21,r31
	r21.u64 = r31.u64;
	// bl 0x821fb088
	ctx.lr = 0x821FBF14;
	sub_821FB088(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821fbf24
	if (ctx.cr6.eq) goto loc_821FBF24;
	// stw r24,60(r31)
	REX_STORE_U32(r31.u32 + 60, r24.u32);
loc_821FBF24:
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821fc044
	if (ctx.cr6.eq) goto loc_821FC044;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,16336(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16336);
	f31.f64 = double(temp.f32);
loc_821FBF38:
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x821fc044
	if (ctx.cr6.lt) goto loc_821FC044;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lbz r10,54(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 54);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x821fbf7c
	if (ctx.cr6.eq) goto loc_821FBF7C;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x821fbf90
	if (!ctx.cr6.eq) goto loc_821FBF90;
	// addi r7,r11,148
	ctx.r7.s64 = ctx.r11.s64 + 148;
	// lwz r6,48(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lfs f1,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r11,164
	ctx.r3.s64 = ctx.r11.s64 + 164;
	// bl 0x821f9930
	ctx.lr = 0x821FBF78;
	sub_821F9930(ctx, base);
	// b 0x821fbf90
	goto loc_821FBF90;
loc_821FBF7C:
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lfs f1,76(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r11,164
	ctx.r4.s64 = ctx.r11.s64 + 164;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x821f9a58
	ctx.lr = 0x821FBF90;
	sub_821F9A58(ctx, base);
loc_821FBF90:
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// lfs f12,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmuls f0,f12,f1
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f1,16(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// beq cr6,0x821fc030
	if (ctx.cr6.eq) goto loc_821FC030;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x821fc004
	if (ctx.cr6.eq) goto loc_821FC004;
loc_821FBFC4:
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x821fbfd8
	if (ctx.cr0.eq) goto loc_821FBFD8;
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f30.f64;
	// b 0x821fbfdc
	goto loc_821FBFDC;
loc_821FBFD8:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64;
loc_821FBFDC:
	// lfs f12,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821fbffc
	if (!ctx.cr6.gt) goto loc_821FBFFC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821fbfc4
	if (!ctx.cr6.eq) goto loc_821FBFC4;
loc_821FBFFC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821fc010
	if (!ctx.cr6.eq) goto loc_821FC010;
loc_821FC004:
	// stw r31,60(r10)
	REX_STORE_U32(ctx.r10.u32 + 60, r31.u32);
	// stw r24,60(r31)
	REX_STORE_U32(r31.u32 + 60, r24.u32);
	// b 0x821fc030
	goto loc_821FC030;
loc_821FC010:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821fc028
	if (ctx.cr6.eq) goto loc_821FC028;
	// lwz r11,60(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// stw r31,60(r10)
	REX_STORE_U32(ctx.r10.u32 + 60, r31.u32);
	// b 0x821fc030
	goto loc_821FC030;
loc_821FC028:
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// mr r21,r31
	r21.u64 = r31.u64;
loc_821FC030:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bl 0x821faf80
	ctx.lr = 0x821FC03C;
	sub_821FAF80(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x821fbf38
	if (!ctx.cr0.eq) goto loc_821FBF38;
loc_821FC044:
	// addi r19,r28,96
	r19.s64 = r28.s64 + 96;
	// lfs f20,348(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r15.u32 + 348);
	f20.f64 = double(temp.f32);
	// stfs f27,384(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// mr r18,r24
	r18.u64 = r24.u64;
	// stfs f27,388(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// mr r23,r19
	r23.u64 = r19.u64;
	// stfs f27,392(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// stfs f27,396(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// stfs f27,80(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f25,f27
	f25.f64 = f27.f64;
	// stfs f27,84(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f21,f30
	f21.f64 = f30.f64;
	// stfs f27,88(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,180(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f27,92(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bge cr6,0x821fc0b8
	if (!ctx.cr6.lt) goto loc_821FC0B8;
	// clrlwi. r9,r20,31
	ctx.r9.u64 = r20.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r20,16
	ctx.r10.u64 = r20.u32 & 0xFFFF;
	// bne 0x821fc0bc
	if (!ctx.cr0.eq) goto loc_821FC0BC;
loc_821FC098:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821fc098
	if (ctx.cr0.eq) goto loc_821FC098;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821fc0bc
	if (ctx.cr6.lt) goto loc_821FC0BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821fc0bc
	goto loc_821FC0BC;
loc_821FC0B8:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_821FC0BC:
	// mulli r11,r11,48
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(48));
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + r15.u64;
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// addi r28,r11,372
	r28.s64 = ctx.r11.s64 + 372;
	// addi r22,r10,-4
	r22.s64 = ctx.r10.s64 + -4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f15,-24724(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24724);
	f15.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f17,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	f17.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16260(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16260);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f22,2392(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2392);
	f22.f64 = double(temp.f32);
	// lfs f18,28436(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 28436);
	f18.f64 = double(temp.f32);
	// addi r25,r23,-80
	r25.s64 = r23.s64 + -80;
	// lfs f14,2024(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2024);
	f14.f64 = double(temp.f32);
	// lfs f16,15944(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15944);
	f16.f64 = double(temp.f32);
	// lfs f26,20984(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20984);
	f26.f64 = double(temp.f32);
	// lfs f23,20980(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20980);
	f23.f64 = double(temp.f32);
	// stfs f15,224(r1)
	temp.f32 = float(f15.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f17,100(r1)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
loc_821FC128:
	// fmr f24,f27
	ctx.fpscr.disableFlushMode();
	f24.f64 = f27.f64;
	// mr r31,r21
	r31.u64 = r21.u64;
	// li r26,1
	r26.s64 = 1;
	// fmr f29,f30
	f29.f64 = f30.f64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x821fc358
	if (ctx.cr6.eq) goto loc_821FC358;
loc_821FC140:
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x821fc350
	if (ctx.cr6.lt) goto loc_821FC350;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r29,48(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// bne cr6,0x821fc344
	if (!ctx.cr6.eq) goto loc_821FC344;
	// lbz r11,54(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 54);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x821fc16c
	if (!ctx.cr6.eq) goto loc_821FC16C;
	// li r18,1
	r18.s64 = 1;
loc_821FC16C:
	// addi r30,r29,148
	r30.s64 = r29.s64 + 148;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e2290
	ctx.lr = 0x821FC17C;
	sub_820E2290(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f97a0
	ctx.lr = 0x821FC184;
	sub_821F97A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821fc19c
	if (ctx.cr0.eq) goto loc_821FC19C;
	// stfs f27,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f27,4(r30)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f27,8(r30)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f30,12(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
loc_821FC19C:
	// lfs f0,56(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f24,f0
	ctx.cr6.compare(f24.f64, ctx.f0.f64);
	// bge cr6,0x821fc1ac
	if (!ctx.cr6.lt) goto loc_821FC1AC;
	// fmr f24,f0
	f24.f64 = ctx.f0.f64;
loc_821FC1AC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x821fc280
	if (ctx.cr6.eq) goto loc_821FC280;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// beq cr6,0x821fc200
	if (ctx.cr6.eq) goto loc_821FC200;
	// lfs f0,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,0(r28)
	REX_STORE_U32(r28.u32 + 0, r31.u32);
	// stfs f0,8(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
	// lbz r11,72(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821fc1fc
	if (!ctx.cr0.eq) goto loc_821FC1FC;
	// stfs f27,4(r28)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r28.u32 + 4, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r4,r11,148
	ctx.r4.s64 = ctx.r11.s64 + 148;
	// bl 0x820e1c28
	ctx.lr = 0x821FC1EC;
	sub_820E1C28(ctx, base);
	// fadds f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + f30.f64));
	// fmadds f0,f0,f23,f26
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f23.f64, f26.f64)));
	// stfs f0,8(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
	// b 0x821fc200
	goto loc_821FC200;
loc_821FC1FC:
	// stfs f30,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r28.u32 + 4, temp.u32);
loc_821FC200:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r4,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r4.u32);
	// lwz r10,12(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r6,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// stw r7,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r10,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1cc0
	ctx.lr = 0x821FC25C;
	sub_820E1CC0(ctx, base);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// li r26,0
	r26.s64 = 0;
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, f27.f64);
	// beq cr6,0x821fc274
	if (ctx.cr6.eq) goto loc_821FC274;
	// fdivs f25,f30,f0
	f25.f64 = double(float(f30.f64 / ctx.f0.f64));
	// b 0x821fc278
	goto loc_821FC278;
loc_821FC274:
	// fmr f25,f27
	ctx.fpscr.disableFlushMode();
	f25.f64 = f27.f64;
loc_821FC278:
	// sth r26,2(r31)
	REX_STORE_U16(r31.u32 + 2, r26.u16);
	// b 0x821fc344
	goto loc_821FC344;
loc_821FC280:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// fmuls f1,f25,f0
	ctx.f1.f64 = double(float(f25.f64 * ctx.f0.f64));
	// bl 0x82204ae0
	ctx.lr = 0x821FC294;
	sub_82204AE0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e1c28
	ctx.lr = 0x821FC2A4;
	sub_820E1C28(ctx, base);
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 - f31.f64));
	// fcmpu cr6,f1,f27
	ctx.cr6.compare(ctx.f1.f64, f27.f64);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// fmuls f29,f0,f17
	f29.f64 = double(float(ctx.f0.f64 * f17.f64));
	// bge cr6,0x821fc2e4
	if (!ctx.cr6.lt) goto loc_821FC2E4;
	// lfs f0,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// fmuls f1,f0,f16
	ctx.f1.f64 = double(float(ctx.f0.f64 * f16.f64));
	// bl 0x820e1cf8
	ctx.lr = 0x821FC2D0;
	sub_820E1CF8(ctx, base);
	// addi r5,r1,512
	ctx.r5.s64 = ctx.r1.s64 + 512;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x820e1b70
	ctx.lr = 0x821FC2E0;
	sub_820E1B70(ctx, base);
	// b 0x821fc344
	goto loc_821FC344;
loc_821FC2E4:
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f28,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	f28.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x820e0028
	ctx.lr = 0x821FC2F4;
	sub_820E0028(ctx, base);
	// fmuls f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f28.f64));
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// fmuls f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820e1cf8
	ctx.lr = 0x821FC30C;
	sub_820E1CF8(ctx, base);
	// addi r5,r1,544
	ctx.r5.s64 = ctx.r1.s64 + 544;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x820e1b70
	ctx.lr = 0x821FC31C;
	sub_820E1B70(ctx, base);
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x820e1cf8
	ctx.lr = 0x821FC32C;
	sub_820E1CF8(ctx, base);
	// addi r5,r1,608
	ctx.r5.s64 = ctx.r1.s64 + 608;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x820e1b70
	ctx.lr = 0x821FC33C;
	sub_820E1B70(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r11.u16);
loc_821FC344:
	// lwz r31,60(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x821fc140
	if (!ctx.cr6.eq) goto loc_821FC140;
loc_821FC350:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x821fc388
	if (ctx.cr6.eq) goto loc_821FC388;
loc_821FC358:
	// stfs f27,352(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// stfs f14,356(r1)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// stfs f27,360(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// stfs f30,364(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// stfs f27,160(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f14,164(r1)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f27,168(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f27,172(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f27,304(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// stfs f27,308(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// stfs f27,312(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// stfs f27,316(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 316, temp.u32);
loc_821FC388:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x820e2290
	ctx.lr = 0x821FC394;
	sub_820E2290(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821f97a0
	ctx.lr = 0x821FC39C;
	sub_821F97A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821fc3b4
	if (ctx.cr0.eq) goto loc_821FC3B4;
	// stfs f27,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f14,164(r1)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f27,168(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f27,172(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
loc_821FC3B4:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82202e00
	ctx.lr = 0x821FC3BC;
	sub_82202E00(ctx, base);
	// stfs f27,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmr f28,f1
	f28.f64 = ctx.f1.f64;
	// cmplwi cr6,r24,2
	ctx.cr6.compare<uint32_t>(r24.u32, 2, ctx.xer);
	// bge cr6,0x821fc3e8
	if (!ctx.cr6.lt) goto loc_821FC3E8;
	// fmuls f0,f29,f29
	ctx.f0.f64 = double(float(f29.f64 * f29.f64));
	// fmuls f29,f0,f29
	f29.f64 = double(float(ctx.f0.f64 * f29.f64));
	// fcmpu cr6,f29,f19
	ctx.cr6.compare(f29.f64, f19.f64);
	// bge cr6,0x821fc3e0
	if (!ctx.cr6.lt) goto loc_821FC3E0;
	// fmr f29,f19
	f29.f64 = f19.f64;
loc_821FC3E0:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f29.f64;
	// b 0x821fc3ec
	goto loc_821FC3EC;
loc_821FC3E8:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f30.f64;
loc_821FC3EC:
	// lfs f13,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// fmr f2,f26
	ctx.f2.f64 = f26.f64;
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82204ae0
	ctx.lr = 0x821FC400;
	sub_82204AE0(ctx, base);
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lfs f13,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// bl 0x82204ae0
	ctx.lr = 0x821FC41C;
	sub_82204AE0(ctx, base);
	// lfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,4(r28)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r28.u32 + 4, temp.u32);
	// fcmpu cr6,f0,f18
	ctx.cr6.compare(ctx.f0.f64, f18.f64);
	// bge cr6,0x821fc438
	if (!ctx.cr6.lt) goto loc_821FC438;
	// fsubs f13,f18,f0
	ctx.f13.f64 = double(float(f18.f64 - ctx.f0.f64));
	// fmadds f0,f13,f22,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f22.f64, ctx.f0.f64)));
	// stfs f0,8(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
loc_821FC438:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x820e2028
	ctx.lr = 0x821FC44C;
	sub_820E2028(ctx, base);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x820e2028
	ctx.lr = 0x821FC460;
	sub_820E2028(ctx, base);
	// lfs f0,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x821fc470
	if (!ctx.cr6.gt) goto loc_821FC470;
	// stfs f31,180(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
loc_821FC470:
	// stfs f28,92(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r25.u32 + 92, temp.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x820e22e8
	ctx.lr = 0x821FC47C;
	sub_820E22E8(ctx, base);
	// fcmpu cr6,f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f27.f64);
	// bne cr6,0x821fc4a4
	if (!ctx.cr6.eq) goto loc_821FC4A4;
	// stfs f27,0(r25)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r25.u32 + 0, temp.u32);
	// stfs f15,4(r25)
	temp.f32 = float(f15.f64);
	REX_STORE_U32(r25.u32 + 4, temp.u32);
	// stfs f27,8(r25)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r25.u32 + 8, temp.u32);
	// stfs f27,12(r25)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r25.u32 + 12, temp.u32);
	// stfs f27,0(r23)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r23.u32 + 0, temp.u32);
	// stfs f27,84(r25)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r25.u32 + 84, temp.u32);
	// stfs f27,88(r25)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r25.u32 + 88, temp.u32);
	// stfs f27,92(r25)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r25.u32 + 92, temp.u32);
loc_821FC4A4:
	// addi r23,r23,16
	r23.s64 = r23.s64 + 16;
	// fcmpu cr6,f29,f21
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f21.f64);
	// addi r25,r25,16
	r25.s64 = r25.s64 + 16;
	// bge cr6,0x821fc4b8
	if (!ctx.cr6.lt) goto loc_821FC4B8;
	// fmr f21,f29
	f21.f64 = f29.f64;
loc_821FC4B8:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// stfsu f24,4(r22)
	ctx.fpscr.disableFlushMode();
	ea = 4 + r22.u32;
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ea, temp.u32);
	r22.u32 = ea;
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// cmplwi cr6,r24,4
	ctx.cr6.compare<uint32_t>(r24.u32, 4, ctx.xer);
	// blt cr6,0x821fc128
	if (ctx.cr6.lt) goto loc_821FC128;
	// addi r26,r1,624
	r26.s64 = ctx.r1.s64 + 624;
	// fmr f15,f27
	f15.f64 = f27.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bge cr6,0x821fc50c
	if (!ctx.cr6.lt) goto loc_821FC50C;
	// clrlwi. r9,r20,31
	ctx.r9.u64 = r20.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r20,16
	ctx.r10.u64 = r20.u32 & 0xFFFF;
	// bne 0x821fc510
	if (!ctx.cr0.eq) goto loc_821FC510;
loc_821FC4EC:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821fc4ec
	if (ctx.cr0.eq) goto loc_821FC4EC;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821fc510
	if (ctx.cr6.lt) goto loc_821FC510;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821fc510
	goto loc_821FC510;
loc_821FC50C:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_821FC510:
	// addi r11,r11,180
	ctx.r11.s64 = ctx.r11.s64 + 180;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r25,r11,r15
	r25.u64 = ctx.r11.u64 + r15.u64;
	// lis r22,-32173
	r22.s64 = -2108489728;
	// lfs f28,20976(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20976);
	f28.f64 = double(temp.f32);
	// mr r29,r21
	r29.u64 = r21.u64;
	// fmr f17,f28
	f17.f64 = f28.f64;
	// li r24,0
	r24.s64 = 0;
	// lfs f0,17064(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 17064);
	ctx.f0.f64 = double(temp.f32);
	// fmr f23,f28
	f23.f64 = f28.f64;
	// lwz r28,4(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 4);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// li r23,1
	r23.s64 = 1;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x821fc82c
	if (ctx.cr6.eq) goto loc_821FC82C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f25,9892(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 9892);
	f25.f64 = double(temp.f32);
	// lfs f26,20972(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20972);
	f26.f64 = double(temp.f32);
	// lfs f24,31840(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 31840);
	f24.f64 = double(temp.f32);
loc_821FC56C:
	// lbz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 4);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x821fc824
	if (ctx.cr6.lt) goto loc_821FC824;
	// lwz r31,48(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 48);
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, f27.f64);
	// ble cr6,0x821fc818
	if (!ctx.cr6.gt) goto loc_821FC818;
	// lbz r11,54(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 54);
	// lbz r30,72(r31)
	r30.u64 = REX_LOAD_U8(r31.u32 + 72);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x821fc658
	if (ctx.cr6.eq) goto loc_821FC658;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x821fc658
	if (ctx.cr6.eq) goto loc_821FC658;
	// ble cr6,0x821fc818
	if (!ctx.cr6.gt) goto loc_821FC818;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// ble cr6,0x821fc5e4
	if (!ctx.cr6.gt) goto loc_821FC5E4;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x821fc818
	if (!ctx.cr6.eq) goto loc_821FC818;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne cr6,0x821fc5c4
	if (!ctx.cr6.eq) goto loc_821FC5C4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x821fc818
	if (ctx.cr6.eq) goto loc_821FC818;
loc_821FC5C4:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f2,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f1,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fmr f31,f30
	f31.f64 = f30.f64;
	// bl 0x821fa930
	ctx.lr = 0x821FC5DC;
	sub_821FA930(ctx, base);
	// lfs f15,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	f15.f64 = double(temp.f32);
	// b 0x821fc6a8
	goto loc_821FC6A8;
loc_821FC5E4:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne cr6,0x821fc5f4
	if (!ctx.cr6.eq) goto loc_821FC5F4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x821fc818
	if (ctx.cr6.eq) goto loc_821FC818;
loc_821FC5F4:
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x821fc608
	if (!ctx.cr6.gt) goto loc_821FC608;
	// fmr f31,f30
	f31.f64 = f30.f64;
	// b 0x821fc624
	goto loc_821FC624;
loc_821FC608:
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f1,f0,f13,f12
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// bl 0x820e0028
	ctx.lr = 0x821FC618;
	sub_820E0028(ctx, base);
	// fadds f31,f1,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 + f30.f64));
	// fcmpu cr6,f31,f27
	ctx.cr6.compare(f31.f64, f27.f64);
	// ble cr6,0x821fc678
	if (!ctx.cr6.gt) goto loc_821FC678;
loc_821FC624:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x821fc678
	if (ctx.cr6.eq) goto loc_821FC678;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x821fc678
	if (!ctx.cr6.eq) goto loc_821FC678;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x821fc678
	if (ctx.cr6.eq) goto loc_821FC678;
	// li r23,0
	r23.s64 = 0;
	// fmr f17,f28
	ctx.fpscr.disableFlushMode();
	f17.f64 = f28.f64;
	// li r24,0
	r24.s64 = 0;
	// fmr f23,f28
	f23.f64 = f28.f64;
	// addi r26,r1,624
	r26.s64 = ctx.r1.s64 + 624;
	// b 0x821fc678
	goto loc_821FC678;
loc_821FC658:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne cr6,0x821fc668
	if (!ctx.cr6.eq) goto loc_821FC668;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x821fc818
	if (ctx.cr6.eq) goto loc_821FC818;
loc_821FC668:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821fc818
	if (!ctx.cr6.eq) goto loc_821FC818;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
loc_821FC678:
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r31,148
	ctx.r9.s64 = r31.s64 + 148;
	// fcmpu cr6,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f27.f64);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// ble cr6,0x821fc818
	if (!ctx.cr6.gt) goto loc_821FC818;
loc_821FC6A8:
	// cmpwi cr6,r24,32
	ctx.cr6.compare<int32_t>(r24.s32, 32, ctx.xer);
	// bge cr6,0x821fc818
	if (!ctx.cr6.lt) goto loc_821FC818;
	// lfs f29,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	f29.f64 = double(temp.f32);
	// lfs f0,60(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// fmuls f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fcmpu cr6,f31,f27
	ctx.cr6.compare(f31.f64, f27.f64);
	// ble cr6,0x821fc818
	if (!ctx.cr6.gt) goto loc_821FC818;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x821fc7b0
	if (!ctx.cr6.eq) goto loc_821FC7B0;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x821fc794
	if (ctx.cr6.eq) goto loc_821FC794;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fc6f0
	if (ctx.cr6.eq) goto loc_821FC6F0;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lbz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 72);
	// b 0x821fc6f8
	goto loc_821FC6F8;
loc_821FC6F0:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821FC6F8:
	// lbz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 72);
	// li r8,2
	ctx.r8.s64 = 2;
	// stfs f24,24(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f24.f64);
	REX_STORE_U32(r25.u32 + 24, temp.u32);
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r9,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r7.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821fc76c
	if (ctx.cr6.lt) goto loc_821FC76C;
	// beq cr6,0x821fc74c
	if (ctx.cr6.eq) goto loc_821FC74C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x821fc764
	if (ctx.cr6.lt) goto loc_821FC764;
	// bne cr6,0x821fc790
	if (!ctx.cr6.eq) goto loc_821FC790;
	// lfs f13,20(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821fc790
	if (!ctx.cr6.gt) goto loc_821FC790;
	// stfs f0,20(r25)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r25.u32 + 20, temp.u32);
	// b 0x821fc790
	goto loc_821FC790;
loc_821FC74C:
	// lfs f0,8(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, f27.f64);
	// bne cr6,0x821fc764
	if (!ctx.cr6.eq) goto loc_821FC764;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x821fc764
	if (ctx.cr6.eq) goto loc_821FC764;
	// stfs f16,8(r25)
	temp.f32 = float(f16.f64);
	REX_STORE_U32(r25.u32 + 8, temp.u32);
loc_821FC764:
	// stfs f30,20(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r25.u32 + 20, temp.u32);
	// b 0x821fc790
	goto loc_821FC790;
loc_821FC76C:
	// stfs f27,20(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r25.u32 + 20, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821fc790
	if (ctx.cr6.eq) goto loc_821FC790;
	// addi r4,r10,148
	ctx.r4.s64 = ctx.r10.s64 + 148;
	// addi r3,r31,148
	ctx.r3.s64 = r31.s64 + 148;
	// bl 0x820e1c28
	ctx.lr = 0x821FC784;
	sub_820E1C28(ctx, base);
	// fadds f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + f30.f64));
	// fmadds f0,f0,f26,f25
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f26.f64, f25.f64)));
	// stfs f0,24(r25)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r25.u32 + 24, temp.u32);
loc_821FC790:
	// stw r29,0(r25)
	REX_STORE_U32(r25.u32 + 0, r29.u32);
loc_821FC794:
	// lfs f0,24(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// lfs f13,20(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// bl 0x82204ae0
	ctx.lr = 0x821FC7AC;
	sub_82204AE0(ctx, base);
	// stfs f1,20(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r25.u32 + 20, temp.u32);
loc_821FC7B0:
	// stfs f31,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// fcmpu cr6,f31,f23
	ctx.cr6.compare(f31.f64, f23.f64);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r26)
	REX_STORE_U32(r26.u32 + 12, ctx.r11.u32);
	// stw r9,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r9.u32);
	// stw r8,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r8.u32);
	// addi r26,r26,16
	r26.s64 = r26.s64 + 16;
	// ble cr6,0x821fc814
	if (!ctx.cr6.gt) goto loc_821FC814;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// fmr f23,f31
	f23.f64 = f31.f64;
	// addi r10,r1,496
	ctx.r10.s64 = ctx.r1.s64 + 496;
	// fmr f17,f29
	f17.f64 = f29.f64;
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
loc_821FC814:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
loc_821FC818:
	// lwz r29,60(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 60);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x821fc56c
	if (!ctx.cr6.eq) goto loc_821FC56C;
loc_821FC824:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x821fc9ac
	if (ctx.cr6.eq) goto loc_821FC9AC;
loc_821FC82C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x821fc8e8
	if (!ctx.cr6.eq) goto loc_821FC8E8;
	// lfs f0,8(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmr f20,f30
	f20.f64 = f30.f64;
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, f27.f64);
	// bne cr6,0x821fc8f4
	if (!ctx.cr6.eq) goto loc_821FC8F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bge cr6,0x821fc87c
	if (!ctx.cr6.lt) goto loc_821FC87C;
	// clrlwi. r9,r20,31
	ctx.r9.u64 = r20.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r20,16
	ctx.r10.u64 = r20.u32 & 0xFFFF;
	// bne 0x821fc880
	if (!ctx.cr0.eq) goto loc_821FC880;
loc_821FC85C:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821fc85c
	if (ctx.cr0.eq) goto loc_821FC85C;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821fc880
	if (ctx.cr6.lt) goto loc_821FC880;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821fc880
	goto loc_821FC880;
loc_821FC87C:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_821FC880:
	// lwz r10,508(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 508);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,5388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5388);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f22
	ctx.cr6.compare(ctx.f0.f64, f22.f64);
	// ble cr6,0x821fc8f4
	if (!ctx.cr6.gt) goto loc_821FC8F4;
	// stfs f16,8(r25)
	temp.f32 = float(f16.f64);
	REX_STORE_U32(r25.u32 + 8, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bge cr6,0x821fc8d4
	if (!ctx.cr6.lt) goto loc_821FC8D4;
	// clrlwi. r9,r20,31
	ctx.r9.u64 = r20.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r20,16
	ctx.r10.u64 = r20.u32 & 0xFFFF;
	// bne 0x821fc8d8
	if (!ctx.cr0.eq) goto loc_821FC8D8;
loc_821FC8B4:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821fc8b4
	if (ctx.cr0.eq) goto loc_821FC8B4;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821fc8d8
	if (ctx.cr6.lt) goto loc_821FC8D8;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821fc8d8
	goto loc_821FC8D8;
loc_821FC8D4:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_821FC8D8:
	// addi r11,r11,1424
	ctx.r11.s64 = ctx.r11.s64 + 1424;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f30,r11,r15
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + r15.u32, temp.u32);
	// b 0x821fc8f4
	goto loc_821FC8F4;
loc_821FC8E8:
	// fcmpu cr6,f21,f20
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f21.f64, f20.f64);
	// bge cr6,0x821fc8f4
	if (!ctx.cr6.lt) goto loc_821FC8F4;
	// fmr f20,f21
	f20.f64 = f21.f64;
loc_821FC8F4:
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64;
	// fmr f2,f19
	ctx.f2.f64 = f19.f64;
	// fmr f1,f20
	ctx.f1.f64 = f20.f64;
	// bl 0x82204ae0
	ctx.lr = 0x821FC904;
	sub_82204AE0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bge cr6,0x821fc940
	if (!ctx.cr6.lt) goto loc_821FC940;
	// clrlwi. r9,r20,31
	ctx.r9.u64 = r20.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r20,16
	ctx.r10.u64 = r20.u32 & 0xFFFF;
	// bne 0x821fc944
	if (!ctx.cr0.eq) goto loc_821FC944;
loc_821FC920:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821fc920
	if (ctx.cr0.eq) goto loc_821FC920;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821fc944
	if (ctx.cr6.lt) goto loc_821FC944;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821fc944
	goto loc_821FC944;
loc_821FC940:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_821FC944:
	// addi r11,r11,1424
	ctx.r11.s64 = ctx.r11.s64 + 1424;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64;
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r15
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f0,f18
	ctx.f1.f64 = double(float(ctx.f0.f64 + f18.f64));
	// bl 0x82204ae0
	ctx.lr = 0x821FC960;
	sub_82204AE0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bge cr6,0x821fc998
	if (!ctx.cr6.lt) goto loc_821FC998;
	// clrlwi. r9,r20,31
	ctx.r9.u64 = r20.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r20,16
	ctx.r10.u64 = r20.u32 & 0xFFFF;
	// bne 0x821fc99c
	if (!ctx.cr0.eq) goto loc_821FC99C;
loc_821FC978:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821fc978
	if (ctx.cr0.eq) goto loc_821FC978;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821fc99c
	if (ctx.cr6.lt) goto loc_821FC99C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821fc99c
	goto loc_821FC99C;
loc_821FC998:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_821FC99C:
	// addi r11,r11,1424
	ctx.r11.s64 = ctx.r11.s64 + 1424;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r11,r15
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + r15.u32, temp.u32);
	// b 0x821fc9fc
	goto loc_821FC9FC;
loc_821FC9AC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// lfs f31,16268(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16268);
	f31.f64 = double(temp.f32);
	// bge cr6,0x821fc9ec
	if (!ctx.cr6.lt) goto loc_821FC9EC;
	// clrlwi. r9,r20,31
	ctx.r9.u64 = r20.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r20,16
	ctx.r10.u64 = r20.u32 & 0xFFFF;
	// bne 0x821fc9f0
	if (!ctx.cr0.eq) goto loc_821FC9F0;
loc_821FC9CC:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821fc9cc
	if (ctx.cr0.eq) goto loc_821FC9CC;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821fc9f0
	if (ctx.cr6.lt) goto loc_821FC9F0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821fc9f0
	goto loc_821FC9F0;
loc_821FC9EC:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_821FC9F0:
	// addi r11,r11,1424
	ctx.r11.s64 = ctx.r11.s64 + 1424;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f27,r11,r15
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r11.u32 + r15.u32, temp.u32);
loc_821FC9FC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,20(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f19,f0,f31
	f19.f64 = double(float(ctx.f0.f64 * f31.f64));
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// fmr f28,f30
	f28.f64 = f30.f64;
	// lfs f0,32064(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32064);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,232(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// beq cr6,0x821fcb34
	if (ctx.cr6.eq) goto loc_821FCB34;
	// fcmpu cr6,f23,f27
	ctx.cr6.compare(f23.f64, f27.f64);
	// ble cr6,0x821fca2c
	if (!ctx.cr6.gt) goto loc_821FCA2C;
	// fdivs f29,f30,f23
	f29.f64 = double(float(f30.f64 / f23.f64));
	// b 0x821fca30
	goto loc_821FCA30;
loc_821FCA2C:
	// fmr f29,f27
	ctx.fpscr.disableFlushMode();
	f29.f64 = f27.f64;
loc_821FCA30:
	// addi r11,r1,624
	ctx.r11.s64 = ctx.r1.s64 + 624;
	// lfs f0,500(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 500);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, f27.f64);
	// addi r31,r1,640
	r31.s64 = ctx.r1.s64 + 640;
	// addi r29,r24,-1
	r29.s64 = r24.s64 + -1;
	// li r30,1
	r30.s64 = 1;
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
	// blt cr6,0x821fca74
	if (ctx.cr6.lt) goto loc_821FCA74;
	// li r30,0
	r30.s64 = 0;
loc_821FCA74:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x821fcb20
	if (!ctx.cr6.gt) goto loc_821FCB20;
	// lfs f26,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	f26.f64 = double(temp.f32);
loc_821FCA80:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lfs f0,276(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x821fcabc
	if (ctx.cr6.eq) goto loc_821FCABC;
	// fnabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 | 0x8000000000000000;
	// b 0x821fcac0
	goto loc_821FCAC0;
loc_821FCABC:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
loc_821FCAC0:
	// stfs f0,276(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x820e1c28
	ctx.lr = 0x821FCAD0;
	sub_820E1C28(ctx, base);
	// lfs f0,284(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x821fcaf4
	if (!ctx.cr6.lt) goto loc_821FCAF4;
	// fmsubs f1,f0,f26,f26
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, f26.f64, -f26.f64)));
	// bl 0x820e0088
	ctx.lr = 0x821FCAEC;
	sub_820E0088(ctx, base);
	// fadds f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + f30.f64));
	// fmuls f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * f26.f64));
loc_821FCAF4:
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// fmadds f28,f0,f31,f28
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, f28.f64)));
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x820e1cf8
	ctx.lr = 0x821FCB08;
	sub_820E1CF8(ctx, base);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1b70
	ctx.lr = 0x821FCB18;
	sub_820E1B70(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bgt 0x821fca80
	if (ctx.cr0.gt) goto loc_821FCA80;
loc_821FCB20:
	// lfs f3,232(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// lfs f2,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82204ae0
	ctx.lr = 0x821FCB30;
	sub_82204AE0(ctx, base);
	// stfs f30,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_821FCB34:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fneg f31,f0
	f31.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f29,f13
	f29.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fneg f28,f0
	f28.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x820e0130
	ctx.lr = 0x821FCB58;
	sub_820E0130(ctx, base);
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 * f31.f64));
	// fmr f24,f1
	f24.f64 = ctx.f1.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// fmadds f0,f29,f29,f0
	ctx.f0.f64 = double(float(std::fma(f29.f64, f29.f64, ctx.f0.f64)));
	// fsqrts f2,f0
	ctx.f2.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x820e0130
	ctx.lr = 0x821FCB70;
	sub_820E0130(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bge cr6,0x821fcba8
	if (!ctx.cr6.lt) goto loc_821FCBA8;
	// clrlwi. r9,r20,31
	ctx.r9.u64 = r20.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r20,16
	ctx.r10.u64 = r20.u32 & 0xFFFF;
	// bne 0x821fcbac
	if (!ctx.cr0.eq) goto loc_821FCBAC;
loc_821FCB88:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821fcb88
	if (ctx.cr0.eq) goto loc_821FCB88;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821fcbac
	if (ctx.cr6.lt) goto loc_821FCBAC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821fcbac
	goto loc_821FCBAC;
loc_821FCBA8:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_821FCBAC:
	// fnabs f22,f1
	ctx.fpscr.disableFlushMode();
	f22.u64 = ctx.f1.u64 | 0x8000000000000000;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r11,180
	ctx.r10.s64 = ctx.r11.s64 + 180;
	// lwz r11,508(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 508);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lfs f0,20968(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20968);
	ctx.f0.f64 = double(temp.f32);
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fcmpu cr6,f22,f0
	ctx.cr6.compare(f22.f64, ctx.f0.f64);
	// ble cr6,0x821fcbd4
	if (!ctx.cr6.gt) goto loc_821FCBD4;
	// fmr f22,f0
	f22.f64 = ctx.f0.f64;
loc_821FCBD4:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f24,f0
	ctx.f13.f64 = double(float(f24.f64 - ctx.f0.f64));
	// lfs f12,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x821fcc0c
	if (!ctx.cr6.gt) goto loc_821FCC0C;
	// fsubs f13,f30,f13
	ctx.f13.f64 = double(float(f30.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, f27.f64);
	// bge cr6,0x821fcc08
	if (!ctx.cr6.lt) goto loc_821FCC08;
	// fcmpu cr6,f24,f27
	ctx.cr6.compare(f24.f64, f27.f64);
	// ble cr6,0x821fcc08
	if (!ctx.cr6.gt) goto loc_821FCC08;
	// fsubs f24,f0,f13
	f24.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x821fcc0c
	goto loc_821FCC0C;
loc_821FCC08:
	// fadds f24,f0,f13
	ctx.fpscr.disableFlushMode();
	f24.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_821FCC0C:
	// lfs f28,368(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r15.u32 + 368);
	f28.f64 = double(temp.f32);
	// lfs f1,8(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0028
	ctx.lr = 0x821FCC18;
	sub_820E0028(ctx, base);
	// fadds f29,f1,f30
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(ctx.f1.f64 + f30.f64));
	// lfs f0,8(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, f27.f64);
	// fmuls f21,f29,f28
	f21.f64 = double(float(f29.f64 * f28.f64));
	// beq cr6,0x821fccd0
	if (ctx.cr6.eq) goto loc_821FCCD0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,2016(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2016);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x821fccb4
	if (!ctx.cr6.lt) goto loc_821FCCB4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f31,f27
	f31.f64 = f27.f64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// lfs f13,20964(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20964);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8(r25)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r25.u32 + 8, temp.u32);
	// beq cr6,0x821fccd4
	if (ctx.cr6.eq) goto loc_821FCCD4;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x821fccd4
	if (ctx.cr6.lt) goto loc_821FCCD4;
	// stfs f27,8(r25)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r25.u32 + 8, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bge cr6,0x821fcca0
	if (!ctx.cr6.lt) goto loc_821FCCA0;
	// clrlwi. r9,r20,31
	ctx.r9.u64 = r20.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r20,16
	ctx.r10.u64 = r20.u32 & 0xFFFF;
	// bne 0x821fcca4
	if (!ctx.cr0.eq) goto loc_821FCCA4;
loc_821FCC80:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821fcc80
	if (ctx.cr0.eq) goto loc_821FCC80;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821fcca4
	if (ctx.cr6.lt) goto loc_821FCCA4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821fcca4
	goto loc_821FCCA4;
loc_821FCCA0:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_821FCCA4:
	// addi r11,r11,1424
	ctx.r11.s64 = ctx.r11.s64 + 1424;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f27,r11,r15
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r11.u32 + r15.u32, temp.u32);
	// b 0x821fccd4
	goto loc_821FCCD4;
loc_821FCCB4:
	// fmr f3,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f27.f64;
	// fmr f2,f14
	ctx.f2.f64 = f14.f64;
	// fadds f1,f0,f18
	ctx.f1.f64 = double(float(ctx.f0.f64 + f18.f64));
	// bl 0x82204ae0
	ctx.lr = 0x821FCCC4;
	sub_82204AE0(ctx, base);
	// stfs f1,8(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r25.u32 + 8, temp.u32);
	// fmsubs f31,f29,f19,f31
	f31.f64 = double(float(std::fma(f29.f64, f19.f64, -f31.f64)));
	// b 0x821fccd4
	goto loc_821FCCD4;
loc_821FCCD0:
	// fmr f31,f19
	ctx.fpscr.disableFlushMode();
	f31.f64 = f19.f64;
loc_821FCCD4:
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stw r23,4(r25)
	REX_STORE_U32(r25.u32 + 4, r23.u32);
	// fcmpu cr6,f24,f0
	ctx.cr6.compare(f24.f64, ctx.f0.f64);
	// ble cr6,0x821fccec
	if (!ctx.cr6.gt) goto loc_821FCCEC;
	// fsubs f24,f24,f30
	f24.f64 = double(float(f24.f64 - f30.f64));
	// b 0x821fccf8
	goto loc_821FCCF8;
loc_821FCCEC:
	// fcmpu cr6,f24,f16
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f24.f64, f16.f64);
	// bge cr6,0x821fccf8
	if (!ctx.cr6.lt) goto loc_821FCCF8;
	// fadds f24,f24,f30
	f24.f64 = double(float(f24.f64 + f30.f64));
loc_821FCCF8:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,-32480
	ctx.r11.s64 = ctx.r11.s64 + -32480;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821fcd1c
	if (!ctx.cr0.eq) goto loc_821FCD1C;
	// stfs f22,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f22.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f24,16(r31)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// b 0x821fcd24
	goto loc_821FCD24;
loc_821FCD1C:
	// lfs f22,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	f22.f64 = double(temp.f32);
	// lfs f24,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	f24.f64 = double(temp.f32);
loc_821FCD24:
	// fmr f1,f22
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f22.f64;
	// bl 0x820e0028
	ctx.lr = 0x821FCD2C;
	sub_820E0028(ctx, base);
	// lfs f29,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	f29.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmadds f13,f1,f29,f30
	ctx.f13.f64 = double(float(std::fma(ctx.f1.f64, f29.f64, f30.f64)));
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// fmr f2,f24
	ctx.f2.f64 = f24.f64;
	// fmr f1,f22
	ctx.f1.f64 = f22.f64;
	// lfs f0,28668(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28668);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,364(r15)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r15.u32 + 364, temp.u32);
	// bl 0x821fa930
	ctx.lr = 0x821FCD58;
	sub_821FA930(ctx, base);
	// stfs f30,444(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 444, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bge cr6,0x821fcd94
	if (!ctx.cr6.lt) goto loc_821FCD94;
	// clrlwi. r9,r20,31
	ctx.r9.u64 = r20.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r20,16
	ctx.r10.u64 = r20.u32 & 0xFFFF;
	// bne 0x821fcd98
	if (!ctx.cr0.eq) goto loc_821FCD98;
loc_821FCD74:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821fcd74
	if (ctx.cr0.eq) goto loc_821FCD74;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821fcd98
	if (ctx.cr6.lt) goto loc_821FCD98;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821fcd98
	goto loc_821FCD98;
loc_821FCD94:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_821FCD98:
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r15
	ctx.r4.u64 = ctx.r11.u64 + r15.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x820e2028
	ctx.lr = 0x821FCDB4;
	sub_820E2028(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,436(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 436);
	ctx.f0.f64 = double(temp.f32);
	// lis r26,-32166
	r26.s64 = -2108030976;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
	// stfs f27,92(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f13,-23272(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23272);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lwz r11,508(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 508);
	// lfs f0,432(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 432);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,440(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 440);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f27,352(r11)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r11.u32 + 352, temp.u32);
	// lwz r11,7792(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 7792);
	// lwz r4,1644(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1644);
	// bl 0x820e1ec0
	ctx.lr = 0x821FCE0C;
	sub_820E1EC0(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r25,r11,3316
	r25.s64 = ctx.r11.s64 + 3316;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x820e1c28
	ctx.lr = 0x821FCE20;
	sub_820E1C28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64;
	// lfs f2,20960(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20960);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82204ae0
	ctx.lr = 0x821FCE30;
	sub_82204AE0(ctx, base);
	// stfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// fcmpu cr6,f1,f27
	ctx.cr6.compare(ctx.f1.f64, f27.f64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// bge cr6,0x821fce50
	if (!ctx.cr6.lt) goto loc_821FCE50;
	// fmuls f13,f1,f1
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lfs f0,20956(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20956);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f13,f13,f29,f0
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, f29.f64, -ctx.f0.f64)));
	// b 0x821fce54
	goto loc_821FCE54;
loc_821FCE50:
	// lfs f13,20956(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20956);
	ctx.f13.f64 = double(temp.f32);
loc_821FCE54:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f2,f27
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f27.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,20952(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20952);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 - f31.f64));
	// lfs f18,16688(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16688);
	f18.f64 = double(temp.f32);
	// lfs f0,20948(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20948);
	ctx.f0.f64 = double(temp.f32);
	// fmr f3,f18
	ctx.f3.f64 = f18.f64;
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// bl 0x82204ae0
	ctx.lr = 0x821FCE80;
	sub_82204AE0(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(r20.s32, ctx.r11.s32, ctx.xer);
	// lwz r11,508(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 508);
	// blt cr6,0x821fceac
	if (ctx.cr6.lt) goto loc_821FCEAC;
	// lfs f0,356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 356);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,356
	ctx.r10.s64 = ctx.r11.s64 + 356;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x821fceac
	if (!ctx.cr6.lt) goto loc_821FCEAC;
	// stfs f1,0(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_821FCEAC:
	// lfs f0,356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 356);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// lfs f13,352(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 352);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,360(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 360, temp.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// lfs f16,16308(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16308);
	f16.f64 = double(temp.f32);
	// fmr f3,f16
	ctx.f3.f64 = f16.f64;
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f0,248(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// fadds f1,f0,f15
	ctx.f1.f64 = double(float(ctx.f0.f64 + f15.f64));
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// bl 0x82204ae0
	ctx.lr = 0x821FCF00;
	sub_82204AE0(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// fmr f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64;
	// lfs f4,140(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822028c8
	ctx.lr = 0x821FCF18;
	sub_822028C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,480(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 480);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,484(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 484);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,16232(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16232);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// lfs f13,488(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 488);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bge cr6,0x821fcf50
	if (!ctx.cr6.lt) goto loc_821FCF50;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x821fcf60
	if (!ctx.cr6.lt) goto loc_821FCF60;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x821fcf64
	goto loc_821FCF64;
loc_821FCF50:
	// fcmpu cr6,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x821fcf60
	if (!ctx.cr6.lt) goto loc_821FCF60;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x821fcf64
	goto loc_821FCF64;
loc_821FCF60:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_821FCF64:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f29,f12,f0
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f28,f11,f0
	f28.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f26,f13,f0
	f26.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// fmr f1,f17
	ctx.f1.f64 = f17.f64;
	// lfs f23,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	f23.f64 = double(temp.f32);
	// fmr f3,f23
	ctx.f3.f64 = f23.f64;
	// bl 0x82204ae0
	ctx.lr = 0x821FCF88;
	sub_82204AE0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// lfs f17,2332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2332);
	f17.f64 = double(temp.f32);
	// beq cr6,0x821fcfe8
	if (ctx.cr6.eq) goto loc_821FCFE8;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bge cr6,0x821fcfd0
	if (!ctx.cr6.lt) goto loc_821FCFD0;
	// clrlwi. r9,r20,31
	ctx.r9.u64 = r20.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r20,16
	ctx.r10.u64 = r20.u32 & 0xFFFF;
	// bne 0x821fcfd4
	if (!ctx.cr0.eq) goto loc_821FCFD4;
loc_821FCFB0:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821fcfb0
	if (ctx.cr0.eq) goto loc_821FCFB0;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821fcfd4
	if (ctx.cr6.lt) goto loc_821FCFD4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821fcfd4
	goto loc_821FCFD4;
loc_821FCFD0:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_821FCFD4:
	// addi r11,r11,1424
	ctx.r11.s64 = ctx.r11.s64 + 1424;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r15
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f20,f0,f1
	f20.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// b 0x821fcffc
	goto loc_821FCFFC;
loc_821FCFE8:
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64;
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// fmuls f1,f1,f17
	ctx.f1.f64 = double(float(ctx.f1.f64 * f17.f64));
	// bl 0x82204ae0
	ctx.lr = 0x821FCFF8;
	sub_82204AE0(ctx, base);
	// fmr f20,f1
	ctx.fpscr.disableFlushMode();
	f20.f64 = ctx.f1.f64;
loc_821FCFFC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f25,16372(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16372);
	f25.f64 = double(temp.f32);
	// fmuls f1,f20,f25
	ctx.f1.f64 = double(float(f20.f64 * f25.f64));
	// bl 0x820e0028
	ctx.lr = 0x821FD00C;
	sub_820E0028(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16616);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fcmpu cr6,f1,f27
	ctx.cr6.compare(ctx.f1.f64, f27.f64);
	// beq cr6,0x821fd03c
	if (ctx.cr6.eq) goto loc_821FD03C;
	// bl 0x820e0188
	ctx.lr = 0x821FD024;
	sub_820E0188(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,28444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28444);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x820e0160
	ctx.lr = 0x821FD034;
	sub_820E0160(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// b 0x821fd040
	goto loc_821FD040;
loc_821FD03C:
	// fmr f31,f27
	ctx.fpscr.disableFlushMode();
	f31.f64 = f27.f64;
loc_821FD040:
	// lfs f15,320(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 320);
	f15.f64 = double(temp.f32);
	// fcmpu cr6,f15,f30
	ctx.cr6.compare(f15.f64, f30.f64);
	// bge cr6,0x821fd078
	if (!ctx.cr6.lt) goto loc_821FD078;
	// fcmpu cr6,f15,f27
	ctx.cr6.compare(f15.f64, f27.f64);
	// beq cr6,0x821fd070
	if (ctx.cr6.eq) goto loc_821FD070;
	// fmr f1,f15
	ctx.f1.f64 = f15.f64;
	// bl 0x820e0188
	ctx.lr = 0x821FD05C;
	sub_820E0188(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16204);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x820e0160
	ctx.lr = 0x821FD06C;
	sub_820E0160(ctx, base);
	// b 0x821fd074
	goto loc_821FD074;
loc_821FD070:
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
loc_821FD074:
	// fmuls f31,f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f31.f64 * ctx.f1.f64));
loc_821FD078:
	// fmuls f0,f31,f21
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 * f21.f64));
	// lwz r9,508(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 508);
	// fcmpu cr6,f0,f0
	ctx.cr6.compare(ctx.f0.f64, ctx.f0.f64);
	// beq cr6,0x821fd0d0
	if (ctx.cr6.eq) goto loc_821FD0D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bge cr6,0x821fd0c0
	if (!ctx.cr6.lt) goto loc_821FD0C0;
	// clrlwi. r8,r20,31
	ctx.r8.u64 = r20.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// clrlwi r10,r20,16
	ctx.r10.u64 = r20.u32 & 0xFFFF;
	// bne 0x821fd0c4
	if (!ctx.cr0.eq) goto loc_821FD0C4;
loc_821FD0A0:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x821fd0a0
	if (ctx.cr0.eq) goto loc_821FD0A0;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821fd0c4
	if (ctx.cr6.lt) goto loc_821FD0C4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821fd0c4
	goto loc_821FD0C4;
loc_821FD0C0:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_821FD0C4:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f0,5388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5388);
	ctx.f0.f64 = double(temp.f32);
loc_821FD0D0:
	// stfs f29,464(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 464, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f28,468(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 468, temp.u32);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// stfs f26,472(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 472, temp.u32);
	// stfs f0,476(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 476, temp.u32);
	// bge cr6,0x821fd118
	if (!ctx.cr6.lt) goto loc_821FD118;
	// clrlwi. r8,r20,31
	ctx.r8.u64 = r20.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// clrlwi r10,r20,16
	ctx.r10.u64 = r20.u32 & 0xFFFF;
	// bne 0x821fd11c
	if (!ctx.cr0.eq) goto loc_821FD11C;
loc_821FD0F8:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x821fd0f8
	if (ctx.cr0.eq) goto loc_821FD0F8;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821fd11c
	if (ctx.cr6.lt) goto loc_821FD11C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821fd11c
	goto loc_821FD11C;
loc_821FD118:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_821FD11C:
	// addi r11,r11,336
	ctx.r11.s64 = ctx.r11.s64 + 336;
	// fmr f1,f19
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f19.f64;
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x820e2028
	ctx.lr = 0x821FD138;
	sub_820E2028(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x821fd1d4
	if (ctx.cr6.eq) goto loc_821FD1D4;
loc_821FD140:
	// lwz r11,48(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 48);
	// lbz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x821fd160
	if (!ctx.cr6.gt) goto loc_821FD160;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821faf80
	ctx.lr = 0x821FD158;
	sub_821FAF80(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne 0x821fd140
	if (!ctx.cr0.eq) goto loc_821FD140;
loc_821FD160:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x821fd1d4
	if (ctx.cr6.eq) goto loc_821FD1D4;
	// lwz r11,48(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 48);
	// lbz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 52);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x821fd1d4
	if (ctx.cr6.eq) goto loc_821FD1D4;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// lbz r8,14(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r10,r10,528
	ctx.r10.s64 = ctx.r10.s64 + 528;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r6,255
	ctx.r6.s64 = 255;
	// ori r8,r8,64
	ctx.r8.u64 = ctx.r8.u64 | 64;
	// lfs f0,16188(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16188);
	ctx.f0.f64 = double(temp.f32);
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// stfs f27,80(r11)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stfs f27,84(r11)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stb r9,54(r11)
	REX_STORE_U8(ctx.r11.u32 + 54, ctx.r9.u8);
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stb r6,55(r11)
	REX_STORE_U8(ctx.r11.u32 + 55, ctx.r6.u8);
	// stfs f30,68(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stw r9,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r9.u32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stb r8,14(r11)
	REX_STORE_U8(ctx.r11.u32 + 14, ctx.r8.u8);
	// stfs f27,36(r11)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stb r10,52(r11)
	REX_STORE_U8(ctx.r11.u32 + 52, ctx.r10.u8);
	// stfs f27,40(r11)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stw r9,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// b 0x821fd1d8
	goto loc_821FD1D8;
loc_821FD1D4:
	// li r9,1
	ctx.r9.s64 = 1;
loc_821FD1D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bge cr6,0x821fd210
	if (!ctx.cr6.lt) goto loc_821FD210;
	// clrlwi. r8,r20,31
	ctx.r8.u64 = r20.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// clrlwi r10,r20,16
	ctx.r10.u64 = r20.u32 & 0xFFFF;
	// bne 0x821fd214
	if (!ctx.cr0.eq) goto loc_821FD214;
loc_821FD1F0:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x821fd1f0
	if (ctx.cr0.eq) goto loc_821FD1F0;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821fd214
	if (ctx.cr6.lt) goto loc_821FD214;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x821fd214
	goto loc_821FD214;
loc_821FD210:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_821FD214:
	// addi r11,r11,1569
	ctx.r11.s64 = ctx.r11.s64 + 1569;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f26,r11,r15
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	f26.f64 = double(temp.f32);
	// beq cr6,0x821fd720
	if (ctx.cr6.eq) goto loc_821FD720;
	// stfs f27,112(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r30,1468(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 1468);
	// stfs f27,116(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f27,120(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r28,r30,80
	r28.s64 = r30.s64 + 80;
	// stfs f27,124(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r31,48(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 48);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fd6c8
	if (ctx.cr6.eq) goto loc_821FD6C8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f27,128(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lis r8,-32173
	ctx.r8.s64 = -2108489728;
	// stfs f30,136(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// stfs f27,132(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r5,r8,512
	ctx.r5.s64 = ctx.r8.s64 + 512;
	// stfs f30,140(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r11,7792(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 7792);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r6,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r10,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// stfs f30,204(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// lwz r4,1644(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1644);
	// bl 0x820e1df8
	ctx.lr = 0x821FD2A4;
	sub_820E1DF8(ctx, base);
	// lwz r11,7792(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 7792);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,1644(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1644);
	// bl 0x820e1df8
	ctx.lr = 0x821FD2B8;
	sub_820E1DF8(ctx, base);
	// addi r5,r1,528
	ctx.r5.s64 = ctx.r1.s64 + 528;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x820e1bf0
	ctx.lr = 0x821FD2C8;
	sub_820E1BF0(ctx, base);
	// stfs f27,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x820e2290
	ctx.lr = 0x821FD2D8;
	sub_820E2290(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821f97a0
	ctx.lr = 0x821FD2E0;
	sub_821F97A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821fd2f8
	if (ctx.cr0.eq) goto loc_821FD2F8;
	// stfs f27,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f14,196(r1)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f27,200(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f27,204(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
loc_821FD2F8:
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820e1c28
	ctx.lr = 0x821FD304;
	sub_820E1C28(ctx, base);
	// fmr f2,f14
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f14.f64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// bl 0x82204ae0
	ctx.lr = 0x821FD310;
	sub_82204AE0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// fmr f28,f19
	f28.f64 = f19.f64;
	// lfs f0,16272(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16272);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f19,f0
	ctx.cr6.compare(f19.f64, ctx.f0.f64);
	// ble cr6,0x821fd32c
	if (!ctx.cr6.gt) goto loc_821FD32C;
	// fmr f28,f0
	f28.f64 = ctx.f0.f64;
loc_821FD32C:
	// fcmpu cr6,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f27.f64);
	// ble cr6,0x821fd3b0
	if (!ctx.cr6.gt) goto loc_821FD3B0;
	// lfs f2,176(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// fnmsubs f1,f31,f23,f30
	ctx.f1.f64 = double(float(-std::fma(f31.f64, f23.f64, -f30.f64)));
	// bl 0x82204ae0
	ctx.lr = 0x821FD344;
	sub_82204AE0(ctx, base);
	// fmuls f22,f1,f22
	ctx.fpscr.disableFlushMode();
	f22.f64 = double(float(ctx.f1.f64 * f22.f64));
	// fmr f3,f16
	ctx.f3.f64 = f16.f64;
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82204ae0
	ctx.lr = 0x821FD358;
	sub_82204AE0(ctx, base);
	// fadds f24,f1,f24
	ctx.fpscr.disableFlushMode();
	f24.f64 = double(float(ctx.f1.f64 + f24.f64));
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f22
	ctx.f1.f64 = f22.f64;
	// fmr f2,f24
	ctx.f2.f64 = f24.f64;
	// bl 0x821fa930
	ctx.lr = 0x821FD370;
	sub_821FA930(ctx, base);
	// stfs f27,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f31,f0,f30
	ctx.f0.f64 = double(float(std::fma(f31.f64, ctx.f0.f64, f30.f64)));
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,76(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f31,108(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 108, temp.u32);
	// b 0x821fd3b4
	goto loc_821FD3B4;
loc_821FD3B0:
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
loc_821FD3B4:
	// stfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f22,96(r31)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f24,100(r31)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// bl 0x821f97a0
	ctx.lr = 0x821FD3C8;
	sub_821F97A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821fd3e0
	if (ctx.cr0.eq) goto loc_821FD3E0;
	// stfs f27,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f14,84(r1)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f27,88(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f27,92(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_821FD3E0:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r31,116
	ctx.r10.s64 = r31.s64 + 116;
	// addi r30,r31,148
	r30.s64 = r31.s64 + 148;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r10.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
	// bl 0x820e1c28
	ctx.lr = 0x821FD418;
	sub_820E1C28(ctx, base);
	// fadds f13,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + f30.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// lfs f0,-30672(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30672);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82204ae0
	ctx.lr = 0x821FD434;
	sub_82204AE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// bl 0x820e22e8
	ctx.lr = 0x821FD440;
	sub_820E22E8(ctx, base);
	// lfs f0,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x821fd470
	if (!ctx.cr6.lt) goto loc_821FD470;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
loc_821FD470:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e2028
	ctx.lr = 0x821FD484;
	sub_820E2028(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e2290
	ctx.lr = 0x821FD490;
	sub_820E2290(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f97a0
	ctx.lr = 0x821FD498;
	sub_821F97A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821fd4c4
	if (ctx.cr0.eq) goto loc_821FD4C4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
loc_821FD4C4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r24,1468(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1468);
	// addi r29,r24,128
	r29.s64 = r24.s64 + 128;
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r24)
	REX_STORE_U32(r24.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r24)
	REX_STORE_U32(r24.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r11,12(r24)
	REX_STORE_U32(r24.u32 + 12, ctx.r11.u32);
	// bl 0x82202e00
	ctx.lr = 0x821FD4F4;
	sub_82202E00(ctx, base);
	// lfs f0,336(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 336);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmuls f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x82202e00
	ctx.lr = 0x821FD504;
	sub_82202E00(ctx, base);
	// lfs f0,344(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x821fd530
	if (!ctx.cr6.gt) goto loc_821FD530;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r8,8(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r7,12(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 12);
	// b 0x821fd540
	goto loc_821FD540;
loc_821FD530:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// lwz r9,4(r19)
	ctx.r9.u64 = REX_LOAD_U32(r19.u32 + 4);
	// lwz r8,8(r19)
	ctx.r8.u64 = REX_LOAD_U32(r19.u32 + 8);
	// lwz r7,12(r19)
	ctx.r7.u64 = REX_LOAD_U32(r19.u32 + 12);
loc_821FD540:
	// stw r7,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f30.f64);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// ble cr6,0x821fd5ac
	if (!ctx.cr6.gt) goto loc_821FD5AC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f3,28548(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28548);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82204ae0
	ctx.lr = 0x821FD56C;
	sub_82204AE0(ctx, base);
	// fsubs f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f30.f64));
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// lfs f4,124(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// fnmsubs f31,f0,f25,f30
	f31.f64 = double(float(-std::fma(ctx.f0.f64, f25.f64, -f30.f64)));
	// bl 0x82202c38
	ctx.lr = 0x821FD58C;
	sub_82202C38(ctx, base);
	// lfs f0,452(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 452);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmuls f2,f31,f0
	ctx.f2.f64 = double(float(f31.f64 * ctx.f0.f64));
	// stfs f2,452(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 452, temp.u32);
	// lfs f4,460(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 460);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,456(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 456);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,448(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 448);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822028c8
	ctx.lr = 0x821FD5AC;
	sub_822028C8(ctx, base);
loc_821FD5AC:
	// fcmpu cr6,f15,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f15.f64, f30.f64);
	// bge cr6,0x821fd628
	if (!ctx.cr6.lt) goto loc_821FD628;
	// lfs f1,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f13,f1,f2
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// lfs f3,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,16844(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16844);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821fd5e8
	if (ctx.cr6.gt) goto loc_821FD5E8;
	// fsubs f13,f1,f3
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821fd628
	if (!ctx.cr6.gt) goto loc_821FD628;
loc_821FD5E8:
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lfs f4,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f4.f64 = double(temp.f32);
	// bl 0x82202c38
	ctx.lr = 0x821FD5F4;
	sub_82202C38(ctx, base);
	// fsubs f0,f23,f15
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f23.f64 - f15.f64));
	// lfs f13,404(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 404);
	ctx.f13.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82204ae0
	ctx.lr = 0x821FD60C;
	sub_82204AE0(ctx, base);
	// stfs f1,404(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// lfs f4,412(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 412);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,408(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 408);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,400(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 400);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822028c8
	ctx.lr = 0x821FD628;
	sub_822028C8(ctx, base);
loc_821FD628:
	// lwz r11,48(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 48);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * f29.f64));
	// bl 0x820e1cc0
	ctx.lr = 0x821FD640;
	sub_820E1CC0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bge cr6,0x821fd678
	if (!ctx.cr6.lt) goto loc_821FD678;
	// clrlwi. r9,r20,31
	ctx.r9.u64 = r20.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r20,16
	ctx.r10.u64 = r20.u32 & 0xFFFF;
	// bne 0x821fd67c
	if (!ctx.cr0.eq) goto loc_821FD67C;
loc_821FD658:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821fd658
	if (ctx.cr0.eq) goto loc_821FD658;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821fd67c
	if (ctx.cr6.lt) goto loc_821FD67C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821fd67c
	goto loc_821FD67C;
loc_821FD678:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_821FD67C:
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r4,r11,r15
	ctx.r4.u64 = ctx.r11.u64 + r15.u64;
	// bl 0x820e2028
	ctx.lr = 0x821FD698;
	sub_820E2028(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x821fb248
	ctx.lr = 0x821FD6A8;
	sub_821FB248(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// lfs f0,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
	// lfs f0,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,204(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 204, temp.u32);
	// stfs f30,208(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 208, temp.u32);
	// b 0x821fd718
	goto loc_821FD718;
loc_821FD6C8:
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r31,148
	ctx.r3.s64 = r31.s64 + 148;
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// lbz r6,73(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 73);
	// lfs f2,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821fa930
	ctx.lr = 0x821FD6E4;
	sub_821FA930(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// addi r5,r31,196
	ctx.r5.s64 = r31.s64 + 196;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// lfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1cc0
	ctx.lr = 0x821FD714;
	sub_820E1CC0(ctx, base);
	// lwz r24,1468(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1468);
loc_821FD718:
	// stfs f27,12(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r24.u32 + 12, temp.u32);
	// stfs f27,12(r28)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r28.u32 + 12, temp.u32);
loc_821FD720:
	// fcmpu cr6,f26,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f26.f64, f30.f64);
	// beq cr6,0x821fd74c
	if (ctx.cr6.eq) goto loc_821FD74C;
	// lfs f0,248(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// fadds f0,f26,f0
	ctx.f0.f64 = double(float(f26.f64 + ctx.f0.f64));
	// lfs f4,252(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,244(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,240(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f3,f0,f30
	ctx.f3.f64 = double(float(ctx.f0.f64 - f30.f64));
	// stfs f3,248(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// bl 0x82202a80
	ctx.lr = 0x821FD74C;
	sub_82202A80(ctx, base);
loc_821FD74C:
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x820e1b28
	ctx.lr = 0x821FD75C;
	sub_820E1B28(ctx, base);
	// addi r5,r1,560
	ctx.r5.s64 = ctx.r1.s64 + 560;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// lfs f1,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x820e2028
	ctx.lr = 0x821FD770;
	sub_820E2028(ctx, base);
	// lwz r11,7792(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 7792);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lfs f0,1712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1712);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f0,1716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f0,1720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1720);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f30,140(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x820e2320
	ctx.lr = 0x821FD79C;
	sub_820E2320(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	f26.f64 = ctx.f1.f64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821fd7c4
	if (!ctx.cr6.lt) goto loc_821FD7C4;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,340(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 340);
	// slw r11,r11,r20
	ctx.r11.u64 = r20.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r20.u8 & 0x3F));
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x821fd7d0
	goto loc_821FD7D0;
loc_821FD7C4:
	// lwz r11,340(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 340);
	// and r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 & r20.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_821FD7D0:
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fd9f0
	if (ctx.cr6.eq) goto loc_821FD9F0;
	// stfs f27,288(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// mr r31,r19
	r31.u64 = r19.u64;
	// stfs f27,292(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// li r30,4
	r30.s64 = 4;
	// stfs f27,296(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f27,300(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 300, temp.u32);
loc_821FD7F8:
	// lwz r11,7792(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 7792);
	// addi r5,r31,-80
	ctx.r5.s64 = r31.s64 + -80;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lwz r4,1644(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1644);
	// bl 0x820e1d28
	ctx.lr = 0x821FD80C;
	sub_820E1D28(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x820e1c28
	ctx.lr = 0x821FD818;
	sub_820E1C28(ctx, base);
	// fsubs f1,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f30.f64 - ctx.f1.f64));
	// fcmpu cr6,f1,f27
	ctx.cr6.compare(ctx.f1.f64, f27.f64);
	// ble cr6,0x821fd840
	if (!ctx.cr6.gt) goto loc_821FD840;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x820e1cc0
	ctx.lr = 0x821FD830;
	sub_820E1CC0(ctx, base);
	// addi r5,r1,592
	ctx.r5.s64 = ctx.r1.s64 + 592;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x820e1b28
	ctx.lr = 0x821FD840;
	sub_820E1B28(ctx, base);
loc_821FD840:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x821fd7f8
	if (!ctx.cr0.eq) goto loc_821FD7F8;
	// lfs f25,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	f25.f64 = double(temp.f32);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// bl 0x820e1cc0
	ctx.lr = 0x821FD860;
	sub_820E1CC0(ctx, base);
	// stfs f30,300(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82202e00
	ctx.lr = 0x821FD86C;
	sub_82202E00(ctx, base);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// fcmpu cr6,f26,f23
	ctx.cr6.compare(f26.f64, f23.f64);
	// bge cr6,0x821fd9f4
	if (!ctx.cr6.lt) goto loc_821FD9F4;
	// lwz r11,7792(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 7792);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lwz r4,1644(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1644);
	// bl 0x820e1ec0
	ctx.lr = 0x821FD88C;
	sub_820E1EC0(ctx, base);
	// stfs f30,348(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x820e1c28
	ctx.lr = 0x821FD89C;
	sub_820E1C28(ctx, base);
	// fcmpu cr6,f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f25.f64);
	// bge cr6,0x821fd8cc
	if (!ctx.cr6.lt) goto loc_821FD8CC;
	// fadds f13,f1,f30
	ctx.f13.f64 = double(float(ctx.f1.f64 + f30.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-24720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24720);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820e0028
	ctx.lr = 0x821FD8B8;
	sub_820E0028(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,17120(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17120);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f1,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// b 0x821fd8d4
	goto loc_821FD8D4;
loc_821FD8CC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-18356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18356);
	ctx.f1.f64 = double(temp.f32);
loc_821FD8D4:
	// fcmpu cr6,f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f27.f64);
	// beq cr6,0x821fd8f8
	if (ctx.cr6.eq) goto loc_821FD8F8;
	// bl 0x820e0188
	ctx.lr = 0x821FD8E0;
	sub_820E0188(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,16060(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16060);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x820e0160
	ctx.lr = 0x821FD8F0;
	sub_820E0160(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// b 0x821fd8fc
	goto loc_821FD8FC;
loc_821FD8F8:
	// fmr f31,f27
	ctx.fpscr.disableFlushMode();
	f31.f64 = f27.f64;
loc_821FD8FC:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82202e00
	ctx.lr = 0x821FD904;
	sub_82202E00(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// fcmpu cr6,f26,f18
	ctx.cr6.compare(f26.f64, f18.f64);
	// ble cr6,0x821fd924
	if (!ctx.cr6.gt) goto loc_821FD924;
	// fsubs f13,f26,f18
	ctx.f13.f64 = double(float(f26.f64 - f18.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-17488(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -17488);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f0,f13,f0,f30
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f0.f64, -f30.f64)));
	// fmuls f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 * f31.f64));
loc_821FD924:
	// fcmpu cr6,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f27.f64);
	// ble cr6,0x821fd984
	if (!ctx.cr6.gt) goto loc_821FD984;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// lfs f4,12(r16)
	temp.u32 = REX_LOAD_U32(r16.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r16)
	temp.u32 = REX_LOAD_U32(r16.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r16)
	temp.u32 = REX_LOAD_U32(r16.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r16)
	temp.u32 = REX_LOAD_U32(r16.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82202c38
	ctx.lr = 0x821FD944;
	sub_82202C38(ctx, base);
	// fmuls f0,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 * f28.f64));
	// lfs f12,372(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 372);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f13,f31,f23,f30
	ctx.f13.f64 = double(float(-std::fma(f31.f64, f23.f64, -f30.f64)));
	// lfs f11,376(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 376);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lfs f4,380(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 380);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,368(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 368);
	ctx.f1.f64 = double(temp.f32);
	// fdivs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 / f29.f64));
	// fmuls f2,f13,f12
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f2,372(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// fmuls f3,f0,f11
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f3,376(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// bl 0x82202a80
	ctx.lr = 0x821FD97C;
	sub_82202A80(ctx, base);
	// lwz r11,1468(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1468);
	// b 0x821fd998
	goto loc_821FD998;
loc_821FD984:
	// lwz r11,1468(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1468);
	// fmuls f0,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 * f28.f64));
	// stfs f0,0(r16)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r16.u32 + 0, temp.u32);
	// stfs f0,168(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// stfs f0,164(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 164, temp.u32);
loc_821FD998:
	// fsubs f31,f30,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f30.f64 - f31.f64));
	// addi r31,r11,104
	r31.s64 = ctx.r11.s64 + 104;
	// li r30,2
	r30.s64 = 2;
loc_821FD9A4:
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lfs f4,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r29,r31,-8
	r29.s64 = r31.s64 + -8;
	// lfs f2,-4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + -8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82202c38
	ctx.lr = 0x821FD9C0;
	sub_82202C38(ctx, base);
	// lfs f0,424(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 424);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmuls f3,f31,f0
	ctx.f3.f64 = double(float(f31.f64 * ctx.f0.f64));
	// stfs f3,424(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// lfs f4,428(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 428);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,420(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 420);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,416(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 416);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82202a80
	ctx.lr = 0x821FD9E0;
	sub_82202A80(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x821fd9a4
	if (!ctx.cr0.eq) goto loc_821FD9A4;
	// b 0x821fd9f4
	goto loc_821FD9F4;
loc_821FD9F0:
	// lfs f25,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	f25.f64 = double(temp.f32);
loc_821FD9F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,27124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27124);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f15,f0
	ctx.cr6.compare(f15.f64, ctx.f0.f64);
	// bge cr6,0x821fdb88
	if (!ctx.cr6.lt) goto loc_821FDB88;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fcmpu cr6,f20,f30
	ctx.cr6.compare(f20.f64, f30.f64);
	// lfs f0,20944(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20944);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f29,f15,f0
	f29.f64 = double(float(f15.f64 * ctx.f0.f64));
	// ble cr6,0x821fda40
	if (!ctx.cr6.gt) goto loc_821FDA40;
	// fcmpu cr6,f29,f25
	ctx.cr6.compare(f29.f64, f25.f64);
	// bge cr6,0x821fda28
	if (!ctx.cr6.lt) goto loc_821FDA28;
	// fdivs f29,f29,f20
	f29.f64 = double(float(f29.f64 / f20.f64));
	// b 0x821fda40
	goto loc_821FDA40;
loc_821FDA28:
	// fsubs f0,f29,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f29.f64 - f25.f64));
	// fdivs f31,f25,f20
	f31.f64 = double(float(f25.f64 / f20.f64));
	// fmuls f1,f0,f25
	ctx.f1.f64 = double(float(ctx.f0.f64 * f25.f64));
	// bl 0x820e0028
	ctx.lr = 0x821FDA38;
	sub_820E0028(ctx, base);
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 - f31.f64));
	// fmadds f29,f1,f0,f31
	f29.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, f31.f64)));
loc_821FDA40:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f17
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f17.f64;
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// lfs f31,16172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16172);
	f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x82204ae0
	ctx.lr = 0x821FDA58;
	sub_82204AE0(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f31.f64));
	// fcmpu cr6,f29,f27
	ctx.cr6.compare(f29.f64, f27.f64);
	// fmadds f31,f0,f16,f30
	f31.f64 = double(float(std::fma(ctx.f0.f64, f16.f64, f30.f64)));
	// beq cr6,0x821fda80
	if (ctx.cr6.eq) goto loc_821FDA80;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x820e0188
	ctx.lr = 0x821FDA70;
	sub_820E0188(ctx, base);
	// fmuls f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f31.f64));
	// bl 0x820e0160
	ctx.lr = 0x821FDA78;
	sub_820E0160(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// b 0x821fda84
	goto loc_821FDA84;
loc_821FDA80:
	// fmr f31,f27
	ctx.fpscr.disableFlushMode();
	f31.f64 = f27.f64;
loc_821FDA84:
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x820e1cf8
	ctx.lr = 0x821FDA94;
	sub_820E1CF8(ctx, base);
	// lwz r31,1468(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 1468);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// beq cr6,0x821fdab0
	if (ctx.cr6.eq) goto loc_821FDAB0;
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x820e1cf8
	ctx.lr = 0x821FDAB0;
	sub_820E1CF8(ctx, base);
loc_821FDAB0:
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f28,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	f28.f64 = double(temp.f32);
	// fmadds f1,f31,f28,f0
	ctx.f1.f64 = double(float(std::fma(f31.f64, f28.f64, ctx.f0.f64)));
	// bl 0x820e0028
	ctx.lr = 0x821FDAC0;
	sub_820E0028(ctx, base);
	// fadds f1,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 + f30.f64));
	// fcmpu cr6,f1,f27
	ctx.cr6.compare(ctx.f1.f64, f27.f64);
	// beq cr6,0x821fdae4
	if (ctx.cr6.eq) goto loc_821FDAE4;
	// bl 0x820e0188
	ctx.lr = 0x821FDAD0;
	sub_820E0188(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,20940(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20940);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x820e0160
	ctx.lr = 0x821FDAE0;
	sub_820E0160(ctx, base);
	// b 0x821fdae8
	goto loc_821FDAE8;
loc_821FDAE4:
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
loc_821FDAE8:
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x820e1cf8
	ctx.lr = 0x821FDAF4;
	sub_820E1CF8(ctx, base);
	// fcmpu cr6,f29,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f25.f64);
	// bge cr6,0x821fdb4c
	if (!ctx.cr6.lt) goto loc_821FDB4C;
	// fmuls f1,f29,f25
	ctx.f1.f64 = double(float(f29.f64 * f25.f64));
	// bl 0x820e0028
	ctx.lr = 0x821FDB04;
	sub_820E0028(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bne cr6,0x821fdb1c
	if (!ctx.cr6.eq) goto loc_821FDB1C;
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x820e1cf8
	ctx.lr = 0x821FDB1C;
	sub_820E1CF8(ctx, base);
loc_821FDB1C:
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x820e1cf8
	ctx.lr = 0x821FDB2C;
	sub_820E1CF8(ctx, base);
	// addi r5,r31,144
	ctx.r5.s64 = r31.s64 + 144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x820e1cf8
	ctx.lr = 0x821FDB3C;
	sub_820E1CF8(ctx, base);
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x820e1cf8
	ctx.lr = 0x821FDB4C;
	sub_820E1CF8(ctx, base);
loc_821FDB4C:
	// lfs f0,232(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f29,f0
	f31.f64 = double(float(f29.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820e0028
	ctx.lr = 0x821FDB5C;
	sub_820E0028(ctx, base);
	// fsubs f0,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 - ctx.f1.f64));
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// fcmpu cr6,f31,f28
	ctx.cr6.compare(f31.f64, f28.f64);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// ble cr6,0x821fdb80
	if (!ctx.cr6.gt) goto loc_821FDB80;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,27848(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27848);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f0,f13,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, f30.f64)));
	// b 0x821fdc8c
	goto loc_821FDC8C;
loc_821FDB80:
	// fsubs f1,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f30.f64 - ctx.f0.f64));
	// b 0x821fdc8c
	goto loc_821FDC8C;
loc_821FDB88:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-5128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -5128);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f15,f0
	ctx.cr6.compare(f15.f64, ctx.f0.f64);
	// ble cr6,0x821fdc90
	if (!ctx.cr6.gt) goto loc_821FDC90;
	// fcmpu cr6,f15,f23
	ctx.cr6.compare(f15.f64, f23.f64);
	// ble cr6,0x821fdba4
	if (!ctx.cr6.gt) goto loc_821FDBA4;
	// fmr f15,f23
	f15.f64 = f23.f64;
loc_821FDBA4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20936(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20936);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f0,f15,f0,f30
	ctx.f0.f64 = double(float(std::fma(f15.f64, ctx.f0.f64, -f30.f64)));
	// fmuls f31,f0,f13
	f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820e0028
	ctx.lr = 0x821FDBC0;
	sub_820E0028(ctx, base);
	// lwz r31,1468(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 1468);
	// fadds f1,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 + f30.f64));
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x820e1cf8
	ctx.lr = 0x821FDBD4;
	sub_820E1CF8(ctx, base);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 + ctx.f0.f64));
	// bl 0x820e0028
	ctx.lr = 0x821FDBE0;
	sub_820E0028(ctx, base);
	// fadds f31,f1,f23
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 + f23.f64));
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820e1cf8
	ctx.lr = 0x821FDBF4;
	sub_820E1CF8(ctx, base);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// beq cr6,0x821fdc0c
	if (ctx.cr6.eq) goto loc_821FDC0C;
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x820e1cf8
	ctx.lr = 0x821FDC0C;
	sub_820E1CF8(ctx, base);
loc_821FDC0C:
	// fsubs f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f31.f64 - f30.f64));
	// fcmpu cr6,f1,f27
	ctx.cr6.compare(ctx.f1.f64, f27.f64);
	// beq cr6,0x821fdc30
	if (ctx.cr6.eq) goto loc_821FDC30;
	// bl 0x820e0188
	ctx.lr = 0x821FDC1C;
	sub_820E0188(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16172(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16172);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x820e0160
	ctx.lr = 0x821FDC2C;
	sub_820E0160(ctx, base);
	// b 0x821fdc34
	goto loc_821FDC34;
loc_821FDC30:
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
loc_821FDC34:
	// fadds f31,f1,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 + f30.f64));
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bne cr6,0x821fdc50
	if (!ctx.cr6.eq) goto loc_821FDC50;
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x820e1cf8
	ctx.lr = 0x821FDC50;
	sub_820E1CF8(ctx, base);
loc_821FDC50:
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x820e1cf8
	ctx.lr = 0x821FDC60;
	sub_820E1CF8(ctx, base);
	// addi r5,r31,144
	ctx.r5.s64 = r31.s64 + 144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x820e1cf8
	ctx.lr = 0x821FDC70;
	sub_820E1CF8(ctx, base);
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x820e1cf8
	ctx.lr = 0x821FDC80;
	sub_820E1CF8(ctx, base);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_821FDC8C:
	// bl 0x820e1cf8
	ctx.lr = 0x821FDC90;
	sub_820E1CF8(ctx, base);
loc_821FDC90:
	// lwz r29,1468(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1468);
	// li r30,5
	r30.s64 = 5;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_821FDC9C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e2290
	ctx.lr = 0x821FDCA8;
	sub_820E2290(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x821f9810
	ctx.lr = 0x821FDCB4;
	sub_821F9810(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x821fdc9c
	if (!ctx.cr0.eq) goto loc_821FDC9C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lfs f31,16220(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16220);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821f9810
	ctx.lr = 0x821FDCD4;
	sub_821F9810(ctx, base);
	// addi r3,r29,112
	ctx.r3.s64 = r29.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x821f9810
	ctx.lr = 0x821FDCE0;
	sub_821F9810(ctx, base);
	// addi r3,r29,128
	ctx.r3.s64 = r29.s64 + 128;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x821f9810
	ctx.lr = 0x821FDCEC;
	sub_821F9810(ctx, base);
	// addi r3,r29,144
	ctx.r3.s64 = r29.s64 + 144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x821f9810
	ctx.lr = 0x821FDCF8;
	sub_821F9810(ctx, base);
	// addi r3,r29,80
	ctx.r3.s64 = r29.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x821f9810
	ctx.lr = 0x821FDD04;
	sub_821F9810(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x821f9810
	ctx.lr = 0x821FDD10;
	sub_821F9810(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bge cr6,0x821fdd48
	if (!ctx.cr6.lt) goto loc_821FDD48;
	// clrlwi. r9,r20,31
	ctx.r9.u64 = r20.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r20,16
	ctx.r10.u64 = r20.u32 & 0xFFFF;
	// bne 0x821fdd4c
	if (!ctx.cr0.eq) goto loc_821FDD4C;
loc_821FDD28:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821fdd28
	if (ctx.cr0.eq) goto loc_821FDD28;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821fdd4c
	if (ctx.cr6.lt) goto loc_821FDD4C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821fdd4c
	goto loc_821FDD4C;
loc_821FDD48:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_821FDD4C:
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r15
	ctx.r3.u64 = ctx.r11.u64 + r15.u64;
	// lfs f1,16224(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16224);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821f9810
	ctx.lr = 0x821FDD64;
	sub_821F9810(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bge cr6,0x821fdd9c
	if (!ctx.cr6.lt) goto loc_821FDD9C;
	// clrlwi. r9,r20,31
	ctx.r9.u64 = r20.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r20,16
	ctx.r10.u64 = r20.u32 & 0xFFFF;
	// bne 0x821fdda0
	if (!ctx.cr0.eq) goto loc_821FDDA0;
loc_821FDD7C:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821fdd7c
	if (ctx.cr0.eq) goto loc_821FDD7C;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821fdda0
	if (ctx.cr6.lt) goto loc_821FDDA0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821fdda0
	goto loc_821FDDA0;
loc_821FDD9C:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_821FDDA0:
	// addi r11,r11,336
	ctx.r11.s64 = ctx.r11.s64 + 336;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r15
	ctx.r3.u64 = ctx.r11.u64 + r15.u64;
	// lfs f1,32024(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32024);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821f9810
	ctx.lr = 0x821FDDB8;
	sub_821F9810(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bge cr6,0x821fddf0
	if (!ctx.cr6.lt) goto loc_821FDDF0;
	// clrlwi. r9,r20,31
	ctx.r9.u64 = r20.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r20,16
	ctx.r10.u64 = r20.u32 & 0xFFFF;
	// bne 0x821fddf4
	if (!ctx.cr0.eq) goto loc_821FDDF4;
loc_821FDDD0:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821fddd0
	if (ctx.cr0.eq) goto loc_821FDDD0;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821fddf4
	if (ctx.cr6.lt) goto loc_821FDDF4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821fddf4
	goto loc_821FDDF4;
loc_821FDDF0:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_821FDDF4:
	// addi r10,r11,1408
	ctx.r10.s64 = ctx.r11.s64 + 1408;
	// lwz r11,508(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 508);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d6d28
	ctx.lr = 0x821FDE08;
	sub_822D6D28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821fde5c
	if (ctx.cr0.eq) goto loc_821FDE5C;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bge cr6,0x821fde48
	if (!ctx.cr6.lt) goto loc_821FDE48;
	// clrlwi. r9,r20,31
	ctx.r9.u64 = r20.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r20,16
	ctx.r10.u64 = r20.u32 & 0xFFFF;
	// bne 0x821fde4c
	if (!ctx.cr0.eq) goto loc_821FDE4C;
loc_821FDE28:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821fde28
	if (ctx.cr0.eq) goto loc_821FDE28;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821fde4c
	if (ctx.cr6.lt) goto loc_821FDE4C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821fde4c
	goto loc_821FDE4C;
loc_821FDE48:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_821FDE4C:
	// addi r10,r11,1408
	ctx.r10.s64 = ctx.r11.s64 + 1408;
	// lwz r11,508(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 508);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f27,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
loc_821FDE5C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bge cr6,0x821fde94
	if (!ctx.cr6.lt) goto loc_821FDE94;
	// clrlwi. r9,r20,31
	ctx.r9.u64 = r20.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r20,16
	ctx.r10.u64 = r20.u32 & 0xFFFF;
	// bne 0x821fde98
	if (!ctx.cr0.eq) goto loc_821FDE98;
loc_821FDE74:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821fde74
	if (ctx.cr0.eq) goto loc_821FDE74;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821fde98
	if (ctx.cr6.lt) goto loc_821FDE98;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821fde98
	goto loc_821FDE98;
loc_821FDE94:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_821FDE98:
	// addi r10,r11,1424
	ctx.r10.s64 = ctx.r11.s64 + 1424;
	// lwz r11,508(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 508);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d6d28
	ctx.lr = 0x821FDEAC;
	sub_822D6D28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821fdf00
	if (ctx.cr0.eq) goto loc_821FDF00;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bge cr6,0x821fdeec
	if (!ctx.cr6.lt) goto loc_821FDEEC;
	// clrlwi. r9,r20,31
	ctx.r9.u64 = r20.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r20,16
	ctx.r10.u64 = r20.u32 & 0xFFFF;
	// bne 0x821fdef0
	if (!ctx.cr0.eq) goto loc_821FDEF0;
loc_821FDECC:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821fdecc
	if (ctx.cr0.eq) goto loc_821FDECC;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821fdef0
	if (ctx.cr6.lt) goto loc_821FDEF0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821fdef0
	goto loc_821FDEF0;
loc_821FDEEC:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_821FDEF0:
	// addi r10,r11,1424
	ctx.r10.s64 = ctx.r11.s64 + 1424;
	// lwz r11,508(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 508);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f27,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
loc_821FDF00:
	// stfs f27,156(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r29.u32 + 156, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f27,140(r29)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r29.u32 + 140, temp.u32);
	// stfs f27,124(r29)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r29.u32 + 124, temp.u32);
	// stfs f27,108(r29)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r29.u32 + 108, temp.u32);
	// addi r1,r1,1440
	ctx.r1.s64 = ctx.r1.s64 + 1440;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f4c
	ctx.lr = 0x821FDF20;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_822AD118) {
	REX_FUNC_PROLOGUE();
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// subf r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r8,r4,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r4.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822ad148
	if (!ctx.cr6.lt) goto loc_822AD148;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-4224
	ctx.r3.s64 = ctx.r11.s64 + -4224;
	// b 0x822d4588
	sub_822D4588(ctx, base);
	return;
loc_822AD148:
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822ad178
	if (ctx.cr6.lt) goto loc_822AD178;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822AD178:
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x822ad184
	if (!ctx.cr6.lt) goto loc_822AD184;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_822AD184:
	// b 0x822ad068
	sub_822AD068(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822AE518) {
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
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x822c80d0
	ctx.lr = 0x822AE534;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ae54c
	if (ctx.cr0.eq) goto loc_822AE54C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822b2660
	ctx.lr = 0x822AE544;
	sub_822B2660(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x822ae554
	goto loc_822AE554;
loc_822AE54C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_822AE554:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822ad9c0
	ctx.lr = 0x822AE560;
	sub_822AD9C0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
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

DEFINE_REX_FUNC(sub_822B1128) {
	REX_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b114c
	if (ctx.cr6.eq) goto loc_822B114C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x822b1150
	goto loc_822B1150;
loc_822B114C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_822B1150:
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
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
	// beq cr6,0x822b1174
	if (ctx.cr6.eq) goto loc_822B1174;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x822b1178
	goto loc_822B1178;
loc_822B1174:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822B1178:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,468(r11)
	REX_STORE_U8(ctx.r11.u32 + 468, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B36B0) {
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
	ctx.lr = 0x822B36B8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x822d6450
	ctx.lr = 0x822B36D4;
	sub_822D6450(ctx, base);
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// li r31,0
	r31.s64 = 0;
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
loc_822B36E0:
	// addi r11,r31,10
	ctx.r11.s64 = r31.s64 + 10;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r28,r29
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b3708
	if (ctx.cr6.eq) goto loc_822B3708;
	// bl 0x822b2880
	ctx.lr = 0x822B36F8;
	sub_822B2880(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x822ac210
	ctx.lr = 0x822B3704;
	sub_822AC210(ctx, base);
	// stwx r3,r28,r30
	REX_STORE_U32(r28.u32 + r30.u32, ctx.r3.u32);
loc_822B3708:
	// add r11,r31,r29
	ctx.r11.u64 = r31.u64 + r29.u64;
	// addi r10,r31,15
	ctx.r10.s64 = r31.s64 + 15;
	// add r8,r31,r30
	ctx.r8.u64 = r31.u64 + r30.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,1
	ctx.r9.s64 = r31.s64 + 1;
	// lbz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 56);
	// clrlwi r31,r9,24
	r31.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// stb r11,56(r8)
	REX_STORE_U8(ctx.r8.u32 + 56, ctx.r11.u8);
	// lfsx f0,r10,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r30
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + r30.u32, temp.u32);
	// blt cr6,0x822b36e0
	if (ctx.cr6.lt) goto loc_822B36E0;
	// lbz r11,76(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 76);
	// stb r11,76(r30)
	REX_STORE_U8(r30.u32 + 76, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822B7250) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822B7258;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822a99c0
	ctx.lr = 0x822B7274;
	sub_822A99C0(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x822b7294
	if (ctx.cr6.eq) goto loc_822B7294;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822b7298
	goto loc_822B7298;
loc_822B7294:
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
loc_822B7298:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b72bc
	if (ctx.cr0.eq) goto loc_822B72BC;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,124
	ctx.r5.s64 = r31.s64 + 124;
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822aa9e0
	ctx.lr = 0x822B72B4;
	sub_822AA9E0(ctx, base);
	// stb r3,120(r31)
	REX_STORE_U8(r31.u32 + 120, ctx.r3.u8);
	// b 0x822b72c4
	goto loc_822B72C4;
loc_822B72BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,120(r31)
	REX_STORE_U8(r31.u32 + 120, ctx.r11.u8);
loc_822B72C4:
	// lbz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822b7300
	if (ctx.cr0.eq) goto loc_822B7300;
	// addi r10,r31,140
	ctx.r10.s64 = r31.s64 + 140;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r9,r29,4
	ctx.r9.s64 = r29.s64 + 4;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822ad9c0
	ctx.lr = 0x822B72F0;
	sub_822AD9C0(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// stb r10,193(r11)
	REX_STORE_U8(ctx.r11.u32 + 193, ctx.r10.u8);
loc_822B7300:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822B98E0) {
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
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822c5ac0
	ctx.lr = 0x822B98FC;
	sub_822C5AC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822b9910
	if (!ctx.cr0.eq) goto loc_822B9910;
	// lbz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822b9978
	if (ctx.cr0.eq) goto loc_822B9978;
loc_822B9910:
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
	// addi r7,r11,376
	ctx.r7.s64 = ctx.r11.s64 + 376;
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
	// stfs f0,6020(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 6020, temp.u32);
	// lfs f0,44(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6024(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 6024, temp.u32);
	// lfs f0,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6028(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 6028, temp.u32);
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// stb r6,72(r31)
	REX_STORE_U8(r31.u32 + 72, ctx.r6.u8);
loc_822B9978:
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

DEFINE_REX_FUNC(sub_822BBFD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	// stfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -16, f30.u64);
	// stfd f31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, f31.u64);
	// lfs f0,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f31,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	f31.f64 = double(temp.f32);
	// fsubs f5,f9,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f10,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f10,f31
	ctx.f8.f64 = double(float(ctx.f10.f64 - f31.f64));
	// lfs f10,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f9,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f6,f9,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fsubs f4,f0,f10
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f10,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f31,f10
	ctx.f11.f64 = double(float(f31.f64 - ctx.f10.f64));
	// fmuls f2,f7,f7
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// lfs f0,24124(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24124);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f3,f9,f10
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fmuls f9,f13,f5
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fmuls f10,f5,f5
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmadds f2,f8,f8,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f8.f64, ctx.f8.f64, ctx.f2.f64)));
	// fmadds f1,f12,f4,f9
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f4.f64, ctx.f9.f64)));
	// fmadds f10,f4,f4,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f4.f64, ctx.f4.f64, ctx.f10.f64)));
	// fmadds f9,f6,f6,f2
	ctx.f9.f64 = double(float(std::fma(ctx.f6.f64, ctx.f6.f64, ctx.f2.f64)));
	// fmadds f2,f11,f3,f1
	ctx.f2.f64 = double(float(std::fma(ctx.f11.f64, ctx.f3.f64, ctx.f1.f64)));
	// fmadds f10,f3,f3,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f3.f64, ctx.f3.f64, ctx.f10.f64)));
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bgt cr6,0x822bc0fc
	if (ctx.cr6.gt) goto loc_822BC0FC;
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bgt cr6,0x822bc0d4
	if (ctx.cr6.gt) goto loc_822BC0D4;
	// stfs f31,0(r7)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// lfs f0,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,12(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lfs f0,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f11,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f13.f64)));
	// b 0x822bc260
	goto loc_822BC260;
loc_822BC0D4:
	// fdivs f12,f2,f10
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f2.f64 / ctx.f10.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsel f13,f11,f13,f12
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsel f13,f12,f0,f13
	ctx.f13.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// b 0x822bc1d4
	goto loc_822BC1D4;
loc_822BC0FC:
	// fmuls f12,f12,f7
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// fmadds f0,f11,f8,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f8.f64, ctx.f12.f64)));
	// fmadds f1,f13,f6,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f6.f64, ctx.f0.f64)));
	// bgt cr6,0x822bc13c
	if (ctx.cr6.gt) goto loc_822BC13C;
	// fdivs f12,f1,f9
	ctx.f12.f64 = double(float(ctx.f1.f64 / ctx.f9.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsel f0,f11,f0,f12
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f0,f12,f13,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// b 0x822bc1d4
	goto loc_822BC1D4;
loc_822BC13C:
	// fmuls f0,f4,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f3,f8,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f3.f64, ctx.f8.f64, ctx.f0.f64)));
	// fmadds f13,f5,f6,f0
	ctx.f13.f64 = double(float(std::fma(ctx.f5.f64, ctx.f6.f64, ctx.f0.f64)));
	// fmuls f0,f13,f13
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmsubs f0,f10,f9,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f9.f64, -ctx.f0.f64)));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x822bc188
	if (ctx.cr6.eq) goto loc_822BC188;
	// fmuls f30,f1,f10
	f30.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fmsubs f30,f13,f2,f30
	f30.f64 = double(float(std::fma(ctx.f13.f64, ctx.f2.f64, -f30.f64)));
	// fdivs f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 / ctx.f0.f64));
	// fsubs f30,f0,f11
	f30.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsel f0,f30,f11,f0
	ctx.f0.f64 = f30.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// fneg f30,f0
	f30.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f0,f30,f12,f0
	ctx.f0.f64 = f30.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// b 0x822bc18c
	goto loc_822BC18C;
loc_822BC188:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_822BC18C:
	// fmadds f2,f13,f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f2.f64)));
	// fcmpu cr6,f2,f12
	ctx.cr6.compare(ctx.f2.f64, ctx.f12.f64);
	// bge cr6,0x822bc1a8
	if (!ctx.cr6.lt) goto loc_822BC1A8;
	// fdivs f0,f1,f9
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f9.f64));
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x822bc1bc
	goto loc_822BC1BC;
loc_822BC1A8:
	// fcmpu cr6,f2,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f10.f64);
	// ble cr6,0x822bc1d0
	if (!ctx.cr6.gt) goto loc_822BC1D0;
	// fsubs f0,f13,f1
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// fdivs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
loc_822BC1BC:
	// fsubs f10,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsel f0,f10,f11,f0
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f0,f11,f12,f0
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// b 0x822bc1d4
	goto loc_822BC1D4;
loc_822BC1D0:
	// fdivs f13,f2,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f2.f64 / ctx.f10.f64));
loc_822BC1D4:
	// fmuls f12,f7,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f11,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f6,f0
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f10,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f8,-20(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -20);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,12(r7)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// fmuls f8,f5,f13
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f7,f3,f13
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lfs f6,-20(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -20);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f13,f4,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f12,8(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// fadds f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f12,4(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 + ctx.f0.f64));
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f12,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// lfs f11,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// lfs f0,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// stfs f12,4(r8)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f13,8(r8)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f6,12(r8)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lfs f10,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f11,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f11,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fmadds f13,f13,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f12.f64)));
loc_822BC260:
	// fmadds f1,f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// lfd f30,-16(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CB1A8) {
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
	// lwz r11,160(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cb1fc
	if (ctx.cr6.eq) goto loc_822CB1FC;
	// lwz r4,240(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 240);
	// bl 0x822113f0
	ctx.lr = 0x822CB1D4;
	sub_822113F0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lbz r5,232(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 232);
	// lwz r3,160(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 160);
	// bl 0x822a1098
	ctx.lr = 0x822CB1E4;
	sub_822A1098(ctx, base);
	// lwz r4,236(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 236);
	// lwz r3,160(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 160);
	// bl 0x822a1290
	ctx.lr = 0x822CB1F0;
	sub_822A1290(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r3,31464(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 31464);
	// bl 0x8229f998
	ctx.lr = 0x822CB1FC;
	sub_8229F998(ctx, base);
loc_822CB1FC:
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

DEFINE_REX_FUNC(sub_822CC970) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x822d1410
	ctx.lr = 0x822CC984;
	sub_822D1410(ctx, base);
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

DEFINE_REX_FUNC(sub_822CD670) {
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
	// lis r30,-32163
	r30.s64 = -2107834368;
	// lwz r11,31804(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 31804);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822cd6d8
	if (!ctx.cr6.eq) goto loc_822CD6D8;
	// li r3,1088
	ctx.r3.s64 = 1088;
	// bl 0x822c80d0
	ctx.lr = 0x822CD69C;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x822cd6d4
	if (ctx.cr0.eq) goto loc_822CD6D4;
	// li r5,1068
	ctx.r5.s64 = 1068;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,1080(r31)
	REX_STORE_U32(r31.u32 + 1080, ctx.r11.u32);
	// stb r11,1084(r31)
	REX_STORE_U8(r31.u32 + 1084, ctx.r11.u8);
	// bl 0x822d5870
	ctx.lr = 0x822CD6CC;
	sub_822D5870(ctx, base);
	// stw r31,31804(r30)
	REX_STORE_U32(r30.u32 + 31804, r31.u32);
	// b 0x822cd6d8
	goto loc_822CD6D8;
loc_822CD6D4:
	// stw r11,31804(r30)
	REX_STORE_U32(r30.u32 + 31804, ctx.r11.u32);
loc_822CD6D8:
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

DEFINE_REX_FUNC(sub_822CE808) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822ce818
	if (!ctx.cr6.eq) goto loc_822CE818;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822CE818:
	// stw r4,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CF430) {
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
	ctx.lr = 0x822CF438;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822cf4d8
	if (ctx.cr6.eq) goto loc_822CF4D8;
	// lwz r5,4(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm. r11,r5,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cf46c
	if (ctx.cr0.eq) goto loc_822CF46C;
	// clrlwi r5,r5,1
	ctx.r5.u64 = ctx.r5.u32 & 0x7FFFFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822cf470
	goto loc_822CF470;
loc_822CF46C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822CF470:
	// bl 0x822d2318
	ctx.lr = 0x822CF474;
	sub_822D2318(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cf4d8
	if (ctx.cr6.eq) goto loc_822CF4D8;
	// bl 0x822d1a40
	ctx.lr = 0x822CF484;
	sub_822D1A40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822cf4d8
	if (ctx.cr0.eq) goto loc_822CF4D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d1dc0
	ctx.lr = 0x822CF494;
	sub_822D1DC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// bl 0x822d24a8
	ctx.lr = 0x822CF4A0;
	sub_822D24A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x8229a710
	ctx.lr = 0x822CF4AC;
	sub_8229A710(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CF4CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d1e28
	ctx.lr = 0x822CF4D8;
	sub_822D1E28(ctx, base);
loc_822CF4D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822D1DC0) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// addi r30,r3,48
	r30.s64 = ctx.r3.s64 + 48;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D1DF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lbz r31,24(r31)
	r31.u64 = REX_LOAD_U8(r31.u32 + 24);
	// bctrl 
	ctx.lr = 0x822D1E08;
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

DEFINE_REX_FUNC(sub_822D35D0) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d360c
	if (ctx.cr6.eq) goto loc_822D360C;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x822d3538
	ctx.lr = 0x822D35F8;
	sub_822D3538(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x822d3610
	goto loc_822D3610;
loc_822D360C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D3610:
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

DEFINE_REX_FUNC(sub_822D4588) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d44a0
	ctx.lr = 0x822D45A0;
	sub_822D44A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,26408
	ctx.r11.s64 = ctx.r11.s64 + 26408;
	// addi r4,r10,16736
	ctx.r4.s64 = ctx.r10.s64 + 16736;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d8f10
	ctx.lr = 0x822D45BC;
	sub_822D8F10(ctx, base);
}

DEFINE_REX_FUNC(__savegprlr_18) {
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
	// std r18,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, r18.u64);
	// std r19,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, r19.u64);
	// std r20,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, r20.u64);
	// std r21,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, r21.u64);
	// std r22,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, r22.u64);
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

DEFINE_REX_FUNC(__savefpr_20) {
	REX_FUNC_PROLOGUE();
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
	// stfd f20,-96(r12)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -96, f20.u64);
	// stfd f21,-88(r12)
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

DEFINE_REX_FUNC(sub_822D5B48) {
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
	ctx.lr = 0x822D5B5C;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfd f1,192(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.f1.u64);
	// stfd f2,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.f2.u64);
	// fmr f28,f1
	f28.f64 = ctx.f1.f64;
	// fmr f29,f2
	f29.f64 = ctx.f2.f64;
	// lfd f27,31912(r11)
	f27.u64 = REX_LOAD_U64(ctx.r11.u32 + 31912);
	// fcmpu cr6,f2,f27
	ctx.cr6.compare(ctx.f2.f64, f27.f64);
	// bne cr6,0x822d5b8c
	if (!ctx.cr6.eq) goto loc_822D5B8C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,26664(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 26664);
	// b 0x822d6010
	goto loc_822D6010;
loc_822D5B8C:
	// fcmpu cr6,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f28.f64, f27.f64);
	// bne cr6,0x822d5be0
	if (!ctx.cr6.eq) goto loc_822D5BE0;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x822d5950
	ctx.lr = 0x822D5B9C;
	sub_822D5950(ctx, base);
	// fcmpu cr6,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f27.f64);
	// bge cr6,0x822d5bc0
	if (!ctx.cr6.lt) goto loc_822D5BC0;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lfd f1,-2072(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -2072);
	// bne cr6,0x822d6010
	if (!ctx.cr6.eq) goto loc_822D6010;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// bl 0x822d6cd0
	ctx.lr = 0x822D5BBC;
	sub_822D6CD0(ctx, base);
	// b 0x822d6010
	goto loc_822D6010;
loc_822D5BC0:
	// fcmpu cr6,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f27.f64);
	// ble cr6,0x822d5be0
	if (!ctx.cr6.gt) goto loc_822D5BE0;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822d5bd8
	if (!ctx.cr6.eq) goto loc_822D5BD8;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// b 0x822d6010
	goto loc_822D6010;
loc_822D5BD8:
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// b 0x822d6010
	goto loc_822D6010;
loc_822D5BE0:
	// lhz r11,192(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 192);
	// lhz r9,200(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 200);
	// rlwinm r10,r11,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r10,32752
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32752, ctx.xer);
	// beq cr6,0x822d5f9c
	if (ctx.cr6.eq) goto loc_822D5F9C;
	// rlwinm r10,r9,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r10,32752
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32752, ctx.xer);
	// beq cr6,0x822d5f9c
	if (ctx.cr6.eq) goto loc_822D5F9C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f28.f64, f27.f64);
	// lfd f26,26664(r11)
	f26.u64 = REX_LOAD_U64(ctx.r11.u32 + 26664);
	// fmr f25,f26
	f25.f64 = f26.f64;
	// bge cr6,0x822d5c44
	if (!ctx.cr6.lt) goto loc_822D5C44;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x822d5950
	ctx.lr = 0x822D5C1C;
	sub_822D5950(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x822d5c38
	if (ctx.cr6.eq) goto loc_822D5C38;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x822d5c40
	if (ctx.cr6.eq) goto loc_822D5C40;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lfd f1,-2064(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -2064);
	// b 0x822d6010
	goto loc_822D6010;
loc_822D5C38:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfd f25,26912(r11)
	ctx.fpscr.disableFlushMode();
	f25.u64 = REX_LOAD_U64(ctx.r11.u32 + 26912);
loc_822D5C40:
	// fneg f28,f28
	ctx.fpscr.disableFlushMode();
	f28.u64 = f28.u64 ^ 0x8000000000000000;
loc_822D5C44:
	// fabs f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = f29.u64 & ~0x8000000000000000;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lfd f0,-2320(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -2320);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822d5c94
	if (!ctx.cr6.gt) goto loc_822D5C94;
	// fcmpu cr6,f29,f27
	ctx.cr6.compare(f29.f64, f27.f64);
	// bge cr6,0x822d5c64
	if (!ctx.cr6.lt) goto loc_822D5C64;
	// fdiv f28,f26,f28
	f28.f64 = f26.f64 / f28.f64;
loc_822D5C64:
	// fcmpu cr6,f28,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f28.f64, f26.f64);
	// ble cr6,0x822d5c7c
	if (!ctx.cr6.gt) goto loc_822D5C7C;
loc_822D5C6C:
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lfd f0,-2072(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -2072);
loc_822D5C74:
	// fmul f1,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64 * f25.f64;
	// b 0x822d6010
	goto loc_822D6010;
loc_822D5C7C:
	// fcmpu cr6,f28,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f28.f64, f26.f64);
	// bge cr6,0x822d5c8c
	if (!ctx.cr6.lt) goto loc_822D5C8C;
loc_822D5C84:
	// fmul f1,f25,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f25.f64 * f27.f64;
	// b 0x822d6010
	goto loc_822D6010;
loc_822D5C8C:
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f25.f64;
	// b 0x822d6010
	goto loc_822D6010;
loc_822D5C94:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x822da808
	ctx.lr = 0x822D5CA0;
	sub_822DA808(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// lfd f0,26904(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 26904);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(f29.f64, ctx.f0.f64);
	// bgt cr6,0x822d5d4c
	if (ctx.cr6.gt) goto loc_822D5D4C;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x822d5950
	ctx.lr = 0x822D5CBC;
	sub_822D5950(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822d5d4c
	if (ctx.cr0.eq) goto loc_822D5D4C;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x822d5950
	ctx.lr = 0x822D5CCC;
	sub_822D5950(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822d5d4c
	if (ctx.cr0.eq) goto loc_822D5D4C;
	// fcmpu cr6,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f27.f64);
	// ble cr6,0x822d5d4c
	if (!ctx.cr6.gt) goto loc_822D5D4C;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fctiwz f0,f29
	ctx.f0.s64 = std::isnan(f29.f64) ? int64_t(0x80000000U) : (f29.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f29.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fmr f31,f26
	f31.f64 = f26.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r31,r11,r10
	r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// beq cr6,0x822d5d14
	if (ctx.cr6.eq) goto loc_822D5D14;
loc_822D5CFC:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d5d08
	if (ctx.cr0.eq) goto loc_822D5D08;
	// fmul f31,f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f31.f64 * f30.f64;
loc_822D5D08:
	// srawi. r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmul f30,f30,f30
	ctx.fpscr.disableFlushMode();
	f30.f64 = f30.f64 * f30.f64;
	// bne 0x822d5cfc
	if (!ctx.cr0.eq) goto loc_822D5CFC;
loc_822D5D14:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822da768
	ctx.lr = 0x822D5D1C;
	sub_822DA768(ctx, base);
	// add r4,r3,r31
	ctx.r4.u64 = ctx.r3.u64 + r31.u64;
	// cmpwi cr6,r4,2560
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2560, ctx.xer);
	// ble cr6,0x822d5d38
	if (!ctx.cr6.gt) goto loc_822D5D38;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lfd f0,-2072(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -2072);
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * f31.f64;
	// b 0x822d5c74
	goto loc_822D5C74;
loc_822D5D38:
	// cmpwi cr6,r4,-2557
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2557, ctx.xer);
	// bge cr6,0x822d5f7c
	if (!ctx.cr6.lt) goto loc_822D5F7C;
	// fmul f0,f31,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64 * f25.f64;
	// fmul f1,f0,f27
	ctx.f1.f64 = ctx.f0.f64 * f27.f64;
	// b 0x822d6010
	goto loc_822D6010;
loc_822D5D4C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r31,r10,26568
	r31.s64 = ctx.r10.s64 + 26568;
	// lfd f0,72(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 72);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(f30.f64, ctx.f0.f64);
	// bgt cr6,0x822d5d68
	if (ctx.cr6.gt) goto loc_822D5D68;
	// li r11,9
	ctx.r11.s64 = 9;
loc_822D5D68:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,32
	ctx.r9.s64 = r31.s64 + 32;
	// lfdx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(f30.f64, ctx.f0.f64);
	// bgt cr6,0x822d5d80
	if (ctx.cr6.gt) goto loc_822D5D80;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_822D5D80:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,16
	ctx.r9.s64 = r31.s64 + 16;
	// lfdx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(f30.f64, ctx.f0.f64);
	// bgt cr6,0x822d5d98
	if (ctx.cr6.gt) goto loc_822D5D98;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_822D5D98:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lfd f31,-17096(r9)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r9.u32 + -17096);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x822d5dd8
	if (!ctx.cr6.eq) goto loc_822D5DD8;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x822d4ac8
	ctx.lr = 0x822D5DC8;
	sub_822D4AC8(ctx, base);
	// lfd f0,216(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 216);
	// fmr f13,f27
	ctx.f13.f64 = f27.f64;
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// b 0x822d5e68
	goto loc_822D5E68;
loc_822D5DD8:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfd f11,256(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(r31.u32 + 256);
	// addi r8,r31,8
	ctx.r8.s64 = r31.s64 + 8;
	// lfd f10,248(r31)
	ctx.f10.u64 = REX_LOAD_U64(r31.u32 + 248);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfd f9,240(r31)
	ctx.f9.u64 = REX_LOAD_U64(r31.u32 + 240);
	// addi r7,r31,144
	ctx.r7.s64 = r31.s64 + 144;
	// lfd f8,232(r31)
	ctx.f8.u64 = REX_LOAD_U64(r31.u32 + 232);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// lfd f12,224(r31)
	ctx.f12.u64 = REX_LOAD_U64(r31.u32 + 224);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfd f7,216(r31)
	ctx.f7.u64 = REX_LOAD_U64(r31.u32 + 216);
	// lfdx f0,r9,r8
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r8.u32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// fsub f6,f30,f0
	ctx.f6.f64 = f30.f64 - ctx.f0.f64;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// fadd f5,f0,f30
	ctx.f5.f64 = ctx.f0.f64 + f30.f64;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f13,-25040(r6)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r6.u32 + -25040);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfdx f4,r11,r7
	ctx.f4.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r7.u32);
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * f31.f64;
	// fsub f6,f6,f4
	ctx.f6.f64 = ctx.f6.f64 - ctx.f4.f64;
	// fdiv f6,f6,f5
	ctx.f6.f64 = ctx.f6.f64 / ctx.f5.f64;
	// fmul f13,f6,f13
	ctx.f13.f64 = ctx.f6.f64 * ctx.f13.f64;
	// fmul f6,f13,f13
	ctx.f6.f64 = ctx.f13.f64 * ctx.f13.f64;
	// fmul f12,f13,f12
	ctx.f12.f64 = ctx.f13.f64 * ctx.f12.f64;
	// fmadd f11,f6,f11,f10
	ctx.f11.f64 = std::fma(ctx.f6.f64, ctx.f11.f64, ctx.f10.f64);
	// fmadd f11,f11,f6,f9
	ctx.f11.f64 = std::fma(ctx.f11.f64, ctx.f6.f64, ctx.f9.f64);
	// fmadd f11,f11,f6,f8
	ctx.f11.f64 = std::fma(ctx.f11.f64, ctx.f6.f64, ctx.f8.f64);
	// fmul f11,f11,f6
	ctx.f11.f64 = ctx.f11.f64 * ctx.f6.f64;
	// fmul f11,f11,f13
	ctx.f11.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fmadd f12,f11,f7,f12
	ctx.f12.f64 = std::fma(ctx.f11.f64, ctx.f7.f64, ctx.f12.f64);
	// fadd f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 + ctx.f13.f64;
loc_822D5E68:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmul f11,f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f13.f64 * f29.f64;
	// lfd f12,320(r31)
	ctx.f12.u64 = REX_LOAD_U64(r31.u32 + 320);
	// lfd f13,-25792(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + -25792);
	// fmul f10,f29,f13
	ctx.f10.f64 = f29.f64 * ctx.f13.f64;
	// fctid f10,f10
	ctx.f10.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fmul f10,f10,f31
	ctx.f10.f64 = ctx.f10.f64 * f31.f64;
	// fsub f9,f29,f10
	ctx.f9.f64 = f29.f64 - ctx.f10.f64;
	// fmadd f11,f9,f0,f11
	ctx.f11.f64 = std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f11.f64);
	// fmul f9,f11,f13
	ctx.f9.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fctid f9,f9
	ctx.f9.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// fmul f9,f9,f31
	ctx.f9.f64 = ctx.f9.f64 * f31.f64;
	// fmadd f0,f10,f0,f9
	ctx.f0.f64 = std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f9.f64);
	// fsub f11,f11,f9
	ctx.f11.f64 = ctx.f11.f64 - ctx.f9.f64;
	// fmul f10,f0,f13
	ctx.f10.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fctid f10,f10
	ctx.f10.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fmul f10,f10,f31
	ctx.f10.f64 = ctx.f10.f64 * f31.f64;
	// fsub f0,f0,f10
	ctx.f0.f64 = ctx.f0.f64 - ctx.f10.f64;
	// fadd f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 + ctx.f11.f64;
	// fmul f11,f0,f13
	ctx.f11.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fctid f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fmul f11,f11,f31
	ctx.f11.f64 = ctx.f11.f64 * f31.f64;
	// fadd f10,f10,f11
	ctx.f10.f64 = ctx.f10.f64 + ctx.f11.f64;
	// fsub f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 - ctx.f11.f64;
	// fmul f13,f10,f13
	ctx.f13.f64 = ctx.f10.f64 * ctx.f13.f64;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x822d5c6c
	if (ctx.cr6.gt) goto loc_822D5C6C;
	// lfd f12,328(r31)
	ctx.f12.u64 = REX_LOAD_U64(r31.u32 + 328);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x822d5c84
	if (ctx.cr6.lt) goto loc_822D5C84;
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, f27.f64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// ble cr6,0x822d5f0c
	if (!ctx.cr6.gt) goto loc_822D5F0C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fsub f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 - f31.f64;
loc_822D5F0C:
	// lfd f13,312(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(r31.u32 + 312);
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// lfd f12,304(r31)
	ctx.f12.u64 = REX_LOAD_U64(r31.u32 + 304);
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// fmadd f8,f0,f13,f12
	ctx.f8.f64 = std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64);
	// lfd f13,296(r31)
	ctx.f13.u64 = REX_LOAD_U64(r31.u32 + 296);
	// lfd f12,288(r31)
	ctx.f12.u64 = REX_LOAD_U64(r31.u32 + 288);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// lfd f11,280(r31)
	ctx.f11.u64 = REX_LOAD_U64(r31.u32 + 280);
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// lfd f10,272(r31)
	ctx.f10.u64 = REX_LOAD_U64(r31.u32 + 272);
	// addi r8,r31,8
	ctx.r8.s64 = r31.s64 + 8;
	// lfd f9,264(r31)
	ctx.f9.u64 = REX_LOAD_U64(r31.u32 + 264);
	// add r31,r9,r10
	r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// fmadd f13,f8,f0,f13
	ctx.f13.f64 = std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f13.f64);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f8,r11,r8
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r8.u32);
	// fmadd f13,f13,f0,f12
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64);
	// fmadd f13,f13,f0,f11
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f11.f64);
	// fmadd f13,f13,f0,f10
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f10.f64);
	// fmadd f13,f13,f0,f9
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f9.f64);
	// fmadd f0,f13,f0,f26
	ctx.f0.f64 = std::fma(ctx.f13.f64, ctx.f0.f64, f26.f64);
	// fmul f31,f0,f8
	f31.f64 = ctx.f0.f64 * ctx.f8.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822da768
	ctx.lr = 0x822D5F78;
	sub_822DA768(ctx, base);
	// add r4,r3,r31
	ctx.r4.u64 = ctx.r3.u64 + r31.u64;
loc_822D5F7C:
	// cmpwi cr6,r4,1024
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1024, ctx.xer);
	// bgt cr6,0x822d5c6c
	if (ctx.cr6.gt) goto loc_822D5C6C;
	// cmpwi cr6,r4,-1021
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1021, ctx.xer);
	// blt cr6,0x822d5c84
	if (ctx.cr6.lt) goto loc_822D5C84;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822da740
	ctx.lr = 0x822D5F94;
	sub_822DA740(ctx, base);
	// fmul f1,f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 * f25.f64;
	// b 0x822d6010
	goto loc_822D6010;
loc_822D5F9C:
	// rlwinm r10,r11,0,17,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r10,32752
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32752, ctx.xer);
	// bne cr6,0x822d5fc0
	if (!ctx.cr6.eq) goto loc_822D5FC0;
	// lwz r11,192(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// clrlwi. r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d600c
	if (!ctx.cr0.eq) goto loc_822D600C;
	// lwz r11,196(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d600c
	if (!ctx.cr6.eq) goto loc_822D600C;
loc_822D5FC0:
	// rlwinm r11,r9,0,17,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x822d5fe4
	if (!ctx.cr6.eq) goto loc_822D5FE4;
	// lwz r9,200(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// clrlwi. r9,r9,13
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822d600c
	if (!ctx.cr0.eq) goto loc_822D600C;
	// lwz r9,204(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822d600c
	if (!ctx.cr6.eq) goto loc_822D600C;
loc_822D5FE4:
	// cmplwi cr6,r10,32760
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32760, ctx.xer);
	// beq cr6,0x822d600c
	if (ctx.cr6.eq) goto loc_822D600C;
	// cmplwi cr6,r11,32760
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32760, ctx.xer);
	// beq cr6,0x822d600c
	if (ctx.cr6.eq) goto loc_822D600C;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x822d59c0
	ctx.lr = 0x822D6004;
	sub_822D59C0(ctx, base);
	// lfd f1,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x822d6010
	goto loc_822D6010;
loc_822D600C:
	// fadd f1,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64 + f29.f64;
loc_822D6010:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x822d4f78
	ctx.lr = 0x822D601C;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D99A8) {
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
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x822d8d60
	ctx.lr = 0x822D99C8;
	sub_822D8D60(ctx, base);
	// cmpwi cr6,r3,101
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 101, ctx.xer);
	// beq cr6,0x822d99e0
	if (ctx.cr6.eq) goto loc_822D99E0;
loc_822D99D0:
	// lbzu r3,1(r31)
	ea = 1 + r31.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
	// bl 0x822dca78
	ctx.lr = 0x822D99D8;
	sub_822DCA78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822d99d0
	if (!ctx.cr0.eq) goto loc_822D99D0;
loc_822D99E0:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x822d8d60
	ctx.lr = 0x822D99EC;
	sub_822D8D60(ctx, base);
	// cmpwi cr6,r3,120
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 120, ctx.xer);
	// bne cr6,0x822d99f8
	if (!ctx.cr6.eq) goto loc_822D99F8;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
loc_822D99F8:
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,188(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r9.u8);
loc_822D9A18:
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne 0x822d9a18
	if (!ctx.cr0.eq) goto loc_822D9A18;
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

DEFINE_REX_FUNC(sub_822DC8E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822DC8E8;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfd f3,288(r1)
	REX_STORE_U64(ctx.r1.u32 + 288, ctx.f3.u64);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// stfd f1,272(r1)
	REX_STORE_U64(ctx.r1.u32 + 272, ctx.f1.u64);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// bl 0x822dc310
	ctx.lr = 0x822DC920;
	sub_822DC310(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822dc960
	if (!ctx.cr0.eq) goto loc_822DC960;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// stfd f31,128(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 128, f31.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// oris r11,r11,34816
	ctx.r11.u64 = ctx.r11.u64 | 2281701376;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,300
	ctx.r4.s64 = ctx.r1.s64 + 300;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822dbf08
	ctx.lr = 0x822DC95C;
	sub_822DBF08(ctx, base);
	// lwz r30,300(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
loc_822DC960:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822dc5b0
	ctx.lr = 0x822DC968;
	sub_822DC5B0(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r11,176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822dc99c
	if (!ctx.cr6.eq) goto loc_822DC99C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822dc99c
	if (ctx.cr6.eq) goto loc_822DC99C;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lfd f3,288(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 288);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x822dc5f8
	ctx.lr = 0x822DC998;
	sub_822DC5F8(ctx, base);
	// b 0x822dc9b4
	goto loc_822DC9B4;
loc_822DC99C:
	// bl 0x822dc568
	ctx.lr = 0x822DC9A0;
	sub_822DC568(ctx, base);
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// bl 0x822dc9d0
	ctx.lr = 0x822DC9B0;
	sub_822DC9D0(ctx, base);
	// lfd f1,288(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 288);
loc_822DC9B4:
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

DEFINE_REX_FUNC(sub_822E1EB8) {
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
	ctx.lr = 0x822E1EC0;
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r3.u32);
	// li r28,0
	r28.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,84(r31)
	REX_STORE_U32(r31.u32 + 84, r28.u32);
	// stw r28,88(r31)
	REX_STORE_U32(r31.u32 + 88, r28.u32);
	// bl 0x822dbd80
	ctx.lr = 0x822E1EE4;
	sub_822DBD80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// addi r29,r11,-11328
	r29.s64 = ctx.r11.s64 + -11328;
	// addi r10,r10,-11324
	ctx.r10.s64 = ctx.r10.s64 + -11324;
loc_822E1EF8:
	// stw r28,80(r31)
	REX_STORE_U32(r31.u32 + 80, r28.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822e1fb4
	if (!ctx.cr6.lt) goto loc_822E1FB4;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r30,r28,2,0,29
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r30,r11
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822e1fa8
	if (ctx.cr6.eq) goto loc_822E1FA8;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e1fa8
	if (ctx.cr0.eq) goto loc_822E1FA8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822dccf0
	ctx.lr = 0x822E1F38;
	sub_822DCCF0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// andi. r10,r11,131
	ctx.r10.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822e1f9c
	if (ctx.cr0.eq) goto loc_822E1F9C;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(r27.s32, 1, ctx.xer);
	// bne cr6,0x822e1f78
	if (!ctx.cr6.eq) goto loc_822E1F78;
	// bl 0x822e1e38
	ctx.lr = 0x822E1F60;
	sub_822E1E38(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822e1f9c
	if (ctx.cr6.eq) goto loc_822E1F9C;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// b 0x822e1f9c
	goto loc_822E1F9C;
loc_822E1F78:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x822e1f9c
	if (!ctx.cr6.eq) goto loc_822E1F9C;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e1f9c
	if (ctx.cr0.eq) goto loc_822E1F9C;
	// bl 0x822e1e38
	ctx.lr = 0x822E1F8C;
	sub_822E1E38(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822e1f9c
	if (!ctx.cr6.eq) goto loc_822E1F9C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
loc_822E1F9C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = r31.s64 + 144;
	// bl 0x822e202c
	ctx.lr = 0x822E1FA8;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_822E202C(ctx, base);
	r27 = ctx.r27;
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
loc_822E1FA8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x822e1ef8
	goto loc_822E1EF8;
loc_822E1FB4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = r31.s64 + 144;
	// bl 0x822e1fdc
	ctx.lr = 0x822E1FC0;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_822E1FDC(ctx, base);
	r27 = ctx.r27;
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// beq cr6,0x822e1fd4
	if (ctx.cr6.eq) goto loc_822E1FD4;
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
loc_822E1FD4:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822EA4E0) {
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
	// bl 0x822eeff0
	ctx.lr = 0x822EA4F8;
	sub_822EEFF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,520(r31)
	REX_STORE_U32(r31.u32 + 520, ctx.r11.u32);
	// stw r10,508(r31)
	REX_STORE_U32(r31.u32 + 508, ctx.r10.u32);
	// stw r11,524(r31)
	REX_STORE_U32(r31.u32 + 524, ctx.r11.u32);
	// std r11,528(r31)
	REX_STORE_U64(r31.u32 + 528, ctx.r11.u64);
	// stw r11,536(r31)
	REX_STORE_U32(r31.u32 + 536, ctx.r11.u32);
	// stw r11,540(r31)
	REX_STORE_U32(r31.u32 + 540, ctx.r11.u32);
	// stw r9,544(r31)
	REX_STORE_U32(r31.u32 + 544, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_822EC014) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EC3D8) {
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
	ctx.lr = 0x822EC3F0;
	sub_822EECA0(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x822eef38
	ctx.lr = 0x822EC3F8;
	sub_822EEF38(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// bl 0x822e8ec0
	ctx.lr = 0x822EC400;
	sub_822E8EC0(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x822f4420
	ctx.lr = 0x822EC408;
	sub_822F4420(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-28016
	ctx.r10.s64 = ctx.r11.s64 + -28016;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x822f22a8
	ctx.lr = 0x822EC41C;
	sub_822F22A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,672(r31)
	REX_STORE_U32(r31.u32 + 672, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,660(r31)
	REX_STORE_U32(r31.u32 + 660, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_822ED120) {
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
	// ld r11,304(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 304);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// std r11,288(r3)
	REX_STORE_U64(ctx.r3.u32 + 288, ctx.r11.u64);
	// lwz r9,116(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 116);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822ED14C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// std r3,296(r31)
	REX_STORE_U64(r31.u32 + 296, ctx.r3.u64);
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

DEFINE_REX_FUNC(sub_822ED770) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,48(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// subfc r11,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ~ctx.r10.u32;
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EEBA8) {
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
	ctx.lr = 0x822EEBC0;
	sub_822EECA0(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r8,r10,-27256
	ctx.r8.s64 = ctx.r10.s64 + -27256;
	// std r11,56(r31)
	REX_STORE_U64(r31.u32 + 56, ctx.r11.u64);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r7.u32);
	// std r11,64(r31)
	REX_STORE_U64(r31.u32 + 64, ctx.r11.u64);
	// std r11,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r11.u64);
	// std r11,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r11.u64);
	// std r11,88(r31)
	REX_STORE_U64(r31.u32 + 88, ctx.r11.u64);
	// std r11,96(r31)
	REX_STORE_U64(r31.u32 + 96, ctx.r11.u64);
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_822F2150) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F21D0) {
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
	// addi r10,r11,-26232
	ctx.r10.s64 = ctx.r11.s64 + -26232;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x822fb6c8
	ctx.lr = 0x822F21FC;
	sub_822FB6C8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822f221c
	if (ctx.cr6.eq) goto loc_822F221C;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32824
	ctx.r4.u64 = ctx.r4.u64 | 32824;
	// bl 0x823cd250
	ctx.lr = 0x822F2218;
	sub_823CD250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822F221C:
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

DEFINE_REX_FUNC(sub_822F43E8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r3,284
	ctx.r7.s64 = ctx.r3.s64 + 284;
	// li r6,40
	ctx.r6.s64 = 40;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822F4698) {
	REX_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(60));
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,88(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 88);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822F4BE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,244(r3)
	REX_STORE_U32(ctx.r3.u32 + 244, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,248(r3)
	REX_STORE_U32(ctx.r3.u32 + 248, ctx.r11.u32);
	// stw r11,252(r3)
	REX_STORE_U32(ctx.r3.u32 + 252, ctx.r11.u32);
	// stw r11,256(r3)
	REX_STORE_U32(ctx.r3.u32 + 256, ctx.r11.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lfs f0,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,280(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 280, temp.u32);
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
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r10,212(r3)
	REX_STORE_U32(ctx.r3.u32 + 212, ctx.r10.u32);
	// stw r10,216(r3)
	REX_STORE_U32(ctx.r3.u32 + 216, ctx.r10.u32);
	// stw r11,220(r3)
	REX_STORE_U32(ctx.r3.u32 + 220, ctx.r11.u32);
	// stw r11,224(r3)
	REX_STORE_U32(ctx.r3.u32 + 224, ctx.r11.u32);
	// stw r11,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// stw r11,232(r3)
	REX_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
	// stw r11,236(r3)
	REX_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// stw r10,240(r3)
	REX_STORE_U32(ctx.r3.u32 + 240, ctx.r10.u32);
	// stw r11,260(r3)
	REX_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// stw r11,264(r3)
	REX_STORE_U32(ctx.r3.u32 + 264, ctx.r11.u32);
	// stw r11,268(r3)
	REX_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// stw r11,272(r3)
	REX_STORE_U32(ctx.r3.u32 + 272, ctx.r11.u32);
	// stw r11,276(r3)
	REX_STORE_U32(ctx.r3.u32 + 276, ctx.r11.u32);
	// std r11,288(r3)
	REX_STORE_U64(ctx.r3.u32 + 288, ctx.r11.u64);
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,136(r3)
	REX_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,140(r3)
	REX_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
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
	// stw r11,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// stw r11,172(r3)
	REX_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// stw r11,176(r3)
	REX_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// stw r11,180(r3)
	REX_STORE_U32(ctx.r3.u32 + 180, ctx.r11.u32);
	// stw r11,184(r3)
	REX_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// stw r11,188(r3)
	REX_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// stw r11,192(r3)
	REX_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// stw r11,196(r3)
	REX_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// stw r11,200(r3)
	REX_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// stw r11,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// stw r11,208(r3)
	REX_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F9DB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822F9DC0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// std r28,0(r31)
	REX_STORE_U64(r31.u32 + 0, r28.u64);
	// std r28,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, r28.u64);
	// lbz r4,16(r3)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + 16);
	// lwz r3,72(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// bl 0x822f9900
	ctx.lr = 0x822F9DF0;
	sub_822F9900(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f9e58
	if (ctx.cr6.lt) goto loc_822F9E58;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822f9e18
	if (!ctx.cr6.eq) goto loc_822F9E18;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_822F9E18:
	// ld r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
	// bl 0x822f9c68
	ctx.lr = 0x822F9E2C;
	sub_822F9C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822f9e44
	if (!ctx.cr6.lt) goto loc_822F9E44;
	// std r28,0(r31)
	REX_STORE_U64(r31.u32 + 0, r28.u64);
	// std r28,0(r29)
	REX_STORE_U64(r29.u32 + 0, r28.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_822F9E44:
	// ld r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 0);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// cmpd cr6,r10,r11
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, ctx.xer);
	// bge cr6,0x822f9e58
	if (!ctx.cr6.lt) goto loc_822F9E58;
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
loc_822F9E58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822FEE40) {
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
	ctx.lr = 0x822FEE48;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// mr r25,r26
	r25.u64 = r26.u64;
	// bne cr6,0x822fee70
	if (!ctx.cr6.eq) goto loc_822FEE70;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_822FEE70:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,428(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 428);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r29,r31,424
	r29.s64 = r31.s64 + 424;
	// addi r30,r31,496
	r30.s64 = r31.s64 + 496;
	// bl 0x822ec1e8
	ctx.lr = 0x822FEE94;
	sub_822EC1E8(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x822feea8
	if (ctx.cr6.eq) goto loc_822FEEA8;
loc_822FEE9C:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_822FEEA8:
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// sth r10,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r10.u16);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r7,r8,25
	ctx.r7.u64 = ctx.r8.u32 & 0x7F;
	// stb r7,4(r30)
	REX_STORE_U8(r30.u32 + 4, ctx.r7.u8);
	// lbz r6,1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r6,5(r30)
	REX_STORE_U8(r30.u32 + 5, ctx.r6.u8);
	// lbz r11,29(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 29);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x822fef88
	if (ctx.cr6.eq) goto loc_822FEF88;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x822fef40
	if (ctx.cr6.eq) goto loc_822FEF40;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x822fefbc
	if (!ctx.cr6.eq) goto loc_822FEFBC;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x822ec1e8
	ctx.lr = 0x822FEF04;
	sub_822EC1E8(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x822fee9c
	if (!ctx.cr6.eq) goto loc_822FEE9C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// b 0x822fefbc
	goto loc_822FEFBC;
loc_822FEF40:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x822ec1e8
	ctx.lr = 0x822FEF60;
	sub_822EC1E8(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x822fee9c
	if (!ctx.cr6.eq) goto loc_822FEE9C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r9,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r7.u32);
	// b 0x822fefbc
	goto loc_822FEFBC;
loc_822FEF88:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x822ec1e8
	ctx.lr = 0x822FEFA8;
	sub_822EC1E8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x822fee9c
	if (!ctx.cr6.eq) goto loc_822FEE9C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
loc_822FEFBC:
	// lbz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 28);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrldi r28,r11,32
	r28.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r11,r9,r28
	ctx.r11.u64 = ctx.r9.u64 + r28.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FEFE8;
	sub_822EC1E8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x822fee9c
	if (!ctx.cr6.eq) goto loc_822FEE9C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stb r9,20(r30)
	REX_STORE_U8(r30.u32 + 20, ctx.r9.u8);
	// bne cr6,0x822ff0bc
	if (!ctx.cr6.eq) goto loc_822FF0BC;
	// stw r26,12(r30)
	REX_STORE_U32(r30.u32 + 12, r26.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r10,29(r30)
	REX_STORE_U8(r30.u32 + 29, ctx.r10.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r26,8(r30)
	REX_STORE_U32(r30.u32 + 8, r26.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x822ec1e8
	ctx.lr = 0x822FF04C;
	sub_822EC1E8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x822fee9c
	if (!ctx.cr6.eq) goto loc_822FEE9C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r10.u32);
	// lwz r9,24(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 24);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822ff0b4
	if (ctx.cr6.eq) goto loc_822FF0B4;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x822ec1e8
	ctx.lr = 0x822FF090;
	sub_822EC1E8(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x822fee9c
	if (!ctx.cr6.eq) goto loc_822FEE9C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r9,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r25,r8,16
	r25.u64 = ctx.r8.u32 & 0xFFFF;
	// b 0x822ff284
	goto loc_822FF284;
loc_822FF0B4:
	// mr r25,r26
	r25.u64 = r26.u64;
	// b 0x822ff284
	goto loc_822FF284;
loc_822FF0BC:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x822ff284
	if (ctx.cr6.lt) goto loc_822FF284;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x822ec1e8
	ctx.lr = 0x822FF0E8;
	sub_822EC1E8(ctx, base);
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// bne cr6,0x822fee9c
	if (!ctx.cr6.eq) goto loc_822FEE9C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r5,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r5.u32);
	// lbz r4,7(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// rotlwi r10,r4,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// lbz r8,6(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r9,5(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// stb r26,29(r30)
	REX_STORE_U8(r30.u32 + 29, r26.u8);
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// lwz r9,552(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 552);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822ff284
	if (ctx.cr6.eq) goto loc_822FF284;
	// lbz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 4);
	// mr r27,r26
	r27.u64 = r26.u64;
	// addi r11,r31,244
	ctx.r11.s64 = r31.s64 + 244;
loc_822FF168:
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822ff184
	if (ctx.cr6.eq) goto loc_822FF184;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(r27.u32, 4, ctx.xer);
	// blt cr6,0x822ff168
	if (ctx.cr6.lt) goto loc_822FF168;
loc_822FF184:
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(r27.u32, 4, ctx.xer);
	// beq cr6,0x822ff454
	if (ctx.cr6.eq) goto loc_822FF454;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lbz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r28,r9,-8
	r28.s64 = ctx.r9.s64 + -8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,9
	ctx.r4.s64 = ctx.r11.s64 + 9;
	// bl 0x822ec1e8
	ctx.lr = 0x822FF1B8;
	sub_822EC1E8(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, ctx.xer);
	// bne cr6,0x822fee9c
	if (!ctx.cr6.eq) goto loc_822FEE9C;
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,248
	ctx.r8.s64 = 248;
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_822FF1D4:
	// add r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + r31.u64;
	// lhzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x822ff210
	if (!ctx.cr6.eq) goto loc_822FF210;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(r28.u32, 2, ctx.xer);
	// blt cr6,0x822fee9c
	if (ctx.cr6.lt) goto loc_822FEE9C;
	// lbz r11,1(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// addi r28,r28,-2
	r28.s64 = r28.s64 + -2;
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
loc_822FF210:
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822fee9c
	if (ctx.cr6.lt) goto loc_822FEE9C;
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822ff240
	if (!ctx.cr6.eq) goto loc_822FF240;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r8,280
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 280, ctx.xer);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// blt cr6,0x822ff1d4
	if (ctx.cr6.lt) goto loc_822FF1D4;
	// b 0x822ff284
	goto loc_822FF284;
loc_822FF240:
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// ble cr6,0x822ff258
	if (!ctx.cr6.gt) goto loc_822FF258;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_822FF258:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822ff280
	if (ctx.cr6.eq) goto loc_822FF280;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_822FF264:
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lbzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rldicr r8,r8,8,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822ff264
	if (ctx.cr6.lt) goto loc_822FF264;
loc_822FF280:
	// std r8,600(r31)
	REX_STORE_U64(r31.u32 + 600, ctx.r8.u64);
loc_822FF284:
	// lbz r10,28(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 28);
	// lbz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,2(r30)
	REX_STORE_U16(r30.u32 + 2, ctx.r11.u16);
	// lwz r10,24(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822ff3a8
	if (ctx.cr6.eq) goto loc_822FF3A8;
	// lbz r10,62(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 62);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x822ff370
	if (ctx.cr6.eq) goto loc_822FF370;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x822ff328
	if (ctx.cr6.eq) goto loc_822FF328;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x822ff2cc
	if (ctx.cr6.eq) goto loc_822FF2CC;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// b 0x822ff3e4
	goto loc_822FF3E4;
loc_822FF2CC:
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 4);
	// clrldi r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFF;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FF2F0;
	sub_822EC1E8(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x822fee9c
	if (!ctx.cr6.eq) goto loc_822FEE9C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x822ff3e4
	goto loc_822FF3E4;
loc_822FF328:
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 4);
	// clrldi r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFF;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FF34C;
	sub_822EC1E8(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x822fee9c
	if (!ctx.cr6.eq) goto loc_822FEE9C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r9,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// b 0x822ff3e4
	goto loc_822FF3E4;
loc_822FF370:
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 4);
	// clrldi r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFF;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FF394;
	sub_822EC1E8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x822fee9c
	if (!ctx.cr6.eq) goto loc_822FEE9C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x822ff3e4
	goto loc_822FF3E4;
loc_822FF3A8:
	// lwz r10,36(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 36);
	// lwz r7,4(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ff3cc
	if (ctx.cr6.eq) goto loc_822FF3CC;
	// lwz r9,52(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 52);
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// subf r6,r9,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subf r5,r8,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r8.u64;
	// b 0x822ff3e0
	goto loc_822FF3E0;
loc_822FF3CC:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r8,52(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 52);
	// subf r6,r8,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r8.u64;
	// subf r5,r9,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r9.u64;
loc_822FF3E0:
	// subf r11,r7,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r7.u64;
loc_822FF3E4:
	// clrlwi r10,r25,16
	ctx.r10.u64 = r25.u32 & 0xFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ff3f4
	if (!ctx.cr6.eq) goto loc_822FF3F4;
	// clrlwi r25,r11,16
	r25.u64 = ctx.r11.u32 & 0xFFFF;
loc_822FF3F4:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lhz r10,2(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 2);
	// sth r11,22(r30)
	REX_STORE_U16(r30.u32 + 22, ctx.r11.u16);
	// lbz r9,63(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 63);
	// sth r25,26(r30)
	REX_STORE_U16(r30.u32 + 26, r25.u16);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r11,2(r30)
	REX_STORE_U16(r30.u32 + 2, ctx.r11.u16);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x822ff454
	if (ctx.cr6.gt) goto loc_822FF454;
	// bne cr6,0x822ff448
	if (!ctx.cr6.eq) goto loc_822FF448;
	// lwz r11,68(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 68);
	// lwz r10,540(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 540);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822ff454
	if (ctx.cr6.lt) goto loc_822FF454;
loc_822FF448:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_822FF454:
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82316CD0) {
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
	ctx.lr = 0x82316CD8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,348(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82316dac
	if (ctx.cr6.eq) goto loc_82316DAC;
	// lwz r11,244(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// li r27,0
	r27.s64 = 0;
	// mr r26,r27
	r26.u64 = r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82316d98
	if (!ctx.cr6.gt) goto loc_82316D98;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_82316D04:
	// lwz r11,348(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 348);
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82316d84
	if (ctx.cr6.eq) goto loc_82316D84;
	// lwz r11,244(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 244);
	// mr r28,r27
	r28.u64 = r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82316d64
	if (!ctx.cr6.gt) goto loc_82316D64;
	// mr r31,r27
	r31.u64 = r27.u64;
loc_82316D28:
	// lwz r11,348(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 348);
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82316d50
	if (ctx.cr6.eq) goto loc_82316D50;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x823143d0
	ctx.lr = 0x82316D44;
	sub_823143D0(ctx, base);
	// lwz r11,348(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 348);
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// stwx r27,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, r27.u32);
loc_82316D50:
	// lwz r11,244(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 244);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82316d28
	if (ctx.cr6.lt) goto loc_82316D28;
loc_82316D64:
	// lwz r11,348(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 348);
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82316d84
	if (ctx.cr6.eq) goto loc_82316D84;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x823143d0
	ctx.lr = 0x82316D7C;
	sub_823143D0(ctx, base);
	// lwz r11,348(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 348);
	// stwx r27,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, r27.u32);
loc_82316D84:
	// lwz r11,244(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 244);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82316d04
	if (ctx.cr6.lt) goto loc_82316D04;
loc_82316D98:
	// lwz r3,348(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 348);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82316dac
	if (ctx.cr6.eq) goto loc_82316DAC;
	// bl 0x823143d0
	ctx.lr = 0x82316DA8;
	sub_823143D0(ctx, base);
	// stw r27,348(r30)
	REX_STORE_U32(r30.u32 + 348, r27.u32);
loc_82316DAC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_823204B8) {
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
	// blt cr6,0x823204d8
	if (ctx.cr6.lt) goto loc_823204D8;
	// li r11,71
	ctx.r11.s64 = 71;
loc_823204D8:
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// slw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// addi r5,r8,2720
	ctx.r5.s64 = ctx.r8.s64 + 2720;
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

DEFINE_REX_FUNC(sub_82322058) {
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
	ctx.lr = 0x82322060;
	// stfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -136, f29.u64);
	// stfd f30,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, f30.u64);
	// stfd f31,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,284(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// li r19,0
	r19.s64 = 0;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// blt cr6,0x82322568
	if (ctx.cr6.lt) goto loc_82322568;
	// beq cr6,0x823220b8
	if (ctx.cr6.eq) goto loc_823220B8;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// blt cr6,0x823220b0
	if (ctx.cr6.lt) goto loc_823220B0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f29,-136(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x822d4eb4
	return;
loc_823220B0:
	// li r20,1
	r20.s64 = 1;
	// b 0x823220bc
	goto loc_823220BC;
loc_823220B8:
	// li r20,0
	r20.s64 = 0;
loc_823220BC:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823220d4
	if (!ctx.cr6.eq) goto loc_823220D4;
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82322568
	if (ctx.cr6.eq) goto loc_82322568;
loc_823220D4:
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823220e8
	if (!ctx.cr6.eq) goto loc_823220E8;
	// lis r23,16
	r23.s64 = 1048576;
	// b 0x823220f8
	goto loc_823220F8;
loc_823220E8:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// rlwinm r10,r5,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3FC;
	// addi r9,r11,5504
	ctx.r9.s64 = ctx.r11.s64 + 5504;
	// lwzx r23,r10,r9
	r23.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_823220F8:
	// lwz r25,120(r27)
	r25.u64 = REX_LOAD_U32(r27.u32 + 120);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x82322130
	if (!ctx.cr6.gt) goto loc_82322130;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82322110:
	// lwz r9,320(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// lwz r6,388(r21)
	ctx.r6.u64 = REX_LOAD_U32(r21.u32 + 388);
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
	// bdnz 0x82322110
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82322110;
loc_82322130:
	// srawi r11,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 8;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bge cr6,0x82322148
	if (!ctx.cr6.lt) goto loc_82322148;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82322154
	goto loc_82322154;
loc_82322148:
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// ble cr6,0x82322154
	if (!ctx.cr6.gt) goto loc_82322154;
	// li r10,16
	ctx.r10.s64 = 16;
loc_82322154:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82322568
	if (ctx.cr6.lt) goto loc_82322568;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8232216C:
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r6,r11,r10
	ctx.r6.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// andc r4,r10,r5
	ctx.r4.u64 = ctx.r10.u64 & ~ctx.r5.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bdnz 0x8232216c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232216C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82322568
	if (!ctx.cr6.gt) goto loc_82322568;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,127
	ctx.r8.s64 = 8323072;
	// addi r26,r1,100
	r26.s64 = ctx.r1.s64 + 100;
	// lfs f29,-25476(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -25476);
	f29.f64 = double(temp.f32);
	// ori r22,r8,65535
	r22.u64 = ctx.r8.u64 | 65535;
	// lfs f30,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	f30.f64 = double(temp.f32);
	// lfs f31,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f31.f64 = double(temp.f32);
loc_823221C0:
	// lwz r28,-4(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + -4);
	// fmr f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = f31.f64;
	// lwz r29,0(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x823222d4
	if (!ctx.cr6.gt) goto loc_823222D4;
	// lwz r8,388(r21)
	ctx.r8.u64 = REX_LOAD_U32(r21.u32 + 388);
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
loc_823221E0:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(r28.s32, r29.s32, ctx.xer);
	// bge cr6,0x823222bc
	if (!ctx.cr6.lt) goto loc_823222BC;
	// subf r9,r28,r29
	ctx.r9.u64 = r29.u64 - r28.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x82322288
	if (ctx.cr6.lt) goto loc_82322288;
	// addi r9,r29,-3
	ctx.r9.s64 = r29.s64 + -3;
loc_82322208:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x82322218
	if (ctx.cr6.gt) goto loc_82322218;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82322218:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82322224
	if (!ctx.cr6.gt) goto loc_82322224;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82322224:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x82322234
	if (ctx.cr6.gt) goto loc_82322234;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82322234:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82322240
	if (!ctx.cr6.gt) goto loc_82322240;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82322240:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x82322250
	if (ctx.cr6.gt) goto loc_82322250;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82322250:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8232225c
	if (!ctx.cr6.gt) goto loc_8232225C;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_8232225C:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x8232226c
	if (ctx.cr6.gt) goto loc_8232226C;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_8232226C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82322278
	if (!ctx.cr6.gt) goto loc_82322278;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82322278:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82322208
	if (ctx.cr6.lt) goto loc_82322208;
loc_82322288:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// bge cr6,0x823222bc
	if (!ctx.cr6.lt) goto loc_823222BC;
	// subf r10,r10,r29
	ctx.r10.u64 = r29.u64 - ctx.r10.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82322298:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x823222a8
	if (ctx.cr6.gt) goto loc_823222A8;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_823222A8:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823222b4
	if (!ctx.cr6.gt) goto loc_823222B4;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_823222B4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82322298
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82322298;
loc_823222BC:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x823222c8
	if (!ctx.cr6.gt) goto loc_823222C8;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
loc_823222C8:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x823221e0
	if (!ctx.cr0.eq) goto loc_823221E0;
loc_823222D4:
	// lfs f0,128(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x823222f8
	if (!ctx.cr6.lt) goto loc_823222F8;
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - f30.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82322308
	goto loc_82322308;
loc_823222F8:
	// fadds f13,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 + f30.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82322308:
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// bge cr6,0x82322340
	if (!ctx.cr6.lt) goto loc_82322340;
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8232232c
	if (!ctx.cr6.lt) goto loc_8232232C;
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - f30.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82322344
	goto loc_82322344;
loc_8232232C:
	// fadds f13,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 + f30.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82322344
	goto loc_82322344;
loc_82322340:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_82322344:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823223f0
	if (ctx.cr6.eq) goto loc_823223F0;
	// lwz r9,196(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 196);
	// rlwinm r11,r20,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// extsw r9,r23
	ctx.r9.s64 = r23.s32;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823223cc
	if (ctx.cr6.eq) goto loc_823223CC;
	// lwz r5,296(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 296);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// lwz r8,264(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 264);
	// mulld r4,r7,r9
	ctx.r4.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r9.u64);
	// lwz r6,260(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 260);
	// lwz r3,280(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 280);
	// lwzx r7,r5,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r8,r6,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzx r6,r3,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// sradi r5,r4,20
	ctx.xer.ca = (ctx.r4.s64 < 0) & ((ctx.r4.u64 & 0xFFFFF) != 0);
	ctx.r5.s64 = ctx.r4.s64 >> 20;
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// srawi r11,r4,13
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1FFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 13;
	// clrlwi r3,r4,19
	ctx.r3.u64 = ctx.r4.u32 & 0x1FFF;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// mullw r8,r10,r3
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// sraw r10,r8,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r10.s64 = ctx.r8.s32 >> temp.u32;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// mulld r4,r5,r9
	ctx.r4.s64 = static_cast<int64_t>(ctx.r5.u64 * ctx.r9.u64);
	// sradi r3,r4,20
	ctx.xer.ca = (ctx.r4.s64 < 0) & ((ctx.r4.u64 & 0xFFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s64 >> 20;
	// extsw r4,r3
	ctx.r4.s64 = ctx.r3.s32;
	// b 0x823223fc
	goto loc_823223FC;
loc_823223CC:
	// lwz r10,192(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 192);
	// lwz r8,280(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 280);
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r6,r8,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// mulld r4,r5,r9
	ctx.r4.s64 = static_cast<int64_t>(ctx.r5.u64 * ctx.r9.u64);
	// sradi r3,r4,20
	ctx.xer.ca = (ctx.r4.s64 < 0) & ((ctx.r4.u64 & 0xFFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s64 >> 20;
	// extsw r4,r3
	ctx.r4.s64 = ctx.r3.s32;
	// b 0x823223fc
	goto loc_823223FC;
loc_823223F0:
	// lis r6,127
	ctx.r6.s64 = 8323072;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// ori r6,r6,65534
	ctx.r6.u64 = ctx.r6.u64 | 65534;
loc_823223FC:
	// lwz r31,172(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 172);
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8232241c
	if (!ctx.cr6.lt) goto loc_8232241C;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - f30.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8232242c
	goto loc_8232242C;
loc_8232241C:
	// fadds f0,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8232242C:
	// subf r30,r28,r29
	r30.u64 = r29.u64 - r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82321a08
	ctx.lr = 0x8232243C;
	sub_82321A08(ctx, base);
	// srawi. r11,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r11.s64 = r30.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82322460
	if (ctx.cr0.eq) goto loc_82322460;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82322460
	if (!ctx.cr6.gt) goto loc_82322460;
loc_82322450:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82322450
	if (ctx.cr6.gt) goto loc_82322450;
loc_82322460:
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r31.s32, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// bgt cr6,0x82322470
	if (ctx.cr6.gt) goto loc_82322470;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_82322470:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x8232247c
	if (ctx.cr6.gt) goto loc_8232247C;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8232247C:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8232249c
	if (!ctx.cr6.gt) goto loc_8232249C;
loc_8232248C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8232248c
	if (ctx.cr6.gt) goto loc_8232248C;
loc_8232249C:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f29
	ctx.f0.f64 = double(float(ctx.f12.f64 * f29.f64));
	// ble cr6,0x82322558
	if (!ctx.cr6.gt) goto loc_82322558;
	// lwz r8,388(r21)
	ctx.r8.u64 = REX_LOAD_U32(r21.u32 + 388);
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
loc_823224C8:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(r28.s32, r29.s32, ctx.xer);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// bge cr6,0x8232254c
	if (!ctx.cr6.lt) goto loc_8232254C;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x82322528
	if (ctx.cr6.lt) goto loc_82322528;
	// addi r9,r29,-3
	ctx.r9.s64 = r29.s64 + -3;
loc_823224E8:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f8,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f6,12(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x823224e8
	if (ctx.cr6.lt) goto loc_823224E8;
loc_82322528:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// bge cr6,0x8232254c
	if (!ctx.cr6.lt) goto loc_8232254C;
	// subf r10,r10,r29
	ctx.r10.u64 = r29.u64 - ctx.r10.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8232253C:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8232253c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232253C;
loc_8232254C:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x823224c8
	if (!ctx.cr0.eq) goto loc_823224C8;
loc_82322558:
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// stw r3,172(r27)
	REX_STORE_U32(r27.u32 + 172, ctx.r3.u32);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// bne 0x823221c0
	if (!ctx.cr0.eq) goto loc_823221C0;
loc_82322568:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
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

DEFINE_REX_FUNC(sub_82341818) {
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
	ctx.lr = 0x82341820;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,0(r6)
	r27.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// li r25,0
	r25.s64 = 0;
loc_8234183C:
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bge 0x82341864
	if (!ctx.cr0.lt) goto loc_82341864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82341864;
	sub_823380C8(ctx, base);
loc_82341864:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82341960
	if (!ctx.cr6.eq) goto loc_82341960;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r30,3
	r30.s64 = 3;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x823418dc
	if (!ctx.cr6.lt) goto loc_823418DC;
loc_82341884:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823418dc
	if (ctx.cr6.eq) goto loc_823418DC;
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
	// bge 0x823418cc
	if (!ctx.cr0.lt) goto loc_823418CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823418CC;
	sub_823380C8(ctx, base);
loc_823418CC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82341884
	if (ctx.cr6.gt) goto loc_82341884;
loc_823418DC:
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
	// bge 0x82341914
	if (!ctx.cr0.lt) goto loc_82341914;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82341914;
	sub_823380C8(ctx, base);
loc_82341914:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bgt cr6,0x82341968
	if (ctx.cr6.gt) goto loc_82341968;
	// bne cr6,0x82341a54
	if (!ctx.cr6.eq) goto loc_82341A54;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bge 0x82341948
	if (!ctx.cr0.lt) goto loc_82341948;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82341948;
	sub_823380C8(ctx, base);
loc_82341948:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82341978
	if (ctx.cr6.eq) goto loc_82341978;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x82341b04
	if (!ctx.cr6.eq) goto loc_82341B04;
	// li r25,1
	r25.s64 = 1;
	// b 0x8234183c
	goto loc_8234183C;
loc_82341960:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82341b1c
	goto loc_82341B1C;
loc_82341968:
	// addi r11,r30,-2
	ctx.r11.s64 = r30.s64 + -2;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x82341b1c
	goto loc_82341B1C;
loc_82341978:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r30,5
	r30.s64 = 5;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x823419e8
	if (!ctx.cr6.lt) goto loc_823419E8;
loc_82341990:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823419e8
	if (ctx.cr6.eq) goto loc_823419E8;
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
	// bge 0x823419d8
	if (!ctx.cr0.lt) goto loc_823419D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823419D8;
	sub_823380C8(ctx, base);
loc_823419D8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82341990
	if (ctx.cr6.gt) goto loc_82341990;
loc_823419E8:
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
	// bge 0x82341a20
	if (!ctx.cr0.lt) goto loc_82341A20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82341A20;
	sub_823380C8(ctx, base);
loc_82341A20:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// lwzx r10,r10,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82341a3c
	if (!ctx.cr6.eq) goto loc_82341A3C;
	// ori r11,r30,32
	ctx.r11.u64 = r30.u64 | 32;
	// b 0x82341b1c
	goto loc_82341B1C;
loc_82341A3C:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82341b1c
	if (ctx.cr6.eq) goto loc_82341B1C;
	// stw r30,0(r24)
	REX_STORE_U32(r24.u32 + 0, r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_82341A54:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r30,4
	r30.s64 = 4;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x82341ac4
	if (!ctx.cr6.lt) goto loc_82341AC4;
loc_82341A6C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82341ac4
	if (ctx.cr6.eq) goto loc_82341AC4;
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
	// bge 0x82341ab4
	if (!ctx.cr0.lt) goto loc_82341AB4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82341AB4;
	sub_823380C8(ctx, base);
loc_82341AB4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82341a6c
	if (ctx.cr6.gt) goto loc_82341A6C;
loc_82341AC4:
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
	// bge 0x82341afc
	if (!ctx.cr0.lt) goto loc_82341AFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82341AFC;
	sub_823380C8(ctx, base);
loc_82341AFC:
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(r30.s32, 15, ctx.xer);
	// bne cr6,0x82341b14
	if (!ctx.cr6.eq) goto loc_82341B14;
loc_82341B04:
	// stw r27,0(r24)
	REX_STORE_U32(r24.u32 + 0, r27.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_82341B14:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
loc_82341B1C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x82341b28
	if (ctx.cr6.eq) goto loc_82341B28;
	// xori r11,r11,63
	ctx.r11.u64 = ctx.r11.u64 ^ 63;
loc_82341B28:
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82359740) {
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
	ctx.lr = 0x82359748;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r27,r29
	r27.u64 = r29.u64;
	// ble cr6,0x823599cc
	if (!ctx.cr6.gt) goto loc_823599CC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x823599cc
	if (!ctx.cr6.gt) goto loc_823599CC;
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82359798
	if (ctx.cr6.eq) goto loc_82359798;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x823597b0
	if (!ctx.cr6.lt) goto loc_823597B0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82359798
	if (ctx.cr6.eq) goto loc_82359798;
	// bl 0x8233d4c0
	ctx.lr = 0x82359794;
	sub_8233D4C0(ctx, base);
	// stw r29,20(r31)
	REX_STORE_U32(r31.u32 + 20, r29.u32);
loc_82359798:
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8233d448
	ctx.lr = 0x823597A4;
	sub_8233D448(ctx, base);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82359930
	if (ctx.cr6.eq) goto loc_82359930;
loc_823597B0:
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823597d8
	if (ctx.cr6.eq) goto loc_823597D8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bge cr6,0x823597f0
	if (!ctx.cr6.lt) goto loc_823597F0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823597d8
	if (ctx.cr6.eq) goto loc_823597D8;
	// bl 0x8233d4c0
	ctx.lr = 0x823597D4;
	sub_8233D4C0(ctx, base);
	// stw r29,24(r31)
	REX_STORE_U32(r31.u32 + 24, r29.u32);
loc_823597D8:
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8233d448
	ctx.lr = 0x823597E4;
	sub_8233D448(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82359930
	if (ctx.cr6.eq) goto loc_82359930;
loc_823597F0:
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82359818
	if (ctx.cr6.eq) goto loc_82359818;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bge cr6,0x82359830
	if (!ctx.cr6.lt) goto loc_82359830;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82359818
	if (ctx.cr6.eq) goto loc_82359818;
	// bl 0x8233d4c0
	ctx.lr = 0x82359814;
	sub_8233D4C0(ctx, base);
	// stw r29,28(r31)
	REX_STORE_U32(r31.u32 + 28, r29.u32);
loc_82359818:
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8233d448
	ctx.lr = 0x82359824;
	sub_8233D448(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82359930
	if (ctx.cr6.eq) goto loc_82359930;
loc_82359830:
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82359858
	if (ctx.cr6.eq) goto loc_82359858;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bge cr6,0x82359870
	if (!ctx.cr6.lt) goto loc_82359870;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82359858
	if (ctx.cr6.eq) goto loc_82359858;
	// bl 0x8233d4c0
	ctx.lr = 0x82359854;
	sub_8233D4C0(ctx, base);
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
loc_82359858:
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8233d448
	ctx.lr = 0x82359864;
	sub_8233D448(ctx, base);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82359930
	if (ctx.cr6.eq) goto loc_82359930;
loc_82359870:
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82359898
	if (ctx.cr6.eq) goto loc_82359898;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// bge cr6,0x823598b0
	if (!ctx.cr6.lt) goto loc_823598B0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82359898
	if (ctx.cr6.eq) goto loc_82359898;
	// bl 0x8233d4c0
	ctx.lr = 0x82359894;
	sub_8233D4C0(ctx, base);
	// stw r29,60(r31)
	REX_STORE_U32(r31.u32 + 60, r29.u32);
loc_82359898:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8233d448
	ctx.lr = 0x823598A4;
	sub_8233D448(ctx, base);
	// stw r3,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82359930
	if (ctx.cr6.eq) goto loc_82359930;
loc_823598B0:
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823598d8
	if (ctx.cr6.eq) goto loc_823598D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// bge cr6,0x823598f0
	if (!ctx.cr6.lt) goto loc_823598F0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823598d8
	if (ctx.cr6.eq) goto loc_823598D8;
	// bl 0x8233d4c0
	ctx.lr = 0x823598D4;
	sub_8233D4C0(ctx, base);
	// stw r29,64(r31)
	REX_STORE_U32(r31.u32 + 64, r29.u32);
loc_823598D8:
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8233d448
	ctx.lr = 0x823598E4;
	sub_8233D448(ctx, base);
	// stw r3,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82359930
	if (ctx.cr6.eq) goto loc_82359930;
loc_823598F0:
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82359918
	if (ctx.cr6.eq) goto loc_82359918;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// bge cr6,0x823599c0
	if (!ctx.cr6.lt) goto loc_823599C0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82359918
	if (ctx.cr6.eq) goto loc_82359918;
	// bl 0x8233d4c0
	ctx.lr = 0x82359914;
	sub_8233D4C0(ctx, base);
	// stw r29,68(r31)
	REX_STORE_U32(r31.u32 + 68, r29.u32);
loc_82359918:
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8233d448
	ctx.lr = 0x82359924;
	sub_8233D448(ctx, base);
	// stw r3,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823599c0
	if (!ctx.cr6.eq) goto loc_823599C0;
loc_82359930:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r27,-9
	r27.s64 = -9;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82359948
	if (ctx.cr6.eq) goto loc_82359948;
	// bl 0x8233d4c0
	ctx.lr = 0x82359944;
	sub_8233D4C0(ctx, base);
	// stw r29,20(r31)
	REX_STORE_U32(r31.u32 + 20, r29.u32);
loc_82359948:
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235995c
	if (ctx.cr6.eq) goto loc_8235995C;
	// bl 0x8233d4c0
	ctx.lr = 0x82359958;
	sub_8233D4C0(ctx, base);
	// stw r29,24(r31)
	REX_STORE_U32(r31.u32 + 24, r29.u32);
loc_8235995C:
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82359970
	if (ctx.cr6.eq) goto loc_82359970;
	// bl 0x8233d4c0
	ctx.lr = 0x8235996C;
	sub_8233D4C0(ctx, base);
	// stw r29,28(r31)
	REX_STORE_U32(r31.u32 + 28, r29.u32);
loc_82359970:
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82359984
	if (ctx.cr6.eq) goto loc_82359984;
	// bl 0x8233d4c0
	ctx.lr = 0x82359980;
	sub_8233D4C0(ctx, base);
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
loc_82359984:
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82359998
	if (ctx.cr6.eq) goto loc_82359998;
	// bl 0x8233d4c0
	ctx.lr = 0x82359994;
	sub_8233D4C0(ctx, base);
	// stw r29,60(r31)
	REX_STORE_U32(r31.u32 + 60, r29.u32);
loc_82359998:
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823599ac
	if (ctx.cr6.eq) goto loc_823599AC;
	// bl 0x8233d4c0
	ctx.lr = 0x823599A8;
	sub_8233D4C0(ctx, base);
	// stw r29,64(r31)
	REX_STORE_U32(r31.u32 + 64, r29.u32);
loc_823599AC:
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823599c0
	if (ctx.cr6.eq) goto loc_823599C0;
	// bl 0x8233d4c0
	ctx.lr = 0x823599BC;
	sub_8233D4C0(ctx, base);
	// stw r29,68(r31)
	REX_STORE_U32(r31.u32 + 68, r29.u32);
loc_823599C0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_823599CC:
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82361E20) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e50
	ctx.lr = 0x82361E28;
	// lhz r11,50(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 50);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lwz r5,1316(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 1316);
	// li r29,0
	r29.s64 = 0;
	// rlwinm r28,r11,31,1,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r31,1312(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 1312);
	// rlwinm r9,r11,1,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFC;
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// mullw r10,r28,r6
	ctx.r10.s64 = int64_t(r28.s32) * int64_t(ctx.r6.s32);
	// stw r7,52(r1)
	REX_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// stw r28,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, r28.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r30,r9,r6
	r30.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r3,r10,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// add r17,r31,r3
	r17.u64 = r31.u64 + ctx.r3.u64;
	// add r19,r5,r8
	r19.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// beq cr6,0x82361e8c
	if (ctx.cr6.eq) goto loc_82361E8C;
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// rlwinm r8,r28,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r29,r9,r8
	r29.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_82361E8C:
	// stw r10,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// cmplw cr6,r6,r27
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r27.u32, ctx.xer);
	// stw r6,-196(r1)
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r6.u32);
	// bge cr6,0x82362410
	if (!ctx.cr6.lt) goto loc_82362410;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r14,r30,2,0,29
	r14.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4856
	ctx.r11.s64 = ctx.r11.s64 + 4856;
	// b 0x82361ec0
	goto loc_82361EC0;
loc_82361EB8:
	// lwz r9,-204(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// lwz r14,-208(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
loc_82361EC0:
	// lwz r7,-196(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r6,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stw r7,-184(r1)
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r7.u32);
	// beq cr6,0x823623d4
	if (ctx.cr6.eq) goto loc_823623D4;
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// lwz r5,-220(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// stw r9,-212(r1)
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r9.u32);
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// and r3,r6,r28
	ctx.r3.u64 = ctx.r6.u64 & r28.u64;
	// stw r8,-224(r1)
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r8.u32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// rlwinm r6,r3,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r14
	ctx.r3.u64 = ctx.r10.u64 + r14.u64;
	// stw r5,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r5.u32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,-188(r1)
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r6.u32);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r3,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r3.u32);
	// li r15,0
	r15.s64 = 0;
	// stw r9,-204(r1)
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r9.u32);
	// stw r8,-200(r1)
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r8.u32);
	// b 0x82361f28
	goto loc_82361F28;
loc_82361F24:
	// lwz r31,-224(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
loc_82361F28:
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ld r10,0(r17)
	ctx.r10.u64 = REX_LOAD_U64(r17.u32 + 0);
	// addi r9,r11,272
	ctx.r9.s64 = ctx.r11.s64 + 272;
	// lwz r6,-188(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// addi r8,r11,272
	ctx.r8.s64 = ctx.r11.s64 + 272;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// addi r27,r11,272
	r27.s64 = ctx.r11.s64 + 272;
	// oris r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 2139029504;
	// addi r23,r11,272
	r23.s64 = ctx.r11.s64 + 272;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// addi r24,r11,272
	r24.s64 = ctx.r11.s64 + 272;
	// and r29,r10,r12
	r29.u64 = ctx.r10.u64 & ctx.r12.u64;
	// srawi r10,r15,31
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = r15.s32 >> 31;
	// clrldi r26,r29,56
	r26.u64 = r29.u64 & 0xFF;
	// rldicl r25,r29,56,56
	r25.u64 = __builtin_rotateleft64(r29.u64, 56) & 0xFF;
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// rldicl r30,r29,48,56
	r30.u64 = __builtin_rotateleft64(r29.u64, 48) & 0xFF;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// lbzx r9,r26,r9
	ctx.r9.u64 = REX_LOAD_U8(r26.u32 + ctx.r9.u32);
	// rldicl r5,r29,32,56
	ctx.r5.u64 = __builtin_rotateleft64(r29.u64, 32) & 0xFF;
	// lbzx r8,r25,r8
	ctx.r8.u64 = REX_LOAD_U8(r25.u32 + ctx.r8.u32);
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbzx r27,r30,r27
	r27.u64 = REX_LOAD_U8(r30.u32 + r27.u32);
	// rldicl r3,r29,40,56
	ctx.r3.u64 = __builtin_rotateleft64(r29.u64, 40) & 0xFF;
	// or r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 | ctx.r8.u64;
	// oris r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 2139029504;
	// rldicr r9,r8,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r8,r10,3,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// or r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 | r27.u64;
	// lbzx r27,r5,r23
	r27.u64 = REX_LOAD_U8(ctx.r5.u32 + r23.u32);
	// subf r8,r8,r17
	ctx.r8.u64 = r17.u64 - ctx.r8.u64;
	// lbzx r24,r3,r24
	r24.u64 = REX_LOAD_U8(ctx.r3.u32 + r24.u32);
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rldicr r23,r9,8,55
	r23.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// addi r18,r10,1
	r18.s64 = ctx.r10.s64 + 1;
	// or r24,r23,r24
	r24.u64 = r23.u64 | r24.u64;
	// ld r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rldicl r9,r29,24,56
	ctx.r9.u64 = __builtin_rotateleft64(r29.u64, 24) & 0xFF;
	// and r20,r8,r12
	r20.u64 = ctx.r8.u64 & ctx.r12.u64;
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// add r10,r10,r18
	ctx.r10.u64 = ctx.r10.u64 + r18.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rldicr r24,r24,8,55
	r24.u64 = __builtin_rotateleft64(r24.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// addi r23,r11,272
	r23.s64 = ctx.r11.s64 + 272;
	// or r27,r24,r27
	r27.u64 = r24.u64 | r27.u64;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// addi r22,r11,352
	r22.s64 = ctx.r11.s64 + 352;
	// subf r6,r6,r17
	ctx.r6.u64 = r17.u64 - ctx.r6.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r23,r9,r23
	r23.u64 = REX_LOAD_U8(ctx.r9.u32 + r23.u32);
	// rldicr r27,r27,8,55
	r27.u64 = __builtin_rotateleft64(r27.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rldicl r29,r29,16,48
	r29.u64 = __builtin_rotateleft64(r29.u64, 16) & 0xFFFF;
	// oris r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 2139029504;
	// ld r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// or r24,r27,r23
	r24.u64 = r27.u64 | r23.u64;
	// ldx r10,r10,r22
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + r22.u32);
	// rlwinm r29,r29,0,25,25
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x40;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// and r16,r24,r10
	r16.u64 = r24.u64 & ctx.r10.u64;
	// and r27,r6,r12
	r27.u64 = ctx.r6.u64 & ctx.r12.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8236206c
	if (ctx.cr6.eq) goto loc_8236206C;
	// lwz r10,348(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 348);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,16384
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16384, ctx.xer);
	// bne cr6,0x8236206c
	if (!ctx.cr6.eq) goto loc_8236206C;
	// rldicl r10,r16,56,8
	ctx.r10.u64 = __builtin_rotateleft64(r16.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r16,0(r19)
	REX_STORE_U8(r19.u32 + 0, r16.u8);
	// rldicl r8,r10,56,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r10,1(r19)
	REX_STORE_U8(r19.u32 + 1, ctx.r10.u8);
	// rldicl r5,r8,56,8
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r8,2(r19)
	REX_STORE_U8(r19.u32 + 2, ctx.r8.u8);
	// rldicl r10,r5,56,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r5,3(r19)
	REX_STORE_U8(r19.u32 + 3, ctx.r5.u8);
	// rldicl r8,r10,56,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r10,4(r19)
	REX_STORE_U8(r19.u32 + 4, ctx.r10.u8);
	// stb r8,5(r19)
	REX_STORE_U8(r19.u32 + 5, ctx.r8.u8);
	// b 0x82362384
	goto loc_82362384;
loc_8236206C:
	// lwz r8,348(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 348);
	// li r21,255
	r21.s64 = 255;
	// li r22,255
	r22.s64 = 255;
	// add r10,r14,r8
	ctx.r10.u64 = r14.u64 + ctx.r8.u64;
	// li r23,255
	r23.s64 = 255;
	// li r24,255
	r24.s64 = 255;
	// lwzx r6,r14,r8
	ctx.r6.u64 = REX_LOAD_U32(r14.u32 + ctx.r8.u32);
	// li r29,255
	r29.s64 = 255;
	// li r28,255
	r28.s64 = 255;
	// cmpwi cr6,r6,16384
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16384, ctx.xer);
	// beq cr6,0x82362130
	if (ctx.cr6.eq) goto loc_82362130;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x823620d4
	if (!ctx.cr6.eq) goto loc_823620D4;
	// lwzx r31,r31,r8
	r31.u64 = REX_LOAD_U32(r31.u32 + ctx.r8.u32);
	// subf. r31,r6,r31
	r31.u64 = r31.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823620d4
	if (!ctx.cr0.eq) goto loc_823620D4;
	// rldicl r31,r27,40,24
	r31.u64 = __builtin_rotateleft64(r27.u64, 40) & 0xFFFFFFFFFF;
	// std r11,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r11.u64);
	// addi r21,r11,192
	r21.s64 = ctx.r11.s64 + 192;
	// lwz r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// clrlwi r31,r31,24
	r31.u64 = r31.u32 & 0xFF;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// lbzx r31,r31,r21
	r31.u64 = REX_LOAD_U8(r31.u32 + r21.u32);
	// lbzx r21,r9,r11
	r21.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// ld r11,-168(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// or r21,r31,r21
	r21.u64 = r31.u64 | r21.u64;
loc_823620D4:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bne cr6,0x82362130
	if (!ctx.cr6.eq) goto loc_82362130;
	// lwz r31,-4(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// subf. r31,r6,r31
	r31.u64 = r31.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82362130
	if (!ctx.cr0.eq) goto loc_82362130;
	// rldicl r7,r20,32,32
	ctx.r7.u64 = __builtin_rotateleft64(r20.u64, 32) & 0xFFFFFFFF;
	// lbzx r31,r9,r11
	r31.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// std r11,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r11.u64);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// stw r4,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r4.u32);
	// clrlwi r21,r21,24
	r21.u64 = r21.u32 & 0xFF;
	// lwz r11,-176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// stw r7,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r7.u32);
	// std r10,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r10.u64);
	// lwz r10,-168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r7,-184(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// ld r10,-176(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// or r31,r11,r31
	r31.u64 = ctx.r11.u64 | r31.u64;
	// ld r11,-160(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// and r21,r31,r21
	r21.u64 = r31.u64 & r21.u64;
loc_82362130:
	// lwz r31,4(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r31,16384
	ctx.cr6.compare<int32_t>(r31.s32, 16384, ctx.xer);
	// beq cr6,0x823621b4
	if (ctx.cr6.eq) goto loc_823621B4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82362180
	if (!ctx.cr6.eq) goto loc_82362180;
	// lwz r10,-224(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// subf. r10,r31,r10
	ctx.r10.u64 = ctx.r10.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82362180
	if (!ctx.cr0.eq) goto loc_82362180;
	// rldicl r10,r27,48,16
	ctx.r10.u64 = __builtin_rotateleft64(r27.u64, 48) & 0xFFFFFFFFFFFF;
	// std r11,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r11.u64);
	// addi r22,r11,192
	r22.s64 = ctx.r11.s64 + 192;
	// lwz r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// lbzx r10,r10,r22
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + r22.u32);
	// lbzx r22,r5,r11
	r22.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// ld r11,-160(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// or r22,r10,r22
	r22.u64 = ctx.r10.u64 | r22.u64;
loc_82362180:
	// cmpw cr6,r6,r31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r31.s32, ctx.xer);
	// bne cr6,0x823621b4
	if (!ctx.cr6.eq) goto loc_823621B4;
	// std r11,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r11.u64);
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// lbzx r4,r5,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// clrlwi r22,r22,24
	r22.u64 = r22.u32 & 0xFF;
	// lbzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// stw r4,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r4.u32);
	// lwz r11,-168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lwz r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// and r22,r10,r22
	r22.u64 = ctx.r10.u64 & r22.u64;
	// ld r11,-160(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
loc_823621B4:
	// lwz r10,-212(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,16384
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16384, ctx.xer);
	// beq cr6,0x82362218
	if (ctx.cr6.eq) goto loc_82362218;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823621e4
	if (!ctx.cr6.eq) goto loc_823621E4;
	// addi r6,r11,192
	ctx.r6.s64 = ctx.r11.s64 + 192;
	// addi r23,r11,128
	r23.s64 = ctx.r11.s64 + 128;
	// lbzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r6,r3,r23
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + r23.u32);
	// or r23,r9,r6
	r23.u64 = ctx.r9.u64 | ctx.r6.u64;
loc_823621E4:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bne cr6,0x82362218
	if (!ctx.cr6.eq) goto loc_82362218;
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// subf. r6,r8,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82362218
	if (!ctx.cr0.eq) goto loc_82362218;
	// rldicl r9,r20,48,16
	ctx.r9.u64 = __builtin_rotateleft64(r20.u64, 48) & 0xFFFFFFFFFFFF;
	// lbzx r6,r3,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r23,r23,24
	r23.u64 = r23.u32 & 0xFF;
	// lbzx r3,r9,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// or r9,r3,r6
	ctx.r9.u64 = ctx.r3.u64 | ctx.r6.u64;
	// and r23,r9,r23
	r23.u64 = ctx.r9.u64 & r23.u64;
loc_82362218:
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// beq cr6,0x82362260
	if (ctx.cr6.eq) goto loc_82362260;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82362240
	if (!ctx.cr6.eq) goto loc_82362240;
	// addi r9,r11,192
	ctx.r9.s64 = ctx.r11.s64 + 192;
	// addi r6,r11,128
	ctx.r6.s64 = ctx.r11.s64 + 128;
	// lbzx r3,r5,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// lbzx r9,r30,r6
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + ctx.r6.u32);
	// or r24,r3,r9
	r24.u64 = ctx.r3.u64 | ctx.r9.u64;
loc_82362240:
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82362260
	if (!ctx.cr6.eq) goto loc_82362260;
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// lbzx r9,r30,r11
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// clrlwi r8,r24,24
	ctx.r8.u64 = r24.u32 & 0xFF;
	// lbzx r6,r5,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// or r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 | ctx.r9.u64;
	// and r24,r5,r8
	r24.u64 = ctx.r5.u64 & ctx.r8.u64;
loc_82362260:
	// lwz r9,-216(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// lwz r10,352(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 352);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r9,16384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16384, ctx.xer);
	// beq cr6,0x82362320
	if (ctx.cr6.eq) goto loc_82362320;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x823622d0
	if (!ctx.cr6.eq) goto loc_823622D0;
	// lwz r6,-192(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// lwz r5,-220(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// subf r3,r6,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r6.u64;
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// subf. r3,r9,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823622d0
	if (!ctx.cr0.eq) goto loc_823622D0;
	// rldicl r10,r27,56,8
	ctx.r10.u64 = __builtin_rotateleft64(r27.u64, 56) & 0xFFFFFFFFFFFFFF;
	// addi r6,r11,192
	ctx.r6.s64 = ctx.r11.s64 + 192;
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// clrlwi r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	// addi r31,r11,192
	r31.s64 = ctx.r11.s64 + 192;
	// addi r30,r11,128
	r30.s64 = ctx.r11.s64 + 128;
	// lbzx r6,r5,r6
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// lbzx r5,r25,r3
	ctx.r5.u64 = REX_LOAD_U8(r25.u32 + ctx.r3.u32);
	// lbzx r3,r10,r31
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + r31.u32);
	// or r29,r6,r5
	r29.u64 = ctx.r6.u64 | ctx.r5.u64;
	// lbzx r10,r26,r30
	ctx.r10.u64 = REX_LOAD_U8(r26.u32 + r30.u32);
	// or r28,r3,r10
	r28.u64 = ctx.r3.u64 | ctx.r10.u64;
loc_823622D0:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bne cr6,0x82362320
	if (!ctx.cr6.eq) goto loc_82362320;
	// lwz r10,-4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// subf. r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82362320
	if (!ctx.cr0.eq) goto loc_82362320;
	// rldicl r10,r20,56,8
	ctx.r10.u64 = __builtin_rotateleft64(r20.u64, 56) & 0xFFFFFFFFFFFFFF;
	// lbzx r9,r25,r11
	ctx.r9.u64 = REX_LOAD_U8(r25.u32 + ctx.r11.u32);
	// addi r8,r11,64
	ctx.r8.s64 = ctx.r11.s64 + 64;
	// lbzx r6,r26,r11
	ctx.r6.u64 = REX_LOAD_U8(r26.u32 + ctx.r11.u32);
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r3,r20,24
	ctx.r3.u64 = r20.u32 & 0xFF;
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// clrlwi r31,r29,24
	r31.u64 = r29.u32 & 0xFF;
	// clrlwi r30,r28,24
	r30.u64 = r28.u32 & 0xFF;
	// lbzx r8,r5,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// lbzx r5,r3,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// or r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 | ctx.r6.u64;
	// and r29,r3,r31
	r29.u64 = ctx.r3.u64 & r31.u64;
	// and r28,r10,r30
	r28.u64 = ctx.r10.u64 & r30.u64;
loc_82362320:
	// rldicl r10,r16,56,8
	ctx.r10.u64 = __builtin_rotateleft64(r16.u64, 56) & 0xFFFFFFFFFFFFFF;
	// lwz r31,-224(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// clrlwi r9,r16,24
	ctx.r9.u64 = r16.u32 & 0xFF;
	// rldicl r8,r10,56,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 56) & 0xFFFFFFFFFFFFFF;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// rldicl r5,r8,56,8
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u64, 56) & 0xFFFFFFFFFFFFFF;
	// clrlwi r3,r8,24
	ctx.r3.u64 = ctx.r8.u32 & 0xFF;
	// rldicl r10,r5,56,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u64, 56) & 0xFFFFFFFFFFFFFF;
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// rldicl r5,r10,56,8
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 56) & 0xFFFFFFFFFFFFFF;
	// and r9,r9,r21
	ctx.r9.u64 = ctx.r9.u64 & r21.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// stb r9,0(r19)
	REX_STORE_U8(r19.u32 + 0, ctx.r9.u8);
	// and r9,r8,r24
	ctx.r9.u64 = ctx.r8.u64 & r24.u64;
	// and r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 & r28.u64;
	// lwz r28,-192(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// and r6,r6,r22
	ctx.r6.u64 = ctx.r6.u64 & r22.u64;
	// stb r9,3(r19)
	REX_STORE_U8(r19.u32 + 3, ctx.r9.u8);
	// and r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 & r23.u64;
	// stb r5,5(r19)
	REX_STORE_U8(r19.u32 + 5, ctx.r5.u8);
	// and r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 & r29.u64;
	// stb r6,1(r19)
	REX_STORE_U8(r19.u32 + 1, ctx.r6.u8);
	// stb r3,2(r19)
	REX_STORE_U8(r19.u32 + 2, ctx.r3.u8);
	// stb r8,4(r19)
	REX_STORE_U8(r19.u32 + 4, ctx.r8.u8);
loc_82362384:
	// lwz r10,-220(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// addi r9,r31,8
	ctx.r9.s64 = r31.s64 + 8;
	// lwz r8,-216(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// addi r15,r15,-1
	r15.s64 = r15.s64 + -1;
	// lwz r6,-212(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r3,r8,4
	ctx.r3.s64 = ctx.r8.s64 + 4;
	// stw r9,-224(r1)
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r9.u32);
	// addi r10,r6,8
	ctx.r10.s64 = ctx.r6.s64 + 8;
	// stw r5,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r5.u32);
	// stw r3,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r3.u32);
	// addi r14,r14,8
	r14.s64 = r14.s64 + 8;
	// stw r10,-212(r1)
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// addi r19,r19,6
	r19.s64 = r19.s64 + 6;
	// addi r17,r17,8
	r17.s64 = r17.s64 + 8;
	// bdnz 0x82361f24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82361F24;
	// lwz r9,-204(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// lwz r14,-208(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// lwz r8,-200(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// lwz r27,52(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
loc_823623D4:
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r7,r10,r14
	ctx.r7.u64 = ctx.r10.u64 + r14.u64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r7.u32);
	// stw r6,-204(r1)
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r6.u32);
	// bne cr6,0x823623fc
	if (!ctx.cr6.eq) goto loc_823623FC;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r9,-200(r1)
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_823623FC:
	// lwz r9,-196(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,-196(r1)
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r9.u32);
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r27.u32, ctx.xer);
	// blt cr6,0x82361eb8
	if (ctx.cr6.lt) goto loc_82361EB8;
loc_82362410:
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8237BB78) {
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
	// addi r4,r3,3748
	ctx.r4.s64 = ctx.r3.s64 + 3748;
	// addi r3,r3,3752
	ctx.r3.s64 = ctx.r3.s64 + 3752;
	// bl 0x823530d0
	ctx.lr = 0x8237BB98;
	sub_823530D0(ctx, base);
	// lwz r11,3752(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3752);
	// lwz r10,3748(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3748);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,3788(r31)
	REX_STORE_U32(r31.u32 + 3788, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,3792(r31)
	REX_STORE_U32(r31.u32 + 3792, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,3796(r31)
	REX_STORE_U32(r31.u32 + 3796, ctx.r7.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,3816(r31)
	REX_STORE_U32(r31.u32 + 3816, ctx.r6.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r5,3820(r31)
	REX_STORE_U32(r31.u32 + 3820, ctx.r5.u32);
	// lwz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r4,3824(r31)
	REX_STORE_U32(r31.u32 + 3824, ctx.r4.u32);
	// beq cr6,0x8237bbe8
	if (ctx.cr6.eq) goto loc_8237BBE8;
	// lwz r10,220(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 220);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8237bbec
	goto loc_8237BBEC;
loc_8237BBE8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8237BBEC:
	// lwz r11,3788(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3788);
	// stw r10,3828(r31)
	REX_STORE_U32(r31.u32 + 3828, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237bc08
	if (ctx.cr6.eq) goto loc_8237BC08;
	// lwz r10,220(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 220);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8237bc0c
	goto loc_8237BC0C;
loc_8237BC08:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8237BC0C:
	// lwz r9,3792(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3792);
	// lwz r8,3796(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3796);
	// stw r10,3812(r31)
	REX_STORE_U32(r31.u32 + 3812, ctx.r10.u32);
	// stw r11,14824(r31)
	REX_STORE_U32(r31.u32 + 14824, ctx.r11.u32);
	// stw r9,14828(r31)
	REX_STORE_U32(r31.u32 + 14828, ctx.r9.u32);
	// stw r8,14832(r31)
	REX_STORE_U32(r31.u32 + 14832, ctx.r8.u32);
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

DEFINE_REX_FUNC(sub_8237DBF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8237DBF8;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8237dc40
	if (ctx.cr6.eq) goto loc_8237DC40;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x8237dc40
	if (ctx.cr6.eq) goto loc_8237DC40;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x8237dc40
	if (ctx.cr6.eq) goto loc_8237DC40;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// beq cr6,0x8237dc40
	if (ctx.cr6.eq) goto loc_8237DC40;
	// li r10,16
	ctx.r10.s64 = 16;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8237DC2C:
	// lhzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8237dc2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237DC2C;
	// b 0x822d4ed8
	return;
loc_8237DC40:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lbz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// lwz r4,6608(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 6608);
	// li r31,3
	r31.s64 = 3;
	// addi r10,r11,-22200
	ctx.r10.s64 = ctx.r11.s64 + -22200;
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// rotlwi r29,r5,2
	r29.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lhz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + r29.u64;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r30,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// subf r5,r5,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r5.u64;
	// extsh r29,r8
	r29.s64 = ctx.r8.s16;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// subf r30,r6,r9
	r30.u64 = ctx.r9.u64 - ctx.r6.u64;
	// lwz r31,16(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// lbz r5,4(r5)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 4);
	// rlwinm r28,r31,2,24,29
	r28.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFC;
	// rotlwi r31,r5,2
	r31.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r28,r10
	r31.u64 = REX_LOAD_U32(r28.u32 + ctx.r10.u32);
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lwz r5,16(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mullw r4,r5,r31
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(r31.s32);
	// mullw r5,r4,r29
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(r29.s32);
	// add r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 + ctx.r8.u64;
	// srawi r5,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 18;
	// sth r5,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r5.u16);
loc_8237DCC8:
	// lwz r5,136(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// lbz r31,4(r7)
	r31.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r29,2(r9)
	r29.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// rlwinm r31,r31,2,24,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFC;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// extsh r4,r29
	ctx.r4.s64 = r29.s16;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r5,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r5.u64;
	// lwzx r31,r31,r10
	r31.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// lbz r5,4(r5)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 4);
	// mullw r5,r5,r31
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r31.s32);
	// mullw r4,r5,r4
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// add r5,r4,r8
	ctx.r5.u64 = ctx.r4.u64 + ctx.r8.u64;
	// srawi r4,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 18;
	// sth r4,-2(r11)
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r4.u16);
	// lbz r31,4(r7)
	r31.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// lhzx r29,r11,r30
	r29.u64 = REX_LOAD_U16(ctx.r11.u32 + r30.u32);
	// lwz r5,136(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// rlwinm r5,r31,2,24,29
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFC;
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r31,r29
	r31.s64 = r29.s16;
	// subf r4,r4,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r4.u64;
	// lwzx r5,r5,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// lbz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// mullw r5,r4,r5
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// mullw r4,r5,r31
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(r31.s32);
	// add r5,r4,r8
	ctx.r5.u64 = ctx.r4.u64 + ctx.r8.u64;
	// srawi r4,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 18;
	// sth r4,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// lbz r31,4(r7)
	r31.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// lhz r29,6(r9)
	r29.u64 = REX_LOAD_U16(ctx.r9.u32 + 6);
	// lwz r5,136(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// rlwinm r5,r31,2,24,29
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFC;
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r31,r29
	r31.s64 = r29.s16;
	// subf r4,r4,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r4.u64;
	// lwzx r5,r5,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// lbz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// mullw r5,r4,r5
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// mullw r4,r5,r31
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(r31.s32);
	// add r5,r4,r8
	ctx.r5.u64 = ctx.r4.u64 + ctx.r8.u64;
	// srawi r4,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 18;
	// sth r4,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r4.u16);
	// lbz r31,4(r7)
	r31.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// lhz r29,8(r9)
	r29.u64 = REX_LOAD_U16(ctx.r9.u32 + 8);
	// lwz r5,136(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// rlwinm r5,r31,2,24,29
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFC;
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r31,r29
	r31.s64 = r29.s16;
	// subf r4,r4,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r4.u64;
	// lwzx r5,r5,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// lbz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// mullw r5,r4,r5
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// mullw r4,r5,r31
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(r31.s32);
	// add r5,r4,r8
	ctx.r5.u64 = ctx.r4.u64 + ctx.r8.u64;
	// srawi r4,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 18;
	// sth r4,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r4.u16);
	// lbz r29,4(r7)
	r29.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// lhzu r4,10(r9)
	ea = 10 + ctx.r9.u32;
	ctx.r4.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// lwz r5,136(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// rlwinm r31,r5,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// rlwinm r31,r29,2,24,29
	r31.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFC;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// subf r5,r5,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r5.u64;
	// lwzx r31,r31,r10
	r31.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// lbz r5,4(r5)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 4);
	// mullw r5,r5,r31
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r31.s32);
	// mullw r4,r5,r4
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// add r5,r4,r8
	ctx.r5.u64 = ctx.r4.u64 + ctx.r8.u64;
	// srawi r4,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 18;
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// sth r5,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r5.u16);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// bdnz 0x8237dcc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237DCC8;
	// lhz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// sth r11,16(r6)
	REX_STORE_U16(ctx.r6.u32 + 16, ctx.r11.u16);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8238A830) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r10,-28600(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -28600);
	// ble cr6,0x8238a87c
	if (!ctx.cr6.gt) goto loc_8238A87C;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8238A860:
	// lbzx r9,r11,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// addi r9,r9,-64
	ctx.r9.s64 = ctx.r9.s64 + -64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r3,r7,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// stbx r3,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r3.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8238a860
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238A860;
loc_8238A87C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8238a8a8
	if (!ctx.cr6.gt) goto loc_8238A8A8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8238A88C:
	// lbzx r9,r11,r5
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// addi r9,r9,-64
	ctx.r9.s64 = ctx.r9.s64 + -64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r7,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// stbx r4,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r4.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8238a88c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238A88C;
loc_8238A8A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8238A8B8:
	// lbzx r9,r11,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r9,r9,-64
	ctx.r9.s64 = ctx.r9.s64 + -64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// stbx r7,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8238a8b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238A8B8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8238C1F0) {
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
	ctx.lr = 0x8238C1F8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238c5d4
	if (ctx.cr6.eq) goto loc_8238C5D4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8238c5d4
	if (ctx.cr6.eq) goto loc_8238C5D4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8238c234
	if (ctx.cr6.eq) goto loc_8238C234;
	// lwz r30,4(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,8(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lhz r29,14(r4)
	r29.u64 = REX_LOAD_U16(ctx.r4.u32 + 14);
	// lwz r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// b 0x8238c248
	goto loc_8238C248;
loc_8238C234:
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r30,14588(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 14588);
	// lwz r3,14592(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 14592);
	// lhz r29,14(r5)
	r29.u64 = REX_LOAD_U16(ctx.r5.u32 + 14);
	// lwz r4,16(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
loc_8238C248:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8238c5d4
	if (ctx.cr6.lt) goto loc_8238C5D4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x8238c5d4
	if (ctx.cr6.lt) goto loc_8238C5D4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8238c5d4
	if (ctx.cr6.lt) goto loc_8238C5D4;
	// lwz r5,228(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8238c5d4
	if (ctx.cr6.lt) goto loc_8238C5D4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x8238c5d4
	if (ctx.cr6.lt) goto loc_8238C5D4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x8238c5d4
	if (ctx.cr6.lt) goto loc_8238C5D4;
	// add r27,r6,r10
	r27.u64 = ctx.r6.u64 + ctx.r10.u64;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(r27.u32, r30.u32, ctx.xer);
	// bgt cr6,0x8238c5d4
	if (ctx.cr6.gt) goto loc_8238C5D4;
	// srawi r27,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	r27.s64 = ctx.r3.s32 >> 31;
	// add r26,r7,r5
	r26.u64 = ctx.r7.u64 + ctx.r5.u64;
	// xor r25,r3,r27
	r25.u64 = ctx.r3.u64 ^ r27.u64;
	// subf r27,r27,r25
	r27.u64 = r25.u64 - r27.u64;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(r26.u32, r27.u32, ctx.xer);
	// bgt cr6,0x8238c5d4
	if (ctx.cr6.gt) goto loc_8238C5D4;
	// lwz r27,4(r28)
	r27.u64 = REX_LOAD_U32(r28.u32 + 4);
	// add r26,r8,r10
	r26.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(r26.u32, r27.u32, ctx.xer);
	// bgt cr6,0x8238c5d4
	if (ctx.cr6.gt) goto loc_8238C5D4;
	// lwz r27,8(r28)
	r27.u64 = REX_LOAD_U32(r28.u32 + 8);
	// add r26,r9,r5
	r26.u64 = ctx.r9.u64 + ctx.r5.u64;
	// srawi r25,r27,31
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x7FFFFFFF) != 0);
	r25.s64 = r27.s32 >> 31;
	// xor r27,r27,r25
	r27.u64 = r27.u64 ^ r25.u64;
	// subf r27,r25,r27
	r27.u64 = r27.u64 - r25.u64;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(r26.u32, r27.u32, ctx.xer);
	// bgt cr6,0x8238c5d4
	if (ctx.cr6.gt) goto loc_8238C5D4;
	// lwz r27,14604(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 14604);
	// cmpw cr6,r27,r6
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x8238c2e0
	if (ctx.cr6.eq) goto loc_8238C2E0;
	// stw r6,14604(r31)
	REX_STORE_U32(r31.u32 + 14604, ctx.r6.u32);
	// li r11,2
	ctx.r11.s64 = 2;
loc_8238C2E0:
	// lwz r6,14608(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 14608);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x8238c2f4
	if (ctx.cr6.eq) goto loc_8238C2F4;
	// stw r7,14608(r31)
	REX_STORE_U32(r31.u32 + 14608, ctx.r7.u32);
	// li r11,2
	ctx.r11.s64 = 2;
loc_8238C2F4:
	// lwz r7,14612(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 14612);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8238c308
	if (ctx.cr6.eq) goto loc_8238C308;
	// stw r8,14612(r31)
	REX_STORE_U32(r31.u32 + 14612, ctx.r8.u32);
	// li r11,2
	ctx.r11.s64 = 2;
loc_8238C308:
	// lwz r8,14616(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 14616);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8238c31c
	if (ctx.cr6.eq) goto loc_8238C31C;
	// stw r9,14616(r31)
	REX_STORE_U32(r31.u32 + 14616, ctx.r9.u32);
	// li r11,2
	ctx.r11.s64 = 2;
loc_8238C31C:
	// lwz r9,14516(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 14516);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8238c338
	if (ctx.cr6.eq) goto loc_8238C338;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r10,14516(r31)
	REX_STORE_U32(r31.u32 + 14516, ctx.r10.u32);
loc_8238C338:
	// lwz r9,14520(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 14520);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x8238c354
	if (ctx.cr6.eq) goto loc_8238C354;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r5,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r5.u32);
	// stw r5,14520(r31)
	REX_STORE_U32(r31.u32 + 14520, ctx.r5.u32);
loc_8238C354:
	// lwz r9,14480(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 14480);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8238c370
	if (ctx.cr6.eq) goto loc_8238C370;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r10,14480(r31)
	REX_STORE_U32(r31.u32 + 14480, ctx.r10.u32);
loc_8238C370:
	// lwz r10,14484(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 14484);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x8238c38c
	if (ctx.cr6.eq) goto loc_8238C38C;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r5,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// stw r5,14484(r31)
	REX_STORE_U32(r31.u32 + 14484, ctx.r5.u32);
loc_8238C38C:
	// lwz r10,14588(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 14588);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r30.s32, ctx.xer);
	// beq cr6,0x8238c3ac
	if (ctx.cr6.eq) goto loc_8238C3AC;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r30,14588(r31)
	REX_STORE_U32(r31.u32 + 14588, r30.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8238C3AC:
	// lwz r10,14592(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 14592);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8238c3c0
	if (ctx.cr6.eq) goto loc_8238C3C0;
	// stw r3,14592(r31)
	REX_STORE_U32(r31.u32 + 14592, ctx.r3.u32);
	// li r11,2
	ctx.r11.s64 = 2;
loc_8238C3C0:
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r9,14596(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 14596);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8238c3e4
	if (ctx.cr6.eq) goto loc_8238C3E4;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r10,14596(r31)
	REX_STORE_U32(r31.u32 + 14596, ctx.r10.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8238C3E4:
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r9,14600(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 14600);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8238c3fc
	if (ctx.cr6.eq) goto loc_8238C3FC;
	// stw r10,14600(r31)
	REX_STORE_U32(r31.u32 + 14600, ctx.r10.u32);
	// li r11,2
	ctx.r11.s64 = 2;
loc_8238C3FC:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8238c414
	if (ctx.cr6.eq) goto loc_8238C414;
	// stw r4,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r4.u32);
	// li r11,2
	ctx.r11.s64 = 2;
loc_8238C414:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,16(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 16);
	// lwz r8,16(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8238c430
	if (ctx.cr6.eq) goto loc_8238C430;
	// stw r10,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// li r11,2
	ctx.r11.s64 = 2;
loc_8238C430:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lhz r9,14(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, ctx.xer);
	// beq cr6,0x8238c448
	if (ctx.cr6.eq) goto loc_8238C448;
	// li r11,2
	ctx.r11.s64 = 2;
	// sth r29,14(r10)
	REX_STORE_U16(ctx.r10.u32 + 14, r29.u16);
loc_8238C448:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lhz r10,14(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 14);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lhz r7,14(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 14);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8238c468
	if (ctx.cr6.eq) goto loc_8238C468;
	// sth r10,14(r9)
	REX_STORE_U16(ctx.r9.u32 + 14, ctx.r10.u16);
	// li r11,2
	ctx.r11.s64 = 2;
loc_8238C468:
	// lwz r10,244(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r9,14624(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 14624);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8238c48c
	if (ctx.cr6.eq) goto loc_8238C48C;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r10,14624(r31)
	REX_STORE_U32(r31.u32 + 14624, ctx.r10.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8238C48C:
	// lwz r10,252(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r9,14628(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 14628);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8238c4b0
	if (ctx.cr6.eq) goto loc_8238C4B0;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r10,14628(r31)
	REX_STORE_U32(r31.u32 + 14628, ctx.r10.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8238C4B0:
	// lwz r10,260(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r9,14632(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 14632);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8238c4d4
	if (ctx.cr6.eq) goto loc_8238C4D4;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r10,14632(r31)
	REX_STORE_U32(r31.u32 + 14632, ctx.r10.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8238C4D4:
	// lwz r10,236(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r9,14620(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 14620);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8238c4ec
	if (ctx.cr6.eq) goto loc_8238C4EC;
	// stw r10,14620(r31)
	REX_STORE_U32(r31.u32 + 14620, ctx.r10.u32);
	// b 0x8238c4f4
	goto loc_8238C4F4;
loc_8238C4EC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8238c5a8
	if (!ctx.cr6.eq) goto loc_8238C5A8;
loc_8238C4F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823bf440
	ctx.lr = 0x8238C4FC;
	sub_823BF440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c5d8
	if (!ctx.cr6.eq) goto loc_8238C5D8;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238c534
	if (!ctx.cr6.eq) goto loc_8238C534;
	// lhz r10,14(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 14);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x8238c534
	if (!ctx.cr6.eq) goto loc_8238C534;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r28,40
	ctx.r4.s64 = r28.s64 + 40;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bl 0x822091c8
	ctx.lr = 0x8238C530;
	sub_822091C8(ctx, base);
	// b 0x8238c550
	goto loc_8238C550;
loc_8238C534:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8238c550
	if (!ctx.cr6.eq) goto loc_8238C550;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r4,r28,40
	ctx.r4.s64 = r28.s64 + 40;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bl 0x822d4fa0
	ctx.lr = 0x8238C550;
	sub_822D4FA0(ctx, base);
loc_8238C550:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8238c564
	if (!ctx.cr6.lt) goto loc_8238C564;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_8238C564:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// mullw r5,r6,r10
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stw r5,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// bl 0x823bf340
	ctx.lr = 0x8238C588;
	sub_823BF340(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c5d8
	if (!ctx.cr6.eq) goto loc_8238C5D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c0380
	ctx.lr = 0x8238C598;
	sub_823C0380(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238c5c8
	if (ctx.cr6.eq) goto loc_8238C5C8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_8238C5A8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8238c5c8
	if (!ctx.cr6.eq) goto loc_8238C5C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,14600(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 14600);
	// lwz r6,14596(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 14596);
	// lwz r5,14592(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 14592);
	// lwz r4,14588(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 14588);
	// bl 0x823bdc28
	ctx.lr = 0x8238C5C8;
	sub_823BDC28(ctx, base);
loc_8238C5C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_8238C5D4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8238C5D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82395668) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82395670;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239579c
	if (ctx.cr6.eq) goto loc_8239579C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8239579c
	if (!ctx.cr6.gt) goto loc_8239579C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bne cr6,0x823956b0
	if (!ctx.cr6.eq) goto loc_823956B0;
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
loc_823956B0:
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
	// bne cr6,0x823956d0
	if (!ctx.cr6.eq) goto loc_823956D0;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_823956D0:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// beq cr6,0x8239579c
	if (ctx.cr6.eq) goto loc_8239579C;
loc_823956E4:
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823956fc
	if (ctx.cr6.eq) goto loc_823956FC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8233ff78
	ctx.lr = 0x823956F8;
	sub_8233FF78(ctx, base);
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
loc_823956FC:
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82395714
	if (ctx.cr6.eq) goto loc_82395714;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8233ff78
	ctx.lr = 0x82395710;
	sub_8233FF78(ctx, base);
	// stw r29,16(r31)
	REX_STORE_U32(r31.u32 + 16, r29.u32);
loc_82395714:
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8239572c
	if (ctx.cr6.eq) goto loc_8239572C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8233ff78
	ctx.lr = 0x82395728;
	sub_8233FF78(ctx, base);
	// stw r29,20(r31)
	REX_STORE_U32(r31.u32 + 20, r29.u32);
loc_8239572C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8233ff78
	ctx.lr = 0x82395738;
	sub_8233FF78(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239579c
	if (ctx.cr6.eq) goto loc_8239579C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8239579c
	if (!ctx.cr6.gt) goto loc_8239579C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bne cr6,0x82395768
	if (!ctx.cr6.eq) goto loc_82395768;
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
loc_82395768:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r31,4(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82395788
	if (!ctx.cr6.eq) goto loc_82395788;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_82395788:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// bne cr6,0x823956e4
	if (!ctx.cr6.eq) goto loc_823956E4;
loc_8239579C:
	// lwz r3,12(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 12);
	// bl 0x82395510
	ctx.lr = 0x823957A4;
	sub_82395510(ctx, base);
	// lwz r4,12(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823957bc
	if (ctx.cr6.eq) goto loc_823957BC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8233ff78
	ctx.lr = 0x823957B8;
	sub_8233FF78(ctx, base);
	// stw r29,12(r28)
	REX_STORE_U32(r28.u32 + 12, r29.u32);
loc_823957BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823999C0) {
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
	ctx.lr = 0x823999C8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// blt cr6,0x823999e4
	if (ctx.cr6.lt) goto loc_823999E4;
	// li r27,1024
	r27.s64 = 1024;
loc_823999E4:
	// neg r11,r30
	ctx.r11.s64 = static_cast<int64_t>(-r30.u64);
	// clrlwi r28,r11,25
	r28.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r5,r28
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r28.u32, ctx.xer);
	// bge cr6,0x823999f8
	if (!ctx.cr6.lt) goto loc_823999F8;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
loc_823999F8:
	// subf r29,r28,r5
	r29.u64 = ctx.r5.u64 - r28.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82399a1c
	if (ctx.cr6.eq) goto loc_82399A1C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d5428
	ctx.lr = 0x82399A14;
	sub_822D5428(ctx, base);
	// add r31,r28,r31
	r31.u64 = r28.u64 + r31.u64;
	// add r30,r28,r30
	r30.u64 = r28.u64 + r30.u64;
loc_82399A1C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82399a44
	if (ctx.cr6.eq) goto loc_82399A44;
	// addi r10,r27,-1
	ctx.r10.s64 = r27.s64 + -1;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82399A38:
	// dcbt r11,r31
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x82399a38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82399A38;
loc_82399A44:
	// clrlwi r11,r31,28
	ctx.r11.u64 = r31.u32 & 0xF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82399b14
	if (!ctx.cr6.eq) goto loc_82399B14;
	// cmplwi cr6,r29,128
	ctx.cr6.compare<uint32_t>(r29.u32, 128, ctx.xer);
	// blt cr6,0x82399adc
	if (ctx.cr6.lt) goto loc_82399ADC;
	// rlwinm r11,r29,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 25) & 0x1FFFFFF;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r8,64
	ctx.r8.s64 = 64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r9,80
	ctx.r9.s64 = 80;
	// li r10,96
	ctx.r10.s64 = 96;
	// li r11,112
	ctx.r11.s64 = 112;
loc_82399A7C:
	// cmplwi cr6,r29,1024
	ctx.cr6.compare<uint32_t>(r29.u32, 1024, ctx.xer);
	// ble cr6,0x82399a8c
	if (!ctx.cr6.gt) goto loc_82399A8C;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// dcbt r4,r31
loc_82399A8C:
	// lvx128 v63,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r29,-128
	r29.s64 = r29.s64 + -128;
	// lvx128 v62,r31,r5
	ea = (r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r31,r6
	ea = (r31.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r31,r7
	ea = (r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r31,128
	r31.s64 = r31.s64 + 128;
	// stvx128 v63,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r30,r5
	ea = (r30.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r30,r6
	ea = (r30.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r30,r7
	ea = (r30.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v59,r30,r8
	ea = (r30.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r30,r9
	ea = (r30.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v57,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r30,r11
	ea = (r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
	// bdnz 0x82399a7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82399A7C;
loc_82399ADC:
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(r29.u32, 16, ctx.xer);
	// blt cr6,0x82399c14
	if (ctx.cr6.lt) goto loc_82399C14;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r5,r29,0,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r28,r29,28,4,31
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x822d5428
	ctx.lr = 0x82399AF8;
	sub_822D5428(ctx, base);
	// rlwinm r11,r29,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFF0;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
loc_82399B04:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,-16
	r29.s64 = r29.s64 + -16;
	// bne 0x82399b04
	if (!ctx.cr0.eq) goto loc_82399B04;
	// b 0x82399c14
	goto loc_82399C14;
loc_82399B14:
	// li r5,16
	ctx.r5.s64 = 16;
	// cmplwi cr6,r29,128
	ctx.cr6.compare<uint32_t>(r29.u32, 128, ctx.xer);
	// blt cr6,0x82399be4
	if (ctx.cr6.lt) goto loc_82399BE4;
	// rlwinm r11,r29,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 25) & 0x1FFFFFF;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r8,64
	ctx.r8.s64 = 64;
	// li r9,80
	ctx.r9.s64 = 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r10,96
	ctx.r10.s64 = 96;
	// li r11,112
	ctx.r11.s64 = 112;
	// li r4,128
	ctx.r4.s64 = 128;
loc_82399B44:
	// cmplwi cr6,r29,1024
	ctx.cr6.compare<uint32_t>(r29.u32, 1024, ctx.xer);
	// ble cr6,0x82399b54
	if (!ctx.cr6.gt) goto loc_82399B54;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// dcbt r3,r31
loc_82399B54:
	// lvlx128 v55,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r29,r29,-128
	r29.s64 = r29.s64 + -128;
	// lvrx128 v54,r5,r31
	temp.u32 = ctx.r5.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v53,r6,r31
	temp.u32 = ctx.r6.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v52,v55,v54
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// lvlx128 v51,r5,r31
	temp.u32 = ctx.r5.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v50,r7,r31
	temp.u32 = ctx.r7.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v49,v51,v53
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvlx128 v48,r6,r31
	temp.u32 = ctx.r6.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v47,r8,r31
	temp.u32 = ctx.r8.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v46,v48,v50
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// lvlx128 v45,r7,r31
	temp.u32 = ctx.r7.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v44,r9,r31
	temp.u32 = ctx.r9.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v43,v45,v47
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v42,r8,r31
	temp.u32 = ctx.r8.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v41,r10,r31
	temp.u32 = ctx.r10.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v40,v42,v44
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8)));
	// lvlx128 v39,r9,r31
	temp.u32 = ctx.r9.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v38,r11,r31
	temp.u32 = ctx.r11.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v37,v39,v41
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8)));
	// lvlx128 v36,r10,r31
	temp.u32 = ctx.r10.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v35,r4,r31
	temp.u32 = ctx.r4.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v34,v36,v38
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// lvlx128 v33,r11,r31
	temp.u32 = ctx.r11.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r31,r31,128
	r31.s64 = r31.s64 + 128;
	// vor128 v32,v33,v35
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// stvx128 v52,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v49,r30,r5
	ea = (r30.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v46,r30,r6
	ea = (r30.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v43,r30,r7
	ea = (r30.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v40,r30,r8
	ea = (r30.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v37,r30,r9
	ea = (r30.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v34,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v32,r30,r11
	ea = (r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
	// bdnz 0x82399b44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82399B44;
loc_82399BE4:
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(r29.u32, 16, ctx.xer);
	// blt cr6,0x82399c14
	if (ctx.cr6.lt) goto loc_82399C14;
	// rlwinm r11,r29,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 28) & 0xFFFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82399BF4:
	// lvrx128 v63,r5,r31
	temp.u32 = ctx.r5.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r29,r29,-16
	r29.s64 = r29.s64 + -16;
	// lvlx128 v62,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// vor128 v61,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// stvx128 v61,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// bdnz 0x82399bf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82399BF4;
loc_82399C14:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82399c2c
	if (ctx.cr6.eq) goto loc_82399C2C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d5428
	ctx.lr = 0x82399C2C;
	sub_822D5428(ctx, base);
loc_82399C2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823B0B90) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823B0C18) {
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
	ctx.lr = 0x823B0C20;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x823b0c44
	if (!ctx.cr6.lt) goto loc_823B0C44;
	// neg r30,r30
	r30.s64 = static_cast<int64_t>(-r30.u64);
loc_823B0C44:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bge cr6,0x823b0c50
	if (!ctx.cr6.lt) goto loc_823B0C50;
	// neg r26,r26
	r26.s64 = static_cast<int64_t>(-r26.u64);
loc_823B0C50:
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// li r27,0
	r27.s64 = 0;
	// stw r29,24(r31)
	REX_STORE_U32(r31.u32 + 24, r29.u32);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r28,32(r31)
	REX_STORE_U32(r31.u32 + 32, r28.u32);
	// stw r26,36(r31)
	REX_STORE_U32(r31.u32 + 36, r26.u32);
	// stw r27,40(r31)
	REX_STORE_U32(r31.u32 + 40, r27.u32);
	// beq cr6,0x823b0c7c
	if (ctx.cr6.eq) goto loc_823B0C7C;
	// bl 0x8233d4c0
	ctx.lr = 0x823B0C78;
	sub_8233D4C0(ctx, base);
	// stw r27,60(r31)
	REX_STORE_U32(r31.u32 + 60, r27.u32);
loc_823B0C7C:
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// bgt cr6,0x823b0c88
	if (ctx.cr6.gt) goto loc_823B0C88;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_823B0C88:
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(r30.s32, r26.s32, ctx.xer);
	// bgt cr6,0x823b0c94
	if (ctx.cr6.gt) goto loc_823B0C94;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_823B0C94:
	// addi r11,r30,2
	ctx.r11.s64 = r30.s64 + 2;
	// addi r10,r29,2
	ctx.r10.s64 = r29.s64 + 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8233d448
	ctx.lr = 0x823B0CAC;
	sub_8233D448(ctx, base);
	// stw r3,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b0cc0
	if (!ctx.cr6.eq) goto loc_823B0CC0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_823B0CC0:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_823B8080) {
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
	// lis r10,12593
	ctx.r10.s64 = 825294848;
	// lwz r11,220(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lis r31,-32161
	r31.s64 = -2107703296;
	// ori r10,r10,13392
	ctx.r10.u64 = ctx.r10.u64 | 13392;
	// lis r30,12889
	r30.s64 = 844693504;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// ori r30,r30,21849
	r30.u64 = r30.u64 | 21849;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r10,5072(r31)
	REX_STORE_U32(r31.u32 + 5072, ctx.r10.u32);
	// stw r7,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r7.u32);
	// stw r8,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r8.u32);
	// stw r9,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r9.u32);
	// stw r4,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r4.u32);
	// stw r5,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r5.u32);
	// stw r6,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r6.u32);
	// bne cr6,0x823b80e8
	if (!ctx.cr6.eq) goto loc_823B80E8;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x823b64b0
	ctx.lr = 0x823B80E4;
	sub_823B64B0(ctx, base);
	// b 0x823b8118
	goto loc_823B8118;
loc_823B80E8:
	// lis r10,22870
	ctx.r10.s64 = 1498808320;
	// ori r9,r10,22869
	ctx.r9.u64 = ctx.r10.u64 | 22869;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823b8104
	if (!ctx.cr6.eq) goto loc_823B8104;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x823b64b0
	ctx.lr = 0x823B8100;
	sub_823B64B0(ctx, base);
	// b 0x823b8118
	goto loc_823B8118;
loc_823B8104:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b8114
	if (!ctx.cr6.eq) goto loc_823B8114;
	// bl 0x823b56d8
	ctx.lr = 0x823B8110;
	sub_823B56D8(ctx, base);
	// b 0x823b8118
	goto loc_823B8118;
loc_823B8114:
	// bl 0x823b3b68
	ctx.lr = 0x823B8118;
	sub_823B3B68(ctx, base);
loc_823B8118:
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

DEFINE_REX_FUNC(sub_823BD518) {
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
	ctx.lr = 0x823BD520;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-9232
	ctx.r11.s64 = ctx.r11.s64 + -9232;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// stw r8,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r8.u32);
	// lis r9,-24416
	ctx.r9.s64 = -1600126976;
	// stw r11,-164(r1)
	REX_STORE_U32(ctx.r1.u32 + -164, ctx.r11.u32);
	// li r6,51
	ctx.r6.s64 = 51;
	// ori r9,r9,41121
	ctx.r9.u64 = ctx.r9.u64 | 41121;
	// addi r7,r10,-11296
	ctx.r7.s64 = ctx.r10.s64 + -11296;
loc_823BD548:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// stw r10,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r10.u32);
loc_823BD554:
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r7,259
	ctx.r4.s64 = ctx.r7.s64 + 259;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r24,r8,r4
	r24.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_823BD56C:
	// rlwinm r4,r10,0,24,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF8;
	// rlwinm r3,r10,0,24,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFC;
	// mulhw r5,r4,r9
	ctx.r5.s64 = (int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32)) >> 32;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// mulhw r31,r3,r9
	r31.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r5,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 5;
	// add r29,r31,r3
	r29.u64 = r31.u64 + ctx.r3.u64;
	// rlwinm r30,r5,1,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// divw r28,r4,r6
	r28.u64 = uint32_t((ctx.r6.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r4.s32 / ctx.r6.s32 : 0);
	// add r31,r5,r30
	r31.u64 = ctx.r5.u64 + r30.u64;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// mulli r31,r31,51
	r31.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(51));
	// subf r30,r31,r4
	r30.u64 = ctx.r4.u64 - r31.u64;
	// addi r31,r5,-1
	r31.s64 = ctx.r5.s64 + -1;
	// subfc r4,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= r30.u32;
	ctx.r4.u64 = ctx.r11.u64 - r30.u64;
	// eqv r27,r30,r11
	r27.u64 = ~(r30.u64 ^ ctx.r11.u64);
	// eqv r26,r30,r11
	r26.u64 = ~(r30.u64 ^ ctx.r11.u64);
	// rlwinm r27,r27,1,31,31
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0x1;
	// rlwinm r4,r31,0,24,28
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xF8;
	// addze r25,r27
	temp.s64 = r27.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r27.u32;
	r25.s64 = temp.s64;
	// subfc r30,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= r30.u32;
	r30.u64 = ctx.r11.u64 - r30.u64;
	// rlwinm r31,r31,0,24,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFC;
	// rlwinm r30,r26,1,31,31
	r30.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0x1;
	// add r26,r8,r10
	r26.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addze r27,r30
	temp.s64 = r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r30.u32;
	r27.s64 = temp.s64;
	// srawi r30,r29,5
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1F) != 0);
	r30.s64 = r29.s32 >> 5;
	// clrlwi r29,r27,31
	r29.u64 = r27.u32 & 0x1;
	// rlwinm r27,r30,1,31,31
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0x1;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// add r30,r30,r27
	r30.u64 = r30.u64 + r27.u64;
	// mulhw r27,r4,r9
	r27.s64 = (int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32)) >> 32;
	// mulli r30,r30,51
	r30.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(51));
	// subf r23,r30,r3
	r23.u64 = ctx.r3.u64 - r30.u64;
	// rlwinm r30,r29,3,0,28
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// subfc r22,r23,r11
	ctx.xer.ca = ctx.r11.u32 >= r23.u32;
	r22.u64 = ctx.r11.u64 - r23.u64;
	// eqv r23,r23,r11
	r23.u64 = ~(r23.u64 ^ ctx.r11.u64);
	// add r27,r27,r4
	r27.u64 = r27.u64 + ctx.r4.u64;
	// rlwinm r23,r23,1,31,31
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0x1;
	// add r29,r29,r30
	r29.u64 = r29.u64 + r30.u64;
	// addze r23,r23
	temp.s64 = r23.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r23.u32;
	r23.s64 = temp.s64;
	// srawi r30,r27,5
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1F) != 0);
	r30.s64 = r27.s32 >> 5;
	// divw r3,r3,r6
	ctx.r3.u64 = uint32_t((ctx.r6.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r3.s32 / ctx.r6.s32 : 0);
	// rlwinm r27,r30,1,31,31
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0x1;
	// add r20,r8,r10
	r20.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r27,r30,r27
	r27.u64 = r30.u64 + r27.u64;
	// clrlwi r30,r23,31
	r30.u64 = r23.u32 & 0x1;
	// mulli r27,r27,51
	r27.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(51));
	// subf r23,r27,r4
	r23.u64 = ctx.r4.u64 - r27.u64;
	// add r3,r30,r3
	ctx.r3.u64 = r30.u64 + ctx.r3.u64;
	// subfc r30,r23,r11
	ctx.xer.ca = ctx.r11.u32 >= r23.u32;
	r30.u64 = ctx.r11.u64 - r23.u64;
	// eqv r22,r23,r11
	r22.u64 = ~(r23.u64 ^ ctx.r11.u64);
	// rlwinm r27,r3,1,0,30
	r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r22,1,31,31
	r30.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0x1;
	// add r27,r3,r27
	r27.u64 = ctx.r3.u64 + r27.u64;
	// addze r22,r30
	temp.s64 = r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r30.u32;
	r22.s64 = temp.s64;
	// subfc r21,r23,r11
	ctx.xer.ca = ctx.r11.u32 >= r23.u32;
	r21.u64 = ctx.r11.u64 - r23.u64;
	// eqv r23,r23,r11
	r23.u64 = ~(r23.u64 ^ ctx.r11.u64);
	// mulhw r3,r31,r9
	ctx.r3.s64 = (int64_t(r31.s32) * int64_t(ctx.r9.s32)) >> 32;
	// clrlwi r30,r25,31
	r30.u64 = r25.u32 & 0x1;
	// rlwinm r25,r23,1,31,31
	r25.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0x1;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + r31.u64;
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// divw r28,r4,r6
	r28.u64 = uint32_t((ctx.r6.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r4.s32 / ctx.r6.s32 : 0);
	// addze r25,r25
	temp.s64 = r25.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r25.u32;
	r25.s64 = temp.s64;
	// stbx r30,r26,r7
	REX_STORE_U8(r26.u32 + ctx.r7.u32, r30.u8);
	// srawi r4,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 5;
	// addi r19,r7,256
	r19.s64 = ctx.r7.s64 + 256;
	// rlwinm r3,r4,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// rlwinm r30,r5,0,24,28
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xF8;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r23,r8,r10
	r23.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r21,r7,512
	r21.s64 = ctx.r7.s64 + 512;
	// rlwinm r27,r27,1,24,30
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFE;
	// mulli r3,r4,51
	ctx.r3.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(51));
	// stbx r27,r20,r19
	REX_STORE_U8(r20.u32 + r19.u32, r27.u8);
	// addi r29,r29,10
	r29.s64 = r29.s64 + 10;
	// mulhw r4,r30,r9
	ctx.r4.s64 = (int64_t(r30.s32) * int64_t(ctx.r9.s32)) >> 32;
	// stbx r29,r23,r21
	REX_STORE_U8(r23.u32 + r21.u32, r29.u8);
	// subf r3,r3,r31
	ctx.r3.u64 = r31.u64 - ctx.r3.u64;
	// add r27,r4,r30
	r27.u64 = ctx.r4.u64 + r30.u64;
	// subfc r29,r3,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r3.u32;
	r29.u64 = ctx.r11.u64 - ctx.r3.u64;
	// std r24,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, r24.u64);
	// eqv r3,r3,r11
	ctx.r3.u64 = ~(ctx.r3.u64 ^ ctx.r11.u64);
	// clrlwi r4,r25,31
	ctx.r4.u64 = r25.u32 & 0x1;
	// rlwinm r3,r3,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// add r29,r4,r28
	r29.u64 = ctx.r4.u64 + r28.u64;
	// addze r25,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	r25.s64 = temp.s64;
	// srawi r4,r27,5
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1F) != 0);
	ctx.r4.s64 = r27.s32 >> 5;
	// rlwinm r26,r29,3,0,28
	r26.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r27,r4,1,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// rlwinm r3,r5,0,24,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFC;
	// add r27,r4,r27
	r27.u64 = ctx.r4.u64 + r27.u64;
	// add r26,r29,r26
	r26.u64 = r29.u64 + r26.u64;
	// mulli r27,r27,51
	r27.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(51));
	// subf r27,r27,r30
	r27.u64 = r30.u64 - r27.u64;
	// mulhw r4,r3,r9
	ctx.r4.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32)) >> 32;
	// subfc r23,r27,r11
	ctx.xer.ca = ctx.r11.u32 >= r27.u32;
	r23.u64 = ctx.r11.u64 - r27.u64;
	// eqv r21,r27,r11
	r21.u64 = ~(r27.u64 ^ ctx.r11.u64);
	// eqv r20,r27,r11
	r20.u64 = ~(r27.u64 ^ ctx.r11.u64);
	// rlwinm r23,r21,1,31,31
	r23.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0x1;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// addze r23,r23
	temp.s64 = r23.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r23.u32;
	r23.s64 = temp.s64;
	// subfc r29,r27,r11
	ctx.xer.ca = ctx.r11.u32 >= r27.u32;
	r29.u64 = ctx.r11.u64 - r27.u64;
	// divw r31,r31,r6
	r31.u64 = uint32_t((ctx.r6.s32 && !(r31.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? r31.s32 / ctx.r6.s32 : 0);
	// rlwinm r29,r20,1,31,31
	r29.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0x1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addze r21,r29
	temp.s64 = r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r29.u32;
	r21.s64 = temp.s64;
	// srawi r4,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 5;
	// divw r27,r30,r6
	r27.u64 = uint32_t((ctx.r6.s32 && !(r30.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? r30.s32 / ctx.r6.s32 : 0);
	// rlwinm r29,r4,1,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// clrlwi r30,r23,31
	r30.u64 = r23.u32 & 0x1;
	// add r29,r4,r29
	r29.u64 = ctx.r4.u64 + r29.u64;
	// clrlwi r4,r25,31
	ctx.r4.u64 = r25.u32 & 0x1;
	// mulli r29,r29,51
	r29.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(51));
	// add r31,r4,r31
	r31.u64 = ctx.r4.u64 + r31.u64;
	// subf r29,r29,r3
	r29.u64 = ctx.r3.u64 - r29.u64;
	// rlwinm r25,r31,1,0,30
	r25.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r5,0,24,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xF8;
	// subfc r23,r29,r11
	ctx.xer.ca = ctx.r11.u32 >= r29.u32;
	r23.u64 = ctx.r11.u64 - r29.u64;
	// add r25,r31,r25
	r25.u64 = r31.u64 + r25.u64;
	// eqv r29,r29,r11
	r29.u64 = ~(r29.u64 ^ ctx.r11.u64);
	// mulhw r31,r4,r9
	r31.s64 = (int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32)) >> 32;
	// rlwinm r29,r29,1,31,31
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0x1;
	// add r31,r31,r4
	r31.u64 = r31.u64 + ctx.r4.u64;
	// addze r23,r29
	temp.s64 = r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r29.u32;
	r23.s64 = temp.s64;
	// srawi r31,r31,5
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	r31.s64 = r31.s32 >> 5;
	// add r20,r30,r27
	r20.u64 = r30.u64 + r27.u64;
	// rlwinm r30,r31,1,31,31
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0x1;
	// clrlwi r29,r22,31
	r29.u64 = r22.u32 & 0x1;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// mulli r31,r31,51
	r31.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(51));
	// rlwinm r26,r26,2,0,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r8,r10
	r28.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r22,r7,1
	r22.s64 = ctx.r7.s64 + 1;
	// subf r30,r31,r4
	r30.u64 = ctx.r4.u64 - r31.u64;
	// addi r31,r26,10
	r31.s64 = r26.s64 + 10;
	// add r17,r8,r10
	r17.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r16,r7,257
	r16.s64 = ctx.r7.s64 + 257;
	// subfc r26,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= r30.u32;
	r26.u64 = ctx.r11.u64 - r30.u64;
	// stbx r29,r28,r22
	REX_STORE_U8(r28.u32 + r22.u32, r29.u8);
	// eqv r24,r30,r11
	r24.u64 = ~(r30.u64 ^ ctx.r11.u64);
	// add r19,r8,r10
	r19.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r18,r7,513
	r18.s64 = ctx.r7.s64 + 513;
	// rlwinm r25,r25,1,24,30
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFE;
	// rlwinm r29,r24,1,31,31
	r29.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0x1;
	// rlwinm r5,r5,0,24,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFC;
	// stbx r25,r17,r16
	REX_STORE_U8(r17.u32 + r16.u32, r25.u8);
	// add r15,r8,r10
	r15.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r14,r7,2
	r14.s64 = ctx.r7.s64 + 2;
	// stbx r31,r19,r18
	REX_STORE_U8(r19.u32 + r18.u32, r31.u8);
	// eqv r28,r30,r11
	r28.u64 = ~(r30.u64 ^ ctx.r11.u64);
	// addze r25,r29
	temp.s64 = r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r29.u32;
	r25.s64 = temp.s64;
	// mulhw r31,r5,r9
	r31.s64 = (int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32)) >> 32;
	// stbx r20,r15,r14
	REX_STORE_U8(r15.u32 + r14.u32, r20.u8);
	// clrlwi r26,r21,31
	r26.u64 = r21.u32 & 0x1;
	// subfc r30,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= r30.u32;
	r30.u64 = ctx.r11.u64 - r30.u64;
	// divw r29,r4,r6
	r29.u64 = uint32_t((ctx.r6.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r4.s32 / ctx.r6.s32 : 0);
	// add r31,r31,r5
	r31.u64 = r31.u64 + ctx.r5.u64;
	// rlwinm r30,r28,1,31,31
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0x1;
	// add r4,r26,r27
	ctx.r4.u64 = r26.u64 + r27.u64;
	// addze r28,r30
	temp.s64 = r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r30.u32;
	r28.s64 = temp.s64;
	// ld r24,-160(r1)
	r24.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// srawi r30,r31,5
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	r30.s64 = r31.s32 >> 5;
	// clrlwi r31,r28,31
	r31.u64 = r28.u32 & 0x1;
	// rlwinm r28,r30,1,31,31
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0x1;
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// rlwinm r28,r4,3,0,28
	r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r30,r30,51
	r30.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(51));
	// subf r27,r30,r5
	r27.u64 = ctx.r5.u64 - r30.u64;
	// add r28,r4,r28
	r28.u64 = ctx.r4.u64 + r28.u64;
	// subfc r26,r27,r11
	ctx.xer.ca = ctx.r11.u32 >= r27.u32;
	r26.u64 = ctx.r11.u64 - r27.u64;
	// eqv r27,r27,r11
	r27.u64 = ~(r27.u64 ^ ctx.r11.u64);
	// rlwinm r30,r31,3,0,28
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r4,r27,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0x1;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// addze r27,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	r27.s64 = temp.s64;
	// divw r4,r5,r6
	ctx.r4.u64 = uint32_t((ctx.r6.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r5.s32 / ctx.r6.s32 : 0);
	// clrlwi r5,r27,31
	ctx.r5.u64 = r27.u32 & 0x1;
	// divw r30,r3,r6
	r30.u64 = uint32_t((ctx.r6.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r3.s32 / ctx.r6.s32 : 0);
	// clrlwi r3,r23,31
	ctx.r3.u64 = r23.u32 & 0x1;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r5,r3,r30
	ctx.r5.u64 = ctx.r3.u64 + r30.u64;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r28,2,0,29
	r27.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 + ctx.r3.u64;
	// rlwinm r28,r5,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// clrlwi r30,r25,31
	r30.u64 = r25.u32 & 0x1;
	// addi r27,r27,10
	r27.s64 = r27.s64 + 10;
	// addi r22,r7,514
	r22.s64 = ctx.r7.s64 + 514;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + r28.u64;
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// rlwinm r3,r3,1,24,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFE;
	// clrlwi r27,r27,24
	r27.u64 = r27.u32 & 0xFF;
	// add r26,r8,r10
	r26.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stbx r3,r24,r10
	REX_STORE_U8(r24.u32 + ctx.r10.u32, ctx.r3.u8);
	// add r25,r8,r10
	r25.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stbx r27,r4,r22
	REX_STORE_U8(ctx.r4.u32 + r22.u32, r27.u8);
	// add r23,r8,r10
	r23.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r28,r7,258
	r28.s64 = ctx.r7.s64 + 258;
	// addi r29,r7,3
	r29.s64 = ctx.r7.s64 + 3;
	// addi r31,r31,10
	r31.s64 = r31.s64 + 10;
	// addi r21,r7,515
	r21.s64 = ctx.r7.s64 + 515;
	// rlwinm r5,r5,1,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFE;
	// clrlwi r3,r30,24
	ctx.r3.u64 = r30.u32 & 0xFF;
	// clrlwi r4,r31,24
	ctx.r4.u64 = r31.u32 & 0xFF;
	// stbx r5,r26,r28
	REX_STORE_U8(r26.u32 + r28.u32, ctx.r5.u8);
	// stbx r3,r25,r29
	REX_STORE_U8(r25.u32 + r29.u32, ctx.r3.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stbx r4,r23,r21
	REX_STORE_U8(r23.u32 + r21.u32, ctx.r4.u8);
	// bdnz 0x823bd56c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BD56C;
	// lwz r11,-176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// addi r8,r8,3072
	ctx.r8.s64 = ctx.r8.s64 + 3072;
	// lwz r5,-172(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// stw r10,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r10.u32);
	// stw r11,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// bne 0x823bd554
	if (!ctx.cr0.eq) goto loc_823BD554;
	// lwz r10,-168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r5,-164(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// addi r8,r10,768
	ctx.r8.s64 = ctx.r10.s64 + 768;
	// addi r4,r5,64
	ctx.r4.s64 = ctx.r5.s64 + 64;
	// stw r8,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r8.u32);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x823bd548
	if (ctx.cr6.lt) goto loc_823BD548;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823CAF88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x823CAF90;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x824d3f1c
	ctx.lr = 0x823CAF98;
	__imp__XamGetSystemVersion(ctx, base);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// rlwinm r10,r3,0,8,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF00;
	// ori r11,r11,41216
	ctx.r11.u64 = ctx.r11.u64 | 41216;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823cb018
	if (!ctx.cr6.lt) goto loc_823CB018;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r28,r11,9556
	r28.s64 = ctx.r11.s64 + 9556;
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// bl 0x824d438c
	ctx.lr = 0x823CAFBC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r31,-32162
	r31.s64 = -2107768832;
	// lwz r11,5296(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823cafd4
	if (!ctx.cr6.eq) goto loc_823CAFD4;
	// li r29,1627
	r29.s64 = 1627;
	// b 0x823cb00c
	goto loc_823CB00C;
loc_823CAFD4:
	// lis r30,-32162
	r30.s64 = -2107768832;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,5300(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 5300);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823caff4
	if (ctx.cr6.eq) goto loc_823CAFF4;
	// li r4,4
	ctx.r4.s64 = 4;
loc_823CAFF4:
	// bl 0x823cb038
	ctx.lr = 0x823CAFF8;
	sub_823CB038(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,5300(r30)
	REX_STORE_U32(r30.u32 + 5300, ctx.r11.u32);
	// stw r10,5296(r31)
	REX_STORE_U32(r31.u32 + 5296, ctx.r10.u32);
loc_823CB00C:
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// bl 0x824d437c
	ctx.lr = 0x823CB014;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x823cb02c
	goto loc_823CB02C;
loc_823CB018:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823cb038
	ctx.lr = 0x823CB028;
	sub_823CB038(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_823CB02C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823CCEF8) {
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
	ctx.lr = 0x823CCF00;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,28
	ctx.r4.s64 = r31.s64 + 28;
	// addi r3,r28,24
	ctx.r3.s64 = r28.s64 + 24;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x823cd088
	ctx.lr = 0x823CCF28;
	sub_823CD088(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823cd040
	ctx.lr = 0x823CCF30;
	sub_823CD040(ctx, base);
	// rlwinm r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ccf5c
	if (ctx.cr6.eq) goto loc_823CCF5C;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823cb230
	ctx.lr = 0x823CCF5C;
	sub_823CB230(ctx, base);
loc_823CCF5C:
	// clrlwi r11,r27,27
	ctx.r11.u64 = r27.u32 & 0x1F;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ccff8
	if (ctx.cr6.eq) goto loc_823CCFF8;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823cb448
	ctx.lr = 0x823CCF80;
	sub_823CB448(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823ccfb0
	if (!ctx.cr6.eq) goto loc_823CCFB0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ccfb0
	if (ctx.cr6.eq) goto loc_823CCFB0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823cb900
	ctx.lr = 0x823CCFB0;
	sub_823CB900(ctx, base);
loc_823CCFB0:
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ccfd4
	if (ctx.cr6.eq) goto loc_823CCFD4;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823cbca8
	ctx.lr = 0x823CCFD4;
	sub_823CBCA8(ctx, base);
loc_823CCFD4:
	// clrlwi r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ccff8
	if (ctx.cr6.eq) goto loc_823CCFF8;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823cc868
	ctx.lr = 0x823CCFF8;
	sub_823CC868(ctx, base);
loc_823CCFF8:
	// rlwinm r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cd018
	if (ctx.cr6.eq) goto loc_823CD018;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ccd88
	ctx.lr = 0x823CD018;
	sub_823CCD88(ctx, base);
loc_823CD018:
	// rlwinm r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cd038
	if (ctx.cr6.eq) goto loc_823CD038;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823cc108
	ctx.lr = 0x823CD038;
	sub_823CC108(ctx, base);
loc_823CD038:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823CE0D8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823ce0fc
	if (!ctx.cr6.eq) goto loc_823CE0FC;
	// bl 0x823ce5d0
	ctx.lr = 0x823CE0FC;
	sub_823CE5D0(ctx, base);
loc_823CE0FC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823ce114
	if (ctx.cr0.eq) goto loc_823CE114;
	// lis r4,9347
	ctx.r4.s64 = 612564992;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cd250
	ctx.lr = 0x823CE114;
	sub_823CD250(ctx, base);
loc_823CE114:
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

DEFINE_REX_FUNC(sub_823CED28) {
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
	// bl 0x823cf078
	ctx.lr = 0x823CED40;
	sub_823CF078(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cf0f0
	ctx.lr = 0x823CED48;
	sub_823CF0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cf230
	ctx.lr = 0x823CED50;
	sub_823CF230(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,11972(r31)
	REX_STORE_U32(r31.u32 + 11972, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_823D00D0) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e60
	ctx.lr = 0x823D00D8;
	// lwz r19,11016(r3)
	r19.u64 = REX_LOAD_U32(ctx.r3.u32 + 11016);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r26,r4,r5
	r26.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lbz r9,11956(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 11956);
	// addi r23,r3,3644
	r23.s64 = ctx.r3.s64 + 3644;
	// lwz r10,11952(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 11952);
	// addi r22,r3,9020
	r22.s64 = ctx.r3.s64 + 9020;
	// lwz r31,11012(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 11012);
	// addi r21,r3,24
	r21.s64 = ctx.r3.s64 + 24;
	// addi r20,r3,2072
	r20.s64 = ctx.r3.s64 + 2072;
	// addi r25,r3,2584
	r25.s64 = ctx.r3.s64 + 2584;
	// addi r24,r3,3256
	r24.s64 = ctx.r3.s64 + 3256;
	// addi r28,r3,3508
	r28.s64 = ctx.r3.s64 + 3508;
	// addi r27,r3,3636
	r27.s64 = ctx.r3.s64 + 3636;
	// addi r29,r3,12
	r29.s64 = ctx.r3.s64 + 12;
	// b 0x823d0420
	goto loc_823D0420;
loc_823D011C:
	// rlwinm r8,r10,11,21,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x7FE;
	// lhax r7,r8,r21
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + r21.u32));
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge 0x823d015c
	if (!ctx.cr0.lt) goto loc_823D015C;
	// lis r8,32
	ctx.r8.s64 = 2097152;
loc_823D0130:
	// and r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 & ctx.r10.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r6,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// xori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 ^ 1;
	// subf r7,r7,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r7.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r7,r7,r23
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r7.u32 + r23.u32));
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt 0x823d0130
	if (ctx.cr0.lt) goto loc_823D0130;
loc_823D015C:
	// cmplw cr6,r31,r19
	ctx.cr6.compare<uint32_t>(r31.u32, r19.u32, ctx.xer);
	// bge cr6,0x823d043c
	if (!ctx.cr6.lt) goto loc_823D043C;
	// lbzx r8,r7,r25
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + r25.u32);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// mr. r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt 0x823d01a4
	if (ctx.cr0.gt) goto loc_823D01A4;
	// lbz r9,1(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 1);
	// neg r6,r8
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// lbz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// or r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 | ctx.r5.u64;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// slw r8,r5,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
loc_823D01A4:
	// addic. r6,r7,-256
	ctx.xer.ca = ctx.r7.u32 > 255;
	ctx.r6.s64 = ctx.r7.s64 + -256;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge 0x823d01c8
	if (!ctx.cr0.lt) goto loc_823D01C8;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// stbx r7,r30,r4
	REX_STORE_U8(r30.u32 + ctx.r4.u32, ctx.r7.u8);
	// stbx r7,r8,r4
	REX_STORE_U8(ctx.r8.u32 + ctx.r4.u32, ctx.r7.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x823d0420
	goto loc_823D0420;
loc_823D01C8:
	// clrlwi r5,r6,29
	ctx.r5.u64 = ctx.r6.u32 & 0x7;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// bne cr6,0x823d0258
	if (!ctx.cr6.eq) goto loc_823D0258;
	// rlwinm r8,r10,9,23,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1FE;
	// lhax r8,r8,r20
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + r20.u32));
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x823d0214
	if (!ctx.cr0.lt) goto loc_823D0214;
	// lis r7,128
	ctx.r7.s64 = 8388608;
loc_823D01E8:
	// and r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 & ctx.r10.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r5,r5,27,5,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// xori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 ^ 1;
	// subf r8,r8,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r8.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r8,r8,r22
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + r22.u32));
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt 0x823d01e8
	if (ctx.cr0.lt) goto loc_823D01E8;
loc_823D0214:
	// lbzx r7,r8,r24
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + r24.u32);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// slw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// mr. r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bgt 0x823d0254
	if (ctx.cr0.gt) goto loc_823D0254;
	// lbz r9,1(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 1);
	// neg r5,r7
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// lbz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// or r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 | ctx.r3.u64;
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// slw r7,r3,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r5.u8 & 0x3F));
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
loc_823D0254:
	// addi r5,r8,7
	ctx.r5.s64 = ctx.r8.s64 + 7;
loc_823D0258:
	// srawi r8,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 3;
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// ble cr6,0x823d03d0
	if (!ctx.cr6.gt) goto loc_823D03D0;
	// add r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbz r7,12004(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 12004);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// blt cr6,0x823d0350
	if (ctx.cr6.lt) goto loc_823D0350;
	// addic. r7,r7,-3
	ctx.xer.ca = ctx.r7.u32 > 2;
	ctx.r7.s64 = ctx.r7.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x823d02e0
	if (ctx.cr0.eq) goto loc_823D02E0;
	// lbz r8,12004(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 12004);
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// extsb r3,r8
	ctx.r3.s64 = ctx.r8.s8;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// subf r8,r3,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r3.u64;
	// subfic r7,r9,35
	ctx.xer.ca = ctx.r9.u32 <= 35;
	ctx.r7.u64 = static_cast<uint64_t>(35) - ctx.r9.u64;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// addi r3,r9,-3
	ctx.r3.s64 = ctx.r9.s64 + -3;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// srw r7,r10,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// mr. r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// slw r10,r10,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r3.u8 & 0x3F));
	// bgt 0x823d02e4
	if (ctx.cr0.gt) goto loc_823D02E4;
	// lbz r9,1(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 1);
	// neg r3,r8
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// lbz r18,0(r31)
	r18.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// or r18,r9,r18
	r18.u64 = ctx.r9.u64 | r18.u64;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// slw r8,r18,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r3.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// b 0x823d02e4
	goto loc_823D02E4;
loc_823D02E0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_823D02E4:
	// rlwinm r3,r10,7,25,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7F;
	// rlwinm r8,r7,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r6,3014
	ctx.r7.s64 = ctx.r6.s64 + 3014;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r7,r3,r28
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + r28.u32);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r9,r7,r27
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + r27.u32);
	// subf r8,r9,r18
	ctx.r8.u64 = r18.u64 - ctx.r9.u64;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// mr. r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt 0x823d0348
	if (ctx.cr0.gt) goto loc_823D0348;
	// lbz r9,1(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 1);
	// neg r3,r8
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// lbz r18,0(r31)
	r18.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// or r18,r9,r18
	r18.u64 = ctx.r9.u64 | r18.u64;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// slw r8,r18,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r3.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
loc_823D0348:
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// b 0x823d03bc
	goto loc_823D03BC;
loc_823D0350:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823d03b8
	if (ctx.cr6.eq) goto loc_823D03B8;
	// lbz r8,12004(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 12004);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// subfic r8,r8,32
	ctx.xer.ca = ctx.r8.u32 <= 32;
	ctx.r8.u64 = static_cast<uint64_t>(32) - ctx.r8.u64;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// srw r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// mr. r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// slw r10,r10,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r3.u8 & 0x3F));
	// bgt 0x823d03a4
	if (ctx.cr0.gt) goto loc_823D03A4;
	// lbz r9,1(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 1);
	// neg r3,r8
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// lbz r18,0(r31)
	r18.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// or r18,r9,r18
	r18.u64 = ctx.r9.u64 | r18.u64;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// slw r8,r18,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r3.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
loc_823D03A4:
	// addi r8,r6,3014
	ctx.r8.s64 = ctx.r6.s64 + 3014;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// b 0x823d03bc
	goto loc_823D03BC;
loc_823D03B8:
	// li r8,1
	ctx.r8.s64 = 1;
loc_823D03BC:
	// lwz r7,4(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r7,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r7.u32);
	// stw r6,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r6.u32);
	// b 0x823d03e0
	goto loc_823D03E0;
loc_823D03D0:
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwzx r8,r7,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + r29.u32);
	// stwx r6,r7,r29
	REX_STORE_U32(ctx.r7.u32 + r29.u32, ctx.r6.u32);
loc_823D03E0:
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// stw r8,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r8.u32);
	// subf r7,r8,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r8.u64;
loc_823D03F0:
	// and r8,r7,r3
	ctx.r8.u64 = ctx.r7.u64 & ctx.r3.u64;
	// cmpwi cr6,r4,257
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 257, ctx.xer);
	// lbzx r8,r8,r30
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + r30.u32);
	// stbx r8,r30,r4
	REX_STORE_U8(r30.u32 + ctx.r4.u32, ctx.r8.u8);
	// bge cr6,0x823d0410
	if (!ctx.cr6.lt) goto loc_823D0410;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// stbx r8,r6,r4
	REX_STORE_U8(ctx.r6.u32 + ctx.r4.u32, ctx.r8.u8);
loc_823D0410:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bgt 0x823d03f0
	if (ctx.cr0.gt) goto loc_823D03F0;
loc_823D0420:
	// cmpw cr6,r4,r26
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r26.s32, ctx.xer);
	// blt cr6,0x823d011c
	if (ctx.cr6.lt) goto loc_823D011C;
	// stb r9,11956(r11)
	REX_STORE_U8(ctx.r11.u32 + 11956, ctx.r9.u8);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r10,11952(r11)
	REX_STORE_U32(ctx.r11.u32 + 11952, ctx.r10.u32);
	// stw r31,11012(r11)
	REX_STORE_U32(ctx.r11.u32 + 11012, r31.u32);
loc_823D0438:
	// b 0x822d4eb0
	return;
loc_823D043C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823d0438
	goto loc_823D0438;
}

DEFINE_REX_FUNC(sub_823DC0B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823DC0B8;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// beq cr6,0x823dc1c8
	if (ctx.cr6.eq) goto loc_823DC1C8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x823dc14c
	if (ctx.cr6.eq) goto loc_823DC14C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x823dc14c
	if (ctx.cr6.eq) goto loc_823DC14C;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823dc3e4
	if (!ctx.cr6.gt) goto loc_823DC3E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r4,8
	ctx.r8.s64 = ctx.r4.s64 + 8;
loc_823DC0F0:
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
	// blt cr6,0x823dc0f0
	if (ctx.cr6.lt) goto loc_823DC0F0;
	// b 0x823dc3e4
	goto loc_823DC3E4;
loc_823DC14C:
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823dc3e4
	if (!ctx.cr6.gt) goto loc_823DC3E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r4,8
	ctx.r8.s64 = ctx.r4.s64 + 8;
loc_823DC164:
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
	// blt cr6,0x823dc164
	if (ctx.cr6.lt) goto loc_823DC164;
	// b 0x823dc3e4
	goto loc_823DC3E4;
loc_823DC1C8:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x823dc29c
	if (ctx.cr6.eq) goto loc_823DC29C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x823dc29c
	if (ctx.cr6.eq) goto loc_823DC29C;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823dc3e4
	if (!ctx.cr6.gt) goto loc_823DC3E4;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r4,8
	ctx.r7.s64 = ctx.r4.s64 + 8;
	// addi r8,r10,-9288
	ctx.r8.s64 = ctx.r10.s64 + -9288;
	// lfs f0,-23528(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -23528);
	ctx.f0.f64 = double(temp.f32);
loc_823DC200:
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
	// blt cr6,0x823dc200
	if (ctx.cr6.lt) goto loc_823DC200;
	// b 0x823dc3e4
	goto loc_823DC3E4;
loc_823DC29C:
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823dc3e4
	if (!ctx.cr6.gt) goto loc_823DC3E4;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r4,8
	ctx.r7.s64 = ctx.r4.s64 + 8;
	// addi r10,r10,-9288
	ctx.r10.s64 = ctx.r10.s64 + -9288;
	// lfs f0,-23528(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -23528);
	ctx.f0.f64 = double(temp.f32);
loc_823DC2C4:
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
	// blt cr6,0x823dc2c4
	if (ctx.cr6.lt) goto loc_823DC2C4;
loc_823DC3E4:
	// lwz r3,88(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823E3758) {
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
	// bge cr6,0x823e3844
	if (!ctx.cr6.lt) goto loc_823E3844;
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
loc_823E37BC:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,12,22,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3FF;
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
	// clrlwi r10,r10,22
	ctx.r10.u64 = ctx.r10.u32 & 0x3FF;
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
	// bdnz 0x823e37bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E37BC;
loc_823E3844:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e3860
	if (ctx.cr6.eq) goto loc_823E3860;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x823E3860;
	sub_82413D40(ctx, base);
loc_823E3860:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e387c
	if (ctx.cr6.eq) goto loc_823E387C;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x823dc3f0
	ctx.lr = 0x823E387C;
	sub_823DC3F0(ctx, base);
loc_823E387C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E7018) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// subf r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
loc_823E702C:
	// addi r9,r1,-12
	ctx.r9.s64 = ctx.r1.s64 + -12;
	// lfsux f0,r11,r6
	ctx.fpscr.disableFlushMode();
	ea = ctx.r11.u32 + ctx.r6.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// addi r8,r1,-12
	ctx.r8.s64 = ctx.r1.s64 + -12;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lvsl v0,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v0,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vpkd3d128 v0,v63,5,2,2
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v0.u16[7] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v0.u16[7] |= ((ctx.v63.u32[3]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v0.u16[6] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v0.u16[6] |= ((ctx.v63.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v0.u16[5] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v0.u16[5] |= ((ctx.v63.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v0.u16[4] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v0.u16[4] |= ((ctx.v63.u32[0]&0x80000000)>>16);
	// vsplth v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xF0E))));
	// stvehx v0,r0,r7
	ea = (ctx.r7.u32) & ~0x1;
	REX_STORE_U16(ea, ctx.v0.u16[7 - ((ea & 0xF) >> 1)]);
	// lhz r9,-16(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + -16);
	// sthux r9,r10,r4
	ea = ctx.r10.u32 + ctx.r4.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x823e702c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E702C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EAF30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x823EAF38;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// not r31,r5
	r31.u64 = ~ctx.r5.u64;
	// b 0x823eaf5c
	goto loc_823EAF5C;
loc_823EAF50:
	// lwz r31,36(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823eaf80
	if (ctx.cr6.eq) goto loc_823EAF80;
loc_823EAF5C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e9108
	ctx.lr = 0x823EAF74;
	sub_823E9108(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823eaf50
	if (!ctx.cr0.lt) goto loc_823EAF50;
	// b 0x823eaf84
	goto loc_823EAF84;
loc_823EAF80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EAF84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823EC4C8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// ble cr6,0x823ec530
	if (!ctx.cr6.gt) goto loc_823EC530;
	// li r5,8
	ctx.r5.s64 = 8;
loc_823EC4D4:
	// cmplwi cr6,r4,7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 7, ctx.xer);
	// bgt cr6,0x823ec538
	if (ctx.cr6.gt) goto loc_823EC538;
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// ble cr6,0x823ec4ec
	if (!ctx.cr6.gt) goto loc_823EC4EC;
	// subfic r5,r4,8
	ctx.xer.ca = ctx.r4.u32 <= 8;
	ctx.r5.u64 = static_cast<uint64_t>(8) - ctx.r4.u64;
loc_823EC4EC:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r10,9412
	ctx.r10.s64 = ctx.r10.s64 + 9412;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_823EC50C:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r3,r7,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x823ec50c
	if (!ctx.cr6.eq) goto loc_823EC50C;
	// blr 
	return;
loc_823EC530:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bge cr6,0x823ec4d4
	if (!ctx.cr6.lt) goto loc_823EC4D4;
loc_823EC538:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EF160) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EF180;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EF340) {
	REX_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r10)
	REX_STORE_U32(ctx.r10.u32 + 108, ctx.r11.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EF3C8) {
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
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,40(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EF538) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stb r5,44(r4)
	REX_STORE_U8(ctx.r4.u32 + 44, ctx.r5.u8);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EFA78) {
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
	// lwz r11,1372(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1372);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823efaa4
	if (!ctx.cr0.eq) goto loc_823EFAA4;
	// bl 0x823f8d28
	ctx.lr = 0x823EFAA4;
	sub_823F8D28(ctx, base);
loc_823EFAA4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0630
	ctx.lr = 0x823EFAB0;
	sub_823F0630(ctx, base);
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

DEFINE_REX_FUNC(sub_823F0630) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,1376(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// li r10,8
	ctx.r10.s64 = 8;
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f06a0
	if (ctx.cr0.eq) goto loc_823F06A0;
	// lbz r11,25(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 25);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x823f0674
	if (!ctx.cr6.eq) goto loc_823F0674;
	// lhz r11,1546(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 1546);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,24(r4)
	REX_STORE_U8(ctx.r4.u32 + 24, ctx.r10.u8);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// sth r9,22(r4)
	REX_STORE_U16(ctx.r4.u32 + 22, ctx.r9.u16);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stb r11,25(r4)
	REX_STORE_U8(ctx.r4.u32 + 25, ctx.r11.u8);
	// b 0x823f06a0
	goto loc_823F06A0;
loc_823F0674:
	// lhz r9,1546(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 1546);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x823f0688
	if (ctx.cr0.eq) goto loc_823F0688;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r11,25(r4)
	REX_STORE_U8(ctx.r4.u32 + 25, ctx.r11.u8);
loc_823F0688:
	// lbz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x823f0698
	if (!ctx.cr6.lt) goto loc_823F0698;
	// stb r10,24(r4)
	REX_STORE_U8(ctx.r4.u32 + 24, ctx.r10.u8);
loc_823F0698:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,22(r4)
	REX_STORE_U16(ctx.r4.u32 + 22, ctx.r11.u16);
loc_823F06A0:
	// lwz r11,1376(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f06b4
	if (ctx.cr0.eq) goto loc_823F06B4;
	// lfs f0,1584(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 1584);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 40, temp.u32);
loc_823F06B4:
	// lwz r11,1376(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f06d0
	if (ctx.cr0.eq) goto loc_823F06D0;
	// lbz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x823f06d0
	if (!ctx.cr6.eq) goto loc_823F06D0;
	// stb r10,24(r4)
	REX_STORE_U8(ctx.r4.u32 + 24, ctx.r10.u8);
loc_823F06D0:
	// lwz r11,1376(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// li r9,3
	ctx.r9.s64 = 3;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f0710
	if (ctx.cr0.eq) goto loc_823F0710;
	// lbz r11,25(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 25);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x823f06f4
	if (ctx.cr6.eq) goto loc_823F06F4;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x823f0710
	if (!ctx.cr6.eq) goto loc_823F0710;
loc_823F06F4:
	// lwz r11,1652(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f0710
	if (ctx.cr6.eq) goto loc_823F0710;
	// lbz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x823f0710
	if (!ctx.cr6.eq) goto loc_823F0710;
	// stb r9,25(r4)
	REX_STORE_U8(ctx.r4.u32 + 25, ctx.r9.u8);
loc_823F0710:
	// lwz r11,1376(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f072c
	if (ctx.cr0.eq) goto loc_823F072C;
	// lbz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x823f072c
	if (!ctx.cr6.lt) goto loc_823F072C;
	// stb r10,24(r4)
	REX_STORE_U8(ctx.r4.u32 + 24, ctx.r10.u8);
loc_823F072C:
	// lbz r10,25(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 25);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x823f0748
	if (ctx.cr6.eq) goto loc_823F0748;
	// rlwinm. r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f0748
	if (ctx.cr0.eq) goto loc_823F0748;
	// stb r9,29(r4)
	REX_STORE_U8(ctx.r4.u32 + 29, ctx.r9.u8);
	// b 0x823f0750
	goto loc_823F0750;
loc_823F0748:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,29(r4)
	REX_STORE_U8(ctx.r4.u32 + 29, ctx.r11.u8);
loc_823F0750:
	// rlwinm. r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f0764
	if (ctx.cr0.eq) goto loc_823F0764;
	// lbz r11,29(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 29);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,29(r4)
	REX_STORE_U8(ctx.r4.u32 + 29, ctx.r11.u8);
loc_823F0764:
	// lwz r11,1376(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f078c
	if (ctx.cr0.eq) goto loc_823F078C;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x823f0780
	if (ctx.cr6.eq) goto loc_823F0780;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823f078c
	if (!ctx.cr6.eq) goto loc_823F078C;
loc_823F0780:
	// lbz r11,29(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 29);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,29(r4)
	REX_STORE_U8(ctx.r4.u32 + 29, ctx.r11.u8);
loc_823F078C:
	// lbz r10,29(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 29);
	// lbz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 24);
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// stb r10,30(r4)
	REX_STORE_U8(ctx.r4.u32 + 30, ctx.r10.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F69F0) {
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
	// lwz r30,424(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 424);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f6a38
	if (ctx.cr6.eq) goto loc_823F6A38;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,48
	ctx.r10.s64 = 48;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823F6A34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f6b80
	goto loc_823F6B80;
loc_823F6A38:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f6ab4
	if (ctx.cr6.eq) goto loc_823F6AB4;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823f6ab4
	if (!ctx.cr6.eq) goto loc_823F6AB4;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f6a7c
	if (ctx.cr6.eq) goto loc_823F6A7C;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f6a7c
	if (ctx.cr6.eq) goto loc_823F6A7C;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,464(r31)
	REX_STORE_U32(r31.u32 + 464, ctx.r11.u32);
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// b 0x823f6ab4
	goto loc_823F6AB4;
loc_823F6A7C:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f6a94
	if (ctx.cr6.eq) goto loc_823F6A94;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stw r11,464(r31)
	REX_STORE_U32(r31.u32 + 464, ctx.r11.u32);
	// b 0x823f6ab4
	goto loc_823F6AB4;
loc_823F6A94:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,46
	ctx.r10.s64 = 46;
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
	ctx.lr = 0x823F6AB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F6AB4:
	// lwz r11,452(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 452);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823F6AC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,432(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 432);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823F6ADC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,68(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x823f6b80
	if (!ctx.cr6.eq) goto loc_823F6B80;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823f6b08
	if (!ctx.cr6.eq) goto loc_823F6B08;
	// lwz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 460);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823F6B08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F6B08:
	// lwz r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 456);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823F6B1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823f6b40
	if (ctx.cr6.eq) goto loc_823F6B40;
	// lwz r11,464(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 464);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823F6B40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F6B40:
	// lwz r11,436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 436);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 & ctx.r10.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823F6B68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 428);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823F6B80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F6B80:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f6bf8
	if (ctx.cr6.eq) goto loc_823F6BF8;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,16(r6)
	REX_STORE_U32(ctx.r6.u32 + 16, ctx.r5.u32);
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823f6bf8
	if (ctx.cr6.eq) goto loc_823F6BF8;
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 440);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823f6bf8
	if (!ctx.cr6.eq) goto loc_823F6BF8;
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r10,r8,1
	ctx.r10.u64 = ctx.r8.u64 ^ 1;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
loc_823F6BF8:
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

DEFINE_REX_FUNC(sub_823FDFA0) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823FE0F0) {
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
	ctx.lr = 0x823FE0F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,316(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r27,0(r6)
	r27.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823fe184
	if (!ctx.cr6.gt) goto loc_823FE184;
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
loc_823FE11C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,112(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 112);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823fe150
	if (!ctx.cr6.lt) goto loc_823FE150;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_823FE138:
	// lbzu r10,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823fe138
	if (ctx.cr6.lt) goto loc_823FE138;
loc_823FE150:
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,112(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 112);
	// addi r6,r28,1
	ctx.r6.s64 = r28.s64 + 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823f6d28
	ctx.lr = 0x823FE16C;
	sub_823F6D28(ctx, base);
	// lwz r11,316(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 316);
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823fe11c
	if (ctx.cr6.lt) goto loc_823FE11C;
loc_823FE184:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82400610) {
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
	// lwz r10,5812(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lhz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// ble cr6,0x8240069c
	if (!ctx.cr6.gt) goto loc_8240069C;
	// addi r11,r4,-257
	ctx.r11.s64 = ctx.r4.s64 + -257;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r8,r7
	REX_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u8);
	// lbz r10,5808(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
	// srw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// sth r9,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
	// b 0x824006b8
	goto loc_824006B8;
loc_8240069C:
	// addis r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 65536;
	// addi r8,r10,5
	ctx.r8.s64 = ctx.r10.s64 + 5;
	// addi r11,r11,-257
	ctx.r11.s64 = ctx.r11.s64 + -257;
	// stw r8,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r8.u32);
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
loc_824006B8:
	// lwz r10,5812(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// lhz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// ble cr6,0x82400730
	if (!ctx.cr6.gt) goto loc_82400730;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r8,r7
	REX_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u8);
	// lbz r10,5808(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r10,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r10.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
	// srw r10,r9,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// sth r10,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// b 0x8240074c
	goto loc_8240074C;
loc_82400730:
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// addi r8,r10,5
	ctx.r8.s64 = ctx.r10.s64 + 5;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r8,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r8.u32);
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
loc_8240074C:
	// lwz r10,5812(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// lhz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// ble cr6,0x824007c0
	if (!ctx.cr6.gt) goto loc_824007C0;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r8,r7
	REX_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u8);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,5808(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// srw r11,r9,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// b 0x824007d8
	goto loc_824007D8;
loc_824007C0:
	// addis r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 65536;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r8,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r8.u32);
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
loc_824007D8:
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82400894
	if (!ctx.cr6.gt) goto loc_82400894;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r8,r11,4764
	ctx.r8.s64 = ctx.r11.s64 + 4764;
loc_824007F4:
	// lbzx r10,r9,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lhz r10,2678(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2678);
	// ble cr6,0x82400874
	if (!ctx.cr6.gt) goto loc_82400874;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lhz r7,5808(r3)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r5,8(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r6,r5
	REX_STORE_U8(ctx.r6.u32 + ctx.r5.u32, ctx.r11.u8);
	// lbz r6,5808(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r6,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// subfic r10,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r10.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// addi r11,r11,-13
	ctx.r11.s64 = ctx.r11.s64 + -13;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// srw r11,r7,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// b 0x82400888
	goto loc_82400888;
loc_82400874:
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// lhz r6,5808(r3)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// stw r7,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r7.u32);
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
loc_82400888:
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x824007f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824007F4;
loc_82400894:
	// addi r5,r4,-1
	ctx.r5.s64 = ctx.r4.s64 + -1;
	// addi r4,r3,140
	ctx.r4.s64 = ctx.r3.s64 + 140;
	// bl 0x824000c0
	ctx.lr = 0x824008A0;
	sub_824000C0(ctx, base);
	// addi r4,r3,2432
	ctx.r4.s64 = ctx.r3.s64 + 2432;
	// addi r5,r31,-1
	ctx.r5.s64 = r31.s64 + -1;
	// bl 0x824000c0
	ctx.lr = 0x824008AC;
	sub_824000C0(ctx, base);
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

DEFINE_REX_FUNC(sub_8240E308) {
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
	ctx.lr = 0x8240E310;
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-32162
	r25.s64 = -2107768832;
	// stw r4,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,7264(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 7264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8240e364
	if (!ctx.cr6.eq) goto loc_8240E364;
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r11,r11,7276
	ctx.r11.s64 = ctx.r11.s64 + 7276;
	// lwz r10,7272(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 7272);
	// lwz r3,-16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x8240e548
	goto loc_8240E548;
loc_8240E364:
	// cmpwi cr6,r29,15
	ctx.cr6.compare<int32_t>(r29.s32, 15, ctx.xer);
	// blt cr6,0x8240e398
	if (ctx.cr6.lt) goto loc_8240E398;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lwz r10,7264(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 7264);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r11,r11,7276
	ctx.r11.s64 = ctx.r11.s64 + 7276;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// addi r5,r9,26756
	ctx.r5.s64 = ctx.r9.s64 + 26756;
	// addi r4,r8,26748
	ctx.r4.s64 = ctx.r8.s64 + 26748;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -16);
	// b 0x8240e478
	goto loc_8240E478;
loc_8240E398:
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mulli r26,r29,12
	r26.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(12));
	// addi r11,r11,20064
	ctx.r11.s64 = ctx.r11.s64 + 20064;
	// addi r27,r11,8
	r27.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r26,r27
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8240e3c4
	if (!ctx.cr6.eq) goto loc_8240E3C4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x8240e54c
	if (!ctx.cr6.eq) goto loc_8240E54C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240e54c
	if (ctx.cr6.eq) goto loc_8240E54C;
loc_8240E3C4:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r31,r11,6224
	r31.s64 = ctx.r11.s64 + 6224;
	// li r4,1022
	ctx.r4.s64 = 1022;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x822e16d0
	ctx.lr = 0x8240E3EC;
	sub_822E16D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r11,1022(r31)
	REX_STORE_U8(r31.u32 + 1022, ctx.r11.u8);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r10,29524
	ctx.r5.s64 = ctx.r10.s64 + 29524;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// bl 0x8247da50
	ctx.lr = 0x8240E40C;
	sub_8247DA50(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// stb r11,1023(r31)
	REX_STORE_U8(r31.u32 + 1023, ctx.r11.u8);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r10,7276
	r30.s64 = ctx.r10.s64 + 7276;
	// beq cr6,0x8240e42c
	if (ctx.cr6.eq) goto loc_8240E42C;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(r29.s32, 3, ctx.xer);
	// bne cr6,0x8240e450
	if (!ctx.cr6.eq) goto loc_8240E450;
loc_8240E42C:
	// addi r11,r29,-3
	ctx.r11.s64 = r29.s64 + -3;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r3,-16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -16);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8240E450;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8240E450:
	// lwzx r11,r26,r27
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + r27.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8240e480
	if (!ctx.cr6.eq) goto loc_8240E480;
	// lwz r11,7264(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 7264);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lwz r3,-16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -16);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r10,26748
	ctx.r4.s64 = ctx.r10.s64 + 26748;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8240E478:
	// bctrl 
	ctx.lr = 0x8240E47C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8240e54c
	goto loc_8240E54C;
loc_8240E480:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8240e538
	if (!ctx.cr6.eq) goto loc_8240E538;
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// lwz r11,7248(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 7248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240e538
	if (ctx.cr6.eq) goto loc_8240E538;
	// lis r27,-32162
	r27.s64 = -2107768832;
	// lwz r11,7256(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 7256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240e538
	if (ctx.cr6.eq) goto loc_8240E538;
	// lis r28,-32162
	r28.s64 = -2107768832;
	// lwz r11,7252(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 7252);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240e538
	if (ctx.cr6.eq) goto loc_8240E538;
	// lwz r11,7248(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 7248);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,-16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -16);
	// addi r4,r10,26736
	ctx.r4.s64 = ctx.r10.s64 + 26736;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240E4D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8240e54c
	if (ctx.cr0.eq) goto loc_8240E54C;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8240E4E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8240e4e4
	if (!ctx.cr6.eq) goto loc_8240E4E4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwz r10,7256(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 7256);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,-16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bctrl 
	ctx.lr = 0x8240E520;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,7252(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 7252);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,-16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240E534;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8240e54c
	goto loc_8240E54C;
loc_8240E538:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lwz r3,-16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -16);
	// lwz r11,7272(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8240E548:
	// bctrl 
	ctx.lr = 0x8240E54C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8240E54C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82415E80) {
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
	ctx.lr = 0x82415E88;
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
	// beq cr6,0x82415ec0
	if (ctx.cr6.eq) goto loc_82415EC0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x82415EBC;
	sub_82413040(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82415EC0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82415edc
	if (ctx.cr6.eq) goto loc_82415EDC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413dd0
	ctx.lr = 0x82415ED8;
	sub_82413DD0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82415EDC:
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
	// bne 0x82415f48
	if (!ctx.cr0.eq) goto loc_82415F48;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x82415f50
	goto loc_82415F50;
loc_82415F48:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_82415F50:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82415f68
	if (ctx.cr6.eq) goto loc_82415F68;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x82415F68;
	sub_823DC658(ctx, base);
loc_82415F68:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82416230
	if (!ctx.cr6.gt) goto loc_82416230;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// rlwinm r25,r30,1,0,30
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r30,r25,r28
	r30.u64 = r28.u64 - r25.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lfd f10,-9120(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r11.u32 + -9120);
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f11,16288(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16288);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-7224(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -7224);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,17176(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17176);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r27,8
	r29.s64 = r27.s64 + 8;
	// lfs f0,-30112(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -30112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,29356(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 29356);
	ctx.f6.f64 = double(temp.f32);
loc_82415FCC:
	// add r11,r29,r10
	ctx.r11.u64 = r29.u64 + ctx.r10.u64;
	// lfsx f9,r29,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f9,f29
	ctx.f9.f64 = double(float(ctx.f9.f64 + f29.f64));
	// rlwinm r7,r26,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xC;
	// lwz r6,92(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f8,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 + f31.f64));
	// fadds f7,f7,f30
	ctx.f7.f64 = double(float(ctx.f7.f64 + f30.f64));
	// lfsx f5,r7,r24
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fadds f4,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// fadds f3,f8,f5
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// fadds f5,f7,f5
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// fctiwz f4,f4
	ctx.f4.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f4,f3
	ctx.f4.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// fctiwz f5,f5
	ctx.f5.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f5,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f5.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// beq cr6,0x8241617c
	if (ctx.cr6.eq) goto loc_8241617C;
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
	// lfd f5,96(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r28,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r28.u64);
	// lfd f2,112(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// lfd f4,104(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lfs f3,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// frsp f5,f2
	ctx.f5.f64 = double(float(ctx.f2.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fsubs f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// frsp f5,f4
	ctx.f5.f64 = double(float(ctx.f4.f64));
	// fmadds f4,f8,f13,f3
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f3.f64)));
	// stfs f4,16(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fsubs f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// fmul f4,f7,f10
	ctx.f4.f64 = ctx.f7.f64 * ctx.f10.f64;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// fmul f5,f8,f10
	ctx.f5.f64 = ctx.f8.f64 * ctx.f10.f64;
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// frsp f30,f4
	f30.f64 = double(float(ctx.f4.f64));
	// lfs f4,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f4,f8,f12,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f4.f64)));
	// stfs f4,16(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f4,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f8,f8,f11,f4
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f4.f64)));
	// stfs f8,16(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f8,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f7,f13,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f8.f64)));
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f8,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f7,f12,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f8.f64)));
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f8,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f7,f11,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f7.f64, ctx.f11.f64, ctx.f8.f64)));
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f8,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f9,f13,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f8.f64)));
	// stfs f8,24(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f8,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// frsp f31,f5
	f31.f64 = double(float(ctx.f5.f64));
	// fmadds f8,f9,f12,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f8.f64)));
	// stfs f8,24(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmul f5,f9,f10
	ctx.f5.f64 = ctx.f9.f64 * ctx.f10.f64;
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f8,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f9,f9,f11,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f8.f64)));
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// frsp f29,f5
	f29.f64 = double(float(ctx.f5.f64));
loc_8241617C:
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x8241618c
	if (ctx.cr6.lt) goto loc_8241618C;
	// li r11,15
	ctx.r11.s64 = 15;
loc_8241618C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824161a4
	if (!ctx.cr6.gt) goto loc_824161A4;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// blt cr6,0x824161a8
	if (ctx.cr6.lt) goto loc_824161A8;
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x824161a8
	goto loc_824161A8;
loc_824161A4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824161A8:
	// cmpwi cr6,r5,15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 15, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x824161b8
	if (ctx.cr6.lt) goto loc_824161B8;
	// li r11,15
	ctx.r11.s64 = 15;
loc_824161B8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824161d0
	if (!ctx.cr6.gt) goto loc_824161D0;
	// cmpwi cr6,r5,15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 15, ctx.xer);
	// blt cr6,0x824161d4
	if (ctx.cr6.lt) goto loc_824161D4;
	// li r5,15
	ctx.r5.s64 = 15;
	// b 0x824161d4
	goto loc_824161D4;
loc_824161D0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_824161D4:
	// cmpwi cr6,r6,15
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 15, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x824161e4
	if (ctx.cr6.lt) goto loc_824161E4;
	// li r11,15
	ctx.r11.s64 = 15;
loc_824161E4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824161fc
	if (!ctx.cr6.gt) goto loc_824161FC;
	// cmpwi cr6,r6,15
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 15, ctx.xer);
	// blt cr6,0x82416200
	if (ctx.cr6.lt) goto loc_82416200;
	// li r6,15
	ctx.r6.s64 = 15;
	// b 0x82416200
	goto loc_82416200;
loc_824161FC:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82416200:
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
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
	// blt cr6,0x82415fcc
	if (ctx.cr6.lt) goto loc_82415FCC;
loc_82416230:
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

DEFINE_REX_FUNC(sub_82420998) {
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
	ctx.lr = 0x824209A0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824209e0
	if (!ctx.cr6.eq) goto loc_824209E0;
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
	// li r7,2631
	ctx.r7.s64 = 2631;
	// bl 0x8240e308
	ctx.lr = 0x824209E0;
	sub_8240E308(ctx, base);
loc_824209E0:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8240e880
	ctx.lr = 0x824209F0;
	sub_8240E880(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bgt cr6,0x82420a58
	if (ctx.cr6.gt) goto loc_82420A58;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82420a14
	if (ctx.cr6.eq) goto loc_82420A14;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8240e930
	ctx.lr = 0x82420A14;
	sub_8240E930(ctx, base);
loc_82420A14:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82420a50
	if (ctx.cr6.eq) goto loc_82420A50;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82420a50
	if (ctx.cr6.eq) goto loc_82420A50;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18772
	ctx.r4.s64 = ctx.r10.s64 + -18772;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,53
	ctx.r6.s64 = 53;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,212(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// bctrl 
	ctx.lr = 0x82420A50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82420A50:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82420ab4
	goto loc_82420AB4;
loc_82420A58:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82420a74
	if (ctx.cr6.eq) goto loc_82420A74;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8240e930
	ctx.lr = 0x82420A74;
	sub_8240E930(ctx, base);
loc_82420A74:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82420ab0
	if (ctx.cr6.eq) goto loc_82420AB0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82420ab0
	if (ctx.cr6.eq) goto loc_82420AB0;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18772
	ctx.r4.s64 = ctx.r10.s64 + -18772;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,53
	ctx.r6.s64 = 53;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,212(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// bctrl 
	ctx.lr = 0x82420AB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82420AB0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82420AB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82424960) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r3,r11,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82425DF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82425E00;
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82425f28
	if (ctx.cr6.eq) goto loc_82425F28;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82425E20:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82425e20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82425E20;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// subf r4,r4,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r4.u64;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r31,-32256
	r31.s64 = -2113929216;
	// lis r30,-32249
	r30.s64 = -2113470464;
	// lis r29,-32256
	r29.s64 = -2113929216;
	// lfs f10,-7224(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -7224);
	ctx.f10.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f9,16288(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16288);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lfs f11,17176(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 17176);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r1,164
	ctx.r9.s64 = ctx.r1.s64 + 164;
	// lfs f12,22428(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 22428);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,2000(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
loc_82425E70:
	// lfs f8,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// lfs f0,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// lfs f8,-12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,-4(r9)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// lfs f7,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// stfs f7,0(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f6,4(r9)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fadds f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f8,f8
	ctx.f8.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// lwa r5,92(r1)
	ctx.r5.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 92));
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// stfsx f8,r4,r11
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, temp.u32);
	// fsubs f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// beq cr6,0x82425ed4
	if (ctx.cr6.eq) goto loc_82425ED4;
	// lfs f8,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f0,f12,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f8.f64)));
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_82425ED4:
	// cmplwi cr6,r8,12
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 12, ctx.xer);
	// bge cr6,0x82425f10
	if (!ctx.cr6.lt) goto loc_82425F10;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82425ef0
	if (ctx.cr6.eq) goto loc_82425EF0;
	// lfs f8,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f0,f11,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f8.f64)));
	// stfs f8,8(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_82425EF0:
	// lfs f8,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// fmadds f8,f0,f10,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f8.f64)));
	// stfs f8,12(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// beq cr6,0x82425f10
	if (ctx.cr6.eq) goto loc_82425F10;
	// lfs f8,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f0,f0,f9,f8
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f8.f64)));
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
loc_82425F10:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82425e70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82425E70;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_82425F28:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82424fa0
	ctx.lr = 0x82425F30;
	sub_82424FA0(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8242A4F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lhz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,357
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 357, ctx.xer);
	// bne cr6,0x8242a544
	if (!ctx.cr6.eq) goto loc_8242A544;
	// lhz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blelr 
	if (!ctx.cr0.gt) return;
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
loc_8242A520:
	// lhzu r11,20(r9)
	ea = 20 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// or r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 | ctx.r3.u64;
	// blt cr6,0x8242a520
	if (ctx.cr6.lt) goto loc_8242A520;
	// blr 
	return;
loc_8242A544:
	// cmplwi cr6,r10,358
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 358, ctx.xer);
	// beq cr6,0x8242a554
	if (ctx.cr6.eq) goto loc_8242A554;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x8242a55c
	if (!ctx.cr6.eq) goto loc_8242A55C;
loc_8242A554:
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// blr 
	return;
loc_8242A55C:
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8242a570
	if (!ctx.cr6.eq) goto loc_8242A570;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_8242A570:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8242a580
	if (!ctx.cr6.eq) goto loc_8242A580;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_8242A580:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,21212
	ctx.r10.s64 = ctx.r10.s64 + 21212;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8242DA88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8242DA90;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r29,r3,44
	r29.s64 = ctx.r3.s64 + 44;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242DAB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242d328
	ctx.lr = 0x8242DAC0;
	sub_8242D328(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8242db04
	if (ctx.cr0.lt) goto loc_8242DB04;
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8242dae4
	if (ctx.cr6.lt) goto loc_8242DAE4;
	// lis r3,-30570
	ctx.r3.s64 = -2003435520;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_8242DAE4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8242db04
	if (ctx.cr6.lt) goto loc_8242DB04;
	// lwz r10,156(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 156);
	// mulli r11,r30,1068
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(1068));
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,1068
	ctx.r5.s64 = 1068;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8242DB04;
	sub_822D4FA0(ctx, base);
loc_8242DB04:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242DB18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82443000
	ctx.lr = 0x8242DB20;
	sub_82443000(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82434088) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x824342a4
	if (ctx.cr6.lt) goto loc_824342A4;
	// beq cr6,0x824341b8
	if (ctx.cr6.eq) goto loc_824341B8;
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// blt cr6,0x824342a4
	if (ctx.cr6.lt) goto loc_824342A4;
	// bne cr6,0x824342ac
	if (!ctx.cr6.eq) goto loc_824342AC;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x824340fc
	if (!ctx.cr6.eq) goto loc_824340FC;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bne cr6,0x824340d4
	if (!ctx.cr6.eq) goto loc_824340D4;
	// rlwinm. r11,r6,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824340c8
	if (ctx.cr0.eq) goto loc_824340C8;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r11,r11,2664
	ctx.r11.s64 = ctx.r11.s64 + 2664;
	// b 0x824342ac
	goto loc_824342AC;
loc_824340C8:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r11,r11,-2248
	ctx.r11.s64 = ctx.r11.s64 + -2248;
	// b 0x824342ac
	goto loc_824342AC;
loc_824340D4:
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// bne cr6,0x82434164
	if (!ctx.cr6.eq) goto loc_82434164;
	// rlwinm. r11,r6,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824340f0
	if (ctx.cr0.eq) goto loc_824340F0;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r11,r11,3152
	ctx.r11.s64 = ctx.r11.s64 + 3152;
	// b 0x824342ac
	goto loc_824342AC;
loc_824340F0:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r11,r11,-1984
	ctx.r11.s64 = ctx.r11.s64 + -1984;
	// b 0x824342ac
	goto loc_824342AC;
loc_824340FC:
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bne cr6,0x8243412c
	if (!ctx.cr6.eq) goto loc_8243412C;
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// bne cr6,0x82434164
	if (!ctx.cr6.eq) goto loc_82434164;
	// rlwinm. r11,r6,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82434120
	if (ctx.cr0.eq) goto loc_82434120;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r11,r11,4192
	ctx.r11.s64 = ctx.r11.s64 + 4192;
	// b 0x824342ac
	goto loc_824342AC;
loc_82434120:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r11,r11,-1512
	ctx.r11.s64 = ctx.r11.s64 + -1512;
	// b 0x824342ac
	goto loc_824342AC;
loc_8243412C:
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bne cr6,0x82434148
	if (!ctx.cr6.eq) goto loc_82434148;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bne cr6,0x82434164
	if (!ctx.cr6.eq) goto loc_82434164;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r11,r11,-768
	ctx.r11.s64 = ctx.r11.s64 + -768;
	// b 0x824342ac
	goto loc_824342AC;
loc_82434148:
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bne cr6,0x82434164
	if (!ctx.cr6.eq) goto loc_82434164;
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// bne cr6,0x82434164
	if (!ctx.cr6.eq) goto loc_82434164;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r11,r11,-192
	ctx.r11.s64 = ctx.r11.s64 + -192;
	// b 0x824342ac
	goto loc_824342AC;
loc_82434164:
	// rlwinm. r11,r6,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824341ac
	if (ctx.cr0.eq) goto loc_824341AC;
	// clrlwi. r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824341a0
	if (!ctx.cr0.eq) goto loc_824341A0;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bgt cr6,0x8243418c
	if (ctx.cr6.gt) goto loc_8243418C;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// beq cr6,0x8243418c
	if (ctx.cr6.eq) goto loc_8243418C;
	// rlwinm. r11,r6,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824341a0
	if (!ctx.cr0.eq) goto loc_824341A0;
loc_8243418C:
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bgt cr6,0x824341ac
	if (ctx.cr6.gt) goto loc_824341AC;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r11,r11,1288
	ctx.r11.s64 = ctx.r11.s64 + 1288;
	// b 0x824342ac
	goto loc_824342AC;
loc_824341A0:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r11,r11,5208
	ctx.r11.s64 = ctx.r11.s64 + 5208;
	// b 0x824342ac
	goto loc_824342AC;
loc_824341AC:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r11,r11,-2688
	ctx.r11.s64 = ctx.r11.s64 + -2688;
	// b 0x824342ac
	goto loc_824342AC;
loc_824341B8:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x824341fc
	if (!ctx.cr6.eq) goto loc_824341FC;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bne cr6,0x824341d4
	if (!ctx.cr6.eq) goto loc_824341D4;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r11,r11,6712
	ctx.r11.s64 = ctx.r11.s64 + 6712;
	// b 0x824342ac
	goto loc_824342AC;
loc_824341D4:
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// bne cr6,0x82434250
	if (!ctx.cr6.eq) goto loc_82434250;
	// rlwinm. r11,r6,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824341f0
	if (ctx.cr0.eq) goto loc_824341F0;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r11,r11,13080
	ctx.r11.s64 = ctx.r11.s64 + 13080;
	// b 0x824342ac
	goto loc_824342AC;
loc_824341F0:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r11,r11,7032
	ctx.r11.s64 = ctx.r11.s64 + 7032;
	// b 0x824342ac
	goto loc_824342AC;
loc_824341FC:
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bne cr6,0x82434218
	if (!ctx.cr6.eq) goto loc_82434218;
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// bne cr6,0x82434250
	if (!ctx.cr6.eq) goto loc_82434250;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r11,r11,7592
	ctx.r11.s64 = ctx.r11.s64 + 7592;
	// b 0x824342ac
	goto loc_824342AC;
loc_82434218:
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bne cr6,0x82434234
	if (!ctx.cr6.eq) goto loc_82434234;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bne cr6,0x82434250
	if (!ctx.cr6.eq) goto loc_82434250;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r11,r11,8520
	ctx.r11.s64 = ctx.r11.s64 + 8520;
	// b 0x824342ac
	goto loc_824342AC;
loc_82434234:
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bne cr6,0x82434250
	if (!ctx.cr6.eq) goto loc_82434250;
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// bne cr6,0x82434250
	if (!ctx.cr6.eq) goto loc_82434250;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r11,r11,9440
	ctx.r11.s64 = ctx.r11.s64 + 9440;
	// b 0x824342ac
	goto loc_824342AC;
loc_82434250:
	// rlwinm. r11,r6,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82434298
	if (ctx.cr0.eq) goto loc_82434298;
	// clrlwi. r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8243428c
	if (!ctx.cr0.eq) goto loc_8243428C;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bgt cr6,0x82434278
	if (ctx.cr6.gt) goto loc_82434278;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// beq cr6,0x82434278
	if (ctx.cr6.eq) goto loc_82434278;
	// rlwinm. r11,r6,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8243428c
	if (!ctx.cr0.eq) goto loc_8243428C;
loc_82434278:
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bgt cr6,0x82434298
	if (ctx.cr6.gt) goto loc_82434298;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r11,r11,11288
	ctx.r11.s64 = ctx.r11.s64 + 11288;
	// b 0x824342ac
	goto loc_824342AC;
loc_8243428C:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// b 0x824342ac
	goto loc_824342AC;
loc_82434298:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r11,r11,6176
	ctx.r11.s64 = ctx.r11.s64 + 6176;
	// b 0x824342ac
	goto loc_824342AC;
loc_824342A4:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r11,r11,15408
	ctx.r11.s64 = ctx.r11.s64 + 15408;
loc_824342AC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82439410) {
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
	ctx.lr = 0x82439418;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,232(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// li r30,-1
	r30.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82439468
	goto loc_82439468;
loc_82439438:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// blt cr6,0x8243945c
	if (ctx.cr6.lt) goto loc_8243945C;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// bge cr6,0x8243945c
	if (!ctx.cr6.lt) goto loc_8243945C;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_8243945C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82439470
	if (ctx.cr6.eq) goto loc_82439470;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82439468:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82439438
	if (!ctx.cr6.eq) goto loc_82439438;
loc_82439470:
	// addi r29,r27,124
	r29.s64 = r27.s64 + 124;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82438600
	ctx.lr = 0x8243947C;
	sub_82438600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82438e98
	ctx.lr = 0x82439488;
	sub_82438E98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82439504
	if (ctx.cr0.eq) goto loc_82439504;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// beq cr6,0x82439510
	if (ctx.cr6.eq) goto loc_82439510;
	// stw r31,4(r28)
	REX_STORE_U32(r28.u32 + 4, r31.u32);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x8242c3b0
	ctx.lr = 0x824394B4;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824394dc
	if (ctx.cr0.eq) goto loc_824394DC;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// subf r9,r31,r30
	ctx.r9.u64 = r30.u64 - r31.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x824394e0
	goto loc_824394E0;
loc_824394DC:
	// li r31,0
	r31.s64 = 0;
loc_824394E0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82439504
	if (ctx.cr6.eq) goto loc_82439504;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82438e98
	ctx.lr = 0x824394F4;
	sub_82438E98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82439510
	if (!ctx.cr0.eq) goto loc_82439510;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x82439504;
	sub_82473600(ctx, base);
loc_82439504:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82439508:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_82439510:
	// lwz r11,260(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 260);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82439564
	if (!ctx.cr6.eq) goto loc_82439564;
	// lwz r9,232(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 232);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82439558
	goto loc_82439558;
loc_82439528:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82439540
	if (ctx.cr6.eq) goto loc_82439540;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82439544
	goto loc_82439544;
loc_82439540:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82439544:
	// lwz r11,260(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 260);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82439558
	if (ctx.cr6.gt) goto loc_82439558;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82439558:
	// stw r11,260(r27)
	REX_STORE_U32(r27.u32 + 260, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82439528
	if (!ctx.cr6.eq) goto loc_82439528;
loc_82439564:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// b 0x82439508
	goto loc_82439508;
}

DEFINE_REX_FUNC(sub_8243D960) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8243d994
	if (!ctx.cr6.eq) goto loc_8243D994;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r8,r3,64
	ctx.r8.s64 = ctx.r3.s64 + 64;
loc_8243D974:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r11,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8243d974
	if (!ctx.cr0.eq) goto loc_8243D974;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
loc_8243D994:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,68(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82440C28) {
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
	// bl 0x82440ba8
	ctx.lr = 0x82440C40;
	sub_82440BA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242a3f8
	ctx.lr = 0x82440C48;
	sub_8242A3F8(ctx, base);
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

DEFINE_REX_FUNC(sub_82441268) {
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
	// addi r31,r3,24
	r31.s64 = ctx.r3.s64 + 24;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d438c
	ctx.lr = 0x8244128C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// bl 0x824d445c
	ctx.lr = 0x8244129C;
	__imp__KeSetEvent(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d437c
	ctx.lr = 0x824412A4;
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

DEFINE_REX_FUNC(sub_824421F0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x824428a8
	sub_824428A8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82442230) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x8242d190
	sub_8242D190(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82442540) {
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
	ctx.lr = 0x82442548;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r25,r3,28
	r25.s64 = ctx.r3.s64 + 28;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82442578;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,80(r31)
	REX_STORE_U32(r31.u32 + 80, r29.u32);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r10,8343
	ctx.r10.s64 = 546766848;
	// addi r29,r11,7712
	r29.s64 = ctx.r11.s64 + 7712;
	// ori r26,r10,6
	r26.u64 = ctx.r10.u64 | 6;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,560
	ctx.r4.s64 = 560;
	// bl 0x8242c3b0
	ctx.lr = 0x824425A0;
	sub_8242C3B0(ctx, base);
	// li r24,0
	r24.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824425c0
	if (ctx.cr0.eq) goto loc_824425C0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8245c628
	ctx.lr = 0x824425BC;
	sub_8245C628(ctx, base);
	// b 0x824425c4
	goto loc_824425C4;
loc_824425C0:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_824425C4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r3.u32);
	// beq cr6,0x82442670
	if (ctx.cr6.eq) goto loc_82442670;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,228
	ctx.r4.s64 = 228;
	// bl 0x8242c3b0
	ctx.lr = 0x824425E4;
	sub_8242C3B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82442604
	if (ctx.cr0.eq) goto loc_82442604;
	// stw r24,0(r30)
	REX_STORE_U32(r30.u32 + 0, r24.u32);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// stw r24,4(r30)
	REX_STORE_U32(r30.u32 + 4, r24.u32);
	// bl 0x8242d278
	ctx.lr = 0x824425FC;
	sub_8242D278(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82442608
	goto loc_82442608;
loc_82442604:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_82442608:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r3.u32);
	// beq cr6,0x82442670
	if (ctx.cr6.eq) goto loc_82442670;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82441fd8
	ctx.lr = 0x82442620;
	sub_82441FD8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82442678
	if (ctx.cr0.lt) goto loc_82442678;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,760
	ctx.r4.s64 = 760;
	// bl 0x8242c3b0
	ctx.lr = 0x8244263C;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82442660
	if (ctx.cr0.eq) goto loc_82442660;
	// addi r6,r31,12
	ctx.r6.s64 = r31.s64 + 12;
	// lwz r8,76(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 76);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r7,68(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 68);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8245d940
	ctx.lr = 0x8244265C;
	sub_8245D940(ctx, base);
	// b 0x82442664
	goto loc_82442664;
loc_82442660:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_82442664:
	// stw r3,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824426a0
	if (!ctx.cr6.eq) goto loc_824426A0;
loc_82442670:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
loc_82442678:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82442240
	ctx.lr = 0x82442680;
	sub_82442240(ctx, base);
loc_82442680:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82442694;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_824426A0:
	// bl 0x8245d278
	ctx.lr = 0x824426A4;
	sub_8245D278(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82442678
	if (ctx.cr0.lt) goto loc_82442678;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// b 0x82442680
	goto loc_82442680;
}

DEFINE_REX_FUNC(sub_8244B758) {
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
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x8244b7a0
	if (ctx.cr6.eq) goto loc_8244B7A0;
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8244b798
	if (!ctx.cr6.eq) goto loc_8244B798;
	// lwz r9,36(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8244b7a0
	if (!ctx.cr6.eq) goto loc_8244B7A0;
loc_8244B798:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8244b7a4
	goto loc_8244B7A4;
loc_8244B7A0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8244B7A4:
	// divwu r9,r11,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// lwz r31,32(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// li r6,32000
	ctx.r6.s64 = 32000;
	// lwz r10,56(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 56);
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// lwz r30,16(r5)
	r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// subfc r3,r6,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r6.u32;
	ctx.r3.u64 = ctx.r9.u64 - ctx.r6.u64;
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r6,8(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// subfe r7,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r3,12(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// addic r5,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// clrlwi r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// subfe r5,r5,r11
	temp.u8 = (~ctx.r5.u32 + ctx.r11.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x8244b5f0
	ctx.lr = 0x8244B7E8;
	sub_8244B5F0(ctx, base);
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

DEFINE_REX_FUNC(sub_82451148) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfs f11,-6484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -6484);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,27536(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 27536);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,2024(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2024);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x82451258
	if (ctx.cr6.lt) goto loc_82451258;
	// addi r8,r5,-3
	ctx.r8.s64 = ctx.r5.s64 + -3;
	// addi r9,r3,-2
	ctx.r9.s64 = ctx.r3.s64 + -2;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
loc_82451178:
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8245118c
	if (!ctx.cr6.lt) goto loc_8245118C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82451198
	goto loc_82451198;
loc_8245118C:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82451198
	if (!ctx.cr6.gt) goto loc_82451198;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82451198:
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
	// bge cr6,0x824511c0
	if (!ctx.cr6.lt) goto loc_824511C0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x824511cc
	goto loc_824511CC;
loc_824511C0:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x824511cc
	if (!ctx.cr6.gt) goto loc_824511CC;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_824511CC:
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
	// bge cr6,0x824511f4
	if (!ctx.cr6.lt) goto loc_824511F4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82451200
	goto loc_82451200;
loc_824511F4:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82451200
	if (!ctx.cr6.gt) goto loc_82451200;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82451200:
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
	// bge cr6,0x82451228
	if (!ctx.cr6.lt) goto loc_82451228;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82451234
	goto loc_82451234;
loc_82451228:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82451234
	if (!ctx.cr6.gt) goto loc_82451234;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82451234:
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
	// blt cr6,0x82451178
	if (ctx.cr6.lt) goto loc_82451178;
loc_82451258:
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
loc_8245127C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82451290
	if (!ctx.cr6.lt) goto loc_82451290;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x8245129c
	goto loc_8245129C;
loc_82451290:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8245129c
	if (!ctx.cr6.gt) goto loc_8245129C;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8245129C:
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
	// bdnz 0x8245127c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8245127C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82456320) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822d5870
	ctx.lr = 0x82456350;
	sub_822D5870(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lfs f0,1996(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// ori r10,r10,20
	ctx.r10.u64 = ctx.r10.u64 | 20;
	// ori r9,r9,24
	ctx.r9.u64 = ctx.r9.u64 | 24;
	// ori r8,r8,28
	ctx.r8.u64 = ctx.r8.u64 | 28;
	// ori r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 | 32;
	// ori r6,r6,36
	ctx.r6.u64 = ctx.r6.u64 | 36;
	// ori r5,r5,40
	ctx.r5.u64 = ctx.r5.u64 | 40;
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// li r30,0
	r30.s64 = 0;
	// stfsx f31,r31,r8
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + ctx.r8.u32, temp.u32);
	// stfsx f0,r31,r7
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + ctx.r7.u32, temp.u32);
	// stwx r4,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, ctx.r4.u32);
	// stwx r30,r31,r3
	REX_STORE_U32(r31.u32 + ctx.r3.u32, r30.u32);
	// stfsx f0,r31,r6
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + ctx.r6.u32, temp.u32);
	// stfsx f0,r31,r5
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + ctx.r5.u32, temp.u32);
	// stwx r4,r31,r10
	REX_STORE_U32(r31.u32 + ctx.r10.u32, ctx.r4.u32);
	// stwx r4,r31,r9
	REX_STORE_U32(r31.u32 + ctx.r9.u32, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_8245C628) {
	REX_FUNC_PROLOGUE();
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8245C63C:
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r7,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r7,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// bge 0x8245c63c
	if (!ctx.cr0.lt) goto loc_8245C63C;
	// stw r6,556(r3)
	REX_STORE_U32(ctx.r3.u32 + 556, ctx.r6.u32);
	// stw r10,528(r3)
	REX_STORE_U32(ctx.r3.u32 + 528, ctx.r10.u32);
	// stw r10,532(r3)
	REX_STORE_U32(ctx.r3.u32 + 532, ctx.r10.u32);
	// stw r10,536(r3)
	REX_STORE_U32(ctx.r3.u32 + 536, ctx.r10.u32);
	// stw r10,540(r3)
	REX_STORE_U32(ctx.r3.u32 + 540, ctx.r10.u32);
	// stw r10,544(r3)
	REX_STORE_U32(ctx.r3.u32 + 544, ctx.r10.u32);
	// stw r10,548(r3)
	REX_STORE_U32(ctx.r3.u32 + 548, ctx.r10.u32);
	// stw r10,552(r3)
	REX_STORE_U32(ctx.r3.u32 + 552, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245D548) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8245D550;
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
	// bne cr6,0x8245d574
	if (!ctx.cr6.eq) goto loc_8245D574;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8245d4c8
	ctx.lr = 0x8245D570;
	sub_8245D4C8(ctx, base);
	// b 0x8245d5b8
	goto loc_8245D5B8;
loc_8245D574:
	// bl 0x82441768
	ctx.lr = 0x8245D578;
	sub_82441768(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8245d5b8
	if (ctx.cr0.eq) goto loc_8245D5B8;
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
	// beq cr6,0x8245d5a4
	if (ctx.cr6.eq) goto loc_8245D5A4;
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// b 0x8245d5a8
	goto loc_8245D5A8;
loc_8245D5A4:
	// stw r3,208(r30)
	REX_STORE_U32(r30.u32 + 208, ctx.r3.u32);
loc_8245D5A8:
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lwz r11,212(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 212);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,212(r30)
	REX_STORE_U32(r30.u32 + 212, ctx.r11.u32);
loc_8245D5B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8245E330) {
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
	ctx.lr = 0x8245E338;
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
	ctx.lr = 0x8245E374;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8245e398
	if (ctx.cr0.eq) goto loc_8245E398;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8245e268
	ctx.lr = 0x8245E390;
	sub_8245E268(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8245e39c
	goto loc_8245E39C;
loc_8245E398:
	// li r29,0
	r29.s64 = 0;
loc_8245E39C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8245e3b0
	if (!ctx.cr6.eq) goto loc_8245E3B0;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8245e400
	goto loc_8245E400;
loc_8245E3B0:
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
	ctx.lr = 0x8245E3D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8245e3e4
	if (ctx.cr0.lt) goto loc_8245E3E4;
	// stw r29,0(r25)
	REX_STORE_U32(r25.u32 + 0, r29.u32);
	// b 0x8245e400
	goto loc_8245E400;
loc_8245E3E4:
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
	ctx.lr = 0x8245E3FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82473600
	ctx.lr = 0x8245E400;
	sub_82473600(ctx, base);
loc_8245E400:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8245FAD8) {
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
	// bl 0x8245f9e0
	ctx.lr = 0x8245FAF8;
	sub_8245F9E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8245fb3c
	if (ctx.cr0.eq) goto loc_8245FB3C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245fb28
	if (ctx.cr6.eq) goto loc_8245FB28;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// b 0x8245fb2c
	goto loc_8245FB2C;
loc_8245FB28:
	// stw r3,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r3.u32);
loc_8245FB2C:
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// stw r3,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r11.u32);
loc_8245FB3C:
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

DEFINE_REX_FUNC(sub_824607C8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,72(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82460958) {
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
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824d4c1c
	ctx.lr = 0x82460980;
	__imp__XAudioGetSpeakerConfig(ctx, base);
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// addi r10,r31,-4
	ctx.r10.s64 = r31.s64 + -4;
	// std r30,84(r31)
	REX_STORE_U64(r31.u32 + 84, r30.u64);
	// addi r11,r11,1848
	ctx.r11.s64 = ctx.r11.s64 + 1848;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r31,64
	ctx.r4.s64 = r31.s64 + 64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// bl 0x824d4c0c
	ctx.lr = 0x824609C4;
	__imp__XAudioRegisterRenderDriverClient(ctx, base);
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

DEFINE_REX_FUNC(sub_82464690) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e68
	ctx.lr = 0x82464698;
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, f30.u64);
	// stfd f31,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,428(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 428);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r26,56(r4)
	r26.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r20,0
	r20.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824646d0
	if (!ctx.cr6.gt) goto loc_824646D0;
	// lhz r11,118(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 118);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x824646e8
	if (ctx.cr6.gt) goto loc_824646E8;
loc_824646D0:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822d4eb8
	return;
loc_824646E8:
	// lhz r10,730(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 730);
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// lwz r11,308(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 308);
	// lwz r8,304(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 304);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82464704
	if (ctx.cr6.lt) goto loc_82464704;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
loc_82464704:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82464860
	if (!ctx.cr6.gt) goto loc_82464860;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r28,r11,4
	r28.s64 = ctx.r11.s64 + 4;
	// subfic r27,r11,-4
	ctx.xer.ca = ctx.r11.u32 <= 4294967292;
	r27.u64 = static_cast<uint64_t>(-4) - ctx.r11.u64;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfd f30,-6032(r10)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r10.u32 + -6032);
	// clrlwi r21,r5,24
	r21.u64 = ctx.r5.u32 & 0xFF;
	// lfs f31,16260(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16260);
	f31.f64 = double(temp.f32);
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// addi r22,r11,4712
	r22.s64 = ctx.r11.s64 + 4712;
loc_82464734:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r31,r23
	r31.u64 = r23.u64;
	// lwz r30,-4(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + -4);
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8246474c
	if (ctx.cr6.lt) goto loc_8246474C;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_8246474C:
	// lwz r10,64(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 64);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// lwz r8,436(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 436);
	// beq cr6,0x82464764
	if (ctx.cr6.eq) goto loc_82464764;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// b 0x82464768
	goto loc_82464768;
loc_82464764:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
loc_82464768:
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + r27.u64;
	// lwzx r7,r9,r28
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + r28.u32);
	// lbz r9,180(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 180);
	// subf r6,r7,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r7.u64;
	// lwz r10,296(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 296);
	// mullw r11,r6,r8
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x824647a0
	if (ctx.cr0.lt) goto loc_824647A0;
	// cmpwi cr6,r11,192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 192, ctx.xer);
	// bge cr6,0x824647a0
	if (!ctx.cr6.lt) goto loc_824647A0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r22
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x824647c4
	goto loc_824647C4;
loc_824647A0:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f2,f12,f31
	ctx.f2.f64 = double(float(ctx.f12.f64 * f31.f64));
	// bl 0x822d5b48
	ctx.lr = 0x824647C0;
	sub_822D5B48(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
loc_824647C4:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(r30.s32, r31.s32, ctx.xer);
	// bge cr6,0x82464854
	if (!ctx.cr6.lt) goto loc_82464854;
	// subf r11,r30,r31
	ctx.r11.u64 = r31.u64 - r30.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82464828
	if (ctx.cr6.lt) goto loc_82464828;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,-3
	ctx.r9.s64 = r31.s64 + -3;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_824647EC:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f8,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stfs f7,12(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfsu f6,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// blt cr6,0x824647ec
	if (ctx.cr6.lt) goto loc_824647EC;
loc_82464828:
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r31.s32, ctx.xer);
	// bge cr6,0x82464854
	if (!ctx.cr6.lt) goto loc_82464854;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r31
	ctx.r10.u64 = r31.u64 - ctx.r10.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82464844:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82464844
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82464844;
loc_82464854:
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x82464734
	if (!ctx.cr0.eq) goto loc_82464734;
loc_82464860:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_8246E320) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8246e330
	if (!ctx.cr6.eq) goto loc_8246E330;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// blt cr6,0x8246e4b0
	if (ctx.cr6.lt) goto loc_8246E4B0;
loc_8246E330:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bgt cr6,0x8246e4b0
	if (ctx.cr6.gt) goto loc_8246E4B0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8246e4b0
	if (!ctx.cr6.gt) goto loc_8246E4B0;
	// cmpwi cr6,r3,8000
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8000, ctx.xer);
	// bgt cr6,0x8246e350
	if (ctx.cr6.gt) goto loc_8246E350;
	// li r11,512
	ctx.r11.s64 = 512;
	// b 0x8246e3e0
	goto loc_8246E3E0;
loc_8246E350:
	// cmpwi cr6,r3,11025
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11025, ctx.xer);
	// bgt cr6,0x8246e360
	if (ctx.cr6.gt) goto loc_8246E360;
	// li r11,512
	ctx.r11.s64 = 512;
	// b 0x8246e3e0
	goto loc_8246E3E0;
loc_8246E360:
	// cmpwi cr6,r3,16000
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16000, ctx.xer);
	// bgt cr6,0x8246e370
	if (ctx.cr6.gt) goto loc_8246E370;
	// li r11,512
	ctx.r11.s64 = 512;
	// b 0x8246e3e0
	goto loc_8246E3E0;
loc_8246E370:
	// cmpwi cr6,r3,22050
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22050, ctx.xer);
	// bgt cr6,0x8246e380
	if (ctx.cr6.gt) goto loc_8246E380;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// b 0x8246e3e0
	goto loc_8246E3E0;
loc_8246E380:
	// cmpwi cr6,r3,32000
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32000, ctx.xer);
	// bgt cr6,0x8246e398
	if (ctx.cr6.gt) goto loc_8246E398;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x8246e3c0
	if (!ctx.cr6.eq) goto loc_8246E3C0;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// b 0x8246e434
	goto loc_8246E434;
loc_8246E398:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,44100
	ctx.r10.u64 = ctx.r11.u64 | 44100;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8246e3b0
	if (ctx.cr6.gt) goto loc_8246E3B0;
	// li r11,2048
	ctx.r11.s64 = 2048;
	// b 0x8246e3e0
	goto loc_8246E3E0;
loc_8246E3B0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,48000
	ctx.r10.u64 = ctx.r11.u64 | 48000;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8246e3c8
	if (ctx.cr6.gt) goto loc_8246E3C8;
loc_8246E3C0:
	// li r11,2048
	ctx.r11.s64 = 2048;
	// b 0x8246e3e0
	goto loc_8246E3E0;
loc_8246E3C8:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,30464
	ctx.r10.u64 = ctx.r11.u64 | 30464;
	// li r11,4096
	ctx.r11.s64 = 4096;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8246e3e0
	if (!ctx.cr6.gt) goto loc_8246E3E0;
	// li r11,8192
	ctx.r11.s64 = 8192;
loc_8246E3E0:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x8246e430
	if (!ctx.cr6.eq) goto loc_8246E430;
	// rlwinm r10,r6,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8246e400
	if (!ctx.cr6.eq) goto loc_8246E400;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_8246E400:
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x8246e418
	if (!ctx.cr6.eq) goto loc_8246E418;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_8246E418:
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bne cr6,0x8246e4a8
	if (!ctx.cr6.eq) goto loc_8246E4A8;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_8246E430:
	// bge cr6,0x8246e4a8
	if (!ctx.cr6.lt) goto loc_8246E4A8;
loc_8246E434:
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// mullw r8,r11,r4
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// divwu r9,r9,r3
	ctx.r9.u64 = uint32_t(ctx.r3.u32 ? ctx.r9.u32 / ctx.r3.u32 : 0);
	// addi r7,r9,7
	ctx.r7.s64 = ctx.r9.s64 + 7;
	// rlwinm r9,r7,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8246e478
	if (!ctx.cr6.eq) goto loc_8246E478;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8246e488
	if (!ctx.cr6.eq) goto loc_8246E488;
	// mullw r9,r11,r3
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// divwu r9,r9,r3
	ctx.r9.u64 = uint32_t(ctx.r3.u32 ? ctx.r9.u32 / ctx.r3.u32 : 0);
	// addi r8,r9,7
	ctx.r8.s64 = ctx.r9.s64 + 7;
	// rlwinm r9,r8,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
loc_8246E478:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8246e4a8
	if (ctx.cr6.gt) goto loc_8246E4A8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8246e4a8
	if (!ctx.cr6.eq) goto loc_8246E4A8;
loc_8246E488:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r9,r11,r4
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// divwu r9,r9,r3
	ctx.r9.u64 = uint32_t(ctx.r3.u32 ? ctx.r9.u32 / ctx.r3.u32 : 0);
	// addi r8,r9,7
	ctx.r8.s64 = ctx.r9.s64 + 7;
	// rlwinm r7,r8,0,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8246e488
	if (ctx.cr6.eq) goto loc_8246E488;
loc_8246E4A8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_8246E4B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82473CC8) {
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
	// lwz r3,108(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,3196
	ctx.r11.s64 = ctx.r11.s64 + 3196;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82473d04
	if (ctx.cr6.eq) goto loc_82473D04;
	// bl 0x82473600
	ctx.lr = 0x82473D00;
	sub_82473600(ctx, base);
	// stw r30,108(r31)
	REX_STORE_U32(r31.u32 + 108, r30.u32);
loc_82473D04:
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82473d18
	if (ctx.cr6.eq) goto loc_82473D18;
	// bl 0x82473600
	ctx.lr = 0x82473D14;
	sub_82473600(ctx, base);
	// stw r30,112(r31)
	REX_STORE_U32(r31.u32 + 112, r30.u32);
loc_82473D18:
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82475f10
	ctx.lr = 0x82473D24;
	sub_82475F10(ctx, base);
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

DEFINE_REX_FUNC(sub_82474898) {
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
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824748d8
	if (!ctx.cr6.lt) goto loc_824748D8;
	// bl 0x824d419c
	ctx.lr = 0x824748CC;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x824748d8
	if (ctx.cr6.eq) goto loc_824748D8;
	// li r30,1
	r30.s64 = 1;
loc_824748D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824748ec
	if (ctx.cr6.eq) goto loc_824748EC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8247495c
	if (ctx.cr6.eq) goto loc_8247495C;
loc_824748EC:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8247495c
	if (ctx.cr6.gt) goto loc_8247495C;
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
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x8242c3b0
	ctx.lr = 0x8247491C;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8247495c
	if (ctx.cr0.eq) goto loc_8247495C;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82474930:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x82474930
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82474930;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
loc_8247495C:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82474974
	if (ctx.cr6.eq) goto loc_82474974;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x82474978
	goto loc_82474978;
loc_82474974:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82474978:
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

DEFINE_REX_FUNC(sub_8247A520) {
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
	ctx.lr = 0x8247A528;
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
	// blt cr6,0x8247a5e0
	if (ctx.cr6.lt) goto loc_8247A5E0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,34464
	ctx.r10.u64 = ctx.r11.u64 | 34464;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8247a5e0
	if (ctx.cr6.gt) goto loc_8247A5E0;
	// bl 0x8247a4b0
	ctx.lr = 0x8247A55C;
	sub_8247A4B0(ctx, base);
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
	// bl 0x82460ed8
	ctx.lr = 0x8247A570;
	sub_82460ED8(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8247a590
	if (!ctx.cr6.eq) goto loc_8247A590;
loc_8247A57C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
loc_8247A590:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x8247A5A0;
	sub_822D5870(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82460ed8
	ctx.lr = 0x8247A5AC;
	sub_82460ED8(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247a57c
	if (ctx.cr6.eq) goto loc_8247A57C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x8247A5C8;
	sub_822D5870(ctx, base);
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
	// b 0x822d4edc
	return;
loc_8247A5E0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8247D710) {
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
	ctx.lr = 0x8247D718;
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r27,0
	r27.s64 = 0;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,92(r31)
	REX_STORE_U32(r31.u32 + 92, r27.u32);
	// stw r27,96(r31)
	REX_STORE_U32(r31.u32 + 96, r27.u32);
	// bne 0x8247d758
	if (!ctx.cr0.eq) goto loc_8247D758;
	// bl 0x822db6c0
	ctx.lr = 0x8247D744;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x8247D750;
	sub_822D6910(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x8247d9a4
	goto loc_8247D9A4;
loc_8247D758:
	// stw r27,0(r26)
	REX_STORE_U32(r26.u32 + 0, r27.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822dbc40
	ctx.lr = 0x8247D764;
	sub_822DBC40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8247d778
	if (!ctx.cr0.eq) goto loc_8247D778;
	// bl 0x822db6c0
	ctx.lr = 0x8247D770;
	sub_822DB6C0(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8247d9a4
	goto loc_8247D9A4;
loc_8247D778:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822dbd80
	ctx.lr = 0x8247D780;
	sub_822DBD80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r30,r11,-13008
	r30.s64 = ctx.r11.s64 + -13008;
	// lbz r11,-13008(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -13008);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// bne 0x8247d87c
	if (!ctx.cr0.eq) goto loc_8247D87C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r5,r11,13848
	ctx.r5.s64 = ctx.r11.s64 + 13848;
	// bl 0x822d6b60
	ctx.lr = 0x8247D7AC;
	sub_822D6B60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8247d7cc
	if (ctx.cr0.eq) goto loc_8247D7CC;
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
	// bl 0x822d69e8
	ctx.lr = 0x8247D7CC;
	sub_822D69E8(ctx, base);
loc_8247D7CC:
	// lbz r10,2(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 2);
	// addi r11,r30,3
	ctx.r11.s64 = r30.s64 + 3;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r10,92
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 92, ctx.xer);
	// beq cr6,0x8247d7fc
	if (ctx.cr6.eq) goto loc_8247D7FC;
	// cmpwi cr6,r10,47
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 47, ctx.xer);
	// beq cr6,0x8247d7fc
	if (ctx.cr6.eq) goto loc_8247D7FC;
	// li r10,92
	ctx.r10.s64 = 92;
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// stb r10,3(r30)
	REX_STORE_U8(r30.u32 + 3, ctx.r10.u8);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
loc_8247D7FC:
	// li r10,116
	ctx.r10.s64 = 116;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r30,20
	ctx.r11.s64 = r30.s64 + 20;
	// stw r29,84(r31)
	REX_STORE_U32(r31.u32 + 84, r29.u32);
	// subf r28,r29,r11
	r28.u64 = ctx.r11.u64 - r29.u64;
	// bl 0x823cd280
	ctx.lr = 0x8247D818;
	sub_823CD280(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x8247f638
	ctx.lr = 0x8247D828;
	sub_8247F638(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8247d848
	if (ctx.cr0.eq) goto loc_8247D848;
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
	// bl 0x822d69e8
	ctx.lr = 0x8247D848;
	sub_822D69E8(ctx, base);
loc_8247D848:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,13728
	ctx.r5.s64 = ctx.r11.s64 + 13728;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x822d8740
	ctx.lr = 0x8247D85C;
	sub_822D8740(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8247d890
	if (ctx.cr0.eq) goto loc_8247D890;
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
	// bl 0x822d69e8
	ctx.lr = 0x8247D87C;
	sub_822D69E8(ctx, base);
loc_8247D87C:
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// bl 0x8247d640
	ctx.lr = 0x8247D888;
	sub_8247D640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8247d97c
	if (!ctx.cr0.eq) goto loc_8247D97C;
loc_8247D890:
	// bl 0x8247dbe8
	ctx.lr = 0x8247D894;
	sub_8247DBE8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r29,88(r31)
	REX_STORE_U32(r31.u32 + 88, r29.u32);
	// bne 0x8247d8ac
	if (!ctx.cr0.eq) goto loc_8247D8AC;
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// b 0x8247d980
	goto loc_8247D980;
loc_8247D8AC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// bl 0x822db6c0
	ctx.lr = 0x8247D8B8;
	sub_822DB6C0(ctx, base);
	// lwz r28,0(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822db6c0
	ctx.lr = 0x8247D8C0;
	sub_822DB6C0(ctx, base);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
loc_8247D8C4:
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,384
	ctx.r7.s64 = 384;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// ori r5,r5,34114
	ctx.r5.u64 = ctx.r5.u64 | 34114;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8247ff20
	ctx.lr = 0x8247D8E0;
	sub_8247FF20(ctx, base);
	// cmpwi cr6,r3,17
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 17, ctx.xer);
	// bne cr6,0x8247d90c
	if (!ctx.cr6.eq) goto loc_8247D90C;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x8247d640
	ctx.lr = 0x8247D8FC;
	sub_8247D640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8247d90c
	if (!ctx.cr0.eq) goto loc_8247D90C;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8247d8c4
	goto loc_8247D8C4;
loc_8247D90C:
	// bl 0x822db6c0
	ctx.lr = 0x8247D910;
	sub_822DB6C0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8247d924
	if (!ctx.cr6.eq) goto loc_8247D924;
	// bl 0x822db6c0
	ctx.lr = 0x8247D920;
	sub_822DB6C0(ctx, base);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
loc_8247D924:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247d980
	if (ctx.cr6.eq) goto loc_8247D980;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8247f7e0
	ctx.lr = 0x8247D938;
	sub_8247F7E0(ctx, base);
	// stw r3,28(r29)
	REX_STORE_U32(r29.u32 + 28, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8247d950
	if (!ctx.cr0.eq) goto loc_8247D950;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// bl 0x822e6c30
	ctx.lr = 0x8247D94C;
	sub_822E6C30(ctx, base);
	// b 0x8247d980
	goto loc_8247D980;
loc_8247D950:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// stw r27,4(r29)
	REX_STORE_U32(r29.u32 + 4, r27.u32);
	// stw r27,0(r29)
	REX_STORE_U32(r29.u32 + 0, r27.u32);
	// stw r27,8(r29)
	REX_STORE_U32(r29.u32 + 8, r27.u32);
	// lwz r11,-12964(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -12964);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r11,16(r29)
	REX_STORE_U32(r29.u32 + 16, ctx.r11.u32);
	// stw r29,0(r26)
	REX_STORE_U32(r26.u32 + 0, r29.u32);
	// b 0x8247d980
	goto loc_8247D980;
loc_8247D97C:
	// lwz r29,88(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 88);
loc_8247D980:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = r31.s64 + 176;
	// bl 0x8247d9cc
	ctx.lr = 0x8247D98C;
	ctx.r25 = r25;
	ctx.r26 = r26;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_8247D9CC(ctx, base);
	r25 = ctx.r25;
	r26 = ctx.r26;
	r27 = ctx.r27;
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r30,96(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8247d9a0
	if (ctx.cr6.eq) goto loc_8247D9A0;
	// bl 0x822db6c0
	ctx.lr = 0x8247D99C;
	sub_822DB6C0(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
loc_8247D9A0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8247D9A4:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82498960) {
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
	// lwz r10,4016(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4016);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82498994
	if (ctx.cr6.eq) goto loc_82498994;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// bne cr6,0x82498998
	if (!ctx.cr6.eq) goto loc_82498998;
loc_82498994:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82498998:
	// lwz r11,2964(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2964);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// lwz r10,2092(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2092);
	// addi r8,r11,735
	ctx.r8.s64 = ctx.r11.s64 + 735;
	// addi r7,r11,738
	ctx.r7.s64 = ctx.r11.s64 + 738;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r10,263
	ctx.r5.s64 = ctx.r10.s64 + 263;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r5,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r6,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + r31.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,2916(r31)
	REX_STORE_U32(r31.u32 + 2916, ctx.r10.u32);
	// lwzx r7,r4,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + r31.u32);
	// stw r7,2928(r31)
	REX_STORE_U32(r31.u32 + 2928, ctx.r7.u32);
	// lwzx r6,r3,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + r31.u32);
	// stw r6,2096(r31)
	REX_STORE_U32(r31.u32 + 2096, ctx.r6.u32);
	// lwz r5,2108(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 2108);
	// stw r5,2100(r31)
	REX_STORE_U32(r31.u32 + 2100, ctx.r5.u32);
	// beq cr6,0x824989f0
	if (ctx.cr6.eq) goto loc_824989F0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_824989F0:
	// stw r11,460(r31)
	REX_STORE_U32(r31.u32 + 460, ctx.r11.u32);
	// lwz r11,21704(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21704);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82498a18
	if (!ctx.cr6.eq) goto loc_82498A18;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lwz r10,21972(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 21972);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,21968(r31)
	REX_STORE_U32(r31.u32 + 21968, ctx.r10.u32);
	// b 0x82498a20
	goto loc_82498A20;
loc_82498A18:
	// lwz r11,21972(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21972);
	// stw r11,21968(r31)
	REX_STORE_U32(r31.u32 + 21968, ctx.r11.u32);
loc_82498A20:
	// lwz r11,20688(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82498a34
	if (!ctx.cr6.eq) goto loc_82498A34;
	// stw r9,22176(r31)
	REX_STORE_U32(r31.u32 + 22176, ctx.r9.u32);
	// b 0x82498a38
	goto loc_82498A38;
loc_82498A34:
	// stw r9,22180(r31)
	REX_STORE_U32(r31.u32 + 22180, ctx.r9.u32);
loc_82498A38:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,248(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 248);
	// bl 0x82340178
	ctx.lr = 0x82498A44;
	sub_82340178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,248(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 248);
	// bl 0x8237d2c0
	ctx.lr = 0x82498A50;
	sub_8237D2C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82375748
	ctx.lr = 0x82498A58;
	sub_82375748(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82375850
	ctx.lr = 0x82498A60;
	sub_82375850(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82362b28
	ctx.lr = 0x82498A6C;
	sub_82362B28(ctx, base);
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

DEFINE_REX_FUNC(sub_824A64E0) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v14{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister v69{};
	uint32_t ea{};
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx v5,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// li r10,32
	ctx.r10.s64 = 32;
	// vsldoi v6,v5,v5,8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), 8));
	// li r11,48
	ctx.r11.s64 = 48;
	// vspltish v10,1
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r12,r4,4
	ctx.r12.s64 = ctx.r4.s64 + 4;
	// vspltish v12,3
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x3)));
	// lvx v7,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x2)));
	// vaddshs v28,v5,v7
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vspltish v14,5
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_set1_epi16(short(0x5)));
	// vsldoi v8,v7,v7,8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8), 8));
	// vsubuhm v29,v5,v7
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vslh v3,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v30,v6,v8
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vslh v2,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v8,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v1,v1,v28
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vslh v9,v30,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v30,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v2,v2,v29
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vaddshs v1,v1,v13
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v9,v9,v30
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v3,v3,v28
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v2,v2,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubuhm v4,v9,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vaddshs v3,v9,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vspltish v9,6
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x6)));
	// vaddshs v21,v2,v4
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsubuhm v22,v2,v4
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vaddshs v20,v1,v3
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubuhm v23,v1,v3
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsrah v21,v21,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v22,v22,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v20,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v23,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrghh v28,v20,v21
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vmrghh v30,v22,v23
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vmrghw v4,v28,v30
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v30.u32), simde_mm_load_si128((simde__m128i*)v28.u32)));
	// vmrglw v6,v28,v30
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v30.u32), simde_mm_load_si128((simde__m128i*)v28.u32)));
	// vspltish v30,8
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_set1_epi16(short(0x8)));
	// vsldoi v5,v4,v4,8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8), 8));
	// vsldoi v7,v6,v6,8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8), 8));
	// vsubuhm v3,v4,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vaddshs v6,v6,v4
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vslh v1,v30,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v26,v5
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v28,v28,v7
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vslh v4,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v8,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v27,v30,v26
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vsubuhm v29,v31,v28
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vsrah v30,v6,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v3,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v4,v4,v1
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v8,v8,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v2,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vsubuhm v5,v26,v29
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vaddshs v4,v4,v30
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v8,v8,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vor128 v1,v69,v69
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)v69.u8));
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
	// vperm v10,v10,v10,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vperm v13,v13,v13,v1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vperm v11,v11,v11,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vperm v12,v12,v12,v1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// stvewx v10,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v10.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v10,r0,r12
	ea = (ctx.r12.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v10.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v13,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v13,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v11,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v11,r9,r12
	ea = (ctx.r9.u32 + ctx.r12.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v12,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v12,r10,r12
	ea = (ctx.r10.u32 + ctx.r12.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824ACE80) {
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
	// li r10,1120
	ctx.r10.s64 = 1120;
	// vspltish v0,7
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x7)));
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// vspltish v1,4
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x4)));
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// slw r7,r4,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r7.u8 & 0x3F));
	// lvx128 v13,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,0
	ctx.r9.s64 = 0;
	// vaddshs v2,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
	// bl 0x824ac918
	ctx.lr = 0x824ACEC4;
	sub_824AC918(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824ADE40) {
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
	ctx.lr = 0x824ADE48;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// li r9,1120
	ctx.r9.s64 = 1120;
	// vspltish v13,15
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0xF)));
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// lwz r30,1164(r6)
	r30.u64 = REX_LOAD_U32(ctx.r6.u32 + 1164);
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v11,5
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x5)));
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vrlh v9,v12,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, result);
	}
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// vspltish v27,7
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_set1_epi16(short(0x7)));
	// lvx128 v10,r6,r9
	ea = (ctx.r6.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,1
	r31.s64 = 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// vaddshs v31,v13,v10
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// li r28,-32
	r28.s64 = -32;
	// vspltish v7,1
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_set1_epi16(short(0x1)));
	// li r29,-16
	r29.s64 = -16;
	// vsubshs v26,v9,v10
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// slw r9,r31,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r8.u8 & 0x3F));
	// li r3,16
	ctx.r3.s64 = 16;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// bne cr6,0x824adff0
	if (!ctx.cr6.eq) goto loc_824ADFF0;
	// lvx128 v60,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lvx128 v61,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v62,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v63,v61,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v62,v60,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvsl v2,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v58,v59,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vmrghb v4,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v3,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v8,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x824ae1c8
	if (!ctx.cr6.gt) goto loc_824AE1C8;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_824ADF14:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vslh v5,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// vslh v2,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// vadduhm v23,v5,v10
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// lvx128 v57,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v29,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v28,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// vperm128 v5,v56,v57,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vadduhm v22,v2,v9
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vor v4,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v3,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vslh v21,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v8,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v6,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v10,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vmrghb v8,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v9,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vmrglb v6,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v17,v30,v1
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v16,v28,v29
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v5,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vadduhm v1,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v2,v23,v17
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v30,v22,v16
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vslh v15,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v29,v0,v25
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsubshs v25,v0,v24
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vadduhm v28,v2,v5
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v24,v30,v1
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vsubshs v23,v8,v15
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vsubshs v22,v6,v14
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vadduhm v21,v28,v31
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v20,v24,v31
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v19,v23,v29
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v18,v22,v25
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v5,v21,v19
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v2,v20,v18
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vsrah v17,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v2,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v17,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v16,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// blt cr6,0x824adf14
	if (ctx.cr6.lt) goto loc_824ADF14;
	// b 0x824ae1c8
	goto loc_824AE1C8;
loc_824ADFF0:
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
	// lvlx128 v54,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v5,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvrx128 v51,r31,r11
	temp.u32 = r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvrx128 v49,r31,r10
	temp.u32 = r31.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvlx128 v48,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v4,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vor128 v8,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v6,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r31,r11
	temp.u32 = r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v1,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v3,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v1,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x824ae1c8
	if (!ctx.cr6.gt) goto loc_824AE1C8;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
loc_824AE074:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v30,v10,v10
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v10,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// vor v6,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vor v29,v9,v9
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// vor v9,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v5,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// lvsl v2,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor128 v41,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v42,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v2,v43,v63,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vslh v24,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v3,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v23,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v20,v63,v42,v3
	simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v19,v0,v2
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v18,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v6,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v2,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v25,v1
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v14,v24,v10
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vmrghb v3,v0,v20
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v23,v22,v23
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v22,v21,v9
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vor v28,v8,v8
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vslh v25,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v5,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v8,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vor v1,v19,v19
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)v19.u8));
	// vadduhm v19,v17,v18
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vslh v21,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v18,v14,v16
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vslh v20,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v24,v25
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v16,v22,v23
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vor128 v4,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// vslh v14,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v0,v21
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vsubshs v21,v0,v20
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vadduhm v22,v18,v19
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v20,v16,v17
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vslh v25,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v30,v14
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vadduhm v16,v29,v8
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v19,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v4,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v15,v2,v25
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsubshs v14,v1,v24
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vadduhm v30,v22,v31
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v24,v18,v19
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vslh v28,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v16,v17
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v29,v20,v31
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v20,v15,v23
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v19,v14,v21
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vsubshs v18,v0,v28
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vsubshs v17,v3,v25
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vadduhm v16,v22,v24
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vadduhm v15,v30,v20
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v14,v29,v19
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v30,v17,v18
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v29,v16,v31
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vsrah v28,v15,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v14,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v24,v29,v30
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// stvx128 v28,r10,r28
	ea = (ctx.r10.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r10,r29
	ea = (ctx.r10.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v23,v24,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v23,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// blt cr6,0x824ae074
	if (ctx.cr6.lt) goto loc_824AE074;
loc_824AE1C8:
	// vspltish v10,8
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x8)));
	// li r11,0
	ctx.r11.s64 = 0;
	// vspltish v9,-1
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// vspltish v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x0)));
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// vslh v2,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// bne cr6,0x824ae278
	if (!ctx.cr6.eq) goto loc_824AE278;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824ae360
	if (!ctx.cr6.gt) goto loc_824AE360;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_824AE1FC:
	// lvx128 v10,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v6,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v9,v10,v40,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 12));
	// vsldoi128 v8,v10,v40,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 14));
	// vsldoi128 v4,v10,v40,6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 10));
	// vsubshs v3,v10,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vslh v1,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v8,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v31,v1
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v24,v30,v9
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v23,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v28,v29
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v21,v24,v25
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vsubshs v20,v0,v23
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vadduhm v19,v21,v22
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v18,v3,v20
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v17,v19,v26
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v16,v17,v18
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vsrah v15,v16,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v39,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vor v5,v5,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// stvewx128 v39,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x824ae1fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AE1FC;
	// b 0x824ae360
	goto loc_824AE360;
loc_824AE278:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824ae360
	if (!ctx.cr6.gt) goto loc_824AE360;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_824AE290:
	// lvx128 v10,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v38,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v8,v9,v10,4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 12));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v6,v10,v38,4
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 12));
	// vsubshs v31,v10,v3
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi v4,v9,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 14));
	// vsldoi128 v3,v10,v38,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 14));
	// vsubshs v30,v9,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v28,v9,v10,6
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 10));
	// vslh v25,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v24,v10,v38,6
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 10));
	// vslh v23,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v23,v29
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v16,v22,v8
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v15,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v10,v21,v25
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v9,v20,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vslh v19,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v4,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v3,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v3,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vslh v6,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v4,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v1,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vslh v8,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v29,v9,v10
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubshs v25,v0,v6
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vadduhm v24,v3,v4
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsubshs v28,v0,v8
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vadduhm v23,v29,v1
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v21,v31,v25
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v20,v24,v26
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v22,v30,v28
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v19,v23,v26
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v18,v20,v22
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v17,v19,v21
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vsrah v16,v18,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v17,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v37,v5,v16
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// vpkshus128 v36,v16,v15
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vor128 v5,v37,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// stvx128 v36,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x824ae290
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AE290;
loc_824AE360:
	// vand v13,v5,v2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vcmpgtuh. v12,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), 0xFFFF);
	// mfocrf r11,2
	ctx.r11.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x822d4ed8
	return;
}

