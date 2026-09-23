#include "hydrothunder_funcs.117.h"

DEFINE_REX_FUNC(sub_821263D8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821265f8
	ctx.lr = 0x82126404;
	sub_821265F8(ctx, base);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821265f8
	ctx.lr = 0x82126414;
	sub_821265F8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821265f8
	ctx.lr = 0x82126424;
	sub_821265F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f9,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// fneg f0,f9
	ctx.f0.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// fmuls f7,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// stfs f10,60(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f8,24(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f7,40(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f0,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f6,f0,f12
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f9,f10,f9
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f5,f10,f13
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f4,f0,f13
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fmuls f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fmsubs f0,f8,f13,f7
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, -ctx.f7.f64)));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// fmadds f0,f9,f13,f6
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f6.f64)));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// fmadds f0,f8,f12,f5
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f5.f64)));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// fmsubs f0,f9,f12,f4
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, -ctx.f4.f64)));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
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

DEFINE_REX_FUNC(sub_821310D8) {
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
	// mulli r10,r4,436
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(436));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lbz r10,272(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 272);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82131144
	if (!ctx.cr0.eq) goto loc_82131144;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 704);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctiw f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiw f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// sth r10,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// bl 0x823ed4a0
	ctx.lr = 0x82131144;
	sub_823ED4A0(ctx, base);
loc_82131144:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82135630) {
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
	// addi r6,r6,-27184
	ctx.r6.s64 = ctx.r6.s64 + -27184;
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
	// addi r7,r7,-27200
	ctx.r7.s64 = ctx.r7.s64 + -27200;
	// addi r11,r11,-27168
	ctx.r11.s64 = ctx.r11.s64 + -27168;
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
	// vspltw128 v63,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vmsum4fp128 v62,v59,v62
	simde_mm_store_ps(ctx.v62.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// vspltw128 v58,v59,3
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x0));
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

DEFINE_REX_FUNC(sub_82147BA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82147BA8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r30,r11,4
	r30.s64 = ctx.r11.s64 + 4;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r29,4(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x822f6280
	ctx.lr = 0x82147BC8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82147c24
	if (ctx.cr0.eq) goto loc_82147C24;
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// beq 0x82147be4
	if (ctx.cr0.eq) goto loc_82147BE4;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
loc_82147BE4:
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
	// bge cr6,0x82147c08
	if (!ctx.cr6.lt) goto loc_82147C08;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26228
	ctx.r3.s64 = ctx.r11.s64 + -26228;
	// bl 0x822f6020
	ctx.lr = 0x82147C08;
	sub_822F6020(ctx, base);
loc_82147C08:
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
loc_82147C24:
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
	ctx.lr = 0x82147C40;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_8214BD30) {
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
	ctx.lr = 0x8214BD38;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214bf2c
	if (ctx.cr6.eq) goto loc_8214BF2C;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r5,32
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 32, ctx.xer);
	// slw r11,r11,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r5.u8 & 0x3F));
	// addi r20,r11,-1
	r20.s64 = ctx.r11.s64 + -1;
	// blt cr6,0x8214bd84
	if (ctx.cr6.lt) goto loc_8214BD84;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-13192
	ctx.r4.s64 = ctx.r11.s64 + -13192;
	// addi r3,r10,-13120
	ctx.r3.s64 = ctx.r10.s64 + -13120;
	// li r5,21
	ctx.r5.s64 = 21;
	// bl 0x821231d0
	ctx.lr = 0x8214BD84;
	sub_821231D0(ctx, base);
loc_8214BD84:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x8214bdf4
	if (!ctx.cr6.gt) goto loc_8214BDF4;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mtctr r23
	ctx.ctr.u64 = r23.u64;
	// addi r10,r22,8
	ctx.r10.s64 = r22.s64 + 8;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
loc_8214BDA4:
	// lfs f13,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8214bdb8
	if (!ctx.cr6.lt) goto loc_8214BDB8;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8214BDB8:
	// lfs f13,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// li r8,2
	ctx.r8.s64 = 2;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8214bdcc
	if (!ctx.cr6.lt) goto loc_8214BDCC;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8214BDCC:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r11,4
	ctx.r11.s64 = 4;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8214bde0
	if (!ctx.cr6.lt) goto loc_8214BDE0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8214BDE0:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8214bda4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8214BDA4;
loc_8214BDF4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8214bf38
	ctx.lr = 0x8214BE0C;
	sub_8214BF38(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r24,r11,1136
	r24.s64 = ctx.r11.s64 + 1136;
loc_8214BE14:
	// bl 0x8214c038
	ctx.lr = 0x8214BE18;
	sub_8214C038(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8214bfd8
	ctx.lr = 0x8214BE28;
	sub_8214BFD8(ctx, base);
	// lwz r26,80(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r28,0
	r28.s64 = 0;
	// lwz r25,84(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r29,1
	r29.s64 = 1;
	// mr r30,r22
	r30.u64 = r22.u64;
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
loc_8214BE40:
	// cmpw cr6,r28,r23
	ctx.cr6.compare<int32_t>(r28.s32, r23.s32, ctx.xer);
	// bge cr6,0x8214be98
	if (!ctx.cr6.lt) goto loc_8214BE98;
	// and. r11,r25,r29
	ctx.r11.u64 = r25.u64 & r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8214be80
	if (!ctx.cr0.eq) goto loc_8214BE80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r26,16
	ctx.r4.s64 = r26.s64 + 16;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8214b208
	ctx.lr = 0x8214BE64;
	sub_8214B208(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8214be7c
	if (ctx.cr6.eq) goto loc_8214BE7C;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8214be80
	if (!ctx.cr6.eq) goto loc_8214BE80;
	// or r25,r25,r29
	r25.u64 = r25.u64 | r29.u64;
	// b 0x8214be80
	goto loc_8214BE80;
loc_8214BE7C:
	// li r27,1
	r27.s64 = 1;
loc_8214BE80:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// rlwinm r29,r29,1,0,30
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// beq 0x8214be40
	if (ctx.cr0.eq) goto loc_8214BE40;
loc_8214BE98:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8214bf20
	if (!ctx.cr0.eq) goto loc_8214BF20;
	// cmpw cr6,r25,r20
	ctx.cr6.compare<int32_t>(r25.s32, r20.s32, ctx.xer);
	// beq cr6,0x8214bee0
	if (ctx.cr6.eq) goto loc_8214BEE0;
	// lwz r11,40(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214bee0
	if (ctx.cr6.eq) goto loc_8214BEE0;
	// lwz r11,36(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 36);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8214bf38
	ctx.lr = 0x8214BEC8;
	sub_8214BF38(ctx, base);
	// lwz r11,40(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 40);
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8214bf38
	ctx.lr = 0x8214BEDC;
	sub_8214BF38(ctx, base);
	// b 0x8214bf20
	goto loc_8214BF20;
loc_8214BEE0:
	// lwz r11,40(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214bf08
	if (ctx.cr6.eq) goto loc_8214BF08;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r3,36(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 36);
	// bl 0x8214c0a0
	ctx.lr = 0x8214BEF8;
	sub_8214C0A0(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r3,40(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 40);
	// bl 0x8214c0a0
	ctx.lr = 0x8214BF04;
	sub_8214C0A0(ctx, base);
	// b 0x8214bf20
	goto loc_8214BF20;
loc_8214BF08:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214BF20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214BF20:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8214be14
	if (!ctx.cr6.eq) goto loc_8214BE14;
loc_8214BF2C:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_8215AB18) {
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
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// addi r8,r11,16164
	ctx.r8.s64 = ctx.r11.s64 + 16164;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// bge cr6,0x8215ab58
	if (!ctx.cr6.lt) goto loc_8215AB58;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8215ab94
	goto loc_8215AB94;
loc_8215AB58:
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8215AB64:
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// stbx r10,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8215ab64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215AB64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_8215AB94:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8215aba4
	if (!ctx.cr0.eq) goto loc_8215ABA4;
loc_8215AB9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215ac20
	goto loc_8215AC20;
loc_8215ABA4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x8215abb8
	if (!ctx.cr6.lt) goto loc_8215ABB8;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8215abf4
	goto loc_8215ABF4;
loc_8215ABB8:
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8215ABCC:
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// stbu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8215abcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215ABCC;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_8215ABF4:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215ab9c
	if (ctx.cr0.eq) goto loc_8215AB9C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215ad60
	ctx.lr = 0x8215AC04;
	sub_8215AD60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215ab9c
	if (ctx.cr0.eq) goto loc_8215AB9C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_8215AC20:
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

DEFINE_REX_FUNC(sub_821613D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821613E0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8216141c
	if (!ctx.cr6.gt) goto loc_8216141C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,19344
	ctx.r4.s64 = ctx.r11.s64 + 19344;
	// addi r3,r10,19416
	ctx.r3.s64 = ctx.r10.s64 + 19416;
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x821231d0
	ctx.lr = 0x8216141C;
	sub_821231D0(ctx, base);
loc_8216141C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82161434;
	sub_826A1E70(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821675C8) {
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
	ctx.lr = 0x821675D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lbz r28,3(r4)
	r28.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,23064
	ctx.r4.s64 = ctx.r11.s64 + 23064;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f670
	ctx.lr = 0x821675EC;
	sub_8215F670(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821675F4;
	sub_8215F0F0(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// stw r28,8(r27)
	REX_STORE_U32(r27.u32 + 8, r28.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r29,0(r27)
	REX_STORE_U32(r27.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,23072
	ctx.r4.s64 = ctx.r11.s64 + 23072;
	// lbz r28,2(r30)
	r28.u64 = REX_LOAD_U8(r30.u32 + 2);
	// bl 0x8215f670
	ctx.lr = 0x82167614;
	sub_8215F670(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8216761C;
	sub_8215F0F0(ctx, base);
	// stw r28,8(r27)
	REX_STORE_U32(r27.u32 + 8, r28.u32);
	// stw r29,0(r27)
	REX_STORE_U32(r27.u32 + 0, r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,23076
	ctx.r4.s64 = ctx.r11.s64 + 23076;
	// lbz r28,1(r30)
	r28.u64 = REX_LOAD_U8(r30.u32 + 1);
	// bl 0x8215f670
	ctx.lr = 0x82167638;
	sub_8215F670(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82167640;
	sub_8215F0F0(ctx, base);
	// stw r28,8(r27)
	REX_STORE_U32(r27.u32 + 8, r28.u32);
	// stw r29,0(r27)
	REX_STORE_U32(r27.u32 + 0, r29.u32);
	// lbz r30,0(r30)
	r30.u64 = REX_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r30,255
	ctx.cr6.compare<uint32_t>(r30.u32, 255, ctx.xer);
	// beq cr6,0x82167674
	if (ctx.cr6.eq) goto loc_82167674;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,23080
	ctx.r4.s64 = ctx.r11.s64 + 23080;
	// bl 0x8215f670
	ctx.lr = 0x82167664;
	sub_8215F670(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8216766C;
	sub_8215F0F0(ctx, base);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
loc_82167674:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8216BC98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8216BCA0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,1028(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1028);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8216bcd4
	goto loc_8216BCD4;
loc_8216BCBC:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8216bce8
	ctx.lr = 0x8216BCCC;
	sub_8216BCE8(ctx, base);
	// lwz r11,1028(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1028);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8216BCD4:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8216bcbc
	if (!ctx.cr6.eq) goto loc_8216BCBC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8216F9B8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x8216F9EC;
	sub_8269D1D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x8216F9F8;
	sub_8269D1B8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82171348) {
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
	ctx.lr = 0x82171350;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,6116(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217146c
	if (ctx.cr6.eq) goto loc_8217146C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82171378;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8217146c
	if (ctx.cr0.eq) goto loc_8217146C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82171394;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,18800
	ctx.r4.s64 = ctx.r11.s64 + 18800;
	// bl 0x82125d00
	ctx.lr = 0x821713A0;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8217146c
	if (!ctx.cr0.eq) goto loc_8217146C;
	// lis r27,-32106
	r27.s64 = -2104098816;
	// lwz r4,56(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 56);
	// lwz r3,6044(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6044);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821713C4;
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
	ctx.lr = 0x821713D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r5,48(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,26800
	ctx.r4.s64 = ctx.r11.s64 + 26800;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821713F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 44);
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82171454
	if (ctx.cr6.eq) goto loc_82171454;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-16844
	r28.s64 = ctx.r11.s64 + -16844;
loc_82171410:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82171428
	if (ctx.cr6.lt) goto loc_82171428;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82171428:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82171444;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 44);
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82171410
	if (!ctx.cr6.eq) goto loc_82171410;
loc_82171454:
	// lwz r3,6044(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6044);
	// lwz r4,56(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217146C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8217146C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8217A7E8) {
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
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r10,r10,29032
	ctx.r10.s64 = ctx.r10.s64 + 29032;
	// addi r30,r11,-20
	r30.s64 = ctx.r11.s64 + -20;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,52(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// beq cr6,0x8217a824
	if (ctx.cr6.eq) goto loc_8217A824;
	// bl 0x8269d6a0
	ctx.lr = 0x8217A824;
	sub_8269D6A0(ctx, base);
loc_8217A824:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// beq cr6,0x8217a834
	if (ctx.cr6.eq) goto loc_8217A834;
	// bl 0x8269d6a0
	ctx.lr = 0x8217A834;
	sub_8269D6A0(ctx, base);
loc_8217A834:
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// beq cr6,0x8217a844
	if (ctx.cr6.eq) goto loc_8217A844;
	// bl 0x8269d6a0
	ctx.lr = 0x8217A844;
	sub_8269D6A0(ctx, base);
loc_8217A844:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8217ab08
	ctx.lr = 0x8217A84C;
	sub_8217AB08(ctx, base);
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

DEFINE_REX_FUNC(sub_8217D270) {
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
	ctx.lr = 0x8217D278;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,1(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// li r29,0
	r29.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r29,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r29.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// addi r28,r3,1
	r28.s64 = ctx.r3.s64 + 1;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217d3fc
	if (ctx.cr0.eq) goto loc_8217D3FC;
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// bne cr6,0x8217d3fc
	if (!ctx.cr6.eq) goto loc_8217D3FC;
	// lbz r11,2(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217d3fc
	if (ctx.cr0.eq) goto loc_8217D3FC;
	// mr r31,r29
	r31.u64 = r29.u64;
	// li r30,1
	r30.s64 = 1;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// bne cr6,0x8217d36c
	if (!ctx.cr6.eq) goto loc_8217D36C;
	// lbz r11,3(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 3);
	// addi r3,r27,3
	ctx.r3.s64 = r27.s64 + 3;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8217d2e4
	if (!ctx.cr0.eq) goto loc_8217D2E4;
loc_8217D2DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8217d440
	goto loc_8217D440;
loc_8217D2E4:
	// li r4,59
	ctx.r4.s64 = 59;
	// bl 0x8269cce0
	ctx.lr = 0x8217D2EC;
	sub_8269CCE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217d2dc
	if (ctx.cr0.eq) goto loc_8217D2DC;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217d2dc
	if (ctx.cr0.eq) goto loc_8217D2DC;
	// subf r6,r27,r3
	ctx.r6.u64 = ctx.r3.u64 - r27.u64;
	// b 0x8217d358
	goto loc_8217D358;
loc_8217D308:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x8217d320
	if (ctx.cr6.lt) goto loc_8217D320;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x8217d320
	if (ctx.cr6.gt) goto loc_8217D320;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// b 0x8217d34c
	goto loc_8217D34C;
loc_8217D320:
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x8217d338
	if (ctx.cr6.lt) goto loc_8217D338;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// bgt cr6,0x8217d338
	if (ctx.cr6.gt) goto loc_8217D338;
	// addi r11,r11,-87
	ctx.r11.s64 = ctx.r11.s64 + -87;
	// b 0x8217d34c
	goto loc_8217D34C;
loc_8217D338:
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// blt cr6,0x8217d2dc
	if (ctx.cr6.lt) goto loc_8217D2DC;
	// cmpwi cr6,r11,70
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 70, ctx.xer);
	// bgt cr6,0x8217d2dc
	if (ctx.cr6.gt) goto loc_8217D2DC;
	// addi r11,r11,-55
	ctx.r11.s64 = ctx.r11.s64 + -55;
loc_8217D34C:
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// rlwinm r30,r30,4,0,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
loc_8217D358:
	// lbzu r11,-1(r3)
	ea = -1 + ctx.r3.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// bne cr6,0x8217d308
	if (!ctx.cr6.eq) goto loc_8217D308;
	// b 0x8217d3c8
	goto loc_8217D3C8;
loc_8217D36C:
	// li r4,59
	ctx.r4.s64 = 59;
	// bl 0x8269cce0
	ctx.lr = 0x8217D374;
	sub_8269CCE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217d2dc
	if (ctx.cr0.eq) goto loc_8217D2DC;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217d2dc
	if (ctx.cr0.eq) goto loc_8217D2DC;
	// subf r6,r27,r3
	ctx.r6.u64 = ctx.r3.u64 - r27.u64;
	// lbzu r11,-1(r3)
	ea = -1 + ctx.r3.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x8217d3c0
	goto loc_8217D3C0;
loc_8217D398:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x8217d2dc
	if (ctx.cr6.lt) goto loc_8217D2DC;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x8217d2dc
	if (ctx.cr6.gt) goto loc_8217D2DC;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// lbzu r10,-1(r3)
	ea = -1 + ctx.r3.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// mullw r9,r11,r30
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// add r31,r9,r31
	r31.u64 = ctx.r9.u64 + r31.u64;
	// mulli r30,r30,10
	r30.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(10));
loc_8217D3C0:
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// bne cr6,0x8217d398
	if (!ctx.cr6.eq) goto loc_8217D398;
loc_8217D3C8:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(r24.s32, 1, ctx.xer);
	// bne cr6,0x8217d3e4
	if (!ctx.cr6.eq) goto loc_8217D3E4;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8217cdf0
	ctx.lr = 0x8217D3E0;
	sub_8217CDF0(ctx, base);
	// b 0x8217d3f0
	goto loc_8217D3F0;
loc_8217D3E4:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r31,0(r25)
	REX_STORE_U8(r25.u32 + 0, r31.u8);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_8217D3F0:
	// add r11,r6,r27
	ctx.r11.u64 = ctx.r6.u64 + r27.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// b 0x8217d440
	goto loc_8217D440;
loc_8217D3FC:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r31,r11,-17112
	r31.s64 = ctx.r11.s64 + -17112;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_8217D408:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8269f180
	ctx.lr = 0x8217D418;
	sub_8269F180(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8217d448
	if (ctx.cr0.eq) goto loc_8217D448;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// addi r11,r31,60
	ctx.r11.s64 = r31.s64 + 60;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8217d408
	if (ctx.cr6.lt) goto loc_8217D408;
	// lbz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r11,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r11.u8);
loc_8217D440:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_8217D448:
	// mulli r11,r29,12
	ctx.r11.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(12));
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r8.u32);
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// b 0x8217d440
	goto loc_8217D440;
}

DEFINE_REX_FUNC(sub_8218E2D8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-32236
	ctx.r11.s64 = ctx.r11.s64 + -32236;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821d3be0
	ctx.lr = 0x8218E304;
	sub_821D3BE0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8218e314
	if (ctx.cr0.eq) goto loc_8218E314;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8218E314;
	sub_8269CE98(ctx, base);
loc_8218E314:
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

DEFINE_REX_FUNC(sub_82190030) {
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
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82190058;
	sub_826A1E70(ctx, base);
	// lfs f1,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82139c28
	ctx.lr = 0x82190060;
	sub_82139C28(ctx, base);
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// lfs f1,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82135630
	ctx.lr = 0x82190070;
	sub_82135630(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f13,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// stfs f1,132(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f8,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f12,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// lfs f10,108(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// lfs f0,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f8
	ctx.f13.f64 = ctx.f8.f64;
	// lfs f7,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f9,f8
	ctx.f9.f64 = ctx.f8.f64;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lwz r30,6168(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 6168);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// lfs f0,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// std r10,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// std r11,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r11.u64);
	// lfs f13,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f12,56(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// std r10,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r10.u64);
	// std r11,48(r31)
	REX_STORE_U64(r31.u32 + 48, ctx.r11.u64);
	// std r9,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r9.u64);
	// bl 0x82149f18
	ctx.lr = 0x82190134;
	sub_82149F18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82149e08
	ctx.lr = 0x82190140;
	sub_82149E08(ctx, base);
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

DEFINE_REX_FUNC(sub_82197508) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821975a4
	if (!ctx.cr6.eq) goto loc_821975A4;
	// lwz r4,28(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,72(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82197548
	if (ctx.cr6.eq) goto loc_82197548;
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821975a4
	if (!ctx.cr6.lt) goto loc_821975A4;
loc_82197548:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r11,6180(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6180);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82197d48
	ctx.lr = 0x82197558;
	sub_82197D48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821975a4
	if (ctx.cr0.eq) goto loc_821975A4;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82197588
	if (ctx.cr6.eq) goto loc_82197588;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// b 0x82197590
	goto loc_82197590;
loc_82197588:
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_82197590:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// b 0x821975a8
	goto loc_821975A8;
loc_821975A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821975A8:
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

DEFINE_REX_FUNC(sub_8219D708) {
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
	ctx.lr = 0x8219D728;
	sub_821911F8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-29652
	ctx.r11.s64 = ctx.r11.s64 + -29652;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// stb r11,40(r31)
	REX_STORE_U8(r31.u32 + 40, ctx.r11.u8);
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1);
	// stb r11,41(r31)
	REX_STORE_U8(r31.u32 + 41, ctx.r11.u8);
	// lbz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 2);
	// stb r11,42(r31)
	REX_STORE_U8(r31.u32 + 42, ctx.r11.u8);
	// lbz r11,3(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 3);
	// stb r11,43(r31)
	REX_STORE_U8(r31.u32 + 43, ctx.r11.u8);
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// stb r11,44(r31)
	REX_STORE_U8(r31.u32 + 44, ctx.r11.u8);
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1);
	// stb r11,45(r31)
	REX_STORE_U8(r31.u32 + 45, ctx.r11.u8);
	// lbz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 2);
	// stb r11,46(r31)
	REX_STORE_U8(r31.u32 + 46, ctx.r11.u8);
	// lbz r11,3(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 3);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// stb r11,47(r31)
	REX_STORE_U8(r31.u32 + 47, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_821A0CF0) {
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
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x822f6280
	ctx.lr = 0x821A0D04;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a0d14
	if (ctx.cr0.eq) goto loc_821A0D14;
	// bl 0x821a0d40
	ctx.lr = 0x821A0D10;
	sub_821A0D40(ctx, base);
	// b 0x821a0d18
	goto loc_821A0D18;
loc_821A0D14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A0D18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A29E0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821a29fc
	if (!ctx.cr6.eq) goto loc_821A29FC;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_821A29FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A3910) {
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
	// lwz r3,-20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + -20);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A3940;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x821a3950
	if (!ctx.cr0.eq) goto loc_821A3950;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x821a397c
	goto loc_821A397C;
loc_821A3950:
	// lwz r3,-20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A3964;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821a397c
	if (!ctx.cr6.eq) goto loc_821A397C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821a397c
	if (ctx.cr6.lt) goto loc_821A397C;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
loc_821A397C:
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

DEFINE_REX_FUNC(sub_821A6A40) {
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
	// lwz r3,96(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a6a6c
	if (ctx.cr6.eq) goto loc_821A6A6C;
	// bl 0x821357c8
	ctx.lr = 0x821A6A64;
	sub_821357C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
loc_821A6A6C:
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

DEFINE_REX_FUNC(sub_821A7528) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// b 0x8215f0f0
	sub_8215F0F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A76C0) {
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
	// lwz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r3,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// bl 0x822f6338
	ctx.lr = 0x821A76E8;
	sub_822F6338(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,100(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 100);
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x821613d8
	ctx.lr = 0x821A7700;
	sub_821613D8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

DEFINE_REX_FUNC(sub_821A95E8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-24684
	ctx.r11.s64 = ctx.r11.s64 + -24684;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821aa810
	ctx.lr = 0x821A9614;
	sub_821AA810(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 132);
	// bl 0x8269d1b8
	ctx.lr = 0x821A961C;
	sub_8269D1B8(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 120);
	// bl 0x8269d1b8
	ctx.lr = 0x821A9624;
	sub_8269D1B8(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 108);
	// bl 0x8269d1b8
	ctx.lr = 0x821A962C;
	sub_8269D1B8(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// bl 0x8269d1b8
	ctx.lr = 0x821A9634;
	sub_8269D1B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125e40
	ctx.lr = 0x821A963C;
	sub_82125E40(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a964c
	if (ctx.cr0.eq) goto loc_821A964C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821A964C;
	sub_8269CE98(ctx, base);
loc_821A964C:
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

DEFINE_REX_FUNC(sub_821AD738) {
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
	ctx.lr = 0x821AD740;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r30,24(r3)
	r30.u64 = REX_LOAD_U8(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 48);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821ad774
	if (!ctx.cr6.eq) goto loc_821AD774;
	// lfs f0,44(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x821ad7cc
	if (ctx.cr6.eq) goto loc_821AD7CC;
loc_821AD774:
	// li r4,4
	ctx.r4.s64 = 4;
	// lfs f31,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	f31.f64 = double(temp.f32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8217f4b0
	ctx.lr = 0x821AD784;
	sub_8217F4B0(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r10,87(r1)
	REX_STORE_U32(ctx.r1.u32 + 87, ctx.r10.u32);
	// lbz r10,86(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 86);
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwimi r10,r11,7,24,24
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF7F);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r10,86(r1)
	REX_STORE_U8(ctx.r1.u32 + 86, ctx.r10.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8217fb30
	ctx.lr = 0x821AD7BC;
	sub_8217FB30(ctx, base);
	// lbz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 24);
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// stb r11,48(r31)
	REX_STORE_U8(r31.u32 + 48, ctx.r11.u8);
loc_821AD7CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821B3688) {
	REX_FUNC_PROLOGUE();
	// b 0x821b3d10
	sub_821B3D10(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821B39F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821B39F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32106
	r31.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,6152(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B3A1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r28,0
	r28.s64 = 0;
	// beq 0x821b3a44
	if (ctx.cr0.eq) goto loc_821B3A44;
	// lwz r3,6152(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B3A3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b3a48
	if (ctx.cr0.eq) goto loc_821B3A48;
loc_821B3A44:
	// stb r28,193(r29)
	REX_STORE_U8(r29.u32 + 193, r28.u8);
loc_821B3A48:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,0(r30)
	REX_STORE_U32(r30.u32 + 0, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821B61B0) {
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
	// bl 0x821ba6d0
	ctx.lr = 0x821B61C8;
	sub_821BA6D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821b61e8
	ctx.lr = 0x821B61D0;
	sub_821B61E8(ctx, base);
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

DEFINE_REX_FUNC(sub_821B6FE0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,152(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B70B8) {
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
	// li r3,172
	ctx.r3.s64 = 172;
	// bl 0x822f6280
	ctx.lr = 0x821B70CC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b70dc
	if (ctx.cr0.eq) goto loc_821B70DC;
	// bl 0x821b8048
	ctx.lr = 0x821B70D8;
	sub_821B8048(ctx, base);
	// b 0x821b70e0
	goto loc_821B70E0;
loc_821B70DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B70E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B92D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821B92E0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821B92F8;
	sub_8269CE98(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x821B9300;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b9324
	if (ctx.cr0.eq) goto loc_821B9324;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// std r29,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, r29.u64);
	// addi r10,r10,-13900
	ctx.r10.s64 = ctx.r10.s64 + -13900;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821b9328
	goto loc_821B9328;
loc_821B9324:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B9328:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// stb r10,33(r31)
	REX_STORE_U8(r31.u32 + 33, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821BC450) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821BC458;
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
	// addi r4,r11,23076
	ctx.r4.s64 = ctx.r11.s64 + 23076;
	// bl 0x821bc818
	ctx.lr = 0x821BC474;
	sub_821BC818(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,23080
	ctx.r4.s64 = ctx.r11.s64 + 23080;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bc818
	ctx.lr = 0x821BC488;
	sub_821BC818(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// subfc r10,r29,r3
	ctx.xer.ca = ctx.r3.u32 >= r29.u32;
	ctx.r10.u64 = ctx.r3.u64 - r29.u64;
	// eqv r9,r29,r3
	ctx.r9.u64 = ~(r29.u64 ^ ctx.r3.u64);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821BF178) {
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
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x821BF1A4;
	sub_82120AC0(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x821BF1B4;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82191250
	ctx.lr = 0x821BF1BC;
	sub_82191250(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bf1cc
	if (ctx.cr0.eq) goto loc_821BF1CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821BF1CC;
	sub_8269CE98(ctx, base);
loc_821BF1CC:
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

DEFINE_REX_FUNC(sub_821C18B0) {
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
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x821C18DC;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x821C18E4;
	sub_82178388(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c18f4
	if (ctx.cr0.eq) goto loc_821C18F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821C18F4;
	sub_8269CE98(ctx, base);
loc_821C18F4:
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

DEFINE_REX_FUNC(sub_821C3FB8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14828
	ctx.r3.s64 = ctx.r11.s64 + -14828;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C4870) {
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
	// lwz r3,876(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 876);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,-17316
	ctx.r11.s64 = ctx.r11.s64 + -17316;
	// addi r10,r10,-17256
	ctx.r10.s64 = ctx.r10.s64 + -17256;
	// addi r9,r9,-17244
	ctx.r9.s64 = ctx.r9.s64 + -17244;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r9.u32);
	// beq cr6,0x821c48c0
	if (ctx.cr6.eq) goto loc_821C48C0;
	// bl 0x821c5560
	ctx.lr = 0x821C48C0;
	sub_821C5560(ctx, base);
loc_821C48C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,876(r31)
	REX_STORE_U32(r31.u32 + 876, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,824
	ctx.r3.s64 = r31.s64 + 824;
	// bl 0x82120ac0
	ctx.lr = 0x821C48D8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,756
	ctx.r3.s64 = r31.s64 + 756;
	// bl 0x82120ac0
	ctx.lr = 0x821C48E8;
	sub_82120AC0(ctx, base);
	// addi r3,r31,448
	ctx.r3.s64 = r31.s64 + 448;
	// bl 0x821c49e0
	ctx.lr = 0x821C48F0;
	sub_821C49E0(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x821c4938
	ctx.lr = 0x821C48F8;
	sub_821C4938(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,17212
	ctx.r11.s64 = ctx.r11.s64 + 17212;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// bl 0x82178388
	ctx.lr = 0x821C490C;
	sub_82178388(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c491c
	if (ctx.cr0.eq) goto loc_821C491C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821C491C;
	sub_8269CE98(ctx, base);
loc_821C491C:
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

DEFINE_REX_FUNC(sub_821C9C60) {
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
	ctx.lr = 0x821C9C68;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// mr r28,r27
	r28.u64 = r27.u64;
	// bl 0x82178268
	ctx.lr = 0x821C9C84;
	sub_82178268(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r11,51
	ctx.r11.s64 = 51;
	// addi r10,r10,-16044
	ctx.r10.s64 = ctx.r10.s64 + -16044;
	// li r9,255
	ctx.r9.s64 = 255;
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stb r11,119(r29)
	REX_STORE_U8(r29.u32 + 119, ctx.r11.u8);
	// addi r31,r29,116
	r31.s64 = r29.s64 + 116;
	// stb r11,118(r29)
	REX_STORE_U8(r29.u32 + 118, ctx.r11.u8);
	// stb r11,117(r29)
	REX_STORE_U8(r29.u32 + 117, ctx.r11.u8);
	// stb r9,116(r29)
	REX_STORE_U8(r29.u32 + 116, ctx.r9.u8);
	// bl 0x822f6280
	ctx.lr = 0x821C9CB4;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821c9ce4
	if (ctx.cr0.eq) goto loc_821C9CE4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,23144
	ctx.r4.s64 = ctx.r11.s64 + 23144;
	// bl 0x82120600
	ctx.lr = 0x821C9CCC;
	sub_82120600(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x8219d708
	ctx.lr = 0x821C9CE0;
	sub_8219D708(ctx, base);
	// b 0x821c9ce8
	goto loc_821C9CE8;
loc_821C9CE4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821C9CE8:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r30,r29,80
	r30.s64 = r29.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82145710
	ctx.lr = 0x821C9CFC;
	sub_82145710(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c9d18
	if (ctx.cr0.eq) goto loc_821C9D18;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r28,r28,0,0,30
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821C9D18;
	sub_82120AC0(ctx, base);
loc_821C9D18:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x822f6280
	ctx.lr = 0x821C9D20;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821c9d5c
	if (ctx.cr0.eq) goto loc_821C9D5C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-23196
	ctx.r4.s64 = ctx.r11.s64 + -23196;
	// bl 0x82120600
	ctx.lr = 0x821C9D38;
	sub_82120600(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r28,r28,2
	r28.u64 = r28.u64 | 2;
	// bl 0x821911f8
	ctx.lr = 0x821C9D48;
	sub_821911F8(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r10,r10,-23192
	ctx.r10.s64 = ctx.r10.s64 + -23192;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x821c9d60
	goto loc_821C9D60;
loc_821C9D5C:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_821C9D60:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82145710
	ctx.lr = 0x821C9D70;
	sub_82145710(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// bl 0x8269ce98
	ctx.lr = 0x821C9D7C;
	sub_8269CE98(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821C9D84;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c9db0
	if (ctx.cr0.eq) goto loc_821C9DB0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,-24848
	ctx.r10.s64 = ctx.r10.s64 + -24848;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821c9db4
	goto loc_821C9DB4;
loc_821C9DB0:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_821C9DB4:
	// rlwinm. r10,r28,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// stb r27,33(r31)
	REX_STORE_U8(r31.u32 + 33, r27.u8);
	// beq 0x821c9dd4
	if (ctx.cr0.eq) goto loc_821C9DD4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x821C9DD4;
	sub_82120AC0(ctx, base);
loc_821C9DD4:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x821C9DDC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c9dfc
	if (ctx.cr0.eq) goto loc_821C9DFC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821dc550
	ctx.lr = 0x821C9DF4;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821c9e00
	goto loc_821C9E00;
loc_821C9DFC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_821C9E00:
	// stw r4,112(r29)
	REX_STORE_U32(r29.u32 + 112, ctx.r4.u32);
	// addi r3,r29,96
	ctx.r3.s64 = r29.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x821C9E0C;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821C9E14;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821c9e88
	if (ctx.cr0.eq) goto loc_821C9E88;
	// stw r27,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r27.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-22996
	ctx.r4.s64 = ctx.r11.s64 + -22996;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821C9E38;
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
	ctx.lr = 0x821C9E4C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c9e78
	if (ctx.cr0.eq) goto loc_821C9E78;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r11,r11,-15424
	ctx.r11.s64 = ctx.r11.s64 + -15424;
	// addi r10,r10,-24912
	ctx.r10.s64 = ctx.r10.s64 + -24912;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821c9e7c
	goto loc_821C9E7C;
loc_821C9E78:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_821C9E7C:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x821c9e8c
	goto loc_821C9E8C;
loc_821C9E88:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_821C9E8C:
	// lwz r11,112(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821C9EA4;
	sub_82264568(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821DB828) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120d70
	ctx.lr = 0x821DB84C;
	sub_82120D70(ctx, base);
	// stfs f31,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x821db888
	ctx.lr = 0x821DB860;
	sub_821DB888(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821DB870;
	sub_82120AC0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

DEFINE_REX_FUNC(sub_821DD560) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14572
	ctx.r3.s64 = ctx.r11.s64 + -14572;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DD650) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14564
	ctx.r3.s64 = ctx.r11.s64 + -14564;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DD7D8) {
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
	ctx.lr = 0x821DD7E0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821dd8c4
	if (!ctx.cr6.gt) goto loc_821DD8C4;
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
loc_821DD810:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x821dd8b0
	if (!ctx.cr6.eq) goto loc_821DD8B0;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,80
	ctx.r5.s64 = 80;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// addi r30,r10,-1
	r30.s64 = ctx.r10.s64 + -1;
	// bl 0x826a1e70
	ctx.lr = 0x821DD83C;
	sub_826A1E70(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mulli r30,r30,80
	r30.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(80));
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + ctx.r11.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x826a1e70
	ctx.lr = 0x821DD854;
	sub_826A1E70(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x826a1e70
	ctx.lr = 0x821DD868;
	sub_826A1E70(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821dd894
	if (ctx.cr6.eq) goto loc_821DD894;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x821231d0
	ctx.lr = 0x821DD894;
	sub_821231D0(ctx, base);
loc_821DD894:
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
	ctx.lr = 0x821DD8B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821DD8B0:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,80
	r29.s64 = r29.s64 + 80;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821dd810
	if (ctx.cr6.lt) goto loc_821DD810;
loc_821DD8C4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_821E3C50) {
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
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
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
	// lfsx f13,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,208(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// fsel f13,f13,f1,f0
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f1.f64 : ctx.f0.f64;
	// stfs f13,240(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x821e3cac
	if (!ctx.cr6.eq) goto loc_821E3CAC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x821e3cb0
	goto loc_821E3CB0;
loc_821E3CAC:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_821E3CB0:
	// stw r11,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r11.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e3cdc
	if (ctx.cr6.eq) goto loc_821E3CDC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e4a80
	ctx.lr = 0x821E3CCC;
	sub_821E4A80(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lfs f1,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 240);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 260);
	// bl 0x822c0b70
	ctx.lr = 0x821E3CDC;
	sub_822C0B70(ctx, base);
loc_821E3CDC:
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

DEFINE_REX_FUNC(sub_821EB0C0) {
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
	ctx.lr = 0x821EB0C8;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EB0E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// lwz r10,128(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 128);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// divw r26,r3,r10
	r26.u64 = uint32_t((ctx.r10.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r3.s32 / ctx.r10.s32 : 0);
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bl 0x82125bc8
	ctx.lr = 0x821EB110;
	sub_82125BC8(ctx, base);
	// lwz r3,132(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 132);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EB124;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82125c20
	ctx.lr = 0x821EB130;
	sub_82125C20(ctx, base);
	// lwz r3,132(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 132);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EB148;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82125c98
	ctx.lr = 0x821EB158;
	sub_82125C98(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x826a1e70
	ctx.lr = 0x821EB164;
	sub_826A1E70(ctx, base);
	// lwz r3,132(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 132);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EB178;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 12);
	// lwz r17,0(r11)
	r17.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(r17.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821eb558
	if (ctx.cr6.eq) goto loc_821EB558;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r16,-32106
	r16.s64 = -2104098816;
	// addi r18,r11,-11624
	r18.s64 = ctx.r11.s64 + -11624;
	// addi r15,r10,15720
	r15.s64 = ctx.r10.s64 + 15720;
	// addi r14,r9,15680
	r14.s64 = ctx.r9.s64 + 15680;
loc_821EB1A4:
	// lwz r23,8(r17)
	r23.u64 = REX_LOAD_U32(r17.u32 + 8);
	// li r22,0
	r22.s64 = 0;
	// mr r20,r22
	r20.u64 = r22.u64;
	// stw r22,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r22.u32);
	// stw r22,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r22.u32);
	// mr r30,r22
	r30.u64 = r22.u64;
	// stw r22,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r22.u32);
	// lwz r11,40(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 40);
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821eb3c8
	if (ctx.cr6.eq) goto loc_821EB3C8;
loc_821EB1D4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821eb238
	if (!ctx.cr6.eq) goto loc_821EB238;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821eb238
	if (!ctx.cr6.eq) goto loc_821EB238;
	// lwz r3,6092(r16)
	ctx.r3.u64 = REX_LOAD_U32(r16.u32 + 6092);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,288(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EB204;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821eb238
	if (ctx.cr0.eq) goto loc_821EB238;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lbz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 12);
	// sth r30,130(r1)
	REX_STORE_U16(ctx.r1.u32 + 130, r30.u16);
	// stw r8,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// sth r11,128(r1)
	REX_STORE_U16(ctx.r1.u32 + 128, ctx.r11.u16);
	// stw r9,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// stb r7,140(r1)
	REX_STORE_U8(ctx.r1.u32 + 140, ctx.r7.u8);
	// b 0x821eb360
	goto loc_821EB360;
loc_821EB238:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821eb29c
	if (!ctx.cr6.eq) goto loc_821EB29C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821eb29c
	if (!ctx.cr6.eq) goto loc_821EB29C;
	// lwz r3,6092(r16)
	ctx.r3.u64 = REX_LOAD_U32(r16.u32 + 6092);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,288(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EB268;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821eb29c
	if (ctx.cr0.eq) goto loc_821EB29C;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lbz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 12);
	// sth r30,146(r1)
	REX_STORE_U16(ctx.r1.u32 + 146, r30.u16);
	// stw r8,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// sth r11,144(r1)
	REX_STORE_U16(ctx.r1.u32 + 144, ctx.r11.u16);
	// stw r9,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// stb r7,156(r1)
	REX_STORE_U8(ctx.r1.u32 + 156, ctx.r7.u8);
	// b 0x821eb360
	goto loc_821EB360;
loc_821EB29C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821eb300
	if (!ctx.cr6.eq) goto loc_821EB300;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821eb300
	if (!ctx.cr6.eq) goto loc_821EB300;
	// lwz r3,6092(r16)
	ctx.r3.u64 = REX_LOAD_U32(r16.u32 + 6092);
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,288(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EB2CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821eb300
	if (ctx.cr0.eq) goto loc_821EB300;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// li r8,10
	ctx.r8.s64 = 10;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lbz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 12);
	// sth r30,162(r1)
	REX_STORE_U16(ctx.r1.u32 + 162, r30.u16);
	// stw r8,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// sth r11,160(r1)
	REX_STORE_U16(ctx.r1.u32 + 160, ctx.r11.u16);
	// stw r9,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// stb r7,172(r1)
	REX_STORE_U8(ctx.r1.u32 + 172, ctx.r7.u8);
	// b 0x821eb360
	goto loc_821EB360;
loc_821EB300:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821eb370
	if (!ctx.cr6.eq) goto loc_821EB370;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821eb370
	if (!ctx.cr6.eq) goto loc_821EB370;
	// lwz r3,6092(r16)
	ctx.r3.u64 = REX_LOAD_U32(r16.u32 + 6092);
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,288(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EB330;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821eb370
	if (ctx.cr0.eq) goto loc_821EB370;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// li r8,9
	ctx.r8.s64 = 9;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lbz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 12);
	// sth r30,178(r1)
	REX_STORE_U16(ctx.r1.u32 + 178, r30.u16);
	// stw r8,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// sth r11,176(r1)
	REX_STORE_U16(ctx.r1.u32 + 176, ctx.r11.u16);
	// stw r9,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// stb r7,188(r1)
	REX_STORE_U8(ctx.r1.u32 + 188, ctx.r7.u8);
loc_821EB360:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82154800
	ctx.lr = 0x821EB368;
	sub_82154800(ctx, base);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// b 0x821eb3b0
	goto loc_821EB3B0;
loc_821EB370:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lbz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 12);
	// sth r30,194(r1)
	REX_STORE_U16(ctx.r1.u32 + 194, r30.u16);
	// sth r11,192(r1)
	REX_STORE_U16(ctx.r1.u32 + 192, ctx.r11.u16);
	// stw r9,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// stw r8,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// stb r7,204(r1)
	REX_STORE_U8(ctx.r1.u32 + 204, ctx.r7.u8);
	// bl 0x82154800
	ctx.lr = 0x821EB3A0;
	sub_82154800(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r18
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r18.u32);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
loc_821EB3B0:
	// lwz r11,40(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 40);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821eb1d4
	if (!ctx.cr6.eq) goto loc_821EB1D4;
	// lwz r20,112(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_821EB3C8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a48f8
	ctx.lr = 0x821EB3D0;
	sub_821A48F8(ctx, base);
	// lwz r11,104(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 104);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821eb528
	if (!ctx.cr6.gt) goto loc_821EB528;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subf r11,r20,r11
	ctx.r11.u64 = ctx.r11.u64 - r20.u64;
	// srawi r24,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	r24.s64 = ctx.r11.s32 >> 4;
loc_821EB3EC:
	// lwz r11,96(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 96);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,128(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 128);
	// add r11,r22,r11
	ctx.r11.u64 = r22.u64 + ctx.r11.u64;
	// mullw r4,r11,r10
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x82125c98
	ctx.lr = 0x821EB404;
	sub_82125C98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x821eb518
	if (!ctx.cr6.gt) goto loc_821EB518;
	// addi r30,r20,4
	r30.s64 = r20.s64 + 4;
	// subfic r25,r20,-4
	ctx.xer.ca = r20.u32 <= 4294967292;
	r25.u64 = static_cast<uint64_t>(-4) - r20.u64;
loc_821EB420:
	// lwz r11,40(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 40);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// lwzx r26,r9,r18
	r26.u64 = REX_LOAD_U32(ctx.r9.u32 + r18.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// lwzx r28,r8,r18
	r28.u64 = REX_LOAD_U32(ctx.r8.u32 + r18.u32);
	// bne cr6,0x821eb464
	if (!ctx.cr6.eq) goto loc_821EB464;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269cc20
	ctx.lr = 0x821EB460;
	sub_8269CC20(ctx, base);
	// b 0x821eb4fc
	goto loc_821EB4FC;
loc_821EB464:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821eb4bc
	if (!ctx.cr6.eq) goto loc_821EB4BC;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x821eb490
	if (!ctx.cr6.eq) goto loc_821EB490;
	// lfs f3,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ea278
	ctx.lr = 0x821EB48C;
	sub_821EA278(ctx, base);
	// b 0x821eb4b4
	goto loc_821EB4B4;
loc_821EB490:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821eb4bc
	if (!ctx.cr6.eq) goto loc_821EB4BC;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x821eb4bc
	if (!ctx.cr6.eq) goto loc_821EB4BC;
	// lfs f3,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ea3c0
	ctx.lr = 0x821EB4B4;
	sub_821EA3C0(ctx, base);
loc_821EB4B4:
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// b 0x821eb4fc
	goto loc_821EB4FC;
loc_821EB4BC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821eb4ec
	if (!ctx.cr6.eq) goto loc_821EB4EC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x821eb4ec
	if (!ctx.cr6.eq) goto loc_821EB4EC;
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ea1d8
	ctx.lr = 0x821EB4D8;
	sub_821EA1D8(ctx, base);
	// sth r3,0(r29)
	REX_STORE_U16(r29.u32 + 0, ctx.r3.u16);
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ea1d8
	ctx.lr = 0x821EB4E4;
	sub_821EA1D8(ctx, base);
	// sth r3,2(r29)
	REX_STORE_U16(r29.u32 + 2, ctx.r3.u16);
	// b 0x821eb4fc
	goto loc_821EB4FC;
loc_821EB4EC:
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// li r5,295
	ctx.r5.s64 = 295;
	// bl 0x821231d0
	ctx.lr = 0x821EB4FC;
	sub_821231D0(ctx, base);
loc_821EB4FC:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// add r31,r28,r31
	r31.u64 = r28.u64 + r31.u64;
	// add r29,r26,r29
	r29.u64 = r26.u64 + r29.u64;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmpw cr6,r27,r24
	ctx.cr6.compare<int32_t>(r27.s32, r24.s32, ctx.xer);
	// blt cr6,0x821eb420
	if (ctx.cr6.lt) goto loc_821EB420;
	// lwz r26,80(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_821EB518:
	// lwz r11,104(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 104);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821eb3ec
	if (ctx.cr6.lt) goto loc_821EB3EC;
loc_821EB528:
	// lwz r3,40(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EB53C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r19,40(r23)
	REX_STORE_U32(r23.u32 + 40, r19.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82154908
	ctx.lr = 0x821EB548;
	sub_82154908(ctx, base);
	// lwz r11,12(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 12);
	// lwz r17,0(r17)
	r17.u64 = REX_LOAD_U32(r17.u32 + 0);
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(r17.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821eb1a4
	if (!ctx.cr6.eq) goto loc_821EB1A4;
loc_821EB558:
	// lwz r10,12(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821eb594
	if (ctx.cr6.eq) goto loc_821EB594;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_821EB570:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x821eb588
	if (ctx.cr6.gt) goto loc_821EB588;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
loc_821EB588:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821eb570
	if (!ctx.cr6.eq) goto loc_821EB570;
loc_821EB594:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82125c98
	ctx.lr = 0x821EB5A0;
	sub_82125C98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// ble cr6,0x821eb5d8
	if (!ctx.cr6.gt) goto loc_821EB5D8;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_821EB5B4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269cc20
	ctx.lr = 0x821EB5C4;
	sub_8269CC20(ctx, base);
	// lwz r11,128(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 128);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r28,r28,r29
	r28.u64 = r28.u64 + r29.u64;
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// bne 0x821eb5b4
	if (!ctx.cr0.eq) goto loc_821EB5B4;
loc_821EB5D8:
	// mullw r4,r29,r26
	ctx.r4.s64 = int64_t(r29.s32) * int64_t(r26.s32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82125c20
	ctx.lr = 0x821EB5E4;
	sub_82125C20(ctx, base);
	// stw r29,128(r21)
	REX_STORE_U32(r21.u32 + 128, r29.u32);
	// lwz r3,132(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 132);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,92(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EB604;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r30,132(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 132);
	// bl 0x82125c98
	ctx.lr = 0x821EB614;
	sub_82125C98(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EB630;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821EB63C;
	sub_826A1E70(ctx, base);
	// lwz r3,132(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 132);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EB650;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8269d1b8
	ctx.lr = 0x821EB658;
	sub_8269D1B8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82219430) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r10,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82219454:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82219454
	if (!ctx.cr6.eq) goto loc_82219454;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8216b6a8
	ctx.lr = 0x82219480;
	sub_8216B6A8(ctx, base);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x82219498;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-26576
	ctx.r3.s64 = ctx.r11.s64 + -26576;
	// bl 0x8216bc98
	ctx.lr = 0x822194A8;
	sub_8216BC98(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8221E8F0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,252
	ctx.r11.s64 = ctx.r5.s64 + 252;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r5,96(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8221e9c4
	if (ctx.cr6.eq) goto loc_8221E9C4;
	// lwa r11,16(r5)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r5.u32 + 16));
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r11,r10,16592
	ctx.r11.s64 = ctx.r10.s64 + 16592;
	// lwa r9,12(r5)
	ctx.r9.s64 = int32_t(REX_LOAD_U32(ctx.r5.u32 + 12));
	// lfs f13,124(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,128(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lwz r31,116(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// lfs f11,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f7,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lis r4,-32106
	ctx.r4.s64 = -2104098816;
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// fdivs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// lfs f13,16592(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16592);
	ctx.f13.f64 = double(temp.f32);
	// lfs f6,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f0,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,6096(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 6096);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f6,f13,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmuls f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f11,f12,f7
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f11,f8,f10
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82136128
	ctx.lr = 0x8221E9C4;
	sub_82136128(ctx, base);
loc_8221E9C4:
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

DEFINE_REX_FUNC(sub_822284B8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13924
	ctx.r3.s64 = ctx.r11.s64 + -13924;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82228850) {
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
	// addi r4,r11,16492
	ctx.r4.s64 = ctx.r11.s64 + 16492;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x82228878;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16528
	ctx.r4.s64 = ctx.r11.s64 + 16528;
	// bl 0x8215f338
	ctx.lr = 0x82228884;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82228888;
	sub_8215FA30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,17480
	ctx.r4.s64 = ctx.r11.s64 + 17480;
	// bl 0x82125d00
	ctx.lr = 0x82228894;
	sub_82125D00(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_82229ED0) {
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
	// lwz r11,132(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 132);
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r4,112
	ctx.r5.s64 = ctx.r4.s64 + 112;
	// stw r30,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r30.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82229f04
	if (ctx.cr6.lt) goto loc_82229F04;
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
loc_82229F04:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82229F08:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82229f08
	if (!ctx.cr6.eq) goto loc_82229F08;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8216b6a8
	ctx.lr = 0x82229F34;
	sub_8216B6A8(ctx, base);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x82229F4C;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-23268
	ctx.r3.s64 = ctx.r11.s64 + -23268;
	// bl 0x8216bc98
	ctx.lr = 0x82229F5C;
	sub_8216BC98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
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

DEFINE_REX_FUNC(sub_8222CDD8) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r5,r11,176
	ctx.r5.s64 = ctx.r11.s64 + 176;
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// bl 0x823fbf60
	ctx.lr = 0x8222CE0C;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8222CE1C:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8222ce1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222CE1C;
	// lbz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8222ce6c
	if (ctx.cr0.eq) goto loc_8222CE6C;
	// li r11,255
	ctx.r11.s64 = 255;
	// lfs f1,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stb r10,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// li r7,8
	ctx.r7.s64 = 8;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6096(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 6096);
	// bl 0x82137838
	ctx.lr = 0x8222CE6C;
	sub_82137838(ctx, base);
loc_8222CE6C:
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

DEFINE_REX_FUNC(sub_82233278) {
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
	ctx.lr = 0x82233280;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,124(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// bl 0x821914c8
	ctx.lr = 0x82233290;
	sub_821914C8(ctx, base);
	// lbz r11,320(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 320);
	// addi r31,r27,168
	r31.s64 = r27.s64 + 168;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822332b8
	if (ctx.cr0.eq) goto loc_822332B8;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6168(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6168);
	// bl 0x821c5618
	ctx.lr = 0x822332B0;
	sub_821C5618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e34c8
	ctx.lr = 0x822332B8;
	sub_821E34C8(ctx, base);
loc_822332B8:
	// lwz r11,740(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 740);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r31,r27,480
	r31.s64 = r27.s64 + 480;
	// sth r8,692(r27)
	REX_STORE_U16(r27.u32 + 692, ctx.r8.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822332e4
	if (ctx.cr6.eq) goto loc_822332E4;
	// lwz r10,200(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// sth r8,714(r11)
	REX_STORE_U16(ctx.r11.u32 + 714, ctx.r8.u16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822332e4
	if (ctx.cr6.eq) goto loc_822332E4;
	// sth r8,4(r10)
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r8.u16);
loc_822332E4:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// li r9,-2
	ctx.r9.s64 = -2;
	// sth r9,214(r31)
	REX_STORE_U16(r31.u32 + 214, ctx.r9.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223330c
	if (ctx.cr6.eq) goto loc_8223330C;
	// lwz r10,200(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// sth r9,716(r11)
	REX_STORE_U16(ctx.r11.u32 + 716, ctx.r9.u16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223330c
	if (ctx.cr6.eq) goto loc_8223330C;
	// sth r9,6(r10)
	REX_STORE_U16(ctx.r10.u32 + 6, ctx.r9.u16);
loc_8223330C:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// stw r8,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82233320
	if (ctx.cr6.eq) goto loc_82233320;
	// stw r8,720(r11)
	REX_STORE_U32(ctx.r11.u32 + 720, ctx.r8.u32);
loc_82233320:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r10,r27,112
	ctx.r10.s64 = r27.s64 + 112;
	// stw r10,248(r31)
	REX_STORE_U32(r31.u32 + 248, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82233338
	if (ctx.cr6.eq) goto loc_82233338;
	// stw r10,708(r11)
	REX_STORE_U32(ctx.r11.u32 + 708, ctx.r10.u32);
loc_82233338:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e3cf0
	ctx.lr = 0x82233340;
	sub_821E3CF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e4490
	ctx.lr = 0x82233348;
	sub_821E4490(ctx, base);
	// lis r31,-32106
	r31.s64 = -2104098816;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,15320
	ctx.r11.s64 = ctx.r11.s64 + 15320;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r30,6048(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 6048);
	// bl 0x822f6280
	ctx.lr = 0x8223336C;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,-12728
	r28.s64 = ctx.r11.s64 + -12728;
	// beq 0x82233394
	if (ctx.cr0.eq) goto loc_82233394;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r27,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r27.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// b 0x82233398
	goto loc_82233398;
loc_82233394:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82233398:
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
	ctx.lr = 0x822333B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r11,r11,15592
	ctx.r11.s64 = ctx.r11.s64 + 15592;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r31,6048(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 6048);
	// bl 0x822f6280
	ctx.lr = 0x822333D0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822333f0
	if (ctx.cr0.eq) goto loc_822333F0;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r27,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r27.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// b 0x822333f4
	goto loc_822333F4;
loc_822333F0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_822333F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r10,-23804
	ctx.r5.s64 = ctx.r10.s64 + -23804;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82233410;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8223FEE0) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8223ff10
	if (ctx.cr6.lt) goto loc_8223FF10;
	// lwz r11,3848(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3848);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8223ff28
	if (ctx.cr6.lt) goto loc_8223FF28;
loc_8223FF10:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-16588
	ctx.r4.s64 = ctx.r11.s64 + -16588;
	// addi r3,r10,-18176
	ctx.r3.s64 = ctx.r10.s64 + -18176;
	// li r5,118
	ctx.r5.s64 = 118;
	// bl 0x821231d0
	ctx.lr = 0x8223FF28;
	sub_821231D0(ctx, base);
loc_8223FF28:
	// lwz r10,3856(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 3856);
	// mulli r11,r31,304
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(304));
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
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

DEFINE_REX_FUNC(sub_82242E30) {
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
	ctx.lr = 0x82242E38;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r29,r11,-16588
	r29.s64 = ctx.r11.s64 + -16588;
	// bne cr6,0x82242e6c
	if (!ctx.cr6.eq) goto loc_82242E6C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-17424
	ctx.r3.s64 = ctx.r11.s64 + -17424;
	// li r5,1292
	ctx.r5.s64 = 1292;
	// bl 0x821231d0
	ctx.lr = 0x82242E6C;
	sub_821231D0(ctx, base);
loc_82242E6C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82242e88
	if (!ctx.cr6.eq) goto loc_82242E88;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-17376
	ctx.r3.s64 = ctx.r11.s64 + -17376;
	// li r5,1293
	ctx.r5.s64 = 1293;
	// bl 0x821231d0
	ctx.lr = 0x82242E88;
	sub_821231D0(ctx, base);
loc_82242E88:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r28,1
	r28.s64 = 1;
	// stb r28,224(r30)
	REX_STORE_U8(r30.u32 + 224, r28.u8);
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 32, temp.u32);
	// lwz r3,460(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82242EB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82242ed4
	if (ctx.cr0.eq) goto loc_82242ED4;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6292(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6292);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82242ED4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82242ED4:
	// lis r29,-32106
	r29.s64 = -2104098816;
	// lwz r3,6152(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82242EEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82242f5c
	if (ctx.cr0.eq) goto loc_82242F5C;
	// lwz r3,460(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82242F08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82242f5c
	if (ctx.cr0.eq) goto loc_82242F5C;
	// lwz r3,460(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82242F24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6152(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6152);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82242F44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82242f5c
	if (ctx.cr0.eq) goto loc_82242F5C;
	// lwz r6,16(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lfs f2,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8227d8a0
	ctx.lr = 0x82242F5C;
	sub_8227D8A0(ctx, base);
loc_82242F5C:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6284(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82242F74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82242fa4
	if (!ctx.cr6.eq) goto loc_82242FA4;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,460(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 460);
	// addi r4,r11,-13316
	ctx.r4.s64 = ctx.r11.s64 + -13316;
	// bl 0x821fd140
	ctx.lr = 0x82242F8C;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82242fa4
	if (ctx.cr0.eq) goto loc_82242FA4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3940(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 3940, temp.u32);
loc_82242FA4:
	// lwz r11,616(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 616);
	// stb r28,698(r31)
	REX_STORE_U8(r31.u32 + 698, r28.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,616(r31)
	REX_STORE_U32(r31.u32 + 616, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8224FA28) {
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
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8224FA50:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8224fa50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8224FA50;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// bl 0x82183be8
	ctx.lr = 0x8224FA64;
	sub_82183BE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224fb78
	if (ctx.cr0.eq) goto loc_8224FB78;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f10,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f0,-19392(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19392);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fsubs f8,f0,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lfs f7,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,1132(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1132);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r11,256
	ctx.r7.s64 = ctx.r11.s64 + 256;
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// lfs f0,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// fmadds f11,f10,f9,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f9.f64, ctx.f11.f64)));
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fsubs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsubs f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// mfcr r6
	ctx.r6.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r6.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r6.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r6.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r6.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r6.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r6.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r6.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r6.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r6.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r6.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r6.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r6.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r6.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r6.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r6.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r6.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r6.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r6.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r6.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r6.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r6.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r6.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r6.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r6.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r6.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r6.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r6.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r6.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r6.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r6.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r6.u64 |= ctx.cr7.so ? 0x1 : 0;
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// mfcr r5
	ctx.r5.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r5.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r5.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r5.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r5.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r5.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r5.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r5.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r5.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r5.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r5.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r5.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r5.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r5.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r5.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r5.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r5.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r5.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r5.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r5.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r5.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r5.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r5.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r5.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r5.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r5.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r5.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r5.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r5.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r5.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r5.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r5.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r4,r5,27,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x4;
	// rlwinm r5,r5,30,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x4;
	// rlwinm r3,r6,27,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x4;
	// rlwinm r6,r6,30,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x4;
	// or r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 | ctx.r5.u64;
	// or r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 | ctx.r6.u64;
	// lfsx f10,r8,r5
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f9,r10,r6
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsel f12,f10,f13,f12
	ctx.f12.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fsel f13,f9,f13,f11
	ctx.f13.f64 = ctx.f9.f64 >= 0.0 ? ctx.f13.f64 : ctx.f11.f64;
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
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
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
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
	// rlwinm r6,r10,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r5,r8,27,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// rlwinm r10,r10,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// rlwinm r8,r8,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// lfsx f11,r7,r10
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r9,r8
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f12,f11,f0,f12
	ctx.f12.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fsel f13,f10,f0,f13
	ctx.f13.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fsubs f12,f7,f13
	ctx.f12.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
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
	// lfsx f0,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsel f0,f0,f7,f13
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f7.f64 : ctx.f13.f64;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
loc_8224FB78:
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

DEFINE_REX_FUNC(sub_82264E98) {
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
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,8(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82264ecc
	if (ctx.cr6.eq) goto loc_82264ECC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82208770
	ctx.lr = 0x82264EC4;
	sub_82208770(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82264ECC;
	sub_8269CE98(ctx, base);
loc_82264ECC:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r3,6316(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6316);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82264EEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6316(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6316);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82264F00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6200(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6200);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82264F18;
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

DEFINE_REX_FUNC(sub_82268E98) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,57(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 57);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82268eb0
	if (ctx.cr0.eq) goto loc_82268EB0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82268f1c
	goto loc_82268F1C;
loc_82268EB0:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,57(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 57);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82268efc
	if (!ctx.cr0.eq) goto loc_82268EFC;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82268ed0
	goto loc_82268ED0;
loc_82268EC8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_82268ED0:
	// lbz r9,57(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 57);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82268ec8
	if (ctx.cr0.eq) goto loc_82268EC8;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82268EE4:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82268f0c
	if (!ctx.cr6.eq) goto loc_82268F0C;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82268EFC:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,57(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 57);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82268ee4
	if (ctx.cr0.eq) goto loc_82268EE4;
loc_82268F0C:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,57(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 57);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_82268F1C:
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8226E2A8) {
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
	ctx.lr = 0x8226E2B0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,16568
	ctx.r4.s64 = ctx.r11.s64 + 16568;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x82125d00
	ctx.lr = 0x8226E2D4;
	sub_82125D00(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6256(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6256);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bne 0x8226e31c
	if (!ctx.cr0.eq) goto loc_8226E31C;
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226E308;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8226E308:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226e334
	if (!ctx.cr0.eq) goto loc_8226E334;
loc_8226E310:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226E314:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_8226E31C:
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226E330;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8226e308
	goto loc_8226E308;
loc_8226E334:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-7928
	ctx.r4.s64 = ctx.r11.s64 + -7928;
	// bl 0x8215f338
	ctx.lr = 0x8226E344;
	sub_8215F338(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r11,-16680
	r29.s64 = ctx.r11.s64 + -16680;
loc_8226E354:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8226e378
	if (!ctx.cr6.eq) goto loc_8226E378;
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
	// b 0x8226e37c
	goto loc_8226E37C;
loc_8226E378:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8226E37C:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8226e310
	if (!ctx.cr6.lt) goto loc_8226E310;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8226E390;
	sub_8215F1B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x8226E398;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x8226E39C;
	sub_8215F990(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8226e3b0
	if (ctx.cr6.eq) goto loc_8226E3B0;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x8226e354
	goto loc_8226E354;
loc_8226E3B0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8226E3BC;
	sub_8215F1B0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-17164
	ctx.r4.s64 = ctx.r11.s64 + -17164;
	// bl 0x8215f338
	ctx.lr = 0x8226E3C8;
	sub_8215F338(ctx, base);
	// bl 0x8215fab8
	ctx.lr = 0x8226E3CC;
	sub_8215FAB8(ctx, base);
	// std r3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,284(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 0, temp.u32);
	// b 0x8226e314
	goto loc_8226E314;
}

DEFINE_REX_FUNC(sub_82275BA0) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82275BC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_822775F8) {
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
	ctx.lr = 0x82277600;
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82277644
	if (!ctx.cr6.eq) goto loc_82277644;
	// lwz r6,4(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
loc_8227762C:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82277630:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8227763C:
	// bl 0x82277868
	ctx.lr = 0x82277640;
	sub_82277868(ctx, base);
	// b 0x82277760
	goto loc_82277760;
loc_82277644:
	// lwz r25,4(r28)
	r25.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8227766c
	if (!ctx.cr6.eq) goto loc_8227766C;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82277744
	if (!ctx.cr6.lt) goto loc_82277744;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// b 0x8227762c
	goto loc_8227762C;
loc_8227766C:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// bne cr6,0x82277690
	if (!ctx.cr6.eq) goto loc_82277690;
	// lwz r6,8(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 8);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r10,16(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82277744
	if (!ctx.cr6.lt) goto loc_82277744;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82277630
	goto loc_82277630;
loc_82277690:
	// lwz r27,16(r29)
	r27.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r26,16(r30)
	r26.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(r26.u32, r27.u32, ctx.xer);
	// ble cr6,0x822776f4
	if (!ctx.cr6.gt) goto loc_822776F4;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216a6c8
	ctx.lr = 0x822776AC;
	sub_8216A6C8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bge cr6,0x822776f0
	if (!ctx.cr6.lt) goto loc_822776F0;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// lbz r11,33(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822776e4
	if (ctx.cr0.eq) goto loc_822776E4;
loc_822776DC:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8227763c
	goto loc_8227763C;
loc_822776E4:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
loc_822776E8:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8227763c
	goto loc_8227763C;
loc_822776F0:
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(r26.u32, r27.u32, ctx.xer);
loc_822776F4:
	// bge cr6,0x82277744
	if (!ctx.cr6.lt) goto loc_82277744;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82169990
	ctx.lr = 0x82277704;
	sub_82169990(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// beq cr6,0x82277720
	if (ctx.cr6.eq) goto loc_82277720;
	// lwz r11,16(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82277744
	if (!ctx.cr6.lt) goto loc_82277744;
loc_82277720:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r11,33(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822776e8
	if (ctx.cr0.eq) goto loc_822776E8;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// b 0x822776dc
	goto loc_822776DC;
loc_82277744:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82277770
	ctx.lr = 0x82277754;
	sub_82277770(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82277760:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82283740) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82283770
	if (ctx.cr6.lt) goto loc_82283770;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82283788
	if (ctx.cr6.lt) goto loc_82283788;
loc_82283770:
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
	ctx.lr = 0x82283788;
	sub_821231D0(ctx, base);
loc_82283788:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r31,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
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

DEFINE_REX_FUNC(sub_82285760) {
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
	ctx.lr = 0x82285768;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,160(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822857c4
	if (!ctx.cr6.gt) goto loc_822857C4;
	// addi r29,r3,156
	r29.s64 = ctx.r3.s64 + 156;
loc_82285788:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8228ca78
	ctx.lr = 0x82285794;
	sub_8228CA78(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822857b4
	if (ctx.cr6.eq) goto loc_822857B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822857B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822857B4:
	// lwz r11,160(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 160);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82285788
	if (ctx.cr6.lt) goto loc_82285788;
loc_822857C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r11,160(r28)
	REX_STORE_U32(r28.u32 + 160, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r4,r10,1848
	ctx.r4.s64 = ctx.r10.s64 + 1848;
	// stb r11,216(r28)
	REX_STORE_U8(r28.u32 + 216, ctx.r11.u8);
	// bl 0x8215f338
	ctx.lr = 0x822857EC;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x822857F0;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r28,16
	ctx.r3.s64 = r28.s64 + 16;
	// bl 0x821d5b38
	ctx.lr = 0x822857FC;
	sub_821D5B38(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-19464
	ctx.r4.s64 = ctx.r11.s64 + -19464;
	// bl 0x8215f338
	ctx.lr = 0x8228580C;
	sub_8215F338(ctx, base);
	// bl 0x8215f9e0
	ctx.lr = 0x82285810;
	sub_8215F9E0(ctx, base);
	// stfs f1,144(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r28.u32 + 144, temp.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1872
	ctx.r4.s64 = ctx.r11.s64 + 1872;
	// bl 0x8215f338
	ctx.lr = 0x82285824;
	sub_8215F338(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
loc_8228582C:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82285850
	if (!ctx.cr6.eq) goto loc_82285850;
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x82285854
	goto loc_82285854;
loc_82285850:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82285854:
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8228591c
	if (!ctx.cr6.lt) goto loc_8228591C;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x822f6280
	ctx.lr = 0x82285864;
	sub_822F6280(ctx, base);
	// mr. r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82285898
	if (ctx.cr0.eq) goto loc_82285898;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,468(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// lbz r5,712(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 712);
	// bl 0x8215f1b0
	ctx.lr = 0x82285884;
	sub_8215F1B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82285be8
	ctx.lr = 0x82285890;
	sub_82285BE8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// b 0x8228589c
	goto loc_8228589C;
loc_82285898:
	// li r25,0
	r25.s64 = 0;
loc_8228589C:
	// lwz r27,160(r28)
	r27.u64 = REX_LOAD_U32(r28.u32 + 160);
	// addi r31,r28,156
	r31.s64 = r28.s64 + 156;
	// lwz r11,164(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 164);
	// addi r30,r27,1
	r30.s64 = r27.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82285900
	if (!ctx.cr6.gt) goto loc_82285900;
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
	// bgt cr6,0x822858cc
	if (ctx.cr6.gt) goto loc_822858CC;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_822858CC:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82285900
	if (!ctx.cr6.gt) goto loc_82285900;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269d1d0
	ctx.lr = 0x822858E0;
	sub_8269D1D0(ctx, base);
	// rlwinm r5,r27,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x822858F0;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x822858F8;
	sub_8269D1B8(ctx, base);
	// stw r23,0(r31)
	REX_STORE_U32(r31.u32 + 0, r23.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
loc_82285900:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r4,r30,-1
	ctx.r4.s64 = r30.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228ca78
	ctx.lr = 0x82285910;
	sub_8228CA78(ctx, base);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stw r25,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r25.u32);
	// b 0x8228582c
	goto loc_8228582C;
loc_8228591C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8228F210) {
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
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228F23C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228f268
	if (ctx.cr0.eq) goto loc_8228F268;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,4552
	ctx.r11.s64 = ctx.r11.s64 + 4552;
	// addi r10,r10,6616
	ctx.r10.s64 = ctx.r10.s64 + 6616;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8228f26c
	goto loc_8228F26C;
loc_8228F268:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228F26C:
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

DEFINE_REX_FUNC(sub_822915C0) {
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
	// bl 0x82291900
	ctx.lr = 0x822915E0;
	sub_82291900(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82291608
	ctx.lr = 0x822915EC;
	sub_82291608(ctx, base);
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

DEFINE_REX_FUNC(sub_82294640) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,5224
	ctx.r11.s64 = ctx.r11.s64 + 5224;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8229466c
	if (ctx.cr0.eq) goto loc_8229466C;
	// bl 0x8269ce98
	ctx.lr = 0x8229466C;
	sub_8269CE98(ctx, base);
loc_8229466C:
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

DEFINE_REX_FUNC(sub_82296B28) {
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
	// lwz r11,196(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 196);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82296b60
	if (!ctx.cr6.eq) goto loc_82296B60;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82296bac
	goto loc_82296BAC;
loc_82296B60:
	// lwz r3,196(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwz r30,0(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,200(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 200);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82296B7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82296ba8
	if (ctx.cr0.eq) goto loc_82296BA8;
	// addi r8,r30,16
	ctx.r8.s64 = r30.s64 + 16;
	// lfs f1,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 200);
	ctx.f1.f64 = double(temp.f32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r9,196(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 196);
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// lwz r7,204(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// lwz r3,204(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 204);
	// bl 0x82295930
	ctx.lr = 0x82296BA8;
	sub_82295930(ctx, base);
loc_82296BA8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82296BAC:
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

DEFINE_REX_FUNC(sub_8229F0C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lbz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8229f244
	if (ctx.cr0.eq) goto loc_8229F244;
	// lfs f12,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f11,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// li r10,3
	ctx.r10.s64 = 3;
	// lfs f0,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f10,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// lfs f13,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f9,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r6,r4,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// fsubs f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f5,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f12,f5,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// lfs f6,48(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f4,f0
	ctx.f5.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// lfs f8,52(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lfs f7,56(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f4,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmuls f11,f6,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// lfs f0,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f4,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// addi r5,r6,3
	ctx.r5.s64 = ctx.r6.s64 + 3;
	// fmuls f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fmuls f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fadds f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fctidz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f12.u64);
	// fctidz f12,f8
	ctx.f12.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f12,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f12.u64);
	// lhz r9,-34(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + -34);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// fctidz f12,f11
	ctx.f12.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f12,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f12.u64);
	// lhz r8,-42(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + -42);
	// fctidz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// lhz r7,-34(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + -34);
	// fctidz f12,f10
	ctx.f12.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f12.u64);
	// stfd f13,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f13.u64);
	// lhz r4,-42(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + -42);
	// stfd f0,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.f0.u64);
	// lhz r31,-26(r1)
	r31.u64 = REX_LOAD_U16(ctx.r1.u32 + -26);
	// lhz r30,-34(r1)
	r30.u64 = REX_LOAD_U16(ctx.r1.u32 + -34);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r8,-46(r1)
	REX_STORE_U16(ctx.r1.u32 + -46, ctx.r8.u16);
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// sth r9,-48(r1)
	REX_STORE_U16(ctx.r1.u32 + -48, ctx.r9.u16);
	// ori r8,r4,1
	ctx.r8.u64 = ctx.r4.u64 | 1;
	// sth r7,-40(r1)
	REX_STORE_U16(ctx.r1.u32 + -40, ctx.r7.u16);
	// ori r9,r31,1
	ctx.r9.u64 = r31.u64 | 1;
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r8,-38(r1)
	REX_STORE_U16(ctx.r1.u32 + -38, ctx.r8.u16);
	// sth r9,-36(r1)
	REX_STORE_U16(ctx.r1.u32 + -36, ctx.r9.u16);
	// sth r30,-44(r1)
	REX_STORE_U16(ctx.r1.u32 + -44, r30.u16);
loc_8229F1E4:
	// add r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r8,148(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// addi r4,r1,-48
	ctx.r4.s64 = ctx.r1.s64 + -48;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r4
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// lhzx r4,r7,r8
	ctx.r4.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8229f20c
	if (!ctx.cr6.gt) goto loc_8229F20C;
	// sthx r9,r7,r8
	REX_STORE_U16(ctx.r7.u32 + ctx.r8.u32, ctx.r9.u16);
loc_8229F20C:
	// add r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwz r8,148(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// addi r4,r1,-40
	ctx.r4.s64 = ctx.r1.s64 + -40;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r4
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// lhzx r4,r7,r8
	ctx.r4.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8229f234
	if (!ctx.cr6.lt) goto loc_8229F234;
	// sthx r9,r7,r8
	REX_STORE_U16(ctx.r7.u32 + ctx.r8.u32, ctx.r9.u16);
loc_8229F234:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x8229f1e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229F1E4;
	// b 0x8229f2fc
	goto loc_8229F2FC;
loc_8229F244:
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// rlwinm r10,r4,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8229f264
	if (!ctx.cr6.lt) goto loc_8229F264;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_8229F264:
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8229f278
	if (!ctx.cr6.lt) goto loc_8229F278;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_8229F278:
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8229f28c
	if (!ctx.cr6.lt) goto loc_8229F28C;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_8229F28C:
	// lfs f0,12(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8229f2a0
	if (!ctx.cr6.lt) goto loc_8229F2A0;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_8229F2A0:
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8229f2c0
	if (!ctx.cr6.lt) goto loc_8229F2C0;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_8229F2C0:
	// lfs f0,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8229f2d4
	if (!ctx.cr6.lt) goto loc_8229F2D4;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_8229F2D4:
	// lfs f0,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8229f2e8
	if (!ctx.cr6.lt) goto loc_8229F2E8;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_8229F2E8:
	// lfs f0,12(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8229f2fc
	if (!ctx.cr6.lt) goto loc_8229F2FC;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_8229F2FC:
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B8A28) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1ca8
	ctx.lr = 0x822B8A30;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ca8
	ctx.lr = 0x822B8A38;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,240(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 240);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// lwz r10,240(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 240);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// ld r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// std r7,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r7.u64);
	// and r30,r11,r8
	r30.u64 = ctx.r11.u64 & ctx.r8.u64;
	// ld r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// addi r29,r3,16
	r29.s64 = ctx.r3.s64 + 16;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// and r28,r10,r9
	r28.u64 = ctx.r10.u64 & ctx.r9.u64;
	// beq cr6,0x822b8aa8
	if (ctx.cr6.eq) goto loc_822B8AA8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x822b8aac
	goto loc_822B8AAC;
loc_822B8AA8:
	// bl 0x822b7ff0
	ctx.lr = 0x822B8AAC;
	sub_822B7FF0(ctx, base);
loc_822B8AAC:
	// stw r3,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822b8ac0
	if (ctx.cr6.eq) goto loc_822B8AC0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x822b8ac4
	goto loc_822B8AC4;
loc_822B8AC0:
	// bl 0x822b7ff0
	ctx.lr = 0x822B8AC4;
	sub_822B7FF0(ctx, base);
loc_822B8AC4:
	// stw r3,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// lfs f0,84(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// lfs f11,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lfs f9,8(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f13,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmsubs f12,f7,f12,f6
	ctx.f12.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, -ctx.f6.f64)));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmsubs f11,f10,f11,f8
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, -ctx.f8.f64)));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmsubs f13,f9,f13,f5
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, -ctx.f5.f64)));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// beq cr6,0x822b8bbc
	if (ctx.cr6.eq) goto loc_822B8BBC;
	// lfs f10,276(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 276);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r30,272
	ctx.r11.s64 = r30.s64 + 272;
	// lfs f9,292(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 292);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,308(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 308);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f8,280(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 280);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,296(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 296);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,312(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 312);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,272(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 272);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,288(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 288);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,304(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 304);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,608(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 608);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,612(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 612);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f10,f8,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f10.f64)));
	// lfs f8,616(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 616);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f9,f7,f12,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f9.f64)));
	// fmadds f13,f6,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmadds f12,f5,f11,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f5.f64, ctx.f11.f64, ctx.f10.f64)));
	// fmadds f10,f11,f4,f9
	ctx.f10.f64 = double(float(std::fma(ctx.f11.f64, ctx.f4.f64, ctx.f9.f64)));
	// fmadds f13,f3,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f3.f64, ctx.f11.f64, ctx.f13.f64)));
	// fmuls f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f12,f1,f10
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x822b8bc8
	goto loc_822B8BC8;
loc_822B8BBC:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_822B8BC8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r9,r31,32
	ctx.r9.s64 = r31.s64 + 32;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,56(r31)
	REX_STORE_U64(r31.u32 + 56, ctx.r10.u64);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// std r11,48(r31)
	REX_STORE_U64(r31.u32 + 48, ctx.r11.u64);
	// lfs f11,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,8(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,4(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fneg f9,f9
	ctx.f9.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fmuls f7,f12,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fneg f6,f11
	ctx.f6.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fmsubs f11,f13,f6,f7
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f6.f64, -ctx.f7.f64)));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f7,f8,f6
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f6,f13,f10
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmsubs f13,f12,f10,f7
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f7.f64)));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmsubs f12,f8,f9,f6
	ctx.f12.f64 = double(float(std::fma(ctx.f8.f64, ctx.f9.f64, -ctx.f6.f64)));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
	// ld r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// std r11,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r11.u64);
	// beq cr6,0x822b8cc4
	if (ctx.cr6.eq) goto loc_822B8CC4;
	// lfs f10,276(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 276);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r28,272
	ctx.r11.s64 = r28.s64 + 272;
	// lfs f9,292(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 292);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f8,308(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 308);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// lfs f8,280(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 280);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,296(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 296);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,312(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 312);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,272(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 272);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,288(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 288);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,304(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 304);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,608(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 608);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,612(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 612);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f10,f8,f13,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f10.f64)));
	// lfs f8,616(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 616);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f9,f7,f13,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f9.f64)));
	// fmadds f13,f6,f13,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmadds f11,f5,f12,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f10.f64)));
	// fmadds f10,f4,f12,f9
	ctx.f10.f64 = double(float(std::fma(ctx.f4.f64, ctx.f12.f64, ctx.f9.f64)));
	// fmadds f13,f3,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f3.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmuls f12,f2,f11
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f12,f1,f10
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// b 0x822b8cd0
	goto loc_822B8CD0;
loc_822B8CC4:
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_822B8CD0:
	// ld r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// addi r11,r31,64
	ctx.r11.s64 = r31.s64 + 64;
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// std r8,64(r31)
	REX_STORE_U64(r31.u32 + 64, ctx.r8.u64);
	// std r10,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r10.u64);
	// beq cr6,0x822b8d44
	if (ctx.cr6.eq) goto loc_822B8D44;
	// lfs f12,8(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// lfs f5,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f8
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// lfs f2,8(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f28,352(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 352);
	f28.f64 = double(temp.f32);
	// fmsubs f10,f7,f8,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f7.f64, ctx.f8.f64, -ctx.f10.f64)));
	// fmsubs f11,f5,f11,f6
	ctx.f11.f64 = double(float(std::fma(ctx.f5.f64, ctx.f11.f64, -ctx.f6.f64)));
	// fmsubs f12,f12,f9,f3
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f9.f64, -ctx.f3.f64)));
	// fmuls f10,f4,f10
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmadds f11,f2,f11,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f2.f64, ctx.f11.f64, ctx.f10.f64)));
	// fmadds f12,f1,f12,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f1.f64, ctx.f12.f64, ctx.f11.f64)));
	// fadds f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 + f28.f64));
loc_822B8D44:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822b8da8
	if (ctx.cr6.eq) goto loc_822B8DA8;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f9,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,8(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fneg f9,f9
	ctx.f9.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// lfs f10,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// lfs f7,4(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,0(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,352(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 352);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f11,f13
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f28,f7,f9
	f28.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fmuls f1,f8,f10
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmsubs f9,f8,f9,f2
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f9.f64, -ctx.f2.f64)));
	// fmsubs f11,f11,f10,f28
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f10.f64, -f28.f64)));
	// fmsubs f13,f7,f13,f1
	ctx.f13.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, -ctx.f1.f64)));
	// fmuls f10,f6,f9
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fmadds f13,f5,f13,f10
	ctx.f13.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f13,f4,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f4.f64, ctx.f11.f64, ctx.f13.f64)));
	// fadds f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
loc_822B8DA8:
	// fadds f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// fdivs f9,f31,f13
	ctx.f9.f64 = double(float(f31.f64 / ctx.f13.f64));
	// stfs f9,92(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// beq cr6,0x822b8dc4
	if (ctx.cr6.eq) goto loc_822B8DC4;
	// addi r10,r30,320
	ctx.r10.s64 = r30.s64 + 320;
	// b 0x822b8dd8
	goto loc_822B8DD8;
loc_822B8DC4:
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_822B8DD8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822b8de8
	if (ctx.cr6.eq) goto loc_822B8DE8;
	// addi r11,r30,336
	ctx.r11.s64 = r30.s64 + 336;
	// b 0x822b8dfc
	goto loc_822B8DFC;
loc_822B8DE8:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_822B8DFC:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// lfs f12,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f8,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f6,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f12,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f5,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f11,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f4,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f10,f8,f7,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f8.f64, ctx.f7.f64, ctx.f10.f64)));
	// fmadds f10,f6,f13,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f10,f5,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f10.f64)));
	// fmadds f10,f11,f4,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f11.f64, ctx.f4.f64, ctx.f10.f64)));
	// fmadds f10,f3,f2,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f3.f64, ctx.f2.f64, ctx.f10.f64)));
	// beq cr6,0x822b8e54
	if (ctx.cr6.eq) goto loc_822B8E54;
	// addi r10,r28,320
	ctx.r10.s64 = r28.s64 + 320;
	// b 0x822b8e68
	goto loc_822B8E68;
loc_822B8E54:
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_822B8E68:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822b8e78
	if (ctx.cr6.eq) goto loc_822B8E78;
	// addi r11,r28,336
	ctx.r11.s64 = r28.s64 + 336;
	// b 0x822b8e8c
	goto loc_822B8E8C;
loc_822B8E78:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_822B8E8C:
	// lfs f8,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f7,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// addi r8,r8,16592
	ctx.r8.s64 = ctx.r8.s64 + 16592;
	// lfs f5,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// lfs f13,1084(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1084);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f8,f7,f6,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f7.f64, ctx.f6.f64, -ctx.f8.f64)));
	// stfs f29,120(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// stfs f13,128(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// fnmsubs f0,f5,f12,f8
	ctx.f0.f64 = double(float(-std::fma(ctx.f5.f64, ctx.f12.f64, -ctx.f8.f64)));
	// fmadds f0,f4,f3,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f4.f64, ctx.f3.f64, ctx.f0.f64)));
	// fnmsubs f0,f2,f11,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f2.f64, ctx.f11.f64, -ctx.f0.f64)));
	// fmadds f0,f1,f31,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f31.f64, ctx.f0.f64)));
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 - ctx.f0.f64));
	// fmuls f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2cf4
	ctx.lr = 0x822B8EFC;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_822E0AB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822E0AB8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,21868(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21868);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,16772(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16772);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822e0ad8
	if (!ctx.cr6.eq) goto loc_822E0AD8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822e0b04
	goto loc_822E0B04;
loc_822E0AD8:
	// bl 0x82793a84
	ctx.lr = 0x822E0ADC;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x822e0b00
	if (ctx.cr6.eq) goto loc_822E0B00;
	// lwz r11,21856(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 21856);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x822e0b0c
	if (ctx.cr6.eq) goto loc_822E0B0C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e0b00
	if (!ctx.cr6.eq) goto loc_822E0B00;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,21856(r30)
	REX_STORE_U32(r30.u32 + 21856, ctx.r11.u32);
loc_822E0B00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822E0B04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_822E0B0C:
	// lwz r10,21864(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 21864);
	// lwz r11,21860(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 21860);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822e0b00
	if (ctx.cr6.eq) goto loc_822E0B00;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,21848(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 21848);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e0b40
	if (ctx.cr6.eq) goto loc_822E0B40;
	// bl 0x822d60c0
	ctx.lr = 0x822E0B38;
	sub_822D60C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822e0b00
	if (!ctx.cr0.eq) goto loc_822E0B00;
loc_822E0B40:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r5,480
	ctx.r5.s64 = 480;
	// addi r31,r11,-836
	r31.s64 = ctx.r11.s64 + -836;
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// addi r4,r31,-556
	ctx.r4.s64 = r31.s64 + -556;
	// bl 0x826a1e70
	ctx.lr = 0x822E0B58;
	sub_826A1E70(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,21848(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 21848);
	// stw r11,-4(r31)
	REX_STORE_U32(r31.u32 + -4, ctx.r11.u32);
	// lwz r11,21860(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 21860);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,12(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e0b80
	if (ctx.cr6.eq) goto loc_822E0B80;
	// bl 0x822d6058
	ctx.lr = 0x822E0B80;
	sub_822D6058(ctx, base);
loc_822E0B80:
	// lwz r29,4(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r3,r31,-556
	ctx.r3.s64 = r31.s64 + -556;
	// li r5,480
	ctx.r5.s64 = 480;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x822E0B94;
	sub_826A1E70(ctx, base);
	// addi r4,r29,480
	ctx.r4.s64 = r29.s64 + 480;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822daf40
	ctx.lr = 0x822E0BA0;
	sub_822DAF40(ctx, base);
	// lwz r11,21860(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 21860);
	// lwz r10,21852(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 21852);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bne cr6,0x822e0bd0
	if (!ctx.cr6.eq) goto loc_822E0BD0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822e0bd4
	goto loc_822E0BD4;
loc_822E0BD0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822E0BD4:
	// lwz r10,16772(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16772);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,21860(r30)
	REX_STORE_U32(r30.u32 + 21860, ctx.r11.u32);
	// stw r10,21868(r30)
	REX_STORE_U32(r30.u32 + 21868, ctx.r10.u32);
	// b 0x822e0b04
	goto loc_822E0B04;
}

DEFINE_REX_FUNC(sub_822E75A8) {
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
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r3,6080(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6080);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822E75D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822e76f4
	if (ctx.cr0.eq) goto loc_822E76F4;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r11,r10,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e75f0
	if (ctx.cr0.eq) goto loc_822E75F0;
	// li r31,1
	r31.s64 = 1;
loc_822E75F0:
	// rlwinm. r11,r10,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e75fc
	if (ctx.cr0.eq) goto loc_822E75FC;
	// ori r31,r31,2
	r31.u64 = r31.u64 | 2;
loc_822E75FC:
	// rlwinm. r11,r10,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e7608
	if (ctx.cr0.eq) goto loc_822E7608;
	// ori r31,r31,4
	r31.u64 = r31.u64 | 4;
loc_822E7608:
	// rlwinm. r11,r10,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e7614
	if (ctx.cr0.eq) goto loc_822E7614;
	// ori r31,r31,8
	r31.u64 = r31.u64 | 8;
loc_822E7614:
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e7620
	if (ctx.cr0.eq) goto loc_822E7620;
	// ori r31,r31,16
	r31.u64 = r31.u64 | 16;
loc_822E7620:
	// rlwinm. r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e762c
	if (ctx.cr0.eq) goto loc_822E762C;
	// ori r31,r31,32
	r31.u64 = r31.u64 | 32;
loc_822E762C:
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e7638
	if (ctx.cr0.eq) goto loc_822E7638;
	// ori r31,r31,64
	r31.u64 = r31.u64 | 64;
loc_822E7638:
	// rlwinm. r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e7644
	if (ctx.cr0.eq) goto loc_822E7644;
	// ori r31,r31,128
	r31.u64 = r31.u64 | 128;
loc_822E7644:
	// rlwinm. r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e7650
	if (ctx.cr0.eq) goto loc_822E7650;
	// ori r31,r31,256
	r31.u64 = r31.u64 | 256;
loc_822E7650:
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e765c
	if (ctx.cr0.eq) goto loc_822E765C;
	// ori r31,r31,512
	r31.u64 = r31.u64 | 512;
loc_822E765C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x822e7678
	if (!ctx.cr6.gt) goto loc_822E7678;
	// ori r31,r31,64
	r31.u64 = r31.u64 | 64;
loc_822E7678:
	// lfs f13,160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822e7688
	if (!ctx.cr6.lt) goto loc_822E7688;
	// ori r31,r31,128
	r31.u64 = r31.u64 | 128;
loc_822E7688:
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822e7698
	if (!ctx.cr6.lt) goto loc_822E7698;
	// ori r31,r31,256
	r31.u64 = r31.u64 | 256;
loc_822E7698:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x822e76a4
	if (!ctx.cr6.gt) goto loc_822E76A4;
	// ori r31,r31,512
	r31.u64 = r31.u64 | 512;
loc_822E76A4:
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x822e76b4
	if (!ctx.cr6.gt) goto loc_822E76B4;
	// ori r31,r31,1024
	r31.u64 = r31.u64 | 1024;
loc_822E76B4:
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x822e76c4
	if (!ctx.cr6.gt) goto loc_822E76C4;
	// ori r31,r31,2048
	r31.u64 = r31.u64 | 2048;
loc_822E76C4:
	// rlwinm. r11,r10,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e76d0
	if (ctx.cr0.eq) goto loc_822E76D0;
	// ori r31,r31,4096
	r31.u64 = r31.u64 | 4096;
loc_822E76D0:
	// rlwinm. r11,r10,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e76dc
	if (ctx.cr0.eq) goto loc_822E76DC;
	// ori r31,r31,8192
	r31.u64 = r31.u64 | 8192;
loc_822E76DC:
	// rlwinm. r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e76e8
	if (ctx.cr0.eq) goto loc_822E76E8;
	// ori r31,r31,16384
	r31.u64 = r31.u64 | 16384;
loc_822E76E8:
	// rlwinm. r11,r10,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e76f4
	if (ctx.cr0.eq) goto loc_822E76F4;
	// ori r31,r31,32768
	r31.u64 = r31.u64 | 32768;
loc_822E76F4:
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

DEFINE_REX_FUNC(sub_822F4108) {
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
	// bl 0x823f5788
	ctx.lr = 0x822F4128;
	sub_823F5788(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822f4164
	if (ctx.cr6.eq) goto loc_822F4164;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823f2998
	ctx.lr = 0x822F413C;
	sub_823F2998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822f4164
	if (!ctx.cr6.gt) goto loc_822F4164;
	// neg r11,r3
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r3.u64);
loc_822F4148:
	// mfmsr r8
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r30
	ea = r30.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r30
	ea = r30.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822f4148
	if (!ctx.cr0.eq) goto loc_822F4148;
loc_822F4164:
	// bl 0x823f5788
	ctx.lr = 0x822F4168;
	sub_823F5788(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823f4018
	ctx.lr = 0x822F4174;
	sub_823F4018(ctx, base);
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

DEFINE_REX_FUNC(sub_822F6A68) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f66b0
	ctx.lr = 0x822F6A84;
	sub_822F66B0(ctx, base);
	// lis r31,-32126
	r31.s64 = -2105409536;
	// b 0x822f6a9c
	goto loc_822F6A9C;
loc_822F6A8C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,-10940(r31)
	REX_STORE_U32(r31.u32 + -10940, ctx.r11.u32);
	// bl 0x822f6838
	ctx.lr = 0x822F6A9C;
	sub_822F6838(ctx, base);
loc_822F6A9C:
	// lwz r3,-10940(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -10940);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822f6a8c
	if (!ctx.cr6.eq) goto loc_822F6A8C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f6700
	ctx.lr = 0x822F6AB0;
	sub_822F6700(ctx, base);
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

DEFINE_REX_FUNC(sub_822F7EF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f7fb8
	if (!ctx.cr0.eq) goto loc_822F7FB8;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lfs f12,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lfs f0,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// stw r11,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// ld r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 88);
	// beq cr6,0x822f7fa4
	if (ctx.cr6.eq) goto loc_822F7FA4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ld r7,80(r3)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r3.u32 + 80);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// addi r5,r1,-16
	ctx.r5.s64 = ctx.r1.s64 + -16;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f13,3048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3048);
	ctx.f13.f64 = double(temp.f32);
	// subf r9,r7,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r7.u64;
	// lfs f0,3704(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// rldicl r9,r9,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vexptefp128 v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	{
		simde__m128 x = simde_mm_load_ps(ctx.v63.f32);
		simde__m128 n = simde_mm_round_ps(x, SIMDE_MM_FROUND_TO_NEG_INF | SIMDE_MM_FROUND_NO_EXC);
		simde__m128 f = simde_mm_sub_ps(x, n);
		simde__m128 p = simde_mm_set1_ps(1.8775767e-3f);
		p = simde_mm_add_ps(simde_mm_mul_ps(p, f), simde_mm_set1_ps(8.9893397e-3f));
		p = simde_mm_add_ps(simde_mm_mul_ps(p, f), simde_mm_set1_ps(5.5826318e-2f));
		p = simde_mm_add_ps(simde_mm_mul_ps(p, f), simde_mm_set1_ps(2.4015361e-1f));
		p = simde_mm_add_ps(simde_mm_mul_ps(p, f), simde_mm_set1_ps(6.9315308e-1f));
		p = simde_mm_add_ps(simde_mm_mul_ps(p, f), simde_mm_set1_ps(1.0f));
		simde__m128i exp_bits = simde_mm_slli_epi32(
			simde_mm_add_epi32(simde_mm_cvttps_epi32(n), simde_mm_set1_epi32(127)), 23);
		simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(p, simde_mm_castsi128_ps(exp_bits)));
	}
	// lfs f0,3772(r4)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 3772);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,-16(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// ld r8,-16(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// mulld r9,r9,r8
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * ctx.r8.u64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x822f7fb0
	goto loc_822F7FB0;
loc_822F7FA4:
	// ld r9,80(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822F7FB0:
	// std r10,88(r3)
	REX_STORE_U64(ctx.r3.u32 + 88, ctx.r10.u64);
	// std r11,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, ctx.r11.u64);
loc_822F7FB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FFB00) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822ffb10
	if (!ctx.cr6.eq) goto loc_822FFB10;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_822FFB10:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82300118) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82300120;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82300164
	if (ctx.cr6.eq) goto loc_82300164;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82300164
	if (!ctx.cr6.eq) goto loc_82300164;
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x822ffee8
	ctx.lr = 0x8230015C;
	sub_822FFEE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823001e0
	if (!ctx.cr0.eq) goto loc_823001E0;
loc_82300164:
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r29,-32129
	r29.s64 = -2105606144;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r30,r11,4008
	r30.s64 = ctx.r11.s64 + 4008;
	// beq cr6,0x82300194
	if (ctx.cr6.eq) goto loc_82300194;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,89
	ctx.r6.s64 = 89;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82300194;
	sub_82330D00(ctx, base);
loc_82300194:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823001c0
	if (ctx.cr6.eq) goto loc_823001C0;
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823001b4
	if (ctx.cr6.eq) goto loc_823001B4;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x823001b8
	goto loc_823001B8;
loc_823001B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823001B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823001dc
	if (!ctx.cr6.eq) goto loc_823001DC;
loc_823001C0:
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823001DC;
	sub_82330D00(ctx, base);
loc_823001DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823001E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82306130) {
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
	ctx.lr = 0x82306138;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8230615c
	if (!ctx.cr6.eq) goto loc_8230615C;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82306658
	goto loc_82306658;
loc_8230615C:
	// li r30,0
	r30.s64 = 0;
	// lis r27,-32129
	r27.s64 = -2105606144;
	// mr r19,r30
	r19.u64 = r30.u64;
	// stw r30,0(r20)
	REX_STORE_U32(r20.u32 + 0, r30.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// li r4,320
	ctx.r4.s64 = 320;
	// beq cr6,0x823061ac
	if (ctx.cr6.eq) goto loc_823061AC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,1388
	ctx.r6.s64 = 1388;
	// addi r31,r11,4384
	r31.s64 = ctx.r11.s64 + 4384;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8230eda8
	ctx.lr = 0x82306190;
	sub_8230EDA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823061a4
	if (ctx.cr0.eq) goto loc_823061A4;
	// bl 0x822fddf0
	ctx.lr = 0x8230619C;
	sub_822FDDF0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x823061ec
	goto loc_823061EC;
loc_823061A4:
	// mr r29,r30
	r29.u64 = r30.u64;
	// b 0x823061ec
	goto loc_823061EC;
loc_823061AC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r10,4384
	r31.s64 = ctx.r10.s64 + 4384;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,1392
	ctx.r6.s64 = 1392;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x823061D0;
	sub_82330A38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823061e4
	if (ctx.cr0.eq) goto loc_823061E4;
	// bl 0x822fddf0
	ctx.lr = 0x823061DC;
	sub_822FDDF0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x823061e8
	goto loc_823061E8;
loc_823061E4:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_823061E8:
	// mr r19,r29
	r19.u64 = r29.u64;
loc_823061EC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82306224
	if (!ctx.cr6.eq) goto loc_82306224;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x8230621c
	if (ctx.cr6.eq) goto loc_8230621C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r10,4440
	ctx.r5.s64 = ctx.r10.s64 + 4440;
loc_82306204:
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,160
	ctx.r6.s64 = 160;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8230621C;
	sub_82330D00(ctx, base);
loc_8230621C:
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x82306658
	goto loc_82306658;
loc_82306224:
	// rlwinm. r23,r26,0,30,30
	r23.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// li r25,320
	r25.s64 = 320;
	// mr r21,r30
	r21.u64 = r30.u64;
	// mr r22,r30
	r22.u64 = r30.u64;
	// beq 0x82306378
	if (ctx.cr0.eq) goto loc_82306378;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,68
	ctx.r4.s64 = 68;
	// beq cr6,0x8230625c
	if (ctx.cr6.eq) goto loc_8230625C;
	// li r6,1414
	ctx.r6.s64 = 1414;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8230eda8
	ctx.lr = 0x82306254;
	sub_8230EDA8(ctx, base);
	// stw r3,168(r29)
	REX_STORE_U32(r29.u32 + 168, ctx.r3.u32);
	// b 0x8230627c
	goto loc_8230627C;
loc_8230625C:
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1418
	ctx.r6.s64 = 1418;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x82306274;
	sub_82330A38(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// stw r3,168(r29)
	REX_STORE_U32(r29.u32 + 168, ctx.r3.u32);
loc_8230627C:
	// lwz r10,168(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 168);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823062c4
	if (!ctx.cr6.eq) goto loc_823062C4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r11,4440
	r31.s64 = ctx.r11.s64 + 4440;
loc_82306290:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x823062b4
	if (ctx.cr6.eq) goto loc_823062B4;
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,160
	ctx.r6.s64 = 160;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823062B4;
	sub_82330D00(ctx, base);
loc_823062B4:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x8230621c
	if (ctx.cr6.eq) goto loc_8230621C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// b 0x82306204
	goto loc_82306204;
loc_823062C4:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r25,388
	r25.s64 = 388;
	// lwz r11,-10820(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -10820);
	// lwz r11,164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82306374
	if (ctx.cr0.eq) goto loc_82306374;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// beq cr6,0x82306304
	if (ctx.cr6.eq) goto loc_82306304;
	// li r6,1437
	ctx.r6.s64 = 1437;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8230eda8
	ctx.lr = 0x823062F8;
	sub_8230EDA8(ctx, base);
	// lwz r11,168(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 168);
	// stw r3,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// b 0x8230632c
	goto loc_8230632C;
loc_82306304:
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1441
	ctx.r6.s64 = 1441;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x8230631C;
	sub_82330A38(ctx, base);
	// lwz r11,168(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 168);
	// stw r3,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// lwz r11,168(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 168);
	// lwz r22,20(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
loc_8230632C:
	// lwz r11,168(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 168);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230636c
	if (!ctx.cr6.eq) goto loc_8230636C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r11,4440
	r31.s64 = ctx.r11.s64 + 4440;
loc_82306344:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82306290
	if (ctx.cr6.eq) goto loc_82306290;
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,160
	ctx.r6.s64 = 160;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82306368;
	sub_82330D00(ctx, base);
	// b 0x82306290
	goto loc_82306290;
loc_8230636C:
	// li r25,404
	r25.s64 = 404;
	// b 0x82306378
	goto loc_82306378;
loc_82306374:
	// stw r30,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, r30.u32);
loc_82306378:
	// rlwinm. r11,r26,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r26,r30
	r26.u64 = r30.u64;
	// beq 0x82306450
	if (ctx.cr0.eq) goto loc_82306450;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,36
	ctx.r4.s64 = 36;
	// beq cr6,0x823063cc
	if (ctx.cr6.eq) goto loc_823063CC;
	// li r6,1468
	ctx.r6.s64 = 1468;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8230eda8
	ctx.lr = 0x823063A0;
	sub_8230EDA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823063c0
	if (ctx.cr0.eq) goto loc_823063C0;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x823063c4
	goto loc_823063C4;
loc_823063C0:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_823063C4:
	// stw r10,172(r29)
	REX_STORE_U32(r29.u32 + 172, ctx.r10.u32);
	// b 0x82306410
	goto loc_82306410;
loc_823063CC:
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1472
	ctx.r6.s64 = 1472;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x823063E4;
	sub_82330A38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82306404
	if (ctx.cr0.eq) goto loc_82306404;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82306408
	goto loc_82306408;
loc_82306404:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82306408:
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// stw r11,172(r29)
	REX_STORE_U32(r29.u32 + 172, ctx.r11.u32);
loc_82306410:
	// lwz r11,172(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230644c
	if (!ctx.cr6.eq) goto loc_8230644C;
loc_8230641C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// addi r31,r11,4440
	r31.s64 = ctx.r11.s64 + 4440;
	// beq cr6,0x82306344
	if (ctx.cr6.eq) goto loc_82306344;
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,160
	ctx.r6.s64 = 160;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82306448;
	sub_82330D00(ctx, base);
	// b 0x82306344
	goto loc_82306344;
loc_8230644C:
	// addi r25,r25,36
	r25.s64 = r25.s64 + 36;
loc_82306450:
	// cmplwi cr6,r24,8
	ctx.cr6.compare<uint32_t>(r24.u32, 8, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bne cr6,0x823064c4
	if (!ctx.cr6.eq) goto loc_823064C4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// li r4,48
	ctx.r4.s64 = 48;
	// beq cr6,0x8230648c
	if (ctx.cr6.eq) goto loc_8230648C;
	// li r6,1494
	ctx.r6.s64 = 1494;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8230eda8
	ctx.lr = 0x82306474;
	sub_8230EDA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82306484
	if (ctx.cr0.eq) goto loc_82306484;
	// bl 0x823266f0
	ctx.lr = 0x82306480;
	sub_823266F0(ctx, base);
	// b 0x823064bc
	goto loc_823064BC;
loc_82306484:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x823064bc
	goto loc_823064BC;
loc_8230648C:
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1498
	ctx.r6.s64 = 1498;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x823064A4;
	sub_82330A38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823064b4
	if (ctx.cr0.eq) goto loc_823064B4;
	// bl 0x823266f0
	ctx.lr = 0x823064B0;
	sub_823266F0(ctx, base);
	// b 0x823064b8
	goto loc_823064B8;
loc_823064B4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_823064B8:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_823064BC:
	// addi r31,r25,48
	r31.s64 = r25.s64 + 48;
	// b 0x82306528
	goto loc_82306528;
loc_823064C4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// li r4,20
	ctx.r4.s64 = 20;
	// beq cr6,0x823064f4
	if (ctx.cr6.eq) goto loc_823064F4;
	// li r6,1512
	ctx.r6.s64 = 1512;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8230eda8
	ctx.lr = 0x823064DC;
	sub_8230EDA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823064ec
	if (ctx.cr0.eq) goto loc_823064EC;
	// bl 0x8231f680
	ctx.lr = 0x823064E8;
	sub_8231F680(ctx, base);
	// b 0x82306524
	goto loc_82306524;
loc_823064EC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82306524
	goto loc_82306524;
loc_823064F4:
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1516
	ctx.r6.s64 = 1516;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x8230650C;
	sub_82330A38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8230651c
	if (ctx.cr0.eq) goto loc_8230651C;
	// bl 0x8231f680
	ctx.lr = 0x82306518;
	sub_8231F680(ctx, base);
	// b 0x82306520
	goto loc_82306520;
loc_8230651C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82306520:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82306524:
	// addi r31,r25,20
	r31.s64 = r25.s64 + 20;
loc_82306528:
	// stw r3,312(r29)
	REX_STORE_U32(r29.u32 + 312, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82306558
	if (!ctx.cr6.eq) goto loc_82306558;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8230641c
	if (ctx.cr6.eq) goto loc_8230641C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82306554;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8230641c
	goto loc_8230641C;
loc_82306558:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230656C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82306630
	if (ctx.cr0.eq) goto loc_82306630;
loc_82306574:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82306590
	if (ctx.cr6.eq) goto loc_82306590;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82306590;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82306590:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// addi r31,r11,4440
	r31.s64 = ctx.r11.s64 + 4440;
	// beq cr6,0x823065bc
	if (ctx.cr6.eq) goto loc_823065BC;
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,160
	ctx.r6.s64 = 160;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823065BC;
	sub_82330D00(ctx, base);
loc_823065BC:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x823065e0
	if (ctx.cr6.eq) goto loc_823065E0;
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,160
	ctx.r6.s64 = 160;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823065E0;
	sub_82330D00(ctx, base);
loc_823065E0:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82306604
	if (ctx.cr6.eq) goto loc_82306604;
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,160
	ctx.r6.s64 = 160;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82306604;
	sub_82330D00(ctx, base);
loc_82306604:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x82306628
	if (ctx.cr6.eq) goto loc_82306628;
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,160
	ctx.r6.s64 = 160;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82306628;
	sub_82330D00(ctx, base);
loc_82306628:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x82306658
	goto loc_82306658;
loc_82306630:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822f7540
	ctx.lr = 0x82306638;
	sub_822F7540(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x82306574
	if (!ctx.cr0.eq) goto loc_82306574;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82306650
	if (ctx.cr6.eq) goto loc_82306650;
	// lwz r11,168(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 168);
	// stw r31,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, r31.u32);
loc_82306650:
	// stw r29,0(r20)
	REX_STORE_U32(r20.u32 + 0, r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82306658:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_82329960) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82329968;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r6,160
	ctx.r6.s64 = 160;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82331a00
	ctx.lr = 0x82329988;
	sub_82331A00(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82329a00
	if (ctx.cr6.eq) goto loc_82329A00;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823299ec
	if (!ctx.cr6.gt) goto loc_823299EC;
	// li r30,0
	r30.s64 = 0;
loc_823299A8:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823299d8
	if (ctx.cr6.eq) goto loc_823299D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823299D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82329a18
	if (!ctx.cr0.eq) goto loc_82329A18;
loc_823299D8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823299a8
	if (ctx.cr6.lt) goto loc_823299A8;
loc_823299EC:
	// rlwinm r6,r11,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82331a00
	ctx.lr = 0x82329A00;
	sub_82331A00(ctx, base);
loc_82329A00:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82329A18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82329A18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8232E748) {
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
	ctx.lr = 0x8232E750;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// bge 0x8232e78c
	if (!ctx.cr0.lt) goto loc_8232E78C;
	// subfic r10,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8232e794
	goto loc_8232E794;
loc_8232E78C:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_8232E794:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r29,r10,r31
	r29.u64 = ctx.r10.u64 + r31.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// bge 0x8232e7bc
	if (!ctx.cr0.lt) goto loc_8232E7BC;
	// subfic r10,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8232e7c4
	goto loc_8232E7C4;
loc_8232E7BC:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_8232E7C4:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232e7dc
	if (ctx.cr6.eq) goto loc_8232E7DC;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x8232e7e0
	goto loc_8232E7E0;
loc_8232E7DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232E7E0:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8232e814
	if (ctx.cr6.eq) goto loc_8232E814;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bge cr6,0x8232e800
	if (!ctx.cr6.lt) goto loc_8232E800;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// b 0x8232e804
	goto loc_8232E804;
loc_8232E800:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232E804:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8232e814
	if (!ctx.cr0.eq) goto loc_8232E814;
loc_8232E80C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8232e87c
	goto loc_8232E87C;
loc_8232E814:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// bge 0x8232e83c
	if (!ctx.cr0.lt) goto loc_8232E83C;
	// subfic r10,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8232e844
	goto loc_8232E844;
loc_8232E83C:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_8232E844:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r31
	r30.u64 = ctx.r11.u64 + r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8232d588
	ctx.lr = 0x8232E854;
	sub_8232D588(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232e87c
	if (!ctx.cr0.eq) goto loc_8232E87C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8232e80c
	if (ctx.cr6.eq) goto loc_8232E80C;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8232d4d0
	ctx.lr = 0x8232E87C;
	sub_8232D4D0(ctx, base);
loc_8232E87C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8233F0D8) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8234aac0
	ctx.lr = 0x8233F0F4;
	sub_8234AAC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233f108
	if (!ctx.cr6.eq) goto loc_8233F108;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8234cec8
	ctx.lr = 0x8233F108;
	sub_8234CEC8(ctx, base);
loc_8233F108:
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

DEFINE_REX_FUNC(sub_8233FD68) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r4,396(r3)
	REX_STORE_U32(ctx.r3.u32 + 396, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,352(r3)
	REX_STORE_U32(ctx.r3.u32 + 352, ctx.r6.u32);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// stw r10,384(r3)
	REX_STORE_U32(ctx.r3.u32 + 384, ctx.r10.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r10,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// stw r10,372(r11)
	REX_STORE_U32(ctx.r11.u32 + 372, ctx.r10.u32);
	// stw r10,400(r11)
	REX_STORE_U32(ctx.r11.u32 + 400, ctx.r10.u32);
	// stw r10,404(r11)
	REX_STORE_U32(ctx.r11.u32 + 404, ctx.r10.u32);
	// stw r10,344(r11)
	REX_STORE_U32(ctx.r11.u32 + 344, ctx.r10.u32);
	// stw r10,360(r11)
	REX_STORE_U32(ctx.r11.u32 + 360, ctx.r10.u32);
	// stw r10,364(r11)
	REX_STORE_U32(ctx.r11.u32 + 364, ctx.r10.u32);
	// stw r10,368(r11)
	REX_STORE_U32(ctx.r11.u32 + 368, ctx.r10.u32);
	// stw r10,356(r11)
	REX_STORE_U32(ctx.r11.u32 + 356, ctx.r10.u32);
	// stw r10,340(r11)
	REX_STORE_U32(ctx.r11.u32 + 340, ctx.r10.u32);
	// stw r10,348(r11)
	REX_STORE_U32(ctx.r11.u32 + 348, ctx.r10.u32);
	// stw r10,380(r11)
	REX_STORE_U32(ctx.r11.u32 + 380, ctx.r10.u32);
	// stw r10,332(r11)
	REX_STORE_U32(ctx.r11.u32 + 332, ctx.r10.u32);
	// stw r10,336(r11)
	REX_STORE_U32(ctx.r11.u32 + 336, ctx.r10.u32);
	// stw r10,388(r11)
	REX_STORE_U32(ctx.r11.u32 + 388, ctx.r10.u32);
	// stw r10,376(r11)
	REX_STORE_U32(ctx.r11.u32 + 376, ctx.r10.u32);
	// stw r9,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// bl 0x823ef5f0
	ctx.lr = 0x8233FDEC;
	sub_823EF5F0(ctx, base);
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

DEFINE_REX_FUNC(sub_82344BE0) {
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
	ctx.lr = 0x82344BE8;
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,192(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// lwz r26,23376(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 23376);
	// li r30,1
	r30.s64 = 1;
	// bl 0x8233e398
	ctx.lr = 0x82344C10;
	sub_8233E398(ctx, base);
	// lwz r3,192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 192);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,24(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r5,r30
	ctx.r4.u64 = ctx.r5.u64 & r30.u64;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82344c80
	if (ctx.cr6.eq) goto loc_82344C80;
	// clrlwi r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82344c80
	if (!ctx.cr6.eq) goto loc_82344C80;
	// stw r28,156(r31)
	REX_STORE_U32(r31.u32 + 156, r28.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82334888
	ctx.lr = 0x82344C50;
	sub_82334888(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82344c80
	if (ctx.cr6.eq) goto loc_82344C80;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82344C74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82344e3c
	if (!ctx.cr6.eq) goto loc_82344E3C;
loc_82344C80:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82344C94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82344cd4
	if (ctx.cr6.eq) goto loc_82344CD4;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82344cd4
	if (ctx.cr6.eq) goto loc_82344CD4;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82344cc8
	if (!ctx.cr6.eq) goto loc_82344CC8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8233e7e0
	ctx.lr = 0x82344CC4;
	sub_8233E7E0(ctx, base);
	// li r27,1
	r27.s64 = 1;
loc_82344CC8:
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,92(r11)
	REX_STORE_U8(ctx.r11.u32 + 92, ctx.r10.u8);
loc_82344CD4:
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// rlwinm r9,r10,0,30,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r9,r9,0,26,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// beq cr6,0x82344d20
	if (ctx.cr6.eq) goto loc_82344D20;
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm r9,r10,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// rlwinm r9,r9,0,26,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r9,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// lwz r8,152(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 152);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r6,r7,0,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r6,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r6.u32);
	// lwz r5,32(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
	// clrlwi r4,r5,29
	ctx.r4.u64 = ctx.r5.u32 & 0x7;
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
loc_82344D20:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// stw r28,156(r31)
	REX_STORE_U32(r31.u32 + 156, r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bne cr6,0x82344d38
	if (!ctx.cr6.eq) goto loc_82344D38;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82344D38:
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82344D4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82344d78
	if (ctx.cr6.eq) goto loc_82344D78;
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82344d6c
	if (ctx.cr6.eq) goto loc_82344D6C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8233e820
	ctx.lr = 0x82344D6C;
	sub_8233E820(ctx, base);
loc_82344D6C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x826a1d00
	return;
loc_82344D78:
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82344d8c
	if (ctx.cr6.eq) goto loc_82344D8C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82331480
	ctx.lr = 0x82344D8C;
	sub_82331480(ctx, base);
loc_82344D8C:
	// lwz r11,360(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r4,376(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 376);
	// li r5,2
	ctx.r5.s64 = 2;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lwz r6,380(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r9,352(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r10,388(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r8,356(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// subf r11,r4,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r4.u64;
	// lwz r30,368(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// stfs f12,80(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// stw r4,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r4.u32);
	// stw r8,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r8.u32);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,172(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 172);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82344DFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82344E10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82344e28
	if (ctx.cr6.eq) goto loc_82344E28;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// lwz r10,388(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// stw r10,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
loc_82344E28:
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82344e3c
	if (ctx.cr6.eq) goto loc_82344E3C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8233e820
	ctx.lr = 0x82344E3C;
	sub_8233E820(ctx, base);
loc_82344E3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82355C90) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r6,368
	ctx.r6.s64 = 368;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82331a00
	ctx.lr = 0x82355CC0;
	sub_82331A00(ctx, base);
	// lwz r11,364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 364);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82355d08
	if (ctx.cr6.eq) goto loc_82355D08;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82355cf0
	if (ctx.cr6.eq) goto loc_82355CF0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82358798
	ctx.lr = 0x82355CE8;
	sub_82358798(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82355d14
	if (!ctx.cr6.eq) goto loc_82355D14;
loc_82355CF0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r6,r11,392
	ctx.r6.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(392));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82331a00
	ctx.lr = 0x82355D08;
	sub_82331A00(ctx, base);
loc_82355D08:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82359b10
	ctx.lr = 0x82355D14;
	sub_82359B10(ctx, base);
loc_82355D14:
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

DEFINE_REX_FUNC(sub_82359B10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82359B18;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,40(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82359b3c
	if (ctx.cr6.eq) goto loc_82359B3C;
	// bl 0x823589b8
	ctx.lr = 0x82359B34;
	sub_823589B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359bdc
	if (!ctx.cr6.eq) goto loc_82359BDC;
loc_82359B3C:
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82359b64
	if (ctx.cr6.eq) goto loc_82359B64;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82359b64
	if (ctx.cr6.eq) goto loc_82359B64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823589b8
	ctx.lr = 0x82359B5C;
	sub_823589B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359bdc
	if (!ctx.cr6.eq) goto loc_82359BDC;
loc_82359B64:
	// addi r28,r31,96
	r28.s64 = r31.s64 + 96;
	// lwz r31,96(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// beq cr6,0x82359bd8
	if (ctx.cr6.eq) goto loc_82359BD8;
loc_82359B74:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82359bcc
	if (ctx.cr6.eq) goto loc_82359BCC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82359B9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359bdc
	if (!ctx.cr6.eq) goto loc_82359BDC;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82359bcc
	if (ctx.cr6.eq) goto loc_82359BCC;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// rlwinm r6,r10,13,0,18
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFFFE000;
	// bl 0x82331a00
	ctx.lr = 0x82359BCC;
	sub_82331A00(ctx, base);
loc_82359BCC:
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// bne cr6,0x82359b74
	if (!ctx.cr6.eq) goto loc_82359B74;
loc_82359BD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82359BDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82360328) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823603fc
	if (ctx.cr6.eq) goto loc_823603FC;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,-4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x823603fc
	if (ctx.cr6.gt) goto loc_823603FC;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x823603fc
	if (ctx.cr6.gt) goto loc_823603FC;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r11,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r11.u64;
	// lwz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// divwu r11,r9,r10
	ctx.r11.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwzx r8,r9,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8236041c
	if (!ctx.cr6.lt) goto loc_8236041C;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82360394:
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823603e8
	if (ctx.cr6.lt) goto loc_823603E8;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823603e8
	if (!ctx.cr6.eq) goto loc_823603E8;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x823603e8
	if (ctx.cr6.lt) goto loc_823603E8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82360394
	if (ctx.cr6.lt) goto loc_82360394;
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
loc_823603E8:
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823603FC:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,10884
	ctx.r5.s64 = ctx.r10.s64 + 10884;
	// li r6,210
	ctx.r6.s64 = 210;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8236041C;
	sub_82330D00(ctx, base);
loc_8236041C:
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

DEFINE_REX_FUNC(sub_823671E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823671F0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r29,r3,1
	r29.s64 = ctx.r3.s64 + 65536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r29,16428
	r29.s64 = r29.s64 + 16428;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x82367250
	if (!ctx.cr6.gt) goto loc_82367250;
	// bl 0x823669c0
	ctx.lr = 0x82367218;
	sub_823669C0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x82367250
	if (!ctx.cr6.gt) goto loc_82367250;
	// li r31,32
	r31.s64 = 32;
loc_82367230:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82366cf8
	ctx.lr = 0x82367238;
	sub_82366CF8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82367230
	if (ctx.cr6.lt) goto loc_82367230;
loc_82367250:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82367330
	if (!ctx.cr6.eq) goto loc_82367330;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82367390
	if (!ctx.cr6.gt) goto loc_82367390;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// add r7,r5,r11
	ctx.r7.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r5,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r8,r7,-4
	ctx.r8.s64 = ctx.r7.s64 + -4;
loc_823672A4:
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f8,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f6,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f10,f12
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f4,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f8,f6
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// lfs f2,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f6,f8
	ctx.f1.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// fadds f0,f4,f2
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// fsubs f13,f2,f4
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// fadds f12,f7,f11
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fsubs f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// fadds f10,f5,f1
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// fadds f8,f0,f3
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f3.f64));
	// stfsu f8,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// stfs f11,4(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fsubs f7,f3,f0
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// stfsu f7,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fsubs f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// stfs f6,4(r9)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fadds f4,f13,f9
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfsu f10,8(r9)
	ea = 8 + ctx.r9.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fsubs f3,f1,f5
	ctx.f3.f64 = double(float(ctx.f1.f64 - ctx.f5.f64));
	// stfs f4,4(r8)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfsu f3,8(r8)
	ea = 8 + ctx.r8.u32;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x823672a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823672A4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_82367330:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82367390
	if (!ctx.cr6.gt) goto loc_82367390;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82367358:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f10,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f11,4(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fsubs f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f7,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// stfsu f6,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfsu f8,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82367358
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82367358;
loc_82367390:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8237C338) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb4
	ctx.lr = 0x8237C340;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2ca4
	ctx.lr = 0x8237C348;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r28,0
	r28.s64 = 0;
	// li r8,12800
	ctx.r8.s64 = 12800;
	// li r29,1
	r29.s64 = 1;
	// lfs f31,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f31.f64 = double(temp.f32);
	// lfs f29,19072(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 19072);
	f29.f64 = double(temp.f32);
	// stb r28,608(r3)
	REX_STORE_U8(ctx.r3.u32 + 608, r28.u8);
	// lfs f30,3704(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	f30.f64 = double(temp.f32);
	// stw r8,612(r3)
	REX_STORE_U32(ctx.r3.u32 + 612, ctx.r8.u32);
	// stfs f31,448(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 448, temp.u32);
	// stw r28,492(r3)
	REX_STORE_U32(ctx.r3.u32 + 492, r28.u32);
	// stfs f31,496(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 496, temp.u32);
	// stb r29,508(r3)
	REX_STORE_U8(ctx.r3.u32 + 508, r29.u8);
	// stfs f31,504(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 504, temp.u32);
	// stw r28,548(r3)
	REX_STORE_U32(ctx.r3.u32 + 548, r28.u32);
	// stfs f29,460(r3)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r3.u32 + 460, temp.u32);
	// stb r28,564(r3)
	REX_STORE_U8(ctx.r3.u32 + 564, r28.u8);
	// stfs f31,464(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 464, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f31,472(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 472, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f29,476(r3)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r3.u32 + 476, temp.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stfs f31,484(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 484, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfs f29,488(r3)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r3.u32 + 488, temp.u32);
	// stfs f31,552(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 552, temp.u32);
	// stfs f31,516(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 516, temp.u32);
	// stfs f30,520(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 520, temp.u32);
	// stfs f30,528(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 528, temp.u32);
	// stfs f31,532(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 532, temp.u32);
	// stfs f31,540(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 540, temp.u32);
	// stfs f31,544(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 544, temp.u32);
	// stfs f31,444(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 444, temp.u32);
	// stfs f31,452(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 452, temp.u32);
	// stfs f31,500(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 500, temp.u32);
	// stfs f31,456(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 456, temp.u32);
	// stfs f31,468(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 468, temp.u32);
	// stfs f31,480(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 480, temp.u32);
	// stfs f30,556(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 556, temp.u32);
	// stfs f31,560(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 560, temp.u32);
	// stfs f31,512(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 512, temp.u32);
	// stfs f31,524(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 524, temp.u32);
	// stfs f31,536(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 536, temp.u32);
	// bl 0x8237c000
	ctx.lr = 0x8237C408;
	sub_8237C000(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237c460
	if (!ctx.cr6.eq) goto loc_8237C460;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,19068(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 19068);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,8516(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8516);
	ctx.f13.f64 = double(temp.f32);
	// lfd f1,10608(r9)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r9.u32 + 10608);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f10,596(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 596, temp.u32);
	// fmuls f2,f10,f13
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// bl 0x8269f778
	ctx.lr = 0x8237C454;
	sub_8269F778(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// fsubs f8,f30,f9
	ctx.f8.f64 = double(float(f30.f64 - ctx.f9.f64));
	// stfs f8,596(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 596, temp.u32);
loc_8237C460:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237c000
	ctx.lr = 0x8237C474;
	sub_8237C000(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f27,19564(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 19564);
	f27.f64 = double(temp.f32);
	// bne cr6,0x8237c4a4
	if (!ctx.cr6.eq) goto loc_8237C4A4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f27
	ctx.f11.f64 = double(float(ctx.f12.f64 * f27.f64));
	// stfs f11,600(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 600, temp.u32);
loc_8237C4A4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237c000
	ctx.lr = 0x8237C4B8;
	sub_8237C000(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r27,2048
	r27.s64 = 134217728;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f28,19064(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 19064);
	f28.f64 = double(temp.f32);
	// bne cr6,0x8237c500
	if (!ctx.cr6.eq) goto loc_8237C500;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// bne cr6,0x8237c4e0
	if (!ctx.cr6.eq) goto loc_8237C4E0;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
	// b 0x8237c4fc
	goto loc_8237C4FC;
loc_8237C4E0:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fnmsubs f11,f12,f28,f30
	ctx.f11.f64 = double(float(-std::fma(ctx.f12.f64, f28.f64, -f30.f64)));
	// fmuls f0,f11,f29
	ctx.f0.f64 = double(float(ctx.f11.f64 * f29.f64));
loc_8237C4FC:
	// stfs f0,604(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 604, temp.u32);
loc_8237C500:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,260
	ctx.r5.s64 = 260;
	// li r4,1997
	ctx.r4.s64 = 1997;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237c000
	ctx.lr = 0x8237C514;
	sub_8237C000(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237c56c
	if (!ctx.cr6.eq) goto loc_8237C56C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,19060(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 19060);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,19056(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 19056);
	ctx.f13.f64 = double(temp.f32);
	// lfd f1,8312(r9)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r9.u32 + 8312);
	// fmsubs f11,f12,f27,f0
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, f27.f64, -ctx.f0.f64)));
	// fmuls f2,f11,f13
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// bl 0x8269f778
	ctx.lr = 0x8237C558;
	sub_8269F778(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,19052(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 19052);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,452(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 452, temp.u32);
loc_8237C56C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,261
	ctx.r5.s64 = 261;
	// li r4,1997
	ctx.r4.s64 = 1997;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237c000
	ctx.lr = 0x8237C580;
	sub_8237C000(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237c598
	if (!ctx.cr6.eq) goto loc_8237C598;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8237c298
	ctx.lr = 0x8237C594;
	sub_8237C298(ctx, base);
	// stfs f1,444(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 444, temp.u32);
loc_8237C598:
	// lwz r30,588(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 588);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8237c608
	if (!ctx.cr6.gt) goto loc_8237C608;
	// lwz r11,592(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 592);
loc_8237C5AC:
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8237c5c4
	if (!ctx.cr6.eq) goto loc_8237C5C4;
	// lhz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r8,518
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 518, ctx.xer);
	// beq cr6,0x8237c5dc
	if (ctx.cr6.eq) goto loc_8237C5DC;
loc_8237C5C4:
	// lwz r9,588(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 588);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8237c5ac
	if (ctx.cr6.lt) goto loc_8237C5AC;
	// b 0x8237c608
	goto loc_8237C608;
loc_8237C5DC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,518
	ctx.r5.s64 = 518;
	// li r4,1997
	ctx.r4.s64 = 1997;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237c000
	ctx.lr = 0x8237C5F0;
	sub_8237C000(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237c608
	if (!ctx.cr6.eq) goto loc_8237C608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8237c298
	ctx.lr = 0x8237C604;
	sub_8237C298(ctx, base);
	// stfs f1,456(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 456, temp.u32);
loc_8237C608:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8237c674
	if (!ctx.cr6.gt) goto loc_8237C674;
	// lwz r11,592(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 592);
loc_8237C618:
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8237c630
	if (!ctx.cr6.eq) goto loc_8237C630;
	// lhz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r8,519
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 519, ctx.xer);
	// beq cr6,0x8237c648
	if (ctx.cr6.eq) goto loc_8237C648;
loc_8237C630:
	// lwz r9,588(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 588);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8237c618
	if (ctx.cr6.lt) goto loc_8237C618;
	// b 0x8237c674
	goto loc_8237C674;
loc_8237C648:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,519
	ctx.r5.s64 = 519;
	// li r4,1997
	ctx.r4.s64 = 1997;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237c000
	ctx.lr = 0x8237C65C;
	sub_8237C000(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237c674
	if (!ctx.cr6.eq) goto loc_8237C674;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8237c298
	ctx.lr = 0x8237C670;
	sub_8237C298(ctx, base);
	// stfs f1,468(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 468, temp.u32);
loc_8237C674:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8237c6e0
	if (!ctx.cr6.gt) goto loc_8237C6E0;
	// lwz r11,592(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 592);
loc_8237C684:
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8237c69c
	if (!ctx.cr6.eq) goto loc_8237C69C;
	// lhz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r8,521
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 521, ctx.xer);
	// beq cr6,0x8237c6b4
	if (ctx.cr6.eq) goto loc_8237C6B4;
loc_8237C69C:
	// lwz r9,588(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 588);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8237c684
	if (ctx.cr6.lt) goto loc_8237C684;
	// b 0x8237c6e0
	goto loc_8237C6E0;
loc_8237C6B4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,521
	ctx.r5.s64 = 521;
	// li r4,1997
	ctx.r4.s64 = 1997;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237c000
	ctx.lr = 0x8237C6C8;
	sub_8237C000(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237c6e0
	if (!ctx.cr6.eq) goto loc_8237C6E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8237c298
	ctx.lr = 0x8237C6DC;
	sub_8237C298(ctx, base);
	// stfs f1,480(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 480, temp.u32);
loc_8237C6E0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,522
	ctx.r5.s64 = 522;
	// li r4,1997
	ctx.r4.s64 = 1997;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237c000
	ctx.lr = 0x8237C6F4;
	sub_8237C000(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237c728
	if (!ctx.cr6.eq) goto loc_8237C728;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// beq cr6,0x8237c724
	if (ctx.cr6.eq) goto loc_8237C724;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fnmsubs f11,f12,f28,f30
	ctx.f11.f64 = double(float(-std::fma(ctx.f12.f64, f28.f64, -f30.f64)));
	// fmuls f29,f11,f29
	f29.f64 = double(float(ctx.f11.f64 * f29.f64));
loc_8237C724:
	// stfs f29,500(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 500, temp.u32);
loc_8237C728:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237c000
	ctx.lr = 0x8237C73C;
	sub_8237C000(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237c8f0
	if (!ctx.cr6.eq) goto loc_8237C8F0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// stb r29,564(r31)
	REX_STORE_U8(r31.u32 + 564, r29.u8);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f27
	ctx.f11.f64 = double(float(ctx.f12.f64 * f27.f64));
	// stfs f11,560(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 560, temp.u32);
	// ble cr6,0x8237c7d4
	if (!ctx.cr6.gt) goto loc_8237C7D4;
	// lwz r11,592(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 592);
loc_8237C778:
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8237c790
	if (!ctx.cr6.eq) goto loc_8237C790;
	// lhz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r8,778
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 778, ctx.xer);
	// beq cr6,0x8237c7a8
	if (ctx.cr6.eq) goto loc_8237C7A8;
loc_8237C790:
	// lwz r9,588(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 588);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8237c778
	if (ctx.cr6.lt) goto loc_8237C778;
	// b 0x8237c7d4
	goto loc_8237C7D4;
loc_8237C7A8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,778
	ctx.r5.s64 = 778;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237c000
	ctx.lr = 0x8237C7BC;
	sub_8237C000(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237c7d4
	if (!ctx.cr6.eq) goto loc_8237C7D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8237c298
	ctx.lr = 0x8237C7D0;
	sub_8237C298(ctx, base);
	// stfs f1,512(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 512, temp.u32);
loc_8237C7D4:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8237c840
	if (!ctx.cr6.gt) goto loc_8237C840;
	// lwz r11,592(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 592);
loc_8237C7E4:
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8237c7fc
	if (!ctx.cr6.eq) goto loc_8237C7FC;
	// lhz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r8,779
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 779, ctx.xer);
	// beq cr6,0x8237c814
	if (ctx.cr6.eq) goto loc_8237C814;
loc_8237C7FC:
	// lwz r9,588(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 588);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8237c7e4
	if (ctx.cr6.lt) goto loc_8237C7E4;
	// b 0x8237c840
	goto loc_8237C840;
loc_8237C814:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,779
	ctx.r5.s64 = 779;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237c000
	ctx.lr = 0x8237C828;
	sub_8237C000(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237c840
	if (!ctx.cr6.eq) goto loc_8237C840;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8237c298
	ctx.lr = 0x8237C83C;
	sub_8237C298(ctx, base);
	// stfs f1,524(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 524, temp.u32);
loc_8237C840:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8237c8ac
	if (!ctx.cr6.gt) goto loc_8237C8AC;
	// lwz r11,592(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 592);
loc_8237C850:
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8237c868
	if (!ctx.cr6.eq) goto loc_8237C868;
	// lhz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r8,781
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 781, ctx.xer);
	// beq cr6,0x8237c880
	if (ctx.cr6.eq) goto loc_8237C880;
loc_8237C868:
	// lwz r9,588(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 588);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8237c850
	if (ctx.cr6.lt) goto loc_8237C850;
	// b 0x8237c8ac
	goto loc_8237C8AC;
loc_8237C880:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,781
	ctx.r5.s64 = 781;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237c000
	ctx.lr = 0x8237C894;
	sub_8237C000(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237c8ac
	if (!ctx.cr6.eq) goto loc_8237C8AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8237c298
	ctx.lr = 0x8237C8A8;
	sub_8237C298(ctx, base);
	// stfs f1,536(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 536, temp.u32);
loc_8237C8AC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,782
	ctx.r5.s64 = 782;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237c000
	ctx.lr = 0x8237C8C0;
	sub_8237C000(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237c8f0
	if (!ctx.cr6.eq) goto loc_8237C8F0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// beq cr6,0x8237c8ec
	if (ctx.cr6.eq) goto loc_8237C8EC;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f12,f28
	f31.f64 = double(float(ctx.f12.f64 * f28.f64));
loc_8237C8EC:
	// stfs f31,556(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 556, temp.u32);
loc_8237C8F0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,480(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 480);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,19048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 19048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8237c90c
	if (!ctx.cr6.lt) goto loc_8237C90C;
	// stfs f0,480(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 480, temp.u32);
loc_8237C90C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2cf0
	ctx.lr = 0x8237C918;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823BAC90) {
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
	ctx.lr = 0x823BAC98;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r3,720
	r31.s64 = ctx.r3.s64 + 720;
	// li r30,8
	r30.s64 = 8;
	// li r27,0
	r27.s64 = 0;
	// lis r28,-32129
	r28.s64 = -2105606144;
	// addi r29,r11,32356
	r29.s64 = ctx.r11.s64 + 32356;
loc_823BACB4:
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823bacd8
	if (ctx.cr6.eq) goto loc_823BACD8;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,239
	ctx.r6.s64 = 239;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823BACD8;
	sub_82330D00(ctx, base);
loc_823BACD8:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stwu r27,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, r27.u32);
	r31.u32 = ea;
	// bne 0x823bacb4
	if (!ctx.cr0.eq) goto loc_823BACB4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823BD398) {
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
	ctx.lr = 0x823BD3A0;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,8
	ctx.r10.s64 = 8;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r3,956
	ctx.r9.s64 = ctx.r3.s64 + 956;
	// stw r30,1084(r3)
	REX_STORE_U32(ctx.r3.u32 + 1084, r30.u32);
	// addi r11,r3,1436
	ctx.r11.s64 = ctx.r3.s64 + 1436;
	// stw r30,1296(r3)
	REX_STORE_U32(ctx.r3.u32 + 1296, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,1364(r3)
	REX_STORE_U32(ctx.r3.u32 + 1364, r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r30,1220(r3)
	REX_STORE_U32(ctx.r3.u32 + 1220, r30.u32);
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// stw r30,1436(r3)
	REX_STORE_U32(ctx.r3.u32 + 1436, r30.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r30,1440(r3)
	REX_STORE_U32(ctx.r3.u32 + 1440, r30.u32);
loc_823BD3E4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823bd3e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BD3E4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,10592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10592);
	ctx.f0.f64 = double(temp.f32);
	// addi r28,r31,1092
	r28.s64 = r31.s64 + 1092;
	// stfs f0,1092(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 1092, temp.u32);
	// fmuls f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 * ctx.f0.f64));
	// lfs f3,11228(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 11228);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,11224(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 11224);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32516(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 32516);
	ctx.f1.f64 = double(temp.f32);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// li r12,1128
	ctx.r12.s64 = 1128;
	// stfiwx f12,r31,r12
	REX_STORE_U32(r31.u32 + ctx.r12.u32, ctx.f12.u32);
	// bl 0x823bbaf8
	ctx.lr = 0x823BD430;
	sub_823BBAF8(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r7,1128(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1128);
	// addi r11,r31,924
	ctx.r11.s64 = r31.s64 + 924;
	// lwz r6,1132(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1132);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r5,1136(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1136);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r4,1140(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1140);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r8,1152(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1152);
	// stw r7,1164(r31)
	REX_STORE_U32(r31.u32 + 1164, ctx.r7.u32);
	// stw r6,1168(r31)
	REX_STORE_U32(r31.u32 + 1168, ctx.r6.u32);
	// stw r5,1172(r31)
	REX_STORE_U32(r31.u32 + 1172, ctx.r5.u32);
	// stw r4,1176(r31)
	REX_STORE_U32(r31.u32 + 1176, ctx.r4.u32);
	// stw r8,1188(r31)
	REX_STORE_U32(r31.u32 + 1188, ctx.r8.u32);
	// lwz r3,1144(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1144);
	// lwz r10,1148(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1148);
	// lwz r29,1156(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 1156);
	// lwz r27,1160(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 1160);
	// stw r3,1180(r31)
	REX_STORE_U32(r31.u32 + 1180, ctx.r3.u32);
	// stw r10,1184(r31)
	REX_STORE_U32(r31.u32 + 1184, ctx.r10.u32);
	// stw r29,1192(r31)
	REX_STORE_U32(r31.u32 + 1192, r29.u32);
	// stw r27,1196(r31)
	REX_STORE_U32(r31.u32 + 1196, r27.u32);
loc_823BD48C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823bd48c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BD48C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f2,32512(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32512);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,11232(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 11232);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823bbbe0
	ctx.lr = 0x823BD4B0;
	sub_823BBBE0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f5,f31
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = f31.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f0,32420(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32420);
	ctx.f0.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f13,32416(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 32416);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r31,1404
	r29.s64 = r31.s64 + 1404;
	// stfs f0,1408(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 1408, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stfs f13,1404(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 1404, temp.u32);
	// lfs f4,11244(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 11244);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,11240(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 11240);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,11236(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 11236);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,11248(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 11248);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lfs f13,1408(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1408);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fctiwz f10,f12
	ctx.f10.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f9,f11
	ctx.f9.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stfd f9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// stw r11,1416(r31)
	REX_STORE_U32(r31.u32 + 1416, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r10,1448(r31)
	REX_STORE_U32(r31.u32 + 1448, ctx.r10.u32);
	// stw r9,1444(r31)
	REX_STORE_U32(r31.u32 + 1444, ctx.r9.u32);
	// stw r11,1412(r31)
	REX_STORE_U32(r31.u32 + 1412, ctx.r11.u32);
	// bl 0x823bbce0
	ctx.lr = 0x823BD534;
	sub_823BBCE0(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r31,107
	ctx.r10.s64 = r31.s64 + 107;
	// addi r11,r31,816
	ctx.r11.s64 = r31.s64 + 816;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823BD544:
	// lwz r9,-28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -28);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stb r30,809(r10)
	REX_STORE_U8(ctx.r10.u32 + 809, r30.u8);
	// stbu r30,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, r30.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x823bd544
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BD544;
	// addi r5,r31,756
	ctx.r5.s64 = r31.s64 + 756;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823bc070
	ctx.lr = 0x823BD56C;
	sub_823BC070(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823bd6e0
	if (!ctx.cr6.eq) goto loc_823BD6E0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823bc190
	ctx.lr = 0x823BD584;
	sub_823BC190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823bd6e0
	if (!ctx.cr6.eq) goto loc_823BD6E0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823bc290
	ctx.lr = 0x823BD5A0;
	sub_823BC290(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823bd6e0
	if (!ctx.cr6.eq) goto loc_823BD6E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,1324(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 1324);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x823bc3b0
	ctx.lr = 0x823BD5B8;
	sub_823BC3B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823bd6e0
	if (!ctx.cr6.eq) goto loc_823BD6E0;
	// addi r11,r31,259
	ctx.r11.s64 = r31.s64 + 259;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// rlwinm r8,r11,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r9,r31,419
	ctx.r9.s64 = r31.s64 + 419;
	// stw r8,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r8.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r7,r9,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r7,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r7.u32);
	// addi r11,r31,144
	ctx.r11.s64 = r31.s64 + 144;
	// lfs f0,32508(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 32508);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,32504(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32504);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8392(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8392);
	ctx.f13.f64 = double(temp.f32);
loc_823BD608:
	// stfs f0,364(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 364, temp.u32);
	// stfs f0,396(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 396, temp.u32);
	// stfs f0,460(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 460, temp.u32);
	// stfs f0,428(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 428, temp.u32);
	// stfs f13,-68(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -68, temp.u32);
	// stfs f13,68(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f13,36(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f13,-28(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -28, temp.u32);
	// stfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823bd608
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BD608;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r30,20(r31)
	REX_STORE_U8(r31.u32 + 20, r30.u8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f31,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f31.f64 = double(temp.f32);
	// lfs f0,32500(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32500);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,636(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 636, temp.u32);
	// stfs f31,644(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 644, temp.u32);
	// stfs f31,648(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 648, temp.u32);
	// stfs f31,652(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 652, temp.u32);
	// stfs f31,696(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 696, temp.u32);
	// stfs f31,704(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 704, temp.u32);
	// stfs f31,708(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 708, temp.u32);
	// stfs f31,712(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 712, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// bl 0x823ef5f0
	ctx.lr = 0x823BD684;
	sub_823EF5F0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f31,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stb r30,664(r31)
	REX_STORE_U8(r31.u32 + 664, r30.u8);
	// stb r30,680(r31)
	REX_STORE_U8(r31.u32 + 680, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,3716(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3712(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3712);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32496(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 32496);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f13,696(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 696, temp.u32);
	// stfs f12,716(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 716, temp.u32);
	// stfs f0,660(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 660, temp.u32);
	// stfs f0,668(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 668, temp.u32);
	// stfs f0,676(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 676, temp.u32);
	// stfs f0,672(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 672, temp.u32);
	// stfs f0,656(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 656, temp.u32);
	// stfs f0,684(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 684, temp.u32);
	// stfs f0,692(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 692, temp.u32);
	// stfs f0,688(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 688, temp.u32);
	// bl 0x823baf10
	ctx.lr = 0x823BD6DC;
	sub_823BAF10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823BD6E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823D2718) {
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
	ctx.lr = 0x823D2720;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// beq cr6,0x823d2754
	if (ctx.cr6.eq) goto loc_823D2754;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// beq cr6,0x823d2754
	if (ctx.cr6.eq) goto loc_823D2754;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// beq cr6,0x823d2754
	if (ctx.cr6.eq) goto loc_823D2754;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
loc_823D2754:
	// lwz r3,24(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d292c
	if (ctx.cr6.eq) goto loc_823D292C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823D277C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823d2930
	if (!ctx.cr6.eq) goto loc_823D2930;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// bne cr6,0x823d2794
	if (!ctx.cr6.eq) goto loc_823D2794;
loc_823D278C:
	// mr r31,r29
	r31.u64 = r29.u64;
	// b 0x823d2918
	goto loc_823D2918;
loc_823D2794:
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// bne cr6,0x823d28d8
	if (!ctx.cr6.eq) goto loc_823D28D8;
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823d2918
	if (ctx.cr6.eq) goto loc_823D2918;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x823d2918
	if (ctx.cr6.gt) goto loc_823D2918;
	// lis r12,-32195
	ctx.r12.s64 = -2109931520;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,10192
	ctx.r12.s64 = ctx.r12.s64 + 10192;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823D2840;
	case 1:
		goto loc_823D2800;
	case 2:
		goto loc_823D2808;
	case 3:
		goto loc_823D2810;
	case 4:
		goto loc_823D2818;
	case 5:
		goto loc_823D2818;
	case 6:
		goto loc_823D2840;
	case 7:
		goto loc_823D2840;
	case 8:
		goto loc_823D2840;
	case 9:
		goto loc_823D2840;
	case 10:
		goto loc_823D2840;
	case 11:
		goto loc_823D2840;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823D2800:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x823d281c
	goto loc_823D281C;
loc_823D2808:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x823d281c
	goto loc_823D281C;
loc_823D2810:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x823d281c
	goto loc_823D281C;
loc_823D2818:
	// li r11,32
	ctx.r11.s64 = 32;
loc_823D281C:
	// li r9,0
	ctx.r9.s64 = 0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldimi r9,r29,3,29
	ctx.r9.u64 = (__builtin_rotateleft64(r29.u64, 3) & 0x7FFFFFFF8) | (ctx.r9.u64 & 0xFFFFFFF800000007);
	// tdllei r11,0
	if (ctx.r11.s64 == 0ll || ctx.r11.u64 < 0ull) ppc_trap(ctx, base, 0);
	// divdu r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 ? ctx.r9.u64 / ctx.r11.u64 : 0;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// divwu r31,r11,r10
	r31.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// b 0x823d2918
	goto loc_823D2918;
loc_823D2840:
	// lis r12,-32195
	ctx.r12.s64 = -2109931520;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,10328
	ctx.r12.s64 = ctx.r12.s64 + 10328;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823D28C8;
	case 1:
		goto loc_823D2918;
	case 2:
		goto loc_823D2918;
	case 3:
		goto loc_823D2918;
	case 4:
		goto loc_823D2918;
	case 5:
		goto loc_823D2918;
	case 6:
		goto loc_823D2888;
	case 7:
		goto loc_823D289C;
	case 8:
		goto loc_823D28B4;
	case 9:
		goto loc_823D278C;
	case 10:
		goto loc_823D278C;
	case 11:
		goto loc_823D278C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823D2888:
	// mulli r11,r29,14
	ctx.r11.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(14));
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r31,r11,r10
	r31.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// b 0x823d2918
	goto loc_823D2918;
loc_823D289C:
	// rlwinm r11,r29,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 6) & 0xFFFFFFC0;
	// li r9,36
	ctx.r9.s64 = 36;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r11,r9
	ctx.r11.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// divwu r31,r11,r10
	r31.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// b 0x823d2918
	goto loc_823D2918;
loc_823D28B4:
	// mulli r11,r29,28
	ctx.r11.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(28));
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r31,r11,r10
	r31.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// b 0x823d2918
	goto loc_823D2918;
loc_823D28C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r31,r11,r10
	r31.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// b 0x823d2918
	goto loc_823D2918;
loc_823D28D8:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x823d2918
	if (!ctx.cr6.eq) goto loc_823D2918;
	// clrldi r11,r29,32
	ctx.r11.u64 = r29.u64 & 0xFFFFFFFF;
	// lwz r10,24(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 24);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f11,80(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,4104(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4104);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fctidz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// lwz r31,92(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_823D2918:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823d2928
	if (ctx.cr6.lt) goto loc_823D2928;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_823D2928:
	// stw r31,44(r28)
	REX_STORE_U32(r28.u32 + 44, r31.u32);
loc_823D292C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823D2930:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823DED08) {
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
	ctx.lr = 0x823DED10;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r6,12
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 12, ctx.xer);
	// bgt cr6,0x823df454
	if (ctx.cr6.gt) goto loc_823DF454;
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// ble cr6,0x823df088
	if (!ctx.cr6.gt) goto loc_823DF088;
	// cmplwi cr6,r6,10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 10, ctx.xer);
	// ble cr6,0x823deefc
	if (!ctx.cr6.gt) goto loc_823DEEFC;
	// cmplwi cr6,r6,12
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 12, ctx.xer);
	// bne cr6,0x823dee20
	if (!ctx.cr6.eq) goto loc_823DEE20;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823df70c
	if (!ctx.cr6.gt) goto loc_823DF70C;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r11,-44
	ctx.r11.s64 = ctx.r11.s64 + -44;
loc_823DED48:
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r6,-4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r4,44(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// mullw r8,r9,r8
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r31,4(r5)
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r30,32(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r29,8(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r28,28(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r27,12(r5)
	r27.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r26,24(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r25,16(r5)
	r25.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r24,20(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mullw r9,r6,r4
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// lwz r4,20(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// lwz r23,16(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r22,24(r5)
	r22.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// lwz r21,12(r11)
	r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r20,28(r5)
	r20.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// lwz r19,8(r11)
	r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r18,32(r5)
	r18.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// lwz r17,0(r11)
	r17.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r16,40(r5)
	r16.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// lwz r15,4(r11)
	r15.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r14,36(r5)
	r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 36);
	// mullw r8,r3,r31
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mullw r8,r30,r29
	ctx.r8.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mullw r8,r28,r27
	ctx.r8.s64 = int64_t(r28.s32) * int64_t(r27.s32);
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mullw r8,r26,r25
	ctx.r8.s64 = int64_t(r26.s32) * int64_t(r25.s32);
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mullw r8,r24,r4
	ctx.r8.s64 = int64_t(r24.s32) * int64_t(ctx.r4.s32);
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mullw r8,r23,r22
	ctx.r8.s64 = int64_t(r23.s32) * int64_t(r22.s32);
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mullw r8,r21,r20
	ctx.r8.s64 = int64_t(r21.s32) * int64_t(r20.s32);
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mullw r8,r19,r18
	ctx.r8.s64 = int64_t(r19.s32) * int64_t(r18.s32);
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mullw r8,r17,r16
	ctx.r8.s64 = int64_t(r17.s32) * int64_t(r16.s32);
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mullw r8,r15,r14
	ctx.r8.s64 = int64_t(r15.s32) * int64_t(r14.s32);
	// add r3,r6,r8
	ctx.r3.u64 = ctx.r6.u64 + ctx.r8.u64;
	// sraw r8,r3,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r8.s64 = ctx.r3.s32 >> temp.u32;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r9,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823ded48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DED48;
	// b 0x826a1cd0
	return;
loc_823DEE20:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823df70c
	if (!ctx.cr6.gt) goto loc_823DF70C;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
loc_823DEE34:
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r4,28(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r3,8(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// mullw r6,r9,r8
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r31,24(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r30,12(r5)
	r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r29,20(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r28,16(r5)
	r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r27,16(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r26,20(r5)
	r26.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// lwz r25,12(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r24,24(r5)
	r24.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// lwz r23,8(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r8,r4,r3
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r22,40(r5)
	r22.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// lwz r21,36(r11)
	r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r20,0(r5)
	r20.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r19,32(r5)
	r19.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// lwz r18,4(r11)
	r18.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r17,0(r11)
	r17.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r16,36(r5)
	r16.u64 = REX_LOAD_U32(ctx.r5.u32 + 36);
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mullw r8,r31,r30
	ctx.r8.s64 = int64_t(r31.s32) * int64_t(r30.s32);
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mullw r8,r29,r28
	ctx.r8.s64 = int64_t(r29.s32) * int64_t(r28.s32);
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mullw r8,r27,r26
	ctx.r8.s64 = int64_t(r27.s32) * int64_t(r26.s32);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mullw r6,r25,r24
	ctx.r6.s64 = int64_t(r25.s32) * int64_t(r24.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r23,r4
	ctx.r6.s64 = int64_t(r23.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r3,r22
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(r22.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r21,r20
	ctx.r6.s64 = int64_t(r21.s32) * int64_t(r20.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r19,r18
	ctx.r6.s64 = int64_t(r19.s32) * int64_t(r18.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r17,r16
	ctx.r6.s64 = int64_t(r17.s32) * int64_t(r16.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// sraw r8,r8,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r8.s64 = ctx.r8.s32 >> temp.u32;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r6,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823dee34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DEE34;
	// b 0x826a1cd0
	return;
loc_823DEEFC:
	// bne cr6,0x823defcc
	if (!ctx.cr6.eq) goto loc_823DEFCC;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823df70c
	if (!ctx.cr6.gt) goto loc_823DF70C;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r11,-36
	ctx.r11.s64 = ctx.r11.s64 + -36;
loc_823DEF14:
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,4(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r6,28(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mullw r8,r9,r8
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r31,8(r5)
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r30,20(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r29,12(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r28,16(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r27,16(r5)
	r27.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r26,12(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r25,20(r5)
	r25.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// lwz r24,8(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r23,-4(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// mullw r6,r6,r4
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// lwz r4,24(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// lwz r22,36(r5)
	r22.u64 = REX_LOAD_U32(ctx.r5.u32 + 36);
	// lwz r21,32(r5)
	r21.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// lwz r20,0(r11)
	r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r19,4(r11)
	r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r18,28(r5)
	r18.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r3,r31
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r30,r29
	ctx.r6.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r28,r27
	ctx.r6.s64 = int64_t(r28.s32) * int64_t(r27.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r26,r25
	ctx.r6.s64 = int64_t(r26.s32) * int64_t(r25.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r24,r4
	ctx.r6.s64 = int64_t(r24.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r23,r22
	ctx.r6.s64 = int64_t(r23.s32) * int64_t(r22.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r21,r20
	ctx.r6.s64 = int64_t(r21.s32) * int64_t(r20.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r19,r18
	ctx.r6.s64 = int64_t(r19.s32) * int64_t(r18.s32);
	// add r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 + ctx.r6.u64;
	// sraw r8,r3,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r8.s64 = ctx.r3.s32 >> temp.u32;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823def14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DEF14;
	// b 0x826a1cd0
	return;
loc_823DEFCC:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823df70c
	if (!ctx.cr6.gt) goto loc_823DF70C;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
loc_823DEFE0:
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r4,8(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r6,20(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mullw r8,r9,r8
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r31,12(r5)
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r30,12(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r29,16(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r28,8(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r27,20(r5)
	r27.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// lwz r26,-4(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r25,32(r5)
	r25.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// lwz r24,28(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r23,24(r5)
	r23.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// mullw r6,r6,r4
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// lwz r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r22,4(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r21,0(r11)
	r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r20,28(r5)
	r20.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r3,r31
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r30,r29
	ctx.r6.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r28,r27
	ctx.r6.s64 = int64_t(r28.s32) * int64_t(r27.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r26,r25
	ctx.r6.s64 = int64_t(r26.s32) * int64_t(r25.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r24,r4
	ctx.r6.s64 = int64_t(r24.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r23,r22
	ctx.r6.s64 = int64_t(r23.s32) * int64_t(r22.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r21,r20
	ctx.r6.s64 = int64_t(r21.s32) * int64_t(r20.s32);
	// add r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 + ctx.r6.u64;
	// sraw r8,r3,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r8.s64 = ctx.r3.s32 >> temp.u32;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r9,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823defe0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DEFE0;
	// b 0x826a1cd0
	return;
loc_823DF088:
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// ble cr6,0x823df2f4
	if (!ctx.cr6.gt) goto loc_823DF2F4;
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// ble cr6,0x823df1e8
	if (!ctx.cr6.gt) goto loc_823DF1E8;
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// bne cr6,0x823df14c
	if (!ctx.cr6.eq) goto loc_823DF14C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823df70c
	if (!ctx.cr6.gt) goto loc_823DF70C;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
loc_823DF0B4:
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r4,4(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r6,20(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mullw r8,r9,r8
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r31,8(r5)
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r30,12(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r29,12(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r28,8(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r27,16(r5)
	r27.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r26,-4(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r25,28(r5)
	r25.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// lwz r24,24(r5)
	r24.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// lwz r23,20(r5)
	r23.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// mullw r6,r6,r4
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r22,4(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r3,r31
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r30,r29
	ctx.r6.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r28,r27
	ctx.r6.s64 = int64_t(r28.s32) * int64_t(r27.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r26,r25
	ctx.r6.s64 = int64_t(r26.s32) * int64_t(r25.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r24,r4
	ctx.r6.s64 = int64_t(r24.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r23,r22
	ctx.r6.s64 = int64_t(r23.s32) * int64_t(r22.s32);
	// add r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 + ctx.r6.u64;
	// sraw r8,r3,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r8.s64 = ctx.r3.s32 >> temp.u32;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823df0b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DF0B4;
	// b 0x826a1cd0
	return;
loc_823DF14C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823df70c
	if (!ctx.cr6.gt) goto loc_823DF70C;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
loc_823DF160:
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,8(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mullw r8,r9,r8
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r31,12(r5)
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r30,-4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r29,24(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// lwz r28,20(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r27,0(r5)
	r27.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r26,16(r5)
	r26.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r25,4(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r24,20(r5)
	r24.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// mullw r6,r6,r4
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r3,r31
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r30,r29
	ctx.r6.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r28,r27
	ctx.r6.s64 = int64_t(r28.s32) * int64_t(r27.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r26,r25
	ctx.r6.s64 = int64_t(r26.s32) * int64_t(r25.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r24,r4
	ctx.r6.s64 = int64_t(r24.s32) * int64_t(ctx.r4.s32);
	// add r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 + ctx.r6.u64;
	// sraw r8,r3,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r8.s64 = ctx.r3.s32 >> temp.u32;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r9,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823df160
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DF160;
	// b 0x826a1cd0
	return;
loc_823DF1E8:
	// bne cr6,0x823df278
	if (!ctx.cr6.eq) goto loc_823DF278;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823df70c
	if (!ctx.cr6.gt) goto loc_823DF70C;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
loc_823DF200:
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,4(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mullw r8,r9,r8
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r31,8(r5)
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r30,-4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r29,20(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// lwz r28,4(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,12(r5)
	r27.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r26,16(r5)
	r26.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r25,0(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// mullw r6,r6,r4
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r3,r31
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r30,r29
	ctx.r6.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r28,r27
	ctx.r6.s64 = int64_t(r28.s32) * int64_t(r27.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r26,r25
	ctx.r6.s64 = int64_t(r26.s32) * int64_t(r25.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// sraw r8,r8,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r8.s64 = ctx.r8.s32 >> temp.u32;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r6,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823df200
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DF200;
	// b 0x826a1cd0
	return;
loc_823DF278:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823df70c
	if (!ctx.cr6.gt) goto loc_823DF70C;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
loc_823DF28C:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r6,-4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r4,16(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// mullw r8,r9,r8
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r5)
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,12(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r28,4(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,8(r5)
	r27.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// mullw r6,r6,r4
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r3,r31
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r30,r29
	ctx.r6.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r28,r27
	ctx.r6.s64 = int64_t(r28.s32) * int64_t(r27.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// sraw r8,r8,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r8.s64 = ctx.r8.s32 >> temp.u32;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r6,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823df28c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DF28C;
	// b 0x826a1cd0
	return;
loc_823DF2F4:
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// ble cr6,0x823df3cc
	if (!ctx.cr6.gt) goto loc_823DF3CC;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bne cr6,0x823df370
	if (!ctx.cr6.eq) goto loc_823DF370;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823df70c
	if (!ctx.cr6.gt) goto loc_823DF70C;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
loc_823DF318:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r6,-4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r4,12(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// mullw r8,r9,r8
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,8(r5)
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r29,4(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// mullw r6,r6,r4
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r3,r31
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r30,r29
	ctx.r6.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// sraw r8,r8,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r8.s64 = ctx.r8.s32 >> temp.u32;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r6,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823df318
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DF318;
	// b 0x826a1cd0
	return;
loc_823DF370:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823df70c
	if (!ctx.cr6.gt) goto loc_823DF70C;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_823DF384:
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r8,8(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r8,r9,r8
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,4(r5)
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// mullw r6,r6,r4
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r3,r31
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// sraw r8,r8,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r8.s64 = ctx.r8.s32 >> temp.u32;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823df384
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DF384;
	// b 0x826a1cd0
	return;
loc_823DF3CC:
	// bne cr6,0x823df41c
	if (!ctx.cr6.eq) goto loc_823DF41C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823df70c
	if (!ctx.cr6.gt) goto loc_823DF70C;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_823DF3E4:
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r8,r9,r8
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// mullw r6,r6,r4
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// add r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 + ctx.r6.u64;
	// sraw r8,r3,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r8.s64 = ctx.r3.s32 >> temp.u32;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823df3e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DF3E4;
	// b 0x826a1cd0
	return;
loc_823DF41C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823df70c
	if (!ctx.cr6.gt) goto loc_823DF70C;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// subf r8,r11,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r11.u64;
loc_823DF42C:
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// mullw r4,r10,r6
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// sraw r10,r4,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r10.s64 = ctx.r4.s32 >> temp.u32;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823df42c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DF42C;
	// b 0x826a1cd0
	return;
loc_823DF454:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823df70c
	if (!ctx.cr6.gt) goto loc_823DF70C;
	// addi r6,r6,-13
	ctx.r6.s64 = ctx.r6.s64 + -13;
	// addi r8,r3,-4
	ctx.r8.s64 = ctx.r3.s64 + -4;
	// stw r6,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r6.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r8,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r8.u32);
loc_823DF470:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r6,19
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 19, ctx.xer);
	// bgt cr6,0x823df6f0
	if (ctx.cr6.gt) goto loc_823DF6F0;
	// lis r12,-32194
	ctx.r12.s64 = -2109865984;
	// rlwinm r0,r6,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-2924
	ctx.r12.s64 = ctx.r12.s64 + -2924;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r6.u32) {
	case 0:
		goto loc_823DF610;
	case 1:
		goto loc_823DF600;
	case 2:
		goto loc_823DF5F0;
	case 3:
		goto loc_823DF5E0;
	case 4:
		goto loc_823DF5D0;
	case 5:
		goto loc_823DF5C0;
	case 6:
		goto loc_823DF5B0;
	case 7:
		goto loc_823DF5A0;
	case 8:
		goto loc_823DF590;
	case 9:
		goto loc_823DF580;
	case 10:
		goto loc_823DF570;
	case 11:
		goto loc_823DF560;
	case 12:
		goto loc_823DF550;
	case 13:
		goto loc_823DF540;
	case 14:
		goto loc_823DF530;
	case 15:
		goto loc_823DF520;
	case 16:
		goto loc_823DF510;
	case 17:
		goto loc_823DF500;
	case 18:
		goto loc_823DF4F0;
	case 19:
		goto loc_823DF4E4;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823DF4E4:
	// lwz r10,-124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -124);
	// lwz r9,124(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 124);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
loc_823DF4F0:
	// lwz r9,-120(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -120);
	// lwz r8,120(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 120);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823DF500:
	// lwz r9,-116(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -116);
	// lwz r8,116(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 116);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823DF510:
	// lwz r9,-112(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -112);
	// lwz r8,112(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 112);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823DF520:
	// lwz r9,-108(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -108);
	// lwz r8,108(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 108);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823DF530:
	// lwz r9,-104(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -104);
	// lwz r8,104(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 104);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823DF540:
	// lwz r9,-100(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -100);
	// lwz r8,100(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 100);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823DF550:
	// lwz r9,-96(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -96);
	// lwz r8,96(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823DF560:
	// lwz r9,-92(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r8,92(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 92);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823DF570:
	// lwz r9,-88(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -88);
	// lwz r8,88(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 88);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823DF580:
	// lwz r9,-84(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -84);
	// lwz r8,84(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 84);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823DF590:
	// lwz r9,-80(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -80);
	// lwz r8,80(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 80);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823DF5A0:
	// lwz r9,-76(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -76);
	// lwz r8,76(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 76);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823DF5B0:
	// lwz r9,-72(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -72);
	// lwz r8,72(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 72);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823DF5C0:
	// lwz r9,-68(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -68);
	// lwz r8,68(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823DF5D0:
	// lwz r9,-64(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -64);
	// lwz r8,64(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823DF5E0:
	// lwz r9,-60(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -60);
	// lwz r8,60(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823DF5F0:
	// lwz r9,-56(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -56);
	// lwz r8,56(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 56);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823DF600:
	// lwz r9,-52(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -52);
	// lwz r8,52(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 52);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823DF610:
	// lwz r6,-24(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -24);
	// lwz r3,24(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// lwz r31,20(r5)
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// lwz r8,-20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -20);
	// mullw r9,r3,r6
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// lwz r6,-28(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -28);
	// lwz r3,28(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// lwz r30,-32(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + -32);
	// lwz r29,32(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// lwz r28,-36(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + -36);
	// lwz r27,36(r5)
	r27.u64 = REX_LOAD_U32(ctx.r5.u32 + 36);
	// lwz r26,-40(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + -40);
	// lwz r25,40(r5)
	r25.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// lwz r24,-44(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + -44);
	// mullw r8,r31,r8
	ctx.r8.s64 = int64_t(r31.s32) * int64_t(ctx.r8.s32);
	// lwz r23,44(r5)
	r23.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// lwz r31,-48(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -48);
	// lwz r22,48(r5)
	r22.u64 = REX_LOAD_U32(ctx.r5.u32 + 48);
	// lwz r21,-16(r11)
	r21.u64 = REX_LOAD_U32(ctx.r11.u32 + -16);
	// lwz r20,16(r5)
	r20.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r19,-12(r11)
	r19.u64 = REX_LOAD_U32(ctx.r11.u32 + -12);
	// lwz r18,12(r5)
	r18.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r17,-8(r11)
	r17.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r16,8(r5)
	r16.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r15,-4(r11)
	r15.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r14,4(r5)
	r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r8,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r8.u32);
	// mullw r8,r3,r6
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// lwz r3,0(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r6,-172(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r29,r30
	ctx.r8.s64 = int64_t(r29.s32) * int64_t(r30.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r27,r28
	ctx.r8.s64 = int64_t(r27.s32) * int64_t(r28.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r25,r26
	ctx.r8.s64 = int64_t(r25.s32) * int64_t(r26.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r23,r24
	ctx.r8.s64 = int64_t(r23.s32) * int64_t(r24.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r22,r31
	ctx.r8.s64 = int64_t(r22.s32) * int64_t(r31.s32);
	// lwz r31,-168(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r20,r21
	ctx.r8.s64 = int64_t(r20.s32) * int64_t(r21.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r18,r19
	ctx.r8.s64 = int64_t(r18.s32) * int64_t(r19.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r16,r17
	ctx.r8.s64 = int64_t(r16.s32) * int64_t(r17.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r14,r15
	ctx.r8.s64 = int64_t(r14.s32) * int64_t(r15.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r3,r31
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r8,-176(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823DF6F0:
	// lwzu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// sraw r10,r10,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r8.u32);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bne 0x823df470
	if (!ctx.cr0.eq) goto loc_823DF470;
loc_823DF70C:
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82417B38) {
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
	ctx.lr = 0x82417B40;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,672(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 672);
	// addi r26,r3,640
	r26.s64 = ctx.r3.s64 + 640;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,632(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// ori r4,r11,12
	ctx.r4.u64 = ctx.r11.u64 | 12;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x8241b778
	ctx.lr = 0x82417B60;
	sub_8241B778(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82417d5c
	if (ctx.cr0.lt) goto loc_82417D5C;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// li r25,1
	r25.s64 = 1;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82417ba4
	if (ctx.cr6.eq) goto loc_82417BA4;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x82417b9c
	if (ctx.cr6.eq) goto loc_82417B9C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,23844
	ctx.r4.s64 = ctx.r11.s64 + 23844;
	// bl 0x82417af0
	ctx.lr = 0x82417B90;
	sub_82417AF0(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82417d5c
	goto loc_82417D5C;
loc_82417B9C:
	// mr r27,r25
	r27.u64 = r25.u64;
	// b 0x82417ba8
	goto loc_82417BA8;
loc_82417BA4:
	// li r27,0
	r27.s64 = 0;
loc_82417BA8:
	// lwz r9,636(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 636);
	// lwz r28,648(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 648);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82417bf4
	if (!ctx.cr6.eq) goto loc_82417BF4;
	// lwz r11,632(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 632);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82417bf4
	if (!ctx.cr6.eq) goto loc_82417BF4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,1505
	ctx.r5.s64 = 1505;
	// addi r6,r11,24104
	ctx.r6.s64 = ctx.r11.s64 + 24104;
loc_82417BD4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x8241a4f0
	ctx.lr = 0x82417BE0;
	sub_8241A4F0(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r25,84(r31)
	REX_STORE_U32(r31.u32 + 84, r25.u32);
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// stw r25,80(r31)
	REX_STORE_U32(r31.u32 + 80, r25.u32);
	// b 0x82417d5c
	goto loc_82417D5C;
loc_82417BF4:
	// lwz r11,628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 628);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82417c2c
	if (ctx.cr6.eq) goto loc_82417C2C;
loc_82417C04:
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82417c04
	if (!ctx.cr6.eq) goto loc_82417C04;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// blt cr6,0x82417c2c
	if (ctx.cr6.lt) goto loc_82417C2C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,1506
	ctx.r5.s64 = 1506;
	// addi r6,r11,24076
	ctx.r6.s64 = ctx.r11.s64 + 24076;
	// b 0x82417bd4
	goto loc_82417BD4;
loc_82417C2C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82417c70
	if (!ctx.cr6.eq) goto loc_82417C70;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823eeca0
	ctx.lr = 0x82417C3C;
	sub_823EECA0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82417c4c
	if (ctx.cr6.eq) goto loc_82417C4C;
	// rlwinm. r11,r3,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82417c70
	if (ctx.cr0.eq) goto loc_82417C70;
loc_82417C4C:
	// lwz r11,628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 628);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r5,r10,19204
	ctx.r5.s64 = ctx.r10.s64 + 19204;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,80(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// bl 0x82404168
	ctx.lr = 0x82417C6C;
	sub_82404168(ctx, base);
	// addi r28,r1,96
	r28.s64 = ctx.r1.s64 + 96;
loc_82417C70:
	// lwz r11,628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 628);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82417c90
	if (ctx.cr6.eq) goto loc_82417C90;
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82417c90
	if (ctx.cr6.eq) goto loc_82417C90;
	// lwz r29,84(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// b 0x82417c94
	goto loc_82417C94;
loc_82417C90:
	// li r29,0
	r29.s64 = 0;
loc_82417C94:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x823f02b8
	ctx.lr = 0x82417CA0;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82417cb4
	if (ctx.cr0.eq) goto loc_82417CB4;
	// bl 0x82414530
	ctx.lr = 0x82417CAC;
	sub_82414530(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82417cb8
	goto loc_82417CB8;
loc_82417CB4:
	// li r30,0
	r30.s64 = 0;
loc_82417CB8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82417ccc
	if (!ctx.cr6.eq) goto loc_82417CCC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82417d5c
	goto loc_82417D5C;
loc_82417CCC:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// lwz r9,636(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 636);
	// addi r8,r31,24
	ctx.r8.s64 = r31.s64 + 24;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82414668
	ctx.lr = 0x82417CF4;
	sub_82414668(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x82417d20
	if (!ctx.cr0.lt) goto loc_82417D20;
	// stw r25,84(r31)
	REX_STORE_U32(r31.u32 + 84, r25.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r25,80(r31)
	REX_STORE_U32(r31.u32 + 80, r25.u32);
	// bl 0x82415ab0
	ctx.lr = 0x82417D0C;
	sub_82415AB0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f0350
	ctx.lr = 0x82417D18;
	sub_823F0350(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82417d5c
	goto loc_82417D5C;
loc_82417D20:
	// lwz r11,628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 628);
	// stw r11,92(r30)
	REX_STORE_U32(r30.u32 + 92, ctx.r11.u32);
	// lwz r11,688(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 688);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,628(r31)
	REX_STORE_U32(r31.u32 + 628, r30.u32);
	// beq cr6,0x82417d58
	if (ctx.cr6.eq) goto loc_82417D58;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82417d58
	if (ctx.cr6.eq) goto loc_82417D58;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r4,76(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 76);
	// subf r6,r5,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r5.u64;
	// bl 0x824dd568
	ctx.lr = 0x82417D58;
	sub_824DD568(ctx, base);
loc_82417D58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82417D5C:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82437668) {
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
	// beq cr6,0x82437694
	if (ctx.cr6.eq) goto loc_82437694;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82437698
	goto loc_82437698;
loc_82437694:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82437698:
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
	// beq cr6,0x82437734
	if (ctx.cr6.eq) goto loc_82437734;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82437738
	goto loc_82437738;
loc_82437734:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82437738:
	// stw r11,44(r4)
	REX_STORE_U32(ctx.r4.u32 + 44, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243B9C0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,-21392
	ctx.r10.s64 = ctx.r10.s64 + -21392;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243C4F8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// ble cr6,0x8243c560
	if (!ctx.cr6.gt) goto loc_8243C560;
	// li r5,8
	ctx.r5.s64 = 8;
loc_8243C504:
	// cmplwi cr6,r4,7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 7, ctx.xer);
	// bgt cr6,0x8243c568
	if (ctx.cr6.gt) goto loc_8243C568;
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// ble cr6,0x8243c51c
	if (!ctx.cr6.gt) goto loc_8243C51C;
	// subfic r5,r4,8
	ctx.xer.ca = ctx.r4.u32 <= 8;
	ctx.r5.u64 = static_cast<uint64_t>(8) - ctx.r4.u64;
loc_8243C51C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r10,-21180
	ctx.r10.s64 = ctx.r10.s64 + -21180;
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
loc_8243C53C:
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
	// bne cr6,0x8243c53c
	if (!ctx.cr6.eq) goto loc_8243C53C;
	// blr 
	return;
loc_8243C560:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bge cr6,0x8243c504
	if (!ctx.cr6.lt) goto loc_8243C504;
loc_8243C568:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82440208) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82440220
	if (ctx.cr6.eq) goto loc_82440220;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82440220
	if (ctx.cr6.eq) goto loc_82440220;
	// lwz r3,12(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// blr 
	return;
loc_82440220:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824403D8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,1376(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,1376(r3)
	REX_STORE_U32(ctx.r3.u32 + 1376, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82440430) {
	REX_FUNC_PROLOGUE();
	// lbz r10,1555(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 1555);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82440454
	if (ctx.cr0.eq) goto loc_82440454;
	// lwz r10,1376(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// li r3,7
	ctx.r3.s64 = 7;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,1376(r11)
	REX_STORE_U32(ctx.r11.u32 + 1376, ctx.r10.u32);
	// blr 
	return;
loc_82440454:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82440EB0) {
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
	ctx.lr = 0x82440EB8;
	// lbz r9,9(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 9);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bgt cr6,0x82440ed4
	if (ctx.cr6.gt) goto loc_82440ED4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82440ee4
	if (!ctx.cr6.eq) goto loc_82440EE4;
loc_82440ED4:
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bne cr6,0x8244130c
	if (!ctx.cr6.eq) goto loc_8244130C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8244130c
	if (ctx.cr6.eq) goto loc_8244130C;
loc_82440EE4:
	// lbz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8244116c
	if (ctx.cr0.eq) goto loc_8244116C;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// beq cr6,0x82441074
	if (ctx.cr6.eq) goto loc_82441074;
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// beq cr6,0x82441000
	if (ctx.cr6.eq) goto loc_82441000;
	// cmplwi cr6,r8,6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 6, ctx.xer);
	// bne cr6,0x8244130c
	if (!ctx.cr6.eq) goto loc_8244130C;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bne cr6,0x82440f4c
	if (!ctx.cr6.eq) goto loc_82440F4C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244130c
	if (ctx.cr6.eq) goto loc_8244130C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82440F1C:
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x82440f1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82440F1C;
	// b 0x8244130c
	goto loc_8244130C;
loc_82440F4C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244130c
	if (ctx.cr6.eq) goto loc_8244130C;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82440F5C:
	// lbz r8,1(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// srw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r5,r5,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// clrlwi r3,r9,24
	ctx.r3.u64 = ctx.r9.u32 & 0xFF;
	// lwzx r7,r7,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lhzx r7,r7,r5
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r5.u32);
	// rlwinm r5,r7,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// stb r5,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// stb r7,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// srw r7,r7,r4
	ctx.r7.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r4.u8 & 0x3F));
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r5,r5,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// lwzx r7,r7,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lhzx r7,r7,r5
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r5.u32);
	// rlwinm r5,r7,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// stb r5,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stb r7,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// srw r7,r7,r3
	ctx.r7.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r3.u8 & 0x3F));
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r5,r5,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// lwzx r7,r7,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lhzx r7,r7,r5
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r5.u32);
	// rlwinm r5,r7,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// stb r5,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// stb r7,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// bdnz 0x82440f5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82440F5C;
	// b 0x8244130c
	goto loc_8244130C;
loc_82441000:
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bne cr6,0x8244102c
	if (!ctx.cr6.eq) goto loc_8244102C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244130c
	if (ctx.cr6.eq) goto loc_8244130C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
loc_82441018:
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// stbu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82441018
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82441018;
	// b 0x8244130c
	goto loc_8244130C;
loc_8244102C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244130c
	if (ctx.cr6.eq) goto loc_8244130C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// addi r11,r10,-3
	ctx.r11.s64 = ctx.r10.s64 + -3;
loc_82441040:
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// lbz r7,3(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// srw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r7,r7,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lhzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// rlwinm r8,r10,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// stb r8,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// stbu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82441040
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82441040;
	// b 0x8244130c
	goto loc_8244130C;
loc_82441074:
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bne cr6,0x824410b8
	if (!ctx.cr6.eq) goto loc_824410B8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244130c
	if (ctx.cr6.eq) goto loc_8244130C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82441088:
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82441088
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82441088;
	// b 0x8244130c
	goto loc_8244130C;
loc_824410B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244130c
	if (ctx.cr6.eq) goto loc_8244130C;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824410C8:
	// lbz r8,1(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// srw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r7,r5,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// lwzx r8,r8,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// lhzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// stb r7,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// stb r8,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// srw r8,r8,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r5.u8 & 0x3F));
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r7,r7,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// lwzx r8,r8,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// lhzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// rlwinm r7,r8,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// stb r7,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stb r8,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// srw r7,r7,r4
	ctx.r7.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r4.u8 & 0x3F));
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r5,r5,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// lwzx r7,r7,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lhzx r7,r7,r5
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r5.u32);
	// rlwinm r5,r7,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// stb r5,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// stb r7,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// bdnz 0x824410c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824410C8;
	// b 0x8244130c
	goto loc_8244130C;
loc_8244116C:
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x82441238
	if (!ctx.cr6.eq) goto loc_82441238;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82441238
	if (ctx.cr6.eq) goto loc_82441238;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82441190:
	// lbz r8,1(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// clrlwi r4,r8,30
	ctx.r4.u64 = ctx.r8.u32 & 0x3;
	// rlwinm r31,r8,2,28,29
	r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// rlwinm r30,r8,0,28,29
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// or r31,r31,r4
	r31.u64 = r31.u64 | ctx.r4.u64;
	// rlwinm r29,r8,0,26,27
	r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x30;
	// rlwinm r28,r8,2,26,27
	r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x30;
	// srawi r27,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	r27.s64 = r30.s32 >> 2;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// or r28,r28,r30
	r28.u64 = r28.u64 | r30.u64;
	// srawi r26,r29,2
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x3) != 0);
	r26.s64 = r29.s32 >> 2;
	// or r31,r31,r4
	r31.u64 = r31.u64 | ctx.r4.u64;
	// or r26,r26,r29
	r26.u64 = r26.u64 | r29.u64;
	// rlwinm r28,r28,2,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r8,0,0,25
	r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r26,r26,2
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x3) != 0);
	r26.s64 = r26.s32 >> 2;
	// or r28,r28,r27
	r28.u64 = r28.u64 | r27.u64;
	// srawi r24,r25,2
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x3) != 0);
	r24.s64 = r25.s32 >> 2;
	// or r4,r31,r4
	ctx.r4.u64 = r31.u64 | ctx.r4.u64;
	// rlwinm r8,r8,2,24,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC0;
	// or r30,r28,r30
	r30.u64 = r28.u64 | r30.u64;
	// or r31,r24,r25
	r31.u64 = r24.u64 | r25.u64;
	// or r8,r26,r8
	ctx.r8.u64 = r26.u64 | ctx.r8.u64;
	// srawi r31,r31,2
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3) != 0);
	r31.s64 = r31.s32 >> 2;
	// lbzx r4,r4,r5
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// or r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 | r29.u64;
	// lbzx r30,r30,r5
	r30.u64 = REX_LOAD_U8(r30.u32 + ctx.r5.u32);
	// or r31,r31,r25
	r31.u64 = r31.u64 | r25.u64;
	// rlwinm r4,r4,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// andi. r30,r30,207
	r30.u64 = r30.u64 & 207;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// srawi r31,r31,2
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3) != 0);
	r31.s64 = r31.s32 >> 2;
	// lbzx r8,r8,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// or r4,r30,r4
	ctx.r4.u64 = r30.u64 | ctx.r4.u64;
	// or r31,r31,r25
	r31.u64 = r31.u64 | r25.u64;
	// rlwinm r4,r4,30,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3F;
	// andi. r8,r8,195
	ctx.r8.u64 = ctx.r8.u64 & 195;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// or r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 | ctx.r8.u64;
	// lbzx r4,r31,r5
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + ctx.r5.u32);
	// rlwimi r4,r8,30,26,31
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3F) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFC0);
	// stbu r4,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82441190
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82441190;
loc_82441238:
	// lbz r9,9(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bne cr6,0x82441294
	if (!ctx.cr6.eq) goto loc_82441294;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244130c
	if (ctx.cr6.eq) goto loc_8244130C;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r9,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82441260:
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r9,r10,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r8,r10,28
	ctx.r8.u64 = ctx.r10.u32 & 0xF;
	// srawi r7,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 4;
	// rlwinm r10,r10,4,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF0;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lbzx r9,r9,r5
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// lbzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// rlwimi r9,r10,28,28,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF0);
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82441260
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82441260;
	// b 0x8244130c
	goto loc_8244130C;
loc_82441294:
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bne cr6,0x824412c0
	if (!ctx.cr6.eq) goto loc_824412C0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244130c
	if (ctx.cr6.eq) goto loc_8244130C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_824412AC:
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x824412ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824412AC;
	// b 0x8244130c
	goto loc_8244130C;
loc_824412C0:
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bne cr6,0x8244130c
	if (!ctx.cr6.eq) goto loc_8244130C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244130c
	if (ctx.cr6.eq) goto loc_8244130C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_824412DC:
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// srw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r7,r7,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lhzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// rlwinm r8,r10,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// stb r8,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// stbu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x824412dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824412DC;
loc_8244130C:
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82463F88) {
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
	ctx.lr = 0x82463F90;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,260(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r29,r11,22936
	r29.s64 = ctx.r11.s64 + 22936;
	// li r26,0
	r26.s64 = 0;
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// li r28,1
	r28.s64 = 1;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r5,r29,-96
	ctx.r5.s64 = r29.s64 + -96;
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// clrlwi r31,r10,12
	r31.u64 = ctx.r10.u32 & 0xFFFFF;
	// stw r26,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r28,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r26
	r27.u64 = r26.u64;
	// bl 0x8245f158
	ctx.lr = 0x82463FF4;
	sub_8245F158(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82464028
	if (!ctx.cr6.eq) goto loc_82464028;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,260(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 260);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r27,r28
	r27.u64 = r28.u64;
	// bl 0x8245f158
	ctx.lr = 0x82464028;
	sub_8245F158(ctx, base);
loc_82464028:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8246411c
	if (!ctx.cr6.eq) goto loc_8246411C;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824640bc
	if (ctx.cr6.eq) goto loc_824640BC;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lfd f0,-3744(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + -3744);
loc_8246404C:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,16(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x824640d8
	if (!ctx.cr6.eq) goto loc_824640D8;
	// lwz r9,260(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 260);
	// lwz r7,20(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r6,16(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm. r7,r7,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x824640d8
	if (ctx.cr0.eq) goto loc_824640D8;
	// lfd f13,32(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x824640d8
	if (!ctx.cr6.eq) goto loc_824640D8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x824640d8
	if (!ctx.cr6.eq) goto loc_824640D8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r31.u32, ctx.xer);
	// blt cr6,0x8246404c
	if (ctx.cr6.lt) goto loc_8246404C;
loc_824640BC:
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 260);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// beq cr6,0x824640e0
	if (ctx.cr6.eq) goto loc_824640E0;
	// li r9,465
	ctx.r9.s64 = 465;
	// rlwimi r10,r9,22,0,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 22) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x824640e8
	goto loc_824640E8;
loc_824640D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8246411c
	goto loc_8246411C;
loc_824640E0:
	// li r9,1861
	ctx.r9.s64 = 1861;
	// rlwimi r10,r9,20,0,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
loc_824640E8:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82464118
	if (ctx.cr6.eq) goto loc_82464118;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_824640FC:
	// lwz r10,260(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 260);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824640fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824640FC;
loc_82464118:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8246411C:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8246EA38) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c80
	ctx.lr = 0x8246EA40;
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -176, f29.u64);
	// stfd f30,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,348(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8246ea6c
	if (ctx.cr6.eq) goto loc_8246EA6C;
	// lis r4,17998
	ctx.r4.s64 = 1179516928;
	// ori r4,r4,18758
	ctx.r4.u64 = ctx.r4.u64 | 18758;
	// b 0x8246ea74
	goto loc_8246EA74;
loc_8246EA6C:
	// lis r4,16961
	ctx.r4.s64 = 1111556096;
	// ori r4,r4,21571
	ctx.r4.u64 = ctx.r4.u64 | 21571;
loc_8246EA74:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82449658
	ctx.lr = 0x8246EA7C;
	sub_82449658(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r15,0
	r15.s64 = 0;
	// li r10,28
	ctx.r10.s64 = 28;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r15,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r15.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r15,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r15.u32);
	// std r15,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r15.u64);
	// li r6,1
	ctx.r6.s64 = 1;
	// std r15,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r15.u64);
	// li r5,28
	ctx.r5.s64 = 28;
	// std r15,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, r15.u64);
	// stw r15,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r15.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r25,r15
	r25.u64 = r15.u64;
	// stw r15,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r15.u32);
	// mr r19,r15
	r19.u64 = r15.u64;
	// stw r15,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r15.u32);
	// mr r14,r15
	r14.u64 = r15.u64;
	// lwz r11,200(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 200);
	// lwz r10,204(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 204);
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// bl 0x82449708
	ctx.lr = 0x8246EAE4;
	sub_82449708(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8246f640
	if (ctx.cr0.lt) goto loc_8246F640;
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 8);
	// mr r29,r15
	r29.u64 = r15.u64;
	// mr r9,r15
	ctx.r9.u64 = r15.u64;
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8246ebb4
	if (!ctx.cr6.gt) goto loc_8246EBB4;
	// lwz r5,20(r18)
	ctx.r5.u64 = REX_LOAD_U32(r18.u32 + 20);
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// lwz r4,16(r18)
	ctx.r4.u64 = REX_LOAD_U32(r18.u32 + 16);
	// rotlwi r31,r11,0
	r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_8246EB1C:
	// lwzx r11,r5,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm. r30,r30,0,3,3
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// lwzx r10,r10,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// bne 0x8246eba4
	if (!ctx.cr0.eq) goto loc_8246EBA4;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r30,r10,0,22,22
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8246eba4
	if (ctx.cr0.eq) goto loc_8246EBA4;
	// rlwinm. r30,r10,0,23,23
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8246eba4
	if (!ctx.cr0.eq) goto loc_8246EBA4;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r30,r10,0,24,24
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8246eb68
	if (ctx.cr0.eq) goto loc_8246EB68;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8246eba4
	if (ctx.cr6.gt) goto loc_8246EBA4;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// b 0x8246eba4
	goto loc_8246EBA4;
loc_8246EB68:
	// rlwinm. r30,r10,0,18,18
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8246eb80
	if (ctx.cr0.eq) goto loc_8246EB80;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8246eba4
	if (ctx.cr6.gt) goto loc_8246EBA4;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
	// b 0x8246eba4
	goto loc_8246EBA4;
loc_8246EB80:
	// rlwinm. r10,r10,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8246eb98
	if (ctx.cr0.eq) goto loc_8246EB98;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8246eba4
	if (ctx.cr6.gt) goto loc_8246EBA4;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// b 0x8246eba4
	goto loc_8246EBA4;
loc_8246EB98:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8246eba4
	if (ctx.cr6.gt) goto loc_8246EBA4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
loc_8246EBA4:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, ctx.xer);
	// blt cr6,0x8246eb1c
	if (ctx.cr6.lt) goto loc_8246EB1C;
loc_8246EBB4:
	// add r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// add r30,r11,r29
	r30.u64 = ctx.r11.u64 + r29.u64;
	// add r28,r9,r29
	r28.u64 = ctx.r9.u64 + r29.u64;
	// rlwinm r31,r30,2,0,29
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r10,r29
	r27.u64 = ctx.r10.u64 + r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f02b8
	ctx.lr = 0x8246EBDC;
	sub_823F02B8(ctx, base);
	// mr. r19,r3
	r19.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq 0x8246f618
	if (ctx.cr0.eq) goto loc_8246F618;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f02b8
	ctx.lr = 0x8246EBF0;
	sub_823F02B8(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// stw r26,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// beq 0x8246f618
	if (ctx.cr0.eq) goto loc_8246F618;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8246EC0C;
	sub_826A2E60(ctx, base);
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 8);
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8246ecf8
	if (!ctx.cr6.gt) goto loc_8246ECF8;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
loc_8246EC20:
	// lwz r11,20(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 20);
	// lwz r10,16(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 16);
	// lwzx r8,r6,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm. r9,r9,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bne 0x8246ece4
	if (!ctx.cr0.eq) goto loc_8246ECE4;
	// lwz r10,96(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8246ece4
	if (ctx.cr6.eq) goto loc_8246ECE4;
	// lwz r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8246ece4
	if (!ctx.cr6.eq) goto loc_8246ECE4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8246ece4
	if (ctx.cr0.eq) goto loc_8246ECE4;
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8246ece4
	if (!ctx.cr0.eq) goto loc_8246ECE4;
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8246ec80
	if (ctx.cr0.eq) goto loc_8246EC80;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// b 0x8246eca0
	goto loc_8246ECA0;
loc_8246EC80:
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8246ec90
	if (ctx.cr0.eq) goto loc_8246EC90;
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
	// b 0x8246eca0
	goto loc_8246ECA0;
loc_8246EC90:
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// bne 0x8246eca0
	if (!ctx.cr0.eq) goto loc_8246ECA0;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8246ECA0:
	// lwz r10,12(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r9,112(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 112);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// subf r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8246ece4
	if (!ctx.cr6.gt) goto loc_8246ECE4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + r19.u64;
loc_8246ECC8:
	// lwzu r7,-4(r10)
	ea = -4 + ctx.r10.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8246ece4
	if (!ctx.cr6.eq) goto loc_8246ECE4;
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8246ecc8
	if (ctx.cr6.gt) goto loc_8246ECC8;
loc_8246ECE4:
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8246ec20
	if (ctx.cr6.lt) goto loc_8246EC20;
loc_8246ECF8:
	// mr r16,r15
	r16.u64 = r15.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8246ed2c
	if (ctx.cr6.eq) goto loc_8246ED2C;
	// addi r11,r19,-4
	ctx.r11.s64 = r19.s64 + -4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
loc_8246ED10:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8246ed24
	if (ctx.cr6.eq) goto loc_8246ED24;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
loc_8246ED24:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8246ed10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8246ED10;
loc_8246ED2C:
	// mr r17,r15
	r17.u64 = r15.u64;
	// mr r9,r15
	ctx.r9.u64 = r15.u64;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x8246ee1c
	if (ctx.cr6.eq) goto loc_8246EE1C;
	// addi r7,r26,-4
	ctx.r7.s64 = r26.s64 + -4;
	// mtctr r16
	ctx.ctr.u64 = r16.u64;
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
loc_8246ED4C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8246eda4
	if (ctx.cr6.eq) goto loc_8246EDA4;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8246eda4
	if (!ctx.cr6.eq) goto loc_8246EDA4;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r10,96(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 96);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8246eda4
	if (!ctx.cr6.eq) goto loc_8246EDA4;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,112(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 112);
	// lwz r5,12(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r4,112(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r5,r4,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8246ee10
	if (ctx.cr6.eq) goto loc_8246EE10;
loc_8246EDA4:
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8246ee10
	if (ctx.cr6.eq) goto loc_8246EE10;
	// lwz r11,96(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 96);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x8246ee10
	if (!ctx.cr6.eq) goto loc_8246EE10;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8246ee10
	if (ctx.cr6.eq) goto loc_8246EE10;
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x8246ee10
	if (!ctx.cr6.eq) goto loc_8246EE10;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8246ee10
	if (ctx.cr6.eq) goto loc_8246EE10;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x8246ee10
	if (!ctx.cr6.eq) goto loc_8246EE10;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8246ee10
	if (!ctx.cr6.eq) goto loc_8246EE10;
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8246ee10
	if (ctx.cr6.eq) goto loc_8246EE10;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
loc_8246EE10:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x8246ed4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8246ED4C;
loc_8246EE1C:
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x8246eefc
	if (ctx.cr6.eq) goto loc_8246EEFC;
	// mr r31,r26
	r31.u64 = r26.u64;
loc_8246EE2C:
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r9,r15
	ctx.r9.u64 = r15.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r19
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r19.u32);
	// lwz r11,96(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 96);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// beq cr6,0x8246eeec
	if (ctx.cr6.eq) goto loc_8246EEEC;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_8246EE54:
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r19
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + r19.u32);
	// lwz r10,96(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 96);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
loc_8246EE70:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r29,0(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r29,r8
	ctx.r8.u64 = ctx.r8.u64 - r29.u64;
	// beq 0x8246ee94
	if (ctx.cr0.eq) goto loc_8246EE94;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8246ee70
	if (ctx.cr6.eq) goto loc_8246EE70;
loc_8246EE94:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt 0x8246eec4
	if (ctx.cr0.lt) goto loc_8246EEC4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x8246eeb4
	if (ctx.cr6.gt) goto loc_8246EEB4;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8246eec4
	if (ctx.cr6.lt) goto loc_8246EEC4;
loc_8246EEB4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8246ee54
	if (ctx.cr6.lt) goto loc_8246EE54;
loc_8246EEC4:
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8246eeec
	if (!ctx.cr6.gt) goto loc_8246EEEC;
	// subf r10,r9,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r9.u64;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8246EED8:
	// lwz r10,-8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// stwu r10,-4(r11)
	ea = -4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8246eed8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8246EED8;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r26
	REX_STORE_U32(ctx.r11.u32 + r26.u32, r30.u32);
loc_8246EEEC:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r7,r17
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r17.u32, ctx.xer);
	// blt cr6,0x8246ee2c
	if (ctx.cr6.lt) goto loc_8246EE2C;
loc_8246EEFC:
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r11,352(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 352);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8246EF10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add. r30,r3,r17
	r30.u64 = ctx.r3.u64 + r17.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// li r20,-1
	r20.s64 = -1;
	// beq 0x8246f4f4
	if (ctx.cr0.eq) goto loc_8246F4F4;
	// mulli r31,r30,20
	r31.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(20));
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f02b8
	ctx.lr = 0x8246EF2C;
	sub_823F02B8(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// stw r25,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// beq 0x8246f618
	if (ctx.cr0.eq) goto loc_8246F618;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8246EF48;
	sub_826A2E60(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82449708
	ctx.lr = 0x8246EF64;
	sub_82449708(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8246f640
	if (ctx.cr0.lt) goto loc_8246F640;
	// stw r30,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r30.u32);
	// mr r21,r15
	r21.u64 = r15.u64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x8246f4f4
	if (ctx.cr6.eq) goto loc_8246F4F4;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfd f29,-3744(r8)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r8.u32 + -3744);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfs f30,3716(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3716);
	f30.f64 = double(temp.f32);
	// addi r27,r25,4
	r27.s64 = r25.s64 + 4;
	// lfs f31,3704(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3704);
	f31.f64 = double(temp.f32);
	// addi r24,r11,28840
	r24.s64 = ctx.r11.s64 + 28840;
	// addi r23,r10,28832
	r23.s64 = ctx.r10.s64 + 28832;
	// addi r22,r9,28824
	r22.s64 = ctx.r9.s64 + 28824;
	// addi r25,r8,28816
	r25.s64 = ctx.r8.s64 + 28816;
loc_8246EFB8:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r9,348(r18)
	ctx.r9.u64 = REX_LOAD_U32(r18.u32 + 348);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,16(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r11,r11,r19
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r19.u32);
	// lwz r9,96(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r28,24(r9)
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// lwzx r29,r11,r10
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r4,24(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// bne cr6,0x8246eff8
	if (!ctx.cr6.eq) goto loc_8246EFF8;
	// li r6,7
	ctx.r6.s64 = 7;
	// b 0x8246f048
	goto loc_8246F048;
loc_8246EFF8:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8246f010
	if (ctx.cr0.eq) goto loc_8246F010;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// b 0x8246f02c
	goto loc_8246F02C;
loc_8246F010:
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8246f020
	if (ctx.cr0.eq) goto loc_8246F020;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// b 0x8246f02c
	goto loc_8246F02C;
loc_8246F020:
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8246f02c
	if (ctx.cr0.eq) goto loc_8246F02C;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
loc_8246F02C:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82404168
	ctx.lr = 0x8246F03C;
	sub_82404168(ctx, base);
	// stb r15,446(r1)
	REX_STORE_U8(ctx.r1.u32 + 446, r15.u8);
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
loc_8246F048:
	// addi r30,r27,-4
	r30.s64 = r27.s64 + -4;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82449708
	ctx.lr = 0x8246F060;
	sub_82449708(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8246f640
	if (ctx.cr0.lt) goto loc_8246F640;
	// lwz r9,0(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// b 0x8246f110
	goto loc_8246F110;
loc_8246F078:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r19
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r19.u32);
	// lwzx r8,r8,r19
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + r19.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8246f118
	if (!ctx.cr6.eq) goto loc_8246F118;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r19
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r19.u32);
	// lwzx r8,r8,r19
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + r19.u32);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r8,96(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 96);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8246f118
	if (!ctx.cr6.eq) goto loc_8246F118;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r19
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r19.u32);
	// lwzx r8,r8,r19
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + r19.u32);
	// lwz r7,112(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r6,112(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 112);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r7,r7,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// rlwinm r6,r6,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// subf r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8246f118
	if (!ctx.cr6.eq) goto loc_8246F118;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_8246F110:
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r16.u32, ctx.xer);
	// blt cr6,0x8246f078
	if (ctx.cr6.lt) goto loc_8246F078;
loc_8246F118:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm. r9,r11,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8246f12c
	if (ctx.cr0.eq) goto loc_8246F12C;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8246f14c
	goto loc_8246F14C;
loc_8246F12C:
	// rlwinm. r9,r11,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8246f13c
	if (ctx.cr0.eq) goto loc_8246F13C;
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
	// b 0x8246f14c
	goto loc_8246F14C;
loc_8246F13C:
	// rlwinm r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8246F14C:
	// sth r11,0(r27)
	REX_STORE_U16(r27.u32 + 0, ctx.r11.u16);
	// addi r11,r27,4
	ctx.r11.s64 = r27.s64 + 4;
	// lwz r9,0(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r19
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r19.u32);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r9,112(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 112);
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// sth r10,4(r27)
	REX_STORE_U16(r27.u32 + 4, ctx.r10.u16);
	// sth r9,2(r27)
	REX_STORE_U16(r27.u32 + 2, ctx.r9.u16);
	// lwz r4,48(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 48);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8246f1b0
	if (ctx.cr6.eq) goto loc_8246F1B0;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r11,r11,r19
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r19.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm r6,r11,0,8,10
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE00000;
	// bl 0x8246cb48
	ctx.lr = 0x8246F1A8;
	sub_8246CB48(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8246f640
	if (ctx.cr0.lt) goto loc_8246F640;
loc_8246F1B0:
	// lwz r11,64(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8246f1e0
	if (ctx.cr6.eq) goto loc_8246F1E0;
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r11,360(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 360);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8246F1D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8246f640
	if (ctx.cr0.lt) goto loc_8246F640;
loc_8246F1E0:
	// lwz r11,76(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8246f4dc
	if (ctx.cr6.eq) goto loc_8246F4DC;
	// lhz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8246f2f4
	if (!ctx.cr6.eq) goto loc_8246F2F4;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r31,r11,0,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r30,r31,2,0,29
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f02b8
	ctx.lr = 0x8246F210;
	sub_823F02B8(ctx, base);
	// mr. r14,r3
	r14.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq 0x8246f618
	if (ctx.cr0.eq) goto loc_8246F618;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8246F228;
	sub_826A2E60(ctx, base);
	// rlwinm. r10,r31,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
	// beq 0x8246f24c
	if (ctx.cr0.eq) goto loc_8246F24C;
	// addi r9,r14,-8
	ctx.r9.s64 = r14.s64 + -8;
loc_8246F238:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stwu r8,16(r9)
	ea = 16 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// blt cr6,0x8246f238
	if (ctx.cr6.lt) goto loc_8246F238;
loc_8246F24C:
	// lwz r11,76(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 76);
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8246f2c8
	if (!ctx.cr6.gt) goto loc_8246F2C8;
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
loc_8246F260:
	// lwz r10,80(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 80);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8246f2b4
	if (ctx.cr6.eq) goto loc_8246F2B4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x8246f2a4
	if (ctx.cr6.lt) goto loc_8246F2A4;
	// beq cr6,0x8246f29c
	if (ctx.cr6.eq) goto loc_8246F29C;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x8246f29c
	if (ctx.cr6.lt) goto loc_8246F29C;
	// bne cr6,0x8246f2b4
	if (!ctx.cr6.eq) goto loc_8246F2B4;
	// lfd f0,8(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r11,r14
	REX_STORE_U32(ctx.r11.u32 + r14.u32, ctx.f0.u32);
	// b 0x8246f2b4
	goto loc_8246F2B4;
loc_8246F29C:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8246f2b0
	goto loc_8246F2B0;
loc_8246F2A4:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8246F2B0:
	// stwx r10,r11,r14
	REX_STORE_U32(ctx.r11.u32 + r14.u32, ctx.r10.u32);
loc_8246F2B4:
	// lwz r10,76(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 76);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8246f260
	if (ctx.cr6.lt) goto loc_8246F260;
loc_8246F2C8:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r27,12
	ctx.r7.s64 = r27.s64 + 12;
	// li r6,11
	ctx.r6.s64 = 11;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82449708
	ctx.lr = 0x8246F2E4;
	sub_82449708(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8246f640
	if (ctx.cr0.lt) goto loc_8246F640;
	// mr r14,r15
	r14.u64 = r15.u64;
	// b 0x8246f4dc
	goto loc_8246F4DC;
loc_8246F2F4:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8246f3fc
	if (!ctx.cr6.eq) goto loc_8246F3FC;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r31,r11,2,0,27
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f02b8
	ctx.lr = 0x8246F310;
	sub_823F02B8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8246f618
	if (ctx.cr0.eq) goto loc_8246F618;
	// rotlwi r30,r3,0
	r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8246F330;
	sub_826A2E60(ctx, base);
	// lwz r11,76(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 76);
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8246f3d0
	if (!ctx.cr6.gt) goto loc_8246F3D0;
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
loc_8246F344:
	// lwz r10,80(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 80);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8246f3bc
	if (ctx.cr6.eq) goto loc_8246F3BC;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x8246f3a0
	if (ctx.cr6.lt) goto loc_8246F3A0;
	// beq cr6,0x8246f390
	if (ctx.cr6.eq) goto loc_8246F390;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x8246f37c
	if (ctx.cr6.lt) goto loc_8246F37C;
	// bne cr6,0x8246f3bc
	if (!ctx.cr6.eq) goto loc_8246F3BC;
	// lfd f0,8(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
loc_8246F374:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// b 0x8246f3b8
	goto loc_8246F3B8;
loc_8246F37C:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// std r10,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r10.u64);
	// lfd f0,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
loc_8246F388:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// b 0x8246f374
	goto loc_8246F374;
loc_8246F390:
	// lwa r10,8(r10)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(ctx.r10.u32 + 8));
	// std r10,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.r10.u64);
	// lfd f0,184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// b 0x8246f388
	goto loc_8246F388;
loc_8246F3A0:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8246f3b4
	if (ctx.cr6.eq) goto loc_8246F3B4;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64;
	// b 0x8246f3b8
	goto loc_8246F3B8;
loc_8246F3B4:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f30.f64;
loc_8246F3B8:
	// stfsx f0,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + r30.u32, temp.u32);
loc_8246F3BC:
	// lwz r10,76(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 76);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8246f344
	if (ctx.cr6.lt) goto loc_8246F344;
loc_8246F3D0:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r27,12
	ctx.r7.s64 = r27.s64 + 12;
	// li r6,11
	ctx.r6.s64 = 11;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82449708
	ctx.lr = 0x8246F3EC;
	sub_82449708(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8246f640
	if (ctx.cr0.lt) goto loc_8246F640;
	// stw r15,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r15.u32);
	// b 0x8246f4dc
	goto loc_8246F4DC;
loc_8246F3FC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8246f4dc
	if (!ctx.cr6.eq) goto loc_8246F4DC;
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f02b8
	ctx.lr = 0x8246F418;
	sub_823F02B8(ctx, base);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8246f618
	if (ctx.cr0.eq) goto loc_8246F618;
	// rotlwi r30,r3,0
	r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8246F438;
	sub_826A2E60(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8246f4b4
	if (!ctx.cr6.gt) goto loc_8246F4B4;
	// mr r10,r15
	ctx.r10.u64 = r15.u64;
loc_8246F44C:
	// lwz r11,84(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 84);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8246f4a0
	if (ctx.cr6.eq) goto loc_8246F4A0;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x8246f490
	if (ctx.cr6.lt) goto loc_8246F490;
	// beq cr6,0x8246f490
	if (ctx.cr6.eq) goto loc_8246F490;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x8246f490
	if (ctx.cr6.lt) goto loc_8246F490;
	// bne cr6,0x8246f4a0
	if (!ctx.cr6.eq) goto loc_8246F4A0;
	// lfd f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bne cr6,0x8246f49c
	if (!ctx.cr6.eq) goto loc_8246F49C;
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
	// b 0x8246f49c
	goto loc_8246F49C;
loc_8246F490:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8246F49C:
	// stwx r11,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r11.u32);
loc_8246F4A0:
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8246f44c
	if (ctx.cr6.lt) goto loc_8246F44C;
loc_8246F4B4:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r27,12
	ctx.r7.s64 = r27.s64 + 12;
	// li r6,11
	ctx.r6.s64 = 11;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82449708
	ctx.lr = 0x8246F4D0;
	sub_82449708(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8246f640
	if (ctx.cr0.lt) goto loc_8246F640;
	// stw r15,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r15.u32);
loc_8246F4DC:
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// addi r27,r27,20
	r27.s64 = r27.s64 + 20;
	// cmplw cr6,r21,r17
	ctx.cr6.compare<uint32_t>(r21.u32, r17.u32, ctx.xer);
	// blt cr6,0x8246efb8
	if (ctx.cr6.lt) goto loc_8246EFB8;
	// lwz r25,88(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_8246F4F4:
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r11,356(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8246F514;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8246f640
	if (ctx.cr0.lt) goto loc_8246F640;
	// addi r11,r1,168
	ctx.r11.s64 = ctx.r1.s64 + 168;
	// lwz r3,268(r18)
	ctx.r3.u64 = REX_LOAD_U32(r18.u32 + 268);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r15,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r15.u64);
	// stw r15,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r15.u32);
	// bl 0x823ff340
	ctx.lr = 0x8246F538;
	sub_823FF340(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8246f640
	if (ctx.cr0.lt) goto loc_8246F640;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,168(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82449708
	ctx.lr = 0x8246F55C;
	sub_82449708(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8246f640
	if (ctx.cr0.lt) goto loc_8246F640;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82449708
	ctx.lr = 0x8246F584;
	sub_82449708(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8246f640
	if (ctx.cr0.lt) goto loc_8246F640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82449678
	ctx.lr = 0x8246F594;
	sub_82449678(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,32768
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32768, ctx.xer);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bgt cr6,0x8246f624
	if (ctx.cr6.gt) goto loc_8246F624;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8246ce60
	ctx.lr = 0x8246F5AC;
	sub_8246CE60(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8246f640
	if (ctx.cr0.lt) goto loc_8246F640;
	// lwz r9,276(r18)
	ctx.r9.u64 = REX_LOAD_U32(r18.u32 + 276);
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// lwz r11,272(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 272);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269cc20
	ctx.lr = 0x8246F5D8;
	sub_8269CC20(ctx, base);
	// lwz r11,272(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 272);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x824499f0
	ctx.lr = 0x8246F5EC;
	sub_824499F0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8246f640
	if (ctx.cr0.lt) goto loc_8246F640;
	// lwz r11,276(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 276);
	// mr r31,r15
	r31.u64 = r15.u64;
	// lwz r10,292(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 292);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// stw r11,276(r18)
	REX_STORE_U32(r18.u32 + 276, ctx.r11.u32);
	// stw r10,292(r18)
	REX_STORE_U32(r18.u32 + 292, ctx.r10.u32);
	// stw r11,288(r18)
	REX_STORE_U32(r18.u32 + 288, ctx.r11.u32);
	// b 0x8246f640
	goto loc_8246F640;
loc_8246F618:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8246f640
	goto loc_8246F640;
loc_8246F624:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,4548
	ctx.r5.s64 = 4548;
	// addi r6,r11,28764
	ctx.r6.s64 = ctx.r11.s64 + 28764;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82489c30
	ctx.lr = 0x8246F638;
	sub_82489C30(ctx, base);
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
loc_8246F640:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x823f0350
	ctx.lr = 0x8246F64C;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x823f0350
	ctx.lr = 0x8246F658;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823f0350
	ctx.lr = 0x8246F664;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x823f0350
	ctx.lr = 0x8246F670;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x823f0350
	ctx.lr = 0x8246F67C;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x823f0350
	ctx.lr = 0x8246F688;
	sub_823F0350(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82449690
	ctx.lr = 0x8246F690;
	sub_82449690(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_824CC488) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824CC490;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,456(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824cc4e4
	if (ctx.cr6.eq) goto loc_824CC4E4;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,40(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 40);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x824c1c00
	ctx.lr = 0x824CC4D4;
	sub_824C1C00(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// b 0x824cc554
	goto loc_824CC554;
loc_824CC4E4:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r30,2
	r30.s64 = 2;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x824cc4f8
	if (!ctx.cr6.lt) goto loc_824CC4F8;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_824CC4F8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x824cc50c
	if (!ctx.cr6.gt) goto loc_824CC50C;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
loc_824CC50C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ble cr6,0x824cc530
	if (!ctx.cr6.gt) goto loc_824CC530;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x824cc540
	goto loc_824CC540;
loc_824CC530:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
loc_824CC540:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824CC554;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824CC554:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 44);
	// subf r8,r30,r9
	ctx.r8.u64 = ctx.r9.u64 - r30.u64;
	// stw r8,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r8.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x824cc584
	if (!ctx.cr6.eq) goto loc_824CC584;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_824CC584:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824D3C40) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824e3928
	ctx.lr = 0x824D3C78;
	sub_824E3928(ctx, base);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824e3400
	ctx.lr = 0x824D3C8C;
	sub_824E3400(ctx, base);
	// lhz r9,82(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// li r11,16
	ctx.r11.s64 = 16;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r8,r9,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// rlwinm r9,r10,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lvrx128 v63,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r9,r8,20976
	ctx.r9.s64 = ctx.r8.s64 + 20976;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lvrx128 v61,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v60,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v61,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vor128 v62,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vcuxwfp128 v61,v61,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v61.f32, rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r7,10980
	ctx.r11.s64 = ctx.r7.s64 + 10980;
	// vcuxwfp128 v62,v62,0
	simde_mm_store_ps(ctx.v62.f32, rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r5,r5,17180
	ctx.r5.s64 = ctx.r5.s64 + 17180;
	// vmulfp128 v0,v61,v63
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v63,v62,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v13,v63,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v12,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vmaddfp v12,v13,v12,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v12,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v63,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v12,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vmaddfp v0,v13,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_824D3D60:
	// rlwinm r11,r6,4,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0x30;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// rlwinm r6,r6,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// lvx128 v63,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// bdnz 0x824d3d60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824D3D60;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

DEFINE_REX_FUNC(sub_824DCB28) {
	REX_FUNC_PROLOGUE();
	// b 0x824db950
	sub_824DB950(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824DCB80) {
	REX_FUNC_PROLOGUE();
	// b 0x824dbf38
	sub_824DBF38(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824DCBC8) {
	REX_FUNC_PROLOGUE();
	// b 0x824dc430
	sub_824DC430(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824DD478) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824DD480;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,160(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824dd49c
	if (!ctx.cr6.eq) goto loc_824DD49C;
	// bl 0x824db1c8
	ctx.lr = 0x824DD49C;
	sub_824DB1C8(ctx, base);
loc_824DD49C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22620
	ctx.r4.s64 = ctx.r11.s64 + 22620;
	// bl 0x824eac90
	ctx.lr = 0x824DD4AC;
	sub_824EAC90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-26300
	ctx.r4.s64 = ctx.r11.s64 + -26300;
	// bl 0x824eac90
	ctx.lr = 0x824DD4BC;
	sub_824EAC90(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x824d7948
	ctx.lr = 0x824DD4CC;
	sub_824D7948(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r29,r11,22608
	r29.s64 = ctx.r11.s64 + 22608;
	// addi r4,r10,28488
	ctx.r4.s64 = ctx.r10.s64 + 28488;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824DD4E8;
	sub_824EAC90(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,168(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 168);
	// addi r4,r11,22540
	ctx.r4.s64 = ctx.r11.s64 + 22540;
	// lwz r6,164(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 164);
	// lwz r5,160(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 160);
	// bl 0x824eac90
	ctx.lr = 0x824DD504;
	sub_824EAC90(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,11164
	ctx.r5.s64 = 11164;
	// addi r4,r11,22592
	ctx.r4.s64 = ctx.r11.s64 + 22592;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824DD518;
	sub_824EAC90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d8700
	ctx.lr = 0x824DD520;
	sub_824D8700(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d8888
	ctx.lr = 0x824DD52C;
	sub_824D8888(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824da320
	ctx.lr = 0x824DD538;
	sub_824DA320(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824dc6e0
	ctx.lr = 0x824DD544;
	sub_824DC6E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d79a8
	ctx.lr = 0x824DD550;
	sub_824D79A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824E19B8) {
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
	ctx.lr = 0x824E19C0;
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// bl 0x823f02b8
	ctx.lr = 0x824E19F0;
	sub_823F02B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x824e1a04
	if (!ctx.cr0.eq) goto loc_824E1A04;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824e1b68
	goto loc_824E1B68;
loc_824E1A04:
	// lwz r3,804(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 804);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lwz r11,812(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 812);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e18b8
	ctx.lr = 0x824E1A38;
	sub_824E18B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824e1a50
	if (ctx.cr0.lt) goto loc_824E1A50;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,0(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x822c9b18
	ctx.lr = 0x824E1A50;
	sub_822C9B18(ctx, base);
loc_824E1A50:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x824E1A5C;
	sub_823F0350(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x824e1b64
	if (ctx.cr6.lt) goto loc_824E1B64;
	// rlwinm. r11,r24,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824e1b64
	if (!ctx.cr0.eq) goto loc_824E1B64;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,820(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 820);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lwz r4,0(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 0);
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// rlwinm r27,r11,10,15,21
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1FC00;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r10,-26120
	ctx.r7.s64 = ctx.r10.s64 + -26120;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x821aae70
	ctx.lr = 0x824E1A9C;
	sub_821AAE70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824e1ab0
	if (ctx.cr0.lt) goto loc_824E1AB0;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824e1b64
	if (ctx.cr6.eq) goto loc_824E1B64;
loc_824E1AB0:
	// rlwinm r4,r30,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0x1;
	// stw r29,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// stw r28,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// stw r4,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// sth r31,120(r1)
	REX_STORE_U16(ctx.r1.u32 + 120, r31.u16);
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r11,7101
	ctx.r5.s64 = ctx.r11.s64 + 7101;
	// bge cr6,0x824e1aec
	if (!ctx.cr6.lt) goto loc_824E1AEC;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r10,11912
	ctx.r6.s64 = ctx.r10.s64 + 11912;
	// b 0x824e1af4
	goto loc_824E1AF4;
loc_824E1AEC:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r10,11860
	ctx.r6.s64 = ctx.r10.s64 + 11860;
loc_824E1AF4:
	// bctrl 
	ctx.lr = 0x824E1AF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r7,r11,-1560
	ctx.r7.s64 = ctx.r11.s64 + -1560;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x821aae70
	ctx.lr = 0x824E1B18;
	sub_821AAE70(ctx, base);
	// lhz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824e1b2c
	if (ctx.cr0.eq) goto loc_824E1B2C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824df908
	ctx.lr = 0x824E1B2C;
	sub_824DF908(ctx, base);
loc_824E1B2C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,0(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r11,-1560
	ctx.r6.s64 = ctx.r11.s64 + -1560;
	// li r5,68
	ctx.r5.s64 = 68;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x824e32a0
	ctx.lr = 0x824E1B50;
	sub_824E32A0(ctx, base);
	// lhz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824e1b64
	if (ctx.cr0.eq) goto loc_824E1B64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824df908
	ctx.lr = 0x824E1B64;
	sub_824DF908(ctx, base);
loc_824E1B64:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824E1B68:
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_824EC3A8) {
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
	ctx.lr = 0x824EC3B0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824ec404
	if (!ctx.cr6.eq) goto loc_824EC404;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824ec3ec
	if (ctx.cr0.eq) goto loc_824EC3EC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-27528
	ctx.r5.s64 = ctx.r11.s64 + -27528;
	// b 0x824ec3f4
	goto loc_824EC3F4;
loc_824EC3EC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-27532
	ctx.r5.s64 = ctx.r11.s64 + -27532;
loc_824EC3F4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,26372
	ctx.r4.s64 = ctx.r11.s64 + 26372;
	// bl 0x824eace8
	ctx.lr = 0x824EC404;
	sub_824EACE8(ctx, base);
loc_824EC404:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824ec8f8
	if (ctx.cr0.eq) goto loc_824EC8F8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824ec8e4
	if (!ctx.cr6.gt) goto loc_824EC8E4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x824ec440
	if (!ctx.cr6.gt) goto loc_824EC440;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// ble cr6,0x824ec8e4
	if (!ctx.cr6.gt) goto loc_824EC8E4;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// ble cr6,0x824ec440
	if (!ctx.cr6.gt) goto loc_824EC440;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// ble cr6,0x824ec8e4
	if (!ctx.cr6.gt) goto loc_824EC8E4;
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// bgt cr6,0x824ec8e4
	if (ctx.cr6.gt) goto loc_824EC8E4;
loc_824EC440:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r10,18416
	ctx.r4.s64 = ctx.r10.s64 + 18416;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// bgt cr6,0x824ec508
	if (ctx.cr6.gt) goto loc_824EC508;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,-28280
	ctx.r12.s64 = ctx.r12.s64 + -28280;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32177
	ctx.r12.s64 = -2108751872;
	// nop 
	// addi r12,r12,-15236
	ctx.r12.s64 = ctx.r12.s64 + -15236;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_824EC47C;
	case 1:
		goto loc_824EC488;
	case 2:
		goto loc_824EC494;
	case 3:
		goto loc_824EC4A0;
	case 4:
		goto loc_824EC508;
	case 5:
		goto loc_824EC508;
	case 6:
		goto loc_824EC508;
	case 7:
		goto loc_824EC508;
	case 8:
		goto loc_824EC508;
	case 9:
		goto loc_824EC508;
	case 10:
		goto loc_824EC508;
	case 11:
		goto loc_824EC508;
	case 12:
		goto loc_824EC508;
	case 13:
		goto loc_824EC508;
	case 14:
		goto loc_824EC508;
	case 15:
		goto loc_824EC4AC;
	case 16:
		goto loc_824EC4B8;
	case 17:
		goto loc_824EC4C4;
	case 18:
		goto loc_824EC4D0;
	case 19:
		goto loc_824EC508;
	case 20:
		goto loc_824EC508;
	case 21:
		goto loc_824EC508;
	case 22:
		goto loc_824EC508;
	case 23:
		goto loc_824EC4DC;
	case 24:
		goto loc_824EC4E8;
	case 25:
		goto loc_824EC4F4;
	case 26:
		goto loc_824EC500;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_824EC47C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-27540
	ctx.r4.s64 = ctx.r11.s64 + -27540;
	// b 0x824ec508
	goto loc_824EC508;
loc_824EC488:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-27556
	ctx.r4.s64 = ctx.r11.s64 + -27556;
	// b 0x824ec508
	goto loc_824EC508;
loc_824EC494:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-27572
	ctx.r4.s64 = ctx.r11.s64 + -27572;
	// b 0x824ec508
	goto loc_824EC508;
loc_824EC4A0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-27592
	ctx.r4.s64 = ctx.r11.s64 + -27592;
	// b 0x824ec508
	goto loc_824EC508;
loc_824EC4AC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-27616
	ctx.r4.s64 = ctx.r11.s64 + -27616;
	// b 0x824ec508
	goto loc_824EC508;
loc_824EC4B8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-27632
	ctx.r4.s64 = ctx.r11.s64 + -27632;
	// b 0x824ec508
	goto loc_824EC508;
loc_824EC4C4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-27644
	ctx.r4.s64 = ctx.r11.s64 + -27644;
	// b 0x824ec508
	goto loc_824EC508;
loc_824EC4D0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-27656
	ctx.r4.s64 = ctx.r11.s64 + -27656;
	// b 0x824ec508
	goto loc_824EC508;
loc_824EC4DC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18448
	ctx.r4.s64 = ctx.r11.s64 + 18448;
	// b 0x824ec508
	goto loc_824EC508;
loc_824EC4E8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18460
	ctx.r4.s64 = ctx.r11.s64 + 18460;
	// b 0x824ec508
	goto loc_824EC508;
loc_824EC4F4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18476
	ctx.r4.s64 = ctx.r11.s64 + 18476;
	// b 0x824ec508
	goto loc_824EC508;
loc_824EC500:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-27676
	ctx.r4.s64 = ctx.r11.s64 + -27676;
loc_824EC508:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eb568
	ctx.lr = 0x824EC510;
	sub_824EB568(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-26960
	ctx.r4.s64 = ctx.r11.s64 + -26960;
	// bl 0x824eace8
	ctx.lr = 0x824EC520;
	sub_824EACE8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r5,r11,20,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// beq 0x824ec540
	if (ctx.cr0.eq) goto loc_824EC540;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18108
	ctx.r4.s64 = ctx.r11.s64 + 18108;
	// b 0x824ec548
	goto loc_824EC548;
loc_824EC540:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18120
	ctx.r4.s64 = ctx.r11.s64 + 18120;
loc_824EC548:
	// bl 0x824eace8
	ctx.lr = 0x824EC54C;
	sub_824EACE8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r27,r11,-14240
	r27.s64 = ctx.r11.s64 + -14240;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x824eace8
	ctx.lr = 0x824EC560;
	sub_824EACE8(ctx, base);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r29,r11,-19688
	r29.s64 = ctx.r11.s64 + -19688;
	// addi r28,r10,17936
	r28.s64 = ctx.r10.s64 + 17936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// lbzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824eace8
	ctx.lr = 0x824EC58C;
	sub_824EACE8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// rlwinm r11,r11,29,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824eace8
	ctx.lr = 0x824EC5A8;
	sub_824EACE8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// rlwinm r11,r11,26,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824eace8
	ctx.lr = 0x824EC5C4;
	sub_824EACE8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// rlwinm r11,r11,23,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824eace8
	ctx.lr = 0x824EC5E0;
	sub_824EACE8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,9192
	ctx.r4.s64 = ctx.r11.s64 + 9192;
	// bl 0x824eace8
	ctx.lr = 0x824EC5F0;
	sub_824EACE8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
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
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r5,r11,28,24,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x80;
	// rlwinm r11,r11,27,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// or r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 | ctx.r11.u64;
	// bl 0x824eb9e0
	ctx.lr = 0x824EC628;
	sub_824EB9E0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eace8
	ctx.lr = 0x824EC634;
	sub_824EACE8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824eace8
	ctx.lr = 0x824EC650;
	sub_824EACE8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// rlwinm r11,r11,4,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824eace8
	ctx.lr = 0x824EC66C;
	sub_824EACE8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// beq cr6,0x824ec694
	if (ctx.cr6.eq) goto loc_824EC694;
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824eace8
	ctx.lr = 0x824EC694;
	sub_824EACE8(ctx, base);
loc_824EC694:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-27684
	ctx.r4.s64 = ctx.r10.s64 + -27684;
	// rlwinm r5,r11,12,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1F;
	// bl 0x824eace8
	ctx.lr = 0x824EC6AC;
	sub_824EACE8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824ec6c8
	if (ctx.cr0.eq) goto loc_824EC6C8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-27720
	ctx.r4.s64 = ctx.r11.s64 + -27720;
	// bl 0x824eace8
	ctx.lr = 0x824EC6C8;
	sub_824EACE8(ctx, base);
loc_824EC6C8:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,20,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x824ec6f4
	if (ctx.cr6.eq) goto loc_824EC6F4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1176
	ctx.r10.s64 = r29.s64 + 1176;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-27736
	ctx.r4.s64 = ctx.r9.s64 + -27736;
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824eace8
	ctx.lr = 0x824EC6F4;
	sub_824EACE8(ctx, base);
loc_824EC6F4:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,18,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x824ec720
	if (ctx.cr6.eq) goto loc_824EC720;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1192
	ctx.r10.s64 = r29.s64 + 1192;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-27752
	ctx.r4.s64 = ctx.r9.s64 + -27752;
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824eace8
	ctx.lr = 0x824EC720;
	sub_824EACE8(ctx, base);
loc_824EC720:
	// lhz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 4);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x824ec74c
	if (ctx.cr6.eq) goto loc_824EC74C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1208
	ctx.r10.s64 = r29.s64 + 1208;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-27768
	ctx.r4.s64 = ctx.r9.s64 + -27768;
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824eace8
	ctx.lr = 0x824EC74C;
	sub_824EACE8(ctx, base);
loc_824EC74C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,14,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x7;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x824ec778
	if (ctx.cr6.eq) goto loc_824EC778;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1224
	ctx.r10.s64 = r29.s64 + 1224;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-27788
	ctx.r4.s64 = ctx.r9.s64 + -27788;
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824eace8
	ctx.lr = 0x824EC778;
	sub_824EACE8(ctx, base);
loc_824EC778:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,11,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x7;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x824ec7a4
	if (ctx.cr6.eq) goto loc_824EC7A4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1256
	ctx.r10.s64 = r29.s64 + 1256;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,18216
	ctx.r4.s64 = ctx.r9.s64 + 18216;
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824eace8
	ctx.lr = 0x824EC7A4;
	sub_824EACE8(ctx, base);
loc_824EC7A4:
	// lbz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 4);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x824ec7d0
	if (ctx.cr6.eq) goto loc_824EC7D0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1288
	ctx.r10.s64 = r29.s64 + 1288;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-27808
	ctx.r4.s64 = ctx.r9.s64 + -27808;
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824eace8
	ctx.lr = 0x824EC7D0;
	sub_824EACE8(ctx, base);
loc_824EC7D0:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x824ec7fc
	if (ctx.cr6.eq) goto loc_824EC7FC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1304
	ctx.r10.s64 = r29.s64 + 1304;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-27828
	ctx.r4.s64 = ctx.r9.s64 + -27828;
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824eace8
	ctx.lr = 0x824EC7FC;
	sub_824EACE8(ctx, base);
loc_824EC7FC:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm. r5,r11,4,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x824ec818
	if (ctx.cr0.eq) goto loc_824EC818;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-27848
	ctx.r4.s64 = ctx.r11.s64 + -27848;
	// bl 0x824eace8
	ctx.lr = 0x824EC818;
	sub_824EACE8(ctx, base);
loc_824EC818:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r11,3,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824ec840
	if (ctx.cr0.eq) goto loc_824EC840;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1320
	ctx.r10.s64 = r29.s64 + 1320;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-27868
	ctx.r4.s64 = ctx.r9.s64 + -27868;
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824eace8
	ctx.lr = 0x824EC840;
	sub_824EACE8(ctx, base);
loc_824EC840:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// clrlwi. r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x824ec85c
	if (ctx.cr0.eq) goto loc_824EC85C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-27896
	ctx.r4.s64 = ctx.r11.s64 + -27896;
	// bl 0x824eace8
	ctx.lr = 0x824EC85C;
	sub_824EACE8(ctx, base);
loc_824EC85C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824ec878
	if (ctx.cr0.eq) goto loc_824EC878;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-27924
	ctx.r4.s64 = ctx.r11.s64 + -27924;
	// bl 0x824eace8
	ctx.lr = 0x824EC878;
	sub_824EACE8(ctx, base);
loc_824EC878:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm. r5,r11,30,25,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x824ec894
	if (ctx.cr0.eq) goto loc_824EC894;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-27940
	ctx.r4.s64 = ctx.r11.s64 + -27940;
	// bl 0x824eace8
	ctx.lr = 0x824EC894;
	sub_824EACE8(ctx, base);
loc_824EC894:
	// lhz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 8);
	// clrlwi. r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x824ec8b0
	if (ctx.cr0.eq) goto loc_824EC8B0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-27956
	ctx.r4.s64 = ctx.r11.s64 + -27956;
	// bl 0x824eace8
	ctx.lr = 0x824EC8B0;
	sub_824EACE8(ctx, base);
loc_824EC8B0:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm. r5,r11,11,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x824ec8cc
	if (ctx.cr0.eq) goto loc_824EC8CC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-27972
	ctx.r4.s64 = ctx.r11.s64 + -27972;
	// bl 0x824eace8
	ctx.lr = 0x824EC8CC;
	sub_824EACE8(ctx, base);
loc_824EC8CC:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm. r5,r11,6,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x824ecc84
	if (ctx.cr0.eq) goto loc_824ECC84;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-27988
	ctx.r4.s64 = ctx.r11.s64 + -27988;
	// b 0x824ecc7c
	goto loc_824ECC7C;
loc_824EC8E4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-28012
	ctx.r4.s64 = ctx.r11.s64 + -28012;
	// bl 0x824eace8
	ctx.lr = 0x824EC8F4;
	sub_824EACE8(ctx, base);
	// b 0x824ecc84
	goto loc_824ECC84;
loc_824EC8F8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,18184
	ctx.r4.s64 = ctx.r11.s64 + 18184;
	// bl 0x824eb568
	ctx.lr = 0x824EC908;
	sub_824EB568(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-26960
	ctx.r4.s64 = ctx.r11.s64 + -26960;
	// bl 0x824eace8
	ctx.lr = 0x824EC918;
	sub_824EACE8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r5,r11,20,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// beq 0x824ec938
	if (ctx.cr0.eq) goto loc_824EC938;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18108
	ctx.r4.s64 = ctx.r11.s64 + 18108;
	// b 0x824ec940
	goto loc_824EC940;
loc_824EC938:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18120
	ctx.r4.s64 = ctx.r11.s64 + 18120;
loc_824EC940:
	// bl 0x824eace8
	ctx.lr = 0x824EC944;
	sub_824EACE8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-14240
	ctx.r4.s64 = ctx.r11.s64 + -14240;
	// bl 0x824eace8
	ctx.lr = 0x824EC954;
	sub_824EACE8(ctx, base);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r29,r11,-19688
	r29.s64 = ctx.r11.s64 + -19688;
	// addi r28,r10,17936
	r28.s64 = ctx.r10.s64 + 17936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// lbzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824eace8
	ctx.lr = 0x824EC980;
	sub_824EACE8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// rlwinm r11,r11,29,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824eace8
	ctx.lr = 0x824EC99C;
	sub_824EACE8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// rlwinm r11,r11,26,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824eace8
	ctx.lr = 0x824EC9B8;
	sub_824EACE8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// rlwinm r11,r11,23,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824eace8
	ctx.lr = 0x824EC9D4;
	sub_824EACE8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r27,r11,9192
	r27.s64 = ctx.r11.s64 + 9192;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x824eace8
	ctx.lr = 0x824EC9E8;
	sub_824EACE8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
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
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r5,r11,28,24,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x80;
	// rlwinm r11,r11,27,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// or r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 | ctx.r11.u64;
	// bl 0x824eb9e0
	ctx.lr = 0x824ECA20;
	sub_824EB9E0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,18204
	ctx.r4.s64 = ctx.r11.s64 + 18204;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// lbzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x824eace8
	ctx.lr = 0x824ECA40;
	sub_824EACE8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824eca74
	if (!ctx.cr0.eq) goto loc_824ECA74;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r10,r10,-18108
	ctx.r10.s64 = ctx.r10.s64 + -18108;
	// rlwinm r8,r11,9,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xC;
	// addi r4,r9,-28024
	ctx.r4.s64 = ctx.r9.s64 + -28024;
	// rlwinm r5,r11,12,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1F;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r6,r8,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x824eace8
	ctx.lr = 0x824ECA74;
	sub_824EACE8(ctx, base);
loc_824ECA74:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r26,r11,28264
	r26.s64 = ctx.r11.s64 + 28264;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x824eace8
	ctx.lr = 0x824ECA88;
	sub_824EACE8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r25,r11,28576
	r25.s64 = ctx.r11.s64 + 28576;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824ecab0
	if (ctx.cr0.eq) goto loc_824ECAB0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r5,r11,19228
	ctx.r5.s64 = ctx.r11.s64 + 19228;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eace8
	ctx.lr = 0x824ECAB0;
	sub_824EACE8(ctx, base);
loc_824ECAB0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r28,r11,18124
	r28.s64 = ctx.r11.s64 + 18124;
	// bne 0x824ecb14
	if (!ctx.cr0.eq) goto loc_824ECB14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ec260
	ctx.lr = 0x824ECACC;
	sub_824EC260(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eace8
	ctx.lr = 0x824ECAD8;
	sub_824EACE8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-28052
	ctx.r4.s64 = ctx.r11.s64 + -28052;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r6,r11,24,9,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7FFFFF;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x824eace8
	ctx.lr = 0x824ECAF4;
	sub_824EACE8(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r29,1336
	ctx.r11.s64 = r29.s64 + 1336;
	// addi r4,r10,-28068
	ctx.r4.s64 = ctx.r10.s64 + -28068;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 4);
	// rlwinm r10,r10,2,24,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x824eace8
	ctx.lr = 0x824ECB14;
	sub_824EACE8(ctx, base);
loc_824ECB14:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ec260
	ctx.lr = 0x824ECB1C;
	sub_824EC260(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eace8
	ctx.lr = 0x824ECB28;
	sub_824EACE8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,-14992
	r29.s64 = ctx.r11.s64 + -14992;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824ecb50
	if (ctx.cr0.eq) goto loc_824ECB50;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,-28080
	ctx.r4.s64 = ctx.r11.s64 + -28080;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eace8
	ctx.lr = 0x824ECB50;
	sub_824EACE8(ctx, base);
loc_824ECB50:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-28092
	ctx.r4.s64 = ctx.r11.s64 + -28092;
	// bl 0x824eace8
	ctx.lr = 0x824ECB60;
	sub_824EACE8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824ecb7c
	if (ctx.cr0.eq) goto loc_824ECB7C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-28116
	ctx.r4.s64 = ctx.r11.s64 + -28116;
	// b 0x824ecb84
	goto loc_824ECB84;
loc_824ECB7C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-28140
	ctx.r4.s64 = ctx.r11.s64 + -28140;
loc_824ECB84:
	// bl 0x824eace8
	ctx.lr = 0x824ECB88;
	sub_824EACE8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eace8
	ctx.lr = 0x824ECB94;
	sub_824EACE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ec260
	ctx.lr = 0x824ECB9C;
	sub_824EC260(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eace8
	ctx.lr = 0x824ECBA8;
	sub_824EACE8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-28152
	ctx.r4.s64 = ctx.r11.s64 + -28152;
	// bl 0x824eace8
	ctx.lr = 0x824ECBB8;
	sub_824EACE8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824ecbd0
	if (ctx.cr0.eq) goto loc_824ECBD0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x824ecbd8
	goto loc_824ECBD8;
loc_824ECBD0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-14984
	ctx.r4.s64 = ctx.r11.s64 + -14984;
loc_824ECBD8:
	// bl 0x824eace8
	ctx.lr = 0x824ECBDC;
	sub_824EACE8(ctx, base);
	// lbz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 4);
	// clrlwi. r5,r11,26
	ctx.r5.u64 = ctx.r11.u32 & 0x3F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x824ecbf8
	if (ctx.cr0.eq) goto loc_824ECBF8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-28168
	ctx.r4.s64 = ctx.r11.s64 + -28168;
	// bl 0x824eace8
	ctx.lr = 0x824ECBF8;
	sub_824EACE8(ctx, base);
loc_824ECBF8:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x824ecc64
	if (ctx.cr6.eq) goto loc_824ECC64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824ecc64
	if (!ctx.cr0.eq) goto loc_824ECC64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eace8
	ctx.lr = 0x824ECC18;
	sub_824EACE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ec260
	ctx.lr = 0x824ECC20;
	sub_824EC260(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eace8
	ctx.lr = 0x824ECC2C;
	sub_824EACE8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824ecc58
	if (!ctx.cr0.eq) goto loc_824ECC58;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// rlwinm r11,r11,5,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x7;
	// addi r4,r10,-28204
	ctx.r4.s64 = ctx.r10.s64 + -28204;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x824eace8
	ctx.lr = 0x824ECC54;
	sub_824EACE8(ctx, base);
	// b 0x824ecc64
	goto loc_824ECC64;
loc_824ECC58:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-28220
	ctx.r4.s64 = ctx.r11.s64 + -28220;
	// bl 0x824eace8
	ctx.lr = 0x824ECC64;
	sub_824EACE8(ctx, base);
loc_824ECC64:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824ecc84
	if (ctx.cr0.eq) goto loc_824ECC84;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r5,r11,19212
	ctx.r5.s64 = ctx.r11.s64 + 19212;
loc_824ECC7C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eace8
	ctx.lr = 0x824ECC84;
	sub_824EACE8(ctx, base);
loc_824ECC84:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8254FAD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8254FAE4:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8254fafc
	if (ctx.cr6.eq) goto loc_8254FAFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8254fae4
	if (!ctx.cr6.eq) goto loc_8254FAE4;
loc_8254FAFC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// lis r8,32640
	ctx.r8.s64 = 2139095040;
	// stw r10,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// lfs f13,-16(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r4,1
	ctx.r9.s64 = ctx.r4.s64 + 1;
	// addi r10,r4,5
	ctx.r10.s64 = ctx.r4.s64 + 5;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stfdx f0,r9,r11
	REX_STORE_U64(ctx.r9.u32 + ctx.r11.u32, ctx.f0.u64);
	// stfdx f13,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.f13.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82550370) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// bne cr6,0x825503b8
	if (!ctx.cr6.eq) goto loc_825503B8;
loc_82550398:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x825503AC;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// lwzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// b 0x825503e4
	goto loc_825503E4;
loc_825503B8:
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// beq cr6,0x825503d4
	if (ctx.cr6.eq) goto loc_825503D4;
	// cmplwi cr6,r11,99
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 99, ctx.xer);
	// beq cr6,0x825503d4
	if (ctx.cr6.eq) goto loc_825503D4;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x825503d8
	if (!ctx.cr6.eq) goto loc_825503D8;
loc_825503D4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825503D8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82550398
	if (!ctx.cr0.eq) goto loc_82550398;
	// li r3,0
	ctx.r3.s64 = 0;
loc_825503E4:
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

DEFINE_REX_FUNC(sub_825535B8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb0
	ctx.lr = 0x825535C0;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x826a2ca8
	ctx.lr = 0x825535C8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,20(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825536d0
	if (!ctx.cr6.gt) goto loc_825536D0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lfd f31,32424(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 32424);
	// lfd f28,8312(r10)
	f28.u64 = REX_LOAD_U64(ctx.r10.u32 + 8312);
	// lfd f29,-21136(r9)
	f29.u64 = REX_LOAD_U64(ctx.r9.u32 + -21136);
	// lfd f30,-21144(r8)
	f30.u64 = REX_LOAD_U64(ctx.r8.u32 + -21144);
loc_8255360C:
	// addi r11,r31,2
	ctx.r11.s64 = r31.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r11,r29
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r3,12(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 12);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x825536e4
	if (!ctx.cr6.eq) goto loc_825536E4;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r4,r11,27,30,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// bl 0x825b8570
	ctx.lr = 0x8255363C;
	sub_825B8570(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// blt cr6,0x82553708
	if (ctx.cr6.lt) goto loc_82553708;
	// fcmpu cr6,f1,f29
	ctx.cr6.compare(ctx.f1.f64, f29.f64);
	// bgt cr6,0x82553708
	if (ctx.cr6.gt) goto loc_82553708;
	// fmul f0,f1,f28
	ctx.f0.f64 = ctx.f1.f64 * f28.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * f31.f64;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x825536ec
	if (!ctx.cr6.eq) goto loc_825536EC;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(r31.u32, 1, ctx.xer);
	// blt cr6,0x825536a4
	if (ctx.cr6.lt) goto loc_825536A4;
	// beq cr6,0x82553698
	if (ctx.cr6.eq) goto loc_82553698;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(r31.u32, 3, ctx.xer);
	// bge cr6,0x825536fc
	if (!ctx.cr6.lt) goto loc_825536FC;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwimi r10,r11,26,1,5
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x7C000000) | (ctx.r10.u64 & 0xFFFFFFFF83FFFFFF);
	// b 0x825536ac
	goto loc_825536AC;
loc_82553698:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwimi r10,r11,21,6,10
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x3E00000) | (ctx.r10.u64 & 0xFFFFFFFFFC1FFFFF);
	// b 0x825536ac
	goto loc_825536AC;
loc_825536A4:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwimi r10,r11,16,11,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFE0FFFF);
loc_825536AC:
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8250b470
	ctx.lr = 0x825536C0;
	sub_8250B470(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8255360c
	if (ctx.cr6.lt) goto loc_8255360C;
loc_825536D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825536D4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x826a2cf4
	ctx.lr = 0x825536E0;
	// b 0x826a1d00
	return;
loc_825536E4:
	// li r3,3620
	ctx.r3.s64 = 3620;
	// b 0x825536d4
	goto loc_825536D4;
loc_825536EC:
	// stfd f1,624(r27)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r27.u32 + 624, ctx.f1.u64);
	// li r3,3622
	ctx.r3.s64 = 3622;
	// stfd f31,632(r27)
	REX_STORE_U64(r27.u32 + 632, f31.u64);
	// b 0x825536d4
	goto loc_825536D4;
loc_825536FC:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x82553708;
	sub_824E4368(ctx, base);
loc_82553708:
	// stfd f1,624(r27)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r27.u32 + 624, ctx.f1.u64);
	// li r3,3621
	ctx.r3.s64 = 3621;
	// stfd f30,632(r27)
	REX_STORE_U64(r27.u32 + 632, f30.u64);
	// stfd f29,640(r27)
	REX_STORE_U64(r27.u32 + 640, f29.u64);
	// b 0x825536d4
	goto loc_825536D4;
}

DEFINE_REX_FUNC(sub_8255FCF0) {
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
	ctx.lr = 0x8255FCF8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,28(r4)
	r22.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r21,0
	r21.s64 = 0;
	// b 0x8255fd1c
	goto loc_8255FD1C;
loc_8255FD0C:
	// lwz r11,48(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 48);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255fd24
	if (!ctx.cr0.eq) goto loc_8255FD24;
	// lwz r22,52(r22)
	r22.u64 = REX_LOAD_U32(r22.u32 + 52);
loc_8255FD1C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// bne cr6,0x8255fd0c
	if (!ctx.cr6.eq) goto loc_8255FD0C;
loc_8255FD24:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256024c
	if (!ctx.cr0.eq) goto loc_8256024C;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8256024c
	if (ctx.cr0.eq) goto loc_8256024C;
loc_8255FD3C:
	// lwz r11,20(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255fd7c
	if (ctx.cr0.eq) goto loc_8255FD7C;
	// lwz r11,28(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255fd60
	if (ctx.cr0.eq) goto loc_8255FD60;
	// lwz r11,36(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 36);
	// addi r24,r25,32
	r24.s64 = r25.s64 + 32;
	// b 0x8255fd68
	goto loc_8255FD68;
loc_8255FD60:
	// lwz r11,28(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 28);
	// addi r24,r25,24
	r24.s64 = r25.s64 + 24;
loc_8255FD68:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r26,r10,r11
	r26.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x82560228
	goto loc_82560228;
loc_8255FD7C:
	// lwz r10,20(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 20);
	// addi r24,r25,16
	r24.s64 = r25.s64 + 16;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r26,r11,r10
	r26.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x82560228
	goto loc_82560228;
loc_8255FD98:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8256010c
	if (ctx.cr0.eq) goto loc_8256010C;
	// rlwinm r10,r11,0,6,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// stw r10,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x8255fdc4
	if (ctx.cr6.eq) goto loc_8255FDC4;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8255fdc8
	if (!ctx.cr6.eq) goto loc_8255FDC8;
loc_8255FDC4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8255FDC8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255fdfc
	if (ctx.cr0.eq) goto loc_8255FDFC;
	// lwz r11,36(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255fde4
	if (ctx.cr0.eq) goto loc_8255FDE4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8255fdf0
	goto loc_8255FDF0;
loc_8255FDE4:
	// lwz r11,32(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
loc_8255FDF0:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82550760
	ctx.lr = 0x8255FDF8;
	sub_82550760(ctx, base);
	// b 0x8256010c
	goto loc_8256010C;
loc_8255FDFC:
	// lwz r11,28(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 28);
	// b 0x8255fe14
	goto loc_8255FE14;
loc_8255FE04:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255fe1c
	if (!ctx.cr0.eq) goto loc_8255FE1C;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
loc_8255FE14:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8255fe04
	if (!ctx.cr6.eq) goto loc_8255FE04;
loc_8255FE1C:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8256010c
	if (ctx.cr6.eq) goto loc_8256010C;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// beq cr6,0x8256010c
	if (ctx.cr6.eq) goto loc_8256010C;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x824f7678
	ctx.lr = 0x8255FE40;
	sub_824F7678(ctx, base);
	// addi r27,r3,4
	r27.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r27,1
	ctx.r10.u64 = r27.u64 | 1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_8255FE58:
	// lwz r28,8(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_8255FE5C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825600e8
	if (ctx.cr6.eq) goto loc_825600E8;
	// lwz r30,4(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8255fe8c
	if (ctx.cr6.eq) goto loc_8255FE8C;
loc_8255FE74:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255fe8c
	if (!ctx.cr0.eq) goto loc_8255FE8C;
	// lwz r31,52(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8255fe74
	if (!ctx.cr6.eq) goto loc_8255FE74;
loc_8255FE8C:
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(r31.u32, r22.u32, ctx.xer);
	// bne cr6,0x8255ff5c
	if (!ctx.cr6.eq) goto loc_8255FF5C;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255fea8
	if (ctx.cr0.eq) goto loc_8255FEA8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8255feb4
	goto loc_8255FEB4;
loc_8255FEA8:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
loc_8255FEB4:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82550760
	ctx.lr = 0x8255FEBC;
	sub_82550760(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r21,1
	r21.s64 = 1;
	// bl 0x8255db50
	ctx.lr = 0x8255FECC;
	sub_8255DB50(ctx, base);
loc_8255FECC:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8255ff00
	if (!ctx.cr6.eq) goto loc_8255FF00;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8255ff04
	if (ctx.cr6.eq) goto loc_8255FF04;
loc_8255FF00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8255FF04:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82560004
	if (!ctx.cr0.eq) goto loc_82560004;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8255a050
	ctx.lr = 0x8255FF14;
	sub_8255A050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8255a050
	ctx.lr = 0x8255FF24;
	sub_8255A050(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8255fecc
	if (!ctx.cr6.eq) goto loc_8255FECC;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255ff44
	if (ctx.cr0.eq) goto loc_8255FF44;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8255ff50
	goto loc_8255FF50;
loc_8255FF44:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
loc_8255FF50:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82550760
	ctx.lr = 0x8255FF58;
	sub_82550760(ctx, base);
	// b 0x8255fecc
	goto loc_8255FECC;
loc_8255FF5C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255ff8c
	if (!ctx.cr0.eq) goto loc_8255FF8C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8255ff8c
	if (ctx.cr0.eq) goto loc_8255FF8C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8255ff98
	if (!ctx.cr6.gt) goto loc_8255FF98;
loc_8255FF8C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8251fe00
	ctx.lr = 0x8255FF98;
	sub_8251FE00(ctx, base);
loc_8255FF98:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r31.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255ffe0
	if (!ctx.cr0.eq) goto loc_8255FFE0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8255ffe0
	if (ctx.cr0.eq) goto loc_8255FFE0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8255ffec
	if (!ctx.cr6.gt) goto loc_8255FFEC;
loc_8255FFE0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8251fe00
	ctx.lr = 0x8255FFEC;
	sub_8251FE00(ctx, base);
loc_8255FFEC:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r30,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r30.u32);
loc_82560004:
	// lwz r28,12(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 12);
	// b 0x8255fe5c
	goto loc_8255FE5C;
loc_8256000C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r4
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x8256006c
	if (!ctx.cr0.eq) goto loc_8256006C;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824e4308
	ctx.lr = 0x8256006C;
	sub_824E4308(ctx, base);
loc_8256006C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82560080
	if (ctx.cr0.eq) goto loc_82560080;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8256008c
	goto loc_8256008C;
loc_82560080:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_8256008C:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x825600e0
	if (!ctx.cr0.eq) goto loc_825600E0;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824e4308
	ctx.lr = 0x825600E0;
	sub_824E4308(ctx, base);
loc_825600E0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82560164
	if (!ctx.cr6.eq) goto loc_82560164;
loc_825600E8:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825600fc
	if (!ctx.cr0.eq) goto loc_825600FC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8256000c
	if (!ctx.cr0.eq) goto loc_8256000C;
loc_825600FC:
	// lwz r10,976(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 976);
	// addi r11,r23,972
	ctx.r11.s64 = r23.s64 + 972;
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// stw r29,976(r23)
	REX_STORE_U32(r23.u32 + 976, r29.u32);
loc_8256010C:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82560128
	if (!ctx.cr0.eq) goto loc_82560128;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8255fd98
	if (!ctx.cr6.eq) goto loc_8255FD98;
loc_82560128:
	// addi r10,r25,32
	ctx.r10.s64 = r25.s64 + 32;
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82560230
	if (ctx.cr6.eq) goto loc_82560230;
	// addi r11,r25,24
	ctx.r11.s64 = r25.s64 + 24;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82560214
	if (ctx.cr6.eq) goto loc_82560214;
	// lwz r9,28(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 28);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82560214
	if (!ctx.cr0.eq) goto loc_82560214;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82560230
	if (!ctx.cr0.eq) goto loc_82560230;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// b 0x82560228
	goto loc_82560228;
loc_82560164:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82560194
	if (!ctx.cr0.eq) goto loc_82560194;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82560194
	if (ctx.cr0.eq) goto loc_82560194;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825601a0
	if (!ctx.cr6.gt) goto loc_825601A0;
loc_82560194:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8251fe00
	ctx.lr = 0x825601A0;
	sub_8251FE00(ctx, base);
loc_825601A0:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stwx r10,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825601ec
	if (!ctx.cr0.eq) goto loc_825601EC;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825601ec
	if (ctx.cr0.eq) goto loc_825601EC;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825601f8
	if (!ctx.cr6.gt) goto loc_825601F8;
loc_825601EC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8251fe00
	ctx.lr = 0x825601F8;
	sub_8251FE00(ctx, base);
loc_825601F8:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r30,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r30.u32);
	// b 0x8255fe58
	goto loc_8255FE58;
loc_82560214:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82560230
	if (!ctx.cr0.eq) goto loc_82560230;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
loc_82560228:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x8255fd98
	if (!ctx.cr6.eq) goto loc_8255FD98;
loc_82560230:
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256024c
	if (!ctx.cr0.eq) goto loc_8256024C;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8255fd3c
	if (!ctx.cr6.eq) goto loc_8255FD3C;
loc_8256024C:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_825A0120) {
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
	// bl 0x826a1c88
	ctx.lr = 0x825A0128;
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
	// bne cr6,0x825a0838
	if (!ctx.cr6.eq) goto loc_825A0838;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,112(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x825a0838
	if (!ctx.cr6.eq) goto loc_825A0838;
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
	// bl 0x8259f5c8
	ctx.lr = 0x825A0190;
	sub_8259F5C8(ctx, base);
	// mr. r22,r3
	r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq 0x825a07f4
	if (ctx.cr0.eq) goto loc_825A07F4;
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
	// bl 0x8259f5c8
	ctx.lr = 0x825A01B0;
	sub_8259F5C8(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq 0x825a07f4
	if (ctx.cr0.eq) goto loc_825A07F4;
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
	// ble cr6,0x825a01ec
	if (!ctx.cr6.gt) goto loc_825A01EC;
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_825A01EC:
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825a0200
	if (!ctx.cr6.gt) goto loc_825A0200;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
loc_825A0200:
	// bl 0x822f6280
	ctx.lr = 0x825A0204;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825a0240
	if (ctx.cr0.eq) goto loc_825A0240;
	// addic. r11,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	ctx.r11.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// blt 0x825a0238
	if (ctx.cr0.lt) goto loc_825A0238;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825A0228:
	// stw r18,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r18.u32);
	// stw r18,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r18.u32);
	// stwu r18,12(r11)
	ea = 12 + ctx.r11.u32;
	REX_STORE_U32(ea, r18.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x825a0228
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825A0228;
loc_825A0238:
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// b 0x825a0244
	goto loc_825A0244;
loc_825A0240:
	// mr r25,r18
	r25.u64 = r18.u64;
loc_825A0244:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x825a07e8
	if (ctx.cr6.eq) goto loc_825A07E8;
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
	// ble cr6,0x825a026c
	if (!ctx.cr6.gt) goto loc_825A026C;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
loc_825A026C:
	// bl 0x822f6280
	ctx.lr = 0x825A0270;
	sub_822F6280(ctx, base);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a07e8
	if (ctx.cr6.eq) goto loc_825A07E8;
	// addi r7,r21,4
	ctx.r7.s64 = r21.s64 + 4;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r23
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r23.u32, ctx.xer);
	// bge cr6,0x825a02e4
	if (!ctx.cr6.lt) goto loc_825A02E4;
loc_825A028C:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x825a02d8
	if (!ctx.cr6.lt) goto loc_825A02D8;
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
loc_825A02B8:
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
	// bdnz 0x825a02b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825A02B8;
loc_825A02D8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplw cr6,r8,r23
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r23.u32, ctx.xer);
	// blt cr6,0x825a028c
	if (ctx.cr6.lt) goto loc_825A028C;
loc_825A02E4:
	// mr r26,r18
	r26.u64 = r18.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r23
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r23.u32, ctx.xer);
	// bge cr6,0x825a07e0
	if (!ctx.cr6.lt) goto loc_825A07E0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f29,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	f29.f64 = double(temp.f32);
	// lfs f31,3704(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	f31.f64 = double(temp.f32);
	// lfs f30,3788(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3788);
	f30.f64 = double(temp.f32);
loc_825A030C:
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
	// bge cr6,0x825a03a0
	if (!ctx.cr6.lt) goto loc_825A03A0;
loc_825A0324:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mulli r31,r11,12
	r31.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r11,r31,r25
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825a0394
	if (!ctx.cr6.eq) goto loc_825A0394;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x825a0354
	if (ctx.cr6.eq) goto loc_825A0354;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// stwx r11,r31,r25
	REX_STORE_U32(r31.u32 + r25.u32, ctx.r11.u32);
	// stw r18,0(r19)
	REX_STORE_U32(r19.u32 + 0, r18.u32);
	// lwz r19,4(r19)
	r19.u64 = REX_LOAD_U32(r19.u32 + 4);
	// b 0x825a037c
	goto loc_825A037C;
loc_825A0354:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x825a036c
	if (!ctx.cr6.gt) goto loc_825A036C;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
loc_825A036C:
	// bl 0x822f6280
	ctx.lr = 0x825A0370;
	sub_822F6280(ctx, base);
	// stwx r3,r31,r25
	REX_STORE_U32(r31.u32 + r25.u32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a07e8
	if (ctx.cr6.eq) goto loc_825A07E8;
loc_825A037C:
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
	// bl 0x826a2e60
	ctx.lr = 0x825A0394;
	sub_826A2E60(ctx, base);
loc_825A0394:
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// blt cr6,0x825a0324
	if (ctx.cr6.lt) goto loc_825A0324;
loc_825A03A0:
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
	ctx.lr = 0x825A03C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r22,4
	ctx.r11.s64 = r22.s64 + 4;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r20.u32, ctx.xer);
	// bge cr6,0x825a04b8
	if (!ctx.cr6.lt) goto loc_825A04B8;
	// addi r8,r16,8
	ctx.r8.s64 = r16.s64 + 8;
loc_825A03D0:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bge cr6,0x825a04a8
	if (!ctx.cr6.lt) goto loc_825A04A8;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_825A03E8:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r10,r11,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// bge cr6,0x825a049c
	if (!ctx.cr6.lt) goto loc_825A049C;
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
loc_825A0414:
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
	// bdnz 0x825a0414
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825A0414;
loc_825A049C:
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// cmplw cr6,r6,r28
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r28.u32, ctx.xer);
	// blt cr6,0x825a03e8
	if (ctx.cr6.lt) goto loc_825A03E8;
loc_825A04A8:
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r20
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r20.u32, ctx.xer);
	// blt cr6,0x825a03d0
	if (ctx.cr6.lt) goto loc_825A03D0;
loc_825A04B8:
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// bge cr6,0x825a07d0
	if (!ctx.cr6.lt) goto loc_825A07D0;
loc_825A04C4:
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
	// bne 0x825a07c4
	if (!ctx.cr0.eq) goto loc_825A07C4;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x825a06c0
	if (ctx.cr6.eq) goto loc_825A06C0;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x825a05e0
	if (ctx.cr6.eq) goto loc_825A05E0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x825a079c
	if (!ctx.cr6.eq) goto loc_825A079C;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825a079c
	if (!ctx.cr6.gt) goto loc_825A079C;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_825A0518:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x825a0530
	if (!ctx.cr6.lt) goto loc_825A0530;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// b 0x825a053c
	goto loc_825A053C;
loc_825A0530:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x825a053c
	if (ctx.cr6.lt) goto loc_825A053C;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_825A053C:
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
	// bge cr6,0x825a055c
	if (!ctx.cr6.lt) goto loc_825A055C;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// b 0x825a0568
	goto loc_825A0568;
loc_825A055C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x825a0568
	if (ctx.cr6.lt) goto loc_825A0568;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_825A0568:
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
	// bge cr6,0x825a0588
	if (!ctx.cr6.lt) goto loc_825A0588;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// b 0x825a0594
	goto loc_825A0594;
loc_825A0588:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x825a0594
	if (ctx.cr6.lt) goto loc_825A0594;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_825A0594:
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
	// bge cr6,0x825a05b4
	if (!ctx.cr6.lt) goto loc_825A05B4;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// b 0x825a05c0
	goto loc_825A05C0;
loc_825A05B4:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x825a05c0
	if (ctx.cr6.lt) goto loc_825A05C0;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_825A05C0:
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
	// blt cr6,0x825a0518
	if (ctx.cr6.lt) goto loc_825A0518;
	// b 0x825a079c
	goto loc_825A079C;
loc_825A05E0:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825a079c
	if (!ctx.cr6.gt) goto loc_825A079C;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_825A05F8:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x825a0610
	if (!ctx.cr6.lt) goto loc_825A0610;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// b 0x825a061c
	goto loc_825A061C;
loc_825A0610:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x825a061c
	if (ctx.cr6.lt) goto loc_825A061C;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_825A061C:
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
	// bge cr6,0x825a063c
	if (!ctx.cr6.lt) goto loc_825A063C;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// b 0x825a0648
	goto loc_825A0648;
loc_825A063C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x825a0648
	if (ctx.cr6.lt) goto loc_825A0648;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_825A0648:
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
	// bge cr6,0x825a0668
	if (!ctx.cr6.lt) goto loc_825A0668;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// b 0x825a0674
	goto loc_825A0674;
loc_825A0668:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x825a0674
	if (ctx.cr6.lt) goto loc_825A0674;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_825A0674:
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
	// bge cr6,0x825a0694
	if (!ctx.cr6.lt) goto loc_825A0694;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
	// b 0x825a06a0
	goto loc_825A06A0;
loc_825A0694:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x825a06a0
	if (ctx.cr6.lt) goto loc_825A06A0;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_825A06A0:
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
	// blt cr6,0x825a05f8
	if (ctx.cr6.lt) goto loc_825A05F8;
	// b 0x825a079c
	goto loc_825A079C;
loc_825A06C0:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825a079c
	if (!ctx.cr6.gt) goto loc_825A079C;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_825A06D8:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x825a06f0
	if (!ctx.cr6.lt) goto loc_825A06F0;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
	// b 0x825a06fc
	goto loc_825A06FC;
loc_825A06F0:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x825a06fc
	if (ctx.cr6.lt) goto loc_825A06FC;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_825A06FC:
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
	// bge cr6,0x825a071c
	if (!ctx.cr6.lt) goto loc_825A071C;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
	// b 0x825a0728
	goto loc_825A0728;
loc_825A071C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x825a0728
	if (ctx.cr6.lt) goto loc_825A0728;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_825A0728:
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
	// bge cr6,0x825a0748
	if (!ctx.cr6.lt) goto loc_825A0748;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
	// b 0x825a0754
	goto loc_825A0754;
loc_825A0748:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x825a0754
	if (ctx.cr6.lt) goto loc_825A0754;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_825A0754:
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
	// bge cr6,0x825a0774
	if (!ctx.cr6.lt) goto loc_825A0774;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
	// b 0x825a0780
	goto loc_825A0780;
loc_825A0774:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x825a0780
	if (ctx.cr6.lt) goto loc_825A0780;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_825A0780:
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
	// blt cr6,0x825a06d8
	if (ctx.cr6.lt) goto loc_825A06D8;
loc_825A079C:
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
	ctx.lr = 0x825A07BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r19,4(r31)
	REX_STORE_U32(r31.u32 + 4, r19.u32);
	// mr r19,r31
	r19.u64 = r31.u64;
loc_825A07C4:
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// blt cr6,0x825a04c4
	if (ctx.cr6.lt) goto loc_825A04C4;
loc_825A07D0:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(r28.u32, r23.u32, ctx.xer);
	// blt cr6,0x825a030c
	if (ctx.cr6.lt) goto loc_825A030C;
loc_825A07E0:
	// mr r31,r18
	r31.u64 = r18.u64;
	// b 0x825a07fc
	goto loc_825A07FC;
loc_825A07E8:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x825a07fc
	goto loc_825A07FC;
loc_825A07F4:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
loc_825A07FC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x825a0810
	if (ctx.cr6.eq) goto loc_825A0810;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8259f8b8
	ctx.lr = 0x825A0810;
	sub_8259F8B8(ctx, base);
loc_825A0810:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8269ce98
	ctx.lr = 0x825A0818;
	sub_8269CE98(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8269ce98
	ctx.lr = 0x825A0820;
	sub_8269CE98(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8269ce98
	ctx.lr = 0x825A0828;
	sub_8269CE98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269ce98
	ctx.lr = 0x825A0830;
	sub_8269CE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x825a0840
	goto loc_825A0840;
loc_825A0838:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_825A0840:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f30,-152(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_825CD748) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825CD750;
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cd778
	if (ctx.cr6.eq) goto loc_825CD778;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x825c7448
	ctx.lr = 0x825CD774;
	sub_825C7448(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_825CD778:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 100);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r7,104(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 104);
	// mullw r9,r9,r29
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r29.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x825cd7cc
	if (!ctx.cr6.gt) goto loc_825CD7CC;
	// addi r11,r6,-12
	ctx.r11.s64 = ctx.r6.s64 + -12;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_825CD7AC:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfsu f0,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// stfsu f0,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lwz r9,104(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x825cd7ac
	if (ctx.cr6.lt) goto loc_825CD7AC;
loc_825CD7CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825CEEC0) {
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
	// bge cr6,0x825cefa4
	if (!ctx.cr6.lt) goto loc_825CEFA4;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// li r5,-32768
	ctx.r5.s64 = -32768;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,3800(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3800);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
loc_825CEF28:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// subf r7,r5,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r5.u64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x825cef28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825CEF28;
loc_825CEFA4:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cefc0
	if (ctx.cr6.eq) goto loc_825CEFC0;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c73b8
	ctx.lr = 0x825CEFC0;
	sub_825C73B8(ctx, base);
loc_825CEFC0:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cefdc
	if (ctx.cr6.eq) goto loc_825CEFDC;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c7788
	ctx.lr = 0x825CEFDC;
	sub_825C7788(ctx, base);
loc_825CEFDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825D38E0) {
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
	ctx.lr = 0x825D38E8;
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
	// bne cr6,0x825d3928
	if (!ctx.cr6.eq) goto loc_825D3928;
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
	// li r7,2261
	ctx.r7.s64 = 2261;
	// bl 0x824ea978
	ctx.lr = 0x825D3928;
	sub_824EA978(ctx, base);
loc_825D3928:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825D3938;
	sub_824F05F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne 0x825d39a0
	if (!ctx.cr0.eq) goto loc_825D39A0;
	// beq cr6,0x825d395c
	if (ctx.cr6.eq) goto loc_825D395C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D395C;
	sub_824F0950(ctx, base);
loc_825D395C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d3998
	if (ctx.cr6.eq) goto loc_825D3998;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d3998
	if (ctx.cr6.eq) goto loc_825D3998;
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
	// li r6,49
	ctx.r6.s64 = 49;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,196(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 196);
	// bctrl 
	ctx.lr = 0x825D3998;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D3998:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d39f8
	goto loc_825D39F8;
loc_825D39A0:
	// beq cr6,0x825d39b8
	if (ctx.cr6.eq) goto loc_825D39B8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D39B8;
	sub_824F0950(ctx, base);
loc_825D39B8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d39f4
	if (ctx.cr6.eq) goto loc_825D39F4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d39f4
	if (ctx.cr6.eq) goto loc_825D39F4;
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
	// li r6,49
	ctx.r6.s64 = 49;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,196(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 196);
	// bctrl 
	ctx.lr = 0x825D39F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D39F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D39F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825D6E68) {
	REX_FUNC_PROLOGUE();
	// lis r11,-25033
	ctx.r11.s64 = -1640562688;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// ori r10,r11,31161
	ctx.r10.u64 = ctx.r11.u64 | 31161;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// blt cr6,0x825d6f44
	if (ctx.cr6.lt) goto loc_825D6F44;
	// li r7,3
	ctx.r7.s64 = 3;
	// divwu r7,r4,r7
	ctx.r7.u64 = uint32_t(ctx.r7.u32 ? ctx.r4.u32 / ctx.r7.u32 : 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_825D6E90:
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r8,-3
	ctx.r8.s64 = ctx.r8.s64 + -3;
	// lwz r6,4(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// subf r7,r9,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r9.u64;
	// rlwinm r6,r9,19,13,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x7FFFF;
	// subf r7,r10,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r10.u64;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// xor r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// xor r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// rlwinm r7,r10,19,13,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7FFFF;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// xor r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r7,r9,20,12,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xFFFFF;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// xor r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm r7,r11,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// xor r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// rlwinm r7,r10,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// xor r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r7,r9,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// xor r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// rlwinm r7,r11,10,0,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// xor r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// rlwinm r7,r10,17,15,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1FFFF;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// xor r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// bdnz 0x825d6e90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825D6E90;
loc_825D6F44:
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// beq cr6,0x825d6f64
	if (ctx.cr6.eq) goto loc_825D6F64;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// bne cr6,0x825d6f6c
	if (!ctx.cr6.eq) goto loc_825D6F6C;
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_825D6F64:
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_825D6F6C:
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r8,r9,19,13,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x7FFFF;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm r8,r11,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// rlwinm r8,r10,19,13,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7FFFF;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// xor r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r8,r9,20,12,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xFFFFF;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm r8,r11,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// rlwinm r8,r10,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// xor r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r8,r9,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm r8,r11,10,0,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// rlwinm r10,r10,17,15,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1FFFF;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// xor r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825E6BF0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825E6C30) {
	REX_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stw r4,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// lwz r4,24(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x825f79d0
	sub_825F79D0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825E7980) {
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
	ctx.lr = 0x825E7988;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r29,1456(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825E79A8;
	sub_825B33A0(ctx, base);
	// addic. r31,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// beq 0x825e79d0
	if (ctx.cr0.eq) goto loc_825E79D0;
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d7a48
	ctx.lr = 0x825E79C4;
	sub_825D7A48(ctx, base);
	// mr r23,r31
	r23.u64 = r31.u64;
	// li r24,0
	r24.s64 = 0;
	// b 0x825e79d8
	goto loc_825E79D8;
loc_825E79D0:
	// li r24,0
	r24.s64 = 0;
	// mr r23,r24
	r23.u64 = r24.u64;
loc_825E79D8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,0(r17)
	ctx.r3.u64 = REX_LOAD_U32(r17.u32 + 0);
	// addi r4,r11,14044
	ctx.r4.s64 = ctx.r11.s64 + 14044;
	// bl 0x82130e88
	ctx.lr = 0x825E79E8;
	sub_82130E88(ctx, base);
	// lwz r30,136(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 136);
	// b 0x825e7a5c
	goto loc_825E7A5C;
loc_825E79F0:
	// lwz r31,28(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 28);
	// b 0x825e7a4c
	goto loc_825E7A4C;
loc_825E79F8:
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e7a48
	if (ctx.cr0.eq) goto loc_825E7A48;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E7A18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e7a48
	if (ctx.cr0.eq) goto loc_825E7A48;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e7a48
	if (ctx.cr0.eq) goto loc_825E7A48;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x825e7a48
	if (!ctx.cr6.eq) goto loc_825E7A48;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,4(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825E7A44;
	sub_825F7718(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_825E7A48:
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_825E7A4C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825e79f8
	if (!ctx.cr6.eq) goto loc_825E79F8;
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
loc_825E7A5C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825e79f0
	if (!ctx.cr6.eq) goto loc_825E79F0;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e9168
	if (ctx.cr6.eq) goto loc_825E9168;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r4,r11,28656
	ctx.r4.s64 = ctx.r11.s64 + 28656;
	// bl 0x825f7580
	ctx.lr = 0x825E7A84;
	sub_825F7580(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// lwz r10,2136(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 2136);
	// rlwinm. r10,r10,19,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825e8fd4
	if (ctx.cr0.eq) goto loc_825E8FD4;
	// lwz r30,1456(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825E7AA4;
	sub_825B33A0(ctx, base);
	// addic. r31,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// beq 0x825e7ac8
	if (ctx.cr0.eq) goto loc_825E7AC8;
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d7a48
	ctx.lr = 0x825E7AC0;
	sub_825D7A48(ctx, base);
	// mr r18,r31
	r18.u64 = r31.u64;
	// b 0x825e7acc
	goto loc_825E7ACC;
loc_825E7AC8:
	// mr r18,r24
	r18.u64 = r24.u64;
loc_825E7ACC:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// mr r26,r24
	r26.u64 = r24.u64;
	// stw r18,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r18.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e7bd4
	if (ctx.cr6.eq) goto loc_825E7BD4;
	// mr r25,r24
	r25.u64 = r24.u64;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e7af8
	if (!ctx.cr6.lt) goto loc_825E7AF8;
loc_825E7AEC:
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + r25.u64;
	// b 0x825e7b04
	goto loc_825E7B04;
loc_825E7AF8:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E7B04;
	sub_825F7718(ctx, base);
loc_825E7B04:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r24
	r28.u64 = r24.u64;
	// addi r29,r11,896
	r29.s64 = ctx.r11.s64 + 896;
	// addi r27,r11,928
	r27.s64 = ctx.r11.s64 + 928;
loc_825E7B14:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e7bc0
	if (ctx.cr6.eq) goto loc_825E7BC0;
	// lwz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 4);
	// mr r31,r24
	r31.u64 = r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e7b9c
	if (ctx.cr6.eq) goto loc_825E7B9C;
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e7b48
	if (!ctx.cr6.lt) goto loc_825E7B48;
loc_825E7B3C:
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// b 0x825e7b54
	goto loc_825E7B54;
loc_825E7B48:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E7B54;
	sub_825F7718(ctx, base);
loc_825E7B54:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x825e7b7c
	if (!ctx.cr6.eq) goto loc_825E7B7C;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x825e7b80
	if (ctx.cr6.eq) goto loc_825E7B80;
loc_825E7B7C:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_825E7B80:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e7bac
	if (!ctx.cr0.eq) goto loc_825E7BAC;
	// lwz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825e7b3c
	if (ctx.cr6.lt) goto loc_825E7B3C;
loc_825E7B9C:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r4,4(r18)
	ctx.r4.u64 = REX_LOAD_U32(r18.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825E7BA8;
	sub_825F7718(ctx, base);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
loc_825E7BAC:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(r28.s32, 4, ctx.xer);
	// blt cr6,0x825e7b14
	if (ctx.cr6.lt) goto loc_825E7B14;
loc_825E7BC0:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825e7aec
	if (ctx.cr6.lt) goto loc_825E7AEC;
loc_825E7BD4:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// addi r4,r11,27096
	ctx.r4.s64 = ctx.r11.s64 + 27096;
	// bl 0x825f7580
	ctx.lr = 0x825E7BE4;
	sub_825F7580(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// lwz r10,4(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 4);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b33a0
	ctx.lr = 0x825E7BF8;
	sub_825B33A0(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// lwz r10,4(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 4);
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b33a0
	ctx.lr = 0x825E7C14;
	sub_825B33A0(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lwz r10,4(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 4);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b33a0
	ctx.lr = 0x825E7C30;
	sub_825B33A0(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// lwz r10,4(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 4);
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b33a0
	ctx.lr = 0x825E7C4C;
	sub_825B33A0(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 4);
	// stw r3,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b33a0
	ctx.lr = 0x825E7C68;
	sub_825B33A0(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 4);
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b33a0
	ctx.lr = 0x825E7C84;
	sub_825B33A0(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 4);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b33a0
	ctx.lr = 0x825E7CA0;
	sub_825B33A0(ctx, base);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lwz r10,4(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 4);
	// mr r28,r24
	r28.u64 = r24.u64;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r20,r11,27,5,31
	r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// ble cr6,0x825e7d78
	if (!ctx.cr6.gt) goto loc_825E7D78;
	// rlwinm r30,r20,2,0,29
	r30.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r21
	r31.u64 = r21.u64;
	// subf r27,r21,r15
	r27.u64 = r15.u64 - r21.u64;
	// subf r26,r21,r19
	r26.u64 = r19.u64 - r21.u64;
	// subf r29,r21,r25
	r29.u64 = r25.u64 - r21.u64;
loc_825E7CD8:
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b33a0
	ctx.lr = 0x825E7CE8;
	sub_825B33A0(ctx, base);
	// stwx r3,r27,r31
	REX_STORE_U32(r27.u32 + r31.u32, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b33a0
	ctx.lr = 0x825E7CFC;
	sub_825B33A0(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b33a0
	ctx.lr = 0x825E7D10;
	sub_825B33A0(ctx, base);
	// stwx r3,r26,r31
	REX_STORE_U32(r26.u32 + r31.u32, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b33a0
	ctx.lr = 0x825E7D24;
	sub_825B33A0(ctx, base);
	// stwx r3,r29,r31
	REX_STORE_U32(r29.u32 + r31.u32, ctx.r3.u32);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x825e7d64
	if (!ctx.cr6.gt) goto loc_825E7D64;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r20
	ctx.ctr.u64 = r20.u64;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_825E7D3C:
	// lwzx r9,r10,r15
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r15.u32);
	// stwx r24,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, r24.u32);
	// lwzx r9,r10,r21
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r21.u32);
	// stwx r24,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, r24.u32);
	// lwzx r9,r10,r19
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r19.u32);
	// stwx r24,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, r24.u32);
	// lwzx r9,r29,r31
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// stwx r24,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r24.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825e7d3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825E7D3C;
loc_825E7D64:
	// lwz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825e7cd8
	if (ctx.cr6.lt) goto loc_825E7CD8;
loc_825E7D78:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// li r24,4
	r24.s64 = 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825e7dbc
	if (!ctx.cr6.gt) goto loc_825E7DBC;
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// subf r9,r16,r14
	ctx.r9.u64 = r14.u64 - r16.u64;
	// subf r8,r16,r22
	ctx.r8.u64 = r22.u64 - r16.u64;
loc_825E7D98:
	// li r7,0
	ctx.r7.s64 = 0;
	// stwx r7,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r24,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, r24.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r7,4(r23)
	ctx.r7.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x825e7d98
	if (ctx.cr6.lt) goto loc_825E7D98;
loc_825E7DBC:
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// rlwinm r31,r20,2,0,29
	r31.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b33a0
	ctx.lr = 0x825E7DD0;
	sub_825B33A0(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r3,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b33a0
	ctx.lr = 0x825E7DE4;
	sub_825B33A0(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b33a0
	ctx.lr = 0x825E7DF8;
	sub_825B33A0(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r3,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b33a0
	ctx.lr = 0x825E7E0C;
	sub_825B33A0(ctx, base);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// li r22,0
	r22.s64 = 0;
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stw r25,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r19,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r19.u32);
	// stw r21,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r21.u32);
	// stw r15,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r15.u32);
	// beq cr6,0x825e7f24
	if (ctx.cr6.eq) goto loc_825E7F24;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r27,0
	r27.s64 = 0;
	// mr r29,r16
	r29.u64 = r16.u64;
	// subf r26,r16,r14
	r26.u64 = r14.u64 - r16.u64;
	// subf r25,r16,r10
	r25.u64 = ctx.r10.u64 - r16.u64;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e7e58
	if (!ctx.cr6.lt) goto loc_825E7E58;
loc_825E7E4C:
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// b 0x825e7e64
	goto loc_825E7E64;
loc_825E7E58:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E7E64;
	sub_825F7718(ctx, base);
loc_825E7E64:
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,928
	ctx.r11.s64 = 928;
loc_825E7E70:
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x825e7e8c
	if (ctx.cr6.eq) goto loc_825E7E8C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,944
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 944, ctx.xer);
	// blt cr6,0x825e7e70
	if (ctx.cr6.lt) goto loc_825E7E70;
loc_825E7E8C:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x825e7f24
	if (!ctx.cr6.eq) goto loc_825E7F24;
	// clrlwi r11,r22,27
	ctx.r11.u64 = r22.u32 & 0x1F;
	// stwx r24,r26,r29
	REX_STORE_U32(r26.u32 + r29.u32, r24.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r22,0(r29)
	REX_STORE_U32(r29.u32 + 0, r22.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stwx r10,r25,r29
	REX_STORE_U32(r25.u32 + r29.u32, ctx.r10.u32);
	// rlwinm r30,r22,29,3,29
	r30.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 29) & 0x1FFFFFFC;
	// slw r28,r9,r11
	r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// li r31,896
	r31.s64 = 896;
loc_825E7EB8:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e7ed0
	if (!ctx.cr6.lt) goto loc_825E7ED0;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// b 0x825e7edc
	goto loc_825E7EDC;
loc_825E7ED0:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E7EDC;
	sub_825F7718(ctx, base);
loc_825E7EDC:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// ldx r4,r11,r31
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + r31.u32);
	// bl 0x825e78b8
	ctx.lr = 0x825E7EEC;
	sub_825E78B8(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmpwi cr6,r31,928
	ctx.cr6.compare<int32_t>(r31.s32, 928, ctx.xer);
	// lwzx r11,r11,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// or r10,r28,r10
	ctx.r10.u64 = r28.u64 | ctx.r10.u64;
	// stwx r10,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r10.u32);
	// blt cr6,0x825e7eb8
	if (ctx.cr6.lt) goto loc_825E7EB8;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825e7e4c
	if (ctx.cr6.lt) goto loc_825E7E4C;
loc_825E7F24:
	// lwz r6,4(r23)
	ctx.r6.u64 = REX_LOAD_U32(r23.u32 + 4);
	// li r19,-1
	r19.s64 = -1;
	// mr r15,r22
	r15.u64 = r22.u64;
	// mr r16,r19
	r16.u64 = r19.u64;
	// mr r14,r19
	r14.u64 = r19.u64;
	// cmplw cr6,r22,r6
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x825e89ac
	if (!ctx.cr6.lt) goto loc_825E89AC;
	// lwz r21,120(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r24,116(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r25,112(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_825E7F4C:
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	r31.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r11,928
	ctx.r11.s64 = 928;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_825E7F64:
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825e7f80
	if (ctx.cr6.eq) goto loc_825E7F80;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r11,944
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 944, ctx.xer);
	// blt cr6,0x825e7f64
	if (ctx.cr6.lt) goto loc_825E7F64;
loc_825E7F80:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825e7f98
	if (ctx.cr6.lt) goto loc_825E7F98;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E7F98;
	sub_825F7718(ctx, base);
loc_825E7F98:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r26,r22,2,0,29
	r26.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r10,r31,4
	ctx.xer.ca = r31.u32 <= 4;
	ctx.r10.u64 = static_cast<uint64_t>(4) - r31.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// stwx r10,r26,r11
	REX_STORE_U32(r26.u32 + ctx.r11.u32, ctx.r10.u32);
	// ble cr6,0x825e7fec
	if (!ctx.cr6.gt) goto loc_825E7FEC;
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mtctr r20
	ctx.ctr.u64 = r20.u64;
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// subf r10,r3,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// subf r9,r3,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r3.u64;
	// subf r8,r3,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r3.u64;
loc_825E7FD4:
	// stwx r19,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r19.u32);
	// stw r19,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r19.u32);
	// stwx r19,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, r19.u32);
	// stwx r19,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, r19.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825e7fd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825E7FD4;
loc_825E7FEC:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r16,-1
	ctx.cr6.compare<int32_t>(r16.s32, -1, ctx.xer);
	// stwx r31,r26,r11
	REX_STORE_U32(r26.u32 + ctx.r11.u32, r31.u32);
	// bne cr6,0x825e8004
	if (!ctx.cr6.eq) goto loc_825E8004;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(r31.s32, 2, ctx.xer);
	// beq cr6,0x825e8020
	if (ctx.cr6.eq) goto loc_825E8020;
loc_825E8004:
	// cmpwi cr6,r14,-1
	ctx.cr6.compare<int32_t>(r14.s32, -1, ctx.xer);
	// bne cr6,0x825e8024
	if (!ctx.cr6.eq) goto loc_825E8024;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// bne cr6,0x825e8024
	if (!ctx.cr6.eq) goto loc_825E8024;
	// mr r14,r22
	r14.u64 = r22.u64;
	// cmpwi cr6,r16,-1
	ctx.cr6.compare<int32_t>(r16.s32, -1, ctx.xer);
	// bne cr6,0x825e8024
	if (!ctx.cr6.eq) goto loc_825E8024;
loc_825E8020:
	// mr r16,r22
	r16.u64 = r22.u64;
loc_825E8024:
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x825e81bc
	if (!ctx.cr6.gt) goto loc_825E81BC;
	// li r28,896
	r28.s64 = 896;
loc_825E8034:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e804c
	if (!ctx.cr6.lt) goto loc_825E804C;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// b 0x825e8058
	goto loc_825E8058;
loc_825E804C:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E8058;
	sub_825F7718(ctx, base);
loc_825E8058:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// ldx r4,r28,r11
	ctx.r4.u64 = REX_LOAD_U64(r28.u32 + ctx.r11.u32);
	// bl 0x825e78b8
	ctx.lr = 0x825E8068;
	sub_825E78B8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r22,r9
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r9.u32, ctx.xer);
	// lwzx r29,r10,r11
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bge cr6,0x825e808c
	if (!ctx.cr6.lt) goto loc_825E808C;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// b 0x825e8098
	goto loc_825E8098;
loc_825E808C:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E8098;
	sub_825F7718(ctx, base);
loc_825E8098:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// ldx r4,r28,r11
	ctx.r4.u64 = REX_LOAD_U64(r28.u32 + ctx.r11.u32);
	// bl 0x825e78b8
	ctx.lr = 0x825E80A8;
	sub_825E78B8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r22,r9
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r9.u32, ctx.xer);
	// lwzx r30,r10,r11
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bge cr6,0x825e80cc
	if (!ctx.cr6.lt) goto loc_825E80CC;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// b 0x825e80d8
	goto loc_825E80D8;
loc_825E80CC:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E80D8;
	sub_825F7718(ctx, base);
loc_825E80D8:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// ldx r4,r28,r11
	ctx.r4.u64 = REX_LOAD_U64(r28.u32 + ctx.r11.u32);
	// bl 0x825e78b8
	ctx.lr = 0x825E80E8;
	sub_825E78B8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r21,0
	r21.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// ble cr6,0x825e81f8
	if (!ctx.cr6.gt) goto loc_825E81F8;
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// lwz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mtctr r20
	ctx.ctr.u64 = r20.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// subf r8,r11,r30
	ctx.r8.u64 = r30.u64 - ctx.r11.u64;
	// subf r7,r11,r29
	ctx.r7.u64 = r29.u64 - ctx.r11.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
loc_825E8130:
	// lwzx r4,r7,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwzx r3,r9,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// and. r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 & ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r3,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r3.u32);
	// beq 0x825e8150
	if (ctx.cr0.eq) goto loc_825E8150;
	// li r25,1
	r25.s64 = 1;
loc_825E8150:
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(r31.s32, 3, ctx.xer);
	// bge cr6,0x825e816c
	if (!ctx.cr6.lt) goto loc_825E816C;
	// lwzx r3,r6,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// and. r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwx r10,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r10.u32);
	// beq 0x825e816c
	if (ctx.cr0.eq) goto loc_825E816C;
	// li r24,1
	r24.s64 = 1;
loc_825E816C:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(r31.s32, 2, ctx.xer);
	// bge cr6,0x825e8188
	if (!ctx.cr6.lt) goto loc_825E8188;
	// lwzx r10,r5,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// and. r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwx r10,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r10.u32);
	// beq 0x825e8188
	if (ctx.cr0.eq) goto loc_825E8188;
	// li r21,1
	r21.s64 = 1;
loc_825E8188:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825e8130
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825E8130;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x825e81a8
	if (!ctx.cr6.eq) goto loc_825E81A8;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x825e81a8
	if (!ctx.cr6.eq) goto loc_825E81A8;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq cr6,0x825e81f8
	if (ctx.cr6.eq) goto loc_825E81F8;
loc_825E81A8:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmpw cr6,r27,r31
	ctx.cr6.compare<int32_t>(r27.s32, r31.s32, ctx.xer);
	// blt cr6,0x825e8034
	if (ctx.cr6.lt) goto loc_825E8034;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_825E81BC:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x825e81cc
	if (ctx.cr6.eq) goto loc_825E81CC;
	// lwz r3,108(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x825e81e4
	goto loc_825E81E4;
loc_825E81CC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x825e81dc
	if (ctx.cr6.eq) goto loc_825E81DC;
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x825e81e4
	goto loc_825E81E4;
loc_825E81DC:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq cr6,0x825e81f8
	if (ctx.cr6.eq) goto loc_825E81F8;
loc_825E81E4:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x825e6a00
	ctx.lr = 0x825E81EC;
	sub_825E6A00(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stwx r3,r26,r11
	REX_STORE_U32(r26.u32 + ctx.r11.u32, ctx.r3.u32);
	// b 0x825e899c
	goto loc_825E899C;
loc_825E81F8:
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(r31.s32, 3, ctx.xer);
	// bne cr6,0x825e84e0
	if (!ctx.cr6.eq) goto loc_825E84E0;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e8218
	if (!ctx.cr6.lt) goto loc_825E8218;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// b 0x825e8224
	goto loc_825E8224;
loc_825E8218:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E8224;
	sub_825F7718(ctx, base);
loc_825E8224:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// ld r4,896(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 896);
	// bl 0x825e78b8
	ctx.lr = 0x825E8234;
	sub_825E78B8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r22,r9
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r9.u32, ctx.xer);
	// lwzx r28,r10,r11
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bge cr6,0x825e8258
	if (!ctx.cr6.lt) goto loc_825E8258;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// b 0x825e8264
	goto loc_825E8264;
loc_825E8258:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E8264;
	sub_825F7718(ctx, base);
loc_825E8264:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// ld r4,904(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 904);
	// bl 0x825e78b8
	ctx.lr = 0x825E8274;
	sub_825E78B8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r22,r9
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r9.u32, ctx.xer);
	// lwzx r30,r10,r11
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bge cr6,0x825e8298
	if (!ctx.cr6.lt) goto loc_825E8298;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// b 0x825e82a4
	goto loc_825E82A4;
loc_825E8298:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E82A4;
	sub_825F7718(ctx, base);
loc_825E82A4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// ld r4,912(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 912);
	// bl 0x825e78b8
	ctx.lr = 0x825E82B4;
	sub_825E78B8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r25,0
	r25.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// li r21,0
	r21.s64 = 0;
	// stw r25,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r25.u32);
	// stw r24,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r24.u32);
	// li r29,0
	r29.s64 = 0;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r21,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r21.u32);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x825e8354
	if (!ctx.cr6.gt) goto loc_825E8354;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// subf r9,r30,r28
	ctx.r9.u64 = r28.u64 - r30.u64;
	// subf r10,r30,r10
	ctx.r10.u64 = ctx.r10.u64 - r30.u64;
loc_825E82F4:
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// and. r25,r7,r8
	r25.u64 = ctx.r7.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// and r24,r5,r8
	r24.u64 = ctx.r5.u64 & ctx.r8.u64;
	// stw r25,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r25.u32);
	// and r21,r5,r7
	r21.u64 = ctx.r5.u64 & ctx.r7.u64;
	// stw r24,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r24.u32);
	// stw r21,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r21.u32);
	// bne 0x825e8340
	if (!ctx.cr0.eq) goto loc_825E8340;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x825e8348
	if (!ctx.cr6.eq) goto loc_825E8348;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x825e8350
	if (!ctx.cr6.eq) goto loc_825E8350;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r6,r20
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r20.s32, ctx.xer);
	// blt cr6,0x825e82f4
	if (ctx.cr6.lt) goto loc_825E82F4;
	// b 0x825e8354
	goto loc_825E8354;
loc_825E8340:
	// li r29,0
	r29.s64 = 0;
	// b 0x825e8354
	goto loc_825E8354;
loc_825E8348:
	// li r29,1
	r29.s64 = 1;
	// b 0x825e8354
	goto loc_825E8354;
loc_825E8350:
	// li r29,2
	r29.s64 = 2;
loc_825E8354:
	// cmpw cr6,r6,r20
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r20.s32, ctx.xer);
	// beq cr6,0x825e8914
	if (ctx.cr6.eq) goto loc_825E8914;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x825e6a00
	ctx.lr = 0x825E8370;
	sub_825E6A00(ctx, base);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// add r31,r3,r10
	r31.u64 = ctx.r3.u64 + ctx.r10.u64;
	// bge cr6,0x825e8390
	if (!ctx.cr6.lt) goto loc_825E8390;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r30,r11,r26
	r30.u64 = ctx.r11.u64 + r26.u64;
	// b 0x825e83a0
	goto loc_825E83A0;
loc_825E8390:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E839C;
	sub_825F7718(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825E83A0:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e83bc
	if (!ctx.cr6.lt) goto loc_825E83BC;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x825e83c8
	goto loc_825E83C8;
loc_825E83BC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E83C8;
	sub_825F7718(ctx, base);
loc_825E83C8:
	// subfic r9,r29,114
	ctx.xer.ca = r29.u32 <= 114;
	ctx.r9.u64 = static_cast<uint64_t>(114) - r29.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,920(r10)
	REX_STORE_U32(ctx.r10.u32 + 920, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,924(r10)
	REX_STORE_U32(ctx.r10.u32 + 924, ctx.r11.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e8408
	if (!ctx.cr6.lt) goto loc_825E8408;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x825e8414
	goto loc_825E8414;
loc_825E8408:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E8414;
	sub_825F7718(ctx, base);
loc_825E8414:
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// srawi r7,r31,5
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	ctx.r7.s64 = r31.s32 >> 5;
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r5,r31,5
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	ctx.r5.s64 = r31.s32 >> 5;
	// stw r10,940(r8)
	REX_STORE_U32(ctx.r8.u32 + 940, ctx.r10.u32);
	// rlwinm r8,r7,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r7,r27,112
	ctx.r7.s64 = r27.s64 + 112;
	// subf r8,r8,r31
	ctx.r8.u64 = r31.u64 - ctx.r8.u64;
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// slw r28,r10,r8
	r28.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// li r30,0
	r30.s64 = 0;
	// rlwinm r27,r7,3,0,28
	r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r29,r5,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// stwx r31,r26,r6
	REX_STORE_U32(r26.u32 + ctx.r6.u32, r31.u32);
loc_825E8468:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e8480
	if (!ctx.cr6.lt) goto loc_825E8480;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// b 0x825e848c
	goto loc_825E848C;
loc_825E8480:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E848C;
	sub_825F7718(ctx, base);
loc_825E848C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// ldx r4,r11,r27
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + r27.u32);
	// bl 0x825e78b8
	ctx.lr = 0x825E849C;
	sub_825E78B8(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(r30.s32, 3, ctx.xer);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// beq cr6,0x825e84c4
	if (ctx.cr6.eq) goto loc_825E84C4;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r9,r29,r11
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// andc r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 & ~r28.u64;
	// stwx r9,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, ctx.r9.u32);
loc_825E84C4:
	// lwzx r11,r29,r10
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// or r11,r28,r11
	ctx.r11.u64 = r28.u64 | ctx.r11.u64;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// stwx r11,r29,r10
	REX_STORE_U32(r29.u32 + ctx.r10.u32, ctx.r11.u32);
	// blt cr6,0x825e8468
	if (ctx.cr6.lt) goto loc_825E8468;
	// b 0x825e899c
	goto loc_825E899C;
loc_825E84E0:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(r31.s32, 2, ctx.xer);
	// bne cr6,0x825e8914
	if (!ctx.cr6.eq) goto loc_825E8914;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e8500
	if (!ctx.cr6.lt) goto loc_825E8500;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// b 0x825e850c
	goto loc_825E850C;
loc_825E8500:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E850C;
	sub_825F7718(ctx, base);
loc_825E850C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// ld r4,896(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 896);
	// bl 0x825e78b8
	ctx.lr = 0x825E851C;
	sub_825E78B8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r22,r9
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r9.u32, ctx.xer);
	// lwzx r28,r10,r11
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bge cr6,0x825e8540
	if (!ctx.cr6.lt) goto loc_825E8540;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// b 0x825e854c
	goto loc_825E854C;
loc_825E8540:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E854C;
	sub_825F7718(ctx, base);
loc_825E854C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// ld r4,904(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 904);
	// bl 0x825e78b8
	ctx.lr = 0x825E855C;
	sub_825E78B8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r22,r9
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r9.u32, ctx.xer);
	// lwzx r30,r10,r11
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bge cr6,0x825e8580
	if (!ctx.cr6.lt) goto loc_825E8580;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// b 0x825e858c
	goto loc_825E858C;
loc_825E8580:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E858C;
	sub_825F7718(ctx, base);
loc_825E858C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// ld r4,896(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 896);
	// bl 0x825e78b8
	ctx.lr = 0x825E859C;
	sub_825E78B8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r22,r9
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r9.u32, ctx.xer);
	// lwzx r29,r10,r11
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bge cr6,0x825e85c0
	if (!ctx.cr6.lt) goto loc_825E85C0;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// b 0x825e85cc
	goto loc_825E85CC;
loc_825E85C0:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E85CC;
	sub_825F7718(ctx, base);
loc_825E85CC:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// ld r4,904(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 904);
	// bl 0x825e78b8
	ctx.lr = 0x825E85DC;
	sub_825E78B8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r27,0
	r27.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r25,r27
	r25.u64 = r27.u64;
	// stw r27,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r27.u32);
	// mr r24,r27
	r24.u64 = r27.u64;
	// stw r27,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r27.u32);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r21,r27
	r21.u64 = r27.u64;
	// stw r27,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r27.u32);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// stw r27,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r27.u32);
	// ble cr6,0x825e8694
	if (!ctx.cr6.gt) goto loc_825E8694;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// subf r9,r30,r28
	ctx.r9.u64 = r28.u64 - r30.u64;
	// subf r8,r30,r29
	ctx.r8.u64 = r29.u64 - r30.u64;
	// subf r10,r30,r10
	ctx.r10.u64 = ctx.r10.u64 - r30.u64;
loc_825E8624:
	// lwzx r25,r9,r11
	r25.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r24,0(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r21,r8,r11
	r21.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r25,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r25.u32);
	// stw r24,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r24.u32);
	// stw r21,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r21.u32);
	// stw r7,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// bne cr6,0x825e8678
	if (!ctx.cr6.eq) goto loc_825E8678;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x825e8680
	if (!ctx.cr6.eq) goto loc_825E8680;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x825e8688
	if (!ctx.cr6.eq) goto loc_825E8688;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x825e8690
	if (!ctx.cr6.eq) goto loc_825E8690;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r6,r20
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r20.s32, ctx.xer);
	// blt cr6,0x825e8624
	if (ctx.cr6.lt) goto loc_825E8624;
	// b 0x825e8694
	goto loc_825E8694;
loc_825E8678:
	// li r27,0
	r27.s64 = 0;
	// b 0x825e8694
	goto loc_825E8694;
loc_825E8680:
	// li r27,1
	r27.s64 = 1;
	// b 0x825e8694
	goto loc_825E8694;
loc_825E8688:
	// li r27,2
	r27.s64 = 2;
	// b 0x825e8694
	goto loc_825E8694;
loc_825E8690:
	// li r27,3
	r27.s64 = 3;
loc_825E8694:
	// cmpw cr6,r6,r20
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r20.s32, ctx.xer);
	// beq cr6,0x825e8914
	if (ctx.cr6.eq) goto loc_825E8914;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x825e6a00
	ctx.lr = 0x825E86B0;
	sub_825E6A00(ctx, base);
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(r27.s32, 2, ctx.xer);
	// add r31,r3,r11
	r31.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// bge cr6,0x825e876c
	if (!ctx.cr6.lt) goto loc_825E876C;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e86d8
	if (!ctx.cr6.lt) goto loc_825E86D8;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r30,r11,r26
	r30.u64 = ctx.r11.u64 + r26.u64;
	// b 0x825e86e8
	goto loc_825E86E8;
loc_825E86D8:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E86E4;
	sub_825F7718(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825E86E8:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e8704
	if (!ctx.cr6.lt) goto loc_825E8704;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x825e8710
	goto loc_825E8710;
loc_825E8704:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E8710;
	sub_825F7718(ctx, base);
loc_825E8710:
	// subfic r9,r27,113
	ctx.xer.ca = r27.u32 <= 113;
	ctx.r9.u64 = static_cast<uint64_t>(113) - r27.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,920(r10)
	REX_STORE_U32(ctx.r10.u32 + 920, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,924(r10)
	REX_STORE_U32(ctx.r10.u32 + 924, ctx.r11.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e8750
	if (!ctx.cr6.lt) goto loc_825E8750;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x825e875c
	goto loc_825E875C;
loc_825E8750:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E875C;
	sub_825F7718(ctx, base);
loc_825E875C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,940(r11)
	REX_STORE_U32(ctx.r11.u32 + 940, ctx.r10.u32);
	// b 0x825e8810
	goto loc_825E8810;
loc_825E876C:
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e8780
	if (!ctx.cr6.lt) goto loc_825E8780;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r30,r11,r26
	r30.u64 = ctx.r11.u64 + r26.u64;
	// b 0x825e8790
	goto loc_825E8790;
loc_825E8780:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E878C;
	sub_825F7718(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825E8790:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e87ac
	if (!ctx.cr6.lt) goto loc_825E87AC;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x825e87b8
	goto loc_825E87B8;
loc_825E87AC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E87B8;
	sub_825F7718(ctx, base);
loc_825E87B8:
	// subfic r9,r27,115
	ctx.xer.ca = r27.u32 <= 115;
	ctx.r9.u64 = static_cast<uint64_t>(115) - r27.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,912(r10)
	REX_STORE_U32(ctx.r10.u32 + 912, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,916(r10)
	REX_STORE_U32(ctx.r10.u32 + 916, ctx.r11.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e87f8
	if (!ctx.cr6.lt) goto loc_825E87F8;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x825e8804
	goto loc_825E8804;
loc_825E87F8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E8804;
	sub_825F7718(ctx, base);
loc_825E8804:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,936(r11)
	REX_STORE_U32(ctx.r11.u32 + 936, ctx.r10.u32);
loc_825E8810:
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r30,896
	r30.s64 = 896;
	// li r29,928
	r29.s64 = 928;
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// stwx r31,r26,r8
	REX_STORE_U32(r26.u32 + ctx.r8.u32, r31.u32);
loc_825E8834:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e884c
	if (!ctx.cr6.lt) goto loc_825E884C;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// b 0x825e8858
	goto loc_825E8858;
loc_825E884C:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E8858;
	sub_825F7718(ctx, base);
loc_825E8858:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e899c
	if (ctx.cr6.eq) goto loc_825E899C;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e8880
	if (!ctx.cr6.lt) goto loc_825E8880;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// b 0x825e888c
	goto loc_825E888C;
loc_825E8880:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E888C;
	sub_825F7718(ctx, base);
loc_825E888C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// ldx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + r30.u32);
	// bl 0x825e78b8
	ctx.lr = 0x825E889C;
	sub_825E78B8(ctx, base);
	// srawi r11,r31,5
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	ctx.r11.s64 = r31.s32 >> 5;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(r27.s32, 1, ctx.xer);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r7,r31,5
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	ctx.r7.s64 = r31.s32 >> 5;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// ble cr6,0x825e88c8
	if (!ctx.cr6.gt) goto loc_825E88C8;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x825e88d0
	goto loc_825E88D0;
loc_825E88C8:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_825E88D0:
	// lwzx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// subf r10,r11,r31
	ctx.r10.u64 = r31.u64 - ctx.r11.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r8,r6,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpwi cr6,r29,944
	ctx.cr6.compare<int32_t>(r29.s32, 944, ctx.xer);
	// andc r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// stwx r8,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// blt cr6,0x825e8834
	if (ctx.cr6.lt) goto loc_825E8834;
	// b 0x825e899c
	goto loc_825E899C;
loc_825E8914:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stwx r22,r26,r11
	REX_STORE_U32(r26.u32 + ctx.r11.u32, r22.u32);
	// ble cr6,0x825e899c
	if (!ctx.cr6.gt) goto loc_825E899C;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// clrlwi r9,r22,27
	ctx.r9.u64 = r22.u32 & 0x1F;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r29,r22,29,3,29
	r29.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 29) & 0x1FFFFFFC;
	// slw r28,r10,r9
	r28.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r27,-4(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// li r30,896
	r30.s64 = 896;
loc_825E8948:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e8960
	if (!ctx.cr6.lt) goto loc_825E8960;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// b 0x825e896c
	goto loc_825E896C;
loc_825E8960:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E896C;
	sub_825F7718(ctx, base);
loc_825E896C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// ldx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + r30.u32);
	// bl 0x825e78b8
	ctx.lr = 0x825E897C;
	sub_825E78B8(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// or r10,r28,r10
	ctx.r10.u64 = r28.u64 | ctx.r10.u64;
	// stwx r10,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, ctx.r10.u32);
	// bne 0x825e8948
	if (!ctx.cr0.eq) goto loc_825E8948;
loc_825E899C:
	// lwz r6,4(r23)
	ctx.r6.u64 = REX_LOAD_U32(r23.u32 + 4);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// cmplw cr6,r22,r6
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x825e7f4c
	if (ctx.cr6.lt) goto loc_825E7F4C;
loc_825E89AC:
	// mr r24,r15
	r24.u64 = r15.u64;
	// cmplw cr6,r15,r6
	ctx.cr6.compare<uint32_t>(r15.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x825e8bc0
	if (!ctx.cr6.lt) goto loc_825E8BC0;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r15,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r19,r11,r10
	r19.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r18,r10,r9
	r18.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_825E89CC:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825e8bb0
	if (!ctx.cr6.gt) goto loc_825E8BB0;
	// lwzx r10,r18,r19
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + r19.u32);
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r24.u32, ctx.xer);
	// bne cr6,0x825e8bb0
	if (!ctx.cr6.eq) goto loc_825E8BB0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825e89f4
	if (!ctx.cr6.eq) goto loc_825E89F4;
	// mr r30,r14
	r30.u64 = r14.u64;
	// b 0x825e8a04
	goto loc_825E8A04;
loc_825E89F4:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mr r30,r16
	r30.u64 = r16.u64;
	// beq cr6,0x825e8a04
	if (ctx.cr6.eq) goto loc_825E8A04;
	// mr r30,r15
	r30.u64 = r15.u64;
loc_825E8A04:
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x825e8bb0
	if (!ctx.cr6.lt) goto loc_825E8BB0;
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r21,r24,2,0,29
	r21.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r22,r11,r10
	r22.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r20,r10,r9
	r20.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_825E8A24:
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(r30.u32, r24.u32, ctx.xer);
	// ble cr6,0x825e8b9c
	if (!ctx.cr6.gt) goto loc_825E8B9C;
	// lwzx r11,r20,r22
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + r22.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x825e8b9c
	if (!ctx.cr6.eq) goto loc_825E8B9C;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825e8b9c
	if (ctx.cr6.lt) goto loc_825E8B9C;
	// stwx r24,r20,r22
	REX_STORE_U32(r20.u32 + r22.u32, r24.u32);
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// subfic r11,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r11.u64 = static_cast<uint64_t>(4) - ctx.r11.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x825e8b8c
	if (!ctx.cr6.lt) goto loc_825E8B8C;
	// addi r10,r11,232
	ctx.r10.s64 = ctx.r11.s64 + 232;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// rlwinm r25,r30,2,0,29
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r10,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,928
	r26.s64 = 928;
	// rlwinm r28,r11,3,0,28
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r29,896
	r29.s64 = 896;
loc_825E8A78:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e8a90
	if (!ctx.cr6.lt) goto loc_825E8A90;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r3,r11,r21
	ctx.r3.u64 = ctx.r11.u64 + r21.u64;
	// b 0x825e8a9c
	goto loc_825E8A9C;
loc_825E8A90:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E8A9C;
	sub_825F7718(ctx, base);
loc_825E8A9C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r11,r27,r11
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825e8b7c
	if (!ctx.cr6.eq) goto loc_825E8B7C;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e8ac4
	if (!ctx.cr6.lt) goto loc_825E8AC4;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r31,r11,r25
	r31.u64 = ctx.r11.u64 + r25.u64;
	// b 0x825e8ad4
	goto loc_825E8AD4;
loc_825E8AC4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E8AD0;
	sub_825F7718(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_825E8AD4:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e8aec
	if (!ctx.cr6.lt) goto loc_825E8AEC;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r3,r11,r21
	ctx.r3.u64 = ctx.r11.u64 + r21.u64;
	// b 0x825e8af8
	goto loc_825E8AF8;
loc_825E8AEC:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E8AF8;
	sub_825F7718(ctx, base);
loc_825E8AF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// add r10,r28,r10
	ctx.r10.u64 = r28.u64 + ctx.r10.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e8b30
	if (!ctx.cr6.lt) goto loc_825E8B30;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r31,r11,r25
	r31.u64 = ctx.r11.u64 + r25.u64;
	// b 0x825e8b40
	goto loc_825E8B40;
loc_825E8B30:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E8B3C;
	sub_825F7718(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_825E8B40:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e8b58
	if (!ctx.cr6.lt) goto loc_825E8B58;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r3,r11,r21
	ctx.r3.u64 = ctx.r11.u64 + r21.u64;
	// b 0x825e8b64
	goto loc_825E8B64;
loc_825E8B58:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E8B64;
	sub_825F7718(ctx, base);
loc_825E8B64:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r11,r11,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// stwx r11,r10,r27
	REX_STORE_U32(ctx.r10.u32 + r27.u32, ctx.r11.u32);
loc_825E8B7C:
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpwi cr6,r28,928
	ctx.cr6.compare<int32_t>(r28.s32, 928, ctx.xer);
	// blt cr6,0x825e8a78
	if (ctx.cr6.lt) goto loc_825E8A78;
loc_825E8B8C:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r11.u32);
loc_825E8B9C:
	// lwz r6,4(r23)
	ctx.r6.u64 = REX_LOAD_U32(r23.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x825e8a24
	if (ctx.cr6.lt) goto loc_825E8A24;
loc_825E8BB0:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r19,r19,4
	r19.s64 = r19.s64 + 4;
	// cmplw cr6,r24,r6
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x825e89cc
	if (ctx.cr6.lt) goto loc_825E89CC;
loc_825E8BC0:
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x825e8e98
	if (ctx.cr6.eq) goto loc_825E8E98;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r25,0
	r25.s64 = 0;
	// li r18,11
	r18.s64 = 11;
	// addi r20,r7,-19772
	r20.s64 = ctx.r7.s64 + -19772;
	// addi r24,r8,31588
	r24.s64 = ctx.r8.s64 + 31588;
	// addi r21,r9,14012
	r21.s64 = ctx.r9.s64 + 14012;
	// addi r19,r10,14004
	r19.s64 = ctx.r10.s64 + 14004;
	// addi r22,r11,13992
	r22.s64 = ctx.r11.s64 + 13992;
	// cmplw cr6,r26,r6
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x825e8c10
	if (!ctx.cr6.lt) goto loc_825E8C10;
loc_825E8C04:
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + r25.u64;
	// b 0x825e8c1c
	goto loc_825E8C1C;
loc_825E8C10:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E8C1C;
	sub_825F7718(ctx, base);
loc_825E8C1C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r3,0(r17)
	ctx.r3.u64 = REX_LOAD_U32(r17.u32 + 0);
	// lwz r5,224(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// bl 0x82130e88
	ctx.lr = 0x825E8C34;
	sub_82130E88(ctx, base);
	// li r29,928
	r29.s64 = 928;
	// li r31,896
	r31.s64 = 896;
loc_825E8C3C:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e8c54
	if (!ctx.cr6.lt) goto loc_825E8C54;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + r25.u64;
	// b 0x825e8c60
	goto loc_825E8C60;
loc_825E8C54:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E8C60;
	sub_825F7718(ctx, base);
loc_825E8C60:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// ldx r30,r31,r11
	r30.u64 = REX_LOAD_U64(r31.u32 + ctx.r11.u32);
	// bge cr6,0x825e8c80
	if (!ctx.cr6.lt) goto loc_825E8C80;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + r25.u64;
	// b 0x825e8c8c
	goto loc_825E8C8C;
loc_825E8C80:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E8C8C;
	sub_825F7718(ctx, base);
loc_825E8C8C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e8cc8
	if (ctx.cr6.eq) goto loc_825E8CC8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e6a68
	ctx.lr = 0x825E8CA8;
	sub_825E6A68(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r3,0(r17)
	ctx.r3.u64 = REX_LOAD_U32(r17.u32 + 0);
	// bl 0x82130e88
	ctx.lr = 0x825E8CB8;
	sub_82130E88(ctx, base);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpwi cr6,r31,928
	ctx.cr6.compare<int32_t>(r31.s32, 928, ctx.xer);
	// blt cr6,0x825e8c3c
	if (ctx.cr6.lt) goto loc_825E8C3C;
loc_825E8CC8:
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,0(r17)
	ctx.r3.u64 = REX_LOAD_U32(r17.u32 + 0);
	// lwzx r5,r25,r31
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + r31.u32);
	// cmplw cr6,r5,r26
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r26.u32, ctx.xer);
	// beq cr6,0x825e8e04
	if (ctx.cr6.eq) goto loc_825E8E04;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82130e88
	ctx.lr = 0x825E8CE4;
	sub_82130E88(ctx, base);
	// lwzx r4,r25,r31
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + r31.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e8d04
	if (!ctx.cr6.lt) goto loc_825E8D04;
	// lwz r10,8(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x825e8d0c
	goto loc_825E8D0C;
loc_825E8D04:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E8D0C;
	sub_825F7718(ctx, base);
loc_825E8D0C:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// lwz r27,0(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e8d28
	if (!ctx.cr6.lt) goto loc_825E8D28;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + r25.u64;
	// b 0x825e8d34
	goto loc_825E8D34;
loc_825E8D28:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E8D34;
	sub_825F7718(ctx, base);
loc_825E8D34:
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// addi r28,r31,896
	r28.s64 = r31.s64 + 896;
	// addi r29,r31,928
	r29.s64 = r31.s64 + 928;
loc_825E8D44:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e8df4
	if (ctx.cr6.eq) goto loc_825E8DF4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r11,r27,896
	ctx.r11.s64 = r27.s64 + 896;
	// addi r8,r27,928
	ctx.r8.s64 = r27.s64 + 928;
loc_825E8D64:
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825e8dc0
	if (ctx.cr6.eq) goto loc_825E8DC0;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x825e8d94
	if (!ctx.cr6.eq) goto loc_825E8D94;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,4(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// beq cr6,0x825e8d98
	if (ctx.cr6.eq) goto loc_825E8D98;
loc_825E8D94:
	// li r9,0
	ctx.r9.s64 = 0;
loc_825E8D98:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825e8db8
	if (!ctx.cr0.eq) goto loc_825E8DB8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x825e8d64
	if (ctx.cr6.lt) goto loc_825E8D64;
	// b 0x825e8dc0
	goto loc_825E8DC0;
loc_825E8DB8:
	// add r11,r31,r30
	ctx.r11.u64 = r31.u64 + r30.u64;
	// stb r10,944(r11)
	REX_STORE_U8(ctx.r11.u32 + 944, ctx.r10.u8);
loc_825E8DC0:
	// lwz r11,56(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 56);
	// add r10,r31,r30
	ctx.r10.u64 = r31.u64 + r30.u64;
	// stw r18,80(r31)
	REX_STORE_U32(r31.u32 + 80, r18.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// lbz r5,944(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 944);
	// lwz r3,0(r17)
	ctx.r3.u64 = REX_LOAD_U32(r17.u32 + 0);
	// bl 0x82130e88
	ctx.lr = 0x825E8DE0;
	sub_82130E88(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x825e8d44
	if (ctx.cr6.lt) goto loc_825E8D44;
loc_825E8DF4:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwz r3,0(r17)
	ctx.r3.u64 = REX_LOAD_U32(r17.u32 + 0);
	// bl 0x82130e88
	ctx.lr = 0x825E8E00;
	sub_82130E88(ctx, base);
	// b 0x825e8e84
	goto loc_825E8E84;
loc_825E8E04:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x82130e88
	ctx.lr = 0x825E8E0C;
	sub_82130E88(ctx, base);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e8e24
	if (!ctx.cr6.lt) goto loc_825E8E24;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + r25.u64;
	// b 0x825e8e30
	goto loc_825E8E30;
loc_825E8E24:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E8E30;
	sub_825F7718(ctx, base);
loc_825E8E30:
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x825e6b98
	ctx.lr = 0x825E8E3C;
	sub_825E6B98(ctx, base);
	// stw r3,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// li r30,0
	r30.s64 = 0;
	// stw r18,80(r31)
	REX_STORE_U32(r31.u32 + 80, r18.u32);
	// addi r29,r31,896
	r29.s64 = r31.s64 + 896;
	// addi r28,r31,928
	r28.s64 = r31.s64 + 928;
loc_825E8E50:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e8e84
	if (ctx.cr6.eq) goto loc_825E8E84;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// ld r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U64(r29.u32 + 0);
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r3,0(r17)
	ctx.r3.u64 = REX_LOAD_U32(r17.u32 + 0);
	// bl 0x825b3c20
	ctx.lr = 0x825E8E70;
	sub_825B3C20(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x825e8e50
	if (ctx.cr6.lt) goto loc_825E8E50;
loc_825E8E84:
	// lwz r6,4(r23)
	ctx.r6.u64 = REX_LOAD_U32(r23.u32 + 4);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmplw cr6,r26,r6
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x825e8c04
	if (ctx.cr6.lt) goto loc_825E8C04;
loc_825E8E98:
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b3528
	ctx.lr = 0x825E8EA8;
	sub_825B3528(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b3528
	ctx.lr = 0x825E8EB8;
	sub_825B3528(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b3528
	ctx.lr = 0x825E8EC8;
	sub_825B3528(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// lwz r4,136(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b3528
	ctx.lr = 0x825E8ED8;
	sub_825B3528(ctx, base);
	// lwz r25,132(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r30,0
	r30.s64 = 0;
	// lwz r26,88(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825e8f60
	if (!ctx.cr6.gt) goto loc_825E8F60;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// mr r31,r26
	r31.u64 = r26.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subf r29,r26,r11
	r29.u64 = ctx.r11.u64 - r26.u64;
	// subf r28,r26,r10
	r28.u64 = ctx.r10.u64 - r26.u64;
	// subf r27,r26,r9
	r27.u64 = ctx.r9.u64 - r26.u64;
loc_825E8F0C:
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// lwzx r4,r29,r31
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b3528
	ctx.lr = 0x825E8F1C;
	sub_825B3528(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b3528
	ctx.lr = 0x825E8F2C;
	sub_825B3528(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// lwzx r4,r28,r31
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + r31.u32);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b3528
	ctx.lr = 0x825E8F3C;
	sub_825B3528(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// lwzx r4,r27,r31
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + r31.u32);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b3528
	ctx.lr = 0x825E8F4C;
	sub_825B3528(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825e8f0c
	if (ctx.cr6.lt) goto loc_825E8F0C;
loc_825E8F60:
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b3528
	ctx.lr = 0x825E8F70;
	sub_825B3528(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b3528
	ctx.lr = 0x825E8F80;
	sub_825B3528(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b3528
	ctx.lr = 0x825E8F90;
	sub_825B3528(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// lwz r4,140(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b3528
	ctx.lr = 0x825E8FA0;
	sub_825B3528(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b3528
	ctx.lr = 0x825E8FB0;
	sub_825B3528(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b3528
	ctx.lr = 0x825E8FC0;
	sub_825B3528(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b3528
	ctx.lr = 0x825E8FD0;
	sub_825B3528(ctx, base);
	// b 0x825e9168
	goto loc_825E9168;
loc_825E8FD4:
	// lwz r8,4(r23)
	ctx.r8.u64 = REX_LOAD_U32(r23.u32 + 4);
	// mr r27,r24
	r27.u64 = r24.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x825e9168
	if (ctx.cr6.eq) goto loc_825E9168;
	// mr r26,r24
	r26.u64 = r24.u64;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r18,11
	r18.s64 = 11;
	// addi r22,r9,-19772
	r22.s64 = ctx.r9.s64 + -19772;
	// addi r24,r10,14004
	r24.s64 = ctx.r10.s64 + 14004;
	// addi r25,r11,13992
	r25.s64 = ctx.r11.s64 + 13992;
	// cmplw cr6,r26,r8
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x825e9018
	if (!ctx.cr6.lt) goto loc_825E9018;
loc_825E900C:
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// b 0x825e9024
	goto loc_825E9024;
loc_825E9018:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E9024;
	sub_825F7718(ctx, base);
loc_825E9024:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r3,0(r17)
	ctx.r3.u64 = REX_LOAD_U32(r17.u32 + 0);
	// lwz r5,224(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// bl 0x82130e88
	ctx.lr = 0x825E903C;
	sub_82130E88(ctx, base);
	// li r29,928
	r29.s64 = 928;
	// li r31,896
	r31.s64 = 896;
loc_825E9044:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e905c
	if (!ctx.cr6.lt) goto loc_825E905C;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// b 0x825e9068
	goto loc_825E9068;
loc_825E905C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E9068;
	sub_825F7718(ctx, base);
loc_825E9068:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, ctx.xer);
	// ldx r30,r11,r31
	r30.u64 = REX_LOAD_U64(ctx.r11.u32 + r31.u32);
	// bge cr6,0x825e9088
	if (!ctx.cr6.lt) goto loc_825E9088;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// b 0x825e9094
	goto loc_825E9094;
loc_825E9088:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E9094;
	sub_825F7718(ctx, base);
loc_825E9094:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e90d0
	if (ctx.cr6.eq) goto loc_825E90D0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e6a68
	ctx.lr = 0x825E90B0;
	sub_825E6A68(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r3,0(r17)
	ctx.r3.u64 = REX_LOAD_U32(r17.u32 + 0);
	// bl 0x82130e88
	ctx.lr = 0x825E90C0;
	sub_82130E88(ctx, base);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpwi cr6,r31,928
	ctx.cr6.compare<int32_t>(r31.s32, 928, ctx.xer);
	// blt cr6,0x825e9044
	if (ctx.cr6.lt) goto loc_825E9044;
loc_825E90D0:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,0(r17)
	ctx.r3.u64 = REX_LOAD_U32(r17.u32 + 0);
	// bl 0x82130e88
	ctx.lr = 0x825E90DC;
	sub_82130E88(ctx, base);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e90f4
	if (!ctx.cr6.lt) goto loc_825E90F4;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// b 0x825e9100
	goto loc_825E9100;
loc_825E90F4:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E9100;
	sub_825F7718(ctx, base);
loc_825E9100:
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x825e6b98
	ctx.lr = 0x825E910C;
	sub_825E6B98(ctx, base);
	// stw r3,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// li r30,0
	r30.s64 = 0;
	// stw r18,80(r31)
	REX_STORE_U32(r31.u32 + 80, r18.u32);
	// addi r29,r31,896
	r29.s64 = r31.s64 + 896;
	// addi r28,r31,928
	r28.s64 = r31.s64 + 928;
loc_825E9120:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e9154
	if (ctx.cr6.eq) goto loc_825E9154;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// ld r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U64(r29.u32 + 0);
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r3,0(r17)
	ctx.r3.u64 = REX_LOAD_U32(r17.u32 + 0);
	// bl 0x825b3c20
	ctx.lr = 0x825E9140;
	sub_825B3C20(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x825e9120
	if (ctx.cr6.lt) goto loc_825E9120;
loc_825E9154:
	// lwz r8,4(r23)
	ctx.r8.u64 = REX_LOAD_U32(r23.u32 + 4);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r27,r8
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x825e900c
	if (ctx.cr6.lt) goto loc_825E900C;
loc_825E9168:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_826822B0) {
	REX_FUNC_PROLOGUE();
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,10
	ctx.r3.s64 = 10;
	// b 0x8265d850
	sub_8265D850(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826826F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826826F8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8265d838
	ctx.lr = 0x82682710;
	sub_8265D838(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82682720
	if (!ctx.cr0.eq) goto loc_82682720;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82682774
	goto loc_82682774;
loc_82682720:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x82682734;
	sub_826A1E70(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r31,12
	ctx.r11.s64 = r31.s64 + 12;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8268274c
	if (ctx.cr6.eq) goto loc_8268274C;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8265d850
	ctx.lr = 0x8268274C;
	sub_8265D850(ctx, base);
loc_8268274C:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r29
	ctx.r10.u64 = r29.u64 - ctx.r10.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x82682768;
	sub_826A2E60(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82682774:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82685818) {
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
	ctx.lr = 0x82685820;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r4,360
	ctx.r4.s64 = 360;
	// li r3,9
	ctx.r3.s64 = 9;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// li r31,0
	r31.s64 = 0;
	// bl 0x8265d838
	ctx.lr = 0x82685854;
	sub_8265D838(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82685868
	if (!ctx.cr0.eq) goto loc_82685868;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x8268591c
	goto loc_8268591C;
loc_82685868:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r8,292(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82685660
	ctx.lr = 0x82685880;
	sub_82685660(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82685918
	if (!ctx.cr6.eq) goto loc_82685918;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x826858a8
	if (ctx.cr6.eq) goto loc_826858A8;
	// addi r5,r3,180
	ctx.r5.s64 = ctx.r3.s64 + 180;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82688e90
	ctx.lr = 0x826858A0;
	sub_82688E90(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x82685908
	if (ctx.cr0.lt) goto loc_82685908;
loc_826858A8:
	// ld r11,552(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 552);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r3,300(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// clrldi r4,r11,5
	ctx.r4.u64 = ctx.r11.u64 & 0x7FFFFFFFFFFFFFF;
	// lwz r10,284(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// std r5,552(r30)
	REX_STORE_U64(r30.u32 + 552, ctx.r5.u64);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r6,276(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82688888
	ctx.lr = 0x826858E8;
	sub_82688888(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x82685918
	if (!ctx.cr0.lt) goto loc_82685918;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82685908
	if (ctx.cr6.eq) goto loc_82685908;
	// lwz r3,180(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 180);
	// bl 0x82688ee8
	ctx.lr = 0x82685900;
	sub_82688EE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r11.u32);
loc_82685908:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82676d18
	ctx.lr = 0x82685910;
	sub_82676D18(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// b 0x8268591c
	goto loc_8268591C;
loc_82685918:
	// li r29,0
	r29.s64 = 0;
loc_8268591C:
	// lwz r11,308(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8268B470) {
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
	ctx.lr = 0x8268B478;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lwz r9,36(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r3,r8,16385
	ctx.r3.u64 = ctx.r8.u64 | 16385;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r30,1
	r30.s64 = 1;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// beq cr6,0x8268b568
	if (ctx.cr6.eq) goto loc_8268B568;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// addi r29,r31,60
	r29.s64 = r31.s64 + 60;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268b4ec
	if (ctx.cr6.eq) goto loc_8268B4EC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8268b564
	if (ctx.cr6.eq) goto loc_8268B564;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268B4E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8268b564
	goto loc_8268B564;
loc_8268B4EC:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,98
	ctx.r3.s64 = ctx.r1.s64 + 98;
	// bl 0x826a2e60
	ctx.lr = 0x8268B4FC;
	sub_826A2E60(ctx, base);
	// li r10,16000
	ctx.r10.s64 = 16000;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r10,32000
	ctx.r10.s64 = 32000;
	// sth r30,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, r30.u16);
	// sth r30,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, r30.u16);
	// sth r9,110(r1)
	REX_STORE_U16(ctx.r1.u32 + 110, ctx.r9.u16);
	// sth r8,108(r1)
	REX_STORE_U16(ctx.r1.u32 + 108, ctx.r8.u16);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r27,60(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r28,0(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 0);
	// bl 0x8268feb8
	ctx.lr = 0x8268B534;
	sub_8268FEB8(ctx, base);
	// lwz r7,32(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f1,-27144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -27144);
	ctx.f1.f64 = double(temp.f32);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// bctrl 
	ctx.lr = 0x8268B564;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268B564:
	// stw r30,68(r31)
	REX_STORE_U32(r31.u32 + 68, r30.u32);
loc_8268B568:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82693948) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82693950;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82693a28
	if (ctx.cr6.eq) goto loc_82693A28;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// lis r30,-32119
	r30.s64 = -2104950784;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82693984
	if (ctx.cr6.eq) goto loc_82693984;
	// lwz r11,-5956(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -5956);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82693980;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
loc_82693984:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82697878
	ctx.lr = 0x8269398C;
	sub_82697878(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826939a8
	if (ctx.cr6.eq) goto loc_826939A8;
	// lwz r11,-5956(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -5956);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826939A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
loc_826939A8:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826939c4
	if (ctx.cr6.eq) goto loc_826939C4;
	// lwz r11,-5956(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -5956);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826939C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,16(r31)
	REX_STORE_U32(r31.u32 + 16, r29.u32);
loc_826939C4:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826939e0
	if (ctx.cr6.eq) goto loc_826939E0;
	// lwz r11,-5956(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -5956);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826939DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,20(r31)
	REX_STORE_U32(r31.u32 + 20, r29.u32);
loc_826939E0:
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826939fc
	if (ctx.cr6.eq) goto loc_826939FC;
	// lwz r11,-5956(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -5956);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826939F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,24(r31)
	REX_STORE_U32(r31.u32 + 24, r29.u32);
loc_826939FC:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82693a18
	if (ctx.cr6.eq) goto loc_82693A18;
	// lwz r11,-5956(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -5956);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82693A14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
loc_82693A18:
	// lwz r11,-5956(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -5956);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82693A28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82693A28:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82699C40) {
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
	ctx.lr = 0x82699C48;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,0(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// lwz r29,24(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r28,20(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stw r30,4(r27)
	REX_STORE_U32(r27.u32 + 4, r30.u32);
	// stw r30,24(r27)
	REX_STORE_U32(r27.u32 + 24, r30.u32);
	// sync 
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82793b74
	ctx.lr = 0x82699C74;
	__imp__RtlNtStatusToDosError(ctx, base);
	// stw r3,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82699c98
	if (ctx.cr6.eq) goto loc_82699C98;
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// bl 0x82793974
	ctx.lr = 0x82699C8C;
	__imp__ObDereferenceObject(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82793a64
	ctx.lr = 0x82699C94;
	__imp__ExFreePool(ctx, base);
	// b 0x82699cac
	goto loc_82699CAC;
loc_82699C98:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82699cac
	if (ctx.cr6.eq) goto loc_82699CAC;
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82793974
	ctx.lr = 0x82699CAC;
	__imp__ObDereferenceObject(ctx, base);
loc_82699CAC:
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8269B6C0) {
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
	// bl 0x8269d770
	ctx.lr = 0x8269B6DC;
	sub_8269D770(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
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

DEFINE_REX_FUNC(sub_8269C6B0) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8269c3a0
	ctx.lr = 0x8269C6CC;
	sub_8269C3A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8269c700
	if (!ctx.cr0.eq) goto loc_8269C700;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lwz r10,8868(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8868);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8269c700
	if (ctx.cr6.eq) goto loc_8269C700;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269C6FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8269c458
	ctx.lr = 0x8269C700;
	sub_8269C458(ctx, base);
loc_8269C700:
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

DEFINE_REX_FUNC(sub_8269DFA8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,25048
	ctx.r3.s64 = ctx.r11.s64 + 25048;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8269E1E0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,25048
	ctx.r11.s64 = ctx.r11.s64 + 25048;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8269e218
	if (ctx.cr6.lt) goto loc_8269E218;
	// addi r10,r11,608
	ctx.r10.s64 = ctx.r11.s64 + 608;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8269e218
	if (ctx.cr6.gt) goto loc_8269E218;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// rlwinm r10,r10,0,17,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x826a96a8
	sub_826A96A8(ctx, base);
	return;
loc_8269E218:
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x827938b4
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8269F550) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x8269e1e0
	ctx.lr = 0x8269F56C;
	sub_8269E1E0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// lwz r12,-16(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A0A48) {
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
	ctx.lr = 0x826A0A50;
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826a0a8c
	if (!ctx.cr0.eq) goto loc_826A0A8C;
loc_826A0A74:
	// bl 0x826a33d0
	ctx.lr = 0x826A0A78;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826A0A84;
	sub_8269CB20(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x826a0ad4
	goto loc_826A0AD4;
loc_826A0A8C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x826a0aa4
	if (ctx.cr6.eq) goto loc_826A0AA4;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// beq cr6,0x826a0aa4
	if (ctx.cr6.eq) goto loc_826A0AA4;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// bne cr6,0x826a0a74
	if (!ctx.cr6.eq) goto loc_826A0A74;
loc_826A0AA4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269e120
	ctx.lr = 0x826A0AAC;
	sub_8269E120(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a0978
	ctx.lr = 0x826A0AC0;
	sub_826A0978(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = r31.s64 + 128;
	// bl 0x826a0afc
	ctx.lr = 0x826A0AD0;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_826A0AFC(ctx, base);
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
loc_826A0AD4:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826A2D14) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// neg r11,r12
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r12.u64);
	// addi r0,r11,4095
	ctx.r0.s64 = ctx.r11.s64 + 4095;
	// srawi. r0,r0,12
	ctx.xer.ca = (ctx.r0.s32 < 0) & ((ctx.r0.u32 & 0xFFF) != 0);
	ctx.r0.s64 = ctx.r0.s32 >> 12;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// blelr 
	if (!ctx.cr0.gt) return;
	// mr r11,r1
	ctx.r11.u64 = ctx.r1.u64;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
loc_826A2D2C:
	// lwzu r0,-4096(r11)
	ea = -4096 + ctx.r11.u32;
	ctx.r0.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// bdnz 0x826a2d2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826A2D2C;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_24) {
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
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx v24,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx v25,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx v26,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx v27,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx v28,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx v29,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx v30,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx v31,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__restvmx_21) {
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
	uint32_t ea{};
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx v21,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx v22,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx v23,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx v24,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx v25,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx v26,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__restvmx_102) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826AA7C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
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
	// bl 0x826b03f0
	ctx.lr = 0x826AA7E8;
	sub_826B03F0(ctx, base);
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

DEFINE_REX_FUNC(sub_826AC8B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
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
	// bl 0x826b03f0
	ctx.lr = 0x826AC8D8;
	sub_826B03F0(ctx, base);
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

DEFINE_REX_FUNC(sub_826AE454) {
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
	// bl 0x826a3a68
	ctx.lr = 0x826AE464;
	sub_826A3A68(ctx, base);
	// lwz r11,132(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826ae484
	if (!ctx.cr6.gt) goto loc_826AE484;
	// bl 0x826a3a68
	ctx.lr = 0x826AE474;
	sub_826A3A68(ctx, base);
	// addi r10,r3,132
	ctx.r10.s64 = ctx.r3.s64 + 132;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_826AE484:
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B03B8) {
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
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x826a96a8
	ctx.lr = 0x826B03CC;
	sub_826A96A8(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r29,80(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r11,31264
	ctx.r11.s64 = ctx.r11.s64 + 31264;
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B11D8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x826b1050
	sub_826B1050(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826B2834) {
	REX_FUNC_PROLOGUE();
	PPCRegister r19{};
	// lwz r19,10336(r11)
	r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 10336);
}

DEFINE_REX_FUNC(sub_826B2CB8) {
	REX_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x826a38d8
	sub_826A38D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826B2CC0) {
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
	ctx.lr = 0x826B2CC8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// bl 0x826a9d50
	ctx.lr = 0x826B2CE4;
	sub_826A9D50(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// beq cr6,0x826b2d38
	if (ctx.cr6.eq) goto loc_826B2D38;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a9d50
	ctx.lr = 0x826B2D00;
	sub_826A9D50(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// beq cr6,0x826b2d38
	if (ctx.cr6.eq) goto loc_826B2D38;
	// subf r30,r3,r29
	r30.u64 = r29.u64 - ctx.r3.u64;
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(r30.s64, 0, ctx.xer);
	// ble cr6,0x826b2dd4
	if (!ctx.cr6.gt) goto loc_826B2DD4;
	// bl 0x823f5788
	ctx.lr = 0x826B2D18;
	sub_823F5788(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// bl 0x823f3720
	ctx.lr = 0x826B2D24;
	sub_823F3720(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x826b2d48
	if (!ctx.cr0.eq) goto loc_826B2D48;
	// bl 0x826a33d0
	ctx.lr = 0x826B2D30;
	sub_826A33D0(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_826B2D38:
	// bl 0x826a33d0
	ctx.lr = 0x826B2D3C;
	sub_826A33D0(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_826B2D40:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_826B2D48:
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x826a3240
	ctx.lr = 0x826B2D58;
	sub_826A3240(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_826B2D5C:
	// cmpdi cr6,r30,4096
	ctx.cr6.compare<int64_t>(r30.s64, 4096, ctx.xer);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// bge cr6,0x826b2d6c
	if (!ctx.cr6.lt) goto loc_826B2D6C;
	// extsw r5,r30
	ctx.r5.s64 = r30.s32;
loc_826B2D6C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a9988
	ctx.lr = 0x826B2D78;
	sub_826A9988(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x826b2d94
	if (ctx.cr6.eq) goto loc_826B2D94;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// subf r30,r11,r30
	r30.u64 = r30.u64 - ctx.r11.u64;
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(r30.s64, 0, ctx.xer);
	// bgt cr6,0x826b2d5c
	if (ctx.cr6.gt) goto loc_826B2D5C;
	// b 0x826b2db4
	goto loc_826B2DB4;
loc_826B2D94:
	// bl 0x826a3408
	ctx.lr = 0x826B2D98;
	sub_826A3408(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x826b2db0
	if (!ctx.cr6.eq) goto loc_826B2DB0;
	// bl 0x826a33d0
	ctx.lr = 0x826B2DA8;
	sub_826A33D0(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_826B2DB0:
	// li r27,-1
	r27.s64 = -1;
loc_826B2DB4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a3240
	ctx.lr = 0x826B2DC0;
	sub_826A3240(ctx, base);
	// bl 0x823f5788
	ctx.lr = 0x826B2DC4;
	sub_823F5788(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x823f4018
	ctx.lr = 0x826B2DD0;
	sub_823F4018(ctx, base);
	// b 0x826b2e2c
	goto loc_826B2E2C;
loc_826B2DD4:
	// bge cr6,0x826b2e34
	if (!ctx.cr6.lt) goto loc_826B2E34;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a9d50
	ctx.lr = 0x826B2DE8;
	sub_826A9D50(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// beq cr6,0x826b2d38
	if (ctx.cr6.eq) goto loc_826B2D38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b0230
	ctx.lr = 0x826B2DF8;
	sub_826B0230(ctx, base);
	// bl 0x826b3c10
	ctx.lr = 0x826B2DFC;
	sub_826B3C10(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// extsw r27,r11
	r27.s64 = ctx.r11.s32;
	// cmpdi cr6,r27,-1
	ctx.cr6.compare<int64_t>(r27.s64, -1, ctx.xer);
	// bne cr6,0x826b2e34
	if (!ctx.cr6.eq) goto loc_826B2E34;
	// bl 0x826a33d0
	ctx.lr = 0x826B2E14;
	sub_826A33D0(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x826a3408
	ctx.lr = 0x826B2E20;
	sub_826A3408(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x823ee280
	ctx.lr = 0x826B2E28;
	sub_823EE280(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_826B2E2C:
	// cmpdi cr6,r27,-1
	ctx.cr6.compare<int64_t>(r27.s64, -1, ctx.xer);
	// beq cr6,0x826b2d38
	if (ctx.cr6.eq) goto loc_826B2D38;
loc_826B2E34:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a9d50
	ctx.lr = 0x826B2E44;
	sub_826A9D50(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// beq cr6,0x826b2d38
	if (ctx.cr6.eq) goto loc_826B2D38;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826b2d40
	goto loc_826B2D40;
}

DEFINE_REX_FUNC(sub_826BEAF8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bne cr6,0x826beb34
	if (!ctx.cr6.eq) goto loc_826BEB34;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x826bebdc
	goto loc_826BEBDC;
loc_826BEB34:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x826c6d18
	ctx.lr = 0x826BEB48;
	sub_826C6D18(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r30,r11,22
	r30.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// beq cr6,0x826bebcc
	if (ctx.cr6.eq) goto loc_826BEBCC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826bebd8
	if (ctx.cr6.lt) goto loc_826BEBD8;
loc_826BEB60:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826bebd8
	if (ctx.cr6.lt) goto loc_826BEBD8;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x826bebb0
	if (!ctx.cr6.eq) goto loc_826BEBB0;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x826bebb0
	if (!ctx.cr6.eq) goto loc_826BEBB0;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lbz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r3,572(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 572);
	// bl 0x826c6cf0
	ctx.lr = 0x826BEB94;
	sub_826C6CF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826bebd8
	if (ctx.cr6.lt) goto loc_826BEBD8;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x826c7ed8
	ctx.lr = 0x826BEBA8;
	sub_826C7ED8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826bebd8
	if (ctx.cr6.lt) goto loc_826BEBD8;
loc_826BEBB0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x826c6d80
	ctx.lr = 0x826BEBC4;
	sub_826C6D80(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// bne cr6,0x826beb60
	if (!ctx.cr6.eq) goto loc_826BEB60;
loc_826BEBCC:
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// bl 0x826c6de8
	ctx.lr = 0x826BEBD8;
	sub_826C6DE8(ctx, base);
loc_826BEBD8:
	// bl 0x826bd9a0
	ctx.lr = 0x826BEBDC;
	sub_826BD9A0(ctx, base);
loc_826BEBDC:
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

DEFINE_REX_FUNC(sub_826C6880) {
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
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x823f02b8
	ctx.lr = 0x826C68A4;
	sub_823F02B8(ctx, base);
	// addi r10,r3,0
	ctx.r10.s64 = ctx.r3.s64 + 0;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// ori r9,r11,14
	ctx.r9.u64 = ctx.r11.u64 | 14;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 & ctx.r9.u64;
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

DEFINE_REX_FUNC(sub_826C8B80) {
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
	ctx.lr = 0x826C8B88;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// ld r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// li r23,0
	r23.s64 = 0;
	// cmpld cr6,r7,r5
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r5.u64, ctx.xer);
	// ble cr6,0x826c8bc8
	if (!ctx.cr6.gt) goto loc_826C8BC8;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
loc_826C8BC8:
	// clrlwi r28,r11,16
	r28.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r28,512
	ctx.cr6.compare<uint32_t>(r28.u32, 512, ctx.xer);
	// ble cr6,0x826c8bd8
	if (!ctx.cr6.gt) goto loc_826C8BD8;
	// li r28,512
	r28.s64 = 512;
loc_826C8BD8:
	// addi r31,r28,2
	r31.s64 = r28.s64 + 2;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x823f02b8
	ctx.lr = 0x826C8BEC;
	sub_823F02B8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826c8c00
	if (!ctx.cr6.eq) goto loc_826C8C00;
	// li r23,5
	r23.s64 = 5;
	// b 0x826c8c7c
	goto loc_826C8C7C;
loc_826C8C00:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826a2e60
	ctx.lr = 0x826C8C10;
	sub_826A2E60(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x826c8c70
	if (ctx.cr6.eq) goto loc_826C8C70;
loc_826C8C1C:
	// subf r29,r31,r28
	r29.u64 = r28.u64 - r31.u64;
	// cmplwi cr6,r29,128
	ctx.cr6.compare<uint32_t>(r29.u32, 128, ctx.xer);
	// ble cr6,0x826c8c2c
	if (!ctx.cr6.gt) goto loc_826C8C2C;
	// li r29,128
	r29.s64 = 128;
loc_826C8C2C:
	// ld r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U64(r26.u32 + 0);
	// clrldi r11,r31,32
	ctx.r11.u64 = r31.u64 & 0xFFFFFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826b9678
	ctx.lr = 0x826C8C48;
	sub_826B9678(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// bne cr6,0x826c8c78
	if (!ctx.cr6.eq) goto loc_826C8C78;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r3,r27,r31
	ctx.r3.u64 = r27.u64 + r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826C8C64;
	sub_826A1E70(ctx, base);
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// blt cr6,0x826c8c1c
	if (ctx.cr6.lt) goto loc_826C8C1C;
loc_826C8C70:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// beq cr6,0x826c8c9c
	if (ctx.cr6.eq) goto loc_826C8C9C;
loc_826C8C78:
	// li r23,3
	r23.s64 = 3;
loc_826C8C7C:
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x826c8c9c
	if (ctx.cr6.eq) goto loc_826C8C9C;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x823f0350
	ctx.lr = 0x826C8C98;
	sub_823F0350(ctx, base);
	// li r27,0
	r27.s64 = 0;
loc_826C8C9C:
	// lhz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// ld r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U64(r26.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r8,0(r26)
	REX_STORE_U64(r26.u32 + 0, ctx.r8.u64);
	// sth r31,0(r24)
	REX_STORE_U16(r24.u32 + 0, r31.u16);
	// stw r27,0(r22)
	REX_STORE_U32(r22.u32 + 0, r27.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_826D6A30) {
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
	ctx.lr = 0x826D6A38;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lwz r29,28(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r27,r4,-24
	r27.s64 = ctx.r4.s64 + -24;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r27,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// bctrl 
	ctx.lr = 0x826D6A78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6c7c
	if (ctx.cr6.lt) goto loc_826D6C7C;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lhz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 64);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x826d6c74
	if (ctx.cr6.gt) goto loc_826D6C74;
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// addi r6,r11,120
	ctx.r6.s64 = ctx.r11.s64 + 120;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826d6adc
	if (!ctx.cr6.eq) goto loc_826D6ADC;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,224(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c6880
	ctx.lr = 0x826D6AB8;
	sub_826C6880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6c7c
	if (ctx.cr6.lt) goto loc_826D6C7C;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// stw r30,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// stw r30,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// stw r30,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r30.u32);
	// stw r30,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, r30.u32);
loc_826D6ADC:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// addi r28,r11,12
	r28.s64 = ctx.r11.s64 + 12;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826d6c74
	if (!ctx.cr6.eq) goto loc_826D6C74;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r3,224(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 224);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c6880
	ctx.lr = 0x826D6B08;
	sub_826C6880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6c7c
	if (ctx.cr6.lt) goto loc_826D6C7C;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(r27.u32, 4, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bge cr6,0x826d6b3c
	if (!ctx.cr6.lt) goto loc_826D6B3C;
	// lis r31,-32688
	r31.s64 = -2142240768;
	// ori r31,r31,12
	r31.u64 = r31.u64 | 12;
	// b 0x826d6c80
	goto loc_826D6C80;
loc_826D6B3C:
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826d3d18
	ctx.lr = 0x826D6B54;
	sub_826D3D18(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6c7c
	if (ctx.cr6.lt) goto loc_826D6C7C;
	// cmplwi cr6,r27,8
	ctx.cr6.compare<uint32_t>(r27.u32, 8, ctx.xer);
	// blt cr6,0x826d6c74
	if (ctx.cr6.lt) goto loc_826D6C74;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826d3d18
	ctx.lr = 0x826D6B80;
	sub_826D3D18(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6c7c
	if (ctx.cr6.lt) goto loc_826D6C7C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826d6c18
	if (ctx.cr6.eq) goto loc_826D6C18;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lwz r3,224(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c6880
	ctx.lr = 0x826D6BB0;
	sub_826C6880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6c7c
	if (ctx.cr6.lt) goto loc_826D6C7C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x826a2e60
	ctx.lr = 0x826D6BD0;
	sub_826A2E60(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r5,8
	r30.s64 = ctx.r5.s64 + 8;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// ble cr6,0x826d6bf0
	if (!ctx.cr6.gt) goto loc_826D6BF0;
	// lis r31,-32688
	r31.s64 = -2142240768;
	// ori r31,r31,12
	r31.u64 = r31.u64 | 12;
	// b 0x826d6c80
	goto loc_826D6C80;
loc_826D6BF0:
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826d4230
	ctx.lr = 0x826D6C08;
	sub_826D4230(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6c7c
	if (ctx.cr6.lt) goto loc_826D6C7C;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_826D6C18:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lhz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 64);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r8,64(r11)
	REX_STORE_U16(ctx.r11.u32 + 64, ctx.r8.u16);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r5,r6,r27
	ctx.r5.u64 = r27.u64 - ctx.r6.u64;
	// subf. r30,r9,r5
	r30.u64 = ctx.r5.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x826d6ca8
	if (ctx.cr0.eq) goto loc_826D6CA8;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826D6C50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6c7c
	if (ctx.cr6.lt) goto loc_826D6C7C;
	// ld r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.r11.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
loc_826D6C74:
	// lis r31,-32688
	r31.s64 = -2142240768;
	// ori r31,r31,12
	r31.u64 = r31.u64 | 12;
loc_826D6C7C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826D6C80:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d6ca8
	if (ctx.cr6.eq) goto loc_826D6CA8;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwz r3,224(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c68d8
	ctx.lr = 0x826D6C98;
	sub_826C68D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 224);
	// bl 0x826c68d8
	ctx.lr = 0x826D6CA8;
	sub_826C68D8(ctx, base);
loc_826D6CA8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826E2278) {
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
	// lhz r11,110(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 110);
	// lwz r10,92(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 92);
	// lwz r5,88(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 88);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mullw r11,r5,r6
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// slw r8,r3,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r9.u8 & 0x3F));
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x826e22c0
	if (!ctx.cr6.gt) goto loc_826E22C0;
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// addi r11,r1,82
	ctx.r11.s64 = ctx.r1.s64 + 82;
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x826a22f8
	ctx.lr = 0x826E22C0;
	sub_826A22F8(ctx, base);
loc_826E22C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826E4840) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lhz r11,580(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
loc_826E4858:
	// lwz r9,584(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 584);
	// lwz r11,320(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// lhzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r10,r6,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,424(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lhz r4,118(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 118);
	// lwz r9,56(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// lwz r10,12(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ble cr6,0x826e48bc
	if (!ctx.cr6.gt) goto loc_826E48BC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_826E48A4:
	// lhz r10,208(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 208);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// mullw r6,r7,r9
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x826e48a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826E48A4;
loc_826E48BC:
	// lhz r10,580(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 580);
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x826e4858
	if (ctx.cr6.lt) goto loc_826E4858;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826ED8C0) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c88
	ctx.lr = 0x826ED8C8;
	// stfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -144, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	r20.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r17,r20
	r17.u64 = r20.u64;
	// bl 0x826ed328
	ctx.lr = 0x826ED8EC;
	sub_826ED328(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x826edb3c
	if (ctx.cr6.eq) goto loc_826EDB3C;
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x826ed918
	if (!ctx.cr6.eq) goto loc_826ED918;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826edb3c
	if (ctx.cr6.eq) goto loc_826EDB3C;
	// lwz r16,28(r25)
	r16.u64 = REX_LOAD_U32(r25.u32 + 28);
	// lwz r24,40(r25)
	r24.u64 = REX_LOAD_U32(r25.u32 + 40);
	// lwz r10,32(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 32);
	// b 0x826ed92c
	goto loc_826ED92C;
loc_826ED918:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x826edb3c
	if (ctx.cr6.eq) goto loc_826EDB3C;
	// lwz r16,4(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lhz r24,18(r30)
	r24.u64 = REX_LOAD_U16(r30.u32 + 18);
	// lhz r10,2(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 2);
loc_826ED92C:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// ble cr6,0x826edb3c
	if (!ctx.cr6.gt) goto loc_826EDB3C;
	// subfic r11,r24,24
	ctx.xer.ca = r24.u32 <= 24;
	ctx.r11.u64 = static_cast<uint64_t>(24) - r24.u64;
	// li r18,1
	r18.s64 = 1;
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x826ed968
	if (ctx.cr6.lt) goto loc_826ED968;
	// slw r11,r18,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r11.u8 & 0x3F));
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,128(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// b 0x826ed994
	goto loc_826ED994;
loc_826ED968:
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// slw r8,r18,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r11.u8 & 0x3F));
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// lfs f0,3704(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// std r7,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f10,128(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
loc_826ED994:
	// lwz r11,44(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 44);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// stw r11,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r11.u32);
	// bne cr6,0x826ed9b4
	if (!ctx.cr6.eq) goto loc_826ED9B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263c5a0
	ctx.lr = 0x826ED9B0;
	sub_8263C5A0(ctx, base);
	// b 0x826edbec
	goto loc_826EDBEC;
loc_826ED9B4:
	// lwz r11,60(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x826edb3c
	if (ctx.cr6.lt) goto loc_826EDB3C;
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x826edb3c
	if (ctx.cr6.lt) goto loc_826EDB3C;
	// lwz r11,80(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x826edb3c
	if (ctx.cr6.lt) goto loc_826EDB3C;
	// lwz r11,84(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x826edb3c
	if (ctx.cr6.lt) goto loc_826EDB3C;
	// lwz r11,92(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x826edb3c
	if (ctx.cr6.lt) goto loc_826EDB3C;
	// li r5,120
	ctx.r5.s64 = 120;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826EDA00;
	sub_826A1E70(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r20,48(r31)
	REX_STORE_U32(r31.u32 + 48, r20.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826eda1c
	if (!ctx.cr6.eq) goto loc_826EDA1C;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826edb7c
	if (ctx.cr6.eq) goto loc_826EDB7C;
loc_826EDA1C:
	// lwz r10,48(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826edb3c
	if (ctx.cr6.eq) goto loc_826EDB3C;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x826edb3c
	if (ctx.cr6.lt) goto loc_826EDB3C;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lfd f13,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// lfd f0,2168(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 2168);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x826edb3c
	if (!ctx.cr6.eq) goto loc_826EDB3C;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfd f31,-3744(r8)
	f31.u64 = REX_LOAD_U64(ctx.r8.u32 + -3744);
	// lfd f0,-16(r7)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + -16);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x826edb3c
	if (!ctx.cr6.eq) goto loc_826EDB3C;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x826e07e0
	ctx.lr = 0x826EDA74;
	sub_826E07E0(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826eda98
	if (!ctx.cr6.eq) goto loc_826EDA98;
loc_826EDA80:
	// lis r17,-32761
	r17.s64 = -2147024896;
	// ori r17,r17,14
	r17.u64 = r17.u64 | 14;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x826a1cd8
	return;
loc_826EDA98:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826edb7c
	if (!ctx.cr6.gt) goto loc_826EDB7C;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
loc_826EDAB4:
	// lwz r10,48(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 48);
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lfdx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// stfdx f0,r8,r9
	REX_STORE_U64(ctx.r8.u32 + ctx.r9.u32, ctx.f0.u64);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,48(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 48);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfd f13,8(r6)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// stfd f13,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.f13.u64);
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 52);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r10,-2
	ctx.r3.s64 = ctx.r10.s64 + -2;
	// cmpw cr6,r5,r3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x826edb54
	if (ctx.cr6.eq) goto loc_826EDB54;
	// lwz r10,48(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 48);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lwz r6,48(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 48);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lfdx f0,r11,r10
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// lfdx f13,r8,r10
	ctx.f13.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r10.u32);
	// lfd f12,8(r7)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// fsub f11,f13,f0
	ctx.f11.f64 = ctx.f13.f64 - ctx.f0.f64;
	// lfd f10,8(r4)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// fsub f9,f10,f12
	ctx.f9.f64 = ctx.f10.f64 - ctx.f12.f64;
	// fdiv f8,f9,f11
	ctx.f8.f64 = ctx.f9.f64 / ctx.f11.f64;
	// stfd f8,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.f8.u64);
	// lwz r10,48(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 48);
	// lfdx f7,r8,r10
	ctx.f7.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r10.u32);
	// lfdx f6,r11,r10
	ctx.f6.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// fcmpu cr6,f7,f6
	ctx.cr6.compare(ctx.f7.f64, ctx.f6.f64);
	// bge cr6,0x826edb60
	if (!ctx.cr6.lt) goto loc_826EDB60;
loc_826EDB3C:
	// lis r17,-32761
	r17.s64 = -2147024896;
	// ori r17,r17,87
	r17.u64 = r17.u64 | 87;
loc_826EDB44:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x826a1cd8
	return;
loc_826EDB54:
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stfd f31,16(r10)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r10.u32 + 16, f31.u64);
loc_826EDB60:
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x826edab4
	if (ctx.cr6.lt) goto loc_826EDAB4;
loc_826EDB7C:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826edb9c
	if (ctx.cr6.eq) goto loc_826EDB9C;
	// li r11,100
	ctx.r11.s64 = 100;
	// stw r18,56(r31)
	REX_STORE_U32(r31.u32 + 56, r18.u32);
	// li r10,500
	ctx.r10.s64 = 500;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
loc_826EDB9C:
	// lwz r11,36(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826edbc4
	if (!ctx.cr6.eq) goto loc_826EDBC4;
	// lwz r11,40(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826edbc4
	if (!ctx.cr6.eq) goto loc_826EDBC4;
	// lwz r11,44(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// beq cr6,0x826edbc8
	if (ctx.cr6.eq) goto loc_826EDBC8;
loc_826EDBC4:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_826EDBC8:
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826edbdc
	if (ctx.cr6.eq) goto loc_826EDBDC;
	// stw r18,96(r31)
	REX_STORE_U32(r31.u32 + 96, r18.u32);
loc_826EDBDC:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826edbec
	if (!ctx.cr6.eq) goto loc_826EDBEC;
	// stw r20,32(r31)
	REX_STORE_U32(r31.u32 + 32, r20.u32);
loc_826EDBEC:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826edc14
	if (ctx.cr6.eq) goto loc_826EDC14;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x826edc14
	if (ctx.cr6.eq) goto loc_826EDC14;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826edc14
	if (ctx.cr6.eq) goto loc_826EDC14;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x826edb3c
	if (!ctx.cr6.eq) goto loc_826EDB3C;
loc_826EDC14:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826edc2c
	if (ctx.cr6.eq) goto loc_826EDC2C;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826edb3c
	if (!ctx.cr6.eq) goto loc_826EDB3C;
loc_826EDC2C:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x826EDC38;
	sub_826E07E0(ctx, base);
	// stw r3,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826eda80
	if (ctx.cr6.eq) goto loc_826EDA80;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x826EDC50;
	sub_826E07E0(ctx, base);
	// stw r3,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826eda80
	if (ctx.cr6.eq) goto loc_826EDA80;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r19,1000
	r19.s64 = 1000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r29,r10,-25468
	r29.s64 = ctx.r10.s64 + -25468;
	// beq cr6,0x826edc94
	if (ctx.cr6.eq) goto loc_826EDC94;
	// mullw r11,r11,r16
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r16.s32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// divw r4,r11,r19
	ctx.r4.u64 = uint32_t((r19.s32 && !(ctx.r11.s32 == INT32_MIN && r19.s32 == -1)) ? ctx.r11.s32 / r19.s32 : 0);
	// bl 0x826ed080
	ctx.lr = 0x826EDC84;
	sub_826ED080(ctx, base);
	// lis r30,16384
	r30.s64 = 1073741824;
	// subf r10,r3,r30
	ctx.r10.u64 = r30.u64 - ctx.r3.u64;
	// stw r10,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r10.u32);
	// b 0x826edc9c
	goto loc_826EDC9C;
loc_826EDC94:
	// lis r30,16384
	r30.s64 = 1073741824;
	// stw r30,176(r31)
	REX_STORE_U32(r31.u32 + 176, r30.u32);
loc_826EDC9C:
	// lwz r27,176(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 176);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// subf r10,r27,r30
	ctx.r10.u64 = r30.u64 - r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r10.u32);
	// beq cr6,0x826edcd0
	if (ctx.cr6.eq) goto loc_826EDCD0;
	// mullw r11,r11,r16
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r16.s32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// divw r4,r11,r19
	ctx.r4.u64 = uint32_t((r19.s32 && !(ctx.r11.s32 == INT32_MIN && r19.s32 == -1)) ? ctx.r11.s32 / r19.s32 : 0);
	// bl 0x826ed080
	ctx.lr = 0x826EDCC4;
	sub_826ED080(ctx, base);
	// subf r10,r3,r30
	ctx.r10.u64 = r30.u64 - ctx.r3.u64;
	// stw r10,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r10.u32);
	// b 0x826edcd4
	goto loc_826EDCD4;
loc_826EDCD0:
	// stw r30,180(r31)
	REX_STORE_U32(r31.u32 + 180, r30.u32);
loc_826EDCD4:
	// lwz r28,180(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 180);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// subf r10,r28,r30
	ctx.r10.u64 = r30.u64 - r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r10.u32);
	// beq cr6,0x826edd08
	if (ctx.cr6.eq) goto loc_826EDD08;
	// mullw r11,r11,r16
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r16.s32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// divw r4,r11,r19
	ctx.r4.u64 = uint32_t((r19.s32 && !(ctx.r11.s32 == INT32_MIN && r19.s32 == -1)) ? ctx.r11.s32 / r19.s32 : 0);
	// bl 0x826ed080
	ctx.lr = 0x826EDCFC;
	sub_826ED080(ctx, base);
	// subf r10,r3,r30
	ctx.r10.u64 = r30.u64 - ctx.r3.u64;
	// stw r10,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// b 0x826edd0c
	goto loc_826EDD0C;
loc_826EDD08:
	// stw r30,148(r31)
	REX_STORE_U32(r31.u32 + 148, r30.u32);
loc_826EDD0C:
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// subf r9,r10,r30
	ctx.r9.u64 = r30.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r9.u32);
	// beq cr6,0x826edd40
	if (ctx.cr6.eq) goto loc_826EDD40;
	// mullw r11,r11,r16
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r16.s32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// divw r4,r11,r19
	ctx.r4.u64 = uint32_t((r19.s32 && !(ctx.r11.s32 == INT32_MIN && r19.s32 == -1)) ? ctx.r11.s32 / r19.s32 : 0);
	// bl 0x826ed080
	ctx.lr = 0x826EDD34;
	sub_826ED080(ctx, base);
	// subf r10,r3,r30
	ctx.r10.u64 = r30.u64 - ctx.r3.u64;
	// stw r10,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r10.u32);
	// b 0x826edd44
	goto loc_826EDD44;
loc_826EDD40:
	// stw r30,152(r31)
	REX_STORE_U32(r31.u32 + 152, r30.u32);
loc_826EDD44:
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// divw r10,r30,r27
	ctx.r10.u64 = uint32_t((r27.s32 && !(r30.s32 == INT32_MIN && r27.s32 == -1)) ? r30.s32 / r27.s32 : 0);
	// divw r9,r30,r28
	ctx.r9.u64 = uint32_t((r28.s32 && !(r30.s32 == INT32_MIN && r28.s32 == -1)) ? r30.s32 / r28.s32 : 0);
	// subf r8,r11,r30
	ctx.r8.u64 = r30.u64 - ctx.r11.u64;
	// stw r10,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r10.u32);
	// stw r9,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r9.u32);
	// twllei r27,0
	if (r27.s32 == 0 || r27.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r8,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r8.u32);
	// twllei r28,0
	if (r28.s32 == 0 || r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r7,4(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 4);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x826edd84
	if (!ctx.cr6.eq) goto loc_826EDD84;
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x826edd84
	if (ctx.cr6.gt) goto loc_826EDD84;
	// stw r20,8(r31)
	REX_STORE_U32(r31.u32 + 8, r20.u32);
loc_826EDD84:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826edda4
	if (!ctx.cr6.eq) goto loc_826EDDA4;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x826edda4
	if (ctx.cr6.gt) goto loc_826EDDA4;
	// stw r18,0(r25)
	REX_STORE_U32(r25.u32 + 0, r18.u32);
	// stw r20,8(r25)
	REX_STORE_U32(r25.u32 + 8, r20.u32);
loc_826EDDA4:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826eddd0
	if (!ctx.cr6.eq) goto loc_826EDDD0;
	// lwz r10,16(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 16);
	// addi r11,r26,16
	ctx.r11.s64 = r26.s64 + 16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x826eddd0
	if (ctx.cr6.gt) goto loc_826EDDD0;
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
	// stw r10,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r10.u32);
	// ld r9,16(r25)
	ctx.r9.u64 = REX_LOAD_U64(r25.u32 + 16);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
loc_826EDDD0:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826eddfc
	if (!ctx.cr6.eq) goto loc_826EDDFC;
	// lwz r10,24(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 24);
	// addi r11,r26,24
	ctx.r11.s64 = r26.s64 + 24;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x826eddfc
	if (ctx.cr6.gt) goto loc_826EDDFC;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// ld r9,8(r25)
	ctx.r9.u64 = REX_LOAD_U64(r25.u32 + 8);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
loc_826EDDFC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826edeb0
	if (ctx.cr6.eq) goto loc_826EDEB0;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lwz r5,4(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r4,16(r25)
	ctx.r4.u64 = REX_LOAD_U64(r25.u32 + 16);
	// bl 0x826ed110
	ctx.lr = 0x826EDE1C;
	sub_826ED110(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826edb44
	if (ctx.cr6.lt) goto loc_826EDB44;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lwz r5,0(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// ld r4,8(r25)
	ctx.r4.u64 = REX_LOAD_U64(r25.u32 + 8);
	// bl 0x826ed110
	ctx.lr = 0x826EDE3C;
	sub_826ED110(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826edb44
	if (ctx.cr6.lt) goto loc_826EDB44;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lwz r5,4(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r4,16(r26)
	ctx.r4.u64 = REX_LOAD_U64(r26.u32 + 16);
	// bl 0x826ed110
	ctx.lr = 0x826EDE5C;
	sub_826ED110(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826edb44
	if (ctx.cr6.lt) goto loc_826EDB44;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lwz r5,0(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r4,24(r26)
	ctx.r4.u64 = REX_LOAD_U64(r26.u32 + 24);
	// bl 0x826ed110
	ctx.lr = 0x826EDE7C;
	sub_826ED110(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826edb44
	if (ctx.cr6.lt) goto loc_826EDB44;
	// lwz r26,84(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r25,80(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(r26.s32, r25.s32, ctx.xer);
	// blt cr6,0x826edea8
	if (ctx.cr6.lt) goto loc_826EDEA8;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x826edec0
	if (!ctx.cr6.lt) goto loc_826EDEC0;
loc_826EDEA8:
	// stw r20,8(r31)
	REX_STORE_U32(r31.u32 + 8, r20.u32);
	// b 0x826edec0
	goto loc_826EDEC0;
loc_826EDEB0:
	// lwz r25,80(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r26,84(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_826EDEC0:
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826edee4
	if (ctx.cr6.eq) goto loc_826EDEE4;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826edee8
	if (ctx.cr6.eq) goto loc_826EDEE8;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826edee8
	if (ctx.cr6.eq) goto loc_826EDEE8;
loc_826EDEE4:
	// stw r18,256(r31)
	REX_STORE_U32(r31.u32 + 256, r18.u32);
loc_826EDEE8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826edff0
	if (ctx.cr6.eq) goto loc_826EDFF0;
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826edff0
	if (ctx.cr6.eq) goto loc_826EDFF0;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x826edf28
	if (!ctx.cr6.eq) goto loc_826EDF28;
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x826edf28
	if (!ctx.cr6.eq) goto loc_826EDF28;
	// addis r10,r25,192
	ctx.r10.s64 = r25.s64 + 12582912;
	// xoris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 ^ 2147483648;
	// subf r8,r10,r20
	ctx.r8.u64 = r20.u64 - ctx.r10.u64;
	// addc r7,r8,r9
	ctx.xer.ca = ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32;
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 & ctx.r10.u64;
loc_826EDF28:
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// subf r7,r25,r8
	ctx.r7.u64 = ctx.r8.u64 - r25.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r7,r26
	ctx.r10.u64 = ctx.r7.u64 + r26.u64;
	// subf r4,r8,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r8.u64;
	// subfic r6,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r6.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// rlwinm r5,r10,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// addme r3,r5
	temp.u8 = (ctx.r5.u32 + 0xFFFFFFFFu < ctx.r5.u32) | (ctx.r5.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r5.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// li r6,2
	ctx.r6.s64 = 2;
	// and r5,r3,r10
	ctx.r5.u64 = ctx.r3.u64 & ctx.r10.u64;
	// stw r6,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r6.u32);
	// srawi r10,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 3;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// xoris r3,r11,32768
	ctx.r3.u64 = ctx.r11.u64 ^ 2147483648;
	// subf r9,r11,r20
	ctx.r9.u64 = r20.u64 - ctx.r11.u64;
	// xoris r6,r10,32768
	ctx.r6.u64 = ctx.r10.u64 ^ 2147483648;
	// addc r5,r9,r3
	ctx.xer.ca = ctx.r9.u32 + ctx.r3.u32 < ctx.r9.u32;
	ctx.r5.u64 = ctx.r9.u64 + ctx.r3.u64;
	// subf r5,r10,r20
	ctx.r5.u64 = r20.u64 - ctx.r10.u64;
	// subf r9,r25,r4
	ctx.r9.u64 = ctx.r4.u64 - r25.u64;
	// subfe r4,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addc r3,r5,r6
	ctx.xer.ca = ctx.r5.u32 + ctx.r6.u32 < ctx.r5.u32;
	ctx.r3.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + r26.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// subfic r3,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r3.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// and r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 & ctx.r10.u64;
	// addme r3,r6
	temp.u8 = (ctx.r6.u32 + 0xFFFFFFFFu < ctx.r6.u32) | (ctx.r6.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r6.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ctx.r11.u64;
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// and r10,r3,r9
	ctx.r10.u64 = ctx.r3.u64 & ctx.r9.u64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// xoris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 ^ 2147483648;
	// subf r8,r11,r20
	ctx.r8.u64 = r20.u64 - ctx.r11.u64;
	// xoris r7,r10,32768
	ctx.r7.u64 = ctx.r10.u64 ^ 2147483648;
	// addc r6,r8,r9
	ctx.xer.ca = ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32;
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r4,r10,r20
	ctx.r4.u64 = r20.u64 - ctx.r10.u64;
	// subfe r3,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addc r9,r4,r7
	ctx.xer.ca = ctx.r4.u32 + ctx.r7.u32 < ctx.r4.u32;
	ctx.r9.u64 = ctx.r4.u64 + ctx.r7.u64;
	// and r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 & ctx.r11.u64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
loc_826EDFF0:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826ee098
	if (!ctx.cr6.gt) goto loc_826EE098;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x826EE004;
	sub_826E07E0(ctx, base);
	// stw r3,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826eda80
	if (ctx.cr6.eq) goto loc_826EDA80;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x826EE020;
	sub_826A2E60(ctx, base);
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x826EE02C;
	sub_826E07E0(ctx, base);
	// stw r3,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826eda80
	if (ctx.cr6.eq) goto loc_826EDA80;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x826EE048;
	sub_826A2E60(ctx, base);
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x826EE054;
	sub_826E07E0(ctx, base);
	// stw r3,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826eda80
	if (ctx.cr6.eq) goto loc_826EDA80;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x826EE070;
	sub_826A2E60(ctx, base);
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x826EE07C;
	sub_826E07E0(ctx, base);
	// stw r3,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826eda80
	if (ctx.cr6.eq) goto loc_826EDA80;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x826EE098;
	sub_826A2E60(ctx, base);
loc_826EE098:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ee168
	if (ctx.cr6.eq) goto loc_826EE168;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ee0c8
	if (ctx.cr6.eq) goto loc_826EE0C8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ee168
	if (ctx.cr6.eq) goto loc_826EE168;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ee168
	if (ctx.cr6.eq) goto loc_826EE168;
loc_826EE0C8:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x826EE0D4;
	sub_826E07E0(ctx, base);
	// stw r3,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826eda80
	if (ctx.cr6.eq) goto loc_826EDA80;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x826EE0F0;
	sub_826A2E60(ctx, base);
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x826EE0FC;
	sub_826E07E0(ctx, base);
	// stw r3,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826eda80
	if (ctx.cr6.eq) goto loc_826EDA80;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x826EE118;
	sub_826A2E60(ctx, base);
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x826EE124;
	sub_826E07E0(ctx, base);
	// stw r3,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826eda80
	if (ctx.cr6.eq) goto loc_826EDA80;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x826EE140;
	sub_826A2E60(ctx, base);
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x826EE14C;
	sub_826E07E0(ctx, base);
	// stw r3,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826eda80
	if (ctx.cr6.eq) goto loc_826EDA80;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x826EE168;
	sub_826A2E60(ctx, base);
loc_826EE168:
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x826ee194
	if (!ctx.cr6.gt) goto loc_826EE194;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826ee194
	if (!ctx.cr6.eq) goto loc_826EE194;
	// lis r17,-32764
	r17.s64 = -2147221504;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x826a1cd8
	return;
loc_826EE194:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,1023
	ctx.r9.s64 = 67043328;
	// lis r23,-1024
	r23.s64 = -67108864;
	// ori r21,r9,65535
	r21.u64 = ctx.r9.u64 | 65535;
	// mr r24,r20
	r24.u64 = r20.u64;
	// mr r27,r20
	r27.u64 = r20.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r22,r11,-25764
	r22.s64 = ctx.r11.s64 + -25764;
	// ble cr6,0x826ee300
	if (!ctx.cr6.gt) goto loc_826EE300;
	// mr r30,r20
	r30.u64 = r20.u64;
loc_826EE1BC:
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// stw r20,200(r31)
	REX_STORE_U32(r31.u32 + 200, r20.u32);
	// stw r20,208(r31)
	REX_STORE_U32(r31.u32 + 208, r20.u32);
	// stw r20,204(r31)
	REX_STORE_U32(r31.u32 + 204, r20.u32);
	// stwx r20,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r20.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826ee2b8
	if (ctx.cr6.eq) goto loc_826EE2B8;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lwzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	// lwzx r8,r30,r9
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + ctx.r9.u32);
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// and r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 & ctx.r11.u64;
	// and r29,r6,r8
	r29.u64 = ctx.r6.u64 & ctx.r8.u64;
	// subf r11,r25,r5
	ctx.r11.u64 = ctx.r5.u64 - r25.u64;
	// stwx r5,r30,r10
	REX_STORE_U32(r30.u32 + ctx.r10.u32, ctx.r5.u32);
	// stwx r29,r30,r9
	REX_STORE_U32(r30.u32 + ctx.r9.u32, r29.u32);
	// subf r28,r26,r29
	r28.u64 = r29.u64 - r26.u64;
	// stw r11,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r23.s32, ctx.xer);
	// bge cr6,0x826ee224
	if (!ctx.cr6.lt) goto loc_826EE224;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// b 0x826ee230
	goto loc_826EE230;
loc_826EE224:
	// cmpw cr6,r4,r21
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r21.s32, ctx.xer);
	// ble cr6,0x826ee230
	if (!ctx.cr6.gt) goto loc_826EE230;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
loc_826EE230:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x826ed080
	ctx.lr = 0x826EE238;
	sub_826ED080(ctx, base);
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// stwx r3,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r3.u32);
	// lwz r10,200(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 200);
	// cmpwi cr6,r10,-10485
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -10485, ctx.xer);
	// ble cr6,0x826ee25c
	if (!ctx.cr6.gt) goto loc_826EE25C;
	// cmpwi cr6,r10,10485
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10485, ctx.xer);
	// bge cr6,0x826ee25c
	if (!ctx.cr6.lt) goto loc_826EE25C;
	// cmpwi cr6,r28,-10485
	ctx.cr6.compare<int32_t>(r28.s32, -10485, ctx.xer);
	// bgt cr6,0x826ee260
	if (ctx.cr6.gt) goto loc_826EE260;
loc_826EE25C:
	// mr r24,r18
	r24.u64 = r18.u64;
loc_826EE260:
	// add r11,r10,r26
	ctx.r11.u64 = ctx.r10.u64 + r26.u64;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// blt cr6,0x826ee2b8
	if (ctx.cr6.lt) goto loc_826EE2B8;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// subf r10,r10,r29
	ctx.r10.u64 = r29.u64 - ctx.r10.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi. r10,r9,10
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r9.u32);
	// bne 0x826ee28c
	if (!ctx.cr0.eq) goto loc_826EE28C;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// b 0x826ee2a8
	goto loc_826EE2A8;
loc_826EE28C:
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r11,r11,r10
	ctx.r11.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
loc_826EE2A8:
	// lwz r10,196(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwz r9,104(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 104);
	// stw r11,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r11.u32);
	// stwx r9,r30,r10
	REX_STORE_U32(r30.u32 + ctx.r10.u32, ctx.r9.u32);
loc_826EE2B8:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ee2d4
	if (ctx.cr6.eq) goto loc_826EE2D4;
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826ee2ec
	if (ctx.cr6.eq) goto loc_826EE2EC;
loc_826EE2D4:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ed618
	ctx.lr = 0x826EE2E0;
	sub_826ED618(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826edb44
	if (ctx.cr6.lt) goto loc_826EDB44;
loc_826EE2EC:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826ee1bc
	if (ctx.cr6.lt) goto loc_826EE1BC;
loc_826EE300:
	// lis r11,127
	ctx.r11.s64 = 8323072;
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// stw r24,8(r31)
	REX_STORE_U32(r31.u32 + 8, r24.u32);
	// mr r28,r20
	r28.u64 = r20.u64;
	// ori r29,r11,65534
	r29.u64 = ctx.r11.u64 | 65534;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r29,276(r31)
	REX_STORE_U32(r31.u32 + 276, r29.u32);
	// ble cr6,0x826ee38c
	if (!ctx.cr6.gt) goto loc_826EE38C;
	// mr r30,r20
	r30.u64 = r20.u64;
loc_826EE324:
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// stwx r29,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r29.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826ee378
	if (ctx.cr6.eq) goto loc_826EE378;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lwzx r4,r30,r11
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmpw cr6,r4,r23
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r23.s32, ctx.xer);
	// bge cr6,0x826ee350
	if (!ctx.cr6.lt) goto loc_826EE350;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// b 0x826ee35c
	goto loc_826EE35C;
loc_826EE350:
	// cmpw cr6,r4,r21
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r21.s32, ctx.xer);
	// ble cr6,0x826ee35c
	if (!ctx.cr6.gt) goto loc_826EE35C;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
loc_826EE35C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x826ed080
	ctx.lr = 0x826EE364;
	sub_826ED080(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lwz r10,280(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 280);
	// mulld r9,r11,r29
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * r29.u64);
	// sradi r8,r9,20
	ctx.xer.ca = (ctx.r9.s64 < 0) & ((ctx.r9.u64 & 0xFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s64 >> 20;
	// stwx r8,r30,r10
	REX_STORE_U32(r30.u32 + ctx.r10.u32, ctx.r8.u32);
loc_826EE378:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826ee324
	if (ctx.cr6.lt) goto loc_826EE324;
loc_826EE38C:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lis r30,16
	r30.s64 = 1048576;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ee3f8
	if (ctx.cr6.eq) goto loc_826EE3F8;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ee3bc
	if (ctx.cr6.eq) goto loc_826EE3BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ed860
	ctx.lr = 0x826EE3B0;
	sub_826ED860(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826edb44
	if (ctx.cr6.lt) goto loc_826EDB44;
loc_826EE3BC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826ee3f8
	if (!ctx.cr6.eq) goto loc_826EE3F8;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826ee3f8
	if (!ctx.cr6.gt) goto loc_826EE3F8;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_826EE3DC:
	// lwz r9,192(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 192);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r30,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,256(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 256);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x826ee3dc
	if (ctx.cr6.lt) goto loc_826EE3DC;
loc_826EE3F8:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ee41c
	if (ctx.cr6.eq) goto loc_826EE41C;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826ee414
	if (ctx.cr6.eq) goto loc_826EE414;
	// bl 0x82634e78
	ctx.lr = 0x826EE414;
	sub_82634E78(ctx, base);
loc_826EE414:
	// stw r20,48(r31)
	REX_STORE_U32(r31.u32 + 48, r20.u32);
	// stw r20,52(r31)
	REX_STORE_U32(r31.u32 + 52, r20.u32);
loc_826EE41C:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// stw r20,144(r31)
	REX_STORE_U32(r31.u32 + 144, r20.u32);
	// stw r30,172(r31)
	REX_STORE_U32(r31.u32 + 172, r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r20,216(r31)
	REX_STORE_U32(r31.u32 + 216, r20.u32);
	// beq cr6,0x826ee448
	if (ctx.cr6.eq) goto loc_826EE448;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// mullw r10,r11,r16
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r16.s32);
	// divw r9,r10,r19
	ctx.r9.u64 = uint32_t((r19.s32 && !(ctx.r10.s32 == INT32_MIN && r19.s32 == -1)) ? ctx.r10.s32 / r19.s32 : 0);
	// stw r9,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r9.u32);
	// b 0x826ee44c
	goto loc_826EE44C;
loc_826EE448:
	// stw r20,212(r31)
	REX_STORE_U32(r31.u32 + 212, r20.u32);
loc_826EE44C:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826edb44
	if (ctx.cr6.eq) goto loc_826EDB44;
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// beq cr6,0x826ee480
	if (ctx.cr6.eq) goto loc_826EE480;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// stw r7,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r7.u32);
loc_826EE480:
	// stw r11,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r20,220(r31)
	REX_STORE_U32(r31.u32 + 220, r20.u32);
	// stw r20,236(r31)
	REX_STORE_U32(r31.u32 + 236, r20.u32);
	// stw r20,232(r31)
	REX_STORE_U32(r31.u32 + 232, r20.u32);
	// beq cr6,0x826edb44
	if (ctx.cr6.eq) goto loc_826EDB44;
	// stw r30,240(r31)
	REX_STORE_U32(r31.u32 + 240, r30.u32);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stw r30,244(r31)
	REX_STORE_U32(r31.u32 + 244, r30.u32);
	// stw r20,248(r31)
	REX_STORE_U32(r31.u32 + 248, r20.u32);
	// stw r20,252(r31)
	REX_STORE_U32(r31.u32 + 252, r20.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_8274E458) {
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
	ctx.lr = 0x8274E460;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r11,1776(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r30,1772(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mullw r10,r7,r5
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// rlwinm r29,r10,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r29,r11
	r28.u64 = r29.u64 + ctx.r11.u64;
	// lhzx r9,r29,r11
	ctx.r9.u64 = REX_LOAD_U16(r29.u32 + ctx.r11.u32);
	// sthx r9,r29,r11
	REX_STORE_U16(r29.u32 + ctx.r11.u32, ctx.r9.u16);
	// beq cr6,0x8274e4f0
	if (ctx.cr6.eq) goto loc_8274E4F0;
	// or r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 | ctx.r5.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8274e4f0
	if (ctx.cr6.eq) goto loc_8274E4F0;
	// rlwinm r9,r5,0,16,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFE;
	// rlwinm r10,r4,0,16,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFE;
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r30
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + r30.u32);
	// sthx r7,r29,r30
	REX_STORE_U16(r29.u32 + r30.u32, ctx.r7.u16);
	// lhzx r6,r8,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// sth r6,0(r28)
	REX_STORE_U16(r28.u32 + 0, ctx.r6.u16);
	// lhzx r11,r29,r30
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + r30.u32);
	// addi r5,r11,-16384
	ctx.r5.s64 = ctx.r11.s64 + -16384;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cfc
	return;
loc_8274E4F0:
	// lwz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8274e518
	if (ctx.cr6.eq) goto loc_8274E518;
	// li r11,16384
	ctx.r11.s64 = 16384;
	// li r26,1
	r26.s64 = 1;
	// sthx r11,r29,r30
	REX_STORE_U16(r29.u32 + r30.u32, ctx.r11.u16);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cfc
	return;
loc_8274E518:
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8274e5cc
	if (!ctx.cr6.eq) goto loc_8274E5CC;
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8274e55c
	if (!ctx.cr6.eq) goto loc_8274E55C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8274e558
	if (ctx.cr6.eq) goto loc_8274E558;
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// lwz r10,22192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22192);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8274e55c
	if (ctx.cr6.eq) goto loc_8274E55C;
loc_8274E558:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8274E55C:
	// lwz r10,20908(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20908);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8274e598
	if (ctx.cr6.eq) goto loc_8274E598;
	// stw r4,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// stw r5,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// lwz r7,1776(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1776);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r6,1772(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82739708
	ctx.lr = 0x8274E590;
	sub_82739708(ctx, base);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x8274e624
	goto loc_8274E624;
loc_8274E598:
	// addi r25,r1,112
	r25.s64 = ctx.r1.s64 + 112;
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r10,1776(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1776);
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,1772(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x827618f0
	ctx.lr = 0x8274E5C4;
	sub_827618F0(ctx, base);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x8274e624
	goto loc_8274E624;
loc_8274E5CC:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8274e5f4
	if (!ctx.cr6.eq) goto loc_8274E5F4;
	// add r11,r29,r30
	ctx.r11.u64 = r29.u64 + r30.u64;
	// lhz r10,-2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lhz r8,-2(r28)
	ctx.r8.u64 = REX_LOAD_U16(r28.u32 + -2);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// b 0x8274e614
	goto loc_8274E614;
loc_8274E5F4:
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r30
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + r30.u32);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lhzx r6,r8,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// stw r5,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
loc_8274E614:
	// cmpwi cr6,r9,16384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16384, ctx.xer);
	// bne cr6,0x8274e624
	if (!ctx.cr6.eq) goto loc_8274E624;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// stw r26,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r26.u32);
loc_8274E624:
	// lwz r11,3984(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3984);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8274e638
	if (ctx.cr6.eq) goto loc_8274E638;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8274e65c
	if (!ctx.cr6.eq) goto loc_8274E65C;
loc_8274E638:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// srawi r10,r11,15
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 15;
	// rlwinm r8,r10,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r8,0(r27)
	REX_STORE_U16(r27.u32 + 0, ctx.r8.u16);
	// lwz r6,0(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// rlwimi r5,r6,1,16,26
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFE0) | (ctx.r5.u64 & 0xFFFFFFFFFFFF001F);
	// rlwinm r4,r5,0,28,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r4,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r4.u32);
loc_8274E65C:
	// lhz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 0);
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 416);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwz r8,424(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 424);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// subf r5,r11,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r11.u64;
	// sthx r5,r29,r30
	REX_STORE_U16(r29.u32 + r30.u32, ctx.r5.u16);
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// lwz r3,428(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 428);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r8,r10,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// srawi r10,r8,20
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 20;
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// and r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 & ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// subf r5,r11,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r11.u64;
	// sth r5,0(r28)
	REX_STORE_U16(r28.u32 + 0, ctx.r5.u16);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8275F6C8) {
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
	ctx.lr = 0x8275F6D0;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,248(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// li r29,0
	r29.s64 = 0;
	// lwz r11,252(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r21,352(r3)
	r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 352);
	// lwz r22,84(r3)
	r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r14,r4
	r14.u64 = ctx.r4.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r5.u32);
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// stw r6,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r6.u32);
	// addi r9,r11,255
	ctx.r9.s64 = ctx.r11.s64 + 255;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r21.u32);
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// mr r19,r29
	r19.u64 = r29.u64;
	// mr r27,r29
	r27.u64 = r29.u64;
	// stb r11,4(r4)
	REX_STORE_U8(ctx.r4.u32 + 4, ctx.r11.u8);
	// mr r26,r29
	r26.u64 = r29.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8275fc34
	if (ctx.cr6.lt) goto loc_8275FC34;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bgt cr6,0x8275fc34
	if (ctx.cr6.gt) goto loc_8275FC34;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r11,0,10,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF3FFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// oris r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 131072;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lwz r8,348(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8275f790
	if (!ctx.cr6.eq) goto loc_8275F790;
	// ld r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U64(r22.u32 + 0);
	// lwz r9,8(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r22)
	REX_STORE_U64(r22.u32 + 0, ctx.r8.u64);
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
	// bge 0x8275f77c
	if (!ctx.cr0.lt) goto loc_8275F77C;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82725e38
	ctx.lr = 0x8275F77C;
	sub_82725E38(ctx, base);
loc_8275F77C:
	// addic r11,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r11.s64 = r30.s64 + -1;
	// lwz r10,0(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 0);
	// subfe r9,r11,r30
	temp.u8 = (~ctx.r11.u32 + r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r10,r9,8,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// stw r10,0(r14)
	REX_STORE_U32(r14.u32 + 0, ctx.r10.u32);
loc_8275F790:
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// lwz r10,344(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 344);
	// rlwinm r23,r11,24,29,31
	r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r23,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r23.u32);
	// bne cr6,0x8275f7dc
	if (!ctx.cr6.eq) goto loc_8275F7DC;
	// ld r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U64(r22.u32 + 0);
	// lwz r9,8(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r22)
	REX_STORE_U64(r22.u32 + 0, ctx.r8.u64);
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
	// bge 0x8275f7d0
	if (!ctx.cr0.lt) goto loc_8275F7D0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82725e38
	ctx.lr = 0x8275F7D0;
	sub_82725E38(ctx, base);
loc_8275F7D0:
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// rlwimi r11,r30,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,0(r14)
	REX_STORE_U32(r14.u32 + 0, ctx.r11.u32);
loc_8275F7DC:
	// lwz r11,22564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22564);
	// li r18,5
	r18.s64 = 5;
	// li r16,3
	r16.s64 = 3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8275f880
	if (ctx.cr6.eq) goto loc_8275F880;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// rlwinm r10,r11,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bne cr6,0x8275f880
	if (!ctx.cr6.eq) goto loc_8275F880;
	// ld r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U64(r22.u32 + 0);
	// lwz r9,8(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r22)
	REX_STORE_U64(r22.u32 + 0, ctx.r8.u64);
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
	// bge 0x8275f828
	if (!ctx.cr0.lt) goto loc_8275F828;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82725e38
	ctx.lr = 0x8275F828;
	sub_82725E38(ctx, base);
loc_8275F828:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8275f874
	if (!ctx.cr6.eq) goto loc_8275F874;
	// ld r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U64(r22.u32 + 0);
	// lwz r9,8(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r22)
	REX_STORE_U64(r22.u32 + 0, ctx.r8.u64);
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
	// bge 0x8275f858
	if (!ctx.cr0.lt) goto loc_8275F858;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82725e38
	ctx.lr = 0x8275F858;
	sub_82725E38(ctx, base);
loc_8275F858:
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8275f86c
	if (ctx.cr6.eq) goto loc_8275F86C;
	// rlwimi r11,r18,8,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 8) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// b 0x8275f870
	goto loc_8275F870;
loc_8275F86C:
	// rlwimi r11,r16,9,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 9) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
loc_8275F870:
	// stw r11,0(r14)
	REX_STORE_U32(r14.u32 + 0, ctx.r11.u32);
loc_8275F874:
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8275fc34
	if (!ctx.cr6.eq) goto loc_8275FC34;
loc_8275F880:
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8275fc00
	if (ctx.cr6.eq) goto loc_8275FC00;
	// sth r29,14(r14)
	REX_STORE_U16(r14.u32 + 14, r29.u16);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// sth r29,16(r14)
	REX_STORE_U16(r14.u32 + 16, r29.u16);
	// sth r29,18(r14)
	REX_STORE_U16(r14.u32 + 18, r29.u16);
	// bne cr6,0x8275f91c
	if (!ctx.cr6.eq) goto loc_8275F91C;
	// stw r29,0(r21)
	REX_STORE_U32(r21.u32 + 0, r29.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r5,r20,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r17,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82767d30
	ctx.lr = 0x8275F8C4;
	sub_82767D30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8275f90c
	if (ctx.cr6.eq) goto loc_8275F90C;
	// ld r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U64(r22.u32 + 0);
	// lwz r9,8(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r22)
	REX_STORE_U64(r22.u32 + 0, ctx.r8.u64);
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
	// bge 0x8275f8f4
	if (!ctx.cr0.lt) goto loc_8275F8F4;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82725e38
	ctx.lr = 0x8275F8F4;
	sub_82725E38(ctx, base);
loc_8275F8F4:
	// extsb r11,r30
	ctx.r11.s64 = r30.s8;
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwimi r9,r10,0,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// stw r9,0(r21)
	REX_STORE_U32(r21.u32 + 0, ctx.r9.u32);
	// b 0x827608d0
	goto loc_827608D0;
loc_8275F90C:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r10,0(r21)
	REX_STORE_U32(r21.u32 + 0, ctx.r10.u32);
	// b 0x827608d0
	goto loc_827608D0;
loc_8275F91C:
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// rlwinm r24,r17,1,0,30
	r24.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r29
	r30.u64 = r29.u64;
	// rlwinm r11,r11,24,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x8275fa28
	if (!ctx.cr6.eq) goto loc_8275FA28;
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// rlwinm r23,r20,1,0,30
	r23.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r29.u32);
	// stw r29,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r29.u32);
loc_8275F94C:
	// srawi r11,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r11.s64 = r29.s32 >> 1;
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 136);
	// clrlwi r10,r29,31
	ctx.r10.u64 = r29.u32 & 0x1;
	// add r28,r11,r23
	r28.u64 = ctx.r11.u64 + r23.u64;
	// add r27,r10,r24
	r27.u64 = ctx.r10.u64 + r24.u64;
	// mullw r8,r9,r28
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r28.s32);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r26,r11,r27
	r26.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x82767d30
	ctx.lr = 0x8275F988;
	sub_82767D30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8275f9d0
	if (ctx.cr6.eq) goto loc_8275F9D0;
	// ld r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U64(r22.u32 + 0);
	// lwz r9,8(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r25,r10,1,63
	r25.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r22)
	REX_STORE_U64(r22.u32 + 0, ctx.r8.u64);
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
	// bge 0x8275f9b8
	if (!ctx.cr0.lt) goto loc_8275F9B8;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82725e38
	ctx.lr = 0x8275F9B8;
	sub_82725E38(ctx, base);
loc_8275F9B8:
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// extsb r10,r25
	ctx.r10.s64 = r25.s8;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwzx r8,r30,r11
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// rlwimi r9,r8,0,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// stwx r9,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r9.u32);
loc_8275F9D0:
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r6,r30,r11
	ctx.r6.u64 = r30.u64 + ctx.r11.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e458
	ctx.lr = 0x8275F9EC;
	sub_8274E458(ctx, base);
	// lwz r11,1772(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(r30.s32, 16, ctx.xer);
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r11,1776(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1776);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// blt cr6,0x8275f94c
	if (ctx.cr6.lt) goto loc_8275F94C;
	// lwz r23,88(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x827608c8
	goto loc_827608C8;
loc_8275FA28:
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x8275fb3c
	if (!ctx.cr6.eq) goto loc_8275FB3C;
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// rlwinm r23,r20,1,0,30
	r23.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r29.u32);
	// stw r29,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r29.u32);
loc_8275FA48:
	// srawi r11,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r11.s64 = r29.s32 >> 1;
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 136);
	// clrlwi r10,r29,31
	ctx.r10.u64 = r29.u32 & 0x1;
	// add r28,r11,r23
	r28.u64 = ctx.r11.u64 + r23.u64;
	// add r27,r10,r24
	r27.u64 = ctx.r10.u64 + r24.u64;
	// mullw r8,r9,r28
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r28.s32);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r26,r11,r27
	r26.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x82767d30
	ctx.lr = 0x8275FA84;
	sub_82767D30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8275facc
	if (ctx.cr6.eq) goto loc_8275FACC;
	// ld r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U64(r22.u32 + 0);
	// lwz r9,8(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r25,r10,1,63
	r25.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r22)
	REX_STORE_U64(r22.u32 + 0, ctx.r8.u64);
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
	// bge 0x8275fab4
	if (!ctx.cr0.lt) goto loc_8275FAB4;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82725e38
	ctx.lr = 0x8275FAB4;
	sub_82725E38(ctx, base);
loc_8275FAB4:
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// extsb r10,r25
	ctx.r10.s64 = r25.s8;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwzx r8,r30,r11
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// rlwimi r9,r8,0,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// stwx r9,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r9.u32);
loc_8275FACC:
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r6,r30,r11
	ctx.r6.u64 = r30.u64 + ctx.r11.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e458
	ctx.lr = 0x8275FAE8;
	sub_8274E458(ctx, base);
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r8,1772(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// add r7,r11,r26
	ctx.r7.u64 = ctx.r11.u64 + r26.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lhzx r6,r8,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// sthx r6,r5,r8
	REX_STORE_U16(ctx.r5.u32 + ctx.r8.u32, ctx.r6.u16);
	// lwz r4,1776(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1776);
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// lhzx r10,r4,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r10.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r9,r4
	REX_STORE_U16(ctx.r9.u32 + ctx.r4.u32, ctx.r10.u16);
	// blt cr6,0x8275fa48
	if (ctx.cr6.lt) goto loc_8275FA48;
	// lwz r23,88(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x827608c8
	goto loc_827608C8;
loc_8275FB3C:
	// stw r29,0(r21)
	REX_STORE_U32(r21.u32 + 0, r29.u32);
	// rlwinm r25,r20,1,0,30
	r25.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,4(r21)
	REX_STORE_U32(r21.u32 + 4, r29.u32);
	// stw r29,8(r21)
	REX_STORE_U32(r21.u32 + 8, r29.u32);
	// stw r29,12(r21)
	REX_STORE_U32(r21.u32 + 12, r29.u32);
	// mr r29,r21
	r29.u64 = r21.u64;
loc_8275FB54:
	// srawi r11,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r11.s64 = r30.s32 >> 1;
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// add r28,r11,r25
	r28.u64 = ctx.r11.u64 + r25.u64;
	// add r27,r10,r24
	r27.u64 = ctx.r10.u64 + r24.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82767d30
	ctx.lr = 0x8275FB80;
	sub_82767D30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8275fbc8
	if (ctx.cr6.eq) goto loc_8275FBC8;
	// ld r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U64(r22.u32 + 0);
	// lwz r9,8(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r26,r10,1,63
	r26.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r22)
	REX_STORE_U64(r22.u32 + 0, ctx.r8.u64);
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
	// bge 0x8275fbb0
	if (!ctx.cr0.lt) goto loc_8275FBB0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82725e38
	ctx.lr = 0x8275FBB0;
	sub_82725E38(ctx, base);
loc_8275FBB0:
	// extsb r11,r26
	ctx.r11.s64 = r26.s8;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwimi r9,r10,0,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// stw r9,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// b 0x8275fbd4
	goto loc_8275FBD4;
loc_8275FBC8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
loc_8275FBD4:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e458
	ctx.lr = 0x8275FBEC;
	sub_8274E458(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x8275fb54
	if (ctx.cr6.lt) goto loc_8275FB54;
	// b 0x827608c8
	goto loc_827608C8;
loc_8275FC00:
	// li r15,1
	r15.s64 = 1;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x8275fdc8
	if (!ctx.cr6.eq) goto loc_8275FDC8;
	// lwz r11,22528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22528);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,2400(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 2400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8275fc40
	if (ctx.cr6.eq) goto loc_8275FC40;
	// lwz r5,352(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 352);
	// bl 0x82717140
	ctx.lr = 0x8275FC28;
	sub_82717140(ctx, base);
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8275fc4c
	if (ctx.cr6.eq) goto loc_8275FC4C;
loc_8275FC34:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd0
	return;
loc_8275FC40:
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82768068
	ctx.lr = 0x8275FC4C;
	sub_82768068(ctx, base);
loc_8275FC4C:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,0(r21)
	REX_STORE_U32(r21.u32 + 0, ctx.r10.u32);
	// rlwinm r5,r20,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r17,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82767d30
	ctx.lr = 0x8275FC74;
	sub_82767D30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8275fcc8
	if (ctx.cr6.eq) goto loc_8275FCC8;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8275fcc8
	if (!ctx.cr6.eq) goto loc_8275FCC8;
	// ld r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U64(r22.u32 + 0);
	// lwz r9,8(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r22)
	REX_STORE_U64(r22.u32 + 0, ctx.r8.u64);
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
	// bge 0x8275fcb4
	if (!ctx.cr0.lt) goto loc_8275FCB4;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82725e38
	ctx.lr = 0x8275FCB4;
	sub_82725E38(ctx, base);
loc_8275FCB4:
	// extsb r11,r30
	ctx.r11.s64 = r30.s8;
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwimi r9,r10,0,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// stw r9,0(r21)
	REX_STORE_U32(r21.u32 + 0, ctx.r9.u32);
loc_8275FCC8:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8275fd60
	if (!ctx.cr6.eq) goto loc_8275FD60;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// oris r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 1073741824;
	// stw r10,0(r14)
	REX_STORE_U32(r14.u32 + 0, ctx.r10.u32);
	// lwz r9,280(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 280);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8275fd14
	if (ctx.cr6.eq) goto loc_8275FD14;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8275fd14
	if (ctx.cr6.eq) goto loc_8275FD14;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275f538
	ctx.lr = 0x8275FD0C;
	sub_8275F538(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8275fc34
	if (!ctx.cr6.eq) goto loc_8275FC34;
loc_8275FD14:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82760884
	if (ctx.cr6.eq) goto loc_82760884;
	// ld r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U64(r22.u32 + 0);
	// lwz r9,8(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r22)
	REX_STORE_U64(r22.u32 + 0, ctx.r8.u64);
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
	// bge 0x8275fd4c
	if (!ctx.cr0.lt) goto loc_8275FD4C;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82725e38
	ctx.lr = 0x8275FD4C;
	sub_82725E38(ctx, base);
loc_8275FD4C:
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// clrlwi r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	// rlwimi r11,r10,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,0(r14)
	REX_STORE_U32(r14.u32 + 0, ctx.r11.u32);
	// b 0x82760884
	goto loc_82760884;
loc_8275FD60:
	// lwz r10,328(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 328);
	// lwz r27,392(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8275fd80
	if (ctx.cr6.eq) goto loc_8275FD80;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// mr r26,r15
	r26.u64 = r15.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8275fd84
	if (ctx.cr6.eq) goto loc_8275FD84;
loc_8275FD80:
	// mr r26,r29
	r26.u64 = r29.u64;
loc_8275FD84:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8275fdc8
	if (ctx.cr6.eq) goto loc_8275FDC8;
	// ld r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U64(r22.u32 + 0);
	// lwz r9,8(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r22)
	REX_STORE_U64(r22.u32 + 0, ctx.r8.u64);
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
	// bge 0x8275fdb8
	if (!ctx.cr0.lt) goto loc_8275FDB8;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82725e38
	ctx.lr = 0x8275FDB8;
	sub_82725E38(ctx, base);
loc_8275FDB8:
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// clrlwi r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	// rlwimi r11,r10,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,0(r14)
	REX_STORE_U32(r14.u32 + 0, ctx.r11.u32);
loc_8275FDC8:
	// lwz r10,2164(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2164);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ld r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U64(r22.u32 + 0);
	// ori r25,r9,32768
	r25.u64 = ctx.r9.u64 | 32768;
	// lbz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// lwz r28,0(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subfic r8,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r8.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// clrldi r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// srd r6,r11,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r7.u8 & 0x7F));
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r5,r28
	ctx.r3.u64 = REX_LOAD_U16(ctx.r5.u32 + r28.u32);
	// extsh r17,r3
	r17.s64 = ctx.r3.s16;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// blt cr6,0x8275fec0
	if (ctx.cr6.lt) goto loc_8275FEC0;
	// lwz r10,8(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 8);
	// clrlwi r9,r17,28
	ctx.r9.u64 = r17.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r22)
	REX_STORE_U64(r22.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r7.u32);
	// bge cr6,0x8275feb8
	if (!ctx.cr6.lt) goto loc_8275FEB8;
loc_8275FE20:
	// lwz r10,16(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 16);
	// lwz r11,12(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8275fe4c
	if (ctx.cr6.lt) goto loc_8275FE4C;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82725d78
	ctx.lr = 0x8275FE3C;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8275fe20
	if (ctx.cr6.eq) goto loc_8275FE20;
	// srawi r17,r17,4
	ctx.xer.ca = (r17.s32 < 0) & ((r17.u32 & 0xF) != 0);
	r17.s64 = r17.s32 >> 4;
	// b 0x8275fef8
	goto loc_8275FEF8;
loc_8275FE4C:
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
	// lwz r10,8(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 8);
	// stw r3,12(r22)
	REX_STORE_U32(r22.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r22)
	ctx.r4.u64 = REX_LOAD_U64(r22.u32 + 0);
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
	// stw r10,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r10.u32);
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
	// std r7,0(r22)
	REX_STORE_U64(r22.u32 + 0, ctx.r7.u64);
loc_8275FEB8:
	// srawi r17,r17,4
	ctx.xer.ca = (r17.s32 < 0) & ((r17.u32 & 0xF) != 0);
	r17.s64 = r17.s32 >> 4;
	// b 0x8275fef8
	goto loc_8275FEF8;
loc_8275FEC0:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82725f80
	ctx.lr = 0x8275FEC8;
	sub_82725F80(ctx, base);
loc_8275FEC8:
	// ld r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U64(r22.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r30,r11,r17
	r30.u64 = ctx.r11.u64 + r17.u64;
	// bl 0x82725f80
	ctx.lr = 0x8275FEE0;
	sub_82725F80(ctx, base);
	// add r10,r30,r25
	ctx.r10.u64 = r30.u64 + r25.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r28.u32);
	// extsh r17,r8
	r17.s64 = ctx.r8.s16;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// blt cr6,0x8275fec8
	if (ctx.cr6.lt) goto loc_8275FEC8;
loc_8275FEF8:
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 20);
	// mr r19,r17
	r19.u64 = r17.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8275fc34
	if (!ctx.cr6.eq) goto loc_8275FC34;
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8275ff30
	if (ctx.cr6.eq) goto loc_8275FF30;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x8275ff30
	if (!ctx.cr6.eq) goto loc_8275FF30;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275f538
	ctx.lr = 0x8275FF28;
	sub_8275F538(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8275fc34
	if (!ctx.cr6.eq) goto loc_8275FC34;
loc_8275FF30:
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(r23.u32, 1, ctx.xer);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,0(r14)
	REX_STORE_U32(r14.u32 + 0, ctx.r11.u32);
	// bne cr6,0x827602ac
	if (!ctx.cr6.eq) goto loc_827602AC;
	// lwz r30,92(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r20,r17,0,26,27
	r20.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0x30;
	// lwz r19,292(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mr r23,r29
	r23.u64 = r29.u64;
	// mr r21,r29
	r21.u64 = r29.u64;
	// mr r18,r29
	r18.u64 = r29.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// mr r24,r29
	r24.u64 = r29.u64;
loc_8275FF64:
	// slw r11,r15,r28
	ctx.r11.u64 = r28.u8 & 0x20 ? 0 : (r15.u32 << (r28.u8 & 0x3F));
	// and r10,r11,r17
	ctx.r10.u64 = ctx.r11.u64 & r17.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8275ffb4
	if (ctx.cr6.eq) goto loc_8275FFB4;
	// lwz r11,22528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22528);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,2400(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 2400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8275ffa4
	if (ctx.cr6.eq) goto loc_8275FFA4;
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// add r5,r24,r11
	ctx.r5.u64 = r24.u64 + ctx.r11.u64;
	// bl 0x82717140
	ctx.lr = 0x8275FF94;
	sub_82717140(ctx, base);
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8275fc34
	if (!ctx.cr6.eq) goto loc_8275FC34;
	// b 0x8275ffb8
	goto loc_8275FFB8;
loc_8275FFA4:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82768068
	ctx.lr = 0x8275FFB0;
	sub_82768068(ctx, base);
	// b 0x8275ffb8
	goto loc_8275FFB8;
loc_8275FFB4:
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
loc_8275FFB8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// srawi r10,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r10.s64 = r28.s32 >> 1;
	// lwz r9,300(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// clrlwi r8,r28,31
	ctx.r8.u64 = r28.u32 & 0x1;
	// rlwinm r7,r11,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r7.u32);
	// rlwinm r9,r19,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r26,r8,r9
	r26.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82767d30
	ctx.lr = 0x8275FFFC;
	sub_82767D30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82760050
	if (ctx.cr6.eq) goto loc_82760050;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82760050
	if (!ctx.cr6.eq) goto loc_82760050;
	// ld r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U64(r22.u32 + 0);
	// lwz r9,8(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r25,r10,1,63
	r25.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r22)
	REX_STORE_U64(r22.u32 + 0, ctx.r8.u64);
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
	// bge 0x8276003c
	if (!ctx.cr0.lt) goto loc_8276003C;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82725e38
	ctx.lr = 0x8276003C;
	sub_82725E38(ctx, base);
loc_8276003C:
	// extsb r11,r25
	ctx.r11.s64 = r25.s8;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwimi r9,r10,0,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
loc_82760050:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e458
	ctx.lr = 0x82760068;
	sub_8274E458(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82760088
	if (ctx.cr6.eq) goto loc_82760088;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274ef30
	ctx.lr = 0x82760084;
	sub_8274EF30(ctx, base);
	// or r18,r3,r18
	r18.u64 = ctx.r3.u64 | r18.u64;
loc_82760088:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// slw r10,r25,r28
	ctx.r10.u64 = r28.u8 & 0x20 ? 0 : (r25.u32 << (r28.u8 & 0x3F));
	// rlwinm r9,r11,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// slw r8,r9,r28
	ctx.r8.u64 = r28.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r28.u8 & 0x3F));
	// add r21,r25,r21
	r21.u64 = r25.u64 + r21.u64;
	// or r23,r10,r23
	r23.u64 = ctx.r10.u64 | r23.u64;
	// or r20,r8,r20
	r20.u64 = ctx.r8.u64 | r20.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpwi cr6,r24,16
	ctx.cr6.compare<int32_t>(r24.s32, 16, ctx.xer);
	// blt cr6,0x8275ff64
	if (ctx.cr6.lt) goto loc_8275FF64;
	// xoris r8,r16,32768
	ctx.r8.u64 = r16.u64 ^ 2147483648;
	// lwz r10,392(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 392);
	// subf r7,r16,r21
	ctx.r7.u64 = r21.u64 - r16.u64;
	// li r9,48
	ctx.r9.s64 = 48;
	// addc r6,r7,r8
	ctx.xer.ca = ctx.r7.u32 + ctx.r8.u32 < ctx.r7.u32;
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// and r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 & ctx.r9.u64;
	// or r11,r3,r23
	ctx.r11.u64 = ctx.r3.u64 | r23.u64;
	// beq cr6,0x827600f0
	if (ctx.cr6.eq) goto loc_827600F0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// mr r27,r15
	r27.u64 = r15.u64;
	// bne cr6,0x827600f4
	if (!ctx.cr6.eq) goto loc_827600F4;
loc_827600F0:
	// mr r27,r29
	r27.u64 = r29.u64;
loc_827600F4:
	// lwz r10,328(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 328);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82760110
	if (ctx.cr6.eq) goto loc_82760110;
	// andc r11,r20,r11
	ctx.r11.u64 = r20.u64 & ~ctx.r11.u64;
	// mr r26,r15
	r26.u64 = r15.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82760114
	if (!ctx.cr6.eq) goto loc_82760114;
loc_82760110:
	// mr r26,r29
	r26.u64 = r29.u64;
loc_82760114:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x82760128
	if (!ctx.cr6.eq) goto loc_82760128;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// mr r30,r29
	r30.u64 = r29.u64;
	// beq cr6,0x8276012c
	if (ctx.cr6.eq) goto loc_8276012C;
loc_82760128:
	// mr r30,r15
	r30.u64 = r15.u64;
loc_8276012C:
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(r21.s32, 2, ctx.xer);
	// ble cr6,0x82760148
	if (!ctx.cr6.gt) goto loc_82760148;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r5,300(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274efc0
	ctx.lr = 0x82760144;
	sub_8274EFC0(ctx, base);
	// or r18,r3,r18
	r18.u64 = ctx.r3.u64 | r18.u64;
loc_82760148:
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// mr r19,r20
	r19.u64 = r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82760174
	if (ctx.cr6.eq) goto loc_82760174;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82760174
	if (ctx.cr6.eq) goto loc_82760174;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275f538
	ctx.lr = 0x8276016C;
	sub_8275F538(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8275fc34
	if (!ctx.cr6.eq) goto loc_8275FC34;
loc_82760174:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// beq cr6,0x827601b4
	if (ctx.cr6.eq) goto loc_827601B4;
	// ld r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U64(r22.u32 + 0);
	// lwz r9,8(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r22)
	REX_STORE_U64(r22.u32 + 0, ctx.r8.u64);
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
	// bge 0x827601a4
	if (!ctx.cr0.lt) goto loc_827601A4;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82725e38
	ctx.lr = 0x827601A4;
	sub_82725E38(ctx, base);
loc_827601A4:
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// clrlwi r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	// rlwimi r11,r10,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,0(r14)
	REX_STORE_U32(r14.u32 + 0, ctx.r11.u32);
loc_827601B4:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x82760228
	if (ctx.cr6.eq) goto loc_82760228;
	// ld r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U64(r22.u32 + 0);
	// lwz r9,8(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r29,r10,1,63
	r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r22)
	REX_STORE_U64(r22.u32 + 0, ctx.r8.u64);
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
	// bge 0x827601e4
	if (!ctx.cr0.lt) goto loc_827601E4;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82725e38
	ctx.lr = 0x827601E4;
	sub_82725E38(ctx, base);
loc_827601E4:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x8276021c
	if (ctx.cr6.eq) goto loc_8276021C;
	// ld r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U64(r22.u32 + 0);
	// lwz r9,8(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r22)
	REX_STORE_U64(r22.u32 + 0, ctx.r8.u64);
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
	// bge 0x82760218
	if (!ctx.cr0.lt) goto loc_82760218;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82725e38
	ctx.lr = 0x82760218;
	sub_82725E38(ctx, base);
loc_82760218:
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
loc_8276021C:
	// lwz r10,0(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 0);
	// rlwimi r10,r11,22,8,9
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xC00000) | (ctx.r10.u64 & 0xFFFFFFFFFF3FFFFF);
	// stw r10,0(r14)
	REX_STORE_U32(r14.u32 + 0, ctx.r10.u32);
loc_82760228:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x82760874
	if (ctx.cr6.eq) goto loc_82760874;
	// lwz r10,2540(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2540);
	// ld r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U64(r22.u32 + 0);
	// lbz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// lwz r29,0(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r11,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r29
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + r29.u32);
	// extsh r30,r5
	r30.s64 = ctx.r5.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x827607d0
	if (ctx.cr6.lt) goto loc_827607D0;
	// lwz r10,8(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = r30.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r22)
	REX_STORE_U64(r22.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r7.u32);
	// bge cr6,0x827607c8
	if (!ctx.cr6.lt) goto loc_827607C8;
loc_82760280:
	// lwz r10,16(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 16);
	// lwz r11,12(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8276075c
	if (ctx.cr6.lt) goto loc_8276075C;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82725d78
	ctx.lr = 0x8276029C;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82760280
	if (ctx.cr6.eq) goto loc_82760280;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82760810
	goto loc_82760810;
loc_827602AC:
	// rlwinm r10,r11,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,1280
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1280, ctx.xer);
	// bne cr6,0x8276051c
	if (!ctx.cr6.eq) goto loc_8276051C;
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// rlwinm r19,r17,0,26,30
	r19.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0x3E;
	// lwz r10,292(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mr r20,r29
	r20.u64 = r29.u64;
	// lwz r9,300(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// rlwinm r19,r19,0,30,28
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// mr r28,r29
	r28.u64 = r29.u64;
	// rlwinm r23,r10,1,0,30
	r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// rlwinm r21,r9,1,0,30
	r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r29.u32);
	// stw r29,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r29.u32);
loc_827602F0:
	// srawi r11,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r11.s64 = r28.s32 >> 1;
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// slw r9,r15,r28
	ctx.r9.u64 = r28.u8 & 0x20 ? 0 : (r15.u32 << (r28.u8 & 0x3F));
	// add r27,r11,r21
	r27.u64 = ctx.r11.u64 + r21.u64;
	// clrlwi r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	// mullw r8,r27,r10
	ctx.r8.s64 = int64_t(r27.s32) * int64_t(ctx.r10.s32);
	// add r26,r11,r23
	r26.u64 = ctx.r11.u64 + r23.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// and r7,r9,r17
	ctx.r7.u64 = ctx.r9.u64 & r17.u64;
	// add r24,r11,r26
	r24.u64 = ctx.r11.u64 + r26.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8276035c
	if (ctx.cr6.eq) goto loc_8276035C;
	// lwz r11,22528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22528);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,2400(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 2400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// beq cr6,0x82760344
	if (ctx.cr6.eq) goto loc_82760344;
	// add r5,r30,r11
	ctx.r5.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x82717140
	ctx.lr = 0x82760340;
	sub_82717140(ctx, base);
	// b 0x82760350
	goto loc_82760350;
loc_82760344:
	// li r5,8
	ctx.r5.s64 = 8;
	// add r6,r30,r11
	ctx.r6.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x82768068
	ctx.lr = 0x82760350;
	sub_82768068(ctx, base);
loc_82760350:
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8275fc34
	if (!ctx.cr6.eq) goto loc_8275FC34;
loc_8276035C:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82767d30
	ctx.lr = 0x82760378;
	sub_82767D30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827603d4
	if (ctx.cr6.eq) goto loc_827603D4;
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x827603d4
	if (!ctx.cr6.eq) goto loc_827603D4;
	// ld r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U64(r22.u32 + 0);
	// lwz r9,8(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r25,r10,1,63
	r25.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r22)
	REX_STORE_U64(r22.u32 + 0, ctx.r8.u64);
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
	// bge 0x827603bc
	if (!ctx.cr0.lt) goto loc_827603BC;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82725e38
	ctx.lr = 0x827603BC;
	sub_82725E38(ctx, base);
loc_827603BC:
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// extsb r10,r25
	ctx.r10.s64 = r25.s8;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwzx r8,r30,r11
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// rlwimi r9,r8,0,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// stwx r9,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r9.u32);
loc_827603D4:
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// add r6,r30,r11
	ctx.r6.u64 = r30.u64 + ctx.r11.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e458
	ctx.lr = 0x827603F0;
	sub_8274E458(ctx, base);
	// lwz r11,1772(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// rlwinm r10,r24,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r11,1776(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1776);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// beq cr6,0x8276043c
	if (ctx.cr6.eq) goto loc_8276043C;
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// slw r10,r16,r28
	ctx.r10.u64 = r28.u8 & 0x20 ? 0 : (r16.u32 << (r28.u8 & 0x3F));
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// or r20,r10,r20
	r20.u64 = ctx.r10.u64 | r20.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ori r8,r9,4
	ctx.r8.u64 = ctx.r9.u64 | 4;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_8276043C:
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// rlwinm r9,r10,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(r30.s32, 16, ctx.xer);
	// slw r8,r9,r28
	ctx.r8.u64 = r28.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r28.u8 & 0x3F));
	// or r19,r8,r19
	r19.u64 = ctx.r8.u64 | r19.u64;
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// blt cr6,0x827602f0
	if (ctx.cr6.lt) goto loc_827602F0;
	// cmpwi cr6,r20,15
	ctx.cr6.compare<int32_t>(r20.s32, 15, ctx.xer);
	// bne cr6,0x8276046c
	if (!ctx.cr6.eq) goto loc_8276046C;
	// li r20,63
	r20.s64 = 63;
loc_8276046C:
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82760488
	if (ctx.cr6.eq) goto loc_82760488;
	// andc r11,r19,r20
	ctx.r11.u64 = r19.u64 & ~r20.u64;
	// mr r26,r15
	r26.u64 = r15.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8276048c
	if (!ctx.cr6.eq) goto loc_8276048C;
loc_82760488:
	// mr r26,r29
	r26.u64 = r29.u64;
loc_8276048C:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x827604a0
	if (!ctx.cr6.eq) goto loc_827604A0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// beq cr6,0x827604a4
	if (ctx.cr6.eq) goto loc_827604A4;
loc_827604A0:
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
loc_827604A4:
	// lwz r10,280(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 280);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827604d8
	if (ctx.cr6.eq) goto loc_827604D8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827604d8
	if (ctx.cr6.eq) goto loc_827604D8;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275f538
	ctx.lr = 0x827604C4;
	sub_8275F538(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827604d8
	if (ctx.cr6.eq) goto loc_827604D8;
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd0
	return;
loc_827604D8:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq cr6,0x82760228
	if (ctx.cr6.eq) goto loc_82760228;
	// ld r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U64(r22.u32 + 0);
	// lwz r9,8(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r22)
	REX_STORE_U64(r22.u32 + 0, ctx.r8.u64);
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
	// bge 0x82760508
	if (!ctx.cr0.lt) goto loc_82760508;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82725e38
	ctx.lr = 0x82760508;
	sub_82725E38(ctx, base);
loc_82760508:
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// clrlwi r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	// rlwimi r11,r10,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,0(r14)
	REX_STORE_U32(r14.u32 + 0, ctx.r11.u32);
	// b 0x82760228
	goto loc_82760228;
loc_8276051C:
	// rlwinm r11,r11,0,21,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r11,1536
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1536, ctx.xer);
	// bne cr6,0x827601b4
	if (!ctx.cr6.eq) goto loc_827601B4;
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// rlwinm r19,r17,0,26,29
	r19.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0x3C;
	// lwz r10,292(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mr r20,r29
	r20.u64 = r29.u64;
	// lwz r9,300(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r28,r29
	r28.u64 = r29.u64;
	// rlwinm r23,r10,1,0,30
	r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r21,r9,1,0,30
	r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r29.u32);
	// stw r29,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r29.u32);
loc_8276055C:
	// srawi r11,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r11.s64 = r28.s32 >> 1;
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// slw r9,r15,r28
	ctx.r9.u64 = r28.u8 & 0x20 ? 0 : (r15.u32 << (r28.u8 & 0x3F));
	// add r27,r11,r21
	r27.u64 = ctx.r11.u64 + r21.u64;
	// clrlwi r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	// mullw r8,r27,r10
	ctx.r8.s64 = int64_t(r27.s32) * int64_t(ctx.r10.s32);
	// add r26,r11,r23
	r26.u64 = ctx.r11.u64 + r23.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// and r7,r9,r17
	ctx.r7.u64 = ctx.r9.u64 & r17.u64;
	// add r25,r11,r26
	r25.u64 = ctx.r11.u64 + r26.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x827605c8
	if (ctx.cr6.eq) goto loc_827605C8;
	// lwz r11,22528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22528);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,2400(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 2400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// beq cr6,0x827605b0
	if (ctx.cr6.eq) goto loc_827605B0;
	// add r5,r30,r11
	ctx.r5.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x82717140
	ctx.lr = 0x827605AC;
	sub_82717140(ctx, base);
	// b 0x827605bc
	goto loc_827605BC;
loc_827605B0:
	// li r5,8
	ctx.r5.s64 = 8;
	// add r6,r30,r11
	ctx.r6.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x82768068
	ctx.lr = 0x827605BC;
	sub_82768068(ctx, base);
loc_827605BC:
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8275fc34
	if (!ctx.cr6.eq) goto loc_8275FC34;
loc_827605C8:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82767d30
	ctx.lr = 0x827605E4;
	sub_82767D30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82760640
	if (ctx.cr6.eq) goto loc_82760640;
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82760640
	if (!ctx.cr6.eq) goto loc_82760640;
	// ld r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U64(r22.u32 + 0);
	// lwz r9,8(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r24,r10,1,63
	r24.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r22)
	REX_STORE_U64(r22.u32 + 0, ctx.r8.u64);
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
	// bge 0x82760628
	if (!ctx.cr0.lt) goto loc_82760628;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82725e38
	ctx.lr = 0x82760628;
	sub_82725E38(ctx, base);
loc_82760628:
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// extsb r10,r24
	ctx.r10.s64 = r24.s8;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwzx r8,r30,r11
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// rlwimi r9,r8,0,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// stwx r9,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r9.u32);
loc_82760640:
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// add r6,r30,r11
	ctx.r6.u64 = r30.u64 + ctx.r11.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e458
	ctx.lr = 0x8276065C;
	sub_8274E458(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r10,1772(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// rlwinm r9,r25,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 + r25.u64;
	// lhzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r7,r6,r10
	REX_STORE_U16(ctx.r6.u32 + ctx.r10.u32, ctx.r7.u16);
	// lwz r5,136(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + r25.u64;
	// lwz r4,1776(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1776);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r4,r9
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r9.u32);
	// sthx r10,r11,r4
	REX_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u16);
	// beq cr6,0x827606c0
	if (ctx.cr6.eq) goto loc_827606C0;
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// slw r10,r18,r28
	ctx.r10.u64 = r28.u8 & 0x20 ? 0 : (r18.u32 << (r28.u8 & 0x3F));
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// or r20,r10,r20
	r20.u64 = ctx.r10.u64 | r20.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// ori r8,r9,4
	ctx.r8.u64 = ctx.r9.u64 | 4;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_827606C0:
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// rlwinm r9,r10,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// slw r8,r9,r28
	ctx.r8.u64 = r28.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r28.u8 & 0x3F));
	// or r19,r8,r19
	r19.u64 = ctx.r8.u64 | r19.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// blt cr6,0x8276055c
	if (ctx.cr6.lt) goto loc_8276055C;
	// cmpwi cr6,r20,15
	ctx.cr6.compare<int32_t>(r20.s32, 15, ctx.xer);
	// bne cr6,0x827606f0
	if (!ctx.cr6.eq) goto loc_827606F0;
	// li r20,63
	r20.s64 = 63;
loc_827606F0:
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8276070c
	if (ctx.cr6.eq) goto loc_8276070C;
	// andc r11,r19,r20
	ctx.r11.u64 = r19.u64 & ~r20.u64;
	// mr r26,r15
	r26.u64 = r15.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82760710
	if (!ctx.cr6.eq) goto loc_82760710;
loc_8276070C:
	// mr r26,r29
	r26.u64 = r29.u64;
loc_82760710:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x82760724
	if (!ctx.cr6.eq) goto loc_82760724;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// beq cr6,0x82760728
	if (ctx.cr6.eq) goto loc_82760728;
loc_82760724:
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
loc_82760728:
	// lwz r10,280(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 280);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827604d8
	if (ctx.cr6.eq) goto loc_827604D8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827604d8
	if (ctx.cr6.eq) goto loc_827604D8;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275f538
	ctx.lr = 0x82760748;
	sub_8275F538(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827604d8
	if (ctx.cr6.eq) goto loc_827604D8;
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd0
	return;
loc_8276075C:
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
	// lwz r10,8(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 8);
	// stw r3,12(r22)
	REX_STORE_U32(r22.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r22)
	ctx.r9.u64 = REX_LOAD_U64(r22.u32 + 0);
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
	// stw r10,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r10.u32);
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
	// std r5,0(r22)
	REX_STORE_U64(r22.u32 + 0, ctx.r5.u64);
loc_827607C8:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82760810
	goto loc_82760810;
loc_827607D0:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82725f80
	ctx.lr = 0x827607D8;
	sub_82725F80(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r28,r11,32768
	r28.u64 = ctx.r11.u64 | 32768;
loc_827607E0:
	// ld r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U64(r22.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x82725f80
	ctx.lr = 0x827607F8;
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
	// blt cr6,0x827607e0
	if (ctx.cr6.lt) goto loc_827607E0;
loc_82760810:
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8275fc34
	if (!ctx.cr6.eq) goto loc_8275FC34;
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,0(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 0);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// subfc r8,r11,r30
	ctx.xer.ca = r30.u32 >= ctx.r11.u32;
	ctx.r8.u64 = r30.u64 - ctx.r11.u64;
	// eqv r7,r11,r30
	ctx.r7.u64 = ~(ctx.r11.u64 ^ r30.u64);
	// addi r11,r9,-29808
	ctx.r11.s64 = ctx.r9.s64 + -29808;
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r4,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r4.s64 = temp.s64;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// clrlwi r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	// rlwimi r10,r9,28,3,3
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x10000000) | (ctx.r10.u64 & 0xFFFFFFFFEFFFFFFF);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r10,0(r14)
	REX_STORE_U32(r14.u32 + 0, ctx.r10.u32);
	// lwzx r7,r5,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// rlwimi r8,r7,24,5,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0x7000000) | (ctx.r8.u64 & 0xFFFFFFFFF8FFFFFF);
	// stw r8,0(r14)
	REX_STORE_U32(r14.u32 + 0, ctx.r8.u32);
	// lwzx r6,r5,r3
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwimi r5,r6,20,10,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 20) & 0x300000) | (ctx.r5.u64 & 0xFFFFFFFFFFCFFFFF);
	// rlwinm r4,r5,0,5,3
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r4,0(r14)
	REX_STORE_U32(r14.u32 + 0, ctx.r4.u32);
loc_82760874:
	// lwz r23,88(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r17,292(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r20,300(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r21,92(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_82760884:
	// srawi r11,r19,1
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x1) != 0);
	ctx.r11.s64 = r19.s32 >> 1;
	// clrlwi r10,r19,31
	ctx.r10.u64 = r19.u32 & 0x1;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stb r10,14(r14)
	REX_STORE_U8(r14.u32 + 14, ctx.r10.u8);
	// stb r9,15(r14)
	REX_STORE_U8(r14.u32 + 15, ctx.r9.u8);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stb r8,16(r14)
	REX_STORE_U8(r14.u32 + 16, ctx.r8.u8);
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stb r7,17(r14)
	REX_STORE_U8(r14.u32 + 17, ctx.r7.u8);
	// srawi r6,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 1;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r4,r6,31
	ctx.r4.u64 = ctx.r6.u32 & 0x1;
	// stb r5,18(r14)
	REX_STORE_U8(r14.u32 + 18, ctx.r5.u8);
	// stb r4,19(r14)
	REX_STORE_U8(r14.u32 + 19, ctx.r4.u8);
loc_827608C8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x82760930
	if (!ctx.cr6.eq) goto loc_82760930;
loc_827608D0:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// rlwinm r5,r20,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r17,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e458
	ctx.lr = 0x827608E8;
	sub_8274E458(ctx, base);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r11,1772(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,1776(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1776);
	// mullw r10,r9,r20
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(r20.s32);
	// add r7,r10,r17
	ctx.r7.u64 = ctx.r10.u64 + r17.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// sthu r5,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	ctx.r11.u32 = ea;
	// sthu r4,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r4.u16);
	ctx.r10.u32 = ea;
	// sthux r5,r11,r9
	ea = ctx.r11.u32 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	ctx.r11.u32 = ea;
	// sthux r4,r10,r9
	ea = ctx.r10.u32 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r4.u16);
	ctx.r10.u32 = ea;
	// sth r5,-2(r11)
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r5.u16);
	// sth r4,-2(r10)
	REX_STORE_U16(ctx.r10.u32 + -2, ctx.r4.u16);
loc_82760930:
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 20);
	// li r10,4
	ctx.r10.s64 = 4;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_827D2A00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x827D2A08;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 52);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lhz r10,50(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r31,r11,31,1,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r30,1320(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1320);
	// rlwinm r28,r10,31,1,31
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mullw r11,r28,r31
	ctx.r11.s64 = int64_t(r28.s32) * int64_t(r31.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x826a2e60
	ctx.lr = 0x827D2A40;
	sub_826A2E60(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x827d2a7c
	if (ctx.cr6.eq) goto loc_827D2A7C;
	// addi r11,r30,-6
	ctx.r11.s64 = r30.s64 + -6;
	// addi r9,r29,-24
	ctx.r9.s64 = r29.s64 + -24;
loc_827D2A50:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x827d2a74
	if (ctx.cr6.eq) goto loc_827D2A74;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
loc_827D2A5C:
	// lhzu r10,24(r9)
	ea = 24 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// lbz r7,6(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// rotlwi r6,r10,7
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 7);
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stbu r5,6(r11)
	ea = 6 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x827d2a5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827D2A5C;
loc_827D2A74:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x827d2a50
	if (!ctx.cr0.eq) goto loc_827D2A50;
loc_827D2A7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_827E8A00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lhz r10,52(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 52);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lhz r9,50(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 50);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r10,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r9,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r11,1316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1316);
	// beq cr6,0x827e8ab4
	if (ctx.cr6.eq) goto loc_827E8AB4;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-28184
	ctx.r7.s64 = ctx.r10.s64 + -28184;
loc_827E8A34:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x827e8aa8
	if (ctx.cr6.eq) goto loc_827E8AA8;
	// cntlzw r9,r5
	ctx.r9.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// rlwinm r8,r9,28,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x2;
loc_827E8A4C:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r12,3855
	ctx.r12.s64 = 3855;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// oris r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 252641280;
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ldx r3,r9,r7
	ctx.r3.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r7.u32);
	// and r9,r3,r12
	ctx.r9.u64 = ctx.r3.u64 & ctx.r12.u64;
	// rldicl r3,r9,56,8
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r9,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// rldicl r31,r3,56,8
	r31.u64 = __builtin_rotateleft64(ctx.r3.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r3,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r3.u8);
	// rldicl r9,r31,56,8
	ctx.r9.u64 = __builtin_rotateleft64(r31.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r31,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, r31.u8);
	// rldicl r3,r9,56,8
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r9,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// rldicl r31,r3,56,8
	r31.u64 = __builtin_rotateleft64(ctx.r3.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r3,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r3.u8);
	// stbu r31,6(r11)
	ea = 6 + ctx.r11.u32;
	REX_STORE_U8(ea, r31.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x827e8a4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827E8A4C;
loc_827E8AA8:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x827e8a34
	if (ctx.cr6.lt) goto loc_827E8A34;
loc_827E8AB4:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

