#include "hydrothunder_funcs.13.h"

DEFINE_REX_FUNC(sub_82120B20) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82120B28;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82120b50
	if (!ctx.cr6.lt) goto loc_82120B50;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26956
	ctx.r3.s64 = ctx.r11.s64 + -26956;
	// bl 0x822f6058
	ctx.lr = 0x82120B50;
	sub_822F6058(ctx, base);
loc_82120B50:
	// subf r30,r28,r11
	r30.u64 = ctx.r11.u64 - r28.u64;
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r30.u32, ctx.xer);
	// bge cr6,0x82120b60
	if (!ctx.cr6.lt) goto loc_82120B60;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
loc_82120B60:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x82120b8c
	if (!ctx.cr6.eq) goto loc_82120B8C;
	// li r5,-1
	ctx.r5.s64 = -1;
	// add r4,r30,r28
	ctx.r4.u64 = r30.u64 + r28.u64;
	// bl 0x82120dc8
	ctx.lr = 0x82120B78;
	sub_82120DC8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120dc8
	ctx.lr = 0x82120B88;
	sub_82120DC8(ctx, base);
	// b 0x82120bf8
	goto loc_82120BF8;
loc_82120B8C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82120ea0
	ctx.lr = 0x82120B98;
	sub_82120EA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82120bf8
	if (ctx.cr0.eq) goto loc_82120BF8;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82120bb0
	if (ctx.cr6.lt) goto loc_82120BB0;
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_82120BB0:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82120bc4
	if (ctx.cr6.lt) goto loc_82120BC4;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x82120bc8
	goto loc_82120BC8;
loc_82120BC4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82120BC8:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r29,r28
	ctx.r4.u64 = r29.u64 + r28.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82120BD4;
	sub_826A1E70(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82120bec
	if (ctx.cr6.lt) goto loc_82120BEC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x82120bf0
	goto loc_82120BF0;
loc_82120BEC:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_82120BF0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r30
	REX_STORE_U8(ctx.r11.u32 + r30.u32, ctx.r10.u8);
loc_82120BF8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8212CFD8) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822f6280
	ctx.lr = 0x8212CFF4;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8212d054
	if (ctx.cr0.eq) goto loc_8212D054;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-23356
	ctx.r11.s64 = ctx.r11.s64 + -23356;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// bl 0x822f6280
	ctx.lr = 0x8212D018;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8212d03c
	if (ctx.cr0.eq) goto loc_8212D03C;
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stb r30,16(r31)
	REX_STORE_U8(r31.u32 + 16, r30.u8);
	// b 0x8212d058
	goto loc_8212D058;
loc_8212D03C:
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
	ctx.lr = 0x8212D054;
	sub_82120018(ctx, base);
loc_8212D054:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8212D058:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r11,r11,6052
	ctx.r11.s64 = ctx.r11.s64 + 6052;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_82132748) {
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
	// addi r11,r11,-20752
	ctx.r11.s64 = ctx.r11.s64 + -20752;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82132774
	if (ctx.cr0.eq) goto loc_82132774;
	// bl 0x8269ce98
	ctx.lr = 0x82132774;
	sub_8269CE98(ctx, base);
loc_82132774:
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

DEFINE_REX_FUNC(sub_82134490) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822c9a30
	sub_822C9A30(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82134950) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,10548(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 10548);
	// rlwimi r9,r10,2,29,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x4) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r9,10548(r11)
	REX_STORE_U32(ctx.r11.u32 + 10548, ctx.r9.u32);
	// ld r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// std r10,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82135FB8) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// addi r31,r3,28
	r31.s64 = ctx.r3.s64 + 28;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82135ff0
	if (ctx.cr6.gt) goto loc_82135FF0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-21824
	ctx.r4.s64 = ctx.r11.s64 + -21824;
	// addi r3,r10,-21704
	ctx.r3.s64 = ctx.r10.s64 + -21704;
	// li r5,88
	ctx.r5.s64 = 88;
	// bl 0x821231d0
	ctx.lr = 0x82135FF0;
	sub_821231D0(ctx, base);
loc_82135FF0:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,-64
	ctx.r3.s64 = ctx.r11.s64 + -64;
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

DEFINE_REX_FUNC(sub_82139C28) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lfs f12,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f0,288(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r6,-27232
	ctx.r6.s64 = ctx.r6.s64 + -27232;
	// fadds f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lfs f11,292(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 292);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,-16
	ctx.r5.s64 = ctx.r1.s64 + -16;
	// lfs f10,180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lvx128 v61,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r7,-27248
	ctx.r7.s64 = ctx.r7.s64 + -27248;
	// addi r11,r11,-27216
	ctx.r11.s64 = ctx.r11.s64 + -27216;
	// lvx128 v62,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// fabs f13,f9
	ctx.f13.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// lvx128 v60,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
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
	// fmuls f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// rlwinm r6,r11,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// rlwinm r11,r11,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// lfsx f11,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fctidz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fnmsubs f13,f12,f10,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f13.f64)));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f0,f11,f0,f13
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v59,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vspltw128 v63,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vmulfp128 v59,v59,v63
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vspltw128 v58,v59,3
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x0));
	// vmsum4fp128 v62,v59,v62
	simde_mm_store_ps(ctx.v62.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// vmulfp128 v63,v58,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// vmulfp128 v62,v59,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v63,v62,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmsum4fp128 v62,v62,v61
	simde_mm_store_ps(ctx.v62.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v61.f32), 0xFF));
	// vmsum4fp128 v63,v63,v60
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v60.f32), 0xFF));
	// stvx128 v62,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// stvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,-16(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214A998) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,20(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,68(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 68);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8214a9d4
	if (!ctx.cr6.gt) goto loc_8214A9D4;
	// li r7,72
	ctx.r7.s64 = 72;
loc_8214A9B8:
	// lwzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmplw cr6,r3,r6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8214a9b8
	if (ctx.cr6.lt) goto loc_8214A9B8;
loc_8214A9D4:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f11,52(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,64(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r10,28(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,104(r9)
	REX_STORE_U32(ctx.r9.u32 + 104, ctx.r10.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8214FCC8) {
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
	ctx.lr = 0x8214FCD0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,4(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r31,4(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 4);
	// b 0x8214fd0c
	goto loc_8214FD0C;
loc_8214FCE8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x8214FCF4;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8214fd04
	if (!ctx.cr0.lt) goto loc_8214FD04;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x8214fd0c
	goto loc_8214FD0C;
loc_8214FD04:
	// mr r27,r31
	r27.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8214FD0C:
	// lbz r11,45(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 45);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8214fce8
	if (ctx.cr0.eq) goto loc_8214FCE8;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8214fd3c
	if (ctx.cr6.eq) goto loc_8214FD3C;
	// addi r4,r27,12
	ctx.r4.s64 = r27.s64 + 12;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120780
	ctx.lr = 0x8214FD34;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8214fdc4
	if (!ctx.cr0.lt) goto loc_8214FDC4;
loc_8214FD3C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120d70
	ctx.lr = 0x8214FD48;
	sub_82120D70(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r29,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r29.u32);
	// bl 0x822f6280
	ctx.lr = 0x8214FD58;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8214fdd0
	if (ctx.cr0.eq) goto loc_8214FDD0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addic. r28,r31,12
	ctx.xer.ca = r31.u32 > 4294967283;
	r28.s64 = r31.s64 + 12;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stb r29,44(r31)
	REX_STORE_U8(r31.u32 + 44, r29.u8);
	// stb r29,45(r31)
	REX_STORE_U8(r31.u32 + 45, r29.u8);
	// beq 0x8214fd9c
	if (ctx.cr0.eq) goto loc_8214FD9C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120d70
	ctx.lr = 0x8214FD94;
	sub_82120D70(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// stw r11,28(r28)
	REX_STORE_U32(r28.u32 + 28, ctx.r11.u32);
loc_8214FD9C:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82180eb0
	ctx.lr = 0x8214FDB0;
	sub_82180EB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82120ac0
	ctx.lr = 0x8214FDC4;
	sub_82120AC0(ctx, base);
loc_8214FDC4:
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
loc_8214FDD0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x8214FDE8;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82157008) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lbz r11,4724(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 4724);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r3,r3,4664
	ctx.r3.s64 = ctx.r3.s64 + 4664;
	// b 0x823eea60
	sub_823EEA60(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82157DC8) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c80
	ctx.lr = 0x82157DD0;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r4,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r4.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// std r5,400(r1)
	REX_STORE_U64(ctx.r1.u32 + 400, ctx.r5.u64);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// stw r6,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r6.u32);
	// bl 0x8215f0f0
	ctx.lr = 0x82157DFC;
	sub_8215F0F0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r24,r11,-7936
	r24.s64 = ctx.r11.s64 + -7936;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r24,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r24.u32);
	// lwz r11,704(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 704);
	// lwz r25,0(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// bl 0x8215f670
	ctx.lr = 0x82157E20;
	sub_8215F670(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215fc78
	ctx.lr = 0x82157E28;
	sub_8215FC78(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8215dc10
	ctx.lr = 0x82157E34;
	sub_8215DC10(ctx, base);
	// li r16,0
	r16.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// stw r16,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r16.u32);
	// ble cr6,0x821583dc
	if (!ctx.cr6.gt) goto loc_821583DC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r16,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r16.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r14,r11,-25252
	r14.s64 = ctx.r11.s64 + -25252;
	// addi r11,r10,-25320
	ctx.r11.s64 = ctx.r10.s64 + -25320;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r14,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r14.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// addi r10,r9,-17164
	ctx.r10.s64 = ctx.r9.s64 + -17164;
	// addi r9,r7,-17296
	ctx.r9.s64 = ctx.r7.s64 + -17296;
	// addi r11,r6,-7852
	ctx.r11.s64 = ctx.r6.s64 + -7852;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stw r9,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// addi r10,r5,-7860
	ctx.r10.s64 = ctx.r5.s64 + -7860;
	// addi r9,r4,-7872
	ctx.r9.s64 = ctx.r4.s64 + -7872;
	// addi r11,r3,-7880
	ctx.r11.s64 = ctx.r3.s64 + -7880;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lis r31,-32243
	r31.s64 = -2113077248;
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// lis r30,-32243
	r30.s64 = -2113077248;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lis r29,-32243
	r29.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r28,-32243
	r28.s64 = -2113077248;
	// addi r10,r31,-7904
	ctx.r10.s64 = r31.s64 + -7904;
	// addi r9,r30,-8396
	ctx.r9.s64 = r30.s64 + -8396;
	// addi r11,r29,-7920
	ctx.r11.s64 = r29.s64 + -7920;
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r22,1
	r22.s64 = 1;
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r17,r8,-7928
	r17.s64 = ctx.r8.s64 + -7928;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r18,r28,-16680
	r18.s64 = r28.s64 + -16680;
	// b 0x82157ee8
	goto loc_82157EE8;
loc_82157EE4:
	// lwz r24,104(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
loc_82157EE8:
	// lwz r11,704(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 704);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8215f670
	ctx.lr = 0x82157F04;
	sub_8215F670(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8215f200
	ctx.lr = 0x82157F0C;
	sub_8215F200(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r31,8(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// lwz r28,4(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x8215f670
	ctx.lr = 0x82157F24;
	sub_8215F670(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82157F2C;
	sub_8215F0F0(ctx, base);
	// stw r29,8(r24)
	REX_STORE_U32(r24.u32 + 8, r29.u32);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// stw r22,0(r24)
	REX_STORE_U32(r24.u32 + 0, r22.u32);
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x8215f670
	ctx.lr = 0x82157F40;
	sub_8215F670(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82157F48;
	sub_8215F0F0(ctx, base);
	// stw r28,8(r29)
	REX_STORE_U32(r29.u32 + 8, r28.u32);
	// stw r22,0(r29)
	REX_STORE_U32(r29.u32 + 0, r22.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r16,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r16.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r16,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r16.u32);
	// stw r16,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r16.u32);
	// bl 0x82158750
	ctx.lr = 0x82157F68;
	sub_82158750(ctx, base);
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// lwz r15,160(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// ble cr6,0x82157f8c
	if (!ctx.cr6.gt) goto loc_82157F8C;
	// addi r10,r15,-4
	ctx.r10.s64 = r15.s64 + -4;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_82157F80:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82157f80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82157F80;
loc_82157F8C:
	// lwz r4,164(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// subf r11,r15,r4
	ctx.r11.u64 = ctx.r4.u64 - r15.u64;
	// srawi r5,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// bl 0x82158960
	ctx.lr = 0x82157FA4;
	sub_82158960(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r16,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r16.u32);
	// mr r21,r16
	r21.u64 = r16.u64;
	// bl 0x8269d1d0
	ctx.lr = 0x82157FB8;
	sub_8269D1D0(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x82157FC4;
	sub_8269D1B8(ctx, base);
	// li r28,8
	r28.s64 = 8;
	// stw r19,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r19.u32);
	// li r24,-1
	r24.s64 = -1;
	// stw r28,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r28.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x821580bc
	if (!ctx.cr6.gt) goto loc_821580BC;
	// mr r25,r15
	r25.u64 = r15.u64;
loc_82157FE0:
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mulli r10,r10,48
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(48));
	// add r26,r10,r11
	r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8215809c
	if (!ctx.cr6.gt) goto loc_8215809C;
	// addi r27,r21,1
	r27.s64 = r21.s64 + 1;
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(r27.s32, r28.s32, ctx.xer);
	// ble cr6,0x82158054
	if (!ctx.cr6.gt) goto loc_82158054;
	// srawi r11,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r11.s64 = r28.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r29,r11,r28
	r29.u64 = ctx.r11.u64 + r28.u64;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// bgt cr6,0x82158020
	if (ctx.cr6.gt) goto loc_82158020;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_82158020:
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// ble cr6,0x82158054
	if (!ctx.cr6.gt) goto loc_82158054;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269d1d0
	ctx.lr = 0x82158034;
	sub_8269D1D0(ctx, base);
	// rlwinm r5,r21,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82158044;
	sub_826A1E70(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8269d1b8
	ctx.lr = 0x8215804C;
	sub_8269D1B8(ctx, base);
	// mr r19,r28
	r19.u64 = r28.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
loc_82158054:
	// addic. r29,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r29.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// mr r21,r27
	r21.u64 = r27.u64;
	// blt 0x82158068
	if (ctx.cr0.lt) goto loc_82158068;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// blt cr6,0x82158078
	if (ctx.cr6.lt) goto loc_82158078;
loc_82158068:
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r5,111
	ctx.r5.s64 = 111;
	// bl 0x821231d0
	ctx.lr = 0x82158078;
	sub_821231D0(ctx, base);
loc_82158078:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r10,400(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 400);
	// lwz r27,84(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r23,412(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// stwx r26,r11,r19
	REX_STORE_U32(ctx.r11.u32 + r19.u32, r26.u32);
	// ld r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U64(r26.u32 + 0);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x8215809c
	if (!ctx.cr6.eq) goto loc_8215809C;
	// mr r24,r29
	r24.u64 = r29.u64;
loc_8215809C:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// bne 0x82157fe0
	if (!ctx.cr0.eq) goto loc_82157FE0;
	// lwz r25,100(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r26,396(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// stw r21,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r21.u32);
	// stw r28,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r28.u32);
	// stw r19,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r19.u32);
loc_821580BC:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x82158118
	if (!ctx.cr6.gt) goto loc_82158118;
	// cmpw cr6,r23,r21
	ctx.cr6.compare<int32_t>(r23.s32, r21.s32, ctx.xer);
	// bge cr6,0x82158118
	if (!ctx.cr6.lt) goto loc_82158118;
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(r24.s32, -1, ctx.xer);
	// beq cr6,0x821580f8
	if (ctx.cr6.eq) goto loc_821580F8;
	// srawi r11,r23,1
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x1) != 0);
	ctx.r11.s64 = r23.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// subf. r5,r11,r24
	ctx.r5.u64 = r24.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x821580f8
	if (!ctx.cr0.gt) goto loc_821580F8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82158878
	ctx.lr = 0x821580F0;
	sub_82158878(ctx, base);
	// lwz r21,148(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r19,144(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_821580F8:
	// cmpw cr6,r23,r21
	ctx.cr6.compare<int32_t>(r23.s32, r21.s32, ctx.xer);
	// bge cr6,0x82158118
	if (!ctx.cr6.lt) goto loc_82158118;
	// subf r5,r23,r21
	ctx.r5.u64 = r21.u64 - r23.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82158878
	ctx.lr = 0x82158110;
	sub_82158878(ctx, base);
	// lwz r21,148(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r19,144(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_82158118:
	// mr r24,r16
	r24.u64 = r16.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// ble cr6,0x82158398
	if (!ctx.cr6.gt) goto loc_82158398;
	// mr r23,r19
	r23.u64 = r19.u64;
loc_82158128:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt cr6,0x82158138
	if (ctx.cr6.lt) goto loc_82158138;
	// cmpw cr6,r24,r21
	ctx.cr6.compare<int32_t>(r24.s32, r21.s32, ctx.xer);
	// blt cr6,0x82158148
	if (ctx.cr6.lt) goto loc_82158148;
loc_82158138:
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r5,111
	ctx.r5.s64 = 111;
	// bl 0x821231d0
	ctx.lr = 0x82158148;
	sub_821231D0(ctx, base);
loc_82158148:
	// lwz r29,0(r23)
	r29.u64 = REX_LOAD_U32(r23.u32 + 0);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82158168
	if (!ctx.cr6.eq) goto loc_82158168;
	// li r5,1514
	ctx.r5.s64 = 1514;
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x821231d0
	ctx.lr = 0x82158168;
	sub_821231D0(ctx, base);
loc_82158168:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r4,120(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8215f670
	ctx.lr = 0x82158174;
	sub_8215F670(ctx, base);
	// bl 0x8215f270
	ctx.lr = 0x82158178;
	sub_8215F270(ctx, base);
	// lwz r4,124(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// ld r28,0(r29)
	r28.u64 = REX_LOAD_U64(r29.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f670
	ctx.lr = 0x82158188;
	sub_8215F670(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r30,7
	r30.s64 = 7;
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// std r28,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r28.u64);
	// lwz r28,8(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 8);
	// bl 0x8215f670
	ctx.lr = 0x821581A8;
	sub_8215F670(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821581B0;
	sub_8215F0F0(ctx, base);
	// stw r28,8(r27)
	REX_STORE_U32(r27.u32 + 8, r28.u32);
	// stw r22,0(r27)
	REX_STORE_U32(r27.u32 + 0, r22.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// ld r28,16(r29)
	r28.u64 = REX_LOAD_U64(r29.u32 + 16);
	// bl 0x8215f670
	ctx.lr = 0x821581C8;
	sub_8215F670(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r28,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r28.u64);
	// lwz r4,136(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x8215f670
	ctx.lr = 0x821581E0;
	sub_8215F670(ctx, base);
	// addi r4,r29,24
	ctx.r4.s64 = r29.s64 + 24;
	// bl 0x8215fbf8
	ctx.lr = 0x821581E8;
	sub_8215FBF8(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r26,40(r29)
	r26.u64 = REX_LOAD_U32(r29.u32 + 40);
	// bl 0x8215f670
	ctx.lr = 0x821581F8;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215fc78
	ctx.lr = 0x82158200;
	sub_8215FC78(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x8215dc10
	ctx.lr = 0x8215820C;
	sub_8215DC10(ctx, base);
	// mr r27,r16
	r27.u64 = r16.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x82158378
	if (!ctx.cr6.gt) goto loc_82158378;
	// mr r25,r16
	r25.u64 = r16.u64;
loc_8215821C:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x82158228;
	sub_8215F670(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f200
	ctx.lr = 0x82158230;
	sub_8215F200(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x82158244;
	sub_82120AC0(ctx, base);
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 44);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r30,r11,r25
	r30.u64 = ctx.r11.u64 + r25.u64;
	// lhzx r15,r11,r25
	r15.u64 = REX_LOAD_U16(ctx.r11.u32 + r25.u32);
	// bl 0x8215f670
	ctx.lr = 0x8215825C;
	sub_8215F670(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82158264;
	sub_8215F0F0(ctx, base);
	// stw r15,8(r14)
	REX_STORE_U32(r14.u32 + 8, r15.u32);
	// stw r22,0(r14)
	REX_STORE_U32(r14.u32 + 0, r22.u32);
	// lbz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82158330
	if (ctx.cr6.lt) goto loc_82158330;
	// beq cr6,0x82158330
	if (ctx.cr6.eq) goto loc_82158330;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82158310
	if (ctx.cr6.lt) goto loc_82158310;
	// beq cr6,0x821582e4
	if (ctx.cr6.eq) goto loc_821582E4;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x8215829c
	if (ctx.cr6.lt) goto loc_8215829C;
	// bne cr6,0x82158350
	if (!ctx.cr6.eq) goto loc_82158350;
	// lfs f31,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	f31.f64 = double(temp.f32);
	// b 0x821582ec
	goto loc_821582EC;
loc_8215829C:
	// lwz r30,20(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lhz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U16(r30.u32 + 0);
	// b 0x821582b4
	goto loc_821582B4;
loc_821582A8:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x82170f90
	ctx.lr = 0x821582B0;
	sub_82170F90(ctx, base);
	// lhzu r3,2(r30)
	ea = 2 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
loc_821582B4:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821582a8
	if (!ctx.cr0.eq) goto loc_821582A8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8215f670
	ctx.lr = 0x821582C8;
	sub_8215F670(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x821582dc
	if (!ctx.cr6.lt) goto loc_821582DC;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_821582DC:
	// bl 0x8215fbf8
	ctx.lr = 0x821582E0;
	sub_8215FBF8(ctx, base);
	// b 0x82158350
	goto loc_82158350;
loc_821582E4:
	// lfd f0,16(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r30.u32 + 16);
	// frsp f31,f0
	f31.f64 = double(float(ctx.f0.f64));
loc_821582EC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8215f670
	ctx.lr = 0x821582F8;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82158300;
	sub_8215F0F0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stfs f31,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x82158350
	goto loc_82158350;
loc_82158310:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// ld r30,16(r30)
	r30.u64 = REX_LOAD_U64(r30.u32 + 16);
	// bl 0x8215f670
	ctx.lr = 0x82158320;
	sub_8215F670(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// std r30,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, r30.u64);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82158350
	goto loc_82158350;
loc_82158330:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r30,16(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8215f670
	ctx.lr = 0x82158340;
	sub_8215F670(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82158348;
	sub_8215F0F0(ctx, base);
	// stw r22,0(r28)
	REX_STORE_U32(r28.u32 + 0, r22.u32);
	// stw r30,8(r28)
	REX_STORE_U32(r28.u32 + 8, r30.u32);
loc_82158350:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x82158360;
	sub_82120AC0(ctx, base);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r25,r25,24
	r25.s64 = r25.s64 + 24;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(r27.s32, r26.s32, ctx.xer);
	// blt cr6,0x8215821c
	if (ctx.cr6.lt) goto loc_8215821C;
	// lwz r14,140(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r15,160(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
loc_82158378:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// cmpw cr6,r24,r21
	ctx.cr6.compare<int32_t>(r24.s32, r21.s32, ctx.xer);
	// blt cr6,0x82158128
	if (ctx.cr6.lt) goto loc_82158128;
	// lwz r27,84(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r23,412(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// lwz r25,100(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r26,396(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
loc_82158398:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8269d1b8
	ctx.lr = 0x821583A0;
	sub_8269D1B8(ctx, base);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x821583b0
	if (ctx.cr6.eq) goto loc_821583B0;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821583B0;
	sub_8269CE98(ctx, base);
loc_821583B0:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r16,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r16.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r16,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r16.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r25.s32, ctx.xer);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r16,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r16.u32);
	// blt cr6,0x82157ee4
	if (ctx.cr6.lt) goto loc_82157EE4;
loc_821583DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82189E88) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82189ea8
	if (!ctx.cr6.eq) goto loc_82189EA8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82189ef4
	goto loc_82189EF4;
loc_82189EA8:
	// lwz r10,164(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// lfd f0,136(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + 136);
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// fadd f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 + ctx.f0.f64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfd f0,136(r3)
	REX_STORE_U64(ctx.r3.u32 + 136, ctx.f0.u64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,164(r3)
	REX_STORE_U32(ctx.r3.u32 + 164, ctx.r10.u32);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// stw r11,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// bl 0x8218a6c0
	ctx.lr = 0x82189EF0;
	sub_8218A6C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82189EF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218D7E0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,108(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,112(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 112);
	// bne cr6,0x8218d800
	if (!ctx.cr6.eq) goto loc_8218D800;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8218d7fc
	if (!ctx.cr6.eq) goto loc_8218D7FC;
	// b 0x8218dd00
	sub_8218DD00(ctx, base);
	return;
loc_8218D7FC:
	// b 0x8218de70
	sub_8218DE70(ctx, base);
	return;
loc_8218D800:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8218d80c
	if (!ctx.cr6.eq) goto loc_8218D80C;
	// b 0x8218e000
	sub_8218E000(ctx, base);
	return;
loc_8218D80C:
	// b 0x8218e150
	sub_8218E150(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8218EE78) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15580
	ctx.r3.s64 = ctx.r11.s64 + -15580;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218EF10) {
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
	ctx.lr = 0x8218EF18;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,6096(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 6096);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82135fb8
	ctx.lr = 0x8218EF38;
	sub_82135FB8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8218EF48:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8218ef48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218EF48;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f30,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f30.f64 = double(temp.f32);
	// stfs f30,104(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x8216d040
	ctx.lr = 0x8218EF7C;
	sub_8216D040(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f1,96(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82135730
	ctx.lr = 0x8218EF88;
	sub_82135730(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,100(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,16592
	r29.s64 = ctx.r11.s64 + 16592;
	// lfs f13,104(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f31,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	f31.f64 = double(temp.f32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821884b0
	ctx.lr = 0x8218EFB4;
	sub_821884B0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x82139870
	ctx.lr = 0x8218EFC0;
	sub_82139870(ctx, base);
	// li r11,64
	ctx.r11.s64 = 64;
	// li r10,255
	ctx.r10.s64 = 255;
	// lfs f0,160(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// li r9,128
	ctx.r9.s64 = 128;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stb r10,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stb r9,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82136970
	ctx.lr = 0x8218F004;
	sub_82136970(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82135f08
	ctx.lr = 0x8218F00C;
	sub_82135F08(ctx, base);
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

DEFINE_REX_FUNC(sub_82195D48) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-17264
	ctx.r4.s64 = ctx.r11.s64 + -17264;
	// bl 0x8215f338
	ctx.lr = 0x82195D74;
	sub_8215F338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x8219b7d0
	ctx.lr = 0x82195D80;
	sub_8219B7D0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-31560
	ctx.r4.s64 = ctx.r11.s64 + -31560;
	// bl 0x8215f338
	ctx.lr = 0x82195D90;
	sub_8215F338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82195f90
	ctx.lr = 0x82195D9C;
	sub_82195F90(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82195DB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_82197848) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8215fb00
	ctx.lr = 0x82197870;
	sub_8215FB00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821978e8
	if (ctx.cr0.eq) goto loc_821978E8;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821978e8
	if (ctx.cr6.eq) goto loc_821978E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821978A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821978C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821978e8
	if (ctx.cr0.eq) goto loc_821978E8;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821978e8
	if (ctx.cr6.eq) goto loc_821978E8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821978E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821978E8:
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

DEFINE_REX_FUNC(sub_8219E070) {
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
	// lwz r4,104(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8219e0b4
	if (ctx.cr6.eq) goto loc_8219E0B4;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219E0AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
loc_8219E0B4:
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// bl 0x821883a0
	ctx.lr = 0x8219E0C0;
	sub_821883A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219e0d8
	if (ctx.cr0.eq) goto loc_8219E0D8;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// bl 0x82154c08
	ctx.lr = 0x8219E0D4;
	sub_82154C08(ctx, base);
	// stw r3,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r3.u32);
loc_8219E0D8:
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

DEFINE_REX_FUNC(sub_821A2600) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A262C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a268c
	if (ctx.cr0.eq) goto loc_821A268C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A2648;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x823ee6a0
	ctx.lr = 0x821A2654;
	sub_823EE6A0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_821A265C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821a265c
	if (!ctx.cr6.eq) goto loc_821A265C;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82120c08
	ctx.lr = 0x821A2684;
	sub_82120C08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821a2690
	goto loc_821A2690;
loc_821A268C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A2690:
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

DEFINE_REX_FUNC(sub_821A6640) {
	REX_FUNC_PROLOGUE();
	// li r3,19
	ctx.r3.s64 = 19;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A66C8) {
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
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821A66E0;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821a670c
	if (ctx.cr0.eq) goto loc_821A670C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125dc8
	ctx.lr = 0x821A66F0;
	sub_82125DC8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-25276
	ctx.r11.s64 = ctx.r11.s64 + -25276;
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x821a6710
	goto loc_821A6710;
loc_821A670C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A6710:
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

DEFINE_REX_FUNC(sub_821A7610) {
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
	ctx.lr = 0x821A7618;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r28,6072(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 6072);
	// bl 0x8215ef60
	ctx.lr = 0x821A762C;
	sub_8215EF60(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r11,18800
	r30.s64 = ctx.r11.s64 + 18800;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x821A763C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x821A7640;
	sub_8215FA30(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A7658;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// bne 0x821a766c
	if (!ctx.cr0.eq) goto loc_821A766C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821a76b8
	goto loc_821A76B8;
loc_821A766C:
	// bl 0x822f6338
	ctx.lr = 0x821A7670;
	sub_822F6338(ctx, base);
	// stw r3,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,6072(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 6072);
	// bl 0x8215ef60
	ctx.lr = 0x821A7680;
	sub_8215EF60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x821A7688;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x821A768C;
	sub_8215FA30(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,100(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 100);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,96(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A76AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_821A76B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821AC648) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15248
	ctx.r3.s64 = ctx.r11.s64 + -15248;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AC7B8) {
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
	ctx.lr = 0x821AC7C0;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r29,r30
	r29.u64 = r30.u64;
	// bl 0x82178268
	ctx.lr = 0x821AC7DC;
	sub_82178268(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,31396
	ctx.r11.s64 = ctx.r11.s64 + 31396;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// addi r11,r9,-23844
	ctx.r11.s64 = ctx.r9.s64 + -23844;
	// addi r10,r10,-23884
	ctx.r10.s64 = ctx.r10.s64 + -23884;
	// stb r30,124(r31)
	REX_STORE_U8(r31.u32 + 124, r30.u8);
	// li r21,1
	r21.s64 = 1;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// stb r30,125(r31)
	REX_STORE_U8(r31.u32 + 125, r30.u8);
	// stb r30,126(r31)
	REX_STORE_U8(r31.u32 + 126, r30.u8);
	// addi r11,r31,140
	ctx.r11.s64 = r31.s64 + 140;
	// stb r30,127(r31)
	REX_STORE_U8(r31.u32 + 127, r30.u8);
	// addi r28,r31,124
	r28.s64 = r31.s64 + 124;
	// stb r21,128(r31)
	REX_STORE_U8(r31.u32 + 128, r21.u8);
	// addi r26,r31,125
	r26.s64 = r31.s64 + 125;
	// stb r30,129(r31)
	REX_STORE_U8(r31.u32 + 129, r30.u8);
	// addi r25,r31,126
	r25.s64 = r31.s64 + 126;
	// stw r30,132(r31)
	REX_STORE_U32(r31.u32 + 132, r30.u32);
	// addi r24,r31,127
	r24.s64 = r31.s64 + 127;
	// stb r30,136(r31)
	REX_STORE_U8(r31.u32 + 136, r30.u8);
	// addi r23,r31,128
	r23.s64 = r31.s64 + 128;
	// stb r30,137(r31)
	REX_STORE_U8(r31.u32 + 137, r30.u8);
	// addi r22,r31,129
	r22.s64 = r31.s64 + 129;
	// stw r30,140(r31)
	REX_STORE_U32(r31.u32 + 140, r30.u32);
	// stw r30,144(r31)
	REX_STORE_U32(r31.u32 + 144, r30.u32);
	// stw r30,148(r31)
	REX_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x821AC85C;
	sub_8269D1D0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x821AC868;
	sub_8269D1B8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r27,140(r31)
	REX_STORE_U32(r31.u32 + 140, r27.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r10,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stb r30,160(r31)
	REX_STORE_U8(r31.u32 + 160, r30.u8);
	// addi r10,r9,-10952
	ctx.r10.s64 = ctx.r9.s64 + -10952;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,168(r31)
	REX_STORE_U32(r31.u32 + 168, r30.u32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// stw r30,172(r31)
	REX_STORE_U32(r31.u32 + 172, r30.u32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
	// bl 0x822f6280
	ctx.lr = 0x821AC8AC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ac8d4
	if (ctx.cr0.eq) goto loc_821AC8D4;
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
	// b 0x821ac8d8
	goto loc_821AC8D8;
loc_821AC8D4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_821AC8D8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r5,r11,23304
	ctx.r5.s64 = ctx.r11.s64 + 23304;
	// bl 0x8216be80
	ctx.lr = 0x821AC8E8;
	sub_8216BE80(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x821AC8F0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ac910
	if (ctx.cr0.eq) goto loc_821AC910;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x821AC908;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821ac914
	goto loc_821AC914;
loc_821AC910:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_821AC914:
	// stw r4,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x821AC920;
	sub_821D3988(ctx, base);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821AC928;
	sub_822F6280(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x821ac958
	if (ctx.cr0.eq) goto loc_821AC958;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-24032
	ctx.r4.s64 = ctx.r11.s64 + -24032;
	// bl 0x82120600
	ctx.lr = 0x821AC940;
	sub_82120600(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r29,r21
	r29.u64 = r21.u64;
	// bl 0x82191600
	ctx.lr = 0x821AC954;
	sub_82191600(ctx, base);
	// b 0x821ac95c
	goto loc_821AC95C;
loc_821AC958:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_821AC95C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r27,r31,80
	r27.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x821AC970;
	sub_82145710(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ac98c
	if (ctx.cr0.eq) goto loc_821AC98C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// rlwinm r29,r29,0,0,30
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821AC98C;
	sub_82120AC0(ctx, base);
loc_821AC98C:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821AC994;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x821ac9c4
	if (ctx.cr0.eq) goto loc_821AC9C4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,-24012
	ctx.r4.s64 = ctx.r11.s64 + -24012;
	// bl 0x82120600
	ctx.lr = 0x821AC9AC;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r29,r29,2
	r29.u64 = r29.u64 | 2;
	// bl 0x82191600
	ctx.lr = 0x821AC9C0;
	sub_82191600(ctx, base);
	// b 0x821ac9c8
	goto loc_821AC9C8;
loc_821AC9C4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_821AC9C8:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x821AC9D8;
	sub_82145710(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ac9f4
	if (ctx.cr0.eq) goto loc_821AC9F4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// rlwinm r29,r29,0,31,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x821AC9F4;
	sub_82120AC0(ctx, base);
loc_821AC9F4:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821AC9FC;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x821aca2c
	if (ctx.cr0.eq) goto loc_821ACA2C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-24000
	ctx.r4.s64 = ctx.r11.s64 + -24000;
	// bl 0x82120600
	ctx.lr = 0x821ACA14;
	sub_82120600(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r29,r29,4
	r29.u64 = r29.u64 | 4;
	// bl 0x82191600
	ctx.lr = 0x821ACA28;
	sub_82191600(ctx, base);
	// b 0x821aca30
	goto loc_821ACA30;
loc_821ACA2C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_821ACA30:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x821ACA40;
	sub_82145710(ctx, base);
	// rlwinm. r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821aca5c
	if (ctx.cr0.eq) goto loc_821ACA5C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r29,r29,0,30,28
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x821ACA5C;
	sub_82120AC0(ctx, base);
loc_821ACA5C:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821ACA64;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x821aca94
	if (ctx.cr0.eq) goto loc_821ACA94;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,-23976
	ctx.r4.s64 = ctx.r11.s64 + -23976;
	// bl 0x82120600
	ctx.lr = 0x821ACA7C;
	sub_82120600(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r29,r29,8
	r29.u64 = r29.u64 | 8;
	// bl 0x82191600
	ctx.lr = 0x821ACA90;
	sub_82191600(ctx, base);
	// b 0x821aca98
	goto loc_821ACA98;
loc_821ACA94:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_821ACA98:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x821ACAA8;
	sub_82145710(ctx, base);
	// rlwinm. r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821acac4
	if (ctx.cr0.eq) goto loc_821ACAC4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// rlwinm r29,r29,0,29,27
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x821ACAC4;
	sub_82120AC0(ctx, base);
loc_821ACAC4:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821ACACC;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x821acafc
	if (ctx.cr0.eq) goto loc_821ACAFC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-23968
	ctx.r4.s64 = ctx.r11.s64 + -23968;
	// bl 0x82120600
	ctx.lr = 0x821ACAE4;
	sub_82120600(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r29,r29,16
	r29.u64 = r29.u64 | 16;
	// bl 0x82191600
	ctx.lr = 0x821ACAF8;
	sub_82191600(ctx, base);
	// b 0x821acb00
	goto loc_821ACB00;
loc_821ACAFC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_821ACB00:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x821ACB10;
	sub_82145710(ctx, base);
	// rlwinm. r11,r29,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821acb2c
	if (ctx.cr0.eq) goto loc_821ACB2C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r29,r29,0,28,26
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x821ACB2C;
	sub_82120AC0(ctx, base);
loc_821ACB2C:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821ACB34;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x821acb64
	if (ctx.cr0.eq) goto loc_821ACB64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-23956
	ctx.r4.s64 = ctx.r11.s64 + -23956;
	// bl 0x82120600
	ctx.lr = 0x821ACB4C;
	sub_82120600(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r29,r29,32
	r29.u64 = r29.u64 | 32;
	// bl 0x82191600
	ctx.lr = 0x821ACB60;
	sub_82191600(ctx, base);
	// b 0x821acb68
	goto loc_821ACB68;
loc_821ACB64:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_821ACB68:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x821ACB78;
	sub_82145710(ctx, base);
	// rlwinm. r11,r29,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821acb90
	if (ctx.cr0.eq) goto loc_821ACB90;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82120ac0
	ctx.lr = 0x821ACB90;
	sub_82120AC0(ctx, base);
loc_821ACB90:
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821ACB98;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r27,r11,-19528
	r27.s64 = ctx.r11.s64 + -19528;
	// addi r28,r10,-23836
	r28.s64 = ctx.r10.s64 + -23836;
	// beq 0x821acc18
	if (ctx.cr0.eq) goto loc_821ACC18;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,-10880
	ctx.r11.s64 = ctx.r11.s64 + -10880;
	// addi r4,r10,-23944
	ctx.r4.s64 = ctx.r10.s64 + -23944;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821ACBDC;
	sub_821DBB48(ctx, base);
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x821ACBE8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821acc08
	if (ctx.cr0.eq) goto loc_821ACC08;
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x821acc0c
	goto loc_821ACC0C;
loc_821ACC08:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_821ACC0C:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r11,104(r29)
	REX_STORE_U32(r29.u32 + 104, ctx.r11.u32);
	// b 0x821acc1c
	goto loc_821ACC1C;
loc_821ACC18:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_821ACC1C:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821ACC34;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821ACC3C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821accac
	if (ctx.cr0.eq) goto loc_821ACCAC;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,-10640
	ctx.r11.s64 = ctx.r11.s64 + -10640;
	// addi r4,r10,-23932
	ctx.r4.s64 = ctx.r10.s64 + -23932;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821ACC70;
	sub_821DBB48(ctx, base);
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x821ACC7C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821acc9c
	if (ctx.cr0.eq) goto loc_821ACC9C;
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x821acca0
	goto loc_821ACCA0;
loc_821ACC9C:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_821ACCA0:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r11,104(r29)
	REX_STORE_U32(r29.u32 + 104, ctx.r11.u32);
	// b 0x821accb0
	goto loc_821ACCB0;
loc_821ACCAC:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_821ACCB0:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821ACCC8;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821ACCD0;
	sub_822F6280(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r28,r11,-23824
	r28.s64 = ctx.r11.s64 + -23824;
	// beq 0x821acd08
	if (ctx.cr0.eq) goto loc_821ACD08;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-23920
	ctx.r4.s64 = ctx.r11.s64 + -23920;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821ACCFC;
	sub_821DBB48(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// b 0x821acd0c
	goto loc_821ACD0C;
loc_821ACD08:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_821ACD0C:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821ACD24;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821ACD2C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821acd5c
	if (ctx.cr0.eq) goto loc_821ACD5C;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-23908
	ctx.r4.s64 = ctx.r11.s64 + -23908;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821ACD50;
	sub_821DBB48(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// b 0x821acd60
	goto loc_821ACD60;
loc_821ACD5C:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_821ACD60:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821ACD78;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821ACD80;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821acdb0
	if (ctx.cr0.eq) goto loc_821ACDB0;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-23892
	ctx.r4.s64 = ctx.r11.s64 + -23892;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821ACDA4;
	sub_821DBB48(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// b 0x821acdb4
	goto loc_821ACDB4;
loc_821ACDB0:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_821ACDB4:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821ACDCC;
	sub_82264568(ctx, base);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x822f6280
	ctx.lr = 0x821ACDD4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ace24
	if (ctx.cr0.eq) goto loc_821ACE24;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r8,-32126
	ctx.r8.s64 = -2105409536;
	// stw r21,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r21.u32);
	// addi r10,r10,12244
	ctx.r10.s64 = ctx.r10.s64 + 12244;
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// addi r9,r9,24416
	ctx.r9.s64 = ctx.r9.s64 + 24416;
	// stw r30,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r30.u32);
	// addi r8,r8,-15676
	ctx.r8.s64 = ctx.r8.s64 + -15676;
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
	// b 0x821ace28
	goto loc_821ACE28;
loc_821ACE24:
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_821ACE28:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82145710
	ctx.lr = 0x821ACE38;
	sub_82145710(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r11,r11,-10088
	ctx.r11.s64 = ctx.r11.s64 + -10088;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,120(r31)
	REX_STORE_U32(r31.u32 + 120, r29.u32);
	// bl 0x822f6280
	ctx.lr = 0x821ACE58;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ace7c
	if (ctx.cr0.eq) goto loc_821ACE7C;
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r10,r10,-13900
	ctx.r10.s64 = ctx.r10.s64 + -13900;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
loc_821ACE7C:
	// stw r30,32(r29)
	REX_STORE_U32(r29.u32 + 32, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_821DCE40) {
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
	ctx.lr = 0x821DCE48;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821dce88
	if (ctx.cr6.eq) goto loc_821DCE88;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,19512
	ctx.r4.s64 = ctx.r11.s64 + 19512;
	// bl 0x8215f670
	ctx.lr = 0x821DCE74;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821DCE7C;
	sub_8215F0F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,8(r30)
	REX_STORE_U32(r30.u32 + 8, r31.u32);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_821DCE88:
	// lfs f0,68(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r25,88
	r31.s64 = r25.s64 + 88;
	// lfs f13,88(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x821dceb0
	if (!ctx.cr6.eq) goto loc_821DCEB0;
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,72(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x821dceb4
	if (ctx.cr6.eq) goto loc_821DCEB4;
loc_821DCEB0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821DCEB4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821dced4
	if (ctx.cr0.eq) goto loc_821DCED4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,10560
	ctx.r4.s64 = ctx.r11.s64 + 10560;
	// bl 0x8215f670
	ctx.lr = 0x821DCECC;
	sub_8215F670(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821674c8
	ctx.lr = 0x821DCED4;
	sub_821674C8(ctx, base);
loc_821DCED4:
	// lwz r31,16(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 16);
	// addi r28,r25,16
	r28.s64 = r25.s64 + 16;
	// lwz r11,20(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 20);
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821dcf6c
	if (ctx.cr0.eq) goto loc_821DCF6C;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821dcf6c
	if (!ctx.cr6.gt) goto loc_821DCF6C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r30,0
	r30.s64 = 0;
	// addi r26,r11,11928
	r26.s64 = ctx.r11.s64 + 11928;
	// addi r29,r10,12164
	r29.s64 = ctx.r10.s64 + 12164;
loc_821DCF0C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8215f670
	ctx.lr = 0x821DCF18;
	sub_8215F670(ctx, base);
	// lwzx r31,r30,r31
	r31.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821dcf4c
	if (ctx.cr0.eq) goto loc_821DCF4C;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// bl 0x8215f5f8
	ctx.lr = 0x821DCF38;
	sub_8215F5F8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8215f670
	ctx.lr = 0x821DCF40;
	sub_8215F670(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dc170
	ctx.lr = 0x821DCF4C;
	sub_821DC170(ctx, base);
loc_821DCF4C:
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821dcf0c
	if (ctx.cr6.lt) goto loc_821DCF0C;
loc_821DCF6C:
	// lwz r31,32(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 32);
	// addi r28,r25,32
	r28.s64 = r25.s64 + 32;
	// lwz r11,36(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 36);
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821dd034
	if (ctx.cr0.eq) goto loc_821DD034;
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821dd034
	if (!ctx.cr6.gt) goto loc_821DD034;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r29,0
	r29.s64 = 0;
	// addi r27,r11,12172
	r27.s64 = ctx.r11.s64 + 12172;
loc_821DCF9C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8215f670
	ctx.lr = 0x821DCFA8;
	sub_8215F670(ctx, base);
	// lwzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821dd014
	if (ctx.cr6.eq) goto loc_821DD014;
	// lbz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 28);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x821dd014
	if (!ctx.cr0.eq) goto loc_821DD014;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,12(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r25,12(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82178a50
	ctx.lr = 0x821DCFD8;
	sub_82178A50(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x821DCFE8;
	sub_8215F670(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821dcffc
	if (ctx.cr6.lt) goto loc_821DCFFC;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x821dd000
	goto loc_821DD000;
loc_821DCFFC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_821DD000:
	// bl 0x8215fbf8
	ctx.lr = 0x821DD004;
	sub_8215FBF8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821DD014;
	sub_82120AC0(ctx, base);
loc_821DD014:
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821dcf9c
	if (ctx.cr6.lt) goto loc_821DCF9C;
loc_821DD034:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_821EA1D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// rlwinm r11,r10,9,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFF;
	// rlwinm r9,r10,16,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x8000;
	// addic. r11,r11,-112
	ctx.xer.ca = ctx.r11.u32 > 111;
	ctx.r11.s64 = ctx.r11.s64 + -112;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r10,r10,9
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFF;
	// bgt 0x821ea218
	if (ctx.cr0.gt) goto loc_821EA218;
	// cmpwi cr6,r11,-10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -10, ctx.xer);
	// bge cr6,0x821ea204
	if (!ctx.cr6.lt) goto loc_821EA204;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821EA204:
	// subfic r11,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r11.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// oris r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 8388608;
	// sraw r11,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// srawi r11,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 13;
	// b 0x821ea26c
	goto loc_821EA26C;
loc_821EA218:
	// cmpwi cr6,r11,143
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 143, ctx.xer);
	// bne cr6,0x821ea258
	if (!ctx.cr6.eq) goto loc_821EA258;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821ea234
	if (!ctx.cr6.eq) goto loc_821EA234;
loc_821EA228:
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// ori r3,r11,31744
	ctx.r3.u64 = ctx.r11.u64 | 31744;
	// blr 
	return;
loc_821EA234:
	// srawi r11,r10,13
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 13;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// ori r3,r11,31744
	ctx.r3.u64 = ctx.r11.u64 | 31744;
	// blr 
	return;
loc_821EA258:
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bgt cr6,0x821ea228
	if (ctx.cr6.gt) goto loc_821EA228;
	// srawi r10,r10,13
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 13;
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_821EA26C:
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F4748) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821F4750;
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
	// beq cr6,0x821f4784
	if (ctx.cr6.eq) goto loc_821F4784;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,22816
	ctx.r4.s64 = ctx.r11.s64 + 22816;
	// addi r3,r10,22864
	ctx.r3.s64 = ctx.r10.s64 + 22864;
	// li r5,130
	ctx.r5.s64 = 130;
	// bl 0x821231d0
	ctx.lr = 0x821F4784;
	sub_821231D0(ctx, base);
loc_821F4784:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x821F4798;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,22976
	ctx.r4.s64 = ctx.r11.s64 + 22976;
	// bl 0x8215f338
	ctx.lr = 0x821F47A4;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x821f6130
	ctx.lr = 0x821F47B0;
	sub_821F6130(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821F6130) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x821F6148;
	sub_8215F2D0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8215fb00
	ctx.lr = 0x821F6150;
	sub_8215FB00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f6160
	if (!ctx.cr0.eq) goto loc_821F6160;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821f616c
	goto loc_821F616C;
loc_821F6160:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_821F616C:
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

DEFINE_REX_FUNC(sub_821F8558) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821F8560;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821f898c
	if (ctx.cr6.eq) goto loc_821F898C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821f88e0
	if (ctx.cr6.eq) goto loc_821F88E0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821f8858
	if (ctx.cr6.eq) goto loc_821F8858;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821f8800
	if (ctx.cr6.eq) goto loc_821F8800;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x821f8798
	if (ctx.cr6.eq) goto loc_821F8798;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x821f86ac
	if (ctx.cr6.eq) goto loc_821F86AC;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x821f8a64
	if (!ctx.cr6.eq) goto loc_821F8A64;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,72(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r3,6204(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6204);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F85C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x821f8a64
	if (ctx.cr6.eq) goto loc_821F8A64;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6036(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6036);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F85E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r10,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// bne cr6,0x821f8670
	if (!ctx.cr6.eq) goto loc_821F8670;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f8620
	if (!ctx.cr6.eq) goto loc_821F8620;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,24064
	ctx.r4.s64 = ctx.r11.s64 + 24064;
	// addi r3,r10,24240
	ctx.r3.s64 = ctx.r10.s64 + 24240;
	// li r5,453
	ctx.r5.s64 = 453;
	// bl 0x821231d0
	ctx.lr = 0x821F8620;
	sub_821231D0(ctx, base);
loc_821F8620:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// ble cr6,0x821f8a64
	if (!ctx.cr6.gt) goto loc_821F8A64;
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
loc_821F863C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8228ca78
	ctx.lr = 0x821F8648;
	sub_8228CA78(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F865C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f863c
	if (ctx.cr6.lt) goto loc_821F863C;
	// b 0x821f8a64
	goto loc_821F8A64;
loc_821F8670:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// bne cr6,0x821f8680
	if (!ctx.cr6.eq) goto loc_821F8680;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x821f88d4
	goto loc_821F88D4;
loc_821F8680:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(r30.s32, 3, ctx.xer);
	// bne cr6,0x821f8690
	if (!ctx.cr6.eq) goto loc_821F8690;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x821f88d4
	goto loc_821F88D4;
loc_821F8690:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x821f86a4
	if (!ctx.cr6.eq) goto loc_821F86A4;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x821f88d8
	goto loc_821F88D8;
loc_821F86A4:
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x821f88d8
	goto loc_821F88D8;
loc_821F86AC:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r3,6204(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6204);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F86C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x821f8a64
	if (ctx.cr6.eq) goto loc_821F8A64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// bne cr6,0x821f876c
	if (!ctx.cr6.eq) goto loc_821F876C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f8b88
	ctx.lr = 0x821F86E8;
	sub_821F8B88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f8764
	if (ctx.cr0.eq) goto loc_821F8764;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821f8734
	if (!ctx.cr6.gt) goto loc_821F8734;
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
loc_821F8704:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8228ca78
	ctx.lr = 0x821F8710;
	sub_8228CA78(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F8724;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f8704
	if (ctx.cr6.lt) goto loc_821F8704;
loc_821F8734:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f8758
	if (!ctx.cr6.eq) goto loc_821F8758;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,24064
	ctx.r4.s64 = ctx.r11.s64 + 24064;
	// addi r3,r10,24240
	ctx.r3.s64 = ctx.r10.s64 + 24240;
	// li r5,410
	ctx.r5.s64 = 410;
	// bl 0x821231d0
	ctx.lr = 0x821F8758;
	sub_821231D0(ctx, base);
loc_821F8758:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// b 0x821f8a64
	goto loc_821F8A64;
loc_821F8764:
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x821f8980
	goto loc_821F8980;
loc_821F876C:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x821f8790
	if (ctx.cr6.eq) goto loc_821F8790;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x821f8788
	if (ctx.cr6.eq) goto loc_821F8788;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x821f8984
	goto loc_821F8984;
loc_821F8788:
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x821f8984
	goto loc_821F8984;
loc_821F8790:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x821f8980
	goto loc_821F8980;
loc_821F8798:
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r3,6204(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6204);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F87B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x821f8a64
	if (ctx.cr6.eq) goto loc_821F8A64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f87dc
	if (ctx.cr6.eq) goto loc_821F87DC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,24064
	ctx.r4.s64 = ctx.r11.s64 + 24064;
	// addi r3,r10,24192
	ctx.r3.s64 = ctx.r10.s64 + 24192;
	// li r5,369
	ctx.r5.s64 = 369;
	// bl 0x821231d0
	ctx.lr = 0x821F87DC;
	sub_821231D0(ctx, base);
loc_821F87DC:
	// lwz r3,6204(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6204);
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F87F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r3.u32);
	// b 0x821f8a60
	goto loc_821F8A60;
loc_821F8800:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r3,6204(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6204);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F881C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x821f8a64
	if (ctx.cr6.eq) goto loc_821F8A64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// beq cr6,0x821f884c
	if (ctx.cr6.eq) goto loc_821F884C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,24064
	ctx.r4.s64 = ctx.r11.s64 + 24064;
	// addi r3,r10,24192
	ctx.r3.s64 = ctx.r10.s64 + 24192;
	// li r5,384
	ctx.r5.s64 = 384;
	// bl 0x821231d0
	ctx.lr = 0x821F884C;
	sub_821231D0(ctx, base);
loc_821F884C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f8e40
	ctx.lr = 0x821F8854;
	sub_821F8E40(ctx, base);
	// b 0x821f8a64
	goto loc_821F8A64;
loc_821F8858:
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r3,6204(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6204);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F8874;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x821f8a64
	if (ctx.cr6.eq) goto loc_821F8A64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// bne cr6,0x821f88d0
	if (!ctx.cr6.eq) goto loc_821F88D0;
	// lwz r3,6204(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6204);
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F88A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f88d0
	if (ctx.cr0.eq) goto loc_821F88D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F88CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821f8a64
	goto loc_821F8A64;
loc_821F88D0:
	// li r4,1
	ctx.r4.s64 = 1;
loc_821F88D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_821F88D8:
	// bl 0x821f8fb0
	ctx.lr = 0x821F88DC;
	sub_821F8FB0(ctx, base);
	// b 0x821f8a64
	goto loc_821F8A64;
loc_821F88E0:
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r3,6204(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6204);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F88FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x821f8a64
	if (ctx.cr6.eq) goto loc_821F8A64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// bne cr6,0x821f897c
	if (!ctx.cr6.eq) goto loc_821F897C;
	// lwz r3,6204(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6204);
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F892C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r5,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r5.u32);
	// beq 0x821f897c
	if (ctx.cr0.eq) goto loc_821F897C;
	// lwz r3,6204(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6204);
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F8950;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f8974
	if (ctx.cr0.eq) goto loc_821F8974;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F8970;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821f8a64
	goto loc_821F8A64;
loc_821F8974:
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x821f8980
	goto loc_821F8980;
loc_821F897C:
	// li r4,1
	ctx.r4.s64 = 1;
loc_821F8980:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_821F8984:
	// bl 0x821f8f48
	ctx.lr = 0x821F8988;
	sub_821F8F48(ctx, base);
	// b 0x821f8a64
	goto loc_821F8A64;
loc_821F898C:
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r3,6204(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6204);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F89A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x821f8a64
	if (ctx.cr6.eq) goto loc_821F8A64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r29,r11,24064
	r29.s64 = ctx.r11.s64 + 24064;
	// beq cr6,0x821f89d4
	if (ctx.cr6.eq) goto loc_821F89D4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,24192
	ctx.r3.s64 = ctx.r11.s64 + 24192;
	// li r5,270
	ctx.r5.s64 = 270;
	// bl 0x821231d0
	ctx.lr = 0x821F89D4;
	sub_821231D0(ctx, base);
loc_821F89D4:
	// lwz r3,6204(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6204);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F89F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r3,6204(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6204);
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bne 0x821f8a3c
	if (!ctx.cr0.eq) goto loc_821F8A3C;
	// bctrl 
	ctx.lr = 0x821F8A18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x821f8a34
	if (ctx.cr6.eq) goto loc_821F8A34;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,24144
	ctx.r3.s64 = ctx.r11.s64 + 24144;
	// li r5,278
	ctx.r5.s64 = 278;
	// bl 0x821231d0
	ctx.lr = 0x821F8A34;
	sub_821231D0(ctx, base);
loc_821F8A34:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x821f8a60
	goto loc_821F8A60;
loc_821F8A3C:
	// bctrl 
	ctx.lr = 0x821F8A40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x821f8a5c
	if (ctx.cr6.eq) goto loc_821F8A5C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,24144
	ctx.r3.s64 = ctx.r11.s64 + 24144;
	// li r5,299
	ctx.r5.s64 = 299;
	// bl 0x821231d0
	ctx.lr = 0x821F8A5C;
	sub_821231D0(ctx, base);
loc_821F8A5C:
	// li r11,3
	ctx.r11.s64 = 3;
loc_821F8A60:
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
loc_821F8A64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8221CE70) {
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
	// li r3,1040
	ctx.r3.s64 = 1040;
	// bl 0x822f6280
	ctx.lr = 0x8221CE84;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221ce94
	if (ctx.cr0.eq) goto loc_8221CE94;
	// bl 0x8221cea8
	ctx.lr = 0x8221CE90;
	sub_8221CEA8(ctx, base);
	// b 0x8221ce98
	goto loc_8221CE98;
loc_8221CE94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221CE98:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8221FCD0) {
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
	// bl 0x826a1c84
	ctx.lr = 0x8221FCD8;
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -152, f31.u64);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r28,r30
	r28.u64 = r30.u64;
	// bl 0x82178268
	ctx.lr = 0x8221FCF8;
	sub_82178268(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r11,-14776
	ctx.r11.s64 = ctx.r11.s64 + -14776;
	// addi r10,r10,-25176
	ctx.r10.s64 = ctx.r10.s64 + -25176;
	// addi r9,r9,-25116
	ctx.r9.s64 = ctx.r9.s64 + -25116;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r9,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// addi r11,r31,116
	ctx.r11.s64 = r31.s64 + 116;
	// stw r30,116(r31)
	REX_STORE_U32(r31.u32 + 116, r30.u32);
	// stw r30,120(r31)
	REX_STORE_U32(r31.u32 + 120, r30.u32);
	// stw r30,124(r31)
	REX_STORE_U32(r31.u32 + 124, r30.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x8221FD38;
	sub_8269D1D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x8221FD44;
	sub_8269D1B8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r29,116(r31)
	REX_STORE_U32(r31.u32 + 116, r29.u32);
	// addi r9,r10,15048
	ctx.r9.s64 = ctx.r10.s64 + 15048;
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r30,128(r31)
	REX_STORE_U32(r31.u32 + 128, r30.u32);
	// li r8,200
	ctx.r8.s64 = 200;
	// stw r30,132(r31)
	REX_STORE_U32(r31.u32 + 132, r30.u32);
	// lfs f31,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// addi r20,r31,176
	r20.s64 = r31.s64 + 176;
	// lfs f0,-22312(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -22312);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r31,136
	r29.s64 = r31.s64 + 136;
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// addi r26,r31,144
	r26.s64 = r31.s64 + 144;
	// stfs f31,144(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// addi r21,r31,152
	r21.s64 = r31.s64 + 152;
	// stfs f31,148(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// addi r27,r31,156
	r27.s64 = r31.s64 + 156;
	// stfs f31,152(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// stb r11,159(r31)
	REX_STORE_U8(r31.u32 + 159, ctx.r11.u8);
	// stb r8,158(r31)
	REX_STORE_U8(r31.u32 + 158, ctx.r8.u8);
	// addi r25,r31,160
	r25.s64 = r31.s64 + 160;
	// stb r30,157(r31)
	REX_STORE_U8(r31.u32 + 157, r30.u8);
	// stb r11,156(r31)
	REX_STORE_U8(r31.u32 + 156, ctx.r11.u8);
	// stfs f31,160(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f31,164(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f31,168(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// stfs f31,172(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 172, temp.u32);
	// bl 0x822e6df0
	ctx.lr = 0x8221FDC4;
	sub_822E6DF0(ctx, base);
	// stfs f31,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 268, temp.u32);
	// stfs f31,272(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 272, temp.u32);
	// addi r19,r31,284
	r19.s64 = r31.s64 + 284;
	// stfs f31,276(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 276, temp.u32);
	// addi r24,r31,268
	r24.s64 = r31.s64 + 268;
	// stfs f31,280(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 280, temp.u32);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x822e6df0
	ctx.lr = 0x8221FDE4;
	sub_822E6DF0(ctx, base);
	// stfs f31,376(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 376, temp.u32);
	// stfs f31,380(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 380, temp.u32);
	// addi r18,r31,392
	r18.s64 = r31.s64 + 392;
	// stfs f31,384(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 384, temp.u32);
	// addi r23,r31,376
	r23.s64 = r31.s64 + 376;
	// stfs f31,388(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 388, temp.u32);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x822e6df0
	ctx.lr = 0x8221FE04;
	sub_822E6DF0(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r16,r31,488
	r16.s64 = r31.s64 + 488;
	// stw r11,484(r31)
	REX_STORE_U32(r31.u32 + 484, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// addi r17,r31,484
	r17.s64 = r31.s64 + 484;
	// bl 0x8226b010
	ctx.lr = 0x8221FE20;
	sub_8226B010(ctx, base);
	// stb r30,704(r31)
	REX_STORE_U8(r31.u32 + 704, r30.u8);
	// stb r30,705(r31)
	REX_STORE_U8(r31.u32 + 705, r30.u8);
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r30,708(r31)
	REX_STORE_U32(r31.u32 + 708, r30.u32);
	// stw r30,712(r31)
	REX_STORE_U32(r31.u32 + 712, r30.u32);
	// bl 0x822f6280
	ctx.lr = 0x8221FE38;
	sub_822F6280(ctx, base);
	// mr. r22,r3
	r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// li r15,1
	r15.s64 = 1;
	// beq 0x8221fe6c
	if (ctx.cr0.eq) goto loc_8221FE6C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,32356
	ctx.r4.s64 = ctx.r11.s64 + 32356;
	// bl 0x82120600
	ctx.lr = 0x8221FE54;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r28,r15
	r28.u64 = r15.u64;
	// bl 0x821d13f8
	ctx.lr = 0x8221FE68;
	sub_821D13F8(ctx, base);
	// b 0x8221fe70
	goto loc_8221FE70;
loc_8221FE6C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8221FE70:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r29,r31,80
	r29.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x8221FE84;
	sub_82145710(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221fea0
	if (ctx.cr0.eq) goto loc_8221FEA0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// rlwinm r28,r28,0,0,30
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x8221FEA0;
	sub_82120AC0(ctx, base);
loc_8221FEA0:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8221FEA8;
	sub_822F6280(ctx, base);
	// mr. r22,r3
	r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq 0x8221fed8
	if (ctx.cr0.eq) goto loc_8221FED8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// addi r4,r11,32504
	ctx.r4.s64 = ctx.r11.s64 + 32504;
	// bl 0x82120600
	ctx.lr = 0x8221FEC0;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// ori r28,r28,2
	r28.u64 = r28.u64 | 2;
	// bl 0x82196ba8
	ctx.lr = 0x8221FED4;
	sub_82196BA8(ctx, base);
	// b 0x8221fedc
	goto loc_8221FEDC;
loc_8221FED8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8221FEDC:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x8221FEEC;
	sub_82145710(ctx, base);
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221ff08
	if (ctx.cr0.eq) goto loc_8221FF08;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// rlwinm r28,r28,0,31,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x8221FF08;
	sub_82120AC0(ctx, base);
loc_8221FF08:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8221FF10;
	sub_822F6280(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq 0x8221ff40
	if (ctx.cr0.eq) goto loc_8221FF40;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,32516
	ctx.r4.s64 = ctx.r11.s64 + 32516;
	// bl 0x82120600
	ctx.lr = 0x8221FF28;
	sub_82120600(ctx, base);
	// addi r5,r31,148
	ctx.r5.s64 = r31.s64 + 148;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// ori r28,r28,4
	r28.u64 = r28.u64 | 4;
	// bl 0x82196ba8
	ctx.lr = 0x8221FF3C;
	sub_82196BA8(ctx, base);
	// b 0x8221ff44
	goto loc_8221FF44;
loc_8221FF40:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8221FF44:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x8221FF54;
	sub_82145710(ctx, base);
	// rlwinm. r11,r28,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221ff70
	if (ctx.cr0.eq) goto loc_8221FF70;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// rlwinm r28,r28,0,30,28
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x8221FF70;
	sub_82120AC0(ctx, base);
loc_8221FF70:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8221FF78;
	sub_822F6280(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq 0x8221ffa8
	if (ctx.cr0.eq) goto loc_8221FFA8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-28492
	ctx.r4.s64 = ctx.r11.s64 + -28492;
	// bl 0x82120600
	ctx.lr = 0x8221FF90;
	sub_82120600(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// ori r28,r28,8
	r28.u64 = r28.u64 | 8;
	// bl 0x82196ba8
	ctx.lr = 0x8221FFA4;
	sub_82196BA8(ctx, base);
	// b 0x8221ffac
	goto loc_8221FFAC;
loc_8221FFA8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8221FFAC:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x8221FFBC;
	sub_82145710(ctx, base);
	// rlwinm. r11,r28,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221ffd8
	if (ctx.cr0.eq) goto loc_8221FFD8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rlwinm r28,r28,0,29,27
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x8221FFD8;
	sub_82120AC0(ctx, base);
loc_8221FFD8:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8221FFE0;
	sub_822F6280(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq 0x82220010
	if (ctx.cr0.eq) goto loc_82220010;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// addi r4,r11,-27220
	ctx.r4.s64 = ctx.r11.s64 + -27220;
	// bl 0x82120600
	ctx.lr = 0x8221FFF8;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// ori r28,r28,16
	r28.u64 = r28.u64 | 16;
	// bl 0x8219d708
	ctx.lr = 0x8222000C;
	sub_8219D708(ctx, base);
	// b 0x82220014
	goto loc_82220014;
loc_82220010:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82220014:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x82220024;
	sub_82145710(ctx, base);
	// rlwinm. r11,r28,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82220040
	if (ctx.cr0.eq) goto loc_82220040;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// rlwinm r28,r28,0,28,26
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x82220040;
	sub_82120AC0(ctx, base);
loc_82220040:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-25584
	ctx.r4.s64 = ctx.r11.s64 + -25584;
	// bl 0x82120600
	ctx.lr = 0x82220050;
	sub_82120600(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822e7ad8
	ctx.lr = 0x82220060;
	sub_822E7AD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x82220070;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// addi r4,r11,-25568
	ctx.r4.s64 = ctx.r11.s64 + -25568;
	// bl 0x82120600
	ctx.lr = 0x82220080;
	sub_82120600(ctx, base);
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x822e7f20
	ctx.lr = 0x82220090;
	sub_822E7F20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82120ac0
	ctx.lr = 0x822200A0;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-25552
	ctx.r4.s64 = ctx.r11.s64 + -25552;
	// bl 0x82120600
	ctx.lr = 0x822200B0;
	sub_82120600(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822e7ad8
	ctx.lr = 0x822200C0;
	sub_822E7AD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x822200D0;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-25536
	ctx.r4.s64 = ctx.r11.s64 + -25536;
	// bl 0x82120600
	ctx.lr = 0x822200E0;
	sub_82120600(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x822e7f20
	ctx.lr = 0x822200F0;
	sub_822E7F20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x82220100;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,-25520
	ctx.r4.s64 = ctx.r11.s64 + -25520;
	// bl 0x82120600
	ctx.lr = 0x82220110;
	sub_82120600(ctx, base);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x822e7ad8
	ctx.lr = 0x82220120;
	sub_822E7AD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82120ac0
	ctx.lr = 0x82220130;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,-25508
	ctx.r4.s64 = ctx.r11.s64 + -25508;
	// bl 0x82120600
	ctx.lr = 0x82220140;
	sub_82120600(ctx, base);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x822e7f20
	ctx.lr = 0x82220150;
	sub_822E7F20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82120ac0
	ctx.lr = 0x82220160;
	sub_82120AC0(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r11,r11,1728
	ctx.r11.s64 = ctx.r11.s64 + 1728;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82220178;
	sub_822F6280(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x822201a8
	if (ctx.cr0.eq) goto loc_822201A8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r11,-25496
	ctx.r4.s64 = ctx.r11.s64 + -25496;
	// bl 0x82120600
	ctx.lr = 0x82220190;
	sub_82120600(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// ori r28,r28,32
	r28.u64 = r28.u64 | 32;
	// bl 0x82197628
	ctx.lr = 0x822201A4;
	sub_82197628(ctx, base);
	// b 0x822201ac
	goto loc_822201AC;
loc_822201A8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_822201AC:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x822201BC;
	sub_82145710(ctx, base);
	// lwz r27,80(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,36(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 36);
	// bl 0x8269ce98
	ctx.lr = 0x822201C8;
	sub_8269CE98(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x822201D0;
	sub_822F6280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r26,r11,-13900
	r26.s64 = ctx.r11.s64 + -13900;
	// beq 0x822201f8
	if (ctx.cr0.eq) goto loc_822201F8;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x822201fc
	goto loc_822201FC;
loc_822201F8:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_822201FC:
	// rlwinm. r10,r28,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,36(r27)
	REX_STORE_U32(r27.u32 + 36, ctx.r11.u32);
	// stb r30,33(r27)
	REX_STORE_U8(r27.u32 + 33, r30.u8);
	// beq 0x8222021c
	if (ctx.cr0.eq) goto loc_8222021C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82120ac0
	ctx.lr = 0x8222021C;
	sub_82120AC0(ctx, base);
loc_8222021C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// bl 0x82120600
	ctx.lr = 0x8222022C;
	sub_82120600(ctx, base);
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8226b670
	ctx.lr = 0x8222023C;
	sub_8226B670(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82120ac0
	ctx.lr = 0x8222024C;
	sub_82120AC0(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x82220254;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82220274
	if (ctx.cr0.eq) goto loc_82220274;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,200
	ctx.r5.s64 = 200;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x8222026C;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82220278
	goto loc_82220278;
loc_82220274:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82220278:
	// stw r4,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r4.u32);
	// addi r28,r31,96
	r28.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821d3988
	ctx.lr = 0x82220288;
	sub_821D3988(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822f6280
	ctx.lr = 0x82220290;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82220300
	if (ctx.cr0.eq) goto loc_82220300;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r31,12(r29)
	REX_STORE_U32(r29.u32 + 12, r31.u32);
	// stw r15,4(r29)
	REX_STORE_U32(r29.u32 + 4, r15.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r11,r11,32616
	ctx.r11.s64 = ctx.r11.s64 + 32616;
	// stw r30,8(r29)
	REX_STORE_U32(r29.u32 + 8, r30.u32);
	// addi r10,r10,4200
	ctx.r10.s64 = ctx.r10.s64 + 4200;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x822f6280
	ctx.lr = 0x822202C8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822202f0
	if (ctx.cr0.eq) goto loc_822202F0;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,-12728
	ctx.r9.s64 = ctx.r9.s64 + -12728;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x822202f4
	goto loc_822202F4;
loc_822202F0:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_822202F4:
	// stw r11,16(r29)
	REX_STORE_U32(r29.u32 + 16, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x82220304
	goto loc_82220304;
loc_82220300:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82220304:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821d3988
	ctx.lr = 0x8222030C;
	sub_821D3988(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x822f6280
	ctx.lr = 0x82220314;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82220388
	if (ctx.cr0.eq) goto loc_82220388;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stfs f31,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 20, temp.u32);
	// stw r31,12(r29)
	REX_STORE_U32(r29.u32 + 12, r31.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r11,r11,32576
	ctx.r11.s64 = ctx.r11.s64 + 32576;
	// stw r15,4(r29)
	REX_STORE_U32(r29.u32 + 4, r15.u32);
	// stw r30,8(r29)
	REX_STORE_U32(r29.u32 + 8, r30.u32);
	// addi r10,r10,4640
	ctx.r10.s64 = ctx.r10.s64 + 4640;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x822f6280
	ctx.lr = 0x82220350;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82220370
	if (ctx.cr0.eq) goto loc_82220370;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x82220374
	goto loc_82220374;
loc_82220370:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82220374:
	// stw r11,16(r29)
	REX_STORE_U32(r29.u32 + 16, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e7a50
	ctx.lr = 0x82220380;
	sub_822E7A50(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x8222038c
	goto loc_8222038C;
loc_82220388:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8222038C:
	// stw r4,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r4.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821d3988
	ctx.lr = 0x82220398;
	sub_821D3988(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x822203A0;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822203d8
	if (ctx.cr0.eq) goto loc_822203D8;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-25480
	ctx.r4.s64 = ctx.r11.s64 + -25480;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822203C4;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// addi r11,r11,-23824
	ctx.r11.s64 = ctx.r11.s64 + -23824;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// b 0x822203dc
	goto loc_822203DC;
loc_822203D8:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_822203DC:
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x822203F4;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x822203FC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8222047c
	if (ctx.cr0.eq) goto loc_8222047C;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r11,r11,2392
	ctx.r11.s64 = ctx.r11.s64 + 2392;
	// addi r4,r10,-25464
	ctx.r4.s64 = ctx.r10.s64 + -25464;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821dbb48
	ctx.lr = 0x82220430;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r11,r11,-23836
	ctx.r11.s64 = ctx.r11.s64 + -23836;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82220444;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222046c
	if (ctx.cr0.eq) goto loc_8222046C;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,-19528
	ctx.r9.s64 = ctx.r9.s64 + -19528;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x82220470
	goto loc_82220470;
loc_8222046C:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82220470:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r11,104(r29)
	REX_STORE_U32(r29.u32 + 104, ctx.r11.u32);
	// b 0x82220480
	goto loc_82220480;
loc_8222047C:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_82220480:
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x82220498;
	sub_82264568(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r11,r11,31296
	ctx.r11.s64 = ctx.r11.s64 + 31296;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x822204B0;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-12728
	r29.s64 = ctx.r11.s64 + -12728;
	// beq 0x822204d8
	if (ctx.cr0.eq) goto loc_822204D8;
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// b 0x822204dc
	goto loc_822204DC;
loc_822204D8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_822204DC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r28,r31,12
	r28.s64 = r31.s64 + 12;
	// addi r5,r11,31460
	ctx.r5.s64 = ctx.r11.s64 + 31460;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8216be80
	ctx.lr = 0x822204F0;
	sub_8216BE80(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r11,r11,21968
	ctx.r11.s64 = ctx.r11.s64 + 21968;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82220508;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82220528
	if (ctx.cr0.eq) goto loc_82220528;
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// b 0x8222052c
	goto loc_8222052C;
loc_82220528:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8222052C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r5,r11,-28924
	ctx.r5.s64 = ctx.r11.s64 + -28924;
	// bl 0x8216be80
	ctx.lr = 0x8222053C;
	sub_8216BE80(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r11,r11,21984
	ctx.r11.s64 = ctx.r11.s64 + 21984;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82220554;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82220574
	if (ctx.cr0.eq) goto loc_82220574;
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// b 0x82220578
	goto loc_82220578;
loc_82220574:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82220578:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r5,r11,-27100
	ctx.r5.s64 = ctx.r11.s64 + -27100;
	// bl 0x8216be80
	ctx.lr = 0x82220588;
	sub_8216BE80(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r11,r11,22024
	ctx.r11.s64 = ctx.r11.s64 + 22024;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x822205A0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822205c0
	if (ctx.cr0.eq) goto loc_822205C0;
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// b 0x822205c4
	goto loc_822205C4;
loc_822205C0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_822205C4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r5,r11,-27088
	ctx.r5.s64 = ctx.r11.s64 + -27088;
	// bl 0x8216be80
	ctx.lr = 0x822205D4;
	sub_8216BE80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_8225BFA0) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c80
	ctx.lr = 0x8225BFA8;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r15,-32106
	r15.s64 = -2104098816;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r3,6192(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225BFCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r31,-32106
	r31.s64 = -2104098816;
	// beq 0x8225bffc
	if (ctx.cr0.eq) goto loc_8225BFFC;
	// lwz r3,6152(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225BFEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8225b1c8
	ctx.lr = 0x8225BFFC;
	sub_8225B1C8(ctx, base);
loc_8225BFFC:
	// lwz r10,172(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 172);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r27,r11,1624
	r27.s64 = ctx.r11.s64 + 1624;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// lbz r11,36(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8225c44c
	if (!ctx.cr0.eq) goto loc_8225C44C;
	// lwz r11,272(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 272);
	// li r16,1
	r16.s64 = 1;
	// li r14,0
	r14.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8225c2d8
	if (!ctx.cr6.gt) goto loc_8225C2D8;
	// lis r6,-32126
	ctx.r6.s64 = -2105409536;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lfs f31,-16132(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -16132);
	f31.f64 = double(temp.f32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lis r23,-32106
	r23.s64 = -2104098816;
	// addi r22,r11,-32660
	r22.s64 = ctx.r11.s64 + -32660;
	// addi r21,r10,16408
	r21.s64 = ctx.r10.s64 + 16408;
	// addi r20,r9,-27404
	r20.s64 = ctx.r9.s64 + -27404;
	// addi r19,r8,-8380
	r19.s64 = ctx.r8.s64 + -8380;
	// addi r18,r7,-26984
	r18.s64 = ctx.r7.s64 + -26984;
	// addi r17,r6,-27016
	r17.s64 = ctx.r6.s64 + -27016;
loc_8225C068:
	// addi r3,r25,192
	ctx.r3.s64 = r25.s64 + 192;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// bl 0x8228c340
	ctx.lr = 0x8225C074;
	sub_8228C340(ctx, base);
	// lwz r31,128(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C090;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c2c4
	if (ctx.cr0.eq) goto loc_8225C2C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C0AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6192(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 6192);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,76(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C0C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r10,r29,r3
	ctx.r10.u64 = ctx.r3.u64 - r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r26,r10,27,31,31
	r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C0E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,6152(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,164(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C108;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C11C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6080(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 6080);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C140;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225c160
	if (ctx.cr0.eq) goto loc_8225C160;
	// addi r11,r30,394
	ctx.r11.s64 = r30.s64 + 394;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r25
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// stwx r10,r11,r25
	REX_STORE_U32(ctx.r11.u32 + r25.u32, ctx.r10.u32);
	// andc r28,r10,r9
	r28.u64 = ctx.r10.u64 & ~ctx.r9.u64;
loc_8225C160:
	// rlwinm. r11,r28,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c1bc
	if (ctx.cr0.eq) goto loc_8225C1BC;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225c2c4
	if (!ctx.cr0.eq) goto loc_8225C2C4;
	// lbz r11,97(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 97);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225c2c4
	if (ctx.cr0.eq) goto loc_8225C2C4;
	// lfs f0,1532(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 1532);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x8225c190
	if (ctx.cr6.gt) goto loc_8225C190;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225C190:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c2c4
	if (ctx.cr0.eq) goto loc_8225C2C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C1B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
loc_8225C1B4:
	// bl 0x8226afb8
	ctx.lr = 0x8225C1B8;
	sub_8226AFB8(ctx, base);
	// b 0x8225c2c4
	goto loc_8225C2C4;
loc_8225C1BC:
	// rlwinm. r11,r28,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c218
	if (ctx.cr0.eq) goto loc_8225C218;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c1ec
	if (ctx.cr0.eq) goto loc_8225C1EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C1E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// b 0x8225c1b4
	goto loc_8225C1B4;
loc_8225C1EC:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c2c4
	if (ctx.cr0.eq) goto loc_8225C2C4;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// lwz r3,172(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 172);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// slw r7,r16,r29
	ctx.r7.u64 = r29.u8 & 0x20 ? 0 : (r16.u32 << (r29.u8 & 0x3F));
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82288100
	ctx.lr = 0x8225C210;
	sub_82288100(ctx, base);
	// stw r16,1596(r25)
	REX_STORE_U32(r25.u32 + 1596, r16.u32);
	// b 0x8225c2c4
	goto loc_8225C2C4;
loc_8225C218:
	// rlwinm. r11,r28,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c27c
	if (ctx.cr0.eq) goto loc_8225C27C;
	// lfs f0,1532(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 1532);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x8225c234
	if (ctx.cr6.gt) goto loc_8225C234;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225C234:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c27c
	if (ctx.cr0.eq) goto loc_8225C27C;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225c2c4
	if (!ctx.cr0.eq) goto loc_8225C2C4;
	// lbz r11,97(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 97);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225c2c4
	if (ctx.cr0.eq) goto loc_8225C2C4;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8215f670
	ctx.lr = 0x8225C25C;
	sub_8215F670(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8215f670
	ctx.lr = 0x8225C264;
	sub_8215F670(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8225C26C;
	sub_8215F0F0(ctx, base);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r16,0(r31)
	REX_STORE_U32(r31.u32 + 0, r16.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8225c2b4
	goto loc_8225C2B4;
loc_8225C27C:
	// rlwinm. r11,r28,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c2c4
	if (ctx.cr0.eq) goto loc_8225C2C4;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c2c4
	if (ctx.cr0.eq) goto loc_8225C2C4;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225c2c4
	if (!ctx.cr0.eq) goto loc_8225C2C4;
	// lfs f0,1532(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 1532);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x8225c2a8
	if (ctx.cr6.gt) goto loc_8225C2A8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225C2A8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c2c4
	if (ctx.cr0.eq) goto loc_8225C2C4;
	// li r4,3
	ctx.r4.s64 = 3;
loc_8225C2B4:
	// slw r11,r16,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (r16.u32 << (r29.u8 & 0x3F));
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8225b1c8
	ctx.lr = 0x8225C2C4;
	sub_8225B1C8(ctx, base);
loc_8225C2C4:
	// lwz r11,272(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 272);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// cmpw cr6,r14,r11
	ctx.cr6.compare<int32_t>(r14.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8225c068
	if (ctx.cr6.lt) goto loc_8225C068;
	// lwz r27,80(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8225C2D8:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C2F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c78c
	if (ctx.cr0.eq) goto loc_8225C78C;
	// li r29,0
	r29.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// addi r31,r25,568
	r31.s64 = r25.s64 + 568;
	// li r30,8
	r30.s64 = 8;
loc_8225C308:
	// lbz r11,-31(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + -31);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225c350
	if (ctx.cr0.eq) goto loc_8225C350;
	// addi r4,r25,220
	ctx.r4.s64 = r25.s64 + 220;
	// addi r3,r31,-128
	ctx.r3.s64 = r31.s64 + -128;
	// bl 0x8228c150
	ctx.lr = 0x8225C320;
	sub_8228C150(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c350
	if (ctx.cr0.eq) goto loc_8225C350;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C33C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c34c
	if (ctx.cr0.eq) goto loc_8225C34C;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x8225c350
	goto loc_8225C350;
loc_8225C34C:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_8225C350:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,136
	r31.s64 = r31.s64 + 136;
	// bne 0x8225c308
	if (!ctx.cr0.eq) goto loc_8225C308;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x8225c384
	if (!ctx.cr6.gt) goto loc_8225C384;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x8225c384
	if (!ctx.cr6.gt) goto loc_8225C384;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82263cf8
	ctx.lr = 0x8225C374;
	sub_82263CF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8225c388
	goto loc_8225C388;
loc_8225C384:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225C388:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c78c
	if (ctx.cr0.eq) goto loc_8225C78C;
	// lwz r11,272(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 272);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8225c400
	if (!ctx.cr6.gt) goto loc_8225C400;
	// addi r30,r25,192
	r30.s64 = r25.s64 + 192;
loc_8225C3A4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8228c340
	ctx.lr = 0x8225C3B0;
	sub_8228C340(ctx, base);
	// lbz r10,97(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 97);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8225c3f0
	if (ctx.cr0.eq) goto loc_8225C3F0;
	// stb r16,98(r3)
	REX_STORE_U8(ctx.r3.u32 + 98, r16.u8);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r29,128(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r3,6152(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C3E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x8227d560
	ctx.lr = 0x8225C3F0;
	sub_8227D560(ctx, base);
loc_8225C3F0:
	// lwz r11,272(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 272);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8225c3a4
	if (ctx.cr6.lt) goto loc_8225C3A4;
loc_8225C400:
	// lis r31,-32106
	r31.s64 = -2104098816;
	// lbz r11,1572(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 1572);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r3,6152(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C424;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6152(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C438;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8225b1c8
	ctx.lr = 0x8225C448;
	sub_8225B1C8(ctx, base);
	// b 0x8225c78c
	goto loc_8225C78C;
loc_8225C44C:
	// lwz r3,6152(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C460;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// bne cr6,0x8225c498
	if (!ctx.cr6.eq) goto loc_8225C498;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,44(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8225c78c
	if (!ctx.cr6.gt) goto loc_8225C78C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r11,30288
	ctx.r4.s64 = ctx.r11.s64 + 30288;
	// addi r3,r25,48
	ctx.r3.s64 = r25.s64 + 48;
	// bl 0x82120c08
	ctx.lr = 0x8225C494;
	sub_82120C08(ctx, base);
	// b 0x8225c78c
	goto loc_8225C78C;
loc_8225C498:
	// lwz r3,6152(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C4AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x8225c78c
	if (!ctx.cr6.eq) goto loc_8225C78C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,44(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8225c78c
	if (ctx.cr6.lt) goto loc_8225C78C;
	// lwz r31,172(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 172);
	// lbz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225c4e8
	if (ctx.cr0.eq) goto loc_8225C4E8;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225c784
	if (!ctx.cr6.eq) goto loc_8225C784;
loc_8225C4E8:
	// li r29,0
	r29.s64 = 0;
	// lwz r3,6192(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 6192);
	// li r16,1
	r16.s64 = 1;
	// stw r29,28(r31)
	REX_STORE_U32(r31.u32 + 28, r29.u32);
	// stb r16,36(r31)
	REX_STORE_U8(r31.u32 + 36, r16.u8);
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C510;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// slw. r11,r16,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (r16.u32 << (ctx.r3.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// bne 0x8225c534
	if (!ctx.cr0.eq) goto loc_8225C534;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,2624
	ctx.r4.s64 = ctx.r11.s64 + 2624;
	// addi r3,r10,2676
	ctx.r3.s64 = ctx.r10.s64 + 2676;
	// li r5,83
	ctx.r5.s64 = 83;
	// bl 0x821231d0
	ctx.lr = 0x8225C534;
	sub_821231D0(ctx, base);
loc_8225C534:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r29,44(r31)
	REX_STORE_U32(r31.u32 + 44, r29.u32);
	// stb r29,52(r31)
	REX_STORE_U8(r31.u32 + 52, r29.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// beq cr6,0x8225c774
	if (ctx.cr6.eq) goto loc_8225C774;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,2740
	ctx.r4.s64 = ctx.r11.s64 + 2740;
	// bl 0x82120600
	ctx.lr = 0x8225C56C;
	sub_82120600(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225C578;
	sub_82178B60(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82120ac0
	ctx.lr = 0x8225C58C;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,2760
	ctx.r4.s64 = ctx.r11.s64 + 2760;
	// bl 0x82120600
	ctx.lr = 0x8225C59C;
	sub_82120600(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225C5A8;
	sub_82178B60(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x8225C5BC;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,2780
	ctx.r4.s64 = ctx.r11.s64 + 2780;
	// bl 0x82120600
	ctx.lr = 0x8225C5CC;
	sub_82120600(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225C5D8;
	sub_82178B60(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82120ac0
	ctx.lr = 0x8225C5EC;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,2800
	ctx.r4.s64 = ctx.r11.s64 + 2800;
	// bl 0x82120600
	ctx.lr = 0x8225C5FC;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225C608;
	sub_82178B60(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8225C61C;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,2820
	ctx.r4.s64 = ctx.r11.s64 + 2820;
	// bl 0x82120600
	ctx.lr = 0x8225C62C;
	sub_82120600(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225C638;
	sub_82178B60(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8225C64C;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,2840
	ctx.r4.s64 = ctx.r11.s64 + 2840;
	// bl 0x82120600
	ctx.lr = 0x8225C65C;
	sub_82120600(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225C668;
	sub_82178B60(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120ac0
	ctx.lr = 0x8225C67C;
	sub_82120AC0(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r30,r11,-19376
	r30.s64 = ctx.r11.s64 + -19376;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lbzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// bl 0x82288798
	ctx.lr = 0x8225C698;
	sub_82288798(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lbzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// bl 0x82288798
	ctx.lr = 0x8225C6AC;
	sub_82288798(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lbzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82288798
	ctx.lr = 0x8225C6C4;
	sub_82288798(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lbzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82288798
	ctx.lr = 0x8225C6DC;
	sub_82288798(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82288848
	ctx.lr = 0x8225C6F4;
	sub_82288848(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,8
	ctx.r11.s64 = r30.s64 + 8;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82288848
	ctx.lr = 0x8225C70C;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r4,r11,-8364
	ctx.r4.s64 = ctx.r11.s64 + -8364;
	// bl 0x82288848
	ctx.lr = 0x8225C71C;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r4,r11,-27404
	ctx.r4.s64 = ctx.r11.s64 + -27404;
	// bl 0x82288848
	ctx.lr = 0x8225C72C;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,2864
	ctx.r4.s64 = ctx.r11.s64 + 2864;
	// bl 0x82120600
	ctx.lr = 0x8225C73C;
	sub_82120600(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225C748;
	sub_82178B60(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82120ac0
	ctx.lr = 0x8225C75C;
	sub_82120AC0(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,2
	ctx.r11.s64 = r30.s64 + 2;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lbzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82288798
	ctx.lr = 0x8225C774;
	sub_82288798(ctx, base);
loc_8225C774:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,2888
	ctx.r3.s64 = ctx.r11.s64 + 2888;
	// bl 0x8226afb8
	ctx.lr = 0x8225C780;
	sub_8226AFB8(ctx, base);
	// b 0x8225c788
	goto loc_8225C788;
loc_8225C784:
	// li r29,0
	r29.s64 = 0;
loc_8225C788:
	// stw r29,1596(r25)
	REX_STORE_U32(r25.u32 + 1596, r29.u32);
loc_8225C78C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r31,r11,-31088
	r31.s64 = ctx.r11.s64 + -31088;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x8225C7A0;
	sub_8215F670(ctx, base);
	// bl 0x8215f0f0
	ctx.lr = 0x8225C7A4;
	sub_8215F0F0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82263cf8
	ctx.lr = 0x8225C7AC;
	sub_82263CF8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225c7d8
	if (!ctx.cr0.eq) goto loc_8225C7D8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215f670
	ctx.lr = 0x8225C7C0;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-31064
	ctx.r4.s64 = ctx.r11.s64 + -31064;
	// bl 0x8215f670
	ctx.lr = 0x8225C7CC;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-31048
	ctx.r4.s64 = ctx.r11.s64 + -31048;
	// bl 0x8215fbf8
	ctx.lr = 0x8225C7D8;
	sub_8215FBF8(ctx, base);
loc_8225C7D8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82120ac0
	ctx.lr = 0x8225C7E8;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,16492
	ctx.r4.s64 = ctx.r11.s64 + 16492;
	// bl 0x8215f338
	ctx.lr = 0x8225C7F8;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16504
	ctx.r4.s64 = ctx.r11.s64 + 16504;
	// bl 0x8215f338
	ctx.lr = 0x8225C804;
	sub_8215F338(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// bl 0x8215fba8
	ctx.lr = 0x8225C80C;
	sub_8215FBA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225c824
	if (!ctx.cr0.eq) goto loc_8225C824;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8225b1c8
	ctx.lr = 0x8225C824;
	sub_8225B1C8(ctx, base);
loc_8225C824:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82120ac0
	ctx.lr = 0x8225C834;
	sub_82120AC0(ctx, base);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_822994B8) {
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
	ctx.lr = 0x822994C0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,48(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r23,4(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r29,r23
	ctx.cr6.compare<int32_t>(r29.s32, r23.s32, ctx.xer);
	// ble cr6,0x82299774
	if (!ctx.cr6.gt) goto loc_82299774;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r25,-32126
	r25.s64 = -2105409536;
	// li r22,0
	r22.s64 = 0;
	// li r24,1
	r24.s64 = 1;
	// lis r26,-32106
	r26.s64 = -2104098816;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bge cr6,0x8229958c
	if (!ctx.cr6.lt) goto loc_8229958C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x8229950c
	if (ctx.cr6.eq) goto loc_8229950C;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822c1a70
	ctx.lr = 0x82299504;
	sub_822C1A70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82299510
	goto loc_82299510;
loc_8229950C:
	// mr r31,r22
	r31.u64 = r22.u64;
loc_82299510:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82299548
	if (!ctx.cr6.gt) goto loc_82299548;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_82299528:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229953c
	if (ctx.cr6.eq) goto loc_8229953C;
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8229953C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82299528
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82299528;
loc_82299548:
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82299580
	if (ctx.cr6.eq) goto loc_82299580;
	// lbz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8229957c
	if (ctx.cr0.eq) goto loc_8229957C;
	// lwz r11,112(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 112);
	// lwz r9,-19400(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r26)
	REX_STORE_U32(r26.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8229957C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229957C:
	// stw r22,12(r30)
	REX_STORE_U32(r30.u32 + 12, r22.u32);
loc_82299580:
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
	// stb r24,16(r30)
	REX_STORE_U8(r30.u32 + 16, r24.u8);
loc_8229958C:
	// cmpw cr6,r23,r29
	ctx.cr6.compare<int32_t>(r23.s32, r29.s32, ctx.xer);
	// bge cr6,0x822995b8
	if (!ctx.cr6.lt) goto loc_822995B8;
	// subf r11,r23,r29
	ctx.r11.u64 = r29.u64 - r23.u64;
	// rlwinm r10,r23,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822995A0:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822995b0
	if (ctx.cr0.eq) goto loc_822995B0;
	// stw r22,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r22.u32);
loc_822995B0:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822995a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822995A0;
loc_822995B8:
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// addi r31,r30,20
	r31.s64 = r30.s64 + 20;
	// lwz r27,24(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// blt cr6,0x822996a0
	if (ctx.cr6.lt) goto loc_822996A0;
	// ble cr6,0x82299674
	if (!ctx.cr6.gt) goto loc_82299674;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bge cr6,0x82299674
	if (!ctx.cr6.lt) goto loc_82299674;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x822995f4
	if (ctx.cr6.eq) goto loc_822995F4;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822c1a70
	ctx.lr = 0x822995EC;
	sub_822C1A70(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x822995f8
	goto loc_822995F8;
loc_822995F4:
	// mr r28,r22
	r28.u64 = r22.u64;
loc_822995F8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82299630
	if (!ctx.cr6.gt) goto loc_82299630;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_82299610:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82299624
	if (ctx.cr6.eq) goto loc_82299624;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82299624:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82299610
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82299610;
loc_82299630:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82299668
	if (ctx.cr6.eq) goto loc_82299668;
	// lbz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82299664
	if (ctx.cr0.eq) goto loc_82299664;
	// lwz r11,112(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 112);
	// lwz r9,-19400(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r26)
	REX_STORE_U32(r26.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82299664;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82299664:
	// stw r22,12(r31)
	REX_STORE_U32(r31.u32 + 12, r22.u32);
loc_82299668:
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// stb r24,16(r31)
	REX_STORE_U8(r31.u32 + 16, r24.u8);
loc_82299674:
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(r27.s32, r29.s32, ctx.xer);
	// bge cr6,0x822996a0
	if (!ctx.cr6.lt) goto loc_822996A0;
	// subf r11,r27,r29
	ctx.r11.u64 = r29.u64 - r27.u64;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82299688:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82299698
	if (ctx.cr0.eq) goto loc_82299698;
	// stw r22,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r22.u32);
loc_82299698:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82299688
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82299688;
loc_822996A0:
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x822996e8
	if (!ctx.cr6.gt) goto loc_822996E8;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_822996B8:
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822996b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822996B8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x822996e8
	if (!ctx.cr6.gt) goto loc_822996E8;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_822996D8:
	// lwz r9,32(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822996d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822996D8;
loc_822996E8:
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x82299774
	if (!ctx.cr6.gt) goto loc_82299774;
	// mtctr r23
	ctx.ctr.u64 = r23.u64;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_82299700:
	// lwz r7,72(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 72);
	// lwz r9,48(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r6,12(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// lwz r4,32(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lwzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r7,r9,15,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0xFFFF8000;
	// not r7,r7
	ctx.r7.u64 = ~ctx.r7.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r7,r9,10
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 10;
	// xor r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// mulli r9,r9,9
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(9));
	// srawi r7,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 6;
	// xor r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// rlwinm r7,r9,11,0,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// not r7,r7
	ctx.r7.u64 = ~ctx.r7.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r7,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 16;
	// xor r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// and r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 & ctx.r5.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// stwx r7,r10,r4
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r7,12(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stwx r8,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x82299700
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82299700;
loc_82299774:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_822B3348) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// lwz r11,384(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 384);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r11,92
	ctx.r9.s64 = ctx.r11.s64 + 92;
	// stw r11,384(r3)
	REX_STORE_U32(ctx.r3.u32 + 384, ctx.r11.u32);
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r5,r9,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// b 0x822b31f0
	sub_822B31F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822B8910) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a2ca4
	ctx.lr = 0x822B8920;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b8a14
	if (ctx.cr6.eq) goto loc_822B8A14;
	// lwz r11,192(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b8a14
	if (ctx.cr6.eq) goto loc_822B8A14;
	// lfs f13,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f0,52(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,-64
	ctx.r8.s64 = ctx.r1.s64 + -64;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,56(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f11,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lfs f7,32(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f9,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// lfs f8,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f4,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,180(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f11,f11,f12,f0
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f0.f64)));
	// lfs f0,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f6,f12,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f10.f64)));
	// stfs f0,-52(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// lfs f2,48(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,184(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f1.f64 = double(temp.f32);
	// fmr f27,f2
	f27.f64 = ctx.f2.f64;
	// fmadds f7,f5,f9,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f5.f64, ctx.f9.f64, ctx.f7.f64)));
	// lfs f31,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	f31.f64 = double(temp.f32);
	// lfs f10,52(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,176(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f6.f64 = double(temp.f32);
	// lfs f30,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	f30.f64 = double(temp.f32);
	// lfs f29,56(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	f29.f64 = double(temp.f32);
	// lfs f28,32(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	f28.f64 = double(temp.f32);
	// fmadds f11,f8,f9,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f8.f64, ctx.f9.f64, ctx.f11.f64)));
	// fmadds f0,f4,f9,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f4.f64, ctx.f9.f64, ctx.f12.f64)));
	// fmadds f13,f2,f13,f7
	ctx.f13.f64 = double(float(std::fma(ctx.f2.f64, ctx.f13.f64, ctx.f7.f64)));
	// fmuls f12,f3,f11
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f11,f8,f12
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f9,f31,f12
	ctx.f9.f64 = double(float(f31.f64 * ctx.f12.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmadds f11,f4,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f11.f64)));
	// fmadds f10,f30,f0,f9
	ctx.f10.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, ctx.f9.f64)));
	// fmadds f0,f29,f0,f12
	ctx.f0.f64 = double(float(std::fma(f29.f64, ctx.f0.f64, ctx.f12.f64)));
	// fmadds f12,f5,f13,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f11.f64)));
	// stfs f12,-64(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// fmadds f12,f28,f13,f10
	ctx.f12.f64 = double(float(std::fma(f28.f64, ctx.f13.f64, ctx.f10.f64)));
	// stfs f12,-60(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// fmadds f0,f2,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f2.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,-56(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// ld r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r11,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// std r10,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r10.u64);
loc_822B8A14:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2cf0
	ctx.lr = 0x822B8A1C;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C0F18) {
	REX_FUNC_PROLOGUE();
	// lwz r11,212(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c0f74
	if (ctx.cr0.eq) goto loc_822C0F74;
	// ld r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// std r9,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, ctx.r9.u64);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// std r11,88(r3)
	REX_STORE_U64(ctx.r3.u32 + 88, ctx.r11.u64);
	// ld r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// std r11,96(r3)
	REX_STORE_U64(ctx.r3.u32 + 96, ctx.r11.u64);
	// ld r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 40);
	// std r11,104(r3)
	REX_STORE_U64(ctx.r3.u32 + 104, ctx.r11.u64);
	// ld r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 48);
	// std r11,112(r3)
	REX_STORE_U64(ctx.r3.u32 + 112, ctx.r11.u64);
	// ld r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 56);
	// std r11,120(r3)
	REX_STORE_U64(ctx.r3.u32 + 120, ctx.r11.u64);
	// ld r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 64);
	// std r11,128(r3)
	REX_STORE_U64(ctx.r3.u32 + 128, ctx.r11.u64);
	// ld r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 72);
	// b 0x822c0fb8
	goto loc_822C0FB8;
loc_822C0F74:
	// ld r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// addi r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 + 80;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// std r10,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, ctx.r10.u64);
	// ld r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// std r11,88(r3)
	REX_STORE_U64(ctx.r3.u32 + 88, ctx.r11.u64);
	// ld r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 16);
	// std r11,96(r3)
	REX_STORE_U64(ctx.r3.u32 + 96, ctx.r11.u64);
	// ld r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 24);
	// std r11,104(r3)
	REX_STORE_U64(ctx.r3.u32 + 104, ctx.r11.u64);
	// ld r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 32);
	// std r11,112(r3)
	REX_STORE_U64(ctx.r3.u32 + 112, ctx.r11.u64);
	// ld r11,40(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 40);
	// std r11,120(r3)
	REX_STORE_U64(ctx.r3.u32 + 120, ctx.r11.u64);
	// ld r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 48);
	// std r11,128(r3)
	REX_STORE_U64(ctx.r3.u32 + 128, ctx.r11.u64);
	// ld r11,56(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 56);
loc_822C0FB8:
	// std r11,136(r3)
	REX_STORE_U64(ctx.r3.u32 + 136, ctx.r11.u64);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// ld r9,320(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 320);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// ld r7,344(r3)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r3.u32 + 344);
	// addi r8,r3,336
	ctx.r8.s64 = ctx.r3.s64 + 336;
	// ld r10,336(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 336);
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
	// ld r8,328(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 328);
	// std r10,160(r3)
	REX_STORE_U64(ctx.r3.u32 + 160, ctx.r10.u64);
	// std r9,144(r3)
	REX_STORE_U64(ctx.r3.u32 + 144, ctx.r9.u64);
	// std r8,152(r3)
	REX_STORE_U64(ctx.r3.u32 + 152, ctx.r8.u64);
	// std r7,168(r3)
	REX_STORE_U64(ctx.r3.u32 + 168, ctx.r7.u64);
	// ld r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// ld r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// ld r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 16);
	// std r10,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,24(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 24);
	// std r10,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// ld r10,32(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 32);
	// std r10,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r10.u64);
	// ld r10,40(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 40);
	// std r10,40(r11)
	REX_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,48(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 48);
	// std r10,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r10.u64);
	// ld r10,56(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 56);
	// std r10,56(r11)
	REX_STORE_U64(ctx.r11.u32 + 56, ctx.r10.u64);
	// b 0x822c0c48
	sub_822C0C48(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822C33C8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10544);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3530) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12620(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12620);
	// stw r4,12208(r3)
	REX_STORE_U32(ctx.r3.u32 + 12208, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,10380(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 10380);
	// rlwinm r11,r8,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x822c3568
	if (ctx.cr6.eq) goto loc_822C3568;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x822c3568
	if (ctx.cr6.eq) goto loc_822C3568;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x822c3568
	if (ctx.cr6.eq) goto loc_822C3568;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_822C3568:
	// rlwinm r10,r8,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x1;
	// xor. r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// rlwinm r11,r11,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// li r12,1
	ctx.r12.s64 = 1;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rldicr r12,r12,54,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi r11,r8,0,16,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF) | (ctx.r11.u64 & 0xF0000);
	// stw r11,10380(r3)
	REX_STORE_U32(ctx.r3.u32 + 10380, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C9208) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,7
	ctx.r10.s64 = 7;
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// li r9,1
	ctx.r9.s64 = 1;
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// lis r8,-1
	ctx.r8.s64 = -65536;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r4,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CB658) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r11,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm. r10,r11,17,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r9,r9,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xF;
	// beq 0x822cb67c
	if (ctx.cr0.eq) goto loc_822CB67C;
	// rlwinm. r8,r11,0,17,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822cb67c
	if (ctx.cr0.eq) goto loc_822CB67C;
	// li r9,15
	ctx.r9.s64 = 15;
loc_822CB67C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822cb694
	if (ctx.cr6.eq) goto loc_822CB694;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x822cb698
	if (ctx.cr6.lt) goto loc_822CB698;
loc_822CB694:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822CB698:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cb6ac
	if (ctx.cr0.eq) goto loc_822CB6AC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822cb6b0
	if (!ctx.cr6.eq) goto loc_822CB6B0;
loc_822CB6AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822CB6B0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// beqlr 
	if (ctx.cr0.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CDBD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822CDBD8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mulli r11,r11,9936
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9936));
	// add r30,r11,r3
	r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r31,r30,16
	r31.s64 = r30.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ccbb0
	ctx.lr = 0x822CDC08;
	sub_822CCBB0(ctx, base);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822cee48
	ctx.lr = 0x822CDC18;
	sub_822CEE48(ctx, base);
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 116);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822CEE48) {
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
	ctx.lr = 0x822CEE50;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822ceed8
	if (!ctx.cr6.gt) goto loc_822CEED8;
	// rlwinm r30,r10,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822cee84
	if (!ctx.cr6.lt) goto loc_822CEE84;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_822CEE84:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// mulli r3,r30,12
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(12));
	// bl 0x823f02b8
	ctx.lr = 0x822CEE90;
	sub_823F02B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x822ceea8
	if (!ctx.cr0.eq) goto loc_822CEEA8;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// b 0x822cef18
	goto loc_822CEF18;
loc_822CEEA8:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822ceed4
	if (ctx.cr6.eq) goto loc_822CEED4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mulli r5,r11,12
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// bl 0x826a1e70
	ctx.lr = 0x822CEEC8;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x823f0350
	ctx.lr = 0x822CEED4;
	sub_823F0350(ctx, base);
loc_822CEED4:
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
loc_822CEED8:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822cef18
	if (ctx.cr6.lt) goto loc_822CEF18;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_822CEF18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822D6610) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,8272
	ctx.r4.s64 = ctx.r11.s64 + 8272;
	// li r5,304
	ctx.r5.s64 = 304;
	// b 0x826a1e70
	sub_826A1E70(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D6778) {
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
	ctx.lr = 0x822D6780;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,156
	ctx.r3.s64 = 156;
	// bl 0x823f02b8
	ctx.lr = 0x822D6794;
	sub_823F02B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x822d67a4
	if (!ctx.cr0.eq) goto loc_822D67A4;
loc_822D679C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d6800
	goto loc_822D6800;
loc_822D67A4:
	// li r28,1
	r28.s64 = 1;
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// li r29,0
	r29.s64 = 0;
	// stw r10,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r10.u32);
	// addi r30,r31,88
	r30.s64 = r31.s64 + 88;
	// stw r28,148(r31)
	REX_STORE_U32(r31.u32 + 148, r28.u32);
loc_822D67CC:
	// addi r5,r30,-60
	ctx.r5.s64 = r30.s64 + -60;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822d6650
	ctx.lr = 0x822D67DC;
	sub_822D6650(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822d6808
	if (ctx.cr0.lt) goto loc_822D6808;
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822d67cc
	if (ctx.cr6.lt) goto loc_822D67CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r28,16(r31)
	REX_STORE_U8(r31.u32 + 16, r28.u8);
loc_822D6800:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_822D6808:
	// stw r29,152(r31)
	REX_STORE_U32(r31.u32 + 152, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d6818
	ctx.lr = 0x822D6814;
	sub_822D6818(ctx, base);
	// b 0x822d679c
	goto loc_822D679C;
}

DEFINE_REX_FUNC(sub_822DB870) {
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
	ctx.lr = 0x822DB878;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r3,1152
	ctx.r10.s64 = ctx.r3.s64 + 1152;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,48(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r11,18432
	ctx.r11.s64 = 18432;
	// addi r30,r10,-4
	r30.s64 = ctx.r10.s64 + -4;
loc_822DB894:
	// cntlzd r10,r31
	ctx.r10.u64 = r31.u64 == 0 ? 64 : __builtin_clzll(r31.u64);
	// lwz r8,52(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 52);
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// mulli r9,r10,6
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(6));
	// sld r31,r31,r7
	r31.u64 = ctx.r7.u8 & 0x40 ? 0 : (r31.u64 << (ctx.r7.u8 & 0x7F));
	// not r7,r31
	ctx.r7.u64 = ~r31.u64;
	// add r28,r9,r11
	r28.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cntlzd r26,r7
	r26.u64 = ctx.r7.u64 == 0 ? 64 : __builtin_clzll(ctx.r7.u64);
	// mulli r10,r10,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// mulli r29,r26,6
	r29.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(6));
	// addi r11,r29,5
	ctx.r11.s64 = r29.s64 + 5;
	// add r30,r10,r30
	r30.u64 = ctx.r10.u64 + r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822db950
	if (ctx.cr6.lt) goto loc_822DB950;
	// li r8,6
	ctx.r8.s64 = 6;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822dafe8
	ctx.lr = 0x822DB8EC;
	sub_822DAFE8(ctx, base);
	// clrldi r10,r26,32
	ctx.r10.u64 = r26.u64 & 0xFFFFFFFF;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// sld r31,r31,r10
	r31.u64 = ctx.r10.u8 & 0x40 ? 0 : (r31.u64 << (ctx.r10.u8 & 0x7F));
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r11,r29,r28
	ctx.r11.u64 = r29.u64 + r28.u64;
	// cmpldi cr6,r31,0
	ctx.cr6.compare<uint64_t>(r31.u64, 0, ctx.xer);
	// bne cr6,0x822db894
	if (!ctx.cr6.eq) goto loc_822DB894;
	// lwz r11,56(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 56);
	// stw r3,48(r27)
	REX_STORE_U32(r27.u32 + 48, ctx.r3.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822db924
	if (!ctx.cr6.gt) goto loc_822DB924;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822DB924;
	sub_822D5B28(ctx, base);
loc_822DB924:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,20480
	ctx.r11.u64 = ctx.r11.u64 | 20480;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r27)
	REX_STORE_U32(r27.u32 + 48, ctx.r3.u32);
	// b 0x822db9c0
	goto loc_822DB9C0;
loc_822DB950:
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// clrlwi r11,r4,29
	ctx.r11.u64 = ctx.r4.u32 & 0x7;
	// addi r9,r29,-1
	ctx.r9.s64 = r29.s64 + -1;
	// stw r10,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r10,r9,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// add r11,r29,r28
	ctx.r11.u64 = r29.u64 + r28.u64;
	// or r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 | r28.u64;
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
loc_822DB974:
	// ld r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 4);
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ld r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 12);
	// rldicr r31,r31,1,62
	r31.u64 = __builtin_rotateleft64(r31.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// ld r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U64(r30.u32 + 20);
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// std r10,4(r4)
	REX_STORE_U64(ctx.r4.u32 + 4, ctx.r10.u64);
	// std r9,12(r4)
	REX_STORE_U64(ctx.r4.u32 + 12, ctx.r9.u64);
	// std r8,20(r4)
	REX_STORE_U64(ctx.r4.u32 + 20, ctx.r8.u64);
	// addi r4,r4,24
	ctx.r4.s64 = ctx.r4.s64 + 24;
	// bne 0x822db974
	if (!ctx.cr0.eq) goto loc_822DB974;
	// cmpldi cr6,r31,0
	ctx.cr6.compare<uint64_t>(r31.u64, 0, ctx.xer);
	// bne cr6,0x822db894
	if (!ctx.cr6.eq) goto loc_822DB894;
	// li r11,37
	ctx.r11.s64 = 37;
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// rldicr r11,r11,44,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 44) & 0xFFFFF00000000000;
	// stw r10,48(r27)
	REX_STORE_U32(r27.u32 + 48, ctx.r10.u32);
	// std r11,4(r4)
	REX_STORE_U64(ctx.r4.u32 + 4, ctx.r11.u64);
	// std r11,12(r4)
	REX_STORE_U64(ctx.r4.u32 + 12, ctx.r11.u64);
loc_822DB9C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_822E5DE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822E5DF0;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// li r31,0
	r31.s64 = 0;
	// addi r7,r11,143
	ctx.r7.s64 = ctx.r11.s64 + 143;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r30,r7,0,0,24
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x822e5e60
	if (ctx.cr6.lt) goto loc_822E5E60;
	// addi r5,r3,-1
	ctx.r5.s64 = ctx.r3.s64 + -1;
	// addi r11,r4,-8
	ctx.r11.s64 = ctx.r4.s64 + -8;
loc_822E5E24:
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r29,16(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 16);
	// lbz r28,28(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 28);
	// addi r6,r6,128
	ctx.r6.s64 = ctx.r6.s64 + 128;
	// lwzu r7,24(r11)
	ea = 24 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// mullw r6,r6,r29
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(r29.s32);
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r7,r7,r28
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(r28.s32);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// blt cr6,0x822e5e24
	if (ctx.cr6.lt) goto loc_822E5E24;
loc_822E5E60:
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x822e5e8c
	if (!ctx.cr6.lt) goto loc_822E5E8C;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// addi r6,r10,128
	ctx.r6.s64 = ctx.r10.s64 + 128;
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// rlwinm r31,r5,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
loc_822E5E8C:
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822E9DF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822E9DF8;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// bl 0x822e6ff8
	ctx.lr = 0x822E9E0C;
	sub_822E6FF8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822e9f10
	if (ctx.cr0.eq) goto loc_822E9F10;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// lwz r3,6140(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6140);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822E9E30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r31,220
	ctx.r4.s64 = r31.s64 + 220;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x826a1e70
	ctx.lr = 0x822E9E44;
	sub_826A1E70(ctx, base);
	// lbz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 280);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822e9e58
	if (ctx.cr0.eq) goto loc_822E9E58;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_822E9E58:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,156(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f11,160(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,164(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lfs f9,168(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 168);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,172(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 172);
	ctx.f8.f64 = double(temp.f32);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f13,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f13,f11,f7
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f13,f9,f7
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// blt cr6,0x822e9ec4
	if (ctx.cr6.lt) goto loc_822E9EC4;
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_822E9EC4:
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r31,268
	ctx.r3.s64 = r31.s64 + 268;
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,6096(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 6096);
	// lfs f12,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f31,f12,f0,f13
	f31.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// lwz r31,16(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x822ee818
	ctx.lr = 0x822E9EEC;
	sub_822EE818(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// bl 0x82174318
	ctx.lr = 0x822E9F10;
	sub_82174318(ctx, base);
loc_822E9F10:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822F1D98) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca4
	ctx.lr = 0x822F1DA0;
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822f1df4
	if (!ctx.cr6.eq) goto loc_822F1DF4;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f1de4
	if (ctx.cr0.eq) goto loc_822F1DE4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,19172
	ctx.r4.s64 = ctx.r11.s64 + 19172;
	// b 0x822f1dec
	goto loc_822F1DEC;
loc_822F1DE4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,19180
	ctx.r4.s64 = ctx.r11.s64 + 19180;
loc_822F1DEC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F1DF4;
	sub_822F3C00(ctx, base);
loc_822F1DF4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// bne cr6,0x822f2660
	if (!ctx.cr6.eq) goto loc_822F2660;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x822f267c
	if (ctx.cr6.eq) goto loc_822F267C;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x822f1e40
	if (ctx.cr6.eq) goto loc_822F1E40;
	// cmpwi cr6,r5,15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 15, ctx.xer);
	// ble cr6,0x822f1e34
	if (!ctx.cr6.gt) goto loc_822F1E34;
	// cmpwi cr6,r5,19
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 19, ctx.xer);
	// ble cr6,0x822f1e40
	if (!ctx.cr6.gt) goto loc_822F1E40;
	// cmpwi cr6,r5,23
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 23, ctx.xer);
	// ble cr6,0x822f1e34
	if (!ctx.cr6.gt) goto loc_822F1E34;
	// cmpwi cr6,r5,26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 26, ctx.xer);
	// ble cr6,0x822f1e40
	if (!ctx.cr6.gt) goto loc_822F1E40;
loc_822F1E34:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18708
	ctx.r4.s64 = ctx.r11.s64 + 18708;
	// b 0x822f2670
	goto loc_822F2670;
loc_822F1E40:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmplwi cr6,r5,19
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 19, ctx.xer);
	// addi r4,r11,18416
	ctx.r4.s64 = ctx.r11.s64 + 18416;
	// bgt cr6,0x822f1ebc
	if (ctx.cr6.gt) goto loc_822F1EBC;
	// beq cr6,0x822f1eb0
	if (ctx.cr6.eq) goto loc_822F1EB0;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// beq cr6,0x822f1e98
	if (ctx.cr6.eq) goto loc_822F1E98;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// beq cr6,0x822f1e8c
	if (ctx.cr6.eq) goto loc_822F1E8C;
	// cmplwi cr6,r5,17
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 17, ctx.xer);
	// beq cr6,0x822f1e80
	if (ctx.cr6.eq) goto loc_822F1E80;
	// cmplwi cr6,r5,18
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 18, ctx.xer);
	// bne cr6,0x822f1ef4
	if (!ctx.cr6.eq) goto loc_822F1EF4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18432
	ctx.r4.s64 = ctx.r11.s64 + 18432;
	// b 0x822f1ef4
	goto loc_822F1EF4;
loc_822F1E80:
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-11204
	ctx.r10.s64 = ctx.r10.s64 + -11204;
	// b 0x822f1ea0
	goto loc_822F1EA0;
loc_822F1E8C:
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-11220
	ctx.r10.s64 = ctx.r10.s64 + -11220;
	// b 0x822f1ea0
	goto loc_822F1EA0;
loc_822F1E98:
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-11236
	ctx.r10.s64 = ctx.r10.s64 + -11236;
loc_822F1EA0:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,20,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x822f1ef4
	goto loc_822F1EF4;
loc_822F1EB0:
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-11188
	ctx.r10.s64 = ctx.r10.s64 + -11188;
	// b 0x822f1ea0
	goto loc_822F1EA0;
loc_822F1EBC:
	// cmplwi cr6,r5,24
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 24, ctx.xer);
	// beq cr6,0x822f1eec
	if (ctx.cr6.eq) goto loc_822F1EEC;
	// cmplwi cr6,r5,25
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 25, ctx.xer);
	// beq cr6,0x822f1ee0
	if (ctx.cr6.eq) goto loc_822F1EE0;
	// cmplwi cr6,r5,26
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 26, ctx.xer);
	// bne cr6,0x822f1ef4
	if (!ctx.cr6.eq) goto loc_822F1EF4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18476
	ctx.r4.s64 = ctx.r11.s64 + 18476;
	// b 0x822f1ef4
	goto loc_822F1EF4;
loc_822F1EE0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18460
	ctx.r4.s64 = ctx.r11.s64 + 18460;
	// b 0x822f1ef4
	goto loc_822F1EF4;
loc_822F1EEC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18448
	ctx.r4.s64 = ctx.r11.s64 + 18448;
loc_822F1EF4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3d58
	ctx.lr = 0x822F1F00;
	sub_822F3D58(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-26960
	ctx.r4.s64 = ctx.r11.s64 + -26960;
	// bl 0x822f3c00
	ctx.lr = 0x822F1F10;
	sub_822F3C00(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r28,r11,-26032
	r28.s64 = ctx.r11.s64 + -26032;
	// addi r30,r10,17936
	r30.s64 = ctx.r10.s64 + 17936;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r27,r9,-14240
	r27.s64 = ctx.r9.s64 + -14240;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 19, ctx.xer);
	// bgt cr6,0x822f202c
	if (ctx.cr6.gt) goto loc_822F202C;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r5,r11,20,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x822f1f54
	if (ctx.cr0.eq) goto loc_822F1F54;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18108
	ctx.r4.s64 = ctx.r11.s64 + 18108;
	// b 0x822f1f5c
	goto loc_822F1F5C;
loc_822F1F54:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18120
	ctx.r4.s64 = ctx.r11.s64 + 18120;
loc_822F1F5C:
	// bl 0x822f3c00
	ctx.lr = 0x822F1F60;
	sub_822F3C00(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// clrlwi. r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822f1f90
	if (!ctx.cr0.eq) goto loc_822F1F90;
	// rlwinm r10,r11,0,26,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x38;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x822f1f90
	if (!ctx.cr6.eq) goto loc_822F1F90;
	// rlwinm r10,r11,0,23,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C0;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bne cr6,0x822f1f90
	if (!ctx.cr6.eq) goto loc_822F1F90;
	// rlwinm r11,r11,0,20,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE00;
	// cmplwi cr6,r11,1536
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1536, ctx.xer);
	// beq cr6,0x822f201c
	if (ctx.cr6.eq) goto loc_822F201C;
loc_822F1F90:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F1F9C;
	sub_822F3C00(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r11,r28,-492
	ctx.r11.s64 = r28.s64 + -492;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x822f3c00
	ctx.lr = 0x822F1FBC;
	sub_822F3C00(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r11,r28,-492
	ctx.r11.s64 = r28.s64 + -492;
	// rlwinm r10,r10,29,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x7;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x822f3c00
	ctx.lr = 0x822F1FDC;
	sub_822F3C00(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r11,r28,-492
	ctx.r11.s64 = r28.s64 + -492;
	// rlwinm r10,r10,26,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x7;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x822f3c00
	ctx.lr = 0x822F1FFC;
	sub_822F3C00(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r11,r28,-492
	ctx.r11.s64 = r28.s64 + -492;
	// rlwinm r10,r10,23,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x822f3c00
	ctx.lr = 0x822F201C;
	sub_822F3C00(ctx, base);
loc_822F201C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,9192
	ctx.r4.s64 = ctx.r11.s64 + 9192;
	// bl 0x822f3c00
	ctx.lr = 0x822F202C;
	sub_822F3C00(ctx, base);
loc_822F202C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r5,r11,27,25,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x40;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// rlwinm r11,r11,27,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// stb r10,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r10.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// or r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 | ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f1038
	ctx.lr = 0x822F2068;
	sub_822F1038(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F2074;
	sub_822F3C00(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x822f20e4
	if (ctx.cr6.eq) goto loc_822F20E4;
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x822f2128
	if (ctx.cr6.eq) goto loc_822F2128;
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// addi r10,r28,-492
	ctx.r10.s64 = r28.s64 + -492;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// beq cr6,0x822f215c
	if (ctx.cr6.eq) goto loc_822F215C;
loc_822F20AC:
	// bl 0x822f3c00
	ctx.lr = 0x822F20B0;
	sub_822F3C00(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r11,r28,-492
	ctx.r11.s64 = r28.s64 + -492;
	// rlwinm r10,r10,4,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x822f3c00
	ctx.lr = 0x822F20D0;
	sub_822F3C00(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r10,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
loc_822F20D8:
	// addi r11,r28,-492
	ctx.r11.s64 = r28.s64 + -492;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// b 0x822f2150
	goto loc_822F2150;
loc_822F20E4:
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r10,r10,18,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x822f2144
	if (ctx.cr6.lt) goto loc_822F2144;
	// beq cr6,0x822f211c
	if (ctx.cr6.eq) goto loc_822F211C;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x822f2160
	if (!ctx.cr6.lt) goto loc_822F2160;
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// addi r10,r28,-492
	ctx.r10.s64 = r28.s64 + -492;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// b 0x822f20ac
	goto loc_822F20AC;
loc_822F211C:
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822F2128:
	// addi r10,r28,-492
	ctx.r10.s64 = r28.s64 + -492;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x822f3c00
	ctx.lr = 0x822F2138;
	sub_822F3C00(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r10,4,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x3;
	// b 0x822f20d8
	goto loc_822F20D8;
loc_822F2144:
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// addi r10,r28,-492
	ctx.r10.s64 = r28.s64 + -492;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
loc_822F2150:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
loc_822F215C:
	// bl 0x822f3c00
	ctx.lr = 0x822F2160;
	sub_822F3C00(ctx, base);
loc_822F2160:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 19, ctx.xer);
	// bgt cr6,0x822f2184
	if (ctx.cr6.gt) goto loc_822F2184;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// rlwinm r5,r11,12,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1F;
	// addi r4,r10,18492
	ctx.r4.s64 = ctx.r10.s64 + 18492;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F2184;
	sub_822F3C00(ctx, base);
loc_822F2184:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r10,18500
	ctx.r4.s64 = ctx.r10.s64 + 18500;
	// rlwinm r5,r11,13,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f1d30
	ctx.lr = 0x822F21A0;
	sub_822F1D30(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r27,r11,18144
	r27.s64 = ctx.r11.s64 + 18144;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r10,r10,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + r27.u32);
	// andi. r10,r10,23
	ctx.r10.u64 = ctx.r10.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822f21d8
	if (ctx.cr0.eq) goto loc_822F21D8;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,18516
	ctx.r4.s64 = ctx.r10.s64 + 18516;
	// rlwinm r5,r11,7,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f1d30
	ctx.lr = 0x822F21D8;
	sub_822F1D30(ctx, base);
loc_822F21D8:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r30,r11,18136
	r30.s64 = ctx.r11.s64 + 18136;
	// lbzx r11,r10,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + r27.u32);
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f2234
	if (ctx.cr0.eq) goto loc_822F2234;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r10,20,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x3;
	// bne 0x822f2214
	if (!ctx.cr0.eq) goto loc_822F2214;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x822f2234
	if (ctx.cr6.eq) goto loc_822F2234;
loc_822F2214:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,-96
	ctx.r10.s64 = r28.s64 + -96;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r9,13372
	ctx.r5.s64 = ctx.r9.s64 + 13372;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x822f3c00
	ctx.lr = 0x822F2234;
	sub_822F3C00(ctx, base);
loc_822F2234:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r27.u32);
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f2288
	if (ctx.cr0.eq) goto loc_822F2288;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r10,18,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3;
	// bne 0x822f2268
	if (!ctx.cr0.eq) goto loc_822F2268;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x822f2288
	if (ctx.cr6.eq) goto loc_822F2288;
loc_822F2268:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,-80
	ctx.r10.s64 = r28.s64 + -80;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r9,13384
	ctx.r5.s64 = ctx.r9.s64 + 13384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x822f3c00
	ctx.lr = 0x822F2288;
	sub_822F3C00(ctx, base);
loc_822F2288:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r27.u32);
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f22dc
	if (ctx.cr0.eq) goto loc_822F22DC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lhz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 4);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// bne 0x822f22bc
	if (!ctx.cr0.eq) goto loc_822F22BC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x822f22dc
	if (ctx.cr6.eq) goto loc_822F22DC;
loc_822F22BC:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,-64
	ctx.r10.s64 = r28.s64 + -64;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r9,13396
	ctx.r5.s64 = ctx.r9.s64 + 13396;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x822f3c00
	ctx.lr = 0x822F22DC;
	sub_822F3C00(ctx, base);
loc_822F22DC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r27.u32);
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f2330
	if (ctx.cr0.eq) goto loc_822F2330;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r10,14,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x7;
	// bne 0x822f2310
	if (!ctx.cr0.eq) goto loc_822F2310;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x822f2330
	if (ctx.cr6.eq) goto loc_822F2330;
loc_822F2310:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,-48
	ctx.r10.s64 = r28.s64 + -48;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r9,18544
	ctx.r5.s64 = ctx.r9.s64 + 18544;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x822f3c00
	ctx.lr = 0x822F2330;
	sub_822F3C00(ctx, base);
loc_822F2330:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,0,16,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x822f2394
	if (ctx.cr6.lt) goto loc_822F2394;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r27.u32);
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f2394
	if (ctx.cr0.eq) goto loc_822F2394;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lbz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 4);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// bne 0x822f2374
	if (!ctx.cr0.eq) goto loc_822F2374;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x822f2394
	if (ctx.cr6.eq) goto loc_822F2394;
loc_822F2374:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,-16
	ctx.r10.s64 = r28.s64 + -16;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r9,18556
	ctx.r5.s64 = ctx.r9.s64 + 18556;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x822f3c00
	ctx.lr = 0x822F2394;
	sub_822F3C00(ctx, base);
loc_822F2394:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,0,16,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x822f23f4
	if (ctx.cr6.lt) goto loc_822F23F4;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r27.u32);
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f23f4
	if (ctx.cr0.eq) goto loc_822F23F4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r10,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3;
	// bne 0x822f23d8
	if (!ctx.cr0.eq) goto loc_822F23D8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x822f23f4
	if (ctx.cr6.eq) goto loc_822F23F4;
loc_822F23D8:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r10,18572
	ctx.r5.s64 = ctx.r10.s64 + 18572;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r6,r11,r28
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// bl 0x822f3c00
	ctx.lr = 0x822F23F4;
	sub_822F3C00(ctx, base);
loc_822F23F4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r27.u32);
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f2428
	if (ctx.cr0.eq) goto loc_822F2428;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r10,18588
	ctx.r4.s64 = ctx.r10.s64 + 18588;
	// rlwinm r5,r11,4,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f1d30
	ctx.lr = 0x822F2428;
	sub_822F1D30(ctx, base);
loc_822F2428:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r27.u32);
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f245c
	if (ctx.cr0.eq) goto loc_822F245C;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,18604
	ctx.r4.s64 = ctx.r10.s64 + 18604;
	// rlwinm r5,r11,3,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f1d30
	ctx.lr = 0x822F245C;
	sub_822F1D30(ctx, base);
loc_822F245C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r27.u32);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f248c
	if (ctx.cr0.eq) goto loc_822F248C;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,18620
	ctx.r4.s64 = ctx.r10.s64 + 18620;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f1d30
	ctx.lr = 0x822F248C;
	sub_822F1D30(ctx, base);
loc_822F248C:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// lbzx r11,r10,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + r27.u32);
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f2504
	if (ctx.cr0.eq) goto loc_822F2504;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f24c4
	if (!ctx.cr0.eq) goto loc_822F24C4;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm. r11,r11,0,23,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f2504
	if (ctx.cr0.eq) goto loc_822F2504;
loc_822F24C4:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lfs f0,904(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// rlwinm r11,r11,23,0,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xFF800000;
	// addi r4,r10,18644
	ctx.r4.s64 = ctx.r10.s64 + 18644;
	// srawi r11,r11,25
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 25;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f13,120(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x822f3c00
	ctx.lr = 0x822F2504;
	sub_822F3C00(ctx, base);
loc_822F2504:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lfs f31,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	f31.f64 = double(temp.f32);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r27.u32);
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f2574
	if (ctx.cr0.eq) goto loc_822F2574;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f2538
	if (!ctx.cr0.eq) goto loc_822F2538;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm. r11,r11,0,11,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f2574
	if (ctx.cr0.eq) goto loc_822F2574;
loc_822F2538:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// addi r4,r10,18660
	ctx.r4.s64 = ctx.r10.s64 + 18660;
	// srawi r11,r11,27
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 27;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x822f3c00
	ctx.lr = 0x822F2574;
	sub_822F3C00(ctx, base);
loc_822F2574:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r10,r11,0,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// blt cr6,0x822f25e8
	if (ctx.cr6.lt) goto loc_822F25E8;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// lbzx r10,r10,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + r27.u32);
	// andi. r10,r10,19
	ctx.r10.u64 = ctx.r10.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822f25e8
	if (ctx.cr0.eq) goto loc_822F25E8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r10,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822f25b0
	if (!ctx.cr0.eq) goto loc_822F25B0;
	// rlwinm. r10,r11,0,6,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3E00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822f25e8
	if (ctx.cr0.eq) goto loc_822F25E8;
loc_822F25B0:
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// srawi r11,r11,27
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 27;
	// addi r4,r10,18676
	ctx.r4.s64 = ctx.r10.s64 + 18676;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x822f3c00
	ctx.lr = 0x822F25E8;
	sub_822F3C00(ctx, base);
loc_822F25E8:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r10,r11,0,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// blt cr6,0x822f2bc0
	if (ctx.cr6.lt) goto loc_822F2BC0;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// lbzx r10,r10,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + r27.u32);
	// andi. r10,r10,19
	ctx.r10.u64 = ctx.r10.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822f2bc0
	if (ctx.cr0.eq) goto loc_822F2BC0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r10,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822f2624
	if (!ctx.cr0.eq) goto loc_822F2624;
	// rlwinm. r10,r11,0,1,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7C000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822f2bc0
	if (ctx.cr0.eq) goto loc_822F2BC0;
loc_822F2624:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// srawi r11,r11,27
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 27;
	// addi r4,r10,18692
	ctx.r4.s64 = ctx.r10.s64 + 18692;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x822f3c00
	ctx.lr = 0x822F265C;
	sub_822F3C00(ctx, base);
	// b 0x822f2bc0
	goto loc_822F2BC0;
loc_822F2660:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x822f267c
	if (ctx.cr6.eq) goto loc_822F267C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18384
	ctx.r4.s64 = ctx.r11.s64 + 18384;
loc_822F2670:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F2678;
	sub_822F3C00(ctx, base);
	// b 0x822f2bc0
	goto loc_822F2BC0;
loc_822F267C:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r27,0
	r27.s64 = 0;
	// rlwinm. r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r27,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, r27.u8);
	// mr r26,r27
	r26.u64 = r27.u64;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// bne 0x822f26d8
	if (!ctx.cr0.eq) goto loc_822F26D8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f26d8
	if (!ctx.cr0.eq) goto loc_822F26D8;
	// lwz r11,8224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f26d8
	if (ctx.cr6.eq) goto loc_822F26D8;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,8228(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8228);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bctrl 
	ctx.lr = 0x822F26CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822f26d8
	if (!ctx.cr0.eq) goto loc_822F26D8;
	// li r26,1
	r26.s64 = 1;
loc_822F26D8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x822f26ec
	if (!ctx.cr6.eq) goto loc_822F26EC;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x822f26f0
	if (ctx.cr0.eq) goto loc_822F26F0;
loc_822F26EC:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_822F26F0:
	// clrlwi r30,r11,24
	r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x822f2708
	if (ctx.cr6.eq) goto loc_822F2708;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18172
	ctx.r4.s64 = ctx.r11.s64 + 18172;
	// b 0x822f2724
	goto loc_822F2724;
loc_822F2708:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f271c
	if (ctx.cr0.eq) goto loc_822F271C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18184
	ctx.r4.s64 = ctx.r11.s64 + 18184;
	// b 0x822f2724
	goto loc_822F2724;
loc_822F271C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18192
	ctx.r4.s64 = ctx.r11.s64 + 18192;
loc_822F2724:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3d58
	ctx.lr = 0x822F2730;
	sub_822F3D58(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-26960
	ctx.r4.s64 = ctx.r11.s64 + -26960;
	// bl 0x822f3c00
	ctx.lr = 0x822F2740;
	sub_822F3C00(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r5,r11,20,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// beq 0x822f2760
	if (ctx.cr0.eq) goto loc_822F2760;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18108
	ctx.r4.s64 = ctx.r11.s64 + 18108;
	// b 0x822f2768
	goto loc_822F2768;
loc_822F2760:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18120
	ctx.r4.s64 = ctx.r11.s64 + 18120;
loc_822F2768:
	// bl 0x822f3c00
	ctx.lr = 0x822F276C;
	sub_822F3C00(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// clrlwi. r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r28,r10,-26032
	r28.s64 = ctx.r10.s64 + -26032;
	// bne 0x822f27a4
	if (!ctx.cr0.eq) goto loc_822F27A4;
	// rlwinm r10,r11,0,26,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x38;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x822f27a4
	if (!ctx.cr6.eq) goto loc_822F27A4;
	// rlwinm r10,r11,0,23,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C0;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bne cr6,0x822f27a4
	if (!ctx.cr6.eq) goto loc_822F27A4;
	// rlwinm r11,r11,0,20,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE00;
	// cmplwi cr6,r11,1536
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1536, ctx.xer);
	// beq cr6,0x822f283c
	if (ctx.cr6.eq) goto loc_822F283C;
loc_822F27A4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-14240
	ctx.r4.s64 = ctx.r11.s64 + -14240;
	// bl 0x822f3c00
	ctx.lr = 0x822F27B4;
	sub_822F3C00(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r28,-492
	ctx.r11.s64 = r28.s64 + -492;
	// addi r24,r10,17936
	r24.s64 = ctx.r10.s64 + 17936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x822f3c00
	ctx.lr = 0x822F27DC;
	sub_822F3C00(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r11,r28,-492
	ctx.r11.s64 = r28.s64 + -492;
	// rlwinm r10,r10,29,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x7;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x822f3c00
	ctx.lr = 0x822F27FC;
	sub_822F3C00(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r11,r28,-492
	ctx.r11.s64 = r28.s64 + -492;
	// rlwinm r10,r10,26,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x7;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x822f3c00
	ctx.lr = 0x822F281C;
	sub_822F3C00(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r11,r28,-492
	ctx.r11.s64 = r28.s64 + -492;
	// rlwinm r10,r10,23,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x822f3c00
	ctx.lr = 0x822F283C;
	sub_822F3C00(ctx, base);
loc_822F283C:
	// clrlwi. r24,r30,24
	r24.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne 0x822f284c
	if (!ctx.cr0.eq) goto loc_822F284C;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f28bc
	if (ctx.cr0.eq) goto loc_822F28BC;
loc_822F284C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,9192
	ctx.r4.s64 = ctx.r11.s64 + 9192;
	// bl 0x822f3c00
	ctx.lr = 0x822F285C;
	sub_822F3C00(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r27,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, r27.u8);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r5,r11,27,25,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x40;
	// rlwinm r11,r11,27,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// or r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 | ctx.r11.u64;
	// bl 0x822f1038
	ctx.lr = 0x822F2898;
	sub_822F1038(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r28,-492
	ctx.r11.s64 = r28.s64 + -492;
	// addi r4,r10,18204
	ctx.r4.s64 = ctx.r10.s64 + 18204;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r10,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x822f3c00
	ctx.lr = 0x822F28BC;
	sub_822F3C00(ctx, base);
loc_822F28BC:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x822f28ec
	if (ctx.cr6.eq) goto loc_822F28EC;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r9,r11,12,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1F;
	// rlwinm r11,r11,7,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x3;
	// mulli r9,r9,3
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(3));
	// subfic r9,r9,95
	ctx.xer.ca = ctx.r9.u32 <= 95;
	ctx.r9.u64 = static_cast<uint64_t>(95) - ctx.r9.u64;
	// addi r4,r10,18208
	ctx.r4.s64 = ctx.r10.s64 + 18208;
	// subf r5,r11,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r11.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F28EC;
	sub_822F3C00(ctx, base);
loc_822F28EC:
	// clrlwi. r26,r26,24
	r26.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq 0x822f2934
	if (ctx.cr0.eq) goto loc_822F2934;
	// lbz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 112);
	// addi r10,r28,304
	ctx.r10.s64 = r28.s64 + 304;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// rlwinm r8,r11,30,2,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,18216
	ctx.r4.s64 = ctx.r9.s64 + 18216;
	// clrlwi r30,r11,28
	r30.u64 = ctx.r11.u32 & 0xF;
	// lwzx r5,r8,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x822f3c00
	ctx.lr = 0x822F2918;
	sub_822F3C00(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822f2934
	if (ctx.cr6.eq) goto loc_822F2934;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,28480
	ctx.r4.s64 = ctx.r11.s64 + 28480;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F2934;
	sub_822F3C00(ctx, base);
loc_822F2934:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// addi r30,r11,19324
	r30.s64 = ctx.r11.s64 + 19324;
	// addi r27,r10,19332
	r27.s64 = ctx.r10.s64 + 19332;
	// bne cr6,0x822f29cc
	if (!ctx.cr6.eq) goto loc_822F29CC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f2960
	if (!ctx.cr0.eq) goto loc_822F2960;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne cr6,0x822f2988
	if (!ctx.cr6.eq) goto loc_822F2988;
loc_822F2960:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f1cc8
	ctx.lr = 0x822F2968;
	sub_822F1CC8(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// beq cr6,0x822f2978
	if (ctx.cr6.eq) goto loc_822F2978;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_822F2978:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,18224
	ctx.r4.s64 = ctx.r11.s64 + 18224;
	// bl 0x822f3c00
	ctx.lr = 0x822F2988;
	sub_822F3C00(ctx, base);
loc_822F2988:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f29a0
	if (!ctx.cr0.eq) goto loc_822F29A0;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f29cc
	if (ctx.cr0.eq) goto loc_822F29CC;
loc_822F29A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f1cc8
	ctx.lr = 0x822F29A8;
	sub_822F1CC8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f29bc
	if (!ctx.cr0.eq) goto loc_822F29BC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_822F29BC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,18244
	ctx.r4.s64 = ctx.r11.s64 + 18244;
	// bl 0x822f3c00
	ctx.lr = 0x822F29CC;
	sub_822F3C00(ctx, base);
loc_822F29CC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f29e4
	if (!ctx.cr0.eq) goto loc_822F29E4;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm. r11,r11,0,2,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f2a08
	if (ctx.cr0.eq) goto loc_822F2A08;
loc_822F29E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f1cc8
	ctx.lr = 0x822F29EC;
	sub_822F1CC8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,18260
	ctx.r4.s64 = ctx.r11.s64 + 18260;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r5,r11,26
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFFFF) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 26;
	// bl 0x822f3c00
	ctx.lr = 0x822F2A08;
	sub_822F3C00(ctx, base);
loc_822F2A08:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x822f2bc0
	if (!ctx.cr6.eq) goto loc_822F2BC0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,19228
	ctx.r4.s64 = ctx.r11.s64 + 19228;
	// bl 0x822f3d00
	ctx.lr = 0x822F2A20;
	sub_822F3D00(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f2a38
	if (!ctx.cr0.eq) goto loc_822F2A38;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm. r11,r11,0,1,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FFFFF00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f2a5c
	if (ctx.cr0.eq) goto loc_822F2A5C;
loc_822F2A38:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f1cc8
	ctx.lr = 0x822F2A40;
	sub_822F1CC8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,18276
	ctx.r4.s64 = ctx.r11.s64 + 18276;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r5,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 9;
	// bl 0x822f3c00
	ctx.lr = 0x822F2A5C;
	sub_822F3C00(ctx, base);
loc_822F2A5C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f2a74
	if (!ctx.cr0.eq) goto loc_822F2A74;
	// lhz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 4);
	// clrlwi. r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f2a9c
	if (ctx.cr0.eq) goto loc_822F2A9C;
loc_822F2A74:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f1cc8
	ctx.lr = 0x822F2A7C;
	sub_822F1CC8(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r28,32
	ctx.r11.s64 = r28.s64 + 32;
	// addi r4,r10,18288
	ctx.r4.s64 = ctx.r10.s64 + 18288;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 4);
	// rlwinm r10,r10,2,24,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x822f3c00
	ctx.lr = 0x822F2A9C;
	sub_822F3C00(ctx, base);
loc_822F2A9C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x822f2ad8
	if (ctx.cr6.eq) goto loc_822F2AD8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f2abc
	if (!ctx.cr0.eq) goto loc_822F2ABC;
	// lbz r11,11(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 11);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822f2ad8
	if (ctx.cr0.eq) goto loc_822F2AD8;
loc_822F2ABC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f1cc8
	ctx.lr = 0x822F2AC4;
	sub_822F1CC8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r5,11(r29)
	ctx.r5.u64 = REX_LOAD_U8(r29.u32 + 11);
	// addi r4,r11,18304
	ctx.r4.s64 = ctx.r11.s64 + 18304;
	// bl 0x822f3c00
	ctx.lr = 0x822F2AD8;
	sub_822F3C00(ctx, base);
loc_822F2AD8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f2af0
	if (!ctx.cr0.eq) goto loc_822F2AF0;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f2b1c
	if (ctx.cr0.eq) goto loc_822F2B1C;
loc_822F2AF0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f1cc8
	ctx.lr = 0x822F2AF8;
	sub_822F1CC8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f2b0c
	if (!ctx.cr0.eq) goto loc_822F2B0C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_822F2B0C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,18316
	ctx.r4.s64 = ctx.r11.s64 + 18316;
	// bl 0x822f3c00
	ctx.lr = 0x822F2B1C;
	sub_822F3C00(ctx, base);
loc_822F2B1C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f2b34
	if (!ctx.cr0.eq) goto loc_822F2B34;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f2b6c
	if (ctx.cr0.eq) goto loc_822F2B6C;
loc_822F2B34:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f1cc8
	ctx.lr = 0x822F2B3C;
	sub_822F1CC8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f2b54
	if (ctx.cr0.eq) goto loc_822F2B54;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r11,18328
	ctx.r5.s64 = ctx.r11.s64 + 18328;
	// b 0x822f2b5c
	goto loc_822F2B5C;
loc_822F2B54:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r11,18336
	ctx.r5.s64 = ctx.r11.s64 + 18336;
loc_822F2B5C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,18348
	ctx.r4.s64 = ctx.r11.s64 + 18348;
	// bl 0x822f3c00
	ctx.lr = 0x822F2B6C;
	sub_822F3C00(ctx, base);
loc_822F2B6C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x822f2bb0
	if (ctx.cr6.eq) goto loc_822F2BB0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f2b8c
	if (!ctx.cr0.eq) goto loc_822F2B8C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r11,r11,0,2,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x38000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f2bb0
	if (ctx.cr0.eq) goto loc_822F2BB0;
loc_822F2B8C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f1cc8
	ctx.lr = 0x822F2B94;
	sub_822F1CC8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,18364
	ctx.r4.s64 = ctx.r11.s64 + 18364;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,5,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x7;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x822f3c00
	ctx.lr = 0x822F2BB0;
	sub_822F3C00(ctx, base);
loc_822F2BB0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,19212
	ctx.r4.s64 = ctx.r11.s64 + 19212;
	// bl 0x822f3d00
	ctx.lr = 0x822F2BC0;
	sub_822F3D00(ctx, base);
loc_822F2BC0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82363F18) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82363f28
	if (!ctx.cr6.eq) goto loc_82363F28;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82363F28:
	// b 0x82363490
	sub_82363490(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82364880) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82364888;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r3,348
	r31.s64 = ctx.r3.s64 + 348;
	// li r30,2
	r30.s64 = 2;
loc_82364898:
	// lwz r11,-8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823648b8
	if (ctx.cr6.eq) goto loc_823648B8;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82331a00
	ctx.lr = 0x823648B8;
	sub_82331A00(ctx, base);
loc_823648B8:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x82364898
	if (!ctx.cr0.eq) goto loc_82364898;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82365EC8) {
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
	ctx.lr = 0x82365ED0;
	// lis r10,-32125
	ctx.r10.s64 = -2105344000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r23,r10,24576
	r23.s64 = ctx.r10.s64 + 24576;
	// li r24,1
	r24.s64 = 1;
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// stw r11,8(r23)
	REX_STORE_U32(r23.u32 + 8, ctx.r11.u32);
	// ble cr6,0x82365f2c
	if (!ctx.cr6.gt) goto loc_82365F2C;
loc_82365EEC:
	// srawi r5,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x82365f1c
	if (!ctx.cr6.gt) goto loc_82365F1C;
	// rlwinm r9,r24,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// addi r10,r23,4
	ctx.r10.s64 = r23.s64 + 4;
	// addi r11,r23,4
	ctx.r11.s64 = r23.s64 + 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82365F0C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82365f0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82365F0C;
loc_82365F1C:
	// rlwinm r24,r24,1,0,30
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r24,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82365eec
	if (ctx.cr6.lt) goto loc_82365EEC;
loc_82365F2C:
	// rlwinm r10,r24,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x823660c4
	if (!ctx.cr6.eq) goto loc_823660C4;
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x823663d0
	if (!ctx.cr6.gt) goto loc_823663D0;
	// li r27,0
	r27.s64 = 0;
	// addi r26,r23,4
	r26.s64 = r23.s64 + 4;
loc_82365F50:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x82366070
	if (!ctx.cr6.gt) goto loc_82366070;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r23,4
	r31.s64 = r23.s64 + 4;
loc_82365F68:
	// lwzu r10,4(r31)
	ea = 4 + r31.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// lwz r9,4(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 4);
	// add r6,r10,r27
	ctx.r6.u64 = ctx.r10.u64 + r27.u64;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// rlwinm r29,r3,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r6,r30,r6
	ctx.r6.u64 = r30.u64 + ctx.r6.u64;
	// lfs f12,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// add r10,r29,r4
	ctx.r10.u64 = r29.u64 + ctx.r4.u64;
	// lfs f11,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r29,r6,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// add r9,r29,r4
	ctx.r9.u64 = r29.u64 + ctx.r4.u64;
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// rlwinm r29,r3,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f10,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// lfs f9,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// subf r6,r11,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lfs f8,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r28,r6,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f7,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// add r6,r30,r6
	ctx.r6.u64 = r30.u64 + ctx.r6.u64;
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// add r10,r29,r4
	ctx.r10.u64 = r29.u64 + ctx.r4.u64;
	// stfs f7,0(r7)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f9,0(r9)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// add r9,r28,r4
	ctx.r9.u64 = r28.u64 + ctx.r4.u64;
	// stfs f10,0(r5)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f6,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// lfsx f5,r29,r4
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r4.u32);
	ctx.f5.f64 = double(temp.f32);
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lfsx f4,r28,r4
	temp.u32 = REX_LOAD_U32(r28.u32 + ctx.r4.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// add r9,r5,r4
	ctx.r9.u64 = ctx.r5.u64 + ctx.r4.u64;
	// stfsx f4,r29,r4
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r29.u32 + ctx.r4.u32, temp.u32);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// stfs f3,0(r7)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfsx f5,r28,r4
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r28.u32 + ctx.r4.u32, temp.u32);
	// stfs f6,0(r6)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f2,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfsx f1,r3,r4
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	ctx.f1.f64 = double(temp.f32);
	// lfsx f0,r5,r4
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f0,r3,r4
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + ctx.r4.u32, temp.u32);
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfsx f1,r5,r4
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r4.u32, temp.u32);
	// stfs f2,4(r9)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// bdnz 0x82365f68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82365F68;
loc_82366070:
	// lwzu r10,4(r26)
	ea = 4 + r26.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	r26.u32 = ea;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r25,r24
	ctx.cr6.compare<int32_t>(r25.s32, r24.s32, ctx.xer);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f11,4(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f12,4(r9)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// blt cr6,0x82365f50
	if (ctx.cr6.lt) goto loc_82365F50;
	// b 0x826a1cf4
	return;
loc_823660C4:
	// li r26,1
	r26.s64 = 1;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(r24.s32, 1, ctx.xer);
	// ble cr6,0x823663d0
	if (!ctx.cr6.gt) goto loc_823663D0;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r23,12
	ctx.r6.s64 = r23.s64 + 12;
loc_823660D8:
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(r26.s32, 4, ctx.xer);
	// blt cr6,0x82366314
	if (ctx.cr6.lt) goto loc_82366314;
	// addi r9,r26,-4
	ctx.r9.s64 = r26.s64 + -4;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r23,4
	ctx.r9.s64 = r23.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r27,r8,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82366100:
	// lwz r8,0(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// addi r3,r10,6
	ctx.r3.s64 = ctx.r10.s64 + 6;
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r31,r8,r10
	r31.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r30,r7,r5
	r30.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r30,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// addi r29,r8,4
	r29.s64 = ctx.r8.s64 + 4;
	// addi r28,r7,4
	r28.s64 = ctx.r7.s64 + 4;
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r30,r30,r11
	r30.u64 = r30.u64 + ctx.r11.u64;
	// lfs f13,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f11,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r8)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// add r8,r31,r4
	ctx.r8.u64 = r31.u64 + ctx.r4.u64;
	// stfs f11,0(r29)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// add r7,r30,r4
	ctx.r7.u64 = r30.u64 + ctx.r4.u64;
	// stfs f13,0(r28)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// lfsx f10,r31,r4
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f8,r30,r4
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r4.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfsx f8,r31,r4
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + ctx.r4.u32, temp.u32);
	// stfs f7,4(r8)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfsx f10,r30,r4
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r30.u32 + ctx.r4.u32, temp.u32);
	// stfs f9,4(r7)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r7,8(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r8,0(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r31,r7,r5
	r31.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r30,r8,2
	r30.s64 = ctx.r8.s64 + 2;
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r30,2,0,29
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r8,r29,r4
	ctx.r8.u64 = r29.u64 + ctx.r4.u64;
	// add r30,r30,r11
	r30.u64 = r30.u64 + ctx.r11.u64;
	// addi r28,r8,4
	r28.s64 = ctx.r8.s64 + 4;
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// lfs f6,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f5,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f4,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// addi r29,r7,4
	r29.s64 = ctx.r7.s64 + 4;
	// lfs f3,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,0(r8)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// add r8,r30,r4
	ctx.r8.u64 = r30.u64 + ctx.r4.u64;
	// stfs f6,0(r28)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// stfs f5,0(r7)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// add r7,r31,r4
	ctx.r7.u64 = r31.u64 + ctx.r4.u64;
	// stfs f4,0(r29)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// lfs f2,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfsx f1,r31,r4
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r4.u32);
	ctx.f1.f64 = double(temp.f32);
	// lfsx f0,r30,r4
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f1,r30,r4
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + ctx.r4.u32, temp.u32);
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfsx f0,r31,r4
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + ctx.r4.u32, temp.u32);
	// stfs f2,4(r7)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r7,12(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r8,0(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r30,r8,-2
	r30.s64 = ctx.r8.s64 + -2;
	// add r31,r7,r5
	r31.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r28,r30,r11
	r28.u64 = r30.u64 + ctx.r11.u64;
	// addi r29,r8,4
	r29.s64 = ctx.r8.s64 + 4;
	// addi r30,r7,4
	r30.s64 = ctx.r7.s64 + 4;
	// lfs f12,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// lfs f11,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f9,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r28,r28,2,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f10,0(r8)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stfs f9,0(r29)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// add r8,r28,r4
	ctx.r8.u64 = r28.u64 + ctx.r4.u64;
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// add r7,r31,r4
	ctx.r7.u64 = r31.u64 + ctx.r4.u64;
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lfsx f8,r31,r4
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r4.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,r28,r4
	temp.u32 = REX_LOAD_U32(r28.u32 + ctx.r4.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfsx f8,r28,r4
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r28.u32 + ctx.r4.u32, temp.u32);
	// stfs f5,4(r8)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfsx f7,r31,r4
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + ctx.r4.u32, temp.u32);
	// stfs f6,4(r7)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwzu r8,16(r9)
	ea = 16 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// lwz r7,0(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r31,r8,r5
	r31.u64 = ctx.r8.u64 + ctx.r5.u64;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// addi r30,r8,4
	r30.s64 = ctx.r8.s64 + 4;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// lfs f4,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f3,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f2,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r29,r7,4
	r29.s64 = ctx.r7.s64 + 4;
	// lfs f1,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,0(r8)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stfs f3,0(r30)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f2,0(r7)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// add r7,r31,r4
	ctx.r7.u64 = r31.u64 + ctx.r4.u64;
	// stfs f4,0(r29)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// lfsx f13,r31,r4
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f11,r3,r4
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f13,r3,r4
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + ctx.r4.u32, temp.u32);
	// stfs f12,4(r8)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfsx f11,r31,r4
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + ctx.r4.u32, temp.u32);
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// bdnz 0x82366100
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82366100;
loc_82366314:
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(r27.s32, r26.s32, ctx.xer);
	// bge cr6,0x823663bc
	if (!ctx.cr6.lt) goto loc_823663BC;
	// subf r7,r27,r26
	ctx.r7.u64 = r26.u64 - r27.u64;
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r23,4
	ctx.r10.s64 = r23.s64 + 4;
	// rlwinm r8,r27,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r9,r10
	r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82366334:
	// lwz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwzu r10,4(r29)
	ea = 4 + r29.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r3,r10,r5
	ctx.r3.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r31,r10,4
	r31.s64 = ctx.r10.s64 + 4;
	// addi r30,r9,4
	r30.s64 = ctx.r9.s64 + 4;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lfs f13,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f11,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// add r10,r7,r4
	ctx.r10.u64 = ctx.r7.u64 + ctx.r4.u64;
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lfsx f9,r3,r4
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f8,r7,r4
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfsx f9,r7,r4
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, temp.u32);
	// stfs f7,4(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfsx f8,r3,r4
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + ctx.r4.u32, temp.u32);
	// stfs f10,4(r9)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// bdnz 0x82366334
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82366334;
loc_823663BC:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// cmpw cr6,r26,r24
	ctx.cr6.compare<int32_t>(r26.s32, r24.s32, ctx.xer);
	// blt cr6,0x823660d8
	if (ctx.cr6.lt) goto loc_823660D8;
loc_823663D0:
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_823A3258) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-28
	ctx.r11.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x823a3268
	if (!ctx.cr6.eq) goto loc_823A3268;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823A3268:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823a3278
	if (!ctx.cr6.eq) goto loc_823A3278;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_823A3278:
	// lwz r11,672(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 672);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823A4AA8) {
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
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c94
	ctx.lr = 0x823A4AB0;
	// stwu r1,-1216(r1)
	ea = -1216 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823a4cec
	if (ctx.cr6.eq) goto loc_823A4CEC;
	// li r25,0
	r25.s64 = 0;
	// addi r28,r3,104
	r28.s64 = ctx.r3.s64 + 104;
loc_823A4AC8:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x823a4c50
	if (ctx.cr6.lt) goto loc_823A4C50;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// lwz r29,0(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r30,-32(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + -32);
	// rlwinm r11,r26,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r30,-2
	ctx.r9.s64 = r30.s64 + -2;
	// addi r31,r10,1
	r31.s64 = ctx.r10.s64 + 1;
	// addi r10,r29,2
	ctx.r10.s64 = r29.s64 + 2;
	// subf r29,r29,r30
	r29.u64 = r30.u64 - r29.u64;
	// rlwinm r30,r31,2,0,29
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r1,592
	r27.s64 = ctx.r1.s64 + 592;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_823A4B04:
	// lhz r21,2(r9)
	r21.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// addi r24,r1,64
	r24.s64 = ctx.r1.s64 + 64;
	// lhzx r23,r10,r29
	r23.u64 = REX_LOAD_U16(ctx.r10.u32 + r29.u32);
	// addi r22,r1,64
	r22.s64 = ctx.r1.s64 + 64;
	// lhz r20,6(r9)
	r20.u64 = REX_LOAD_U16(ctx.r9.u32 + 6);
	// addi r19,r1,64
	r19.s64 = ctx.r1.s64 + 64;
	// lhzu r31,8(r9)
	ea = 8 + ctx.r9.u32;
	r31.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// stw r21,76(r1)
	REX_STORE_U32(ctx.r1.u32 + 76, r21.u32);
	// lvx128 v63,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r21,r1,64
	r21.s64 = ctx.r1.s64 + 64;
	// stw r23,76(r1)
	REX_STORE_U32(ctx.r1.u32 + 76, r23.u32);
	// lvx128 v62,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r20,76(r1)
	REX_STORE_U32(ctx.r1.u32 + 76, r20.u32);
	// lvx128 v61,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r24,r20
	r24.u64 = r20.u64;
	// lhz r24,-2(r10)
	r24.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// addi r22,r1,48
	r22.s64 = ctx.r1.s64 + 48;
	// stw r31,76(r1)
	REX_STORE_U32(ctx.r1.u32 + 76, r31.u32);
	// addi r31,r1,48
	r31.s64 = ctx.r1.s64 + 48;
	// lhz r23,0(r10)
	r23.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lvx128 v60,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r21,2(r10)
	r21.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// addi r20,r1,48
	r20.s64 = ctx.r1.s64 + 48;
	// stw r24,60(r1)
	REX_STORE_U32(ctx.r1.u32 + 60, r24.u32);
	// lvx128 v57,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r19,4(r10)
	r19.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// addi r24,r1,48
	r24.s64 = ctx.r1.s64 + 48;
	// vupkd3d128 v59,v63,20
	temp.u32 = ctx.v63.u16[3];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v59.u32[3] = vTemp.u32[0];
	temp.u32 = ctx.v63.u16[2];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v59.u32[2] = vTemp.u32[0];
	temp.u32 = ctx.v63.u16[1];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v59.u32[1] = vTemp.u32[0];
	temp.u32 = ctx.v63.u16[0];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v59.u32[0] = vTemp.u32[0];
	// addi r31,r1,32
	r31.s64 = ctx.r1.s64 + 32;
	// stw r23,60(r1)
	REX_STORE_U32(ctx.r1.u32 + 60, r23.u32);
	// lvx128 v56,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r21,60(r1)
	REX_STORE_U32(ctx.r1.u32 + 60, r21.u32);
	// lvx128 v54,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r19,60(r1)
	REX_STORE_U32(ctx.r1.u32 + 60, r19.u32);
	// lvx128 v52,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkd3d128 v58,v62,20
	temp.u32 = ctx.v62.u16[3];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v58.u32[3] = vTemp.u32[0];
	temp.u32 = ctx.v62.u16[2];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v58.u32[2] = vTemp.u32[0];
	temp.u32 = ctx.v62.u16[1];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v58.u32[1] = vTemp.u32[0];
	temp.u32 = ctx.v62.u16[0];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v58.u32[0] = vTemp.u32[0];
	// addi r23,r1,32
	r23.s64 = ctx.r1.s64 + 32;
	// vupkd3d128 v55,v61,20
	temp.u32 = ctx.v61.u16[3];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v55.u32[3] = vTemp.u32[0];
	temp.u32 = ctx.v61.u16[2];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v55.u32[2] = vTemp.u32[0];
	temp.u32 = ctx.v61.u16[1];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v55.u32[1] = vTemp.u32[0];
	temp.u32 = ctx.v61.u16[0];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v55.u32[0] = vTemp.u32[0];
	// addi r22,r1,32
	r22.s64 = ctx.r1.s64 + 32;
	// vupkd3d128 v53,v60,20
	temp.u32 = ctx.v60.u16[3];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v53.u32[3] = vTemp.u32[0];
	temp.u32 = ctx.v60.u16[2];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v53.u32[2] = vTemp.u32[0];
	temp.u32 = ctx.v60.u16[1];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v53.u32[1] = vTemp.u32[0];
	temp.u32 = ctx.v60.u16[0];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v53.u32[0] = vTemp.u32[0];
	// stvx128 v59,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,32
	r31.s64 = ctx.r1.s64 + 32;
	// lfs f0,44(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// vupkd3d128 v51,v57,20
	temp.u32 = ctx.v57.u16[3];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v51.u32[3] = vTemp.u32[0];
	temp.u32 = ctx.v57.u16[2];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v51.u32[2] = vTemp.u32[0];
	temp.u32 = ctx.v57.u16[1];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v51.u32[1] = vTemp.u32[0];
	temp.u32 = ctx.v57.u16[0];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v51.u32[0] = vTemp.u32[0];
	// addi r24,r1,16
	r24.s64 = ctx.r1.s64 + 16;
	// vupkd3d128 v50,v56,20
	temp.u32 = ctx.v56.u16[3];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v50.u32[3] = vTemp.u32[0];
	temp.u32 = ctx.v56.u16[2];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v50.u32[2] = vTemp.u32[0];
	temp.u32 = ctx.v56.u16[1];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v50.u32[1] = vTemp.u32[0];
	temp.u32 = ctx.v56.u16[0];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v50.u32[0] = vTemp.u32[0];
	// addi r21,r1,596
	r21.s64 = ctx.r1.s64 + 596;
	// vupkd3d128 v49,v54,20
	temp.u32 = ctx.v54.u16[3];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v49.u32[3] = vTemp.u32[0];
	temp.u32 = ctx.v54.u16[2];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v49.u32[2] = vTemp.u32[0];
	temp.u32 = ctx.v54.u16[1];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v49.u32[1] = vTemp.u32[0];
	temp.u32 = ctx.v54.u16[0];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v49.u32[0] = vTemp.u32[0];
	// addi r20,r1,600
	r20.s64 = ctx.r1.s64 + 600;
	// stvx128 v58,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r23,r1,16
	r23.s64 = ctx.r1.s64 + 16;
	// lfs f13,44(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// vupkd3d128 v48,v52,20
	temp.u32 = ctx.v52.u16[3];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v48.u32[3] = vTemp.u32[0];
	temp.u32 = ctx.v52.u16[2];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v48.u32[2] = vTemp.u32[0];
	temp.u32 = ctx.v52.u16[1];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v48.u32[1] = vTemp.u32[0];
	temp.u32 = ctx.v52.u16[0];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v48.u32[0] = vTemp.u32[0];
	// stvx128 v55,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r22,r1,16
	r22.s64 = ctx.r1.s64 + 16;
	// lfs f12,44(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// addi r19,r1,604
	r19.s64 = ctx.r1.s64 + 604;
	// stvx128 v53,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,16
	r31.s64 = ctx.r1.s64 + 16;
	// stvx128 v51,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r24,r1,80
	r24.s64 = ctx.r1.s64 + 80;
	// lfs f10,28(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stvx128 v50,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r23,r1,84
	r23.s64 = ctx.r1.s64 + 84;
	// lfs f9,28(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// stvx128 v49,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,88
	r31.s64 = ctx.r1.s64 + 88;
	// lfs f8,28(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// stvx128 v48,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f7,28(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfsx f10,r11,r24
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + r24.u32, temp.u32);
	// addi r24,r1,92
	r24.s64 = ctx.r1.s64 + 92;
	// lfs f11,44(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f0,r11,r27
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + r27.u32, temp.u32);
	// stfsx f9,r11,r23
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + r23.u32, temp.u32);
	// stfsx f13,r11,r21
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + r21.u32, temp.u32);
	// stfsx f12,r11,r20
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + r20.u32, temp.u32);
	// stfsx f8,r11,r31
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + r31.u32, temp.u32);
	// stfsx f11,r11,r19
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + r19.u32, temp.u32);
	// stfsx f7,r11,r24
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + r24.u32, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x823a4b04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A4B04;
loc_823A4C50:
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x823a4cd8
	if (!ctx.cr6.lt) goto loc_823A4CD8;
	// subf r31,r30,r7
	r31.u64 = ctx.r7.u64 - r30.u64;
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r29,-32(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + -32);
	// add r10,r25,r30
	ctx.r10.u64 = r25.u64 + r30.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r9,r29
	ctx.r9.u64 = r29.u64 - ctx.r9.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_823A4C7C:
	// lhzx r31,r11,r9
	r31.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// addi r30,r1,64
	r30.s64 = ctx.r1.s64 + 64;
	// addi r24,r1,32
	r24.s64 = ctx.r1.s64 + 32;
	// lhz r29,0(r11)
	r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r27,r1,48
	r27.s64 = ctx.r1.s64 + 48;
	// addi r23,r1,16
	r23.s64 = ctx.r1.s64 + 16;
	// addi r22,r1,592
	r22.s64 = ctx.r1.s64 + 592;
	// stw r31,76(r1)
	REX_STORE_U32(ctx.r1.u32 + 76, r31.u32);
	// lvx128 v45,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r29,60(r1)
	REX_STORE_U32(ctx.r1.u32 + 60, r29.u32);
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// lvx128 v47,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkd3d128 v46,v47,20
	temp.u32 = ctx.v47.u16[3];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v46.u32[3] = vTemp.u32[0];
	temp.u32 = ctx.v47.u16[2];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v46.u32[2] = vTemp.u32[0];
	temp.u32 = ctx.v47.u16[1];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v46.u32[1] = vTemp.u32[0];
	temp.u32 = ctx.v47.u16[0];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v46.u32[0] = vTemp.u32[0];
	// vupkd3d128 v44,v45,20
	temp.u32 = ctx.v45.u16[3];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v44.u32[3] = vTemp.u32[0];
	temp.u32 = ctx.v45.u16[2];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v44.u32[2] = vTemp.u32[0];
	temp.u32 = ctx.v45.u16[1];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v44.u32[1] = vTemp.u32[0];
	temp.u32 = ctx.v45.u16[0];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v44.u32[0] = vTemp.u32[0];
	// stvx128 v46,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stfsx f0,r10,r31
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + r31.u32, temp.u32);
	// stvx128 v44,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,44(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r10,r22
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + r22.u32, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823a4c7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A4C7C;
loc_823A4CD8:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r25,r25,16
	r25.s64 = r25.s64 + 16;
	// cmplw cr6,r26,r6
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x823a4ac8
	if (ctx.cr6.lt) goto loc_823A4AC8;
loc_823A4CEC:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823a4df8
	if (ctx.cr6.eq) goto loc_823A4DF8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r25,r7,2,0,29
	r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// addi r27,r4,-4
	r27.s64 = ctx.r4.s64 + -4;
	// lfs f11,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f11.f64 = double(temp.f32);
loc_823A4D08:
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x823a4dec
	if (!ctx.cr6.gt) goto loc_823A4DEC;
	// li r28,0
	r28.s64 = 0;
loc_823A4D18:
	// lfs f9,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// li r30,0
	r30.s64 = 0;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// blt cr6,0x823a4d98
	if (ctx.cr6.lt) goto loc_823A4D98;
	// addi r11,r7,-2
	ctx.r11.s64 = ctx.r7.s64 + -2;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r11,r29,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// rlwinm r30,r9,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823A4D54:
	// addi r9,r1,592
	ctx.r9.s64 = ctx.r1.s64 + 592;
	// lfsx f8,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r1,596
	ctx.r4.s64 = ctx.r1.s64 + 596;
	// lfs f7,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r24,r1,84
	r24.s64 = ctx.r1.s64 + 84;
	// lfsu f12,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// lfsx f6,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f5,r11,r4
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f8,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// lfsx f3,r11,r24
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r24.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f0,f7,f6,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f6.f64, ctx.f0.f64)));
	// fadds f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// stfsx f4,r11,r9
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// stfsx f2,r11,r4
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, temp.u32);
	// fmadds f13,f12,f5,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f5.f64, ctx.f13.f64)));
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x823a4d54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A4D54;
loc_823A4D98:
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x823a4dcc
	if (!ctx.cr6.lt) goto loc_823A4DCC;
	// add r11,r28,r30
	ctx.r11.u64 = r28.u64 + r30.u64;
	// addi r10,r1,592
	ctx.r10.s64 = ctx.r1.s64 + 592;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f10,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f8,r4,r5
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfsx f7,r11,r10
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// fmuls f10,f8,f12
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
loc_823A4DCC:
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r6.s32, ctx.xer);
	// fadds f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fadds f12,f13,f9
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfsu f12,4(r27)
	ea = 4 + r27.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	r27.u32 = ea;
	// blt cr6,0x823a4d18
	if (ctx.cr6.lt) goto loc_823A4D18;
loc_823A4DEC:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// add r5,r25,r5
	ctx.r5.u64 = r25.u64 + ctx.r5.u64;
	// bne 0x823a4d08
	if (!ctx.cr0.eq) goto loc_823A4D08;
loc_823A4DF8:
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823a506c
	if (ctx.cr6.eq) goto loc_823A506C;
	// li r27,0
	r27.s64 = 0;
	// addi r10,r3,104
	ctx.r10.s64 = ctx.r3.s64 + 104;
loc_823A4E0C:
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x823a4fd0
	if (ctx.cr6.lt) goto loc_823A4FD0;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r30,r1,592
	r30.s64 = ctx.r1.s64 + 592;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r28,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r29,r5,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_823A4E38:
	// addi r4,r1,16
	ctx.r4.s64 = ctx.r1.s64 + 16;
	// lfsx f0,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r31,r1,48
	r31.s64 = ctx.r1.s64 + 48;
	// lwz r26,-32(r10)
	r26.u64 = REX_LOAD_U32(ctx.r10.u32 + -32);
	// addi r25,r1,48
	r25.s64 = ctx.r1.s64 + 48;
	// addi r24,r1,48
	r24.s64 = ctx.r1.s64 + 48;
	// lvx128 v63,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v43,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vpkd3d128 v43,v63,5,2,0
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v43.u16[3] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v43.u16[3] |= ((ctx.v63.u32[3]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v43.u16[2] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v43.u16[2] |= ((ctx.v63.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v43.u16[1] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v43.u16[1] |= ((ctx.v63.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v43.u16[0] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v43.u16[0] |= ((ctx.v63.u32[0]&0x80000000)>>16);
	// stvx128 v43,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfsx f13,r11,r5
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,32
	ctx.r5.s64 = ctx.r1.s64 + 32;
	// stfs f13,36(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 36, temp.u32);
	// addi r31,r1,16
	r31.s64 = ctx.r1.s64 + 16;
	// addi r23,r1,64
	r23.s64 = ctx.r1.s64 + 64;
	// addi r4,r1,64
	ctx.r4.s64 = ctx.r1.s64 + 64;
	// addi r22,r1,64
	r22.s64 = ctx.r1.s64 + 64;
	// lvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,596
	ctx.r5.s64 = ctx.r1.s64 + 596;
	// vor128 v42,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// addi r21,r1,84
	r21.s64 = ctx.r1.s64 + 84;
	// lfsx f12,r11,r5
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f12.f64 = double(temp.f32);
	// vpkd3d128 v42,v63,5,2,0
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v42.u16[3] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v42.u16[3] |= ((ctx.v63.u32[3]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v42.u16[2] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v42.u16[2] |= ((ctx.v63.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v42.u16[1] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v42.u16[1] |= ((ctx.v63.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v42.u16[0] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v42.u16[0] |= ((ctx.v63.u32[0]&0x80000000)>>16);
	// stfs f12,20(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// addi r5,r1,600
	ctx.r5.s64 = ctx.r1.s64 + 600;
	// lvx128 v63,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r31,56(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 56);
	// sthx r31,r9,r26
	REX_STORE_U16(ctx.r9.u32 + r26.u32, r31.u16);
	// stvx128 v42,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,16
	r26.s64 = ctx.r1.s64 + 16;
	// vor128 v41,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lfsx f10,r11,r5
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f10.f64 = double(temp.f32);
	// vpkd3d128 v41,v63,5,2,0
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v41.u16[3] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v41.u16[3] |= ((ctx.v63.u32[3]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v41.u16[2] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v41.u16[2] |= ((ctx.v63.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v41.u16[1] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v41.u16[1] |= ((ctx.v63.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v41.u16[0] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v41.u16[0] |= ((ctx.v63.u32[0]&0x80000000)>>16);
	// stfs f10,20(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lwz r31,0(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r23,72(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 72);
	// addi r20,r1,32
	r20.s64 = ctx.r1.s64 + 32;
	// lfsx f11,r11,r21
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r21.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r21,r1,88
	r21.s64 = ctx.r1.s64 + 88;
	// stfs f11,36(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 36, temp.u32);
	// addi r5,r1,32
	ctx.r5.s64 = ctx.r1.s64 + 32;
	// stvx128 v41,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// sthx r23,r9,r31
	REX_STORE_U16(ctx.r9.u32 + r31.u32, r23.u16);
	// lwz r31,-32(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + -32);
	// lvx128 v62,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v40,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// lfsx f9,r11,r21
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r21.u32);
	ctx.f9.f64 = double(temp.f32);
	// lvx128 v63,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,92
	r26.s64 = ctx.r1.s64 + 92;
	// vor128 v39,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lwz r25,56(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 56);
	// vpkd3d128 v40,v62,5,2,0
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v62.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v62.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v62.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v40.u16[3] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v40.u16[3] |= ((ctx.v62.u32[3]&0x80000000)>>16);
	temp.u32 = (ctx.v62.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v62.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v62.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v40.u16[2] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v40.u16[2] |= ((ctx.v62.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v62.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v62.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v62.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v40.u16[1] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v40.u16[1] |= ((ctx.v62.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v62.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v62.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v62.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v40.u16[0] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v40.u16[0] |= ((ctx.v62.u32[0]&0x80000000)>>16);
	// stfs f9,36(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 36, temp.u32);
	// lvx128 v62,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v38,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
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
	// lfsx f7,r11,r26
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	ctx.f7.f64 = double(temp.f32);
	// stvx128 v40,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r4,r9,r31
	ctx.r4.u64 = ctx.r9.u64 + r31.u64;
	// addi r31,r1,604
	r31.s64 = ctx.r1.s64 + 604;
	// vpkd3d128 v38,v62,5,2,0
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v62.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v62.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v62.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v38.u16[3] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v38.u16[3] |= ((ctx.v62.u32[3]&0x80000000)>>16);
	temp.u32 = (ctx.v62.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v62.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v62.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v38.u16[2] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v38.u16[2] |= ((ctx.v62.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v62.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v62.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v62.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v38.u16[1] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v38.u16[1] |= ((ctx.v62.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v62.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v62.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v62.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v38.u16[0] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v38.u16[0] |= ((ctx.v62.u32[0]&0x80000000)>>16);
	// addi r5,r9,6
	ctx.r5.s64 = ctx.r9.s64 + 6;
	// lwz r23,72(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 72);
	// stfs f7,36(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 36, temp.u32);
	// sth r25,2(r4)
	REX_STORE_U16(ctx.r4.u32 + 2, r25.u16);
	// addi r4,r5,-2
	ctx.r4.s64 = ctx.r5.s64 + -2;
	// stvx128 v39,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r26,56(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 56);
	// lfsx f8,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	ctx.f8.f64 = double(temp.f32);
	// lwz r31,0(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r31,r9,r31
	r31.u64 = ctx.r9.u64 + r31.u64;
	// stvx128 v38,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// sth r23,2(r31)
	REX_STORE_U16(r31.u32 + 2, r23.u16);
	// addi r25,r1,32
	r25.s64 = ctx.r1.s64 + 32;
	// lwz r31,-32(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + -32);
	// stfs f8,20(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// sthx r26,r4,r31
	REX_STORE_U16(ctx.r4.u32 + r31.u32, r26.u16);
	// addi r31,r1,16
	r31.s64 = ctx.r1.s64 + 16;
	// lwz r26,72(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 72);
	// lvx128 v63,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r31,0(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lvx128 v62,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v37,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vor128 v36,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// addi r24,r1,48
	r24.s64 = ctx.r1.s64 + 48;
	// addi r23,r1,64
	r23.s64 = ctx.r1.s64 + 64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vpkd3d128 v37,v63,5,2,0
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v37.u16[3] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v37.u16[3] |= ((ctx.v63.u32[3]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v37.u16[2] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v37.u16[2] |= ((ctx.v63.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v37.u16[1] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v37.u16[1] |= ((ctx.v63.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v37.u16[0] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v37.u16[0] |= ((ctx.v63.u32[0]&0x80000000)>>16);
	// sthx r26,r4,r31
	REX_STORE_U16(ctx.r4.u32 + r31.u32, r26.u16);
	// vpkd3d128 v36,v62,5,2,0
	temp.u32 = (ctx.v62.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v62.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v62.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v36.u16[3] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v36.u16[3] |= ((ctx.v62.u32[3]&0x80000000)>>16);
	temp.u32 = (ctx.v62.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v62.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v62.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v36.u16[2] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v36.u16[2] |= ((ctx.v62.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v62.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v62.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v62.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v36.u16[1] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v36.u16[1] |= ((ctx.v62.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v62.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v62.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v62.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v36.u16[0] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v36.u16[0] |= ((ctx.v62.u32[0]&0x80000000)>>16);
	// lwz r31,-32(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + -32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stvx128 v37,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r4,56(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 56);
	// sthx r4,r5,r31
	REX_STORE_U16(ctx.r5.u32 + r31.u32, ctx.r4.u16);
	// stvx128 v36,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r4,72(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 72);
	// lwz r31,0(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// sthx r4,r5,r31
	REX_STORE_U16(ctx.r5.u32 + r31.u32, ctx.r4.u16);
	// bdnz 0x823a4e38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A4E38;
loc_823A4FD0:
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x823a5058
	if (!ctx.cr6.lt) goto loc_823A5058;
	// subf r5,r29,r7
	ctx.r5.u64 = ctx.r7.u64 - r29.u64;
	// add r4,r27,r29
	ctx.r4.u64 = r27.u64 + r29.u64;
	// rlwinm r9,r29,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_823A4FEC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,-32(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + -32);
	// addi r31,r1,32
	r31.s64 = ctx.r1.s64 + 32;
	// addi r30,r1,592
	r30.s64 = ctx.r1.s64 + 592;
	// addi r29,r1,16
	r29.s64 = ctx.r1.s64 + 16;
	// addi r26,r1,64
	r26.s64 = ctx.r1.s64 + 64;
	// lfsx f0,r11,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,48
	ctx.r5.s64 = ctx.r1.s64 + 48;
	// stfs f0,36(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 36, temp.u32);
	// lfsx f13,r11,r30
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f13,20(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lvx128 v62,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v34,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// lvx128 v63,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v35,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vpkd3d128 v34,v62,5,2,0
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v62.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v62.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v62.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v34.u16[3] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v34.u16[3] |= ((ctx.v62.u32[3]&0x80000000)>>16);
	temp.u32 = (ctx.v62.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v62.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v62.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v34.u16[2] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v34.u16[2] |= ((ctx.v62.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v62.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v62.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v62.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v34.u16[1] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v34.u16[1] |= ((ctx.v62.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v62.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v62.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v62.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v34.u16[0] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v34.u16[0] |= ((ctx.v62.u32[0]&0x80000000)>>16);
	// vpkd3d128 v35,v63,5,2,0
	temp.u32 = (ctx.v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v35.u16[3] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v35.u16[3] |= ((ctx.v63.u32[3]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v35.u16[2] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v35.u16[2] |= ((ctx.v63.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v35.u16[1] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v35.u16[1] |= ((ctx.v63.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v35.u16[0] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v35.u16[0] |= ((ctx.v63.u32[0]&0x80000000)>>16);
	// stvx128 v34,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v35,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r5,56(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 56);
	// sthx r5,r9,r4
	REX_STORE_U16(ctx.r9.u32 + ctx.r4.u32, ctx.r5.u16);
	// lwz r31,72(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 72);
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// sthx r31,r9,r5
	REX_STORE_U16(ctx.r9.u32 + ctx.r5.u32, r31.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bdnz 0x823a4fec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A4FEC;
loc_823A5058:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// cmplw cr6,r28,r6
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x823a4e0c
	if (ctx.cr6.lt) goto loc_823A4E0C;
loc_823A506C:
	// lhz r10,144(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 144);
	// subf r9,r8,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r8.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sth r8,144(r3)
	REX_STORE_U16(ctx.r3.u32 + 144, ctx.r8.u16);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823a5134
	if (!ctx.cr6.eq) goto loc_823A5134;
	// lhz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823a5134
	if (!ctx.cr6.gt) goto loc_823A5134;
	// addi r9,r3,72
	ctx.r9.s64 = ctx.r3.s64 + 72;
loc_823A5098:
	// lhz r11,38(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 38);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x823a511c
	if (!ctx.cr6.gt) goto loc_823A511C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823A50B0:
	// lwz r7,-32(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + -32);
	// addi r6,r1,32
	ctx.r6.s64 = ctx.r1.s64 + 32;
	// addi r5,r1,16
	ctx.r5.s64 = ctx.r1.s64 + 16;
	// lfs f0,148(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,48
	ctx.r4.s64 = ctx.r1.s64 + 48;
	// lwz r31,0(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r30,r1,64
	r30.s64 = ctx.r1.s64 + 64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lhzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// stw r7,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r7.u32);
	// lvx128 v33,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
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
	// stvx128 v32,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,28(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,52(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 52, temp.u32);
	// lvx128 v63,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vpkd3d128 v62,v63,5,2,0
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v62.u16[3] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v62.u16[3] |= ((ctx.v63.u32[3]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v62.u16[2] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v62.u16[2] |= ((ctx.v63.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v62.u16[1] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v62.u16[1] |= ((ctx.v63.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v62.u16[0] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v62.u16[0] |= ((ctx.v63.u32[0]&0x80000000)>>16);
	// stvx128 v62,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,72(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 72);
	// sthx r6,r31,r11
	REX_STORE_U16(r31.u32 + ctx.r11.u32, ctx.r6.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhz r4,38(r3)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + 38);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x823a50b0
	if (ctx.cr6.lt) goto loc_823A50B0;
loc_823A511C:
	// lhz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823a5098
	if (ctx.cr6.lt) goto loc_823A5098;
loc_823A5134:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_824104C8) {
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
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824105a8
	if (!ctx.cr6.lt) goto loc_824105A8;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,20232(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20232);
	ctx.f0.f64 = double(temp.f32);
loc_82410524:
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r10,r10,22,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1F;
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
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r10,r10,27,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1F;
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
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
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
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// rlwinm r10,r10,17,15,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1FFFF;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x82410524
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82410524;
loc_824105A8:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824105c4
	if (ctx.cr6.eq) goto loc_824105C4;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c73b8
	ctx.lr = 0x824105C4;
	sub_825C73B8(ctx, base);
loc_824105C4:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824105e0
	if (ctx.cr6.eq) goto loc_824105E0;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82409820
	ctx.lr = 0x824105E0;
	sub_82409820(ctx, base);
loc_824105E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82412F98) {
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
	ctx.lr = 0x82412FA0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,248(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// add r25,r11,r5
	r25.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r27,r4,r11
	r27.u64 = ctx.r4.u64 + ctx.r11.u64;
	// bne cr6,0x82413004
	if (!ctx.cr6.eq) goto loc_82413004;
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r10,224(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x823f02b8
	ctx.lr = 0x82412FE0;
	sub_823F02B8(ctx, base);
	// stw r3,248(r31)
	REX_STORE_U32(r31.u32 + 248, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82413528
	if (ctx.cr0.eq) goto loc_82413528;
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 228);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x826a2e60
	ctx.lr = 0x82413004;
	sub_826A2E60(ctx, base);
loc_82413004:
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// li r22,0
	r22.s64 = 0;
	// lwz r10,200(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 200);
	// lwz r8,224(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 224);
	// subf r11,r11,r25
	ctx.r11.u64 = r25.u64 - ctx.r11.u64;
	// subf r7,r10,r27
	ctx.r7.u64 = r27.u64 - ctx.r10.u64;
	// lwz r9,248(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mullw r10,r11,r8
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r11,r7,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r26,r11,r9
	r26.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241306c
	if (!ctx.cr6.eq) goto loc_8241306C;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// bl 0x823f02b8
	ctx.lr = 0x82413050;
	sub_823F02B8(ctx, base);
	// stw r3,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82413528
	if (ctx.cr0.eq) goto loc_82413528;
	// stw r22,0(r26)
	REX_STORE_U32(r26.u32 + 0, r22.u32);
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r11.u32);
loc_8241306C:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// li r21,1
	r21.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241322c
	if (!ctx.cr6.eq) goto loc_8241322C;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// rlwinm r24,r27,0,0,29
	r24.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r10,r24,4
	ctx.r10.s64 = r24.s64 + 4;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8241309c
	if (!ctx.cr6.lt) goto loc_8241309C;
	// lwz r9,152(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 152);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x824130b4
	if (ctx.cr6.gt) goto loc_824130B4;
loc_8241309C:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82413130
	if (!ctx.cr6.gt) goto loc_82413130;
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82413130
	if (!ctx.cr6.lt) goto loc_82413130;
loc_824130B4:
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// rlwinm r10,r27,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r7,136(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r5,100(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r4,204(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r29,4(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 4);
	// mullw r10,r6,r7
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r5,r25
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(r25.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// add r28,r10,r9
	r28.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x824131ec
	if (!ctx.cr6.lt) goto loc_824131EC;
loc_824130FC:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82413110;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,256
	r29.s64 = r29.s64 + 256;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824130fc
	if (ctx.cr6.lt) goto loc_824130FC;
	// b 0x824131ec
	goto loc_824131EC;
loc_82413130:
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8241318c
	if (!ctx.cr6.lt) goto loc_8241318C;
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8241318c
	if (!ctx.cr6.gt) goto loc_8241318C;
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 96);
	// rlwinm r8,r27,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r7,100(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r6,140(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r3,4(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mullw r9,r7,r25
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(r25.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8241318C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8241318C:
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x824131ec
	if (!ctx.cr6.gt) goto loc_824131EC;
	// lwz r9,156(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x824131ec
	if (!ctx.cr6.lt) goto loc_824131EC;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r9,r27,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r7,100(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 100);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r6,140(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r3,4(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mullw r9,r7,r25
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(r25.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824131EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824131EC:
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824131F8:
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 64);
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + r24.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82413214
	if (ctx.cr6.lt) goto loc_82413214;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82413224
	if (ctx.cr6.lt) goto loc_82413224;
loc_82413214:
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// slw r9,r21,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_82413224:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x824131f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824131F8;
loc_8241322C:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82413248
	if (ctx.cr6.eq) goto loc_82413248;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82408848
	ctx.lr = 0x82413244;
	sub_82408848(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_82413248:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82413264
	if (ctx.cr6.eq) goto loc_82413264;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824094e0
	ctx.lr = 0x82413260;
	sub_824094E0(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_82413264:
	// lwz r9,196(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r8,200(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 200);
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r9,r8,r27
	ctx.r9.u64 = r27.u64 - ctx.r8.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r7,r9,30
	ctx.r7.u64 = ctx.r9.u32 & 0x3;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824132dc
	if (!ctx.cr6.lt) goto loc_824132DC;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r10,r23,-4
	ctx.r10.s64 = r23.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82413298:
	// rlwinm r9,r11,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r8,4(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 4);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r6,r9,2,0,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r6.u64 & 0xFFFFFFFF00000003);
	// rlwinm r9,r6,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// bdnz 0x82413298
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82413298;
loc_824132DC:
	// clrlwi r11,r27,30
	ctx.r11.u64 = r27.u32 & 0x3;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// slw r11,r21,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x82413528
	if (!ctx.cr6.eq) goto loc_82413528;
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// rlwinm r10,r27,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r7,r11,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r6,100(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r30,4(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 4);
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r8,r6,r25
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(r25.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// add r28,r10,r9
	r28.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x824134c0
	if (!ctx.cr6.lt) goto loc_824134C0;
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r22.u32);
	// rlwinm r27,r27,0,0,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r22.u32);
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r21.u32);
loc_82413354:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// subf r6,r29,r11
	ctx.r6.u64 = ctx.r11.u64 - r29.u64;
	// subf r4,r27,r10
	ctx.r4.u64 = ctx.r10.u64 - r27.u64;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bge cr6,0x824133f0
	if (!ctx.cr6.lt) goto loc_824133F0;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824133f0
	if (ctx.cr6.eq) goto loc_824133F0;
loc_82413378:
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bge cr6,0x824133f0
	if (!ctx.cr6.lt) goto loc_824133F0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r11,r6,4
	ctx.xer.ca = ctx.r6.u32 <= 4;
	ctx.r11.u64 = static_cast<uint64_t>(4) - ctx.r6.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824133A0:
	// lwzu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// or r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 | ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// or r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
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
	// lfs f0,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// bdnz 0x824133a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824133A0;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82413378
	if (ctx.cr6.lt) goto loc_82413378;
loc_824133F0:
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bge cr6,0x82413470
	if (!ctx.cr6.lt) goto loc_82413470;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82413408:
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82413420:
	// or r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
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
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// bdnz 0x82413420
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82413420;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// blt cr6,0x82413408
	if (ctx.cr6.lt) goto loc_82413408;
loc_82413470:
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8241348c
	if (!ctx.cr6.eq) goto loc_8241348C;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82413490
	if (ctx.cr6.eq) goto loc_82413490;
loc_8241348C:
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
loc_82413490:
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824134A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r30,r30,256
	r30.s64 = r30.s64 + 256;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82413354
	if (ctx.cr6.lt) goto loc_82413354;
loc_824134C0:
	// lwz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 228);
	// addi r11,r26,8
	ctx.r11.s64 = r26.s64 + 8;
	// lwz r8,224(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r9,248(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8241350c
	if (!ctx.cr6.lt) goto loc_8241350C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241350c
	if (!ctx.cr6.eq) goto loc_8241350C;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241350c
	if (!ctx.cr6.eq) goto loc_8241350C;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// stw r22,4(r26)
	REX_STORE_U32(r26.u32 + 4, r22.u32);
	// stw r11,12(r26)
	REX_STORE_U32(r26.u32 + 12, ctx.r11.u32);
	// b 0x82413524
	goto loc_82413524;
loc_8241350C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,4(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 4);
	// bl 0x823f0350
	ctx.lr = 0x82413518;
	sub_823F0350(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r11.u32);
loc_82413524:
	// stw r22,4(r26)
	REX_STORE_U32(r26.u32 + 4, r22.u32);
loc_82413528:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82447960) {
	REX_FUNC_PROLOGUE();
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stfd f1,24(r3)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.f1.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// li r8,15
	ctx.r8.s64 = 15;
	// addi r9,r9,-7888
	ctx.r9.s64 = ctx.r9.s64 + -7888;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// ld r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// ld r11,8(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// std r11,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// ld r11,16(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 16);
	// std r11,48(r3)
	REX_STORE_U64(ctx.r3.u32 + 48, ctx.r11.u64);
	// ld r11,24(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 24);
	// std r11,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82448C90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82448C98;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82448cc4
	if (!ctx.cr6.gt) goto loc_82448CC4;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82448CC4:
	// bl 0x822f6280
	ctx.lr = 0x82448CC8;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82448cdc
	if (!ctx.cr0.eq) goto loc_82448CDC;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x82448d10
	goto loc_82448D10;
loc_82448CDC:
	// rlwinm r30,r30,4,0,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82448CF0;
	sub_826A2E60(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,6
	ctx.r6.s64 = 6;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82449708
	ctx.lr = 0x82448D0C;
	sub_82449708(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82448D10:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82448D18;
	sub_8269CE98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8244BDF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8244BE00;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8244be2c
	if (!ctx.cr6.gt) goto loc_8244BE2C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8244be58
	goto loc_8244BE58;
loc_8244BE2C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8244a740
	ctx.lr = 0x8244BE3C;
	sub_8244A740(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8244be58
	if (ctx.cr0.lt) goto loc_8244BE58;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// subf r4,r11,r31
	ctx.r4.u64 = r31.u64 - ctx.r11.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x8244a6e0
	ctx.lr = 0x8244BE58;
	sub_8244A6E0(ctx, base);
loc_8244BE58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82452198) {
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
	// lwz r11,312(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824521c4
	if (!ctx.cr6.eq) goto loc_824521C4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824522cc
	goto loc_824522CC;
loc_824521C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82451a70
	ctx.lr = 0x824521CC;
	sub_82451A70(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8245222c
	if (!ctx.cr0.eq) goto loc_8245222C;
	// lwz r11,296(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 296);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824521f4
	if (ctx.cr0.eq) goto loc_824521F4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,11792
	ctx.r4.s64 = ctx.r11.s64 + 11792;
	// bl 0x8244beb0
	ctx.lr = 0x824521F4;
	sub_8244BEB0(ctx, base);
loc_824521F4:
	// lwz r11,296(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 296);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82452210
	if (ctx.cr0.eq) goto loc_82452210;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,11720
	ctx.r4.s64 = ctx.r11.s64 + 11720;
	// bl 0x8244beb0
	ctx.lr = 0x82452210;
	sub_8244BEB0(ctx, base);
loc_82452210:
	// lwz r11,296(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 296);
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8245222c
	if (ctx.cr0.eq) goto loc_8245222C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,11648
	ctx.r4.s64 = ctx.r11.s64 + 11648;
	// bl 0x8244beb0
	ctx.lr = 0x8245222C;
	sub_8244BEB0(ctx, base);
loc_8245222C:
	// lwz r10,296(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 296);
	// rlwinm. r11,r10,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82452244
	if (ctx.cr0.eq) goto loc_82452244;
	// lwz r9,288(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 288);
	// oris r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 262144;
	// stw r9,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r9.u32);
loc_82452244:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82452298
	if (!ctx.cr6.eq) goto loc_82452298;
	// rlwinm. r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82452270
	if (ctx.cr0.eq) goto loc_82452270;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82452270
	if (ctx.cr0.eq) goto loc_82452270;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,11580
	ctx.r4.s64 = ctx.r11.s64 + 11580;
	// bl 0x8244beb0
	ctx.lr = 0x82452270;
	sub_8244BEB0(ctx, base);
loc_82452270:
	// lwz r11,296(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 296);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82452298
	if (ctx.cr0.eq) goto loc_82452298;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82452298
	if (ctx.cr0.eq) goto loc_82452298;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,11512
	ctx.r4.s64 = ctx.r11.s64 + 11512;
	// bl 0x8244beb0
	ctx.lr = 0x82452298;
	sub_8244BEB0(ctx, base);
loc_82452298:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824522b0
	if (ctx.cr6.eq) goto loc_824522B0;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// b 0x824522cc
	goto loc_824522CC;
loc_824522B0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82450858
	ctx.lr = 0x824522BC;
	sub_82450858(ctx, base);
	// lwz r5,292(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 292);
	// lwz r4,288(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 288);
	// bl 0x822cd828
	ctx.lr = 0x824522C8;
	sub_822CD828(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_824522CC:
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

DEFINE_REX_FUNC(sub_8245AD88) {
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
	ctx.lr = 0x8245AD90;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8245aecc
	if (ctx.cr6.eq) goto loc_8245AECC;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
loc_8245ADB8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245aebc
	if (ctx.cr6.eq) goto loc_8245AEBC;
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
	ctx.lr = 0x8245ADDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r4,108(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245ADFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,18
	ctx.cr6.compare<uint32_t>(r30.u32, 18, ctx.xer);
	// bgt cr6,0x8245afdc
	if (ctx.cr6.gt) goto loc_8245AFDC;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,12888
	ctx.r12.s64 = ctx.r12.s64 + 12888;
	// lbzx r0,r12,r30
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + r30.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32186
	ctx.r12.s64 = -2109341696;
	// nop 
	// addi r12,r12,-20948
	ctx.r12.s64 = ctx.r12.s64 + -20948;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (r30.u32) {
	case 0:
		goto loc_8245AFD4;
	case 1:
		goto loc_8245AE2C;
	case 2:
		goto loc_8245AE34;
	case 3:
		goto loc_8245AE3C;
	case 4:
		goto loc_8245AE44;
	case 5:
		goto loc_8245AE4C;
	case 6:
		goto loc_8245AE54;
	case 7:
		goto loc_8245AE5C;
	case 8:
		goto loc_8245AE64;
	case 9:
		goto loc_8245AE6C;
	case 10:
		goto loc_8245AE74;
	case 11:
		goto loc_8245AE7C;
	case 12:
		goto loc_8245AE84;
	case 13:
		goto loc_8245AE8C;
	case 14:
		goto loc_8245AE94;
	case 15:
		goto loc_8245AFDC;
	case 16:
		goto loc_8245AFDC;
	case 17:
		goto loc_8245AE9C;
	case 18:
		goto loc_8245AE9C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8245AE2C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8245aea0
	goto loc_8245AEA0;
loc_8245AE34:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8245aea0
	goto loc_8245AEA0;
loc_8245AE3C:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8245aea0
	goto loc_8245AEA0;
loc_8245AE44:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8245aea0
	goto loc_8245AEA0;
loc_8245AE4C:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8245aea0
	goto loc_8245AEA0;
loc_8245AE54:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8245aea0
	goto loc_8245AEA0;
loc_8245AE5C:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8245aea0
	goto loc_8245AEA0;
loc_8245AE64:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8245aea0
	goto loc_8245AEA0;
loc_8245AE6C:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8245aea0
	goto loc_8245AEA0;
loc_8245AE74:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x8245aea0
	goto loc_8245AEA0;
loc_8245AE7C:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x8245aea0
	goto loc_8245AEA0;
loc_8245AE84:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x8245aea0
	goto loc_8245AEA0;
loc_8245AE8C:
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x8245aea0
	goto loc_8245AEA0;
loc_8245AE94:
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x8245aea0
	goto loc_8245AEA0;
loc_8245AE9C:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
loc_8245AEA0:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// blt cr6,0x8245aeb4
	if (ctx.cr6.lt) goto loc_8245AEB4;
	// bne cr6,0x8245aebc
	if (!ctx.cr6.eq) goto loc_8245AEBC;
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, ctx.xer);
	// bge cr6,0x8245aebc
	if (!ctx.cr6.lt) goto loc_8245AEBC;
loc_8245AEB4:
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_8245AEBC:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(r26.u32, r27.u32, ctx.xer);
	// blt cr6,0x8245adb8
	if (ctx.cr6.lt) goto loc_8245ADB8;
loc_8245AECC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x8245AED4;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245afcc
	if (ctx.cr0.lt) goto loc_8245AFCC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,17564
	ctx.r5.s64 = ctx.r11.s64 + 17564;
	// addi r4,r10,17500
	ctx.r4.s64 = ctx.r10.s64 + 17500;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245AEF4;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245afcc
	if (ctx.cr0.lt) goto loc_8245AFCC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x8245AF04;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245afcc
	if (ctx.cr0.lt) goto loc_8245AFCC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,14296
	ctx.r4.s64 = ctx.r11.s64 + 14296;
	// bl 0x824555b8
	ctx.lr = 0x8245AF1C;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245afcc
	if (ctx.cr0.lt) goto loc_8245AFCC;
	// lwz r11,1544(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1544);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1544(r31)
	REX_STORE_U32(r31.u32 + 1544, ctx.r11.u32);
	// bl 0x82455688
	ctx.lr = 0x8245AF38;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245afcc
	if (ctx.cr0.lt) goto loc_8245AFCC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,17424
	ctx.r4.s64 = ctx.r11.s64 + 17424;
	// bl 0x824555b8
	ctx.lr = 0x8245AF50;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245afcc
	if (ctx.cr0.lt) goto loc_8245AFCC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x8245AF60;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245afcc
	if (ctx.cr0.lt) goto loc_8245AFCC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r5,1816(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,17304
	ctx.r4.s64 = ctx.r11.s64 + 17304;
	// bl 0x824555b8
	ctx.lr = 0x8245AF7C;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245afcc
	if (ctx.cr0.lt) goto loc_8245AFCC;
	// lwz r11,1544(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1544);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1544(r31)
	REX_STORE_U32(r31.u32 + 1544, ctx.r11.u32);
	// bl 0x82455688
	ctx.lr = 0x8245AF98;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245afcc
	if (ctx.cr0.lt) goto loc_8245AFCC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,14336
	ctx.r4.s64 = ctx.r11.s64 + 14336;
	// bl 0x824555b8
	ctx.lr = 0x8245AFB0;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245afcc
	if (ctx.cr0.lt) goto loc_8245AFCC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,376(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 376);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245AFCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8245AFCC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cfc
	return;
loc_8245AFD4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8245afcc
	goto loc_8245AFCC;
loc_8245AFDC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8245afcc
	goto loc_8245AFCC;
}

DEFINE_REX_FUNC(sub_8246CF08) {
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
	// bl 0x826a1ca0
	ctx.lr = 0x8246CF10;
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	r24.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// mr r25,r24
	r25.u64 = r24.u64;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// beq cr6,0x8246cf68
	if (ctx.cr6.eq) goto loc_8246CF68;
	// lwz r10,340(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8246CF50:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8246cf60
	if (!ctx.cr6.eq) goto loc_8246CF60;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8246CF60:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8246cf50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8246CF50;
loc_8246CF68:
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 336);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// ble cr6,0x8246cf7c
	if (!ctx.cr6.gt) goto loc_8246CF7C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8246d0f8
	if (ctx.cr6.eq) goto loc_8246D0F8;
loc_8246CF7C:
	// li r29,-1
	r29.s64 = -1;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r29,320(r31)
	REX_STORE_U32(r31.u32 + 320, r29.u32);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// stw r29,324(r31)
	REX_STORE_U32(r31.u32 + 324, r29.u32);
	// addi r10,r31,320
	ctx.r10.s64 = r31.s64 + 320;
	// stw r29,328(r31)
	REX_STORE_U32(r31.u32 + 328, r29.u32);
	// stw r29,332(r31)
	REX_STORE_U32(r31.u32 + 332, r29.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x8246CFA8;
	sub_823F02B8(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq 0x8246d240
	if (ctx.cr0.eq) goto loc_8246D240;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x8246CFC4;
	sub_826A2E60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8246d064
	if (!ctx.cr6.gt) goto loc_8246D064;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
loc_8246CFD8:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8246d050
	if (!ctx.cr6.eq) goto loc_8246D050;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8246d050
	if (!ctx.cr6.eq) goto loc_8246D050;
	// lwz r7,44(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8246d050
	if (!ctx.cr6.lt) goto loc_8246D050;
	// lwz r7,72(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmplw cr6,r7,r26
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r26.u32, ctx.xer);
	// bge cr6,0x8246d02c
	if (!ctx.cr6.lt) goto loc_8246D02C;
	// lwz r7,88(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmplw cr6,r7,r26
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r26.u32, ctx.xer);
	// blt cr6,0x8246d02c
	if (ctx.cr6.lt) goto loc_8246D02C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r24,r10,r25
	REX_STORE_U32(ctx.r10.u32 + r25.u32, r24.u32);
loc_8246D02C:
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// blt cr6,0x8246d050
	if (ctx.cr6.lt) goto loc_8246D050;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r25
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8246d050
	if (!ctx.cr6.lt) goto loc_8246D050;
	// stwx r10,r11,r25
	REX_STORE_U32(ctx.r11.u32 + r25.u32, ctx.r10.u32);
loc_8246D050:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8246cfd8
	if (ctx.cr6.lt) goto loc_8246CFD8;
loc_8246D064:
	// lwz r7,44(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// stw r24,336(r31)
	REX_STORE_U32(r31.u32 + 336, r24.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r24,340(r31)
	REX_STORE_U32(r31.u32 + 340, r24.u32);
	// beq cr6,0x8246d0e4
	if (ctx.cr6.eq) goto loc_8246D0E4;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
loc_8246D080:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8246d0b4
	if (ctx.cr6.eq) goto loc_8246D0B4;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_8246D090:
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8246d0ac
	if (ctx.cr6.eq) goto loc_8246D0AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// blt cr6,0x8246d090
	if (ctx.cr6.lt) goto loc_8246D090;
loc_8246D0AC:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// blt cr6,0x8246d0d0
	if (ctx.cr6.lt) goto loc_8246D0D0;
loc_8246D0B4:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,336(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 336);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8246d0d0
	if (!ctx.cr6.lt) goto loc_8246D0D0;
	// stw r9,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r9.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r11,336(r31)
	REX_STORE_U32(r31.u32 + 336, ctx.r11.u32);
loc_8246D0D0:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8246d080
	if (ctx.cr6.lt) goto loc_8246D080;
loc_8246D0E4:
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 336);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bgt cr6,0x8246d0f8
	if (ctx.cr6.gt) goto loc_8246D0F8;
	// stw r7,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r7.u32);
	// stw r29,336(r31)
	REX_STORE_U32(r31.u32 + 336, r29.u32);
loc_8246D0F8:
	// addi r11,r23,-1
	ctx.r11.s64 = r23.s64 + -1;
	// li r10,3
	ctx.r10.s64 = 3;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r27,r24
	r27.u64 = r24.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// and r29,r11,r10
	r29.u64 = ctx.r11.u64 & ctx.r10.u64;
	// beq cr6,0x8246d220
	if (ctx.cr6.eq) goto loc_8246D220;
	// addi r11,r29,80
	ctx.r11.s64 = r29.s64 + 80;
	// mr r28,r22
	r28.u64 = r22.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r31
	r30.u64 = ctx.r11.u64 + r31.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f31,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_8246D130:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8246d14c
	if (ctx.cr6.eq) goto loc_8246D14C;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r26,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, r26.u32);
loc_8246D14C:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r5,340(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 340);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 136);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82478758
	ctx.lr = 0x8246D164;
	sub_82478758(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8246d240
	if (ctx.cr6.eq) goto loc_8246D240;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r24,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, r24.u32);
	// stw r24,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, r24.u32);
	// stw r26,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, r26.u32);
	// lwz r9,336(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 336);
	// stw r9,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// stw r26,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, r26.u32);
	// stw r26,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, r26.u32);
	// stw r8,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r8.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8246d1f8
	if (ctx.cr6.eq) goto loc_8246D1F8;
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r9,24(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// stw r9,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_8246D1F8:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8246d208
	if (ctx.cr6.eq) goto loc_8246D208;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_8246D208:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(r27.u32, r23.u32, ctx.xer);
	// blt cr6,0x8246d130
	if (ctx.cr6.lt) goto loc_8246D130;
loc_8246D220:
	// mr r31,r24
	r31.u64 = r24.u64;
loc_8246D224:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823f0350
	ctx.lr = 0x8246D230;
	sub_823F0350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_8246D240:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8246d224
	goto loc_8246D224;
}

DEFINE_REX_FUNC(sub_82483A98) {
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
	ctx.lr = 0x82483AA0;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x82483AB8;
	sub_823F02B8(ctx, base);
	// mr. r22,r3
	r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// bne 0x82483ad0
	if (!ctx.cr0.eq) goto loc_82483AD0;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x82484074
	goto loc_82484074;
loc_82483AD0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82483AD4:
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// bl 0x82481098
	ctx.lr = 0x82483AF0;
	sub_82481098(ctx, base);
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82483b24
	if (ctx.cr6.eq) goto loc_82483B24;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82483B04:
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 20);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82483b04
	if (ctx.cr6.lt) goto loc_82483B04;
loc_82483B24:
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82483cbc
	if (ctx.cr6.eq) goto loc_82483CBC;
	// li r25,0
	r25.s64 = 0;
	// addi r24,r22,-4
	r24.s64 = r22.s64 + -4;
	// lis r20,4416
	r20.s64 = 289406976;
loc_82483B3C:
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 20);
	// lwzx r27,r11,r25
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82483ca4
	if (!ctx.cr6.eq) goto loc_82483CA4;
	// lwz r10,72(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 72);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82483ca4
	if (ctx.cr6.eq) goto loc_82483CA4;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r9,16(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82483ca4
	if (ctx.cr0.eq) goto loc_82483CA4;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82483ca4
	if (!ctx.cr0.eq) goto loc_82483CA4;
	// lwz r11,24(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 24);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// lwzx r29,r10,r11
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r8,0,0,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82483ca4
	if (ctx.cr6.lt) goto loc_82483CA4;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82483ca4
	if (ctx.cr6.gt) goto loc_82483CA4;
	// rlwinm r31,r8,0,0,11
	r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r31,r20
	ctx.cr6.compare<uint32_t>(r31.u32, r20.u32, ctx.xer);
	// bgt cr6,0x82483be8
	if (ctx.cr6.gt) goto loc_82483BE8;
	// beq cr6,0x82483ca4
	if (ctx.cr6.eq) goto loc_82483CA4;
	// lis r11,4336
	ctx.r11.s64 = 284164096;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82483ca4
	if (ctx.cr6.eq) goto loc_82483CA4;
	// lis r11,4368
	ctx.r11.s64 = 286261248;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82483ca4
	if (ctx.cr6.eq) goto loc_82483CA4;
	// lis r11,4384
	ctx.r11.s64 = 287309824;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82483ca4
	if (ctx.cr6.eq) goto loc_82483CA4;
	// lis r11,4400
	ctx.r11.s64 = 288358400;
	// b 0x82483c10
	goto loc_82483C10;
loc_82483BE8:
	// lis r11,4432
	ctx.r11.s64 = 290455552;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82483ca4
	if (ctx.cr6.eq) goto loc_82483CA4;
	// lis r11,8304
	ctx.r11.s64 = 544210944;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82483ca4
	if (ctx.cr6.eq) goto loc_82483CA4;
	// lis r11,8320
	ctx.r11.s64 = 545259520;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82483ca4
	if (ctx.cr6.eq) goto loc_82483CA4;
	// lis r11,8336
	ctx.r11.s64 = 546308096;
loc_82483C10:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82483ca4
	if (ctx.cr6.eq) goto loc_82483CA4;
	// lwz r9,12(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 12);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82483c4c
	if (ctx.cr6.eq) goto loc_82483C4C;
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82483C30:
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r26,r7
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82483c4c
	if (ctx.cr6.eq) goto loc_82483C4C;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82483c30
	if (ctx.cr6.lt) goto loc_82483C30;
loc_82483C4C:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// clrlwi r10,r8,12
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// divwu r30,r11,r10
	r30.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// bl 0x82477530
	ctx.lr = 0x82483C64;
	sub_82477530(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82483c98
	if (ctx.cr6.eq) goto loc_82483C98;
loc_82483C74:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82479658
	ctx.lr = 0x82483C84;
	sub_82479658(ctx, base);
	// mulli r11,r31,2111
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(2111));
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// add r31,r3,r11
	r31.u64 = ctx.r3.u64 + ctx.r11.u64;
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r30.u32, ctx.xer);
	// blt cr6,0x82483c74
	if (ctx.cr6.lt) goto loc_82483C74;
loc_82483C98:
	// stw r31,64(r27)
	REX_STORE_U32(r27.u32 + 64, r31.u32);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// stwu r26,4(r24)
	ea = 4 + r24.u32;
	REX_STORE_U32(ea, r26.u32);
	r24.u32 = ea;
loc_82483CA4:
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82483b3c
	if (ctx.cr6.lt) goto loc_82483B3C;
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r23.u32);
loc_82483CBC:
	// lis r11,-32184
	ctx.r11.s64 = -2109210624;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r11,-27792
	ctx.r3.s64 = ctx.r11.s64 + -27792;
	// bl 0x824793b0
	ctx.lr = 0x82483CD4;
	sub_824793B0(ctx, base);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82484068
	if (ctx.cr6.eq) goto loc_82484068;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r23,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// mr r14,r22
	r14.u64 = r22.u64;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82483CEC:
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// lwz r9,20(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 20);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,24(r21)
	ctx.r7.u64 = REX_LOAD_U32(r21.u32 + 24);
	// lwzx r17,r8,r9
	r17.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r9,72(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 72);
	// lwz r8,48(r17)
	ctx.r8.u64 = REX_LOAD_U32(r17.u32 + 48);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// lwzx r16,r9,r7
	r16.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// bne cr6,0x82483fc8
	if (!ctx.cr6.eq) goto loc_82483FC8;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r23.u32, ctx.xer);
	// bge cr6,0x82483fc8
	if (!ctx.cr6.lt) goto loc_82483FC8;
	// addi r15,r14,4
	r15.s64 = r14.s64 + 4;
loc_82483D28:
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// lwz r9,20(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 20);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,64(r17)
	ctx.r7.u64 = REX_LOAD_U32(r17.u32 + 64);
	// lwzx r20,r8,r9
	r20.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r9,64(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 64);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82483fc8
	if (!ctx.cr6.eq) goto loc_82483FC8;
	// lwz r9,48(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 48);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82483fb0
	if (!ctx.cr6.eq) goto loc_82483FB0;
	// lwz r9,72(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 72);
	// lwz r11,72(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 72);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82483fb0
	if (ctx.cr6.eq) goto loc_82483FB0;
	// lwz r9,4(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 4);
	// lwz r8,4(r20)
	ctx.r8.u64 = REX_LOAD_U32(r20.u32 + 4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82483fb0
	if (!ctx.cr6.eq) goto loc_82483FB0;
	// lwz r9,20(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 20);
	// lwz r8,20(r20)
	ctx.r8.u64 = REX_LOAD_U32(r20.u32 + 20);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82483fb0
	if (!ctx.cr6.eq) goto loc_82483FB0;
	// lwz r9,24(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 24);
	// lwz r8,24(r20)
	ctx.r8.u64 = REX_LOAD_U32(r20.u32 + 24);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82483fb0
	if (!ctx.cr6.eq) goto loc_82483FB0;
	// lwz r9,24(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 24);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// lwzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// rlwinm. r9,r9,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82483fb0
	if (!ctx.cr0.eq) goto loc_82483FB0;
	// lwz r10,4(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 4);
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// divwu r18,r10,r11
	r18.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// bl 0x82477530
	ctx.lr = 0x82483DCC;
	sub_82477530(ctx, base);
	// lwz r22,24(r21)
	r22.u64 = REX_LOAD_U32(r21.u32 + 24);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r19,0
	r19.s64 = 0;
loc_82483DD8:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x82483de8
	if (ctx.cr6.eq) goto loc_82483DE8;
	// lwz r23,72(r20)
	r23.u64 = REX_LOAD_U32(r20.u32 + 72);
	// b 0x82483dec
	goto loc_82483DEC;
loc_82483DE8:
	// lwz r23,72(r17)
	r23.u64 = REX_LOAD_U32(r17.u32 + 72);
loc_82483DEC:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x82483dfc
	if (ctx.cr6.eq) goto loc_82483DFC;
	// lwz r11,72(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 72);
	// b 0x82483e00
	goto loc_82483E00;
loc_82483DFC:
	// lwz r11,72(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 72);
loc_82483E00:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r23,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// li r29,0
	r29.s64 = 0;
	// lwzx r30,r11,r22
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	// lwzx r27,r10,r22
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + r22.u32);
	// lwz r25,12(r30)
	r25.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82483ecc
	if (ctx.cr6.eq) goto loc_82483ECC;
	// lwz r24,20(r21)
	r24.u64 = REX_LOAD_U32(r21.u32 + 20);
	// lwz r26,16(r30)
	r26.u64 = REX_LOAD_U32(r30.u32 + 16);
loc_82483E28:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r24.u32);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// ble cr6,0x82483ecc
	if (!ctx.cr6.gt) goto loc_82483ECC;
	// lwz r28,12(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 12);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82483eb0
	if (ctx.cr6.eq) goto loc_82483EB0;
loc_82483E50:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x82483e9c
	if (ctx.cr6.eq) goto loc_82483E9C;
loc_82483E5C:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82479658
	ctx.lr = 0x82483E6C;
	sub_82479658(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82479658
	ctx.lr = 0x82483E84;
	sub_82479658(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82483e9c
	if (!ctx.cr6.eq) goto loc_82483E9C;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r5,r18
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r18.u32, ctx.xer);
	// blt cr6,0x82483e5c
	if (ctx.cr6.lt) goto loc_82483E5C;
loc_82483E9C:
	// cmplw cr6,r5,r18
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r18.u32, ctx.xer);
	// beq cr6,0x82483eb0
	if (ctx.cr6.eq) goto loc_82483EB0;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// blt cr6,0x82483e50
	if (ctx.cr6.lt) goto loc_82483E50;
loc_82483EB0:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// beq cr6,0x82483ecc
	if (ctx.cr6.eq) goto loc_82483ECC;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82483e28
	if (ctx.cr6.lt) goto loc_82483E28;
loc_82483ECC:
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(r29.u32, r25.u32, ctx.xer);
	// bge cr6,0x82483ee4
	if (!ctx.cr6.lt) goto loc_82483EE4;
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// cmplwi cr6,r19,2
	ctx.cr6.compare<uint32_t>(r19.u32, 2, ctx.xer);
	// blt cr6,0x82483dd8
	if (ctx.cr6.lt) goto loc_82483DD8;
	// b 0x82483fa4
	goto loc_82483FA4;
loc_82483EE4:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82483f94
	if (ctx.cr6.eq) goto loc_82483F94;
	// li r28,0
	r28.s64 = 0;
loc_82483EF4:
	// lwz r26,12(r27)
	r26.u64 = REX_LOAD_U32(r27.u32 + 12);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82483f5c
	if (ctx.cr6.eq) goto loc_82483F5C;
loc_82483F04:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x82483f48
	if (ctx.cr6.eq) goto loc_82483F48;
loc_82483F10:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82479658
	ctx.lr = 0x82483F20;
	sub_82479658(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82479658
	ctx.lr = 0x82483F34;
	sub_82479658(ctx, base);
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, ctx.xer);
	// bne cr6,0x82483f48
	if (!ctx.cr6.eq) goto loc_82483F48;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r5,r18
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r18.u32, ctx.xer);
	// blt cr6,0x82483f10
	if (ctx.cr6.lt) goto loc_82483F10;
loc_82483F48:
	// cmplw cr6,r5,r18
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r18.u32, ctx.xer);
	// beq cr6,0x82483f5c
	if (ctx.cr6.eq) goto loc_82483F5C;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// blt cr6,0x82483f04
	if (ctx.cr6.lt) goto loc_82483F04;
loc_82483F5C:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 16);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r8,20(r21)
	ctx.r8.u64 = REX_LOAD_U32(r21.u32 + 20);
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82483ef4
	if (ctx.cr6.lt) goto loc_82483EF4;
loc_82483F94:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
loc_82483FA4:
	// lwz r22,92(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r23,80(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82483FB0:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r15,r15,4
	r15.s64 = r15.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// blt cr6,0x82483d28
	if (ctx.cr6.lt) goto loc_82483D28;
loc_82483FC8:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r14,r14,4
	r14.s64 = r14.s64 + 4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bne 0x82483cec
	if (!ctx.cr0.eq) goto loc_82483CEC;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82484068
	if (ctx.cr6.eq) goto loc_82484068;
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82484054
	if (!ctx.cr6.gt) goto loc_82484054;
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
loc_82484008:
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x82484028
	goto loc_82484028;
loc_82484010:
	// lwz r7,48(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 20);
loc_82484028:
	// lwz r7,48(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwz r6,48(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 48);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82484010
	if (!ctx.cr6.eq) goto loc_82484010;
	// lwz r10,8(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82484008
	if (ctx.cr6.lt) goto loc_82484008;
loc_82484054:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82481920
	ctx.lr = 0x8248405C;
	sub_82481920(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82483ad4
	goto loc_82483AD4;
loc_82484068:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r11,27,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82484074:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x823f0350
	ctx.lr = 0x82484080;
	sub_823F0350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_824BB250) {
	REX_FUNC_PROLOGUE();
	// lhz r10,202(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 202);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lwz r9,284(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// lwz r8,276(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 276);
	// lwz r10,272(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 272);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r9,r9,24,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF000000;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824BDE78) {
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
	// bl 0x824690e0
	ctx.lr = 0x824BDE98;
	sub_824690E0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r30,224(r31)
	REX_STORE_U32(r31.u32 + 224, r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,3808
	ctx.r11.s64 = ctx.r11.s64 + 3808;
	// stw r10,508(r31)
	REX_STORE_U32(r31.u32 + 508, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_824BF560) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824BF568) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x826a1e70
	sub_826A1E70(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824BF588) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x824bf59c
	if (!ctx.cr6.eq) goto loc_824BF59C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824bf6b4
	goto loc_824BF6B4;
loc_824BF59C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// not r10,r3
	ctx.r10.u64 = ~ctx.r3.u64;
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// addi r11,r11,4352
	ctx.r11.s64 = ctx.r11.s64 + 4352;
	// blt cr6,0x824bf684
	if (ctx.cr6.lt) goto loc_824BF684;
	// rlwinm r9,r5,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824BF5B8:
	// lbz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm r8,r10,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// lbzu r7,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// addi r5,r5,-8
	ctx.r5.s64 = ctx.r5.s64 + -8;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// lbzu r9,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// lbzu r8,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// xor r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r7,r7,2,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FC;
	// lbzu r6,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// lwzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lbzu r3,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// xor r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC;
	// lbzu r7,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lbzu r31,1(r4)
	ea = 1 + ctx.r4.u32;
	r31.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// xor r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r9,r31,r10
	ctx.r9.u64 = r31.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// bdnz 0x824bf5b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824BF5B8;
loc_824BF684:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824bf6b0
	if (ctx.cr6.eq) goto loc_824BF6B0;
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
loc_824BF690:
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// rlwinm r7,r10,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// xor r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// xor r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// bne 0x824bf690
	if (!ctx.cr0.eq) goto loc_824BF690;
loc_824BF6B0:
	// not r3,r10
	ctx.r3.u64 = ~ctx.r10.u64;
loc_824BF6B4:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C54B8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,7436
	ctx.r11.s64 = ctx.r11.s64 + 7436;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C54E8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// ble cr6,0x824c54f8
	if (!ctx.cr6.gt) goto loc_824C54F8;
	// li r7,4
	ctx.r7.s64 = 4;
loc_824C54F8:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r9,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r9,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// stw r9,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C6DD4) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C6DE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824C6DF0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,12(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x826a0a48
	ctx.lr = 0x824C6E14;
	sub_826A0A48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824c6e3c
	if (ctx.cr6.eq) goto loc_824C6E3C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r10,65
	ctx.r10.s64 = 65;
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
	ctx.lr = 0x824C6E3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824C6E3C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a11e8
	ctx.lr = 0x824C6E50;
	sub_826A11E8(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// beq cr6,0x824c6e78
	if (ctx.cr6.eq) goto loc_824C6E78;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r10,64
	ctx.r10.s64 = 64;
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
	ctx.lr = 0x824C6E78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824C6E78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824C9838) {
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
	ctx.lr = 0x824C9840;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,280(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 280);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r24,448(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r21,416(r3)
	r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 416);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c9884
	if (ctx.cr6.eq) goto loc_824C9884;
	// lwz r11,40(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c9884
	if (!ctx.cr6.eq) goto loc_824C9884;
	// bl 0x824c9790
	ctx.lr = 0x824C9870;
	sub_824C9790(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x824c9884
	if (!ctx.cr6.eq) goto loc_824C9884;
loc_824C9878:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1ce8
	return;
loc_824C9884:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824c9a6c
	if (!ctx.cr6.eq) goto loc_824C9A6C;
	// lwz r8,24(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 24);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r20,r24,20
	r20.s64 = r24.s64 + 20;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r9,r20,-4
	ctx.r9.s64 = r20.s64 + -4;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r4,12(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 12);
	// lwz r5,16(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 16);
loc_824C98C4:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x824c98c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824C98C4;
	// lwz r11,360(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 360);
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824c9a30
	if (!ctx.cr6.gt) goto loc_824C9A30;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r29,r31
	r29.u64 = r31.u64;
	// addi r28,r30,364
	r28.s64 = r30.s64 + 364;
	// li r22,1
	r22.s64 = 1;
	// addi r23,r11,8352
	r23.s64 = ctx.r11.s64 + 8352;
loc_824C98F4:
	// lwz r27,0(r28)
	r27.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// lwz r25,0(r29)
	r25.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r11,r27,84
	ctx.r11.s64 = r27.s64 + 84;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// addi r8,r11,11
	ctx.r8.s64 = ctx.r11.s64 + 11;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r7,r24
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	// bge cr6,0x824c994c
	if (!ctx.cr6.lt) goto loc_824C994C;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824c8e10
	ctx.lr = 0x824C992C;
	sub_824C8E10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824c9878
	if (ctx.cr6.eq) goto loc_824C9878;
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bge cr6,0x824c994c
	if (!ctx.cr6.lt) goto loc_824C994C;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// b 0x824c9980
	goto loc_824C9980;
loc_824C994C:
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
	// lwzx r10,r8,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824c997c
	if (ctx.cr6.eq) goto loc_824C997C;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// subf r5,r10,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r10.u64;
	// lbz r31,1168(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 1168);
	// b 0x824c99a0
	goto loc_824C99A0;
loc_824C997C:
	// li r7,9
	ctx.r7.s64 = 9;
loc_824C9980:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824c8f78
	ctx.lr = 0x824C998C;
	sub_824C8F78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824c9878
	if (ctx.cr6.lt) goto loc_824C9878;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_824C99A0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x824c99fc
	if (ctx.cr6.eq) goto loc_824C99FC;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r31.s32, ctx.xer);
	// bge cr6,0x824c99cc
	if (!ctx.cr6.lt) goto loc_824C99CC;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824c8e10
	ctx.lr = 0x824C99BC;
	sub_824C8E10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824c9878
	if (ctx.cr6.eq) goto loc_824C9878;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_824C99CC:
	// subf r5,r31,r5
	ctx.r5.u64 = ctx.r5.u64 - r31.u64;
	// slw r10,r22,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (r22.u32 << (r31.u8 & 0x3F));
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sraw r9,r4,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r9.s64 = ctx.r4.s32 >> temp.u32;
	// lwzx r8,r11,r23
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// and r31,r10,r9
	r31.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x824c99fc
	if (!ctx.cr6.lt) goto loc_824C99FC;
	// addi r10,r23,64
	ctx.r10.s64 = r23.s64 + 64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
loc_824C99FC:
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// slw r8,r11,r21
	ctx.r8.u64 = r21.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r21.u8 & 0x3F));
	// stwx r11,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// sth r8,0(r25)
	REX_STORE_U16(r25.u32 + 0, ctx.r8.u16);
	// lwz r6,360(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 360);
	// cmpw cr6,r26,r6
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x824c98f4
	if (ctx.cr6.lt) goto loc_824C98F4;
loc_824C9A30:
	// lwz r8,24(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 24);
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r9,r20,-4
	ctx.r9.s64 = r20.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r7,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 24);
	// stw r6,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// stw r4,12(r24)
	REX_STORE_U32(r24.u32 + 12, ctx.r4.u32);
	// stw r5,16(r24)
	REX_STORE_U32(r24.u32 + 16, ctx.r5.u32);
loc_824C9A60:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x824c9a60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824C9A60;
loc_824C9A6C:
	// lwz r11,40(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,40(r24)
	REX_STORE_U32(r24.u32 + 40, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_824D7D08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_824D7D18:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824d7d18
	if (!ctx.cr6.eq) goto loc_824D7D18;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824d7d5c
	if (!ctx.cr6.lt) goto loc_824D7D5C;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_824D7D5C:
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_824D7D6C:
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bne 0x824d7d6c
	if (!ctx.cr0.eq) goto loc_824D7D6C;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_824D7D80:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824d7d80
	if (!ctx.cr6.eq) goto loc_824D7D80;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824DA958) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x824da98c
	if (!ctx.cr6.gt) goto loc_824DA98C;
	// bl 0x824d8088
	ctx.lr = 0x824DA98C;
	sub_824D8088(ctx, base);
loc_824DA98C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r11,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824DCB60) {
	REX_FUNC_PROLOGUE();
	// b 0x824dbd20
	sub_824DBD20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824DCB90) {
	REX_FUNC_PROLOGUE();
	// b 0x824dbb48
	sub_824DBB48(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824DCE78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824DCE80;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,156(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 156);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r4,152(r3)
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r4.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x824dcef0
	if (ctx.cr6.lt) goto loc_824DCEF0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824dcbd0
	ctx.lr = 0x824DCEA8;
	sub_824DCBD0(ctx, base);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r3,-476
	ctx.r5.s64 = ctx.r3.s64 + -476;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8244a6e0
	ctx.lr = 0x824DCEB8;
	sub_8244A6E0(ctx, base);
	// lwz r11,-220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -220);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r11.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -8);
	// stw r11,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r11.u32);
	// lwz r11,-16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -16);
	// stw r11,460(r31)
	REX_STORE_U32(r31.u32 + 460, ctx.r11.u32);
	// lwz r11,-12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -12);
	// stw r11,464(r31)
	REX_STORE_U32(r31.u32 + 464, ctx.r11.u32);
	// lwz r11,-20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -20);
	// stw r11,456(r31)
	REX_STORE_U32(r31.u32 + 456, ctx.r11.u32);
	// lwz r5,-84(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + -84);
	// lwz r4,-88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + -88);
	// bl 0x824d8810
	ctx.lr = 0x824DCEF0;
	sub_824D8810(ctx, base);
loc_824DCEF0:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mulli r11,r11,476
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(476));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, r29.u32);
	// lhz r11,158(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 158);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,158(r30)
	REX_STORE_U16(r30.u32 + 158, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824E0480) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824e04c0
	if (ctx.cr6.eq) goto loc_824E04C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r4,r10,28576
	ctx.r4.s64 = ctx.r10.s64 + 28576;
	// bl 0x824df9f0
	ctx.lr = 0x824E04B8;
	sub_824DF9F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_824E04C0:
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

DEFINE_REX_FUNC(sub_824E36B0) {
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
	ctx.lr = 0x824E36B8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r30,r4,16,16,31
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// lis r8,1029
	ctx.r8.s64 = 67436544;
	// lis r7,2057
	ctx.r7.s64 = 134807552;
	// lis r6,3085
	ctx.r6.s64 = 202178560;
	// sraw. r11,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r9,r9,515
	ctx.r9.u64 = ctx.r9.u64 | 515;
	// ori r8,r8,1543
	ctx.r8.u64 = ctx.r8.u64 | 1543;
	// ori r7,r7,2571
	ctx.r7.u64 = ctx.r7.u64 | 2571;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ori r10,r6,3599
	ctx.r10.u64 = ctx.r6.u64 | 3599;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// beq 0x824e373c
	if (ctx.cr0.eq) goto loc_824E373C;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_824E3720:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824e32a8
	ctx.lr = 0x824E3730;
	sub_824E32A8(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// add r29,r30,r29
	r29.u64 = r30.u64 + r29.u64;
	// bne 0x824e3720
	if (!ctx.cr0.eq) goto loc_824E3720;
loc_824E373C:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// slw r29,r10,r11
	r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// slw r30,r27,r11
	r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r11.u8 & 0x3F));
	// bge cr6,0x824e376c
	if (!ctx.cr6.lt) goto loc_824E376C;
	// addi r11,r27,-1
	ctx.r11.s64 = r27.s64 + -1;
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r26.s32);
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// neg r26,r26
	r26.s64 = static_cast<int64_t>(-r26.u64);
loc_824E376C:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824E377C:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x824e377c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824E377C;
	// add r11,r31,r26
	ctx.r11.u64 = r31.u64 + r26.u64;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ r31.u64;
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e37c4
	if (ctx.cr0.eq) goto loc_824E37C4;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r31
	// b 0x824e37c4
	goto loc_824E37C4;
loc_824E37A4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824e37cc
	if (ctx.cr6.eq) goto loc_824E37CC;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e32a8
	ctx.lr = 0x824E37BC;
	sub_824E32A8(ctx, base);
	// add r31,r31,r26
	r31.u64 = r31.u64 + r26.u64;
	// subf r30,r29,r30
	r30.u64 = r30.u64 - r29.u64;
loc_824E37C4:
	// clrlwi. r11,r31,28
	ctx.r11.u64 = r31.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824e37a4
	if (!ctx.cr0.eq) goto loc_824E37A4;
loc_824E37CC:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// clrlwi. r10,r31,25
	ctx.r10.u64 = r31.u32 & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq 0x824e3800
	if (ctx.cr0.eq) goto loc_824E3800;
loc_824E37DC:
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(r30.u32, 16, ctx.xer);
	// blt cr6,0x824e3800
	if (ctx.cr6.lt) goto loc_824E3800;
	// lvx128 v63,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,-16
	r30.s64 = r30.s64 + -16;
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v63,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// clrlwi. r11,r31,25
	ctx.r11.u64 = r31.u32 & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824e37dc
	if (!ctx.cr0.eq) goto loc_824E37DC;
loc_824E3800:
	// cmplwi cr6,r30,128
	ctx.cr6.compare<uint32_t>(r30.u32, 128, ctx.xer);
	// ble cr6,0x824e38d0
	if (!ctx.cr6.gt) goto loc_824E38D0;
	// addi r11,r30,-129
	ctx.r11.s64 = r30.s64 + -129;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r9,r11,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// lwz r7,104(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// subf r4,r10,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r10.u64;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r28,116(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subf r9,r10,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r10.u64;
	// lwz r27,120(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// subf r8,r10,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r10.u64;
	// lwz r24,124(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// subf r7,r10,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r10.u64;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// subf r6,r10,r28
	ctx.r6.u64 = r28.u64 - ctx.r10.u64;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// subf r5,r10,r27
	ctx.r5.u64 = r27.u64 - ctx.r10.u64;
	// subf r10,r10,r24
	ctx.r10.u64 = r24.u64 - ctx.r10.u64;
loc_824E3858:
	// li r3,128
	ctx.r3.s64 = 128;
	// dcbt r3,r31
	// lvx128 v63,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r31,128
	r31.s64 = r31.s64 + 128;
	// lvx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,-128
	r30.s64 = r30.s64 + -128;
	// lvx128 v61,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v60,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v61,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v60,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v63,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v63,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v63,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v61,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v62,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x824e3858
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824E3858;
loc_824E38D0:
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(r30.u32, 16, ctx.xer);
	// blt cr6,0x824e38f8
	if (ctx.cr6.lt) goto loc_824E38F8;
	// rlwinm r11,r30,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 28) & 0xFFFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824E38E0:
	// lvx128 v63,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,-16
	r30.s64 = r30.s64 + -16;
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v63,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bdnz 0x824e38e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824E38E0;
loc_824E38F8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824e391c
	if (ctx.cr6.eq) goto loc_824E391C;
loc_824E3900:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e32a8
	ctx.lr = 0x824E3910;
	sub_824E32A8(ctx, base);
	// subf. r30,r29,r30
	r30.u64 = r30.u64 - r29.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r31,r31,r26
	r31.u64 = r31.u64 + r26.u64;
	// bne 0x824e3900
	if (!ctx.cr0.eq) goto loc_824E3900;
loc_824E391C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_824FFBD8) {
	REX_FUNC_PROLOGUE();
	// addi r10,r3,972
	ctx.r10.s64 = ctx.r3.s64 + 972;
	// cmplwi cr6,r5,132
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 132, ctx.xer);
	// ble cr6,0x824ffc14
	if (!ctx.cr6.gt) goto loc_824FFC14;
	// addi r3,r4,-12
	ctx.r3.s64 = ctx.r4.s64 + -12;
	// lis r4,24973
	ctx.r4.s64 = 1636630528;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
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
	// b 0x823f0350
	sub_823F0350(ctx, base);
	return;
loc_824FFC14:
	// rlwinm r11,r5,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stwx r4,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82503468) {
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
	ctx.lr = 0x82503470;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// clrlwi. r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82503524
	if (!ctx.cr0.eq) goto loc_82503524;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82503524
	if (ctx.cr0.eq) goto loc_82503524;
loc_8250348C:
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825034a4
	if (ctx.cr0.eq) goto loc_825034A4;
	// lwz r11,28(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// addi r8,r9,24
	ctx.r8.s64 = ctx.r9.s64 + 24;
	// b 0x825034ac
	goto loc_825034AC;
loc_825034A4:
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
loc_825034AC:
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8250350c
	if (ctx.cr6.eq) goto loc_8250350C;
loc_825034C4:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r7,r11,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r10,0,6,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,40(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825034e8
	if (!ctx.cr0.eq) goto loc_825034E8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825034c4
	if (!ctx.cr6.eq) goto loc_825034C4;
loc_825034E8:
	// addi r10,r9,24
	ctx.r10.s64 = ctx.r9.s64 + 24;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8250350c
	if (ctx.cr6.eq) goto loc_8250350C;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250350c
	if (!ctx.cr0.eq) goto loc_8250350C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825034c4
	if (!ctx.cr0.eq) goto loc_825034C4;
loc_8250350C:
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82503524
	if (!ctx.cr0.eq) goto loc_82503524;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8250348c
	if (!ctx.cr6.eq) goto loc_8250348C;
loc_82503524:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825036e4
	if (!ctx.cr0.eq) goto loc_825036E4;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825036e4
	if (ctx.cr0.eq) goto loc_825036E4;
loc_8250353C:
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825036c8
	if (!ctx.cr0.eq) goto loc_825036C8;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825036c8
	if (ctx.cr0.eq) goto loc_825036C8;
loc_82503554:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// beq cr6,0x82503690
	if (ctx.cr6.eq) goto loc_82503690;
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// blt cr6,0x82503578
	if (ctx.cr6.lt) goto loc_82503578;
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8250357c
	if (!ctx.cr6.gt) goto loc_8250357C;
loc_82503578:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8250357C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82503690
	if (!ctx.cr0.eq) goto loc_82503690;
	// rlwinm. r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825036ac
	if (ctx.cr0.eq) goto loc_825036AC;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_82503590:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825035ac
	if (ctx.cr6.eq) goto loc_825035AC;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825035ac
	if (!ctx.cr0.eq) goto loc_825035AC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82503590
	goto loc_82503590;
loc_825035AC:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x825036ac
	if (ctx.cr6.lt) goto loc_825036AC;
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// ble cr6,0x825035d4
	if (!ctx.cr6.gt) goto loc_825035D4;
	// cmplwi cr6,r11,61
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61, ctx.xer);
	// ble cr6,0x825036ac
	if (!ctx.cr6.gt) goto loc_825036AC;
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bgt cr6,0x825036ac
	if (ctx.cr6.gt) goto loc_825036AC;
loc_825035D4:
	// oris r11,r10,1024
	ctx.r11.u64 = ctx.r10.u64 | 67108864;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825c33f8
	ctx.lr = 0x825035F0;
	sub_825C33F8(ctx, base);
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_825035F4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82503638
	if (ctx.cr6.eq) goto loc_82503638;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82503614
	if (!ctx.cr0.eq) goto loc_82503614;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82503618
	if (ctx.cr0.eq) goto loc_82503618;
loc_82503614:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82503618:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82503630
	if (!ctx.cr0.eq) goto loc_82503630;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825c4c28
	ctx.lr = 0x82503630;
	sub_825C4C28(ctx, base);
loc_82503630:
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x825035f4
	goto loc_825035F4;
loc_82503638:
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_8250363C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825036ac
	if (ctx.cr6.eq) goto loc_825036AC;
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82503688
	if (ctx.cr6.eq) goto loc_82503688;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82503670
	if (ctx.cr0.eq) goto loc_82503670;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82503674
	if (!ctx.cr0.eq) goto loc_82503674;
loc_82503670:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82503674:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82503688
	if (ctx.cr0.eq) goto loc_82503688;
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
loc_82503688:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8250363c
	goto loc_8250363C;
loc_82503690:
	// oris r11,r10,1024
	ctx.r11.u64 = ctx.r10.u64 | 67108864;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825c33f8
	ctx.lr = 0x825036AC;
	sub_825C33F8(ctx, base);
loc_825036AC:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825036c8
	if (!ctx.cr0.eq) goto loc_825036C8;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82503554
	if (!ctx.cr6.eq) goto loc_82503554;
loc_825036C8:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825036e4
	if (!ctx.cr0.eq) goto loc_825036E4;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8250353c
	if (!ctx.cr6.eq) goto loc_8250353C;
loc_825036E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825226B0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// blt cr6,0x825226d0
	if (ctx.cr6.lt) goto loc_825226D0;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x825226d4
	if (!ctx.cr6.gt) goto loc_825226D4;
loc_825226D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825226D4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825226f0
	if (ctx.cr0.eq) goto loc_825226F0;
	// li r8,1
	ctx.r8.s64 = 1;
loc_825226E0:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwimi r11,r8,13,6,18
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x3FFE000) | (ctx.r11.u64 & 0xFFFFFFFFFC001FFF);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
loc_825226F0:
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_825226F4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825226e0
	if (ctx.cr6.eq) goto loc_825226E0;
	// lwz r10,12(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// blt cr6,0x8252271c
	if (ctx.cr6.lt) goto loc_8252271C;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82522720
	if (!ctx.cr6.gt) goto loc_82522720;
loc_8252271C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82522720:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82522730
	if (ctx.cr0.eq) goto loc_82522730;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82522758
	goto loc_82522758;
loc_82522730:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r11,r11,4,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x3;
	// rlwinm r10,r10,19,19,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1FFF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x82522754
	if (ctx.cr6.eq) goto loc_82522754;
	// cmplwi cr6,r11,8191
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8191, ctx.xer);
	// ble cr6,0x82522758
	if (!ctx.cr6.gt) goto loc_82522758;
loc_82522754:
	// li r11,8191
	ctx.r11.s64 = 8191;
loc_82522758:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82522764
	if (!ctx.cr6.gt) goto loc_82522764;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82522764:
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x825226f4
	goto loc_825226F4;
}

DEFINE_REX_FUNC(sub_82529AF0) {
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
	// bl 0x826a1c80
	ctx.lr = 0x82529AF8;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2ca0
	ctx.lr = 0x82529B00;
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// li r18,0
	r18.s64 = 0;
	// stw r3,484(r1)
	REX_STORE_U32(ctx.r1.u32 + 484, ctx.r3.u32);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// li r19,1
	r19.s64 = 1;
	// stb r18,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, r18.u8);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252a070
	if (ctx.cr0.eq) goto loc_8252A070;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252a070
	if (!ctx.cr0.eq) goto loc_8252A070;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8252a070
	if (ctx.cr0.eq) goto loc_8252A070;
loc_82529B3C:
	// lwz r11,28(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252a054
	if (!ctx.cr0.eq) goto loc_8252A054;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8252a054
	if (ctx.cr0.eq) goto loc_8252A054;
loc_82529B54:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,13440
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13440, ctx.xer);
	// bne cr6,0x8252a038
	if (!ctx.cr6.eq) goto loc_8252A038;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwimi r11,r10,9,18,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r29,48(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r28,52(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 52);
	// lwz r27,44(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r10,12(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 12);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x82529ba8
	if (ctx.cr6.eq) goto loc_82529BA8;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// bne cr6,0x82529bac
	if (!ctx.cr6.eq) goto loc_82529BAC;
loc_82529BA8:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_82529BAC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82529bdc
	if (ctx.cr0.eq) goto loc_82529BDC;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x82529bd0
	if (ctx.cr6.eq) goto loc_82529BD0;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// bne cr6,0x82529bd4
	if (!ctx.cr6.eq) goto loc_82529BD4;
loc_82529BD0:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_82529BD4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252a038
	if (!ctx.cr0.eq) goto loc_8252A038;
loc_82529BDC:
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825c61b8
	ctx.lr = 0x82529BF4;
	sub_825C61B8(ctx, base);
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825c61b8
	ctx.lr = 0x82529C0C;
	sub_825C61B8(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x82529c2c
	if (ctx.cr6.eq) goto loc_82529C2C;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// bne cr6,0x82529c30
	if (!ctx.cr6.eq) goto loc_82529C30;
loc_82529C2C:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_82529C30:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82529c64
	if (!ctx.cr0.eq) goto loc_82529C64;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x82529c58
	if (ctx.cr6.eq) goto loc_82529C58;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// bne cr6,0x82529c5c
	if (!ctx.cr6.eq) goto loc_82529C5C;
loc_82529C58:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_82529C5C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252a25c
	if (ctx.cr0.eq) goto loc_8252A25C;
loc_82529C64:
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825c61b8
	ctx.lr = 0x82529C7C;
	sub_825C61B8(ctx, base);
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x82529c9c
	if (ctx.cr6.eq) goto loc_82529C9C;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// bne cr6,0x82529ca0
	if (!ctx.cr6.eq) goto loc_82529CA0;
loc_82529C9C:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_82529CA0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252a268
	if (ctx.cr0.eq) goto loc_8252A268;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// stw r27,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x82529cd4
	if (ctx.cr6.eq) goto loc_82529CD4;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// bne cr6,0x82529cd8
	if (!ctx.cr6.eq) goto loc_82529CD8;
loc_82529CD4:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_82529CD8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82529d20
	if (!ctx.cr0.eq) goto loc_82529D20;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r25,128(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r24,136(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r23,r11,7,29,31
	r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// bl 0x8250ab60
	ctx.lr = 0x82529CF8;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// rlwimi r11,r23,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x82529D10;
	sub_8250A620(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r24,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
loc_82529D20:
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x82529d40
	if (ctx.cr6.eq) goto loc_82529D40;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// bne cr6,0x82529d44
	if (!ctx.cr6.eq) goto loc_82529D44;
loc_82529D40:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_82529D44:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82529f2c
	if (!ctx.cr0.eq) goto loc_82529F2C;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x82529d6c
	if (ctx.cr6.eq) goto loc_82529D6C;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// bne cr6,0x82529d70
	if (!ctx.cr6.eq) goto loc_82529D70;
loc_82529D6C:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_82529D70:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82529f2c
	if (!ctx.cr0.eq) goto loc_82529F2C;
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x82529d98
	if (ctx.cr6.eq) goto loc_82529D98;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// bne cr6,0x82529d9c
	if (!ctx.cr6.eq) goto loc_82529D9C;
loc_82529D98:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_82529D9C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// beq 0x82529ed0
	if (ctx.cr0.eq) goto loc_82529ED0;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r31,132(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r25,124(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm r24,r11,7,29,31
	r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// bl 0x8250ab60
	ctx.lr = 0x82529DBC;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rlwimi r11,r24,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x82529DD4;
	sub_8250A620(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// rlwimi r11,r25,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r23,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r23.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x82529e04
	if (ctx.cr6.eq) goto loc_82529E04;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// bne cr6,0x82529e08
	if (!ctx.cr6.eq) goto loc_82529E08;
loc_82529E04:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_82529E08:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82529ea8
	if (ctx.cr0.eq) goto loc_82529EA8;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r31,116(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r25,120(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r24,r11,7,29,31
	r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// bl 0x8250ab60
	ctx.lr = 0x82529E28;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rlwimi r11,r24,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x82529E40;
	sub_8250A620(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// rlwimi r11,r25,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// stw r23,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825324d0
	ctx.lr = 0x82529E64;
	sub_825324D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82529e80
	if (ctx.cr0.eq) goto loc_82529E80;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x82529f2c
	goto loc_82529F2C;
loc_82529E80:
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825324d0
	ctx.lr = 0x82529E94;
	sub_825324D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82529ea8
	if (ctx.cr0.eq) goto loc_82529EA8;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82529f2c
	goto loc_82529F2C;
loc_82529EA8:
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825324d0
	ctx.lr = 0x82529EBC;
	sub_825324D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252a274
	if (ctx.cr0.eq) goto loc_8252A274;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x82529f2c
	goto loc_82529F2C;
loc_82529ED0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r31,116(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r25,r11,7,29,31
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// lwz r24,120(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8250ab60
	ctx.lr = 0x82529EE8;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// rlwimi r11,r25,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x82529F00;
	sub_8250A620(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// rlwimi r11,r24,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825324d0
	ctx.lr = 0x82529F24;
	sub_825324D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252a280
	if (ctx.cr0.eq) goto loc_8252A280;
loc_82529F2C:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// beq cr6,0x82529f5c
	if (ctx.cr6.eq) goto loc_82529F5C;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// lwz r4,44(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// bl 0x8250b470
	ctx.lr = 0x82529F4C;
	sub_8250B470(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82529F58;
	sub_8250AD28(ctx, base);
	// stw r3,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r3.u32);
loc_82529F5C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x82529f8c
	if (ctx.cr6.eq) goto loc_82529F8C;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// lwz r4,48(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// bl 0x8250b470
	ctx.lr = 0x82529F7C;
	sub_8250B470(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82529F88;
	sub_8250AD28(ctx, base);
	// stw r3,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r3.u32);
loc_82529F8C:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// beq cr6,0x82529fbc
	if (ctx.cr6.eq) goto loc_82529FBC;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// lwz r4,52(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 52);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// bl 0x8250b470
	ctx.lr = 0x82529FAC;
	sub_8250B470(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82529FB8;
	sub_8250AD28(ctx, base);
	// stw r3,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r3.u32);
loc_82529FBC:
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x82529fe4
	if (!ctx.cr6.eq) goto loc_82529FE4;
	// bl 0x82528fd8
	ctx.lr = 0x82529FD4;
	sub_82528FD8(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// oris r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 16777216;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82529FE4:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x8252a00c
	if (!ctx.cr6.eq) goto loc_8252A00C;
	// bl 0x82528fd8
	ctx.lr = 0x82529FFC;
	sub_82528FD8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// oris r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 16777216;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8252A00C:
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x8252a034
	if (!ctx.cr6.eq) goto loc_8252A034;
	// bl 0x82528fd8
	ctx.lr = 0x8252A024;
	sub_82528FD8(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// oris r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 16777216;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8252A034:
	// stb r19,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, r19.u8);
loc_8252A038:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252a054
	if (!ctx.cr0.eq) goto loc_8252A054;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82529b54
	if (!ctx.cr6.eq) goto loc_82529B54;
loc_8252A054:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252a070
	if (!ctx.cr0.eq) goto loc_8252A070;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82529b3c
	if (!ctx.cr6.eq) goto loc_82529B3C;
loc_8252A070:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252ce70
	if (!ctx.cr0.eq) goto loc_8252CE70;
	// mr r20,r11
	r20.u64 = ctx.r11.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8252ce70
	if (ctx.cr0.eq) goto loc_8252CE70;
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
	// lfd f28,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f28.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// lfs f26,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	f26.f64 = double(temp.f32);
	// lfs f29,3716(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	f29.f64 = double(temp.f32);
	// lfs f27,11200(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 11200);
	f27.f64 = double(temp.f32);
	// lfs f30,3788(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3788);
	f30.f64 = double(temp.f32);
loc_8252A0B4:
	// lwz r9,788(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 788);
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// stw r18,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r18.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8252a148
	if (ctx.cr6.eq) goto loc_8252A148;
	// lwz r11,28(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252a134
	if (!ctx.cr0.eq) goto loc_8252A134;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8252a134
	if (ctx.cr0.eq) goto loc_8252A134;
loc_8252A0E0:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8252a118
	if (ctx.cr0.eq) goto loc_8252A118;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8252a104
	if (ctx.cr6.lt) goto loc_8252A104;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// ble cr6,0x8252a108
	if (!ctx.cr6.gt) goto loc_8252A108;
loc_8252A104:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_8252A108:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252a118
	if (ctx.cr0.eq) goto loc_8252A118;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
loc_8252A118:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252a134
	if (!ctx.cr0.eq) goto loc_8252A134;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252a0e0
	if (!ctx.cr6.eq) goto loc_8252A0E0;
loc_8252A134:
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8252a148
	if (!ctx.cr6.gt) goto loc_8252A148;
	// li r4,3587
	ctx.r4.s64 = 3587;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824e4270
	ctx.lr = 0x8252A148;
	sub_824E4270(ctx, base);
loc_8252A148:
	// lwz r10,28(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 28);
	// addi r11,r20,24
	ctx.r11.s64 = r20.s64 + 24;
	// stw r18,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r18.u32);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r14,r11,r10
	r14.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_8252A164:
	// lbz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252ce00
	if (ctx.cr6.eq) goto loc_8252CE00;
	// beq 0x8252a194
	if (ctx.cr0.eq) goto loc_8252A194;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825297d0
	ctx.lr = 0x8252A184;
	sub_825297D0(ctx, base);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824f7708
	ctx.lr = 0x8252A18C;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252bf00
	if (!ctx.cr0.eq) goto loc_8252BF00;
loc_8252A194:
	// lwz r31,8(r14)
	r31.u64 = REX_LOAD_U32(r14.u32 + 8);
	// rlwinm r11,r31,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8252b914
	if (ctx.cr6.eq) goto loc_8252B914;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8252b874
	if (ctx.cr6.eq) goto loc_8252B874;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8252abd0
	if (ctx.cr6.eq) goto loc_8252ABD0;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x8252a94c
	if (ctx.cr6.eq) goto loc_8252A94C;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x8252a404
	if (ctx.cr6.eq) goto loc_8252A404;
	// cmpwi cr6,r11,55
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 55, ctx.xer);
	// beq cr6,0x8252a3bc
	if (ctx.cr6.eq) goto loc_8252A3BC;
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// bne cr6,0x8252a370
	if (!ctx.cr6.eq) goto loc_8252A370;
	// lwz r31,4(r14)
	r31.u64 = REX_LOAD_U32(r14.u32 + 4);
	// addi r29,r14,4
	r29.s64 = r14.s64 + 4;
loc_8252A1DC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8252a28c
	if (ctx.cr6.eq) goto loc_8252A28C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252a254
	if (ctx.cr6.eq) goto loc_8252A254;
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r30,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252a254
	if (ctx.cr0.eq) goto loc_8252A254;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f6fc8
	ctx.lr = 0x8252A204;
	sub_824F6FC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8252a220
	if (ctx.cr0.eq) goto loc_8252A220;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// andc r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ~ctx.r11.u64;
	// subf. r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// beq 0x8252a224
	if (ctx.cr0.eq) goto loc_8252A224;
loc_8252A220:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_8252A224:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252a370
	if (ctx.cr0.eq) goto loc_8252A370;
	// rlwinm r11,r30,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x3;
	// clrlwi r4,r30,27
	ctx.r4.u64 = r30.u32 & 0x1F;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r14
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r14.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x82528dd0
	ctx.lr = 0x8252A24C;
	sub_82528DD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252a370
	if (ctx.cr0.eq) goto loc_8252A370;
loc_8252A254:
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x8252a1dc
	goto loc_8252A1DC;
loc_8252A25C:
	// li r4,3555
	ctx.r4.s64 = 3555;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824e4368
	ctx.lr = 0x8252A268;
	sub_824E4368(ctx, base);
loc_8252A268:
	// li r4,3556
	ctx.r4.s64 = 3556;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824e4368
	ctx.lr = 0x8252A274;
	sub_824E4368(ctx, base);
loc_8252A274:
	// li r4,3629
	ctx.r4.s64 = 3629;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824e4368
	ctx.lr = 0x8252A280;
	sub_824E4368(ctx, base);
loc_8252A280:
	// li r4,3629
	ctx.r4.s64 = 3629;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824e4368
	ctx.lr = 0x8252A28C;
	sub_824E4368(ctx, base);
loc_8252A28C:
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8252a360
	if (ctx.cr6.eq) goto loc_8252A360;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252a34c
	if (ctx.cr6.eq) goto loc_8252A34C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252a34c
	if (ctx.cr0.eq) goto loc_8252A34C;
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// addi r10,r11,11
	ctx.r10.s64 = ctx.r11.s64 + 11;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwzx r11,r9,r14
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + r14.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r30,r7,27,30,31
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x3;
	// b 0x8252a2e4
	goto loc_8252A2E4;
loc_8252A2DC:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8252A2E4:
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, ctx.xer);
	// bne cr6,0x8252a2dc
	if (!ctx.cr6.eq) goto loc_8252A2DC;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r31,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, r31.u32);
	// stw r8,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r4,r10,27
	ctx.r4.u64 = ctx.r10.u32 & 0x1F;
	// bl 0x8250a5d8
	ctx.lr = 0x8252A318;
	sub_8250A5D8(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r30,26
	ctx.r10.u64 = r30.u32 & 0x3F;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | r30.u64;
	// clrlwi r8,r30,24
	ctx.r8.u64 = r30.u32 & 0xFF;
	// rlwinm r11,r11,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r10,r9,0,0,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFE000;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwimi r3,r11,5,0,26
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0) | (ctx.r3.u64 & 0xFFFFFFFF0000001F);
	// or r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 | ctx.r10.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8252A34C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8252a28c
	if (!ctx.cr6.eq) goto loc_8252A28C;
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// b 0x8252a28c
	goto loc_8252A28C;
loc_8252A360:
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824f7708
	ctx.lr = 0x8252A368;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252bf10
	if (!ctx.cr0.eq) goto loc_8252BF10;
loc_8252A370:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252bed8
	if (ctx.cr6.eq) goto loc_8252BED8;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r14,r10
	ctx.cr6.compare<uint32_t>(r14.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8252a3a8
	if (!ctx.cr6.eq) goto loc_8252A3A8;
loc_8252A39C:
	// rlwinm r11,r14,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r14,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r14.u32);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
loc_8252A3A8:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r14,r10,r11
	r14.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x8252a164
	goto loc_8252A164;
loc_8252A3BC:
	// lwz r11,44(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 44);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm. r9,r9,0,25,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x60;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8252a370
	if (!ctx.cr0.eq) goto loc_8252A370;
	// lwz r31,12(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,1408
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1408, ctx.xer);
	// bne cr6,0x8252a370
	if (!ctx.cr6.eq) goto loc_8252A370;
	// clrlwi. r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252a370
	if (!ctx.cr0.eq) goto loc_8252A370;
	// lwz r8,44(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,12(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// b 0x8252bf34
	goto loc_8252BF34;
loc_8252A404:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252a370
	if (!ctx.cr0.eq) goto loc_8252A370;
	// lis r24,512
	r24.s64 = 33554432;
loc_8252A410:
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// rlwinm r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// bne cr6,0x8252a370
	if (!ctx.cr6.eq) goto loc_8252A370;
	// lwz r26,52(r14)
	r26.u64 = REX_LOAD_U32(r14.u32 + 52);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252a370
	if (!ctx.cr0.eq) goto loc_8252A370;
	// lwz r27,12(r26)
	r27.u64 = REX_LOAD_U32(r26.u32 + 12);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bne cr6,0x8252a370
	if (!ctx.cr6.eq) goto loc_8252A370;
	// rlwinm r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// bne cr6,0x8252a370
	if (!ctx.cr6.eq) goto loc_8252A370;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
loc_8252A454:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252a478
	if (ctx.cr6.eq) goto loc_8252A478;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252a470
	if (ctx.cr6.eq) goto loc_8252A470;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x8252a370
	if (!ctx.cr6.eq) goto loc_8252A370;
loc_8252A470:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8252a454
	goto loc_8252A454;
loc_8252A478:
	// lwz r28,44(r14)
	r28.u64 = REX_LOAD_U32(r14.u32 + 44);
	// mr r29,r18
	r29.u64 = r18.u64;
	// lwz r25,48(r14)
	r25.u64 = REX_LOAD_U32(r14.u32 + 48);
	// addi r30,r27,44
	r30.s64 = r27.s64 + 44;
loc_8252A488:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8252a370
	if (!ctx.cr6.lt) goto loc_8252A370;
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r28,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// stw r25,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r25.u32);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// beq cr6,0x8252a530
	if (ctx.cr6.eq) goto loc_8252A530;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82503da0
	ctx.lr = 0x8252A4C8;
	sub_82503DA0(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// ori r11,r11,228
	ctx.r11.u64 = ctx.r11.u64 | 228;
	// rlwinm r10,r11,27,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x6;
	// rlwinm r9,r11,29,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x6;
	// rlwinm r8,r11,31,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x6;
	// rlwinm r11,r11,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x6;
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r6,r7,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0xFF;
	// rlwinm r7,r7,0,27,18
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// srw r10,r6,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// srw r9,r6,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwimi r9,r10,2,28,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw r10,r6,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// srw r11,r6,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r11.u8 & 0x3F));
	// rlwimi r10,r9,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// rlwimi r11,r10,2,0,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r19,25,4,6
	ctx.r10.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 25) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8252A530:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825324d0
	ctx.lr = 0x8252A544;
	sub_825324D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252a578
	if (ctx.cr0.eq) goto loc_8252A578;
	// addi r10,r1,180
	ctx.r10.s64 = ctx.r1.s64 + 180;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8252e010
	ctx.lr = 0x8252A570;
	sub_8252E010(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252a65c
	if (!ctx.cr0.eq) goto loc_8252A65C;
loc_8252A578:
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252a5c0
	if (!ctx.cr6.eq) goto loc_8252A5C0;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8252a5a0
	goto loc_8252A5A0;
loc_8252A598:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_8252A5A0:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8252a598
	if (!ctx.cr6.eq) goto loc_8252A598;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x824f7a20
	ctx.lr = 0x8252A5C0;
	sub_824F7A20(ctx, base);
loc_8252A5C0:
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252a608
	if (!ctx.cr6.eq) goto loc_8252A608;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8252a5e8
	goto loc_8252A5E8;
loc_8252A5E0:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_8252A5E8:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8252a5e0
	if (!ctx.cr6.eq) goto loc_8252A5E0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x824f7a20
	ctx.lr = 0x8252A608;
	sub_824F7A20(ctx, base);
loc_8252A608:
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252a650
	if (!ctx.cr6.eq) goto loc_8252A650;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8252a630
	goto loc_8252A630;
loc_8252A628:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_8252A630:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8252a628
	if (!ctx.cr6.eq) goto loc_8252A628;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x824f7a20
	ctx.lr = 0x8252A650;
	sub_824F7A20(ctx, base);
loc_8252A650:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// b 0x8252a488
	goto loc_8252A488;
loc_8252A65C:
	// subfic r11,r29,12
	ctx.xer.ca = r29.u32 <= 12;
	ctx.r11.u64 = static_cast<uint64_t>(12) - r29.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r27
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// beq cr6,0x8252a698
	if (ctx.cr6.eq) goto loc_8252A698;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// li r4,228
	ctx.r4.s64 = 228;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwimi r4,r11,27,30,31
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFFC);
	// bl 0x82528e18
	ctx.lr = 0x8252A68C;
	sub_82528E18(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwimi r11,r19,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_8252A698:
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8250c958
	ctx.lr = 0x8252A6AC;
	sub_8250C958(ctx, base);
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r18,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r18.u32);
	// cmplw cr6,r5,r28
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r28.u32, ctx.xer);
	// beq cr6,0x8252a6cc
	if (ctx.cr6.eq) goto loc_8252A6CC;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8250c958
	ctx.lr = 0x8252A6CC;
	sub_8250C958(ctx, base);
loc_8252A6CC:
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r5,r25
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r25.u32, ctx.xer);
	// beq cr6,0x8252a6e8
	if (ctx.cr6.eq) goto loc_8252A6E8;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8250c958
	ctx.lr = 0x8252A6E8;
	sub_8250C958(ctx, base);
loc_8252A6E8:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r14,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r5,r11,-36
	ctx.r5.s64 = ctx.r11.s64 + -36;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r7,r14,4
	ctx.r7.s64 = r14.s64 + 4;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r3,r6,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r4,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r4,r4,0,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r3,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r4,r4,0,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r4)
	REX_STORE_U32(ctx.r4.u32 + 36, ctx.r9.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r5,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_8252A748:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252a7fc
	if (ctx.cr6.eq) goto loc_8252A7FC;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252a7e8
	if (ctx.cr6.eq) goto loc_8252A7E8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252a7e8
	if (ctx.cr0.eq) goto loc_8252A7E8;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8252a784
	goto loc_8252A784;
loc_8252A77C:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8252A784:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252a77c
	if (!ctx.cr6.eq) goto loc_8252A77C;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r11.u32);
	// stw r27,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r27.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// rlwinm r8,r10,24,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// srw r9,r18,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r18.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r8,r18,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r18.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r10,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// srw r9,r18,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r18.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r5,r10,28,29,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// rlwimi r9,r8,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r8,r18,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (r18.u32 >> (ctx.r5.u8 & 0x3F));
	// rlwimi r8,r9,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8252A7E8:
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252a748
	if (!ctx.cr6.eq) goto loc_8252A748;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// b 0x8252a748
	goto loc_8252A748;
loc_8252A7FC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8252a814
	goto loc_8252A814;
loc_8252A80C:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8252A814:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8252a80c
	if (!ctx.cr6.eq) goto loc_8252A80C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r12,-3073
	ctx.r12.s64 = -201392128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// ori r12,r12,64640
	ctx.r12.u64 = ctx.r12.u64 | 64640;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r31,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r31.u32);
	// stw r14,12(r31)
	REX_STORE_U32(r31.u32 + 12, r14.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// rlwinm r11,r11,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// andc r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r11.u64 = static_cast<uint64_t>(-1) - ctx.r11.u64;
	// rlwinm r11,r11,5,22,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x3E0;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// ori r11,r11,7296
	ctx.r11.u64 = ctx.r11.u64 | 7296;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8250aed8
	ctx.lr = 0x8252A87C;
	sub_8250AED8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252a8f4
	if (!ctx.cr0.eq) goto loc_8252A8F4;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_8252A88C:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8252a8f4
	if (ctx.cr6.eq) goto loc_8252A8F4;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252a8b0
	if (ctx.cr0.eq) goto loc_8252A8B0;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// beq 0x8252a8b4
	if (ctx.cr0.eq) goto loc_8252A8B4;
loc_8252A8B0:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_8252A8B4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252a8e0
	if (ctx.cr0.eq) goto loc_8252A8E0;
	// rlwinm. r11,r10,0,7,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252a8e0
	if (!ctx.cr0.eq) goto loc_8252A8E0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8252A8D0;
	sub_8250AD28(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250b470
	ctx.lr = 0x8252A8E0;
	sub_8250B470(ctx, base);
loc_8252A8E0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8252a88c
	if (!ctx.cr6.eq) goto loc_8252A88C;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// b 0x8252a88c
	goto loc_8252A88C;
loc_8252A8F4:
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252a914
	if (ctx.cr0.eq) goto loc_8252A914;
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252a914
	if (!ctx.cr0.eq) goto loc_8252A914;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// b 0x8252a934
	goto loc_8252A934;
loc_8252A914:
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252a93c
	if (ctx.cr0.eq) goto loc_8252A93C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252a93c
	if (!ctx.cr6.eq) goto loc_8252A93C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82509448
	ctx.lr = 0x8252A930;
	sub_82509448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8252A934:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82549518
	ctx.lr = 0x8252A93C;
	sub_82549518(ctx, base);
loc_8252A93C:
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252a410
	if (ctx.cr0.eq) goto loc_8252A410;
	// b 0x8252a370
	goto loc_8252A370;
loc_8252A94C:
	// lwz r10,4(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 4);
	// mr r24,r18
	r24.u64 = r18.u64;
loc_8252A954:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252a9a8
	if (ctx.cr6.eq) goto loc_8252A9A8;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252a9a0
	if (ctx.cr6.eq) goto loc_8252A9A0;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r8,r9,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8252a9a0
	if (ctx.cr0.eq) goto loc_8252A9A0;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r8,0,18,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// bne cr6,0x8252a370
	if (!ctx.cr6.eq) goto loc_8252A370;
	// clrlwi. r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8252a370
	if (!ctx.cr0.eq) goto loc_8252A370;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8252a99c
	if (ctx.cr6.eq) goto loc_8252A99C;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// bne cr6,0x8252a370
	if (!ctx.cr6.eq) goto loc_8252A370;
loc_8252A99C:
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
loc_8252A9A0:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8252a954
	goto loc_8252A954;
loc_8252A9A8:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8252a370
	if (ctx.cr6.eq) goto loc_8252A370;
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// rlwinm. r10,r11,7,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252a370
	if (!ctx.cr0.eq) goto loc_8252A370;
	// rlwinm. r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252a370
	if (!ctx.cr0.eq) goto loc_8252A370;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252a370
	if (!ctx.cr0.eq) goto loc_8252A370;
	// rlwinm r6,r31,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 18) & 0x7;
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8252a370
	if (!ctx.cr6.eq) goto loc_8252A370;
	// lwz r31,44(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 44);
	// lwz r30,48(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + 48);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r14.u32, ctx.xer);
	// beq cr6,0x8252a9fc
	if (ctx.cr6.eq) goto loc_8252A9FC;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// mr r31,r30
	r31.u64 = r30.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_8252A9FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r29,52(r14)
	r29.u64 = REX_LOAD_U32(r14.u32 + 52);
	// rlwinm r26,r11,27,24,31
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// b 0x8252aab0
	goto loc_8252AAB0;
loc_8252AA0C:
	// lwz r7,16(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8252AA14:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8252aa40
	if (ctx.cr6.eq) goto loc_8252AA40;
	// lwz r8,16(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8252aa30
	if (ctx.cr6.eq) goto loc_8252AA30;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8252aa38
	if (!ctx.cr6.eq) goto loc_8252AA38;
loc_8252AA30:
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x8252aa14
	goto loc_8252AA14;
loc_8252AA38:
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// b 0x8252aa44
	goto loc_8252AA44;
loc_8252AA40:
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
loc_8252AA44:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8252aac0
	if (!ctx.cr0.eq) goto loc_8252AAC0;
	// rlwinm r9,r10,18,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8252aac0
	if (!ctx.cr6.eq) goto loc_8252AAC0;
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x8252aac4
	if (ctx.cr6.eq) goto loc_8252AAC4;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// bne cr6,0x8252a370
	if (!ctx.cr6.eq) goto loc_8252A370;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi. r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8252a370
	if (!ctx.cr0.eq) goto loc_8252A370;
	// lwz r29,52(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r9,r10,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// rlwinm r11,r26,27,29,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 27) & 0x6;
	// rlwinm r10,r26,29,29,30
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 29) & 0x6;
	// srw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// srw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwinm r5,r26,31,29,30
	ctx.r5.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 31) & 0x6;
	// rlwimi r7,r8,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r8,r26,1,29,30
	ctx.r8.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0x6;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srw r5,r9,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// rlwimi r5,r7,2,0,29
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r5.u64 & 0xFFFFFFFF00000003);
	// srw r26,r9,r8
	r26.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r26,r5,2,0,29
	r26.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC) | (r26.u64 & 0xFFFFFFFF00000003);
loc_8252AAB0:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r9,r10,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8252aa0c
	if (ctx.cr0.eq) goto loc_8252AA0C;
loc_8252AAC0:
	// mr r29,r18
	r29.u64 = r18.u64;
loc_8252AAC4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8252a370
	if (ctx.cr6.eq) goto loc_8252A370;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r28,12(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8252aaf0
	if (ctx.cr6.eq) goto loc_8252AAF0;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// bne cr6,0x8252aaf4
	if (!ctx.cr6.eq) goto loc_8252AAF4;
loc_8252AAF0:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_8252AAF4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252ab14
	if (!ctx.cr0.eq) goto loc_8252AB14;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825c3328
	ctx.lr = 0x8252AB0C;
	sub_825C3328(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252a370
	if (ctx.cr0.eq) goto loc_8252A370;
loc_8252AB14:
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824ffd98
	ctx.lr = 0x8252AB30;
	sub_824FFD98(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8252ab4c
	goto loc_8252AB4C;
loc_8252AB44:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8252AB4C:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8252ab44
	if (!ctx.cr6.eq) goto loc_8252AB44;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r25)
	REX_STORE_U32(r25.u32 + 4, r31.u32);
	// stw r25,12(r31)
	REX_STORE_U32(r31.u32 + 12, r25.u32);
	// bl 0x825291a8
	ctx.lr = 0x8252AB88;
	sub_825291A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252c004
	if (!ctx.cr0.eq) goto loc_8252C004;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8252aba8
	goto loc_8252ABA8;
loc_8252ABA0:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8252ABA8:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8252aba0
	if (!ctx.cr6.eq) goto loc_8252ABA0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r14)
	REX_STORE_U32(r14.u32 + 4, r31.u32);
	// stw r14,12(r31)
	REX_STORE_U32(r31.u32 + 12, r14.u32);
	// b 0x8252b860
	goto loc_8252B860;
loc_8252ABD0:
	// lwz r16,44(r14)
	r16.u64 = REX_LOAD_U32(r14.u32 + 44);
	// lwz r26,48(r14)
	r26.u64 = REX_LOAD_U32(r14.u32 + 48);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x824f7010
	ctx.lr = 0x8252ABE4;
	sub_824F7010(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252a370
	if (ctx.cr0.eq) goto loc_8252A370;
	// lwz r15,12(r16)
	r15.u64 = REX_LOAD_U32(r16.u32 + 12);
	// lwz r10,8(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 8);
	// rlwinm. r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252a370
	if (!ctx.cr0.eq) goto loc_8252A370;
	// rlwinm r9,r10,25,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x8252ac14
	if (ctx.cr6.lt) goto loc_8252AC14;
	// cmplwi cr6,r9,82
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 82, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// ble cr6,0x8252ac18
	if (!ctx.cr6.gt) goto loc_8252AC18;
loc_8252AC14:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_8252AC18:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252b324
	if (!ctx.cr0.eq) goto loc_8252B324;
	// cmplwi cr6,r9,110
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 110, ctx.xer);
	// bne cr6,0x8252b13c
	if (!ctx.cr6.eq) goto loc_8252B13C;
	// rlwinm. r11,r31,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252b13c
	if (ctx.cr0.eq) goto loc_8252B13C;
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252b13c
	if (!ctx.cr0.eq) goto loc_8252B13C;
	// rlwinm. r11,r31,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252b13c
	if (!ctx.cr0.eq) goto loc_8252B13C;
	// lwz r10,4(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 4);
loc_8252AC44:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252ac68
	if (ctx.cr6.eq) goto loc_8252AC68;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252ac60
	if (ctx.cr6.eq) goto loc_8252AC60;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r14.u32, ctx.xer);
	// bne cr6,0x8252a370
	if (!ctx.cr6.eq) goto loc_8252A370;
loc_8252AC60:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8252ac44
	goto loc_8252AC44;
loc_8252AC68:
	// lwz r11,56(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252ac80
	if (ctx.cr6.eq) goto loc_8252AC80;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252b270
	if (!ctx.cr0.eq) goto loc_8252B270;
loc_8252AC80:
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// mr r17,r11
	r17.u64 = ctx.r11.u64;
loc_8252AC88:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x8252accc
	if (ctx.cr6.eq) goto loc_8252ACCC;
	// lwz r9,0(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 0);
	// rlwinm. r10,r9,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252aca8
	if (ctx.cr0.eq) goto loc_8252ACA8;
	// rlwinm. r10,r9,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// beq 0x8252acac
	if (ctx.cr0.eq) goto loc_8252ACAC;
loc_8252ACA8:
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
loc_8252ACAC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252acc4
	if (ctx.cr0.eq) goto loc_8252ACC4;
	// rlwinm r10,r9,0,7,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFE000;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8252accc
	if (ctx.cr6.eq) goto loc_8252ACCC;
loc_8252ACC4:
	// lwz r17,4(r17)
	r17.u64 = REX_LOAD_U32(r17.u32 + 4);
	// b 0x8252ac88
	goto loc_8252AC88;
loc_8252ACCC:
	// lwz r18,92(r20)
	r18.u64 = REX_LOAD_U32(r20.u32 + 92);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x8252ad10
	if (ctx.cr6.eq) goto loc_8252AD10;
loc_8252ACD8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252acfc
	if (ctx.cr6.eq) goto loc_8252ACFC;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r18.u32, ctx.xer);
	// beq cr6,0x8252acf4
	if (ctx.cr6.eq) goto loc_8252ACF4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8252acd8
	goto loc_8252ACD8;
loc_8252ACF4:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// b 0x8252ad00
	goto loc_8252AD00;
loc_8252ACFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8252AD00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r18,r11,r18
	r18.u64 = ctx.r11.u64 & r18.u64;
loc_8252AD10:
	// lwz r19,4(r14)
	r19.u64 = REX_LOAD_U32(r14.u32 + 4);
loc_8252AD14:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x8252ad3c
	if (ctx.cr6.eq) goto loc_8252AD3C;
	// lwz r11,16(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252ad34
	if (ctx.cr6.eq) goto loc_8252AD34;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252ad3c
	if (!ctx.cr0.eq) goto loc_8252AD3C;
loc_8252AD34:
	// lwz r19,8(r19)
	r19.u64 = REX_LOAD_U32(r19.u32 + 8);
	// b 0x8252ad14
	goto loc_8252AD14;
loc_8252AD3C:
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// li r22,0
	r22.s64 = 0;
	// lwz r10,0(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 0);
	// li r23,0
	r23.s64 = 0;
	// rlwinm. r26,r11,7,29,31
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// rlwinm r20,r10,19,20,31
	r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFFF;
	// rlwinm r21,r11,27,24,31
	r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// li r27,0
	r27.s64 = 0;
	// beq 0x8252b018
	if (ctx.cr0.eq) goto loc_8252B018;
	// li r24,0
	r24.s64 = 0;
	// li r25,0
	r25.s64 = 0;
loc_8252AD68:
	// srw r11,r21,r24
	ctx.r11.u64 = r24.u8 & 0x20 ? 0 : (r21.u32 >> (r24.u8 & 0x3F));
	// clrlwi r6,r11,30
	ctx.r6.u64 = ctx.r11.u32 & 0x3;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r6,11
	ctx.r10.s64 = ctx.r6.s64 + 11;
	// slw r11,r11,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r6.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// or r22,r11,r22
	r22.u64 = ctx.r11.u64 | r22.u64;
	// lwzx r11,r10,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r15.u32);
	// lwz r28,12(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,112
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 112, ctx.xer);
	// beq cr6,0x8252b018
	if (ctx.cr6.eq) goto loc_8252B018;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8252adb0
	if (ctx.cr6.lt) goto loc_8252ADB0;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8252adb4
	if (!ctx.cr6.gt) goto loc_8252ADB4;
loc_8252ADB0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8252ADB4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252b018
	if (ctx.cr0.eq) goto loc_8252B018;
	// rlwinm. r11,r10,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252b018
	if (!ctx.cr0.eq) goto loc_8252B018;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
loc_8252ADC8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252adec
	if (ctx.cr6.eq) goto loc_8252ADEC;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252ade4
	if (ctx.cr6.eq) goto loc_8252ADE4;
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r15.u32, ctx.xer);
	// bne cr6,0x8252b018
	if (!ctx.cr6.eq) goto loc_8252B018;
loc_8252ADE4:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8252adc8
	goto loc_8252ADC8;
loc_8252ADEC:
	// lwz r7,4(r15)
	ctx.r7.u64 = REX_LOAD_U32(r15.u32 + 4);
loc_8252ADF0:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8252ae68
	if (ctx.cr6.eq) goto loc_8252AE68;
	// lwz r11,16(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252ae58
	if (ctx.cr6.eq) goto loc_8252AE58;
	// lwz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r9,r8,7,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8252ae58
	if (ctx.cr0.eq) goto loc_8252AE58;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r14.u32, ctx.xer);
	// beq cr6,0x8252ae58
	if (ctx.cr6.eq) goto loc_8252AE58;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8252ae4c
	if (ctx.cr6.eq) goto loc_8252AE4C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8252AE28:
	// rlwinm r5,r8,27,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// srw r5,r5,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r5,r5,30
	ctx.r5.u64 = ctx.r5.u32 & 0x3;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x8252ae60
	if (ctx.cr6.eq) goto loc_8252AE60;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8252ae28
	if (ctx.cr6.lt) goto loc_8252AE28;
loc_8252AE4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8252AE50:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252b018
	if (!ctx.cr0.eq) goto loc_8252B018;
loc_8252AE58:
	// lwz r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// b 0x8252adf0
	goto loc_8252ADF0;
loc_8252AE60:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8252ae50
	goto loc_8252AE50;
loc_8252AE68:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x8252ae8c
	if (ctx.cr6.eq) goto loc_8252AE8C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,12(r17)
	ctx.r4.u64 = REX_LOAD_U32(r17.u32 + 12);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,484(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// bl 0x825c3328
	ctx.lr = 0x8252AE84;
	sub_825C3328(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252b018
	if (ctx.cr0.eq) goto loc_8252B018;
loc_8252AE8C:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x8252aeb0
	if (ctx.cr6.eq) goto loc_8252AEB0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,484(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x825c3328
	ctx.lr = 0x8252AEA8;
	sub_825C3328(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252b018
	if (ctx.cr0.eq) goto loc_8252B018;
loc_8252AEB0:
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// clrlwi. r30,r11,27
	r30.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8252af34
	if (ctx.cr0.eq) goto loc_8252AF34;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 384, ctx.xer);
	// bne cr6,0x8252b018
	if (!ctx.cr6.eq) goto loc_8252B018;
	// lwz r31,44(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 44);
	// lwz r4,48(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7010
	ctx.lr = 0x8252AEDC;
	sub_824F7010(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252b018
	if (ctx.cr0.eq) goto loc_8252B018;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm. r10,r11,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252af04
	if (ctx.cr0.eq) goto loc_8252AF04;
	// rlwinm. r10,r30,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252af04
	if (ctx.cr0.eq) goto loc_8252AF04;
loc_8252AEFC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8252af2c
	goto loc_8252AF2C;
loc_8252AF04:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252af14
	if (ctx.cr0.eq) goto loc_8252AF14;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252aefc
	if (!ctx.cr0.eq) goto loc_8252AEFC;
loc_8252AF14:
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252af28
	if (ctx.cr0.eq) goto loc_8252AF28;
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne 0x8252af2c
	if (!ctx.cr0.eq) goto loc_8252AF2C;
loc_8252AF28:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8252AF2C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252b018
	if (ctx.cr0.eq) goto loc_8252B018;
loc_8252AF34:
	// li r30,0
	r30.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// clrlwi r10,r20,28
	ctx.r10.u64 = r20.u32 & 0xF;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
loc_8252AF54:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252afcc
	if (ctx.cr6.eq) goto loc_8252AFCC;
	// srw r9,r21,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (r21.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// addi r5,r9,11
	ctx.r5.s64 = ctx.r9.s64 + 11;
	// andc r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwzx r8,r8,r15
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + r15.u32);
	// lwz r5,12(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r5,r28
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r28.u32, ctx.xer);
	// bne cr6,0x8252afbc
	if (!ctx.cr6.eq) goto loc_8252AFBC;
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// slw r5,r5,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r8,r8,27,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x3;
	// andc r5,r30,r5
	ctx.r5.u64 = r30.u64 & ~ctx.r5.u64;
	// slw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// or r30,r8,r5
	r30.u64 = ctx.r8.u64 | ctx.r5.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r29,r9,r29
	r29.u64 = ctx.r9.u64 | r29.u64;
	// cmplw cr6,r7,r27
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r27.u32, ctx.xer);
	// bge cr6,0x8252afbc
	if (!ctx.cr6.lt) goto loc_8252AFBC;
	// addi r23,r23,-1
	r23.s64 = r23.s64 + -1;
loc_8252AFBC:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// cmplw cr6,r7,r26
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r26.u32, ctx.xer);
	// blt cr6,0x8252af54
	if (ctx.cr6.lt) goto loc_8252AF54;
loc_8252AFCC:
	// cmplw cr6,r7,r26
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r26.u32, ctx.xer);
	// blt cr6,0x8252b018
	if (ctx.cr6.lt) goto loc_8252B018;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b88e8
	ctx.lr = 0x8252AFE4;
	sub_825B88E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252b018
	if (ctx.cr0.eq) goto loc_8252B018;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r24,r24,2
	r24.s64 = r24.s64 + 2;
	// stwx r30,r25,r11
	REX_STORE_U32(r25.u32 + ctx.r11.u32, r30.u32);
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(r27.u32, r26.u32, ctx.xer);
	// stwx r31,r25,r10
	REX_STORE_U32(r25.u32 + ctx.r10.u32, r31.u32);
	// stwx r29,r25,r9
	REX_STORE_U32(r25.u32 + ctx.r9.u32, r29.u32);
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// blt cr6,0x8252ad68
	if (ctx.cr6.lt) goto loc_8252AD68;
loc_8252B018:
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(r27.u32, r26.u32, ctx.xer);
	// bne cr6,0x8252b270
	if (!ctx.cr6.eq) goto loc_8252B270;
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 8);
	// rlwinm r11,r11,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252b270
	if (!ctx.cr6.eq) goto loc_8252B270;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,484(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// add r11,r23,r11
	ctx.r11.u64 = r23.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,788(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 788);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8252b270
	if (ctx.cr6.gt) goto loc_8252B270;
	// lwz r25,484(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8252c3e8
	if (ctx.cr6.eq) goto loc_8252C3E8;
	// li r27,0
	r27.s64 = 0;
	// li r29,0
	r29.s64 = 0;
loc_8252B060:
	// srw r11,r21,r27
	ctx.r11.u64 = r27.u8 & 0x20 ? 0 : (r21.u32 >> (r27.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	// lwz r31,12(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252c3d8
	if (!ctx.cr0.eq) goto loc_8252C3D8;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r28,r29,r11
	r28.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwzx r5,r29,r10
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x825b89b0
	ctx.lr = 0x8252B0A0;
	sub_825B89B0(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x8252b0dc
	if (ctx.cr6.eq) goto loc_8252B0DC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,12(r17)
	ctx.r4.u64 = REX_LOAD_U32(r17.u32 + 12);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825c4b00
	ctx.lr = 0x8252B0C0;
	sub_825C4B00(ctx, base);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x8252b110
	if (ctx.cr6.eq) goto loc_8252B110;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r4,12(r17)
	ctx.r4.u64 = REX_LOAD_U32(r17.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad88
	ctx.lr = 0x8252B0D8;
	sub_8250AD88(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8252B0DC:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x8252b110
	if (ctx.cr6.eq) goto loc_8252B110;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825c4b00
	ctx.lr = 0x8252B0F8;
	sub_825C4B00(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8252b110
	if (ctx.cr6.eq) goto loc_8252B110;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250b470
	ctx.lr = 0x8252B110;
	sub_8250B470(ctx, base);
loc_8252B110:
	// lwz r30,0(r14)
	r30.u64 = REX_LOAD_U32(r14.u32 + 0);
loc_8252B114:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8252c2ec
	if (ctx.cr6.eq) goto loc_8252C2EC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252b134
	if (!ctx.cr0.eq) goto loc_8252B134;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8252B134;
	sub_8250AD28(ctx, base);
loc_8252B134:
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x8252b114
	goto loc_8252B114;
loc_8252B13C:
	// cmplwi cr6,r9,125
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 125, ctx.xer);
	// bne cr6,0x8252b270
	if (!ctx.cr6.eq) goto loc_8252B270;
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r4,r11,27,30,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// bl 0x825b8558
	ctx.lr = 0x8252B158;
	sub_825B8558(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// bne cr6,0x8252b1f0
	if (!ctx.cr6.eq) goto loc_8252B1F0;
	// lwz r31,4(r14)
	r31.u64 = REX_LOAD_U32(r14.u32 + 4);
loc_8252B168:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8252b1f0
	if (ctx.cr6.eq) goto loc_8252B1F0;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252b1e4
	if (ctx.cr6.eq) goto loc_8252B1E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252b1e4
	if (ctx.cr0.eq) goto loc_8252B1E4;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252b1ec
	if (ctx.cr0.eq) goto loc_8252B1EC;
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// li r10,4
	ctx.r10.s64 = 4;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8252b1c0
	if (ctx.cr0.eq) goto loc_8252B1C0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8252B1C0:
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8252b1d4
	if (ctx.cr0.eq) goto loc_8252B1D4;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8252b1d4
	if (ctx.cr0.eq) goto loc_8252B1D4;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_8252B1D4:
	// or r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 | ctx.r11.u64;
	// bl 0x82528eb8
	ctx.lr = 0x8252B1DC;
	sub_82528EB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252b1ec
	if (ctx.cr0.eq) goto loc_8252B1EC;
loc_8252B1E4:
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x8252b168
	goto loc_8252B168;
loc_8252B1EC:
	// fmr f31,f27
	ctx.fpscr.disableFlushMode();
	f31.f64 = f27.f64;
loc_8252B1F0:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f29.f64);
	// beq cr6,0x8252b21c
	if (ctx.cr6.eq) goto loc_8252B21C;
	// lwz r11,48(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8252b270
	if (ctx.cr6.eq) goto loc_8252B270;
	// fcmpu cr6,f31,f26
	ctx.cr6.compare(f31.f64, f26.f64);
	// beq cr6,0x8252b21c
	if (ctx.cr6.eq) goto loc_8252B21C;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(f31.f64, f30.f64);
	// bne cr6,0x8252b270
	if (!ctx.cr6.eq) goto loc_8252B270;
loc_8252B21C:
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// mr r30,r19
	r30.u64 = r19.u64;
	// rlwinm r31,r11,7,29,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(r31.u32, 1, ctx.xer);
	// ble cr6,0x8252b268
	if (!ctx.cr6.gt) goto loc_8252B268;
	// li r29,2
	r29.s64 = 2;
loc_8252B234:
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// rlwinm r10,r11,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// srw r11,r10,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r29.u8 & 0x3F));
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
	// bl 0x825b8558
	ctx.lr = 0x8252B250;
	sub_825B8558(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// bne cr6,0x8252b268
	if (!ctx.cr6.eq) goto loc_8252B268;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// blt cr6,0x8252b234
	if (ctx.cr6.lt) goto loc_8252B234;
loc_8252B268:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// beq cr6,0x8252c440
	if (ctx.cr6.eq) goto loc_8252C440;
loc_8252B270:
	// lwz r31,8(r14)
	r31.u64 = REX_LOAD_U32(r14.u32 + 8);
	// li r19,1
	r19.s64 = 1;
	// lwz r21,484(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// li r18,0
	r18.s64 = 0;
	// lwz r20,100(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm. r11,r31,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252a370
	if (!ctx.cr0.eq) goto loc_8252A370;
loc_8252B28C:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252a370
	if (!ctx.cr0.eq) goto loc_8252A370;
	// rlwinm. r11,r31,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252a370
	if (!ctx.cr0.eq) goto loc_8252A370;
	// lwz r11,16(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 16);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252a370
	if (!ctx.cr0.eq) goto loc_8252A370;
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8252b2c4
	if (ctx.cr6.eq) goto loc_8252B2C4;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// bne cr6,0x8252b2c8
	if (!ctx.cr6.eq) goto loc_8252B2C8;
loc_8252B2C4:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_8252B2C8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252a370
	if (!ctx.cr0.eq) goto loc_8252A370;
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// addi r25,r14,4
	r25.s64 = r14.s64 + 4;
	// rlwinm r27,r11,27,24,31
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// clrlwi r26,r11,27
	r26.u64 = ctx.r11.u32 & 0x1F;
loc_8252B2E0:
	// lwz r28,0(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8252b84c
	if (ctx.cr6.eq) goto loc_8252B84C;
	// lwz r29,16(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8252b838
	if (ctx.cr6.eq) goto loc_8252B838;
	// lwz r30,0(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r30,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252b648
	if (!ctx.cr0.eq) goto loc_8252B648;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82524638
	ctx.lr = 0x8252B30C;
	sub_82524638(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252b838
	if (ctx.cr0.eq) goto loc_8252B838;
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8252b624
	goto loc_8252B624;
loc_8252B324:
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// clrlwi r25,r11,27
	r25.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm. r11,r25,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252a370
	if (!ctx.cr0.eq) goto loc_8252A370;
	// rlwinm. r11,r31,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252b28c
	if (ctx.cr0.eq) goto loc_8252B28C;
	// rlwinm. r11,r10,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252a370
	if (!ctx.cr0.eq) goto loc_8252A370;
	// rlwinm. r11,r25,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x1E;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252a370
	if (!ctx.cr0.eq) goto loc_8252A370;
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252b384
	if (ctx.cr0.eq) goto loc_8252B384;
	// rlwinm. r11,r25,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252b364
	if (ctx.cr0.eq) goto loc_8252B364;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// b 0x8252b36c
	goto loc_8252B36C;
loc_8252B364:
	// not r11,r25
	ctx.r11.u64 = ~r25.u64;
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
loc_8252B36C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252a370
	if (ctx.cr0.eq) goto loc_8252A370;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82528d80
	ctx.lr = 0x8252B37C;
	sub_82528D80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252a370
	if (ctx.cr0.eq) goto loc_8252A370;
loc_8252B384:
	// lwz r31,4(r15)
	r31.u64 = REX_LOAD_U32(r15.u32 + 4);
loc_8252B388:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8252b3e4
	if (ctx.cr6.eq) goto loc_8252B3E4;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252b3b8
	if (ctx.cr6.eq) goto loc_8252B3B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252b3b8
	if (ctx.cr0.eq) goto loc_8252B3B8;
	// cmplw cr6,r31,r16
	ctx.cr6.compare<uint32_t>(r31.u32, r16.u32, ctx.xer);
	// beq cr6,0x8252b3b8
	if (ctx.cr6.eq) goto loc_8252B3B8;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// bne cr6,0x8252b3c0
	if (!ctx.cr6.eq) goto loc_8252B3C0;
loc_8252B3B8:
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x8252b388
	goto loc_8252B388;
loc_8252B3C0:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x825224e8
	ctx.lr = 0x8252B3C8;
	sub_825224E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252a370
	if (ctx.cr0.eq) goto loc_8252A370;
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 8);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// rlwinm r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8252a370
	if (ctx.cr6.gt) goto loc_8252A370;
loc_8252B3E4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825c4930
	ctx.lr = 0x8252B3FC;
	sub_825C4930(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252a370
	if (ctx.cr0.eq) goto loc_8252A370;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8252b580
	if (ctx.cr6.eq) goto loc_8252B580;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825bba68
	ctx.lr = 0x8252B418;
	sub_825BBA68(ctx, base);
	// lwz r30,0(r15)
	r30.u64 = REX_LOAD_U32(r15.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8252B420:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8252b4a0
	if (ctx.cr6.eq) goto loc_8252B4A0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82503da0
	ctx.lr = 0x8252B438;
	sub_82503DA0(ctx, base);
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 8);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// rlwinm r10,r11,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// mr r29,r18
	r29.u64 = r18.u64;
	// addi r11,r15,44
	ctx.r11.s64 = r15.s64 + 44;
loc_8252B44C:
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8252b48c
	if (!ctx.cr6.lt) goto loc_8252B48C;
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(r28.u32, r30.u32, ctx.xer);
	// beq cr6,0x8252b46c
	if (ctx.cr6.eq) goto loc_8252B46C;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8252b44c
	goto loc_8252B44C;
loc_8252B46C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8252B478;
	sub_8250AD28(ctx, base);
	// addi r11,r29,11
	ctx.r11.s64 = r29.s64 + 11;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r3.u32);
	// bne cr6,0x8252b498
	if (!ctx.cr6.eq) goto loc_8252B498;
loc_8252B48C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8252B498;
	sub_8250AD28(ctx, base);
loc_8252B498:
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x8252b420
	goto loc_8252B420;
loc_8252B4A0:
	// rlwinm r11,r15,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,12(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8252b4f0
	goto loc_8252B4F0;
loc_8252B4E8:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8252B4F0:
	// cmplw cr6,r10,r16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r16.u32, ctx.xer);
	// bne cr6,0x8252b4e8
	if (!ctx.cr6.eq) goto loc_8252B4E8;
	// lwz r10,8(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r16)
	REX_STORE_U32(r16.u32 + 8, ctx.r11.u32);
	// stw r16,4(r31)
	REX_STORE_U32(r31.u32 + 4, r16.u32);
	// stw r31,12(r16)
	REX_STORE_U32(r16.u32 + 12, r31.u32);
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8252b528
	goto loc_8252B528;
loc_8252B520:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8252B528:
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// bne cr6,0x8252b520
	if (!ctx.cr6.eq) goto loc_8252B520;
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r11.u32);
	// stw r26,4(r31)
	REX_STORE_U32(r31.u32 + 4, r26.u32);
	// stw r31,12(r26)
	REX_STORE_U32(r26.u32 + 12, r31.u32);
	// bl 0x8250aed8
	ctx.lr = 0x8252B550;
	sub_8250AED8(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x8250aed8
	ctx.lr = 0x8252B558;
	sub_8250AED8(ctx, base);
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252b57c
	if (ctx.cr0.eq) goto loc_8252B57C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// rlwinm r10,r10,0,13,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFE7FFFF;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
loc_8252B57C:
	// mr r15,r31
	r15.u64 = r31.u64;
loc_8252B580:
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// lwz r10,8(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 8);
	// rlwinm r4,r11,7,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwinm r10,r10,18,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8252b5a4
	if (!ctx.cr6.eq) goto loc_8252B5A4;
	// rlwinm r10,r11,0,19,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FE0;
	// cmplwi cr6,r10,7296
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7296, ctx.xer);
	// beq cr6,0x8252b5cc
	if (ctx.cr6.eq) goto loc_8252B5CC;
loc_8252B5A4:
	// rlwinm r5,r11,27,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x825b88e8
	ctx.lr = 0x8252B5B0;
	sub_825B88E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252a370
	if (ctx.cr0.eq) goto loc_8252A370;
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// rlwinm r5,r11,27,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// rlwinm r4,r11,7,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// bl 0x825b89b0
	ctx.lr = 0x8252B5CC;
	sub_825B89B0(ctx, base);
loc_8252B5CC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825c4a48
	ctx.lr = 0x8252B5E4;
	sub_825C4A48(ctx, base);
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 8);
	// addi r7,r14,4
	ctx.r7.s64 = r14.s64 + 4;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,8(r15)
	REX_STORE_U32(r15.u32 + 8, ctx.r11.u32);
loc_8252B5F4:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252c820
	if (ctx.cr6.eq) goto loc_8252C820;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252c80c
	if (ctx.cr6.eq) goto loc_8252C80C;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8252c790
	goto loc_8252C790;
loc_8252B61C:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8252B624:
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, ctx.xer);
	// bne cr6,0x8252b61c
	if (!ctx.cr6.eq) goto loc_8252B61C;
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 4);
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
	// stw r28,4(r15)
	REX_STORE_U32(r15.u32 + 4, r28.u32);
	// stw r15,12(r28)
	REX_STORE_U32(r28.u32 + 12, r15.u32);
	// b 0x8252b838
	goto loc_8252B838;
loc_8252B648:
	// rlwinm. r11,r26,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r31,r30,27
	r31.u64 = r30.u32 & 0x1F;
	// beq 0x8252b664
	if (ctx.cr0.eq) goto loc_8252B664;
	// rlwinm. r11,r31,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252b664
	if (ctx.cr0.eq) goto loc_8252B664;
loc_8252B65C:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// b 0x8252b68c
	goto loc_8252B68C;
loc_8252B664:
	// rlwinm. r11,r26,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252b674
	if (ctx.cr0.eq) goto loc_8252B674;
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252b65c
	if (!ctx.cr0.eq) goto loc_8252B65C;
loc_8252B674:
	// rlwinm. r11,r26,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252b688
	if (ctx.cr0.eq) goto loc_8252B688;
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// bne 0x8252b68c
	if (!ctx.cr0.eq) goto loc_8252B68C;
loc_8252B688:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_8252B68C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252b838
	if (ctx.cr0.eq) goto loc_8252B838;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,112
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 112, ctx.xer);
	// bne cr6,0x8252b6cc
	if (!ctx.cr6.eq) goto loc_8252B6CC;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252b6c0
	if (ctx.cr6.eq) goto loc_8252B6C0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// bne cr6,0x8252b6c4
	if (!ctx.cr6.eq) goto loc_8252B6C4;
loc_8252B6C0:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_8252B6C4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252b838
	if (!ctx.cr0.eq) goto loc_8252B838;
loc_8252B6CC:
	// cmplwi cr6,r10,110
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 110, ctx.xer);
	// beq cr6,0x8252b838
	if (ctx.cr6.eq) goto loc_8252B838;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8252b6e8
	if (ctx.cr6.lt) goto loc_8252B6E8;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// ble cr6,0x8252b6ec
	if (!ctx.cr6.gt) goto loc_8252B6EC;
loc_8252B6E8:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_8252B6EC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252b71c
	if (!ctx.cr0.eq) goto loc_8252B71C;
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8252b710
	if (ctx.cr6.lt) goto loc_8252B710;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// ble cr6,0x8252b714
	if (!ctx.cr6.gt) goto loc_8252B714;
loc_8252B710:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_8252B714:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252b838
	if (ctx.cr0.eq) goto loc_8252B838;
loc_8252B71C:
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825290b8
	ctx.lr = 0x8252B72C;
	sub_825290B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252b838
	if (ctx.cr0.eq) goto loc_8252B838;
	// rlwinm. r9,r26,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// beq 0x8252b750
	if (ctx.cr0.eq) goto loc_8252B750;
	// rlwinm. r9,r31,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8252b750
	if (ctx.cr0.eq) goto loc_8252B750;
	// addi r11,r26,-4
	ctx.r11.s64 = r26.s64 + -4;
loc_8252B750:
	// and r9,r31,r11
	ctx.r9.u64 = r31.u64 & ctx.r11.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8252b764
	if (ctx.cr0.eq) goto loc_8252B764;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r31,-4
	ctx.r10.s64 = r31.s64 + -4;
loc_8252B764:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8252b778
	if (ctx.cr0.eq) goto loc_8252B778;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8252b778
	if (ctx.cr0.eq) goto loc_8252B778;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_8252B778:
	// or r31,r11,r10
	r31.u64 = ctx.r11.u64 | ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82528eb8
	ctx.lr = 0x8252B788;
	sub_82528EB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252b838
	if (ctx.cr0.eq) goto loc_8252B838;
	// rlwinm. r11,r31,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252b838
	if (!ctx.cr0.eq) goto loc_8252B838;
	// rlwinm r11,r30,22,29,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 22) & 0x6;
	// rlwinm r10,r30,24,29,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 24) & 0x6;
	// srw r11,r27,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r11.u8 & 0x3F));
	// srw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwimi r10,r11,2,28,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r11,r30,26,29,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 26) & 0x6;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// srw r11,r27,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r11.u8 & 0x3F));
	// rlwinm r9,r30,28,29,30
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 28) & 0x6;
	// rlwimi r11,r10,2,0,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// srw r6,r27,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwimi r6,r11,2,0,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r6.u64 & 0xFFFFFFFF00000003);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825b83c8
	ctx.lr = 0x8252B7DC;
	sub_825B83C8(ctx, base);
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,112
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 112, ctx.xer);
	// beq cr6,0x8252b7fc
	if (ctx.cr6.eq) goto loc_8252B7FC;
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// bne cr6,0x8252b838
	if (!ctx.cr6.eq) goto loc_8252B838;
	// rlwinm. r11,r10,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252b838
	if (ctx.cr0.eq) goto loc_8252B838;
loc_8252B7FC:
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 8);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252b838
	if (!ctx.cr0.eq) goto loc_8252B838;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8252b820
	if (ctx.cr6.eq) goto loc_8252B820;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// bne cr6,0x8252b824
	if (!ctx.cr6.eq) goto loc_8252B824;
loc_8252B820:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_8252B824:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252b838
	if (!ctx.cr0.eq) goto loc_8252B838;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82549518
	ctx.lr = 0x8252B838;
	sub_82549518(ctx, base);
loc_8252B838:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x8252b2e0
	if (!ctx.cr6.eq) goto loc_8252B2E0;
	// addi r25,r28,8
	r25.s64 = r28.s64 + 8;
	// b 0x8252b2e0
	goto loc_8252B2E0;
loc_8252B84C:
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824f7708
	ctx.lr = 0x8252B854;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252a370
	if (ctx.cr0.eq) goto loc_8252A370;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
loc_8252B860:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x825c2288
	ctx.lr = 0x8252B870;
	sub_825C2288(ctx, base);
	// b 0x8252a370
	goto loc_8252A370;
loc_8252B874:
	// rlwinm. r11,r31,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252a370
	if (!ctx.cr0.eq) goto loc_8252A370;
	// rlwinm. r11,r31,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252a370
	if (!ctx.cr0.eq) goto loc_8252A370;
loc_8252B884:
	// lwz r30,4(r14)
	r30.u64 = REX_LOAD_U32(r14.u32 + 4);
	// mr r29,r18
	r29.u64 = r18.u64;
	// mr r28,r18
	r28.u64 = r18.u64;
loc_8252B890:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8252be8c
	if (ctx.cr6.eq) goto loc_8252BE8C;
	// lwz r31,16(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8252b90c
	if (ctx.cr6.eq) goto loc_8252B90C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252b90c
	if (ctx.cr0.eq) goto loc_8252B90C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bne cr6,0x8252a370
	if (!ctx.cr6.eq) goto loc_8252A370;
	// lwz r7,44(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stb r19,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, r19.u8);
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r30.u32, ctx.xer);
	// bne cr6,0x8252b8d4
	if (!ctx.cr6.eq) goto loc_8252B8D4;
	// lwz r7,48(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 48);
loc_8252B8D4:
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825291a8
	ctx.lr = 0x8252B8EC;
	sub_825291A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252a370
	if (ctx.cr0.eq) goto loc_8252A370;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// rlwinm r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// bne cr6,0x8252b90c
	if (!ctx.cr6.eq) goto loc_8252B90C;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8252B90C:
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// b 0x8252b890
	goto loc_8252B890;
loc_8252B914:
	// rlwinm. r11,r31,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252a370
	if (!ctx.cr0.eq) goto loc_8252A370;
	// rlwinm. r11,r31,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252a370
	if (!ctx.cr0.eq) goto loc_8252A370;
	// mr r23,r18
	r23.u64 = r18.u64;
	// addi r25,r14,44
	r25.s64 = r14.s64 + 44;
	// addi r27,r14,48
	r27.s64 = r14.s64 + 48;
loc_8252B930:
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8252b884
	if (!ctx.cr6.lt) goto loc_8252B884;
	// lwz r22,0(r25)
	r22.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r6,0(r22)
	ctx.r6.u64 = REX_LOAD_U32(r22.u32 + 0);
	// clrlwi. r11,r6,27
	ctx.r11.u64 = ctx.r6.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252be7c
	if (!ctx.cr0.eq) goto loc_8252BE7C;
	// lwz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r26,12(r22)
	r26.u64 = REX_LOAD_U32(r22.u32 + 12);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
loc_8252B960:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252b98c
	if (ctx.cr6.eq) goto loc_8252B98C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252b97c
	if (ctx.cr6.eq) goto loc_8252B97C;
	// cmplw cr6,r10,r14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r14.u32, ctx.xer);
	// bne cr6,0x8252b984
	if (!ctx.cr6.eq) goto loc_8252B984;
loc_8252B97C:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8252b960
	goto loc_8252B960;
loc_8252B984:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// b 0x8252b990
	goto loc_8252B990;
loc_8252B98C:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_8252B990:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252be7c
	if (!ctx.cr0.eq) goto loc_8252BE7C;
	// lwz r7,8(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm. r11,r7,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252be7c
	if (!ctx.cr0.eq) goto loc_8252BE7C;
	// rlwinm r11,r7,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// bne cr6,0x8252bdac
	if (!ctx.cr6.eq) goto loc_8252BDAC;
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// beq cr6,0x8252be7c
	if (ctx.cr6.eq) goto loc_8252BE7C;
	// rlwinm. r8,r6,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// beq 0x8252b9f4
	if (ctx.cr0.eq) goto loc_8252B9F4;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
loc_8252B9D0:
	// rlwinm r5,r6,27,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r5,r5,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r5,r5,30
	ctx.r5.u64 = ctx.r5.u32 & 0x3;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// slw r5,r19,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (r19.u32 << (ctx.r5.u8 & 0x3F));
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8252b9d0
	if (ctx.cr6.lt) goto loc_8252B9D0;
loc_8252B9F4:
	// rlwinm r11,r7,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0xF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252be7c
	if (!ctx.cr6.eq) goto loc_8252BE7C;
	// rlwinm r11,r7,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x7;
	// rlwinm r10,r7,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 13) & 0x7;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8252be7c
	if (!ctx.cr6.eq) goto loc_8252BE7C;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252be7c
	if (!ctx.cr6.eq) goto loc_8252BE7C;
	// lwz r11,4(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 4);
	// addi r24,r14,4
	r24.s64 = r14.s64 + 4;
loc_8252BA20:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252ba58
	if (ctx.cr6.eq) goto loc_8252BA58;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252ba50
	if (ctx.cr6.eq) goto loc_8252BA50;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14080
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14080, ctx.xer);
	// bne cr6,0x8252ba50
	if (!ctx.cr6.eq) goto loc_8252BA50;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8252ba5c
	if (!ctx.cr0.eq) goto loc_8252BA5C;
loc_8252BA50:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8252ba20
	goto loc_8252BA20;
loc_8252BA58:
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
loc_8252BA5C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8252be7c
	if (!ctx.cr6.eq) goto loc_8252BE7C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825c4930
	ctx.lr = 0x8252BA7C;
	sub_825C4930(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252be7c
	if (ctx.cr0.eq) goto loc_8252BE7C;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// mr r29,r18
	r29.u64 = r18.u64;
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252bc28
	if (ctx.cr0.eq) goto loc_8252BC28;
	// mr r28,r18
	r28.u64 = r18.u64;
loc_8252BA98:
	// rlwinm r11,r11,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// srw r11,r11,r28
	ctx.r11.u64 = r28.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r28.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// lwz r31,12(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,2304
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2304, ctx.xer);
	// bne cr6,0x8252bc28
	if (!ctx.cr6.eq) goto loc_8252BC28;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252bc28
	if (!ctx.cr0.eq) goto loc_8252BC28;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x824f8b38
	ctx.lr = 0x8252BAD8;
	sub_824F8B38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252bc28
	if (ctx.cr0.eq) goto loc_8252BC28;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_8252BAE4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252bb08
	if (ctx.cr6.eq) goto loc_8252BB08;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252bb00
	if (ctx.cr6.eq) goto loc_8252BB00;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x8252bc28
	if (!ctx.cr6.eq) goto loc_8252BC28;
loc_8252BB00:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8252bae4
	goto loc_8252BAE4;
loc_8252BB08:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82580638
	ctx.lr = 0x8252BB28;
	sub_82580638(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825324d0
	ctx.lr = 0x8252BB40;
	sub_825324D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252bb74
	if (ctx.cr0.eq) goto loc_8252BB74;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r9,r14
	ctx.r9.u64 = r14.u64;
	// lwz r6,116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r4,124(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8252e010
	ctx.lr = 0x8252BB70;
	sub_8252E010(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8252BB74:
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8252bb90
	goto loc_8252BB90;
loc_8252BB88:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_8252BB90:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8252bb88
	if (!ctx.cr6.eq) goto loc_8252BB88;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x824f7a20
	ctx.lr = 0x8252BBB0;
	sub_824F7A20(ctx, base);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252bc28
	if (ctx.cr0.eq) goto loc_8252BC28;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825c4930
	ctx.lr = 0x8252BBD0;
	sub_825C4930(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252bc28
	if (ctx.cr0.eq) goto loc_8252BC28;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x825bcf88
	ctx.lr = 0x8252BBE8;
	sub_825BCF88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252bc10
	if (!ctx.cr0.eq) goto loc_8252BC10;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x825c3328
	ctx.lr = 0x8252BC08;
	sub_825C3328(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252bc28
	if (ctx.cr0.eq) goto loc_8252BC28;
loc_8252BC10:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// rlwinm r10,r11,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8252ba98
	if (ctx.cr6.lt) goto loc_8252BA98;
loc_8252BC28:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// rlwinm r10,r11,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8252be7c
	if (ctx.cr6.lt) goto loc_8252BE7C;
	// mr r28,r18
	r28.u64 = r18.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252c944
	if (ctx.cr6.eq) goto loc_8252C944;
	// mr r27,r18
	r27.u64 = r18.u64;
loc_8252BC48:
	// rlwinm r11,r11,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// srw r11,r11,r27
	ctx.r11.u64 = r27.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r27.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r26
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// lwz r31,12(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x82580638
	ctx.lr = 0x8252BC84;
	sub_82580638(ctx, base);
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825324d0
	ctx.lr = 0x8252BC9C;
	sub_825324D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252cf28
	if (ctx.cr0.eq) goto loc_8252CF28;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x825bcf88
	ctx.lr = 0x8252BCB4;
	sub_825BCF88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252bcd4
	if (!ctx.cr0.eq) goto loc_8252BCD4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x825c4b00
	ctx.lr = 0x8252BCD4;
	sub_825C4B00(ctx, base);
loc_8252BCD4:
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8252bd04
	if (ctx.cr6.eq) goto loc_8252BD04;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// bl 0x8250b470
	ctx.lr = 0x8252BCF4;
	sub_8250B470(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8252BD00;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
loc_8252BD04:
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8252bd34
	if (ctx.cr6.eq) goto loc_8252BD34;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// bl 0x8250b470
	ctx.lr = 0x8252BD24;
	sub_8250B470(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8252BD30;
	sub_8250AD28(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_8252BD34:
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,128(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x8250b470
	ctx.lr = 0x8252BD48;
	sub_8250B470(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8252BD54;
	sub_8250AD28(ctx, base);
	// stw r3,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// lwz r30,0(r14)
	r30.u64 = REX_LOAD_U32(r14.u32 + 0);
loc_8252BD5C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8252c8e4
	if (ctx.cr6.eq) goto loc_8252C8E4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252bda4
	if (!ctx.cr0.eq) goto loc_8252BDA4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x825bcf88
	ctx.lr = 0x8252BD7C;
	sub_825BCF88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252bd98
	if (!ctx.cr0.eq) goto loc_8252BD98;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825c4b00
	ctx.lr = 0x8252BD98;
	sub_825C4B00(ctx, base);
loc_8252BD98:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8252BDA4;
	sub_8250AD28(ctx, base);
loc_8252BDA4:
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x8252bd5c
	goto loc_8252BD5C;
loc_8252BDAC:
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bne cr6,0x8252be7c
	if (!ctx.cr6.eq) goto loc_8252BE7C;
	// clrlwi. r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252be7c
	if (!ctx.cr0.eq) goto loc_8252BE7C;
	// lwz r3,52(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 52);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x824f8b38
	ctx.lr = 0x8252BDC8;
	sub_824F8B38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252be7c
	if (ctx.cr0.eq) goto loc_8252BE7C;
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// rlwinm r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// bne cr6,0x8252be7c
	if (!ctx.cr6.eq) goto loc_8252BE7C;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// rlwinm r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8252be7c
	if (!ctx.cr6.eq) goto loc_8252BE7C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// beq cr6,0x8252be7c
	if (ctx.cr6.eq) goto loc_8252BE7C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825c4930
	ctx.lr = 0x8252BE1C;
	sub_825C4930(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252be7c
	if (ctx.cr0.eq) goto loc_8252BE7C;
	// lwz r11,44(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 44);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,48(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 48);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x825324d0
	ctx.lr = 0x8252BE48;
	sub_825324D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252be7c
	if (ctx.cr0.eq) goto loc_8252BE7C;
	// addi r10,r1,172
	ctx.r10.s64 = ctx.r1.s64 + 172;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r9,r14
	ctx.r9.u64 = r14.u64;
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8252e010
	ctx.lr = 0x8252BE74;
	sub_8252E010(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252cad8
	if (!ctx.cr0.eq) goto loc_8252CAD8;
loc_8252BE7C:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// addi r27,r27,-4
	r27.s64 = r27.s64 + -4;
	// b 0x8252b930
	goto loc_8252B930;
loc_8252BE8C:
	// clrlwi r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	// rlwinm r10,r29,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8252a370
	if (!ctx.cr6.lt) goto loc_8252A370;
	// lwz r6,4(r14)
	ctx.r6.u64 = REX_LOAD_U32(r14.u32 + 4);
loc_8252BEB0:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8252a370
	if (ctx.cr6.eq) goto loc_8252A370;
	// lwz r29,16(r6)
	r29.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8252bed0
	if (ctx.cr6.eq) goto loc_8252BED0;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252cc80
	if (!ctx.cr0.eq) goto loc_8252CC80;
loc_8252BED0:
	// lwz r6,8(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// b 0x8252beb0
	goto loc_8252BEB0;
loc_8252BED8:
	// lwz r10,28(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 28);
	// addi r11,r20,24
	ctx.r11.s64 = r20.s64 + 24;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplw cr6,r14,r10
	ctx.cr6.compare<uint32_t>(r14.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8252a39c
	if (ctx.cr6.eq) goto loc_8252A39C;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8252a3a8
	goto loc_8252A3A8;
loc_8252BF00:
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825c2510
	ctx.lr = 0x8252BF0C;
	sub_825C2510(ctx, base);
	// b 0x8252a0b4
	goto loc_8252A0B4;
loc_8252BF10:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825c2288
	ctx.lr = 0x8252BF24;
	sub_825C2288(ctx, base);
	// stb r19,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, r19.u8);
	// b 0x8252a0b4
	goto loc_8252A0B4;
loc_8252BF2C:
	// addi r9,r7,8
	ctx.r9.s64 = ctx.r7.s64 + 8;
	// lwz r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
loc_8252BF34:
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252bf2c
	if (!ctx.cr6.eq) goto loc_8252BF2C;
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwimi r9,r10,0,0,26
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r9.u64 & 0xFFFFFFFF0000001F);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r9,r9,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// rlwinm r8,r10,22,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// rlwinm r7,r10,24,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// srw r8,r9,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// srw r7,r9,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r7,r8,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r8,r10,26,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// rlwinm r5,r10,28,29,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// srw r8,r9,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srw r9,r9,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// rlwimi r8,r7,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwimi r9,r8,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// rlwimi r11,r6,10,18,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// stw r11,8(r14)
	REX_STORE_U32(r14.u32 + 8, ctx.r11.u32);
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8252BFC4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8252bfec
	if (ctx.cr6.eq) goto loc_8252BFEC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252bfe4
	if (!ctx.cr0.eq) goto loc_8252BFE4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8252BFE4;
	sub_8250AD28(ctx, base);
loc_8252BFE4:
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x8252bfc4
	goto loc_8252BFC4;
loc_8252BFEC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7708
	ctx.lr = 0x8252BFF4;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252a0b4
	if (ctx.cr0.eq) goto loc_8252A0B4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// b 0x8252c2d8
	goto loc_8252C2D8;
loc_8252C004:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825c4a48
	ctx.lr = 0x8252C01C;
	sub_825C4A48(ctx, base);
	// lwz r6,160(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r11,r26,27,29,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 27) & 0x6;
	// lwz r7,164(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// rlwinm r10,r26,29,29,30
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 29) & 0x6;
	// lwz r8,168(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// rlwinm r9,r26,31,29,30
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 31) & 0x6;
	// rlwinm r30,r26,1,29,30
	r30.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0x6;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r27,0(r6)
	r27.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r23,r27,27,24,31
	r23.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 27) & 0xFF;
	// rlwinm r27,r27,0,27,18
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// srw r22,r23,r11
	r22.u64 = ctx.r11.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r11.u8 & 0x3F));
	// srw r17,r23,r10
	r17.u64 = ctx.r10.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwimi r17,r22,2,28,29
	r17.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xC) | (r17.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw r22,r23,r9
	r22.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r17,r17,28
	r17.u64 = r17.u32 & 0xF;
	// srw r23,r23,r30
	r23.u64 = r30.u8 & 0x20 ? 0 : (r23.u32 >> (r30.u8 & 0x3F));
	// rlwimi r22,r17,2,0,29
	r22.u64 = (__builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 2) & 0xFFFFFFFC) | (r22.u64 & 0xFFFFFFFF00000003);
	// rlwimi r23,r22,2,0,29
	r23.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC) | (r23.u64 & 0xFFFFFFFF00000003);
	// rlwinm r23,r23,5,0,26
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 5) & 0xFFFFFFE0;
	// or r27,r23,r27
	r27.u64 = r23.u64 | r27.u64;
	// stw r27,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r27.u32);
	// lwz r27,0(r7)
	r27.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r23,r27,27,24,31
	r23.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 27) & 0xFF;
	// srw r11,r23,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r11.u8 & 0x3F));
	// srw r10,r23,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwimi r10,r11,2,28,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw r11,r23,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// srw r9,r23,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (r23.u32 >> (r30.u8 & 0x3F));
	// rlwimi r11,r10,2,0,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// rlwinm r27,r27,0,27,18
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwimi r9,r11,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | r27.u64;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// bl 0x825299e8
	ctx.lr = 0x8252C0B8;
	sub_825299E8(ctx, base);
	// lwz r30,0(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8252C0C0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8252c0e8
	if (ctx.cr6.eq) goto loc_8252C0E8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252c0e0
	if (!ctx.cr0.eq) goto loc_8252C0E0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8252C0E0;
	sub_8250AD28(ctx, base);
loc_8252C0E0:
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x8252c0c0
	goto loc_8252C0C0;
loc_8252C0E8:
	// lwz r30,0(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 0);
loc_8252C0EC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8252c114
	if (ctx.cr6.eq) goto loc_8252C114;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252c10c
	if (!ctx.cr0.eq) goto loc_8252C10C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8252C10C;
	sub_8250AD28(ctx, base);
loc_8252C10C:
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x8252c0ec
	goto loc_8252C0EC;
loc_8252C114:
	// addi r8,r24,4
	ctx.r8.s64 = r24.s64 + 4;
loc_8252C118:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252c1d0
	if (ctx.cr6.eq) goto loc_8252C1D0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252c1bc
	if (ctx.cr6.eq) goto loc_8252C1BC;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8252c148
	goto loc_8252C148;
loc_8252C140:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8252C148:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252c140
	if (!ctx.cr6.eq) goto loc_8252C140;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r14)
	REX_STORE_U32(r14.u32 + 4, ctx.r11.u32);
	// stw r14,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r14.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8252c1bc
	if (ctx.cr0.eq) goto loc_8252C1BC;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r7,r10,22,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// rlwinm r6,r10,24,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// rlwinm r9,r9,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// rlwinm r5,r10,26,29,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// srw r7,r9,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// srw r6,r9,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwimi r6,r7,2,28,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xC) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw r7,r9,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// rlwinm r5,r10,28,29,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// clrlwi r6,r6,28
	ctx.r6.u64 = ctx.r6.u32 & 0xF;
	// srw r9,r9,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// rlwimi r7,r6,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwimi r9,r7,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8252C1BC:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252c118
	if (!ctx.cr6.eq) goto loc_8252C118;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x8252c118
	goto loc_8252C118;
loc_8252C1D0:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252c21c
	if (ctx.cr0.eq) goto loc_8252C21C;
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// rlwinm r8,r8,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7;
loc_8252C1F0:
	// srw r7,r26,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (r26.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwinm r7,r7,1,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x6;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// slw r6,r6,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// slw r7,r11,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r7.u8 & 0x3F));
	// andc r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r6.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8252c1f0
	if (ctx.cr6.lt) goto loc_8252C1F0;
loc_8252C21C:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8252c234
	goto loc_8252C234;
loc_8252C22C:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8252C234:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bne cr6,0x8252c22c
	if (!ctx.cr6.eq) goto loc_8252C22C;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// stw r29,4(r27)
	REX_STORE_U32(r27.u32 + 4, r29.u32);
	// stw r27,12(r29)
	REX_STORE_U32(r29.u32 + 12, r27.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwimi r11,r9,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// bl 0x8250aed8
	ctx.lr = 0x8252C26C;
	sub_8250AED8(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r27)
	REX_STORE_U32(r27.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// bne 0x8252c2a0
	if (!ctx.cr0.eq) goto loc_8252C2A0;
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252c2c0
	if (ctx.cr0.eq) goto loc_8252C2C0;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82548f78
	ctx.lr = 0x8252C29C;
	sub_82548F78(ctx, base);
	// b 0x8252c2c0
	goto loc_8252C2C0;
loc_8252C2A0:
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252c2c0
	if (!ctx.cr0.eq) goto loc_8252C2C0;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82509448
	ctx.lr = 0x8252C2B0;
	sub_82509448(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8252c2c0
	if (ctx.cr0.eq) goto loc_8252C2C0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82549518
	ctx.lr = 0x8252C2C0;
	sub_82549518(ctx, base);
loc_8252C2C0:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825c2288
	ctx.lr = 0x8252C2D4;
	sub_825C2288(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_8252C2D8:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825c2288
	ctx.lr = 0x8252C2E8;
	sub_825C2288(ctx, base);
	// b 0x8252a0b4
	goto loc_8252A0B4;
loc_8252C2EC:
	// lwz r30,4(r14)
	r30.u64 = REX_LOAD_U32(r14.u32 + 4);
loc_8252C2F0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8252c324
	if (ctx.cr6.eq) goto loc_8252C324;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252c31c
	if (ctx.cr6.eq) goto loc_8252C31C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252c31c
	if (!ctx.cr0.eq) goto loc_8252C31C;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8250adf0
	ctx.lr = 0x8252C31C;
	sub_8250ADF0(ctx, base);
loc_8252C31C:
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// b 0x8252c2f0
	goto loc_8252C2F0;
loc_8252C324:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8252C330;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r11,r28,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x8252C348;
	sub_8250A620(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r11,57
	ctx.r11.s64 = 57;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// rlwimi r10,r11,7,19,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1FE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r3,16(r19)
	ctx.r3.u64 = REX_LOAD_U32(r19.u32 + 16);
	// bl 0x8250ad28
	ctx.lr = 0x8252C364;
	sub_8250AD28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250aed8
	ctx.lr = 0x8252C36C;
	sub_8250AED8(ctx, base);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// rlwinm r8,r8,0,13,10
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFE7FFFF;
	// lis r9,16384
	ctx.r9.s64 = 1073741824;
	// stw r8,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// rlwimi r11,r20,0,0,27
	ctx.r11.u64 = (__builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// rlwimi r9,r11,13,7,18
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1FFE000) | (ctx.r9.u64 & 0xFFFFFFFFFE001FFF);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwimi r11,r10,5,26,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x20) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFDF);
	// rlwimi r11,r10,5,8,8
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x800000) | (ctx.r11.u64 & 0xFFFFFFFFFF7FFFFF);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,19,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFE001FFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// clrlwi. r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8252c3d8
	if (ctx.cr0.eq) goto loc_8252C3D8;
	// lwz r30,48(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x8250a620
	ctx.lr = 0x8252C3C8;
	sub_8250A620(ctx, base);
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x8250a620
	ctx.lr = 0x8252C3D8;
	sub_8250A620(ctx, base);
loc_8252C3D8:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x8252b060
	if (!ctx.cr0.eq) goto loc_8252B060;
loc_8252C3E8:
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r11,8(r14)
	REX_STORE_U32(r14.u32 + 8, ctx.r11.u32);
	// lwz r3,16(r19)
	ctx.r3.u64 = REX_LOAD_U32(r19.u32 + 16);
	// bl 0x8250b470
	ctx.lr = 0x8252C404;
	sub_8250B470(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825c2288
	ctx.lr = 0x8252C418;
	sub_825C2288(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825c2288
	ctx.lr = 0x8252C42C;
	sub_825C2288(ctx, base);
	// lwz r21,484(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// lwz r20,100(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r19,1
	r19.s64 = 1;
	// li r18,0
	r18.s64 = 0;
	// b 0x8252a0b4
	goto loc_8252A0B4;
loc_8252C440:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// addi r5,r20,16
	ctx.r5.s64 = r20.s64 + 16;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825bb860
	ctx.lr = 0x8252C45C;
	sub_825BB860(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fcmpu cr6,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f28.f64);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bne cr6,0x8252c4b8
	if (!ctx.cr6.eq) goto loc_8252C4B8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8252C474;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,6
	ctx.r4.s64 = 6;
	// rlwimi r11,r31,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x8252C48C;
	sub_8250A620(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r7,r16
	ctx.r7.u64 = r16.u64;
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x82529848
	ctx.lr = 0x8252C4B0;
	sub_82529848(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8252c59c
	goto loc_8252C59C;
loc_8252C4B8:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// bl 0x824f71b8
	ctx.lr = 0x8252C4CC;
	sub_824F71B8(ctx, base);
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f4,f29
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f29.f64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x825c1a18
	ctx.lr = 0x8252C4FC;
	sub_825C1A18(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8252C50C;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r31,r31,25,4,6
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 25) & 0xE000000;
	// rlwinm r11,r11,0,7,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | r31.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x8252C52C;
	sub_8250A620(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// bl 0x8250ab60
	ctx.lr = 0x8252C544;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// rlwinm r11,r11,0,7,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | r31.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x8252C560;
	sub_8250A620(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// bl 0x82529918
	ctx.lr = 0x8252C584;
	sub_82529918(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82528fd8
	ctx.lr = 0x8252C590;
	sub_82528FD8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_8252C59C:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r7,r14,4
	ctx.r7.s64 = r14.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,19,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFE001FFF;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8252C5C0:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252c684
	if (ctx.cr6.eq) goto loc_8252C684;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252c670
	if (ctx.cr6.eq) goto loc_8252C670;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8252c5f0
	goto loc_8252C5F0;
loc_8252C5E8:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8252C5F0:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252c5e8
	if (!ctx.cr6.eq) goto loc_8252C5E8;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f30.f64);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r31.u32);
	// bne cr6,0x8252c670
	if (!ctx.cr6.eq) goto loc_8252C670;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r8,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252c670
	if (ctx.cr0.eq) goto loc_8252C670;
	// rlwinm r10,r8,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// li r9,4
	ctx.r9.s64 = 4;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r8,27
	ctx.r10.u64 = ctx.r8.u32 & 0x1F;
	// subfe r6,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 & ctx.r9.u64;
	// and r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 & ctx.r9.u64;
	// rlwinm. r6,r6,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8252c650
	if (ctx.cr0.eq) goto loc_8252C650;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8252C650:
	// clrlwi. r6,r9,31
	ctx.r6.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8252c664
	if (ctx.cr0.eq) goto loc_8252C664;
	// rlwinm. r6,r10,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8252c664
	if (ctx.cr0.eq) goto loc_8252C664;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_8252C664:
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwimi r10,r8,0,0,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r10.u64 & 0xFFFFFFFF0000001F);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8252C670:
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252c5c0
	if (!ctx.cr6.eq) goto loc_8252C5C0;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// b 0x8252c5c0
	goto loc_8252C5C0;
loc_8252C684:
	// lwz r30,0(r14)
	r30.u64 = REX_LOAD_U32(r14.u32 + 0);
loc_8252C688:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8252c6b0
	if (ctx.cr6.eq) goto loc_8252C6B0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252c6a8
	if (!ctx.cr0.eq) goto loc_8252C6A8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8252C6A8;
	sub_8250AD28(ctx, base);
loc_8252C6A8:
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x8252c688
	goto loc_8252C688;
loc_8252C6B0:
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252c6d4
	if (ctx.cr0.eq) goto loc_8252C6D4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r11,8(r14)
	REX_STORE_U32(r14.u32 + 8, ctx.r11.u32);
loc_8252C6D4:
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// rlwinm. r11,r11,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252c71c
	if (ctx.cr0.eq) goto loc_8252C71C;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r20,92
	ctx.r11.s64 = r20.s64 + 92;
	// oris r9,r9,512
	ctx.r9.u64 = ctx.r9.u64 | 33554432;
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r10,8(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 8);
	// rlwinm r10,r10,0,7,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r10,8(r14)
	REX_STORE_U32(r14.u32 + 8, ctx.r10.u32);
loc_8252C704:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r14.u32, ctx.xer);
	// bne cr6,0x8252c714
	if (!ctx.cr6.eq) goto loc_8252C714;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
loc_8252C714:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8252c704
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252C704;
loc_8252C71C:
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252c734
	if (ctx.cr0.eq) goto loc_8252C734;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8252C734:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14464
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14464, ctx.xer);
	// beq cr6,0x8252c758
	if (ctx.cr6.eq) goto loc_8252C758;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250aed8
	ctx.lr = 0x8252C74C;
	sub_8250AED8(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
loc_8252C758:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250aed8
	ctx.lr = 0x8252C760;
	sub_8250AED8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252cc78
	if (ctx.cr0.eq) goto loc_8252CC78;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82548f78
	ctx.lr = 0x8252C784;
	sub_82548F78(ctx, base);
	// b 0x8252cc78
	goto loc_8252CC78;
loc_8252C788:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8252C790:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252c788
	if (!ctx.cr6.eq) goto loc_8252C788;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r15)
	REX_STORE_U32(r15.u32 + 4, ctx.r11.u32);
	// stw r15,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r15.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r8,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252c80c
	if (ctx.cr0.eq) goto loc_8252C80C;
	// rlwinm. r6,r25,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// clrlwi r10,r8,27
	ctx.r10.u64 = ctx.r8.u32 & 0x1F;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// beq 0x8252c7d8
	if (ctx.cr0.eq) goto loc_8252C7D8;
	// rlwinm. r6,r10,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8252c7d8
	if (ctx.cr0.eq) goto loc_8252C7D8;
	// addi r9,r25,-4
	ctx.r9.s64 = r25.s64 + -4;
loc_8252C7D8:
	// and r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 & ctx.r10.u64;
	// rlwinm. r6,r6,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8252c7ec
	if (ctx.cr0.eq) goto loc_8252C7EC;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8252C7EC:
	// clrlwi. r6,r9,31
	ctx.r6.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8252c800
	if (ctx.cr0.eq) goto loc_8252C800;
	// rlwinm. r6,r10,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8252c800
	if (ctx.cr0.eq) goto loc_8252C800;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_8252C800:
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwimi r10,r8,0,0,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r10.u64 & 0xFFFFFFFF0000001F);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8252C80C:
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252b5f4
	if (!ctx.cr6.eq) goto loc_8252B5F4;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// b 0x8252b5f4
	goto loc_8252B5F4;
loc_8252C820:
	// lwz r31,0(r14)
	r31.u64 = REX_LOAD_U32(r14.u32 + 0);
loc_8252C824:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8252c84c
	if (ctx.cr6.eq) goto loc_8252C84C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252c844
	if (!ctx.cr0.eq) goto loc_8252C844;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8252C844;
	sub_8250AD28(ctx, base);
loc_8252C844:
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x8252c824
	goto loc_8252C824;
loc_8252C84C:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x8250aed8
	ctx.lr = 0x8252C854;
	sub_8250AED8(ctx, base);
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252c86c
	if (ctx.cr0.eq) goto loc_8252C86C;
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r15)
	REX_STORE_U32(r15.u32 + 8, ctx.r11.u32);
loc_8252C86C:
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// rlwinm. r11,r11,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252c8b4
	if (ctx.cr0.eq) goto loc_8252C8B4;
	// lwz r9,8(r15)
	ctx.r9.u64 = REX_LOAD_U32(r15.u32 + 8);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r20,92
	ctx.r11.s64 = r20.s64 + 92;
	// oris r9,r9,512
	ctx.r9.u64 = ctx.r9.u64 | 33554432;
	// stw r9,8(r15)
	REX_STORE_U32(r15.u32 + 8, ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r10,8(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 8);
	// rlwinm r10,r10,0,7,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r10,8(r14)
	REX_STORE_U32(r14.u32 + 8, ctx.r10.u32);
loc_8252C89C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r14.u32, ctx.xer);
	// bne cr6,0x8252c8ac
	if (!ctx.cr6.eq) goto loc_8252C8AC;
	// stw r15,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r15.u32);
loc_8252C8AC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8252c89c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252C89C;
loc_8252C8B4:
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r11,8(r14)
	REX_STORE_U32(r14.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 8);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252cc78
	if (ctx.cr0.eq) goto loc_8252CC78;
	// lwz r10,16(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 16);
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// rlwinm r10,r10,0,13,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFE7FFFF;
	// stw r11,8(r15)
	REX_STORE_U32(r15.u32 + 8, ctx.r11.u32);
	// stw r10,16(r15)
	REX_STORE_U32(r15.u32 + 16, ctx.r10.u32);
	// b 0x8252cc78
	goto loc_8252CC78;
loc_8252C8E4:
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252c908
	if (ctx.cr0.eq) goto loc_8252C908;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_8252C908:
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252c92c
	if (ctx.cr0.eq) goto loc_8252C92C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252c92c
	if (!ctx.cr0.eq) goto loc_8252C92C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82549518
	ctx.lr = 0x8252C92C;
	sub_82549518(ctx, base);
loc_8252C92C:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
	// rlwinm r10,r11,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8252bc48
	if (ctx.cr6.lt) goto loc_8252BC48;
loc_8252C944:
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
loc_8252C948:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252caac
	if (ctx.cr6.eq) goto loc_8252CAAC;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252ca98
	if (ctx.cr6.eq) goto loc_8252CA98;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,7,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8252ca98
	if (ctx.cr0.eq) goto loc_8252CA98;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8252c9f4
	if (!ctx.cr0.eq) goto loc_8252C9F4;
	// lwz r8,0(r22)
	ctx.r8.u64 = REX_LOAD_U32(r22.u32 + 0);
	// rlwinm r10,r10,28,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r8,r8,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// srw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// addi r8,r10,11
	ctx.r8.s64 = ctx.r10.s64 + 11;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r26
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + r26.u32);
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// b 0x8252c9b0
	goto loc_8252C9B0;
loc_8252C9A8:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8252C9B0:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252c9a8
	if (!ctx.cr6.eq) goto loc_8252C9A8;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8252ca98
	if (ctx.cr0.eq) goto loc_8252CA98;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8252ca98
	goto loc_8252CA98;
loc_8252C9F4:
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8252ca0c
	goto loc_8252CA0C;
loc_8252CA04:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8252CA0C:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252ca04
	if (!ctx.cr6.eq) goto loc_8252CA04;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r11.u32);
	// stw r26,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r26.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 0);
	// rlwinm r10,r10,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// rlwinm r6,r10,27,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x6;
	// rlwinm r5,r10,29,29,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x6;
	// srw r6,r9,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// srw r5,r9,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// rlwimi r5,r6,2,28,29
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xC) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r6,r10,31,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x6;
	// rlwinm r10,r10,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x6;
	// srw r6,r9,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r5,r5,28
	ctx.r5.u64 = ctx.r5.u32 & 0xF;
	// srw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwimi r6,r5,2,0,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r6.u64 & 0xFFFFFFFF00000003);
	// rlwinm r9,r8,0,27,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwimi r10,r6,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,8(r14)
	ctx.r9.u64 = REX_LOAD_U32(r14.u32 + 8);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8252ca98
	if (ctx.cr0.eq) goto loc_8252CA98;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// rlwimi r9,r10,0,0,26
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r9.u64 & 0xFFFFFFFF0000001F);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8252CA98:
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252c948
	if (!ctx.cr6.eq) goto loc_8252C948;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// b 0x8252c948
	goto loc_8252C948;
loc_8252CAAC:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825c2288
	ctx.lr = 0x8252CAC0;
	sub_825C2288(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824f7708
	ctx.lr = 0x8252CAC8;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252a0b4
	if (ctx.cr0.eq) goto loc_8252A0B4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// b 0x8252c2d8
	goto loc_8252C2D8;
loc_8252CAD8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825c4a48
	ctx.lr = 0x8252CAF0;
	sub_825C4A48(ctx, base);
	// lwz r11,44(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 44);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8252cb28
	if (ctx.cr6.eq) goto loc_8252CB28;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r5,12(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x8252CB10;
	sub_82503DA0(ctx, base);
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8250c958
	ctx.lr = 0x8252CB28;
	sub_8250C958(ctx, base);
loc_8252CB28:
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 48);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8252cb48
	if (ctx.cr6.eq) goto loc_8252CB48;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8250c958
	ctx.lr = 0x8252CB48;
	sub_8250C958(ctx, base);
loc_8252CB48:
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8250c958
	ctx.lr = 0x8252CB5C;
	sub_8250C958(ctx, base);
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
loc_8252CB60:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252cbc0
	if (ctx.cr6.eq) goto loc_8252CBC0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252cbac
	if (!ctx.cr0.eq) goto loc_8252CBAC;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8252cb8c
	goto loc_8252CB8C;
loc_8252CB84:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_8252CB8C:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252cb84
	if (!ctx.cr6.eq) goto loc_8252CB84;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// stw r26,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r26.u32);
loc_8252CBAC:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252cb60
	if (!ctx.cr6.eq) goto loc_8252CB60;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// b 0x8252cb60
	goto loc_8252CB60;
loc_8252CBC0:
	// addi r8,r14,4
	ctx.r8.s64 = r14.s64 + 4;
loc_8252CBC4:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252cc3c
	if (ctx.cr6.eq) goto loc_8252CC3C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252cc28
	if (ctx.cr6.eq) goto loc_8252CC28;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8252cbf4
	goto loc_8252CBF4;
loc_8252CBEC:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8252CBF4:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252cbec
	if (!ctx.cr6.eq) goto loc_8252CBEC;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r11.u32);
	// stw r26,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r26.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8252cc28
	if (ctx.cr0.eq) goto loc_8252CC28;
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8252CC28:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252cbc4
	if (!ctx.cr6.eq) goto loc_8252CBC4;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x8252cbc4
	goto loc_8252CBC4;
loc_8252CC3C:
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252cc54
	if (ctx.cr0.eq) goto loc_8252CC54;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r11.u32);
loc_8252CC54:
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252cc78
	if (ctx.cr0.eq) goto loc_8252CC78;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252cc78
	if (!ctx.cr0.eq) goto loc_8252CC78;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82549518
	ctx.lr = 0x8252CC78;
	sub_82549518(ctx, base);
loc_8252CC78:
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// b 0x8252c2d8
	goto loc_8252C2D8;
loc_8252CC80:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bne cr6,0x8252cf34
	if (!ctx.cr6.eq) goto loc_8252CF34;
	// lwz r7,44(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 44);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8252cca0
	if (!ctx.cr6.eq) goto loc_8252CCA0;
	// lwz r7,48(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 48);
loc_8252CCA0:
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825291a8
	ctx.lr = 0x8252CCB4;
	sub_825291A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// beq 0x8252cf40
	if (ctx.cr0.eq) goto loc_8252CF40;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// bl 0x825c4a48
	ctx.lr = 0x8252CCD4;
	sub_825C4A48(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,152(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r7,148(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r6,144(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825299e8
	ctx.lr = 0x8252CCF0;
	sub_825299E8(ctx, base);
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8252CCF8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8252cd20
	if (ctx.cr6.eq) goto loc_8252CD20;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252cd18
	if (!ctx.cr0.eq) goto loc_8252CD18;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8252CD18;
	sub_8250AD28(ctx, base);
loc_8252CD18:
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x8252ccf8
	goto loc_8252CCF8;
loc_8252CD20:
	// lwz r31,0(r14)
	r31.u64 = REX_LOAD_U32(r14.u32 + 0);
loc_8252CD24:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8252cd4c
	if (ctx.cr6.eq) goto loc_8252CD4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252cd44
	if (!ctx.cr0.eq) goto loc_8252CD44;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8252CD44;
	sub_8250AD28(ctx, base);
loc_8252CD44:
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x8252cd24
	goto loc_8252CD24;
loc_8252CD4C:
	// addi r8,r29,4
	ctx.r8.s64 = r29.s64 + 4;
loc_8252CD50:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252cdb4
	if (ctx.cr6.eq) goto loc_8252CDB4;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252cda0
	if (ctx.cr6.eq) goto loc_8252CDA0;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8252cd80
	goto loc_8252CD80;
loc_8252CD78:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8252CD80:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252cd78
	if (!ctx.cr6.eq) goto loc_8252CD78;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r30.u32);
loc_8252CDA0:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252cd50
	if (!ctx.cr6.eq) goto loc_8252CD50;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x8252cd50
	goto loc_8252CD50;
loc_8252CDB4:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252cdcc
	if (ctx.cr0.eq) goto loc_8252CDCC;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_8252CDCC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250aed8
	ctx.lr = 0x8252CDD4;
	sub_8250AED8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252cdf8
	if (ctx.cr0.eq) goto loc_8252CDF8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82549518
	ctx.lr = 0x8252CDF8;
	sub_82549518(ctx, base);
loc_8252CDF8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x8252c2d8
	goto loc_8252C2D8;
loc_8252CE00:
	// beq 0x8252ce50
	if (ctx.cr0.eq) goto loc_8252CE50;
	// addi r30,r20,16
	r30.s64 = r20.s64 + 16;
loc_8252CE08:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_8252CE0C:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r10,r11
	r31.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8252ce50
	if (ctx.cr6.eq) goto loc_8252CE50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7708
	ctx.lr = 0x8252CE2C;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252ce40
	if (!ctx.cr0.eq) goto loc_8252CE40;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x8252ce0c
	goto loc_8252CE0C;
loc_8252CE40:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825c2510
	ctx.lr = 0x8252CE4C;
	sub_825C2510(ctx, base);
	// b 0x8252ce08
	goto loc_8252CE08;
loc_8252CE50:
	// rlwinm r11,r20,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252ce70
	if (!ctx.cr0.eq) goto loc_8252CE70;
	// mr r20,r11
	r20.u64 = ctx.r11.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252a0b4
	if (!ctx.cr6.eq) goto loc_8252A0B4;
loc_8252CE70:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
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
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
loc_8252CE88:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r24,r10,r11
	r24.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8252d92c
	if (ctx.cr6.eq) goto loc_8252D92C;
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15872
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15872, ctx.xer);
	// bne cr6,0x8252d920
	if (!ctx.cr6.eq) goto loc_8252D920;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8250aa68
	ctx.lr = 0x8252CEBC;
	sub_8250AA68(ctx, base);
	// lwz r11,12(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 12);
	// mulli r10,r3,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(40));
	// add r23,r10,r11
	r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// rlwinm. r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252cee4
	if (ctx.cr0.eq) goto loc_8252CEE4;
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 4);
	// rlwinm. r10,r10,0,25,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x70;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252d920
	if (!ctx.cr0.eq) goto loc_8252D920;
loc_8252CEE4:
	// lwz r10,36(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8252d920
	if (!ctx.cr6.eq) goto loc_8252D920;
	// rlwinm r10,r11,29,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3FFF;
	// mr r28,r18
	r28.u64 = r18.u64;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_8252CEFC:
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8252cf48
	if (!ctx.cr6.lt) goto loc_8252CF48;
	// lwz r9,28(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 28);
	// lis r8,4
	ctx.r8.s64 = 262144;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r9,r9,0,12,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC0000;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8252d294
	if (!ctx.cr6.eq) goto loc_8252D294;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x8252cefc
	goto loc_8252CEFC;
loc_8252CF28:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824e4368
	ctx.lr = 0x8252CF34;
	sub_824E4368(ctx, base);
loc_8252CF34:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824e4368
	ctx.lr = 0x8252CF40;
	sub_824E4368(ctx, base);
loc_8252CF40:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x824e4368
	ctx.lr = 0x8252CF48;
	sub_824E4368(ctx, base);
loc_8252CF48:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// rlwinm r11,r11,29,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3FFF;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252d920
	if (!ctx.cr6.eq) goto loc_8252D920;
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
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
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
loc_8252CF70:
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
	// beq cr6,0x8252d4e0
	if (ctx.cr6.eq) goto loc_8252D4E0;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15872
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15872, ctx.xer);
	// bne cr6,0x8252d300
	if (!ctx.cr6.eq) goto loc_8252D300;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250aa68
	ctx.lr = 0x8252CFA4;
	sub_8250AA68(ctx, base);
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8252d300
	if (!ctx.cr6.eq) goto loc_8252D300;
	// lwz r27,4(r28)
	r27.u64 = REX_LOAD_U32(r28.u32 + 4);
loc_8252CFB0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8252d300
	if (ctx.cr6.eq) goto loc_8252D300;
	// lwz r29,16(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8252d2f8
	if (ctx.cr6.eq) goto loc_8252D2F8;
	// lwz r30,8(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r30,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,59
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 59, ctx.xer);
	// beq cr6,0x8252cffc
	if (ctx.cr6.eq) goto loc_8252CFFC;
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// beq cr6,0x8252cffc
	if (ctx.cr6.eq) goto loc_8252CFFC;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// beq cr6,0x8252cffc
	if (ctx.cr6.eq) goto loc_8252CFFC;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// beq cr6,0x8252cffc
	if (ctx.cr6.eq) goto loc_8252CFFC;
	// cmplwi cr6,r11,117
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 117, ctx.xer);
	// beq cr6,0x8252cffc
	if (ctx.cr6.eq) goto loc_8252CFFC;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// bne cr6,0x8252d294
	if (!ctx.cr6.eq) goto loc_8252D294;
loc_8252CFFC:
	// lwz r31,28(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 28);
	// lbz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 76);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252d294
	if (!ctx.cr0.eq) goto loc_8252D294;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f6e38
	ctx.lr = 0x8252D014;
	sub_824F6E38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252d024
	if (ctx.cr0.eq) goto loc_8252D024;
	// rlwinm. r11,r30,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252d294
	if (!ctx.cr0.eq) goto loc_8252D294;
loc_8252D024:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252d204
	if (ctx.cr0.eq) goto loc_8252D204;
	// lwz r11,44(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 44);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252d294
	if (!ctx.cr0.eq) goto loc_8252D294;
	// lwz r11,92(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 92);
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r10,-25880
	ctx.r5.s64 = ctx.r10.s64 + -25880;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82528f28
	ctx.lr = 0x8252D058;
	sub_82528F28(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// not r11,r10
	ctx.r11.u64 = ~ctx.r10.u64;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// clrlwi r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	// bne 0x8252d078
	if (!ctx.cr0.eq) goto loc_8252D078;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
loc_8252D078:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// slw r11,r19,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r19.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwx r11,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252d19c
	if (!ctx.cr0.eq) goto loc_8252D19C;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8252d19c
	if (ctx.cr0.eq) goto loc_8252D19C;
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8252D0B0:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252d17c
	if (ctx.cr0.eq) goto loc_8252D17C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f70d8
	ctx.lr = 0x8252D0C4;
	sub_824F70D8(ctx, base);
	// not r11,r30
	ctx.r11.u64 = ~r30.u64;
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r10,13
	ctx.r11.u64 = ctx.r10.u32 & 0x7FFFF;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// bne 0x8252d0e0
	if (!ctx.cr0.eq) goto loc_8252D0E0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8252D0E0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r11,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lwzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252d17c
	if (ctx.cr0.eq) goto loc_8252D17C;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r9,r30,4
	ctx.r9.s64 = r30.s64 + 4;
	// clrlwi r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	// bne cr6,0x8252d114
	if (!ctx.cr6.eq) goto loc_8252D114;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
loc_8252D114:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// slw r11,r19,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r19.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwx r11,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252d294
	if (!ctx.cr0.eq) goto loc_8252D294;
	// rlwinm. r11,r11,8,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252d16c
	if (!ctx.cr0.eq) goto loc_8252D16C;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// blt cr6,0x8252d160
	if (ctx.cr6.lt) goto loc_8252D160;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// ble cr6,0x8252d164
	if (!ctx.cr6.gt) goto loc_8252D164;
loc_8252D160:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_8252D164:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252d294
	if (ctx.cr0.eq) goto loc_8252D294;
loc_8252D16C:
	// lbz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 76);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252d294
	if (!ctx.cr0.eq) goto loc_8252D294;
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8252D17C:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252d1a0
	if (!ctx.cr0.eq) goto loc_8252D1A0;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252d0b0
	if (!ctx.cr6.eq) goto loc_8252D0B0;
	// b 0x8252d1a0
	goto loc_8252D1A0;
loc_8252D19C:
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8252D1A0:
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 4);
loc_8252D1A4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8252d204
	if (ctx.cr6.eq) goto loc_8252D204;
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252d1fc
	if (ctx.cr6.eq) goto loc_8252D1FC;
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r27.u32, ctx.xer);
	// beq cr6,0x8252d1fc
	if (ctx.cr6.eq) goto loc_8252D1FC;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// not r10,r30
	ctx.r10.u64 = ~r30.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// clrlwi r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	// bne 0x8252d1e0
	if (!ctx.cr0.eq) goto loc_8252D1E0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8252D1E0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r11,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lwzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252d294
	if (!ctx.cr0.eq) goto loc_8252D294;
loc_8252D1FC:
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x8252d1a4
	goto loc_8252D1A4;
loc_8252D204:
	// lwz r30,4(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 4);
loc_8252D208:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8252d2f8
	if (ctx.cr6.eq) goto loc_8252D2F8;
	// lwz r31,16(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8252d2f0
	if (ctx.cr6.eq) goto loc_8252D2F0;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252d234
	if (ctx.cr0.eq) goto loc_8252D234;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// beq 0x8252d238
	if (ctx.cr0.eq) goto loc_8252D238;
loc_8252D234:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_8252D238:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252d2d8
	if (ctx.cr0.eq) goto loc_8252D2D8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x8252d25c
	if (ctx.cr6.eq) goto loc_8252D25C;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// bne cr6,0x8252d260
	if (!ctx.cr6.eq) goto loc_8252D260;
loc_8252D25C:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_8252D260:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252d294
	if (ctx.cr0.eq) goto loc_8252D294;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f6f80
	ctx.lr = 0x8252D270;
	sub_824F6F80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252d2f0
	if (ctx.cr0.eq) goto loc_8252D2F0;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7510
	ctx.lr = 0x8252D284;
	sub_824F7510(ctx, base);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// blt cr6,0x8252d2f0
	if (ctx.cr6.lt) goto loc_8252D2F0;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// bgt cr6,0x8252d2f0
	if (ctx.cr6.gt) goto loc_8252D2F0;
loc_8252D294:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// mr r28,r18
	r28.u64 = r18.u64;
	// rlwinm. r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252cf48
	if (!ctx.cr0.eq) goto loc_8252CF48;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// addi r31,r24,4
	r31.s64 = r24.s64 + 4;
loc_8252D2AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252d30c
	if (ctx.cr6.eq) goto loc_8252D30C;
	// lwz r30,16(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8252d2d0
	if (ctx.cr6.eq) goto loc_8252D2D0;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,13568
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13568, ctx.xer);
	// beq cr6,0x8252d3a4
	if (ctx.cr6.eq) goto loc_8252D3A4;
loc_8252D2D0:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8252d2ac
	goto loc_8252D2AC;
loc_8252D2D8:
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252d294
	if (ctx.cr0.eq) goto loc_8252D294;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8252d294
	if (!ctx.cr6.eq) goto loc_8252D294;
loc_8252D2F0:
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// b 0x8252d208
	goto loc_8252D208;
loc_8252D2F8:
	// lwz r27,8(r27)
	r27.u64 = REX_LOAD_U32(r27.u32 + 8);
	// b 0x8252cfb0
	goto loc_8252CFB0;
loc_8252D300:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x8252cf70
	goto loc_8252CF70;
loc_8252D30C:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// li r6,106
	ctx.r6.s64 = 106;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// and r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x825bb860
	ctx.lr = 0x8252D338;
	sub_825BB860(ctx, base);
	// lwz r10,4(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 4);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r8,r10,24
	ctx.r8.s64 = ctx.r10.s64 + 24;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwz r6,28(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r6,28(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r9.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r7.u32);
	// bl 0x8250ab60
	ctx.lr = 0x8252D394;
	sub_8250AB60(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82503360
	ctx.lr = 0x8252D3A4;
	sub_82503360(ctx, base);
loc_8252D3A4:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_8252D3A8:
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8252d4bc
	if (ctx.cr6.eq) goto loc_8252D4BC;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252d4a8
	if (ctx.cr6.eq) goto loc_8252D4A8;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x8252d4a8
	if (ctx.cr6.eq) goto loc_8252D4A8;
	// lwz r10,4(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 4);
	// lwz r4,28(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252d424
	if (!ctx.cr6.eq) goto loc_8252D424;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8252d400
	goto loc_8252D400;
loc_8252D3F8:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8252D400:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8252d3f8
	if (!ctx.cr6.eq) goto loc_8252D3F8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// b 0x8252d4a8
	goto loc_8252D4A8;
loc_8252D424:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82549360
	ctx.lr = 0x8252D43C;
	sub_82549360(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi. r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252d470
	if (!ctx.cr0.eq) goto loc_8252D470;
	// rlwimi r11,r19,16,13,15
	ctx.r11.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 16) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,116(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 116);
	// lhz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// sth r11,18(r3)
	REX_STORE_U16(ctx.r3.u32 + 18, ctx.r11.u16);
	// lwz r11,116(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 116);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,116(r21)
	REX_STORE_U32(r21.u32 + 116, ctx.r11.u32);
loc_8252D470:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8252d488
	goto loc_8252D488;
loc_8252D480:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8252D488:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8252d480
	if (!ctx.cr6.eq) goto loc_8252D480;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
loc_8252D4A8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8252d3a8
	if (!ctx.cr6.eq) goto loc_8252D3A8;
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// b 0x8252d3a8
	goto loc_8252D3A8;
loc_8252D4BC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250aed8
	ctx.lr = 0x8252D4C4;
	sub_8250AED8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// bl 0x82548f78
	ctx.lr = 0x8252D4DC;
	sub_82548F78(ctx, base);
	// b 0x8252cf48
	goto loc_8252CF48;
loc_8252D4E0:
	// addi r25,r24,4
	r25.s64 = r24.s64 + 4;
loc_8252D4E4:
	// lwz r26,0(r25)
	r26.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8252d914
	if (ctx.cr6.eq) goto loc_8252D914;
	// lwz r27,16(r26)
	r27.u64 = REX_LOAD_U32(r26.u32 + 16);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8252d900
	if (ctx.cr6.eq) goto loc_8252D900;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,117
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 117, ctx.xer);
	// beq cr6,0x8252d900
	if (ctx.cr6.eq) goto loc_8252D900;
	// cmplwi cr6,r11,59
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 59, ctx.xer);
	// beq cr6,0x8252d52c
	if (ctx.cr6.eq) goto loc_8252D52C;
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// beq cr6,0x8252d52c
	if (ctx.cr6.eq) goto loc_8252D52C;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// beq cr6,0x8252d52c
	if (ctx.cr6.eq) goto loc_8252D52C;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// bne cr6,0x8252d900
	if (!ctx.cr6.eq) goto loc_8252D900;
loc_8252D52C:
	// lwz r30,28(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 28);
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
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825bb860
	ctx.lr = 0x8252D54C;
	sub_825BB860(ctx, base);
	// lwz r8,36(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 36);
	// rlwinm r9,r3,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r30,32
	ctx.r11.s64 = r30.s64 + 32;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r11,r9,36
	ctx.r11.s64 = ctx.r9.s64 + 36;
	// stw r8,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r8.u32);
	// ori r7,r10,1
	ctx.r7.u64 = ctx.r10.u64 | 1;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r11,r11,-36
	ctx.r11.s64 = ctx.r11.s64 + -36;
	// lwz r8,36(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 36);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,36(r8)
	REX_STORE_U32(ctx.r8.u32 + 36, ctx.r10.u32);
	// stw r7,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r7.u32);
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// oris r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 50331648;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x8250ad28
	ctx.lr = 0x8252D598;
	sub_8250AD28(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252d7c8
	if (ctx.cr0.eq) goto loc_8252D7C8;
	// lwz r11,92(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 92);
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r10,-25880
	ctx.r5.s64 = ctx.r10.s64 + -25880;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82528f28
	ctx.lr = 0x8252D5C4;
	sub_82528F28(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// not r11,r10
	ctx.r11.u64 = ~ctx.r10.u64;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// clrlwi r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	// bne 0x8252d5e4
	if (!ctx.cr0.eq) goto loc_8252D5E4;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
loc_8252D5E4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r29,r18
	r29.u64 = r18.u64;
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// slw r11,r19,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r19.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwx r11,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r31,4(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252d7c8
	if (!ctx.cr0.eq) goto loc_8252D7C8;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x8252d7c8
	if (ctx.cr0.eq) goto loc_8252D7C8;
loc_8252D618:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252d7b0
	if (ctx.cr0.eq) goto loc_8252D7B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f70d8
	ctx.lr = 0x8252D62C;
	sub_824F70D8(ctx, base);
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// not r10,r8
	ctx.r10.u64 = ~ctx.r8.u64;
	// clrlwi r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// bne 0x8252d64c
	if (!ctx.cr0.eq) goto loc_8252D64C;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
loc_8252D64C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r11,29,3,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lwzx r10,r7,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252d7b0
	if (ctx.cr0.eq) goto loc_8252D7B0;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// clrlwi r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	// bne cr6,0x8252d680
	if (!ctx.cr6.eq) goto loc_8252D680;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
loc_8252D680:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// slw r11,r19,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r19.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwx r11,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 8);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// rlwinm r9,r11,9,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// cmplwi cr6,r10,59
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 59, ctx.xer);
	// beq cr6,0x8252d6bc
	if (ctx.cr6.eq) goto loc_8252D6BC;
	// cmplwi cr6,r10,21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 21, ctx.xer);
	// bne cr6,0x8252d6c8
	if (!ctx.cr6.eq) goto loc_8252D6C8;
loc_8252D6BC:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8252D6C8:
	// clrlwi. r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252d6dc
	if (ctx.cr0.eq) goto loc_8252D6DC;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8252D6DC:
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm. r8,r10,8,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8252d6f0
	if (!ctx.cr0.eq) goto loc_8252D6F0;
	// oris r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 16777216;
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
loc_8252D6F0:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 48);
	// stw r30,108(r31)
	REX_STORE_U32(r31.u32 + 108, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwimi r11,r10,25,6,6
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x2000000) | (ctx.r11.u64 & 0xFFFFFFFFFDFFFFFF);
	// stw r28,72(r31)
	REX_STORE_U32(r31.u32 + 72, r28.u32);
	// oris r10,r9,384
	ctx.r10.u64 = ctx.r9.u64 | 25165824;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// bl 0x824f70d8
	ctx.lr = 0x8252D71C;
	sub_824F70D8(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// bne cr6,0x8252d7b0
	if (!ctx.cr6.eq) goto loc_8252D7B0;
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 76);
	// rlwinm. r10,r11,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252d75c
	if (ctx.cr0.eq) goto loc_8252D75C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r22,r11,9,31,31
	r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// bl 0x824f70d8
	ctx.lr = 0x8252D73C;
	sub_824F70D8(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// oris r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 8388608;
	// stw r3,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// rlwimi r11,r22,23,8,8
	ctx.r11.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 23) & 0x800000) | (ctx.r11.u64 & 0xFFFFFFFFFF7FFFFF);
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// b 0x8252d764
	goto loc_8252D764;
loc_8252D75C:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// rlwinm r11,r11,0,10,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
loc_8252D764:
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// blt cr6,0x8252d784
	if (ctx.cr6.lt) goto loc_8252D784;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// ble cr6,0x8252d788
	if (!ctx.cr6.gt) goto loc_8252D788;
loc_8252D784:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_8252D788:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252d7b0
	if (ctx.cr0.eq) goto loc_8252D7B0;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252d7b0
	if (ctx.cr6.eq) goto loc_8252D7B0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,8064
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8064, ctx.xer);
	// bne cr6,0x8252d7b0
	if (!ctx.cr6.eq) goto loc_8252D7B0;
	// mr r29,r19
	r29.u64 = r19.u64;
loc_8252D7B0:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252d7c8
	if (!ctx.cr0.eq) goto loc_8252D7C8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8252d618
	if (!ctx.cr6.eq) goto loc_8252D618;
loc_8252D7C8:
	// addi r28,r27,4
	r28.s64 = r27.s64 + 4;
loc_8252D7CC:
	// lwz r29,0(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8252d8bc
	if (ctx.cr6.eq) goto loc_8252D8BC;
	// lwz r31,16(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8252d854
	if (ctx.cr6.eq) goto loc_8252D854;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252d7fc
	if (ctx.cr0.eq) goto loc_8252D7FC;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// beq 0x8252d800
	if (ctx.cr0.eq) goto loc_8252D800;
loc_8252D7FC:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_8252D800:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252d868
	if (ctx.cr0.eq) goto loc_8252D868;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,7552
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7552, ctx.xer);
	// bne cr6,0x8252d828
	if (!ctx.cr6.eq) goto loc_8252D828;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwimi r10,r11,0,14,12
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF) | (ctx.r10.u64 & 0x40000);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_8252D828:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// rlwinm r11,r11,0,15,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x8250ab60
	ctx.lr = 0x8252D840;
	sub_8250AB60(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// bl 0x8250c958
	ctx.lr = 0x8252D854;
	sub_8250C958(ctx, base);
loc_8252D854:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x8252d7cc
	if (!ctx.cr6.eq) goto loc_8252D7CC;
	// addi r28,r29,8
	r28.s64 = r29.s64 + 8;
	// b 0x8252d7cc
	goto loc_8252D7CC;
loc_8252D868:
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
loc_8252D86C:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8252d854
	if (ctx.cr6.eq) goto loc_8252D854;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8252d8a8
	if (ctx.cr6.eq) goto loc_8252D8A8;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// beq cr6,0x8252d89c
	if (ctx.cr6.eq) goto loc_8252D89C;
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bne cr6,0x8252d8a8
	if (!ctx.cr6.eq) goto loc_8252D8A8;
loc_8252D89C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8250b010
	ctx.lr = 0x8252D8A8;
	sub_8250B010(ctx, base);
loc_8252D8A8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8252d86c
	if (!ctx.cr6.eq) goto loc_8252D86C;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// b 0x8252d86c
	goto loc_8252D86C;
loc_8252D8BC:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// blt cr6,0x8252d8d8
	if (ctx.cr6.lt) goto loc_8252D8D8;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// ble cr6,0x8252d8dc
	if (!ctx.cr6.gt) goto loc_8252D8DC;
loc_8252D8D8:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_8252D8DC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// beq 0x8252d8f8
	if (ctx.cr0.eq) goto loc_8252D8F8;
	// bl 0x8250b010
	ctx.lr = 0x8252D8F4;
	sub_8250B010(ctx, base);
	// b 0x8252d900
	goto loc_8252D900;
loc_8252D8F8:
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x825c2288
	ctx.lr = 0x8252D900;
	sub_825C2288(ctx, base);
loc_8252D900:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x8252d4e4
	if (!ctx.cr6.eq) goto loc_8252D4E4;
	// addi r25,r26,8
	r25.s64 = r26.s64 + 8;
	// b 0x8252d4e4
	goto loc_8252D4E4;
loc_8252D914:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// rlwinm r11,r11,0,28,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// stw r11,4(r23)
	REX_STORE_U32(r23.u32 + 4, ctx.r11.u32);
loc_8252D920:
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x8252ce88
	goto loc_8252CE88;
loc_8252D92C:
	// lwz r11,44(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 44);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252dc54
	if (ctx.cr0.eq) goto loc_8252DC54;
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252dc54
	if (!ctx.cr0.eq) goto loc_8252DC54;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8252dc54
	if (ctx.cr0.eq) goto loc_8252DC54;
loc_8252D950:
	// lwz r11,28(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 28);
	// addi r25,r24,24
	r25.s64 = r24.s64 + 24;
	// mr r26,r18
	r26.u64 = r18.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252dc38
	if (!ctx.cr0.eq) goto loc_8252DC38;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8252dc38
	if (ctx.cr0.eq) goto loc_8252DC38;
loc_8252D970:
	// lwz r31,8(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r31,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,13312
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13312, ctx.xer);
	// bne cr6,0x8252dbcc
	if (!ctx.cr6.eq) goto loc_8252DBCC;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250aa20
	ctx.lr = 0x8252D98C;
	sub_8250AA20(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252da78
	if (ctx.cr0.eq) goto loc_8252DA78;
	// lwz r30,44(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 44);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x8252d9c0
	if (!ctx.cr6.eq) goto loc_8252D9C0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82509448
	ctx.lr = 0x8252D9B8;
	sub_82509448(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8252dbcc
	if (!ctx.cr0.eq) goto loc_8252DBCC;
loc_8252D9C0:
	// addi r28,r29,4
	r28.s64 = r29.s64 + 4;
loc_8252D9C4:
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8252da58
	if (ctx.cr6.eq) goto loc_8252DA58;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252da44
	if (ctx.cr6.eq) goto loc_8252DA44;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8252d9f8
	goto loc_8252D9F8;
loc_8252D9F0:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8252D9F8:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8252d9f0
	if (!ctx.cr6.eq) goto loc_8252D9F0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, r31.u32);
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r4,r11,27,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// bl 0x82503a18
	ctx.lr = 0x8252DA28;
	sub_82503A18(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// lwz r27,0(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r4,r27,27
	ctx.r4.u64 = r27.u32 & 0x1F;
	// bl 0x8250a5d8
	ctx.lr = 0x8252DA3C;
	sub_8250A5D8(ctx, base);
	// rlwimi r3,r27,0,0,26
	ctx.r3.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r3.u64 & 0xFFFFFFFF0000001F);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_8252DA44:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8252d9c4
	if (!ctx.cr6.eq) goto loc_8252D9C4;
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// b 0x8252d9c4
	goto loc_8252D9C4;
loc_8252DA58:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252dbb8
	if (ctx.cr0.eq) goto loc_8252DBB8;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252dbb8
	if (!ctx.cr0.eq) goto loc_8252DBB8;
	// b 0x8252dbb0
	goto loc_8252DBB0;
loc_8252DA78:
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252dbcc
	if (ctx.cr0.eq) goto loc_8252DBCC;
	// lwz r27,44(r29)
	r27.u64 = REX_LOAD_U32(r29.u32 + 44);
	// lwz r30,12(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 12);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ r31.u64;
	// rlwinm. r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252daa8
	if (ctx.cr0.eq) goto loc_8252DAA8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82509448
	ctx.lr = 0x8252DAA0;
	sub_82509448(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8252dbcc
	if (!ctx.cr0.eq) goto loc_8252DBCC;
loc_8252DAA8:
	// lwz r31,4(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_8252DAAC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8252db00
	if (ctx.cr6.eq) goto loc_8252DB00;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252daf8
	if (ctx.cr6.eq) goto loc_8252DAF8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252daf8
	if (ctx.cr0.eq) goto loc_8252DAF8;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// beq cr6,0x8252daf8
	if (ctx.cr6.eq) goto loc_8252DAF8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,13312
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13312, ctx.xer);
	// beq cr6,0x8252daf8
	if (ctx.cr6.eq) goto loc_8252DAF8;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x8250aa20
	ctx.lr = 0x8252DAEC;
	sub_8250AA20(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252dbcc
	if (ctx.cr0.eq) goto loc_8252DBCC;
loc_8252DAF8:
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x8252daac
	goto loc_8252DAAC;
loc_8252DB00:
	// addi r28,r29,4
	r28.s64 = r29.s64 + 4;
loc_8252DB04:
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8252db94
	if (ctx.cr6.eq) goto loc_8252DB94;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252db80
	if (ctx.cr6.eq) goto loc_8252DB80;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8252db34
	goto loc_8252DB34;
loc_8252DB2C:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8252DB34:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8252db2c
	if (!ctx.cr6.eq) goto loc_8252DB2C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r4,r11,27,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// bl 0x82503a18
	ctx.lr = 0x8252DB64;
	sub_82503A18(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// lwz r23,0(r31)
	r23.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r4,r23,27
	ctx.r4.u64 = r23.u32 & 0x1F;
	// bl 0x8250a5d8
	ctx.lr = 0x8252DB78;
	sub_8250A5D8(ctx, base);
	// rlwimi r3,r23,0,0,26
	ctx.r3.u64 = (__builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r3.u64 & 0xFFFFFFFF0000001F);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_8252DB80:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8252db04
	if (!ctx.cr6.eq) goto loc_8252DB04;
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// b 0x8252db04
	goto loc_8252DB04;
loc_8252DB94:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252dbb8
	if (ctx.cr0.eq) goto loc_8252DBB8;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252dbb8
	if (!ctx.cr0.eq) goto loc_8252DBB8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8252DBB0:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82549518
	ctx.lr = 0x8252DBB8;
	sub_82549518(ctx, base);
loc_8252DBB8:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825c2288
	ctx.lr = 0x8252DBCC;
	sub_825C2288(ctx, base);
loc_8252DBCC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8252dc04
	if (ctx.cr6.eq) goto loc_8252DC04;
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8252dc24
	if (!ctx.cr6.eq) goto loc_8252DC24;
loc_8252DBF4:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r26,r29
	r26.u64 = r29.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x8252dc24
	goto loc_8252DC24;
loc_8252DC04:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
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
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8252dbf4
	if (ctx.cr6.eq) goto loc_8252DBF4;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
loc_8252DC24:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252dc38
	if (!ctx.cr0.eq) goto loc_8252DC38;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252d970
	if (!ctx.cr6.eq) goto loc_8252D970;
loc_8252DC38:
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252dc54
	if (!ctx.cr0.eq) goto loc_8252DC54;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252d950
	if (!ctx.cr6.eq) goto loc_8252D950;
loc_8252DC54:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cec
	ctx.lr = 0x8252DC60;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82736268) {
	REX_FUNC_PROLOGUE();
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
	PPCVRegister vTemp{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r11,r5,224
	ctx.r11.s64 = ctx.r5.s64 + 224;
	// vspltisw128 v62,11
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0xB)));
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v61,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// vspltisw128 v60,3
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_set1_epi32(int(0x3)));
	// li r8,48
	ctx.r8.s64 = 48;
	// vspltisw128 v43,8
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_set1_epi32(int(0x8)));
	// li r6,96
	ctx.r6.s64 = 96;
	// vslw128 v10,v61,v62
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v61.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v62.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_sllv_epi32(a, shift));
	}
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lvx128 v59,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v13,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// lvx128 v58,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v8,v59,0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// lvx128 v57,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v6,v58,0
	simde_mm_store_ps(ctx.v6.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// vcsxwfp128 v7,v57,0
	simde_mm_store_ps(ctx.v7.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// lvx128 v56,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r7,31472
	ctx.r9.s64 = ctx.r7.s64 + 31472;
	// vcsxwfp128 v5,v56,0
	simde_mm_store_ps(ctx.v5.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// li r8,112
	ctx.r8.s64 = 112;
	// lvx128 v55,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,160
	ctx.r7.s64 = 160;
	// vslw128 v9,v55,v62
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v55.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v62.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_sllv_epi32(a, shift));
	}
	// li r6,176
	ctx.r6.s64 = 176;
	// vspltisw128 v40,14
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_set1_epi32(int(0xE)));
	// li r11,64
	ctx.r11.s64 = 64;
	// vspltisw128 v39,2
	simde_mm_store_si128((simde__m128i*)ctx.v39.u32, simde_mm_set1_epi32(int(0x2)));
	// li r10,80
	ctx.r10.s64 = 80;
	// vspltisw128 v38,4
	simde_mm_store_si128((simde__m128i*)ctx.v38.u32, simde_mm_set1_epi32(int(0x4)));
	// lvx128 v54,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,-32
	ctx.r8.s64 = -32;
	// lvx128 v53,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v4,v54,0
	simde_mm_store_ps(ctx.v4.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v54.u32)));
	// lvx128 v52,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v3,v53,0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// vaddfp128 v51,v8,v13
	simde_mm_store_ps(ctx.v51.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32)));
	// lvx128 v12,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v2,v52,0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)));
	// li r7,128
	ctx.r7.s64 = 128;
	// vaddfp128 v50,v7,v6
	simde_mm_store_ps(ctx.v50.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v6.f32)));
	// li r6,144
	ctx.r6.s64 = 144;
	// lvx128 v11,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,96
	ctx.r11.s64 = 96;
	// lvx128 v0,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// li r31,64
	r31.s64 = 64;
	// vaddsws v1,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// lvx128 v49,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,192
	ctx.r8.s64 = 192;
	// lvx128 v48,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,208
	ctx.r7.s64 = 208;
	// li r6,80
	ctx.r6.s64 = 80;
	// vaddsws v29,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v31,v49,v62
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v49.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v62.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_sllv_epi32(a, shift));
	}
	// lvx128 v10,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslw128 v30,v48,v62
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v48.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v62.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_sllv_epi32(a, shift));
	}
	// lvx128 v9,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v47,v3,v5
	simde_mm_store_ps(ctx.v47.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v5.f32)));
	// lvx128 v45,r5,r31
	ea = (ctx.r5.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v28,v12,v51
	simde_mm_store_ps(v28.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v51.f32)));
	// lvx128 v44,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v46,v2,v4
	simde_mm_store_ps(ctx.v46.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v4.f32)));
	// lvx128 v42,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v27,v12,v50
	simde_mm_store_ps(v27.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v50.f32)));
	// lvx128 v41,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddsws v17,v1,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vcsxwfp128 v25,v44,0
	simde_mm_store_ps(v25.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v44.u32)));
	// vaddsws v15,v29,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// li r5,112
	ctx.r5.s64 = 112;
	// vcsxwfp128 v23,v45,0
	simde_mm_store_ps(v23.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v45.u32)));
	// li r11,128
	ctx.r11.s64 = 128;
	// vcsxwfp128 v24,v42,0
	simde_mm_store_ps(v24.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// vmaddfp v26,v10,v13,v28
	simde_mm_store_ps(v26.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(v28.f32)));
	// vmaddfp v8,v11,v8,v28
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(v28.f32)));
	// vmaddfp v19,v11,v7,v27
	simde_mm_store_ps(v19.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(v27.f32)));
	// vmaddfp v18,v10,v6,v27
	simde_mm_store_ps(v18.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(v27.f32)));
	// vmulfp128 v13,v9,v47
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v47.f32)));
	// vmulfp128 v28,v9,v46
	simde_mm_store_ps(v28.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vcsxwfp128 v22,v41,0
	simde_mm_store_ps(v22.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v41.u32)));
	// vsubsws v21,v1,v31
	temp.s64 = int64_t(ctx.v1.s32[0]) - int64_t(v31.s32[0]);
	v21.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[1]) - int64_t(v31.s32[1]);
	v21.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[2]) - int64_t(v31.s32[2]);
	v21.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[3]) - int64_t(v31.s32[3]);
	v21.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vctsxs v27,v8,0
	simde_mm_store_si128((simde__m128i*)v27.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v8.f32)));
	// lvx128 v7,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v37,v23,v25
	simde_mm_store_ps(ctx.v37.f32, simde_mm_add_ps(simde_mm_load_ps(v23.f32), simde_mm_load_ps(v25.f32)));
	// lvx128 v8,r9,r5
	ea = (ctx.r9.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubsws v20,v29,v30
	temp.s64 = int64_t(v29.s32[0]) - int64_t(v30.s32[0]);
	v20.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v29.s32[1]) - int64_t(v30.s32[1]);
	v20.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v29.s32[2]) - int64_t(v30.s32[2]);
	v20.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v29.s32[3]) - int64_t(v30.s32[3]);
	v20.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vctsxs v1,v26,0
	simde_mm_store_si128((simde__m128i*)ctx.v1.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v26.f32)));
	// vmaddfp v29,v8,v3,v13
	simde_mm_store_ps(v29.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// li r10,48
	ctx.r10.s64 = 48;
	// vmaddfp v26,v7,v5,v13
	simde_mm_store_ps(v26.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vor v31,v17,v17
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_load_si128((simde__m128i*)v17.u8));
	// vmaddfp v16,v7,v4,v28
	simde_mm_store_ps(v16.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(v28.f32)));
	// li r8,144
	ctx.r8.s64 = 144;
	// vmaddfp v17,v8,v2,v28
	simde_mm_store_ps(v17.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(v28.f32)));
	// li r7,160
	ctx.r7.s64 = 160;
	// vctsxs v13,v19,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v19.f32)));
	// vor v30,v15,v15
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_load_si128((simde__m128i*)v15.u8));
	// lvx128 v6,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vctsxs v3,v18,0
	simde_mm_store_si128((simde__m128i*)ctx.v3.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v18.f32)));
	// addi r11,r1,-48
	ctx.r11.s64 = ctx.r1.s64 + -48;
	// lvx128 v5,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// vaddfp128 v36,v22,v24
	simde_mm_store_ps(ctx.v36.f32, simde_mm_add_ps(simde_mm_load_ps(v22.f32), simde_mm_load_ps(v24.f32)));
	// lvx128 v4,r9,r7
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v19,v6,v37
	simde_mm_store_ps(v19.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v37.f32)));
	// vctsxs v2,v29,0
	simde_mm_store_si128((simde__m128i*)ctx.v2.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v29.f32)));
	// vctsxs v28,v26,0
	simde_mm_store_si128((simde__m128i*)v28.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v26.f32)));
	// vctsxs v26,v16,0
	simde_mm_store_si128((simde__m128i*)v26.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v16.f32)));
	// vctsxs v29,v17,0
	simde_mm_store_si128((simde__m128i*)v29.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v17.f32)));
	// vmulfp128 v18,v6,v36
	simde_mm_store_ps(v18.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v36.f32)));
	// vmaddfp v25,v5,v25,v19
	simde_mm_store_ps(v25.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(v25.f32)), simde_mm_load_ps(v19.f32)));
	// vmaddfp v23,v4,v23,v19
	simde_mm_store_ps(v23.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(v23.f32)), simde_mm_load_ps(v19.f32)));
	// vsubsws v14,v27,v2
	temp.s64 = int64_t(v27.s32[0]) - int64_t(ctx.v2.s32[0]);
	v14.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v27.s32[1]) - int64_t(ctx.v2.s32[1]);
	v14.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v27.s32[2]) - int64_t(ctx.v2.s32[2]);
	v14.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v27.s32[3]) - int64_t(ctx.v2.s32[3]);
	v14.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v19,v1,v28
	temp.s64 = int64_t(ctx.v1.s32[0]) - int64_t(v28.s32[0]);
	v19.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[1]) - int64_t(v28.s32[1]);
	v19.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[2]) - int64_t(v28.s32[2]);
	v19.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[3]) - int64_t(v28.s32[3]);
	v19.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v17,v27,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v28,v1,v28
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v2,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)v14.u8));
	// vor v1,v19,v19
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)v19.u8));
	// vsubsws v16,v3,v26
	temp.s64 = int64_t(ctx.v3.s32[0]) - int64_t(v26.s32[0]);
	v16.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[1]) - int64_t(v26.s32[1]);
	v16.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[2]) - int64_t(v26.s32[2]);
	v16.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[3]) - int64_t(v26.s32[3]);
	v16.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v27,v3,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v3,v13,v29
	temp.s64 = int64_t(ctx.v13.s32[0]) - int64_t(v29.s32[0]);
	ctx.v3.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[1]) - int64_t(v29.s32[1]);
	ctx.v3.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[2]) - int64_t(v29.s32[2]);
	ctx.v3.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[3]) - int64_t(v29.s32[3]);
	ctx.v3.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmaddfp v24,v5,v24,v18
	simde_mm_store_ps(v24.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(v24.f32)), simde_mm_load_ps(v18.f32)));
	// vaddsws v15,v13,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vmaddfp v26,v4,v22,v18
	simde_mm_store_ps(v26.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(v22.f32)), simde_mm_load_ps(v18.f32)));
	// vsubsws v13,v2,v1
	temp.s64 = int64_t(ctx.v2.s32[0]) - int64_t(ctx.v1.s32[0]);
	ctx.v13.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v2.s32[1]) - int64_t(ctx.v1.s32[1]);
	ctx.v13.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v2.s32[2]) - int64_t(ctx.v1.s32[2]);
	ctx.v13.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v2.s32[3]) - int64_t(ctx.v1.s32[3]);
	ctx.v13.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v14,v2,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vctsxs v2,v25,0
	simde_mm_store_si128((simde__m128i*)ctx.v2.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v25.f32)));
	// vctsxs v25,v23,0
	simde_mm_store_si128((simde__m128i*)v25.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v23.f32)));
	// vor v29,v16,v16
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_load_si128((simde__m128i*)v16.u8));
	// vslw128 v1,v13,v38
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v38.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v23,v13,v39
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v39.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v22,v3,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v3,v3,v29
	temp.s64 = int64_t(ctx.v3.s32[0]) - int64_t(v29.s32[0]);
	ctx.v3.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[1]) - int64_t(v29.s32[1]);
	ctx.v3.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[2]) - int64_t(v29.s32[2]);
	ctx.v3.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[3]) - int64_t(v29.s32[3]);
	ctx.v3.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vor v29,v17,v17
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_load_si128((simde__m128i*)v17.u8));
	// vaddsws v18,v23,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vctsxs v1,v24,0
	simde_mm_store_si128((simde__m128i*)ctx.v1.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v24.f32)));
	// vctsxs v24,v26,0
	simde_mm_store_si128((simde__m128i*)v24.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v26.f32)));
	// vor v26,v15,v15
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_load_si128((simde__m128i*)v15.u8));
	// vslw128 v17,v3,v38
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v38.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v16,v21,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v21,v21,v2
	temp.s64 = int64_t(v21.s32[0]) - int64_t(ctx.v2.s32[0]);
	v21.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v21.s32[1]) - int64_t(ctx.v2.s32[1]);
	v21.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v21.s32[2]) - int64_t(ctx.v2.s32[2]);
	v21.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v21.s32[3]) - int64_t(ctx.v2.s32[3]);
	v21.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vor v2,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)v14.u8));
	// vaddsws v23,v31,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v25,v31,v25
	temp.s64 = int64_t(v31.s32[0]) - int64_t(v25.s32[0]);
	v25.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v31.s32[1]) - int64_t(v25.s32[1]);
	v25.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v31.s32[2]) - int64_t(v25.s32[2]);
	v25.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v31.s32[3]) - int64_t(v25.s32[3]);
	v25.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vslw128 v15,v3,v39
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v39.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v14,v2,v38
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v38.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v31,v2,v39
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v39.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v19,v20,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v20,v20,v1
	temp.s64 = int64_t(v20.s32[0]) - int64_t(ctx.v1.s32[0]);
	v20.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v20.s32[1]) - int64_t(ctx.v1.s32[1]);
	v20.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v20.s32[2]) - int64_t(ctx.v1.s32[2]);
	v20.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v20.s32[3]) - int64_t(ctx.v1.s32[3]);
	v20.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v31,v31,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v1,v22,v22
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)v22.u8));
	// stvx128 v19,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddsws v22,v30,v24
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v24,v30,v24
	temp.s64 = int64_t(v30.s32[0]) - int64_t(v24.s32[0]);
	v24.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v30.s32[1]) - int64_t(v24.s32[1]);
	v24.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v30.s32[2]) - int64_t(v24.s32[2]);
	v24.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v30.s32[3]) - int64_t(v24.s32[3]);
	v24.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v19,v2,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v2,v31,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v30,v1,v38
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v38.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v14,v1,v39
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v39.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_sllv_epi32(a, shift));
	}
	// stvx128 v2,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v2,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)v18.u8));
	// vaddsws v18,v15,v17
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// li r6,-16
	ctx.r6.s64 = -16;
	// vaddsws v30,v14,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v31,v13,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v15,v2,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vor v13,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)v18.u8));
	// lvx128 v18,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddsws v1,v1,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v17,v30,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v2,v31,v15
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v3,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v13,v13,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v14,v1,v17
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v17,v19,v18
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v18,v2,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v19,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// lvx128 v3,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddsws v30,v14,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v1,v17,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v13,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)v16.u8));
	// vaddsws v17,v19,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsraw128 v31,v18,v43
	v31.s32[0] = v18.s32[0] >> (ctx.v43.u8[0] & 0x1F);
	v31.s32[1] = v18.s32[1] >> (ctx.v43.u8[4] & 0x1F);
	v31.s32[2] = v18.s32[2] >> (ctx.v43.u8[8] & 0x1F);
	v31.s32[3] = v18.s32[3] >> (ctx.v43.u8[12] & 0x1F);
	// vsraw128 v2,v1,v43
	ctx.v2.s32[0] = ctx.v1.s32[0] >> (ctx.v43.u8[0] & 0x1F);
	ctx.v2.s32[1] = ctx.v1.s32[1] >> (ctx.v43.u8[4] & 0x1F);
	ctx.v2.s32[2] = ctx.v1.s32[2] >> (ctx.v43.u8[8] & 0x1F);
	ctx.v2.s32[3] = ctx.v1.s32[3] >> (ctx.v43.u8[12] & 0x1F);
	// vsraw128 v1,v30,v43
	ctx.v1.s32[0] = v30.s32[0] >> (ctx.v43.u8[0] & 0x1F);
	ctx.v1.s32[1] = v30.s32[1] >> (ctx.v43.u8[4] & 0x1F);
	ctx.v1.s32[2] = v30.s32[2] >> (ctx.v43.u8[8] & 0x1F);
	ctx.v1.s32[3] = v30.s32[3] >> (ctx.v43.u8[12] & 0x1F);
	// vsraw128 v30,v17,v43
	v30.s32[0] = v17.s32[0] >> (ctx.v43.u8[0] & 0x1F);
	v30.s32[1] = v17.s32[1] >> (ctx.v43.u8[4] & 0x1F);
	v30.s32[2] = v17.s32[2] >> (ctx.v43.u8[8] & 0x1F);
	v30.s32[3] = v17.s32[3] >> (ctx.v43.u8[12] & 0x1F);
	// vor128 v34,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vaddsws v16,v13,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v15,v21,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v17,v23,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v0,v25,v28
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v19,v20,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v18,v3,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor128 v33,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vsraw128 v32,v17,v43
	ctx.v32.s32[0] = v17.s32[0] >> (ctx.v43.u8[0] & 0x1F);
	ctx.v32.s32[1] = v17.s32[1] >> (ctx.v43.u8[4] & 0x1F);
	ctx.v32.s32[2] = v17.s32[2] >> (ctx.v43.u8[8] & 0x1F);
	ctx.v32.s32[3] = v17.s32[3] >> (ctx.v43.u8[12] & 0x1F);
	// vsraw128 v63,v16,v43
	ctx.v63.s32[0] = v16.s32[0] >> (ctx.v43.u8[0] & 0x1F);
	ctx.v63.s32[1] = v16.s32[1] >> (ctx.v43.u8[4] & 0x1F);
	ctx.v63.s32[2] = v16.s32[2] >> (ctx.v43.u8[8] & 0x1F);
	ctx.v63.s32[3] = v16.s32[3] >> (ctx.v43.u8[12] & 0x1F);
	// vsraw128 v62,v0,v43
	ctx.v62.s32[0] = ctx.v0.s32[0] >> (ctx.v43.u8[0] & 0x1F);
	ctx.v62.s32[1] = ctx.v0.s32[1] >> (ctx.v43.u8[4] & 0x1F);
	ctx.v62.s32[2] = ctx.v0.s32[2] >> (ctx.v43.u8[8] & 0x1F);
	ctx.v62.s32[3] = ctx.v0.s32[3] >> (ctx.v43.u8[12] & 0x1F);
	// vsraw128 v61,v15,v43
	ctx.v61.s32[0] = v15.s32[0] >> (ctx.v43.u8[0] & 0x1F);
	ctx.v61.s32[1] = v15.s32[1] >> (ctx.v43.u8[4] & 0x1F);
	ctx.v61.s32[2] = v15.s32[2] >> (ctx.v43.u8[8] & 0x1F);
	ctx.v61.s32[3] = v15.s32[3] >> (ctx.v43.u8[12] & 0x1F);
	// vaddsws v14,v22,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v4,v24,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsraw128 v58,v19,v43
	ctx.v58.s32[0] = v19.s32[0] >> (ctx.v43.u8[0] & 0x1F);
	ctx.v58.s32[1] = v19.s32[1] >> (ctx.v43.u8[4] & 0x1F);
	ctx.v58.s32[2] = v19.s32[2] >> (ctx.v43.u8[8] & 0x1F);
	ctx.v58.s32[3] = v19.s32[3] >> (ctx.v43.u8[12] & 0x1F);
	// vmrghw128 v57,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vsraw128 v54,v18,v43
	ctx.v54.s32[0] = v18.s32[0] >> (ctx.v43.u8[0] & 0x1F);
	ctx.v54.s32[1] = v18.s32[1] >> (ctx.v43.u8[4] & 0x1F);
	ctx.v54.s32[2] = v18.s32[2] >> (ctx.v43.u8[8] & 0x1F);
	ctx.v54.s32[3] = v18.s32[3] >> (ctx.v43.u8[12] & 0x1F);
	// vmrglw128 v56,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vsubsws v31,v21,v31
	temp.s64 = int64_t(v21.s32[0]) - int64_t(v31.s32[0]);
	v31.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v21.s32[1]) - int64_t(v31.s32[1]);
	v31.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v21.s32[2]) - int64_t(v31.s32[2]);
	v31.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v21.s32[3]) - int64_t(v31.s32[3]);
	v31.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmrghw128 v55,v32,v61
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), simde_mm_load_si128((simde__m128i*)ctx.v32.u32)));
	// vmrglw128 v53,v32,v61
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), simde_mm_load_si128((simde__m128i*)ctx.v32.u32)));
	// vsubsws v2,v13,v2
	temp.s64 = int64_t(ctx.v13.s32[0]) - int64_t(ctx.v2.s32[0]);
	ctx.v2.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[1]) - int64_t(ctx.v2.s32[1]);
	ctx.v2.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[2]) - int64_t(ctx.v2.s32[2]);
	ctx.v2.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[3]) - int64_t(ctx.v2.s32[3]);
	ctx.v2.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v59,v14,v43
	ctx.v59.s32[0] = v14.s32[0] >> (ctx.v43.u8[0] & 0x1F);
	ctx.v59.s32[1] = v14.s32[1] >> (ctx.v43.u8[4] & 0x1F);
	ctx.v59.s32[2] = v14.s32[2] >> (ctx.v43.u8[8] & 0x1F);
	ctx.v59.s32[3] = v14.s32[3] >> (ctx.v43.u8[12] & 0x1F);
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubsws v21,v3,v1
	temp.s64 = int64_t(ctx.v3.s32[0]) - int64_t(ctx.v1.s32[0]);
	v21.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[1]) - int64_t(ctx.v1.s32[1]);
	v21.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[2]) - int64_t(ctx.v1.s32[2]);
	v21.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[3]) - int64_t(ctx.v1.s32[3]);
	v21.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// lvx128 v3,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsraw128 v52,v4,v43
	ctx.v52.s32[0] = ctx.v4.s32[0] >> (ctx.v43.u8[0] & 0x1F);
	ctx.v52.s32[1] = ctx.v4.s32[1] >> (ctx.v43.u8[4] & 0x1F);
	ctx.v52.s32[2] = ctx.v4.s32[2] >> (ctx.v43.u8[8] & 0x1F);
	ctx.v52.s32[3] = ctx.v4.s32[3] >> (ctx.v43.u8[12] & 0x1F);
	// vmrghw128 v50,v55,v57
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), simde_mm_load_si128((simde__m128i*)ctx.v55.u32)));
	// vsubsws v19,v23,v29
	temp.s64 = int64_t(v23.s32[0]) - int64_t(v29.s32[0]);
	v19.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v23.s32[1]) - int64_t(v29.s32[1]);
	v19.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v23.s32[2]) - int64_t(v29.s32[2]);
	v19.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v23.s32[3]) - int64_t(v29.s32[3]);
	v19.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmrglw128 v49,v55,v57
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), simde_mm_load_si128((simde__m128i*)ctx.v55.u32)));
	// vsubsws v18,v25,v28
	temp.s64 = int64_t(v25.s32[0]) - int64_t(v28.s32[0]);
	v18.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v25.s32[1]) - int64_t(v28.s32[1]);
	v18.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v25.s32[2]) - int64_t(v28.s32[2]);
	v18.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v25.s32[3]) - int64_t(v28.s32[3]);
	v18.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmrglw128 v51,v59,v58
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// vsubsws v17,v24,v27
	temp.s64 = int64_t(v24.s32[0]) - int64_t(v27.s32[0]);
	v17.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v24.s32[1]) - int64_t(v27.s32[1]);
	v17.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v24.s32[2]) - int64_t(v27.s32[2]);
	v17.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v24.s32[3]) - int64_t(v27.s32[3]);
	v17.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmrghw128 v46,v53,v56
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// vsubsws v30,v20,v30
	temp.s64 = int64_t(v20.s32[0]) - int64_t(v30.s32[0]);
	v30.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v20.s32[1]) - int64_t(v30.s32[1]);
	v30.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v20.s32[2]) - int64_t(v30.s32[2]);
	v30.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v20.s32[3]) - int64_t(v30.s32[3]);
	v30.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmrglw128 v48,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), simde_mm_load_si128((simde__m128i*)ctx.v54.u32)));
	// vsubsws v20,v22,v26
	temp.s64 = int64_t(v22.s32[0]) - int64_t(v26.s32[0]);
	v20.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v22.s32[1]) - int64_t(v26.s32[1]);
	v20.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v22.s32[2]) - int64_t(v26.s32[2]);
	v20.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v22.s32[3]) - int64_t(v26.s32[3]);
	v20.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmrglw128 v44,v53,v56
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// vsraw128 v45,v2,v43
	ctx.v45.s32[0] = ctx.v2.s32[0] >> (ctx.v43.u8[0] & 0x1F);
	ctx.v45.s32[1] = ctx.v2.s32[1] >> (ctx.v43.u8[4] & 0x1F);
	ctx.v45.s32[2] = ctx.v2.s32[2] >> (ctx.v43.u8[8] & 0x1F);
	ctx.v45.s32[3] = ctx.v2.s32[3] >> (ctx.v43.u8[12] & 0x1F);
	// vmrghw128 v41,v59,v58
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// vsraw128 v47,v31,v43
	ctx.v47.s32[0] = v31.s32[0] >> (ctx.v43.u8[0] & 0x1F);
	ctx.v47.s32[1] = v31.s32[1] >> (ctx.v43.u8[4] & 0x1F);
	ctx.v47.s32[2] = v31.s32[2] >> (ctx.v43.u8[8] & 0x1F);
	ctx.v47.s32[3] = v31.s32[3] >> (ctx.v43.u8[12] & 0x1F);
	// vcsxwfp128 v2,v49,0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// vsraw128 v42,v18,v43
	ctx.v42.s32[0] = v18.s32[0] >> (ctx.v43.u8[0] & 0x1F);
	ctx.v42.s32[1] = v18.s32[1] >> (ctx.v43.u8[4] & 0x1F);
	ctx.v42.s32[2] = v18.s32[2] >> (ctx.v43.u8[8] & 0x1F);
	ctx.v42.s32[3] = v18.s32[3] >> (ctx.v43.u8[12] & 0x1F);
	// vmrglw128 v36,v51,v48
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// vsraw128 v37,v19,v43
	ctx.v37.s32[0] = v19.s32[0] >> (ctx.v43.u8[0] & 0x1F);
	ctx.v37.s32[1] = v19.s32[1] >> (ctx.v43.u8[4] & 0x1F);
	ctx.v37.s32[2] = v19.s32[2] >> (ctx.v43.u8[8] & 0x1F);
	ctx.v37.s32[3] = v19.s32[3] >> (ctx.v43.u8[12] & 0x1F);
	// vcsxwfp128 v26,v44,0
	simde_mm_store_ps(v26.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v44.u32)));
	// vsraw128 v35,v21,v43
	ctx.v35.s32[0] = v21.s32[0] >> (ctx.v43.u8[0] & 0x1F);
	ctx.v35.s32[1] = v21.s32[1] >> (ctx.v43.u8[4] & 0x1F);
	ctx.v35.s32[2] = v21.s32[2] >> (ctx.v43.u8[8] & 0x1F);
	ctx.v35.s32[3] = v21.s32[3] >> (ctx.v43.u8[12] & 0x1F);
	// vmrghw128 v58,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), simde_mm_load_si128((simde__m128i*)ctx.v54.u32)));
	// vsraw128 v32,v17,v43
	ctx.v32.s32[0] = v17.s32[0] >> (ctx.v43.u8[0] & 0x1F);
	ctx.v32.s32[1] = v17.s32[1] >> (ctx.v43.u8[4] & 0x1F);
	ctx.v32.s32[2] = v17.s32[2] >> (ctx.v43.u8[8] & 0x1F);
	ctx.v32.s32[3] = v17.s32[3] >> (ctx.v43.u8[12] & 0x1F);
	// vsraw128 v61,v20,v43
	ctx.v61.s32[0] = v20.s32[0] >> (ctx.v43.u8[0] & 0x1F);
	ctx.v61.s32[1] = v20.s32[1] >> (ctx.v43.u8[4] & 0x1F);
	ctx.v61.s32[2] = v20.s32[2] >> (ctx.v43.u8[8] & 0x1F);
	ctx.v61.s32[3] = v20.s32[3] >> (ctx.v43.u8[12] & 0x1F);
	// vmrghw128 v62,v42,v45
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// vsraw128 v63,v30,v43
	ctx.v63.s32[0] = v30.s32[0] >> (ctx.v43.u8[0] & 0x1F);
	ctx.v63.s32[1] = v30.s32[1] >> (ctx.v43.u8[4] & 0x1F);
	ctx.v63.s32[2] = v30.s32[2] >> (ctx.v43.u8[8] & 0x1F);
	ctx.v63.s32[3] = v30.s32[3] >> (ctx.v43.u8[12] & 0x1F);
	// vmrghw128 v59,v47,v37
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.u32), simde_mm_load_si128((simde__m128i*)ctx.v47.u32)));
	// vcsxwfp128 v20,v46,0
	simde_mm_store_ps(v20.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// vslw128 v16,v50,v43
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v50.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v43.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vmrglw128 v57,v32,v35
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v35.u32), simde_mm_load_si128((simde__m128i*)ctx.v32.u32)));
	// vmrglw128 v55,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vcsxwfp128 v31,v36,0
	simde_mm_store_ps(v31.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v36.u32)));
	// vmrglw128 v54,v62,v59
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vaddsws v27,v16,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vmrglw128 v53,v47,v37
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.u32), simde_mm_load_si128((simde__m128i*)ctx.v47.u32)));
	// vor128 v4,v33,v33
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v33.u8));
	// vmrghw128 v49,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vmrglw128 v50,v57,v55
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// vmrglw128 v56,v42,v45
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// vcsxwfp128 v1,v54,0
	simde_mm_store_ps(ctx.v1.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v54.u32)));
	// vmrghw128 v52,v32,v35
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v35.u32), simde_mm_load_si128((simde__m128i*)ctx.v32.u32)));
	// vmrglw128 v47,v41,v58
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), simde_mm_load_si128((simde__m128i*)ctx.v41.u32)));
	// vcsxwfp128 v29,v50,0
	simde_mm_store_ps(v29.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)));
	// vmrghw128 v36,v62,v59
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vmrglw128 v46,v56,v53
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// vmrglw128 v44,v52,v49
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), simde_mm_load_si128((simde__m128i*)ctx.v52.u32)));
	// vcsxwfp128 v30,v47,0
	simde_mm_store_ps(v30.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v47.u32)));
	// vmrghw128 v45,v51,v48
	simde_mm_store_si128((simde__m128i*)ctx.v45.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// vmrghw128 v42,v56,v53
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// vslw128 v15,v36,v43
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v36.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v43.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vmrghw128 v37,v57,v55
	simde_mm_store_si128((simde__m128i*)ctx.v37.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// vcsxwfp128 v24,v46,0
	simde_mm_store_ps(v24.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// vcsxwfp128 v28,v44,0
	simde_mm_store_ps(v28.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v44.u32)));
	// vmrghw128 v35,v41,v58
	simde_mm_store_si128((simde__m128i*)ctx.v35.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), simde_mm_load_si128((simde__m128i*)ctx.v41.u32)));
	// vcsxwfp128 v23,v45,0
	simde_mm_store_ps(v23.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v45.u32)));
	// vmrghw128 v32,v52,v49
	simde_mm_store_si128((simde__m128i*)ctx.v32.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), simde_mm_load_si128((simde__m128i*)ctx.v52.u32)));
	// vcsxwfp128 v19,v42,0
	simde_mm_store_ps(v19.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// vaddsws v3,v15,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vcsxwfp128 v21,v37,0
	simde_mm_store_ps(v21.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v37.u32)));
	// vaddfp v17,v2,v31
	simde_mm_store_ps(v17.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(v31.f32)));
	// vslw128 v25,v35,v43
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v35.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v43.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v22,v32,v43
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v32.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v43.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddfp v16,v1,v29
	simde_mm_store_ps(v16.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(v29.f32)));
	// vaddsws v18,v27,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddfp v15,v30,v26
	simde_mm_store_ps(v15.f32, simde_mm_add_ps(simde_mm_load_ps(v30.f32), simde_mm_load_ps(v26.f32)));
	// vsubsws v27,v27,v25
	temp.s64 = int64_t(v27.s32[0]) - int64_t(v25.s32[0]);
	v27.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v27.s32[1]) - int64_t(v25.s32[1]);
	v27.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v27.s32[2]) - int64_t(v25.s32[2]);
	v27.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v27.s32[3]) - int64_t(v25.s32[3]);
	v27.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v0,v3,v22
	temp.s64 = int64_t(ctx.v3.s32[0]) - int64_t(v22.s32[0]);
	ctx.v0.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[1]) - int64_t(v22.s32[1]);
	ctx.v0.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[2]) - int64_t(v22.s32[2]);
	ctx.v0.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[3]) - int64_t(v22.s32[3]);
	ctx.v0.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v3,v3,v22
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddfp128 v63,v28,v24
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(v28.f32), simde_mm_load_ps(v24.f32)));
	// vaddfp v14,v20,v23
	simde_mm_store_ps(v14.f32, simde_mm_add_ps(simde_mm_load_ps(v20.f32), simde_mm_load_ps(v23.f32)));
	// vaddfp128 v62,v19,v21
	simde_mm_store_ps(ctx.v62.f32, simde_mm_add_ps(simde_mm_load_ps(v19.f32), simde_mm_load_ps(v21.f32)));
	// vmaddfp v25,v12,v17,v13
	simde_mm_store_ps(v25.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(v17.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v17,v12,v16,v13
	simde_mm_store_ps(v17.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(v16.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vor v12,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vmaddfp v22,v9,v15,v13
	simde_mm_store_ps(v22.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(v15.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddcfp128 v9,v63,v9,v13
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v16,v6,v14,v13
	simde_mm_store_ps(v16.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(v14.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp128 v13,v6,v62,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v62.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v6,v11,v2,v25
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(v25.f32)));
	// vmaddfp v2,v10,v31,v25
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(v31.f32)), simde_mm_load_ps(v25.f32)));
	// vmaddfp v11,v11,v1,v17
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(v17.f32)));
	// vmaddfp v10,v10,v29,v17
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(v29.f32)), simde_mm_load_ps(v17.f32)));
	// vmaddfp v1,v8,v30,v22
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(v30.f32)), simde_mm_load_ps(v22.f32)));
	// vmaddfp v31,v7,v26,v22
	simde_mm_store_ps(v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(v26.f32)), simde_mm_load_ps(v22.f32)));
	// vmaddfp v8,v8,v28,v9
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(v28.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v9,v7,v24,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(v24.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vcfpsxws128 v63,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v6.f32)));
	// vcfpsxws128 v62,v2,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v2.f32)));
	// vmaddfp v6,v5,v23,v16
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(v23.f32)), simde_mm_load_ps(v16.f32)));
	// vmaddfp v5,v5,v21,v13
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(v21.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vcfpsxws128 v61,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v11.f32)));
	// vcfpsxws128 v58,v1,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v1.f32)));
	// vcfpsxws128 v57,v31,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v31.f32)));
	// vcfpsxws128 v59,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v10.f32)));
	// vcfpsxws128 v56,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v8.f32)));
	// vmaddfp v1,v4,v19,v13
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(v19.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v2,v4,v20,v16
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(v20.f32)), simde_mm_load_ps(v16.f32)));
	// vcfpsxws128 v55,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v9.f32)));
	// vsraw128 v13,v63,v60
	ctx.v13.s32[0] = ctx.v63.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v13.s32[1] = ctx.v63.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v13.s32[2] = ctx.v63.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v13.s32[3] = ctx.v63.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vsraw128 v11,v62,v60
	ctx.v11.s32[0] = ctx.v62.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v11.s32[1] = ctx.v62.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v11.s32[2] = ctx.v62.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v11.s32[3] = ctx.v62.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vcfpsxws128 v54,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v6.f32)));
	// vcfpsxws128 v53,v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v53.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v5.f32)));
	// vsraw128 v10,v61,v60
	ctx.v10.s32[0] = ctx.v61.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v10.s32[1] = ctx.v61.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v10.s32[2] = ctx.v61.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v10.s32[3] = ctx.v61.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vsraw128 v8,v58,v60
	ctx.v8.s32[0] = ctx.v58.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v8.s32[1] = ctx.v58.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v8.s32[2] = ctx.v58.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v8.s32[3] = ctx.v58.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vsraw128 v7,v57,v60
	ctx.v7.s32[0] = ctx.v57.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v7.s32[1] = ctx.v57.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v7.s32[2] = ctx.v57.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v7.s32[3] = ctx.v57.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vsraw128 v9,v59,v60
	ctx.v9.s32[0] = ctx.v59.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v9.s32[1] = ctx.v59.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v9.s32[2] = ctx.v59.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v9.s32[3] = ctx.v59.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vsraw128 v6,v56,v60
	ctx.v6.s32[0] = ctx.v56.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v6.s32[1] = ctx.v56.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v6.s32[2] = ctx.v56.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v6.s32[3] = ctx.v56.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vsubsws v14,v13,v8
	temp.s64 = int64_t(ctx.v13.s32[0]) - int64_t(ctx.v8.s32[0]);
	v14.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[1]) - int64_t(ctx.v8.s32[1]);
	v14.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[2]) - int64_t(ctx.v8.s32[2]);
	v14.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[3]) - int64_t(ctx.v8.s32[3]);
	v14.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vcfpsxws128 v51,v1,0
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v1.f32)));
	// vcfpsxws128 v52,v2,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v2.f32)));
	// vsubsws v31,v11,v7
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v7.s32[0]);
	v31.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v7.s32[1]);
	v31.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v7.s32[2]);
	v31.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v7.s32[3]);
	v31.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v5,v55,v60
	ctx.v5.s32[0] = ctx.v55.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v5.s32[1] = ctx.v55.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v5.s32[2] = ctx.v55.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v5.s32[3] = ctx.v55.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vspltisw128 v50,0
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_set1_epi32(int(0x0)));
	// vsubsws v30,v10,v6
	temp.s64 = int64_t(ctx.v10.s32[0]) - int64_t(ctx.v6.s32[0]);
	v30.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[1]) - int64_t(ctx.v6.s32[1]);
	v30.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[2]) - int64_t(ctx.v6.s32[2]);
	v30.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[3]) - int64_t(ctx.v6.s32[3]);
	v30.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vaddsws v2,v11,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v4,v13,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v7,v9,v5
	temp.s64 = int64_t(ctx.v9.s32[0]) - int64_t(ctx.v5.s32[0]);
	ctx.v7.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[1]) - int64_t(ctx.v5.s32[1]);
	ctx.v7.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[2]) - int64_t(ctx.v5.s32[2]);
	ctx.v7.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[3]) - int64_t(ctx.v5.s32[3]);
	ctx.v7.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v5,v9,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v11,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v14.u8));
	// vor v8,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)v31.u8));
	// vor v9,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v30.u8));
	// vsraw128 v13,v54,v60
	ctx.v13.s32[0] = ctx.v54.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v13.s32[1] = ctx.v54.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v13.s32[2] = ctx.v54.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v13.s32[3] = ctx.v54.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vaddsws v6,v10,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v29,v11,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsraw128 v10,v53,v60
	ctx.v10.s32[0] = ctx.v53.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v10.s32[1] = ctx.v53.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v10.s32[2] = ctx.v53.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v10.s32[3] = ctx.v53.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vaddsws v28,v9,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v1,v27,v13
	temp.s64 = int64_t(v27.s32[0]) - int64_t(ctx.v13.s32[0]);
	ctx.v1.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v27.s32[1]) - int64_t(ctx.v13.s32[1]);
	ctx.v1.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v27.s32[2]) - int64_t(ctx.v13.s32[2]);
	ctx.v1.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v27.s32[3]) - int64_t(ctx.v13.s32[3]);
	ctx.v1.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v27,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v31,v12,v10
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v10.s32[0]);
	v31.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v10.s32[1]);
	v31.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v10.s32[2]);
	v31.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v10.s32[3]);
	v31.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v26,v12,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v13,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)v29.u8));
	// vor v12,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v28.u8));
	// vsubsws v11,v11,v8
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v8.s32[0]);
	ctx.v11.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v8.s32[1]);
	ctx.v11.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v8.s32[2]);
	ctx.v11.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v8.s32[3]);
	ctx.v11.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v10,v9,v7
	temp.s64 = int64_t(ctx.v9.s32[0]) - int64_t(ctx.v7.s32[0]);
	ctx.v10.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[1]) - int64_t(ctx.v7.s32[1]);
	ctx.v10.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[2]) - int64_t(ctx.v7.s32[2]);
	ctx.v10.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[3]) - int64_t(ctx.v7.s32[3]);
	ctx.v10.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vslw128 v25,v13,v38
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v38.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v24,v13,v39
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v39.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v23,v12,v38
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v38.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v22,v12,v39
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v39.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v21,v11,v38
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v38.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v20,v11,v39
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v39.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v9,v24,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v8,v22,v23
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v19,v10,v38
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v38.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v16,v20,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v17,v10,v39
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v39.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v7,v13,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v15,v9,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v9,v12,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v14,v8,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v12,v17,v19
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v13,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)v16.u8));
	// vaddsws v8,v7,v15
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v7,v9,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v9,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v30,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v29,v13,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v28,v12,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vor128 v0,v34,v34
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v34.u8));
	// vsraw128 v13,v52,v60
	ctx.v13.s32[0] = ctx.v52.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v13.s32[1] = ctx.v52.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v13.s32[2] = ctx.v52.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v13.s32[3] = ctx.v52.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vaddsws v25,v30,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v24,v9,v28
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsraw128 v11,v51,v60
	ctx.v11.s32[0] = ctx.v51.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v11.s32[1] = ctx.v51.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v11.s32[2] = ctx.v51.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v11.s32[3] = ctx.v51.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vaddsws v23,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v22,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v21,v25,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v20,v24,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v10,v3,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v12,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsraw128 v8,v23,v43
	ctx.v8.s32[0] = v23.s32[0] >> (ctx.v43.u8[0] & 0x1F);
	ctx.v8.s32[1] = v23.s32[1] >> (ctx.v43.u8[4] & 0x1F);
	ctx.v8.s32[2] = v23.s32[2] >> (ctx.v43.u8[8] & 0x1F);
	ctx.v8.s32[3] = v23.s32[3] >> (ctx.v43.u8[12] & 0x1F);
	// vsraw128 v7,v22,v43
	ctx.v7.s32[0] = v22.s32[0] >> (ctx.v43.u8[0] & 0x1F);
	ctx.v7.s32[1] = v22.s32[1] >> (ctx.v43.u8[4] & 0x1F);
	ctx.v7.s32[2] = v22.s32[2] >> (ctx.v43.u8[8] & 0x1F);
	ctx.v7.s32[3] = v22.s32[3] >> (ctx.v43.u8[12] & 0x1F);
	// vor v0,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)v27.u8));
	// vor v9,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v26.u8));
	// vsubsws v11,v3,v11
	temp.s64 = int64_t(ctx.v3.s32[0]) - int64_t(ctx.v11.s32[0]);
	ctx.v11.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[1]) - int64_t(ctx.v11.s32[1]);
	ctx.v11.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[2]) - int64_t(ctx.v11.s32[2]);
	ctx.v11.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[3]) - int64_t(ctx.v11.s32[3]);
	ctx.v11.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v3,v21,v43
	ctx.v3.s32[0] = v21.s32[0] >> (ctx.v43.u8[0] & 0x1F);
	ctx.v3.s32[1] = v21.s32[1] >> (ctx.v43.u8[4] & 0x1F);
	ctx.v3.s32[2] = v21.s32[2] >> (ctx.v43.u8[8] & 0x1F);
	ctx.v3.s32[3] = v21.s32[3] >> (ctx.v43.u8[12] & 0x1F);
	// vsraw128 v30,v20,v43
	v30.s32[0] = v20.s32[0] >> (ctx.v43.u8[0] & 0x1F);
	v30.s32[1] = v20.s32[1] >> (ctx.v43.u8[4] & 0x1F);
	v30.s32[2] = v20.s32[2] >> (ctx.v43.u8[8] & 0x1F);
	v30.s32[3] = v20.s32[3] >> (ctx.v43.u8[12] & 0x1F);
	// vaddsws v19,v10,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v17,v12,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v16,v9,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v15,v0,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v14,v1,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v29,v31,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsraw128 v49,v19,v40
	ctx.v49.s32[0] = v19.s32[0] >> (ctx.v40.u8[0] & 0x1F);
	ctx.v49.s32[1] = v19.s32[1] >> (ctx.v40.u8[4] & 0x1F);
	ctx.v49.s32[2] = v19.s32[2] >> (ctx.v40.u8[8] & 0x1F);
	ctx.v49.s32[3] = v19.s32[3] >> (ctx.v40.u8[12] & 0x1F);
	// vsraw128 v48,v17,v40
	ctx.v48.s32[0] = v17.s32[0] >> (ctx.v40.u8[0] & 0x1F);
	ctx.v48.s32[1] = v17.s32[1] >> (ctx.v40.u8[4] & 0x1F);
	ctx.v48.s32[2] = v17.s32[2] >> (ctx.v40.u8[8] & 0x1F);
	ctx.v48.s32[3] = v17.s32[3] >> (ctx.v40.u8[12] & 0x1F);
	// vsraw128 v47,v16,v40
	ctx.v47.s32[0] = v16.s32[0] >> (ctx.v40.u8[0] & 0x1F);
	ctx.v47.s32[1] = v16.s32[1] >> (ctx.v40.u8[4] & 0x1F);
	ctx.v47.s32[2] = v16.s32[2] >> (ctx.v40.u8[8] & 0x1F);
	ctx.v47.s32[3] = v16.s32[3] >> (ctx.v40.u8[12] & 0x1F);
	// vsraw128 v46,v15,v40
	ctx.v46.s32[0] = v15.s32[0] >> (ctx.v40.u8[0] & 0x1F);
	ctx.v46.s32[1] = v15.s32[1] >> (ctx.v40.u8[4] & 0x1F);
	ctx.v46.s32[2] = v15.s32[2] >> (ctx.v40.u8[8] & 0x1F);
	ctx.v46.s32[3] = v15.s32[3] >> (ctx.v40.u8[12] & 0x1F);
	// vsubsws v13,v18,v13
	temp.s64 = int64_t(v18.s32[0]) - int64_t(ctx.v13.s32[0]);
	ctx.v13.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v18.s32[1]) - int64_t(ctx.v13.s32[1]);
	ctx.v13.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v18.s32[2]) - int64_t(ctx.v13.s32[2]);
	ctx.v13.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v18.s32[3]) - int64_t(ctx.v13.s32[3]);
	ctx.v13.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v45,v14,v40
	ctx.v45.s32[0] = v14.s32[0] >> (ctx.v40.u8[0] & 0x1F);
	ctx.v45.s32[1] = v14.s32[1] >> (ctx.v40.u8[4] & 0x1F);
	ctx.v45.s32[2] = v14.s32[2] >> (ctx.v40.u8[8] & 0x1F);
	ctx.v45.s32[3] = v14.s32[3] >> (ctx.v40.u8[12] & 0x1F);
	// vpkswus128 v44,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v44.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.s32), simde_mm_load_si128((simde__m128i*)ctx.v48.s32)));
	// vsraw128 v43,v29,v40
	ctx.v43.s32[0] = v29.s32[0] >> (ctx.v40.u8[0] & 0x1F);
	ctx.v43.s32[1] = v29.s32[1] >> (ctx.v40.u8[4] & 0x1F);
	ctx.v43.s32[2] = v29.s32[2] >> (ctx.v40.u8[8] & 0x1F);
	ctx.v43.s32[3] = v29.s32[3] >> (ctx.v40.u8[12] & 0x1F);
	// vpkswus128 v42,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v42.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.s32), simde_mm_load_si128((simde__m128i*)ctx.v46.s32)));
	// vaddsws v28,v11,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v27,v13,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vpkswus128 v39,v45,v43
	simde_mm_store_si128((simde__m128i*)ctx.v39.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.s32), simde_mm_load_si128((simde__m128i*)ctx.v45.s32)));
	// vsraw128 v37,v28,v40
	ctx.v37.s32[0] = v28.s32[0] >> (ctx.v40.u8[0] & 0x1F);
	ctx.v37.s32[1] = v28.s32[1] >> (ctx.v40.u8[4] & 0x1F);
	ctx.v37.s32[2] = v28.s32[2] >> (ctx.v40.u8[8] & 0x1F);
	ctx.v37.s32[3] = v28.s32[3] >> (ctx.v40.u8[12] & 0x1F);
	// vpkuhus128 v41,v44,v50
	vTemp.u8[15] = ctx.v44.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v44.u16[7];
	vTemp.u8[7] = ctx.v50.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[7];
	vTemp.u8[14] = ctx.v44.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v44.u16[6];
	vTemp.u8[6] = ctx.v50.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[6];
	vTemp.u8[13] = ctx.v44.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v44.u16[5];
	vTemp.u8[5] = ctx.v50.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[5];
	vTemp.u8[12] = ctx.v44.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v44.u16[4];
	vTemp.u8[4] = ctx.v50.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[4];
	vTemp.u8[11] = ctx.v44.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v44.u16[3];
	vTemp.u8[3] = ctx.v50.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[3];
	vTemp.u8[10] = ctx.v44.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v44.u16[2];
	vTemp.u8[2] = ctx.v50.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[2];
	vTemp.u8[9] = ctx.v44.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v44.u16[1];
	vTemp.u8[1] = ctx.v50.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[1];
	vTemp.u8[8] = ctx.v44.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v44.u16[0];
	vTemp.u8[0] = ctx.v50.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[0];
	ctx.v41 = vTemp;
	// vsubsws v26,v11,v5
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v5.s32[0]);
	v26.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v5.s32[1]);
	v26.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v5.s32[2]);
	v26.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v5.s32[3]);
	v26.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vpkuhus128 v38,v42,v50
	vTemp.u8[15] = ctx.v42.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v42.u16[7];
	vTemp.u8[7] = ctx.v50.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[7];
	vTemp.u8[14] = ctx.v42.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v42.u16[6];
	vTemp.u8[6] = ctx.v50.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[6];
	vTemp.u8[13] = ctx.v42.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v42.u16[5];
	vTemp.u8[5] = ctx.v50.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[5];
	vTemp.u8[12] = ctx.v42.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v42.u16[4];
	vTemp.u8[4] = ctx.v50.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[4];
	vTemp.u8[11] = ctx.v42.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v42.u16[3];
	vTemp.u8[3] = ctx.v50.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[3];
	vTemp.u8[10] = ctx.v42.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v42.u16[2];
	vTemp.u8[2] = ctx.v50.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[2];
	vTemp.u8[9] = ctx.v42.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v42.u16[1];
	vTemp.u8[1] = ctx.v50.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[1];
	vTemp.u8[8] = ctx.v42.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v42.u16[0];
	vTemp.u8[0] = ctx.v50.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[0];
	ctx.v38 = vTemp;
	// vsubsws v25,v13,v2
	temp.s64 = int64_t(ctx.v13.s32[0]) - int64_t(ctx.v2.s32[0]);
	v25.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[1]) - int64_t(ctx.v2.s32[1]);
	v25.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[2]) - int64_t(ctx.v2.s32[2]);
	v25.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[3]) - int64_t(ctx.v2.s32[3]);
	v25.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v35,v27,v40
	ctx.v35.s32[0] = v27.s32[0] >> (ctx.v40.u8[0] & 0x1F);
	ctx.v35.s32[1] = v27.s32[1] >> (ctx.v40.u8[4] & 0x1F);
	ctx.v35.s32[2] = v27.s32[2] >> (ctx.v40.u8[8] & 0x1F);
	ctx.v35.s32[3] = v27.s32[3] >> (ctx.v40.u8[12] & 0x1F);
	// vpkuhus128 v36,v39,v50
	vTemp.u8[15] = ctx.v39.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v39.u16[7];
	vTemp.u8[7] = ctx.v50.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[7];
	vTemp.u8[14] = ctx.v39.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v39.u16[6];
	vTemp.u8[6] = ctx.v50.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[6];
	vTemp.u8[13] = ctx.v39.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v39.u16[5];
	vTemp.u8[5] = ctx.v50.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[5];
	vTemp.u8[12] = ctx.v39.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v39.u16[4];
	vTemp.u8[4] = ctx.v50.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[4];
	vTemp.u8[11] = ctx.v39.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v39.u16[3];
	vTemp.u8[3] = ctx.v50.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[3];
	vTemp.u8[10] = ctx.v39.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v39.u16[2];
	vTemp.u8[2] = ctx.v50.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[2];
	vTemp.u8[9] = ctx.v39.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v39.u16[1];
	vTemp.u8[1] = ctx.v50.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[1];
	vTemp.u8[8] = ctx.v39.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v39.u16[0];
	vTemp.u8[0] = ctx.v50.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[0];
	ctx.v36 = vTemp;
	// vsubsws v24,v31,v30
	temp.s64 = int64_t(v31.s32[0]) - int64_t(v30.s32[0]);
	v24.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v31.s32[1]) - int64_t(v30.s32[1]);
	v24.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v31.s32[2]) - int64_t(v30.s32[2]);
	v24.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v31.s32[3]) - int64_t(v30.s32[3]);
	v24.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v34,v26,v40
	ctx.v34.s32[0] = v26.s32[0] >> (ctx.v40.u8[0] & 0x1F);
	ctx.v34.s32[1] = v26.s32[1] >> (ctx.v40.u8[4] & 0x1F);
	ctx.v34.s32[2] = v26.s32[2] >> (ctx.v40.u8[8] & 0x1F);
	ctx.v34.s32[3] = v26.s32[3] >> (ctx.v40.u8[12] & 0x1F);
	// vsraw128 v33,v25,v40
	ctx.v33.s32[0] = v25.s32[0] >> (ctx.v40.u8[0] & 0x1F);
	ctx.v33.s32[1] = v25.s32[1] >> (ctx.v40.u8[4] & 0x1F);
	ctx.v33.s32[2] = v25.s32[2] >> (ctx.v40.u8[8] & 0x1F);
	ctx.v33.s32[3] = v25.s32[3] >> (ctx.v40.u8[12] & 0x1F);
	// vpkswus128 v63,v35,v37
	simde_mm_store_si128((simde__m128i*)ctx.v63.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.s32), simde_mm_load_si128((simde__m128i*)ctx.v35.s32)));
	// stvlx128 v41,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v41.u8[15 - i]);
	// vsubsws v23,v1,v3
	temp.s64 = int64_t(ctx.v1.s32[0]) - int64_t(ctx.v3.s32[0]);
	v23.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[1]) - int64_t(ctx.v3.s32[1]);
	v23.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[2]) - int64_t(ctx.v3.s32[2]);
	v23.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[3]) - int64_t(ctx.v3.s32[3]);
	v23.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// stvlx128 v38,r3,r4
	ea = ctx.r3.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v38.u8[15 - i]);
	// vsraw128 v32,v24,v40
	ctx.v32.s32[0] = v24.s32[0] >> (ctx.v40.u8[0] & 0x1F);
	ctx.v32.s32[1] = v24.s32[1] >> (ctx.v40.u8[4] & 0x1F);
	ctx.v32.s32[2] = v24.s32[2] >> (ctx.v40.u8[8] & 0x1F);
	ctx.v32.s32[3] = v24.s32[3] >> (ctx.v40.u8[12] & 0x1F);
	// stvlx128 v36,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vpkuhus128 v60,v63,v50
	vTemp.u8[15] = ctx.v63.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v63.u16[7];
	vTemp.u8[7] = ctx.v50.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[7];
	vTemp.u8[14] = ctx.v63.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v63.u16[6];
	vTemp.u8[6] = ctx.v50.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[6];
	vTemp.u8[13] = ctx.v63.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v63.u16[5];
	vTemp.u8[5] = ctx.v50.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[5];
	vTemp.u8[12] = ctx.v63.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v63.u16[4];
	vTemp.u8[4] = ctx.v50.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[4];
	vTemp.u8[11] = ctx.v63.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v63.u16[3];
	vTemp.u8[3] = ctx.v50.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[3];
	vTemp.u8[10] = ctx.v63.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v63.u16[2];
	vTemp.u8[2] = ctx.v50.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[2];
	vTemp.u8[9] = ctx.v63.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v63.u16[1];
	vTemp.u8[1] = ctx.v50.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[1];
	vTemp.u8[8] = ctx.v63.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v63.u16[0];
	vTemp.u8[0] = ctx.v50.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[0];
	ctx.v60 = vTemp;
	// vsubsws v22,v9,v7
	temp.s64 = int64_t(ctx.v9.s32[0]) - int64_t(ctx.v7.s32[0]);
	v22.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[1]) - int64_t(ctx.v7.s32[1]);
	v22.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[2]) - int64_t(ctx.v7.s32[2]);
	v22.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[3]) - int64_t(ctx.v7.s32[3]);
	v22.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vpkswus128 v61,v33,v34
	simde_mm_store_si128((simde__m128i*)ctx.v61.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.s32), simde_mm_load_si128((simde__m128i*)ctx.v33.s32)));
	// vsraw128 v62,v23,v40
	ctx.v62.s32[0] = v23.s32[0] >> (ctx.v40.u8[0] & 0x1F);
	ctx.v62.s32[1] = v23.s32[1] >> (ctx.v40.u8[4] & 0x1F);
	ctx.v62.s32[2] = v23.s32[2] >> (ctx.v40.u8[8] & 0x1F);
	ctx.v62.s32[3] = v23.s32[3] >> (ctx.v40.u8[12] & 0x1F);
	// vsubsws v21,v0,v8
	temp.s64 = int64_t(ctx.v0.s32[0]) - int64_t(ctx.v8.s32[0]);
	v21.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[1]) - int64_t(ctx.v8.s32[1]);
	v21.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[2]) - int64_t(ctx.v8.s32[2]);
	v21.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[3]) - int64_t(ctx.v8.s32[3]);
	v21.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v20,v10,v6
	temp.s64 = int64_t(ctx.v10.s32[0]) - int64_t(ctx.v6.s32[0]);
	v20.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[1]) - int64_t(ctx.v6.s32[1]);
	v20.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[2]) - int64_t(ctx.v6.s32[2]);
	v20.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[3]) - int64_t(ctx.v6.s32[3]);
	v20.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v19,v12,v4
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v4.s32[0]);
	v19.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v4.s32[1]);
	v19.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v4.s32[2]);
	v19.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v4.s32[3]);
	v19.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vpkuhus128 v57,v61,v50
	vTemp.u8[15] = ctx.v61.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v61.u16[7];
	vTemp.u8[7] = ctx.v50.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[7];
	vTemp.u8[14] = ctx.v61.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v61.u16[6];
	vTemp.u8[6] = ctx.v50.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[6];
	vTemp.u8[13] = ctx.v61.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v61.u16[5];
	vTemp.u8[5] = ctx.v50.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[5];
	vTemp.u8[12] = ctx.v61.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v61.u16[4];
	vTemp.u8[4] = ctx.v50.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[4];
	vTemp.u8[11] = ctx.v61.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v61.u16[3];
	vTemp.u8[3] = ctx.v50.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[3];
	vTemp.u8[10] = ctx.v61.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v61.u16[2];
	vTemp.u8[2] = ctx.v50.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[2];
	vTemp.u8[9] = ctx.v61.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v61.u16[1];
	vTemp.u8[1] = ctx.v50.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[1];
	vTemp.u8[8] = ctx.v61.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v61.u16[0];
	vTemp.u8[0] = ctx.v50.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[0];
	ctx.v57 = vTemp;
	// vsraw128 v58,v22,v40
	ctx.v58.s32[0] = v22.s32[0] >> (ctx.v40.u8[0] & 0x1F);
	ctx.v58.s32[1] = v22.s32[1] >> (ctx.v40.u8[4] & 0x1F);
	ctx.v58.s32[2] = v22.s32[2] >> (ctx.v40.u8[8] & 0x1F);
	ctx.v58.s32[3] = v22.s32[3] >> (ctx.v40.u8[12] & 0x1F);
	// vpkswus128 v59,v62,v32
	simde_mm_store_si128((simde__m128i*)ctx.v59.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.s32), simde_mm_load_si128((simde__m128i*)ctx.v62.s32)));
	// vsraw128 v56,v21,v40
	ctx.v56.s32[0] = v21.s32[0] >> (ctx.v40.u8[0] & 0x1F);
	ctx.v56.s32[1] = v21.s32[1] >> (ctx.v40.u8[4] & 0x1F);
	ctx.v56.s32[2] = v21.s32[2] >> (ctx.v40.u8[8] & 0x1F);
	ctx.v56.s32[3] = v21.s32[3] >> (ctx.v40.u8[12] & 0x1F);
	// stvlx128 v60,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vsraw128 v55,v20,v40
	ctx.v55.s32[0] = v20.s32[0] >> (ctx.v40.u8[0] & 0x1F);
	ctx.v55.s32[1] = v20.s32[1] >> (ctx.v40.u8[4] & 0x1F);
	ctx.v55.s32[2] = v20.s32[2] >> (ctx.v40.u8[8] & 0x1F);
	ctx.v55.s32[3] = v20.s32[3] >> (ctx.v40.u8[12] & 0x1F);
	// vsraw128 v54,v19,v40
	ctx.v54.s32[0] = v19.s32[0] >> (ctx.v40.u8[0] & 0x1F);
	ctx.v54.s32[1] = v19.s32[1] >> (ctx.v40.u8[4] & 0x1F);
	ctx.v54.s32[2] = v19.s32[2] >> (ctx.v40.u8[8] & 0x1F);
	ctx.v54.s32[3] = v19.s32[3] >> (ctx.v40.u8[12] & 0x1F);
	// vpkuhus128 v53,v59,v50
	vTemp.u8[15] = ctx.v59.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v59.u16[7];
	vTemp.u8[7] = ctx.v50.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[7];
	vTemp.u8[14] = ctx.v59.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v59.u16[6];
	vTemp.u8[6] = ctx.v50.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[6];
	vTemp.u8[13] = ctx.v59.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v59.u16[5];
	vTemp.u8[5] = ctx.v50.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[5];
	vTemp.u8[12] = ctx.v59.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v59.u16[4];
	vTemp.u8[4] = ctx.v50.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[4];
	vTemp.u8[11] = ctx.v59.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v59.u16[3];
	vTemp.u8[3] = ctx.v50.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[3];
	vTemp.u8[10] = ctx.v59.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v59.u16[2];
	vTemp.u8[2] = ctx.v50.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[2];
	vTemp.u8[9] = ctx.v59.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v59.u16[1];
	vTemp.u8[1] = ctx.v50.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[1];
	vTemp.u8[8] = ctx.v59.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v59.u16[0];
	vTemp.u8[0] = ctx.v50.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[0];
	ctx.v53 = vTemp;
	// vpkswus128 v52,v56,v58
	simde_mm_store_si128((simde__m128i*)ctx.v52.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.s32), simde_mm_load_si128((simde__m128i*)ctx.v56.s32)));
	// stvlx128 v57,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vpkswus128 v51,v54,v55
	simde_mm_store_si128((simde__m128i*)ctx.v51.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.s32), simde_mm_load_si128((simde__m128i*)ctx.v54.s32)));
	// vpkuhus128 v49,v52,v50
	vTemp.u8[15] = ctx.v52.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[7];
	vTemp.u8[7] = ctx.v50.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[7];
	vTemp.u8[14] = ctx.v52.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[6];
	vTemp.u8[6] = ctx.v50.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[6];
	vTemp.u8[13] = ctx.v52.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[5];
	vTemp.u8[5] = ctx.v50.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[5];
	vTemp.u8[12] = ctx.v52.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[4];
	vTemp.u8[4] = ctx.v50.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[4];
	vTemp.u8[11] = ctx.v52.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[3];
	vTemp.u8[3] = ctx.v50.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[3];
	vTemp.u8[10] = ctx.v52.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[2];
	vTemp.u8[2] = ctx.v50.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[2];
	vTemp.u8[9] = ctx.v52.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[1];
	vTemp.u8[1] = ctx.v50.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[1];
	vTemp.u8[8] = ctx.v52.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[0];
	vTemp.u8[0] = ctx.v50.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[0];
	ctx.v49 = vTemp;
	// stvlx128 v53,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vpkuhus128 v48,v51,v50
	vTemp.u8[15] = ctx.v51.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v51.u16[7];
	vTemp.u8[7] = ctx.v50.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[7];
	vTemp.u8[14] = ctx.v51.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v51.u16[6];
	vTemp.u8[6] = ctx.v50.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[6];
	vTemp.u8[13] = ctx.v51.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v51.u16[5];
	vTemp.u8[5] = ctx.v50.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[5];
	vTemp.u8[12] = ctx.v51.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v51.u16[4];
	vTemp.u8[4] = ctx.v50.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[4];
	vTemp.u8[11] = ctx.v51.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v51.u16[3];
	vTemp.u8[3] = ctx.v50.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[3];
	vTemp.u8[10] = ctx.v51.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v51.u16[2];
	vTemp.u8[2] = ctx.v50.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[2];
	vTemp.u8[9] = ctx.v51.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v51.u16[1];
	vTemp.u8[1] = ctx.v50.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[1];
	vTemp.u8[8] = ctx.v51.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v51.u16[0];
	vTemp.u8[0] = ctx.v50.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v50.u16[0];
	ctx.v48 = vTemp;
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stvlx128 v49,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v49.u8[15 - i]);
	// stvlx128 v48,r3,r5
	ea = ctx.r3.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

