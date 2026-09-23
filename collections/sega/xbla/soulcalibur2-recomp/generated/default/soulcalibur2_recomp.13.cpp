#include "soulcalibur2_funcs.13.h"

DEFINE_REX_FUNC(sub_820E0590) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4f08
	ctx.lr = 0x820E05A0;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// lfs f13,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f7,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f4,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f4,f9
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// lfs f8,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f31,f3,f7
	f31.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// lfs f5,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f30,36(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 36);
	f30.f64 = double(temp.f32);
	// fmuls f28,f3,f5
	f28.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f26,f30,f13
	f26.f64 = double(float(f30.f64 * ctx.f13.f64));
	// lfs f1,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f24,f30,f7
	f24.f64 = double(float(f30.f64 * ctx.f7.f64));
	// fmuls f29,f1,f11
	f29.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// lfs f25,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	f25.f64 = double(temp.f32);
	// fmuls f30,f30,f5
	f30.f64 = double(float(f30.f64 * ctx.f5.f64));
	// lfs f23,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	f23.f64 = double(temp.f32);
	// lfs f21,32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	f21.f64 = double(temp.f32);
	// fmadds f10,f9,f11,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f10.f64)));
	// lfs f27,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	f27.f64 = double(temp.f32);
	// lfs f22,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	f22.f64 = double(temp.f32);
	// fmadds f2,f23,f0,f2
	ctx.f2.f64 = double(float(std::fma(f23.f64, ctx.f0.f64, ctx.f2.f64)));
	// fmadds f31,f1,f25,f31
	f31.f64 = double(float(std::fma(ctx.f1.f64, f25.f64, f31.f64)));
	// lfs f20,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f20.f64 = double(temp.f32);
	// fmadds f7,f7,f12,f6
	ctx.f7.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f6.f64)));
	// lfs f6,40(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f1,f1,f4,f28
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f4.f64, f28.f64)));
	// lfs f19,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	f19.f64 = double(temp.f32);
	// fmadds f11,f21,f11,f26
	ctx.f11.f64 = double(float(std::fma(f21.f64, ctx.f11.f64, f26.f64)));
	// lfs f18,44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	f18.f64 = double(temp.f32);
	// fmadds f24,f21,f25,f24
	f24.f64 = double(float(std::fma(f21.f64, f25.f64, f24.f64)));
	// lfs f17,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	f17.f64 = double(temp.f32);
	// fmadds f29,f22,f27,f29
	f29.f64 = double(float(std::fma(f22.f64, f27.f64, f29.f64)));
	// lfs f28,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	f28.f64 = double(temp.f32);
	// fmadds f4,f21,f4,f30
	ctx.f4.f64 = double(float(std::fma(f21.f64, ctx.f4.f64, f30.f64)));
	// lfs f26,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	f26.f64 = double(temp.f32);
	// fmadds f0,f0,f27,f10
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f27.f64, ctx.f10.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f16,60(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 60);
	f16.f64 = double(temp.f32);
	// fmadds f12,f5,f12,f2
	ctx.f12.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f2.f64)));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f20,92(r1)
	temp.f32 = float(f20.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmadds f10,f25,f9,f7
	ctx.f10.f64 = double(float(std::fma(f25.f64, ctx.f9.f64, ctx.f7.f64)));
	// stfs f19,108(r1)
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f9,f22,f8,f31
	ctx.f9.f64 = double(float(std::fma(f22.f64, ctx.f8.f64, f31.f64)));
	// stfs f18,124(r1)
	temp.f32 = float(f18.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmadds f0,f6,f27,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f6.f64, f27.f64, ctx.f11.f64)));
	// stfs f17,128(r1)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f7,f22,f23,f1
	ctx.f7.f64 = double(float(std::fma(f22.f64, f23.f64, ctx.f1.f64)));
	// stfs f28,132(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmadds f13,f3,f13,f29
	ctx.f13.f64 = double(float(std::fma(ctx.f3.f64, ctx.f13.f64, f29.f64)));
	// stfs f26,136(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmadds f11,f6,f8,f24
	ctx.f11.f64 = double(float(std::fma(ctx.f6.f64, ctx.f8.f64, f24.f64)));
	// stfs f16,140(r1)
	temp.f32 = float(f16.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmadds f12,f6,f23,f4
	ctx.f12.f64 = double(float(std::fma(ctx.f6.f64, f23.f64, ctx.f4.f64)));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x820E06C8;
	sub_822D4FA0(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x822d4f54
	ctx.lr = 0x820E06D4;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F2628) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x820F2630;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// addi r30,r11,32336
	r30.s64 = ctx.r11.s64 + 32336;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f0f60
	ctx.lr = 0x820F2644;
	sub_820F0F60(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r10,432
	ctx.r6.s64 = ctx.r10.s64 + 432;
	// lfs f13,2352(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2352);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r11,-28232
	ctx.r5.s64 = ctx.r11.s64 + -28232;
	// li r31,0
	r31.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,2000(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,17220(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 17220);
	ctx.f12.f64 = double(temp.f32);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stfs f13,268(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 268, temp.u32);
	// stw r31,264(r6)
	REX_STORE_U32(ctx.r6.u32 + 264, r31.u32);
	// stfs f0,276(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 276, temp.u32);
	// stw r31,60(r5)
	REX_STORE_U32(ctx.r5.u32 + 60, r31.u32);
	// stfs f12,280(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 280, temp.u32);
	// stw r9,704(r6)
	REX_STORE_U32(ctx.r6.u32 + 704, ctx.r9.u32);
	// stfs f0,284(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 284, temp.u32);
	// stw r31,708(r6)
	REX_STORE_U32(ctx.r6.u32 + 708, r31.u32);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// addi r29,r11,-7072
	r29.s64 = ctx.r11.s64 + -7072;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820fef30
	ctx.lr = 0x820F26B0;
	sub_820FEF30(ctx, base);
	// addis r11,r29,1
	ctx.r11.s64 = r29.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x820fef30
	ctx.lr = 0x820F26BC;
	sub_820FEF30(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// lis r8,-32170
	ctx.r8.s64 = -2108293120;
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// addi r8,r8,-28276
	ctx.r8.s64 = ctx.r8.s64 + -28276;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r31,-28256(r9)
	REX_STORE_U32(ctx.r9.u32 + -28256, r31.u32);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// lwz r11,4892(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4892);
	// stw r31,160(r11)
	REX_STORE_U32(ctx.r11.u32 + 160, r31.u32);
	// lwz r11,4892(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4892);
	// stw r31,148(r11)
	REX_STORE_U32(ctx.r11.u32 + 148, r31.u32);
	// lwz r11,4892(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4892);
	// stw r31,140(r11)
	REX_STORE_U32(ctx.r11.u32 + 140, r31.u32);
	// lwz r11,4892(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4892);
	// stw r31,140(r11)
	REX_STORE_U32(ctx.r11.u32 + 140, r31.u32);
	// lwz r11,4892(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4892);
	// stw r31,160(r11)
	REX_STORE_U32(ctx.r11.u32 + 160, r31.u32);
	// stw r31,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, r31.u32);
	// stw r31,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_820F8D58) {
	REX_FUNC_PROLOGUE();
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,1856(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1856);
	// lwzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820f8d88
	if (ctx.cr6.eq) goto loc_820F8D88;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_820F8D88:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r5,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// lbz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// xor r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r5.u64;
	// stw r5,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r5.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// and r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ctx.r5.u64;
	// stw r10,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r10.u32);
	// lwz r11,1856(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1856);
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FA0D0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4220(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4220);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FA0E8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4232(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4232);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FA248) {
	REX_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lhz r11,592(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 592);
	// cmplwi cr6,r11,52
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 52, ctx.xer);
	// bgt cr6,0x820fa2b8
	if (ctx.cr6.gt) goto loc_820FA2B8;
	// cmplwi cr6,r11,51
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 51, ctx.xer);
	// bge cr6,0x820fa298
	if (!ctx.cr6.lt) goto loc_820FA298;
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bgt cr6,0x820fa2a0
	if (ctx.cr6.gt) goto loc_820FA2A0;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x820fa298
	if (!ctx.cr6.lt) goto loc_820FA298;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x820fa30c
	if (ctx.cr6.lt) goto loc_820FA30C;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// ble cr6,0x820fa298
	if (!ctx.cr6.gt) goto loc_820FA298;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// ble cr6,0x820fa30c
	if (!ctx.cr6.gt) goto loc_820FA30C;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// ble cr6,0x820fa298
	if (!ctx.cr6.gt) goto loc_820FA298;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
loc_820FA294:
	// bne cr6,0x820fa30c
	if (!ctx.cr6.eq) goto loc_820FA30C;
loc_820FA298:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820FA2A0:
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// blt cr6,0x820fa30c
	if (ctx.cr6.lt) goto loc_820FA30C;
	// cmplwi cr6,r11,43
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43, ctx.xer);
	// ble cr6,0x820fa298
	if (!ctx.cr6.gt) goto loc_820FA298;
	// cmplwi cr6,r11,49
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49, ctx.xer);
	// b 0x820fa294
	goto loc_820FA294;
loc_820FA2B8:
	// cmplwi cr6,r11,80
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 80, ctx.xer);
	// bgt cr6,0x820fa2f4
	if (ctx.cr6.gt) goto loc_820FA2F4;
	// beq cr6,0x820fa298
	if (ctx.cr6.eq) goto loc_820FA298;
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// blt cr6,0x820fa30c
	if (ctx.cr6.lt) goto loc_820FA30C;
	// cmplwi cr6,r11,61
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61, ctx.xer);
	// ble cr6,0x820fa298
	if (!ctx.cr6.gt) goto loc_820FA298;
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// ble cr6,0x820fa30c
	if (!ctx.cr6.gt) goto loc_820FA30C;
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// ble cr6,0x820fa298
	if (!ctx.cr6.gt) goto loc_820FA298;
	// cmplwi cr6,r11,71
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 71, ctx.xer);
	// ble cr6,0x820fa30c
	if (!ctx.cr6.gt) goto loc_820FA30C;
	// cmplwi cr6,r11,73
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 73, ctx.xer);
	// b 0x820fa308
	goto loc_820FA308;
loc_820FA2F4:
	// cmplwi cr6,r11,88
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 88, ctx.xer);
	// beq cr6,0x820fa298
	if (ctx.cr6.eq) goto loc_820FA298;
	// cmplwi cr6,r11,103
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 103, ctx.xer);
	// ble cr6,0x820fa30c
	if (!ctx.cr6.gt) goto loc_820FA30C;
	// cmplwi cr6,r11,106
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 106, ctx.xer);
loc_820FA308:
	// ble cr6,0x820fa298
	if (!ctx.cr6.gt) goto loc_820FA298;
loc_820FA30C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FD6D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x820FD6D8;
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
	// blt cr6,0x820fd804
	if (ctx.cr6.lt) goto loc_820FD804;
	// beq cr6,0x820fd7d8
	if (ctx.cr6.eq) goto loc_820FD7D8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x820fd750
	if (ctx.cr6.lt) goto loc_820FD750;
	// bne cr6,0x820fd858
	if (!ctx.cr6.eq) goto loc_820FD858;
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FD710;
	sub_820F8DB8(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820fd730
	if (!ctx.cr0.eq) goto loc_820FD730;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FD72C;
	sub_820F8D58(ctx, base);
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
loc_820FD730:
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FD740;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820fd858
	if (ctx.cr0.eq) goto loc_820FD858;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// b 0x820fd7c4
	goto loc_820FD7C4;
loc_820FD750:
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FD764;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820fd784
	if (ctx.cr0.eq) goto loc_820FD784;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FD77C;
	sub_820F8D58(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_820FD784:
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FD794;
	sub_820F8DB8(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820fd7b4
	if (ctx.cr0.eq) goto loc_820FD7B4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FD7B0;
	sub_820F8D58(ctx, base);
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
loc_820FD7B4:
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r11,590(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 590);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fd858
	if (!ctx.cr0.eq) goto loc_820FD858;
loc_820FD7C4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FD7D0;
	sub_820F8D58(ctx, base);
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
	// b 0x820fd858
	goto loc_820FD858;
loc_820FD7D8:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x820fed80
	ctx.lr = 0x820FD7E0;
	sub_820FED80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// li r5,576
	ctx.r5.s64 = 576;
	// beq 0x820fd7f8
	if (ctx.cr0.eq) goto loc_820FD7F8;
	// li r5,320
	ctx.r5.s64 = 320;
loc_820FD7F8:
	// bl 0x820f8d58
	ctx.lr = 0x820FD7FC;
	sub_820F8D58(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x820fd854
	goto loc_820FD854;
loc_820FD804:
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FD818;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820fd840
	if (!ctx.cr0.eq) goto loc_820FD840;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r11,586(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 586);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820fd840
	if (ctx.cr0.eq) goto loc_820FD840;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FD83C;
	sub_820F8D58(ctx, base);
	// b 0x820fd858
	goto loc_820FD858;
loc_820FD840:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FD850;
	sub_820F8D58(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FD854:
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_820FD858:
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lbz r11,176(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 176);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fd8a4
	if (!ctx.cr0.eq) goto loc_820FD8A4;
	// lbz r11,177(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 177);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fd8a4
	if (!ctx.cr0.eq) goto loc_820FD8A4;
	// lbz r11,178(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 178);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fd8a4
	if (!ctx.cr0.eq) goto loc_820FD8A4;
	// lbz r11,179(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 179);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fd8a4
	if (!ctx.cr0.eq) goto loc_820FD8A4;
	// lbz r11,175(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 175);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fd8a4
	if (!ctx.cr0.eq) goto loc_820FD8A4;
	// lbz r11,180(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 180);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820fd8c0
	if (ctx.cr0.eq) goto loc_820FD8C0;
loc_820FD8A4:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lhz r11,588(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 588);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820fd8c0
	if (ctx.cr6.eq) goto loc_820FD8C0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x820f8d58
	ctx.lr = 0x820FD8C0;
	sub_820F8D58(ctx, base);
loc_820FD8C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82107748) {
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
	ctx.lr = 0x8210775C;
	sub_82106650(ctx, base);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,20
	ctx.r11.s64 = 20;
	// addi r31,r10,22960
	r31.s64 = ctx.r10.s64 + 22960;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x82106c48
	ctx.lr = 0x82107778;
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
	ctx.lr = 0x8210778C;
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

DEFINE_REX_FUNC(sub_82109668) {
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
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r11,-7072
	ctx.r7.s64 = ctx.r11.s64 + -7072;
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,620(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 620, temp.u32);
	// stfs f13,632(r8)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + 632, temp.u32);
	// bl 0x821092c8
	ctx.lr = 0x821096A4;
	sub_821092C8(ctx, base);
	// addis r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 65536;
	// addi r3,r8,328
	ctx.r3.s64 = ctx.r8.s64 + 328;
	// addi r4,r11,3696
	ctx.r4.s64 = ctx.r11.s64 + 3696;
	// bl 0x821092c8
	ctx.lr = 0x821096B4;
	sub_821092C8(ctx, base);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,22960
	ctx.r8.s64 = ctx.r10.s64 + 22960;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,44(r8)
	REX_STORE_U32(ctx.r8.u32 + 44, ctx.r11.u32);
	// stw r10,36(r8)
	REX_STORE_U32(ctx.r8.u32 + 36, ctx.r10.u32);
	// stw r9,672(r8)
	REX_STORE_U32(ctx.r8.u32 + 672, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210E430) {
	REX_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8210e468
	if (!ctx.cr6.gt) goto loc_8210E468;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8210E444:
	// lwz r10,116(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8210e460
	if (ctx.cr6.eq) goto loc_8210E460;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r10,92(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
	// stb r9,76(r10)
	REX_STORE_U8(ctx.r10.u32 + 76, ctx.r9.u8);
loc_8210E460:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8210e444
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8210E444;
loc_8210E468:
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stb r9,132(r11)
	REX_STORE_U8(ctx.r11.u32 + 132, ctx.r9.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210F350) {
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
	ctx.lr = 0x8210F358;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,31920
	ctx.r11.s64 = ctx.r11.s64 + 31920;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8210f4d8
	if (ctx.cr6.eq) goto loc_8210F4D8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16232(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16232);
	ctx.f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f1,112(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stfs f1,116(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f1,120(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f5,26632(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 26632);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16036(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16036);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,27844(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 27844);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,28856(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28856);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x821e86d8
	ctx.lr = 0x8210F3BC;
	sub_821E86D8(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x8210F3D4;
	sub_820E68B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// bl 0x820e68b8
	ctx.lr = 0x8210F3E8;
	sub_820E68B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,20
	ctx.r3.u64 = ctx.r3.u64 | 20;
	// bl 0x820e68b8
	ctx.lr = 0x8210F3FC;
	sub_820E68B8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,19
	ctx.r3.u64 = ctx.r3.u64 | 19;
	// bl 0x820e68b8
	ctx.lr = 0x8210F410;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,28824
	ctx.r5.s64 = ctx.r11.s64 + 28824;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// bl 0x821eb1a0
	ctx.lr = 0x8210F434;
	sub_821EB1A0(ctx, base);
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// bl 0x820e68b8
	ctx.lr = 0x8210F444;
	sub_820E68B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// bl 0x820e68b8
	ctx.lr = 0x8210F458;
	sub_820E68B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,20
	ctx.r3.u64 = ctx.r3.u64 | 20;
	// bl 0x820e68b8
	ctx.lr = 0x8210F46C;
	sub_820E68B8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,19
	ctx.r3.u64 = ctx.r3.u64 | 19;
	// bl 0x820e68b8
	ctx.lr = 0x8210F480;
	sub_820E68B8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lfs f0,26792(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 26792);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,28764
	ctx.r3.s64 = ctx.r7.s64 + 28764;
	// lfd f3,28816(r11)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r11.u32 + 28816);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfd f2,28808(r10)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r10.u32 + 28808);
	// stfd f3,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// li r7,-1
	ctx.r7.s64 = -1;
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// bl 0x821eacb0
	ctx.lr = 0x8210F4D8;
	sub_821EACB0(ctx, base);
loc_8210F4D8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82114B78) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// mulli r11,r3,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(12));
	// addi r10,r10,23968
	ctx.r10.s64 = ctx.r10.s64 + 23968;
	// li r5,12
	ctx.r5.s64 = 12;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821ff870
	sub_821FF870(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821155C8) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,7840(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7840);
	// lfs f0,16232(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821156e8
	if (!ctx.cr6.gt) goto loc_821156E8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,188(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,2012(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2012);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x821156e8
	if (!ctx.cr6.lt) goto loc_821156E8;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r11,r11,-7072
	ctx.r11.s64 = ctx.r11.s64 + -7072;
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82115700
	if (ctx.cr6.eq) goto loc_82115700;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,3812
	ctx.r10.u64 = ctx.r10.u64 | 3812;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82115700
	if (ctx.cr6.eq) goto loc_82115700;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821156e8
	if (ctx.cr6.eq) goto loc_821156E8;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r9,r9,3708
	ctx.r9.u64 = ctx.r9.u64 | 3708;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821156e8
	if (ctx.cr6.eq) goto loc_821156E8;
	// lbz r10,103(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 103);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821156e8
	if (ctx.cr0.eq) goto loc_821156E8;
	// lbz r11,103(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 103);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821156e8
	if (ctx.cr0.eq) goto loc_821156E8;
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82115694
	if (!ctx.cr6.eq) goto loc_82115694;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// lwz r3,504(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 504);
	// bl 0x821fac38
	ctx.lr = 0x82115694;
	sub_821FAC38(ctx, base);
loc_82115694:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x821156c8
	if (!ctx.cr6.gt) goto loc_821156C8;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lfs f12,204(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 204);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lfs f13,31220(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 31220);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1840(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfs f0,204(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 204, temp.u32);
loc_821156C8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,220(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 + f31.f64));
	// lfs f3,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82204ae0
	ctx.lr = 0x821156E4;
	sub_82204AE0(ctx, base);
	// stfs f1,220(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 220, temp.u32);
loc_821156E8:
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
loc_82115700:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// b 0x821156e8
	goto loc_821156E8;
}

DEFINE_REX_FUNC(sub_82119200) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,7792(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7792);
	// lwz r4,1672(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1672);
	// bl 0x820e1df8
	ctx.lr = 0x8211922C;
	sub_820E1DF8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16908(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16908);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82119248
	if (!ctx.cr6.lt) goto loc_82119248;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82119268
	goto loc_82119268;
loc_82119248:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// fdivs f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 / ctx.f0.f64));
	// bl 0x820e1cf8
	ctx.lr = 0x82119260;
	sub_820E1CF8(ctx, base);
	// stfs f31,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82119268:
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

DEFINE_REX_FUNC(sub_8211B9B0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-30960
	ctx.r6.s64 = ctx.r11.s64 + -30960;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x8211B9E8;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8211ba00
	if (ctx.cr0.eq) goto loc_8211BA00;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, r31.u32);
	// addi r11,r11,-31036
	ctx.r11.s64 = ctx.r11.s64 + -31036;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8211BA00:
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

DEFINE_REX_FUNC(sub_8211CA68) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e88
	ctx.lr = 0x8211CA70;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f2c
	ctx.lr = 0x8211CA78;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r11,432(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 432);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8211cd1c
	if (!ctx.cr0.eq) goto loc_8211CD1C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r3,136
	r30.s64 = ctx.r3.s64 + 136;
	// addi r3,r30,32
	ctx.r3.s64 = r30.s64 + 32;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lfs f27,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f27.f64 = double(temp.f32);
	// fmr f29,f31
	f29.f64 = f31.f64;
	// fmr f28,f31
	f28.f64 = f31.f64;
	// fmr f30,f27
	f30.f64 = f27.f64;
	// bl 0x8211c1b0
	ctx.lr = 0x8211CAB8;
	sub_8211C1B0(ctx, base);
	// lfs f1,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 168);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0028
	ctx.lr = 0x8211CAC0;
	sub_820E0028(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r30,48
	r29.s64 = r30.s64 + 48;
	// fmuls f25,f1,f0
	f25.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// li r28,2
	r28.s64 = 2;
	// lfs f26,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f26.f64 = double(temp.f32);
loc_8211CAD8:
	// addi r3,r29,-48
	ctx.r3.s64 = r29.s64 + -48;
	// bl 0x8211c1b0
	ctx.lr = 0x8211CAE0;
	sub_8211C1B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8211c1b0
	ctx.lr = 0x8211CAE8;
	sub_8211C1B0(ctx, base);
	// lfs f1,-48(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + -48);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0028
	ctx.lr = 0x8211CAF0;
	sub_820E0028(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f30.f64));
	// lfs f13,-36(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + -36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f29,f0,f13,f29
	f29.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, f29.f64)));
	// bl 0x820e0028
	ctx.lr = 0x8211CB04;
	sub_820E0028(ctx, base);
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfs f0,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmadds f28,f0,f30,f28
	f28.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, f28.f64)));
	// fmuls f30,f30,f26
	f30.f64 = double(float(f30.f64 * f26.f64));
	// bne 0x8211cad8
	if (!ctx.cr0.eq) goto loc_8211CAD8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-30672(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30672);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f28,f0
	f30.f64 = double(float(f28.f64 * ctx.f0.f64));
	// fmuls f29,f29,f0
	f29.f64 = double(float(f29.f64 * ctx.f0.f64));
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(f30.f64, f31.f64);
	// bge cr6,0x8211cb58
	if (!ctx.cr6.lt) goto loc_8211CB58;
	// bl 0x821fef70
	ctx.lr = 0x8211CB44;
	sub_821FEF70(ctx, base);
	// lfs f0,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8211cb58
	if (!ctx.cr6.lt) goto loc_8211CB58;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
	// b 0x8211cb5c
	goto loc_8211CB5C;
loc_8211CB58:
	// fadds f0,f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 + f27.f64));
loc_8211CB5C:
	// lfs f13,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 + f29.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 284, temp.u32);
	// lfs f13,84(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 + f25.f64));
	// stfs f13,288(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 288, temp.u32);
	// lfs f13,88(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,292(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 292, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8211cbe4
	if (!ctx.cr6.gt) goto loc_8211CBE4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8211cbc4
	if (!ctx.cr6.lt) goto loc_8211CBC4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,16372(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16372);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,17064(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 17064);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x820e0028
	ctx.lr = 0x8211CBB4;
	sub_820E0028(ctx, base);
	// fadds f0,f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + f27.f64));
	// lfs f13,292(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x8211cbdc
	goto loc_8211CBDC;
loc_8211CBC4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f1,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 - f27.f64));
	// lfd f2,-30680(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + -30680);
	// bl 0x822d5b48
	ctx.lr = 0x8211CBD4;
	sub_822D5B48(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + f27.f64));
loc_8211CBDC:
	// stfs f0,292(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 292, temp.u32);
	// b 0x8211cbe8
	goto loc_8211CBE8;
loc_8211CBE4:
	// stfs f31,292(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 292, temp.u32);
loc_8211CBE8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x820e01b0
	ctx.lr = 0x8211CBF0;
	sub_820E01B0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f2,288(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 288);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// lfs f1,284(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 284);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0ec8
	ctx.lr = 0x8211CC04;
	sub_820E0EC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,292(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f27,108(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,16648(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16648);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x820e1d28
	ctx.lr = 0x8211CC34;
	sub_820E1D28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r31,112
	r29.s64 = r31.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f1,16268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16268);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e2028
	ctx.lr = 0x8211CC50;
	sub_820E2028(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e2290
	ctx.lr = 0x8211CC5C;
	sub_820E2290(ctx, base);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-30660(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30660);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8211cc88
	if (!ctx.cr6.gt) goto loc_8211CC88;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// bgt cr6,0x8211cc84
	if (ctx.cr6.gt) goto loc_8211CC84;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-30664(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30664);
	ctx.f0.f64 = double(temp.f32);
loc_8211CC84:
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_8211CC88:
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,3300
	ctx.r5.s64 = ctx.r11.s64 + 3300;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e1c50
	ctx.lr = 0x8211CC9C;
	sub_820E1C50(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820e1c50
	ctx.lr = 0x8211CCAC;
	sub_820E1C50(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,296(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 296, temp.u32);
	// stfs f13,300(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 300, temp.u32);
	// stfs f12,304(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 304, temp.u32);
	// stfs f31,308(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 308, temp.u32);
	// stfs f31,324(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 324, temp.u32);
	// lfs f0,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,312(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 312, temp.u32);
	// stfs f13,316(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 316, temp.u32);
	// stfs f12,320(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 320, temp.u32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,328(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 328, temp.u32);
	// stfs f13,332(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 332, temp.u32);
	// stfs f12,336(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 336, temp.u32);
	// stfs f31,340(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 340, temp.u32);
	// lfs f0,116(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,344(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 344, temp.u32);
	// lfs f0,120(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,348(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 348, temp.u32);
	// lfs f0,124(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,352(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 352, temp.u32);
	// stfs f27,356(r31)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r31.u32 + 356, temp.u32);
loc_8211CD1C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f78
	ctx.lr = 0x8211CD28;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82129500) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lfs f1,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1cc0
	ctx.lr = 0x82129538;
	sub_820E1CC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1c28
	ctx.lr = 0x82129544;
	sub_820E1C28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lfs f0,2008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x820e1cc0
	ctx.lr = 0x8212955C;
	sub_820E1CC0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1ba8
	ctx.lr = 0x8212956C;
	sub_820E1BA8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x820e1cc0
	ctx.lr = 0x8212957C;
	sub_820E1CC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

DEFINE_REX_FUNC(sub_8212A398) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8212A3A0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r29,300(r3)
	REX_STORE_U32(ctx.r3.u32 + 300, r29.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8212a3c4
	if (!ctx.cr6.eq) goto loc_8212A3C4;
loc_8212A3BC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8212a754
	goto loc_8212A754;
loc_8212A3C4:
	// stw r30,288(r31)
	REX_STORE_U32(r31.u32 + 288, r30.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lbz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r7,r9,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// addi r4,r11,-29252
	ctx.r4.s64 = ctx.r11.s64 + -29252;
	// or r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// sth r9,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// lbz r10,81(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// stb r9,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// lbz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 16);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r7,r9,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// lbz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r7,r9,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// lbz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 24);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwinm r7,r9,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// rlwimi r8,r9,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// lbz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 28);
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwinm r7,r9,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// rlwimi r8,r9,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r3,288(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 288);
	// bl 0x822d60a0
	ctx.lr = 0x8212A4C4;
	sub_822D60A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8212a3bc
	if (!ctx.cr0.eq) goto loc_8212A3BC;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,4096
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4096, ctx.xer);
	// beq cr6,0x8212a4e4
	if (ctx.cr6.eq) goto loc_8212A4E4;
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x8212a754
	goto loc_8212A754;
loc_8212A4E4:
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r10.u32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r8,300(r31)
	REX_STORE_U32(r31.u32 + 300, ctx.r8.u32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r10,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r10.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8212a5e4
	if (!ctx.cr6.gt) goto loc_8212A5E4;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8212A514:
	// lwz r10,292(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 292);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lhzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// rlwinm r7,r7,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// sthx r8,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u16);
	// lwz r10,292(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 292);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r8,2(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// rlwinm r7,r7,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// or r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 | ctx.r6.u64;
	// sth r8,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// lwz r10,292(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 292);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lhz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// sth r8,4(r10)
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r8.u16);
	// lwz r10,292(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 292);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r8,6(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// rlwinm r7,r7,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// addi r8,r10,6
	ctx.r8.s64 = ctx.r10.s64 + 6;
	// or r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 | ctx.r6.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// sth r8,6(r10)
	REX_STORE_U16(ctx.r10.u32 + 6, ctx.r8.u16);
	// lwz r10,288(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 288);
	// lwz r10,28(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8212a514
	if (ctx.cr6.lt) goto loc_8212A514;
loc_8212A5E4:
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8212a720
	if (!ctx.cr6.gt) goto loc_8212A720;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8212A5FC:
	// lwz r9,296(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 296);
	// li r8,16
	ctx.r8.s64 = 16;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// lwzx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lbzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// rlwinm r4,r6,24,16,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF00;
	// rlwimi r5,r6,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// or r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 | ctx.r8.u64;
	// rlwinm r6,r5,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stwx r8,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
loc_8212A630:
	// lwz r9,296(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 296);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// lhz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 4);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// rlwinm r6,r6,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// sth r8,4(r9)
	REX_STORE_U16(ctx.r9.u32 + 4, ctx.r8.u16);
	// lwz r9,296(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 296);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r9,6
	ctx.r8.s64 = ctx.r9.s64 + 6;
	// lhz r8,6(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 6);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// rlwinm r6,r6,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// sth r8,6(r9)
	REX_STORE_U16(ctx.r9.u32 + 6, ctx.r8.u16);
	// lwz r9,296(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 296);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r9,8
	ctx.r8.s64 = ctx.r9.s64 + 8;
	// lhz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 8);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// rlwinm r6,r6,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// sth r8,8(r9)
	REX_STORE_U16(ctx.r9.u32 + 8, ctx.r8.u16);
	// lwz r9,296(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 296);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r8,r9,10
	ctx.r8.s64 = ctx.r9.s64 + 10;
	// lhz r8,10(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 10);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// rlwinm r6,r6,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// sth r8,10(r9)
	REX_STORE_U16(ctx.r9.u32 + 10, ctx.r8.u16);
	// bdnz 0x8212a630
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8212A630;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,132
	ctx.r10.s64 = ctx.r10.s64 + 132;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212a5fc
	if (ctx.cr6.lt) goto loc_8212A5FC;
loc_8212A720:
	// lwz r11,300(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212a750
	if (ctx.cr6.eq) goto loc_8212A750;
	// li r10,24
	ctx.r10.s64 = 24;
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8212A738:
	// li r10,-1
	ctx.r10.s64 = -1;
	// sth r29,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, r29.u16);
	// sth r29,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, r29.u16);
	// sth r10,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// stwu r29,12(r11)
	ea = 12 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8212a738
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8212A738;
loc_8212A750:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8212A754:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8213A410) {
	REX_FUNC_PROLOGUE();
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r8,r8,-24424
	ctx.r8.s64 = ctx.r8.s64 + -24424;
	// lfs f31,20480(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20480);
	f31.f64 = double(temp.f32);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,-24416(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24416);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x8213a318
	ctx.lr = 0x8213A450;
	sub_8213A318(ctx, base);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r4,r9,20960
	ctx.r4.s64 = ctx.r9.s64 + 20960;
	// lwz r9,-32480(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f7,2332(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2332);
	ctx.f7.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f5,20608(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20608);
	ctx.f5.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f6,f7
	ctx.f6.f64 = ctx.f7.f64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f4,-24428(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -24428);
	ctx.f4.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lfs f3,26856(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 26856);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,29700(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 29700);
	ctx.f1.f64 = double(temp.f32);
	// stw r10,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r10.u32);
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82104548
	ctx.lr = 0x8213A4B8;
	sub_82104548(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213FB40) {
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
	ctx.lr = 0x8213FB48;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32165
	r29.s64 = -2107965440;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r30,r11,432
	r30.s64 = ctx.r11.s64 + 432;
	// lwz r31,-32480(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + -32480);
	// addi r3,r30,84
	ctx.r3.s64 = r30.s64 + 84;
	// addi r28,r31,68
	r28.s64 = r31.s64 + 68;
	// bl 0x821d63d0
	ctx.lr = 0x8213FB68;
	sub_821D63D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8213fc08
	if (ctx.cr0.eq) goto loc_8213FC08;
	// bl 0x821307d0
	ctx.lr = 0x8213FB74;
	sub_821307D0(ctx, base);
	// andi. r11,r3,49184
	ctx.r11.u64 = ctx.r3.u64 & 49184;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8213fc18
	if (!ctx.cr0.eq) goto loc_8213FC18;
loc_8213FB80:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8213fbf4
	if (!ctx.cr6.gt) goto loc_8213FBF4;
	// bl 0x8212fe30
	ctx.lr = 0x8213FB94;
	sub_8212FE30(ctx, base);
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lwz r8,80(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r10,r10,22984
	ctx.r10.s64 = ctx.r10.s64 + 22984;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r9,88(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwz r4,344(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 344);
	// mulli r9,r9,58
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(58));
	// lbzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addis r3,r11,2048
	ctx.r3.s64 = ctx.r11.s64 + 134217728;
	// addi r3,r3,98
	ctx.r3.s64 = ctx.r3.s64 + 98;
	// bl 0x820e68b8
	ctx.lr = 0x8213FBCC;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,20
	ctx.r7.s64 = 20;
	// lfs f2,15628(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15628);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,15632(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15632);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x821310b0
	ctx.lr = 0x8213FBF4;
	sub_821310B0(ctx, base);
loc_8213FBF4:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_8213FC08:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8213fb80
	if (!ctx.cr6.gt) goto loc_8213FB80;
loc_8213FC18:
	// bl 0x821307d0
	ctx.lr = 0x8213FC1C;
	sub_821307D0(ctx, base);
	// andi. r11,r3,16416
	ctx.r11.u64 = ctx.r3.u64 & 16416;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213fc38
	if (ctx.cr0.eq) goto loc_8213FC38;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,15
	ctx.r3.s64 = 15;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212bc38
	ctx.lr = 0x8213FC38;
	sub_8212BC38(ctx, base);
loc_8213FC38:
	// lwz r11,-32480(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -32480);
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// b 0x8213fbf4
	goto loc_8213FBF4;
}

DEFINE_REX_FUNC(sub_82149C98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82149CA0;
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
	// addi r10,r10,-23084
	ctx.r10.s64 = ctx.r10.s64 + -23084;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lbz r11,62(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 62);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
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
	// bl 0x820e1850
	ctx.lr = 0x82149D10;
	sub_820E1850(ctx, base);
	// lbz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 60);
	// rotlwi r11,r11,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 6);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lfs f3,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1850
	ctx.lr = 0x82149D30;
	sub_820E1850(ctx, base);
	// lbz r11,58(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 58);
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// rotlwi r11,r11,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 6);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
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
	ctx.lr = 0x82149D50;
	sub_820E1850(ctx, base);
	// lbz r11,61(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 61);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r11,94(r31)
	REX_STORE_U16(r31.u32 + 94, ctx.r11.u16);
	// lfs f0,48(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// lfs f0,52(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// lbz r11,59(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 59);
	// sth r11,88(r31)
	REX_STORE_U16(r31.u32 + 88, ctx.r11.u16);
	// lbz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 60);
	// sth r11,90(r31)
	REX_STORE_U16(r31.u32 + 90, ctx.r11.u16);
	// lbz r11,58(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 58);
	// sth r11,92(r31)
	REX_STORE_U16(r31.u32 + 92, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8214CC98) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x8214cd38
	if (ctx.cr6.gt) goto loc_8214CD38;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8214ccd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8214CCD8;
	// bdzf 4*cr6+eq,0x8214cce4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8214CCE4;
	// bdzf 4*cr6+eq,0x8214ccf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8214CCF0;
	// bdzf 4*cr6+eq,0x8214ccfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8214CCFC;
	// bdzf 4*cr6+eq,0x8214cd08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8214CD08;
	// bdzf 4*cr6+eq,0x8214cd14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8214CD14;
	// bdzf 4*cr6+eq,0x8214cd20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8214CD20;
	// bne cr6,0x8214cd2c
	if (!ctx.cr6.eq) goto loc_8214CD2C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2352);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8214CCD8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8214CCE4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2356);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8214CCF0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8214CCFC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,16928(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16928);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8214CD08:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,16204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16204);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8214CD14:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-30440(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30440);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8214CD20:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8214CD2C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8214CD38:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,16260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16260);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82150270) {
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
	// lwz r31,324(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 324);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821502ac
	if (ctx.cr6.eq) goto loc_821502AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e48c0
	ctx.lr = 0x8215029C;
	sub_820E48C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821502A4;
	sub_822C80A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,324(r30)
	REX_STORE_U32(r30.u32 + 324, ctx.r11.u32);
loc_821502AC:
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

DEFINE_REX_FUNC(sub_82151508) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lha r9,310(r3)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 310));
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// rlwinm. r11,r4,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// beq 0x82151544
	if (ctx.cr0.eq) goto loc_82151544;
loc_8215151C:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82151528
	if (!ctx.cr0.lt) goto loc_82151528;
	// li r3,10
	ctx.r3.s64 = 10;
loc_82151528:
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82151580
	if (ctx.cr6.eq) goto loc_82151580;
	// add r11,r3,r8
	ctx.r11.u64 = ctx.r3.u64 + ctx.r8.u64;
	// lbz r11,336(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 336);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8215151c
	if (ctx.cr0.eq) goto loc_8215151C;
	// b 0x82151580
	goto loc_82151580;
loc_82151544:
	// rlwinm. r11,r4,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82151580
	if (ctx.cr0.eq) goto loc_82151580;
loc_8215154C:
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// li r10,11
	ctx.r10.s64 = 11;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r7,r10
	temp.u8 = (~ctx.r7.u32 + ctx.r10.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r7.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82151580
	if (ctx.cr6.eq) goto loc_82151580;
	// add r11,r3,r8
	ctx.r11.u64 = ctx.r3.u64 + ctx.r8.u64;
	// lbz r11,336(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 336);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8215154c
	if (ctx.cr0.eq) goto loc_8215154C;
loc_82151580:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// sth r3,310(r8)
	REX_STORE_U16(ctx.r8.u32 + 310, ctx.r3.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82157038) {
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
	ctx.lr = 0x82157040;
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f29.u64);
	// stfd f30,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,192(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r30,1
	r30.s64 = 1;
	// lwz r7,196(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 196);
	// subfic r8,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// rlwinm r9,r11,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// std r30,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, r30.u64);
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// sth r30,88(r3)
	REX_STORE_U16(ctx.r3.u32 + 88, r30.u16);
	// addi r10,r10,-17352
	ctx.r10.s64 = ctx.r10.s64 + -17352;
	// stb r30,90(r3)
	REX_STORE_U8(ctx.r3.u32 + 90, r30.u8);
	// rlwinm r8,r8,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addic. r11,r3,112
	ctx.xer.ca = ctx.r3.u32 > 4294967183;
	ctx.r11.s64 = ctx.r3.s64 + 112;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r29,0
	r29.s64 = 0;
	// addi r9,r8,14
	ctx.r9.s64 = ctx.r8.s64 + 14;
	// beq 0x821570a0
	if (ctx.cr0.eq) goto loc_821570A0;
	// stw r11,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// b 0x821570a4
	goto loc_821570A4;
loc_821570A0:
	// stw r29,92(r31)
	REX_STORE_U32(r31.u32 + 92, r29.u32);
loc_821570A4:
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821570b8
	if (ctx.cr6.eq) goto loc_821570B8;
	// stw r7,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r7.u32);
	// stb r9,104(r31)
	REX_STORE_U8(r31.u32 + 104, ctx.r9.u8);
loc_821570B8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r30,105(r31)
	REX_STORE_U8(r31.u32 + 105, r30.u8);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stb r29,106(r31)
	REX_STORE_U8(r31.u32 + 106, r29.u8);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stb r29,107(r31)
	REX_STORE_U8(r31.u32 + 107, r29.u8);
	// lis r28,-32256
	r28.s64 = -2113929216;
	// stb r29,109(r31)
	REX_STORE_U8(r31.u32 + 109, r29.u8);
	// lis r27,-32255
	r27.s64 = -2113863680;
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// lfs f5,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f5.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,20484(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 20484);
	f31.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f30,-17392(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -17392);
	f30.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lfs f29,1996(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 1996);
	f29.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lfs f0,-17396(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + -17396);
	ctx.f0.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f13,-17400(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -17400);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f5,140(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// stfs f5,116(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f4,f5
	ctx.f4.f64 = ctx.f5.f64;
	// stfs f5,124(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// stfs f29,128(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x8210ded0
	ctx.lr = 0x82157148;
	sub_8210DED0(ctx, base);
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// stfs f31,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82157168
	if (!ctx.cr6.eq) goto loc_82157168;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-17404(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -17404);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// b 0x8215716c
	goto loc_8215716C;
loc_82157168:
	// stfs f30,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
loc_8215716C:
	// li r11,8
	ctx.r11.s64 = 8;
	// stfs f29,212(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 212, temp.u32);
	// stw r29,208(r31)
	REX_STORE_U32(r31.u32 + 208, r29.u32);
	// sth r11,18(r31)
	REX_STORE_U16(r31.u32 + 18, ctx.r11.u16);
	// stb r30,61(r31)
	REX_STORE_U8(r31.u32 + 61, r30.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-72(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8215D678) {
	REX_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,73
	ctx.r3.s64 = 73;
	// b 0x821dce30
	sub_821DCE30(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8215D7B8) {
	REX_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,76
	ctx.r3.s64 = 76;
	// b 0x821dce30
	sub_821DCE30(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8215D8D8) {
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
loc_8215D8F4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c7f28
	ctx.lr = 0x8215D904;
	sub_821C7F28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215d928
	if (ctx.cr0.eq) goto loc_8215D928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dd280
	ctx.lr = 0x8215D914;
	sub_821DD280(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8215d950
	if (ctx.cr6.eq) goto loc_8215D950;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8215d928
	if (!ctx.cr6.eq) goto loc_8215D928;
	// li r30,2
	r30.s64 = 2;
loc_8215D928:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,33
	ctx.cr6.compare<int32_t>(r31.s32, 33, ctx.xer);
	// blt cr6,0x8215d8f4
	if (ctx.cr6.lt) goto loc_8215D8F4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8215D938:
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
loc_8215D950:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8215d938
	goto loc_8215D938;
}

DEFINE_REX_FUNC(sub_82161178) {
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
	// addi r11,r11,-11816
	ctx.r11.s64 = ctx.r11.s64 + -11816;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x821611a4
	if (ctx.cr0.eq) goto loc_821611A4;
	// bl 0x822c80a8
	ctx.lr = 0x821611A4;
	sub_822C80A8(ctx, base);
loc_821611A4:
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

DEFINE_REX_FUNC(sub_82161A28) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e78
	ctx.lr = 0x82161A30;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f30
	ctx.lr = 0x82161A38;
	// stwu r1,-2320(r1)
	ea = -2320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82161d94
	if (ctx.cr6.eq) goto loc_82161D94;
	// ld r11,3576(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 3576);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82161d94
	if (ctx.cr6.eq) goto loc_82161D94;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f28,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	f28.f64 = double(temp.f32);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lfs f27,120(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	f27.f64 = double(temp.f32);
	// bl 0x822d4fa0
	ctx.lr = 0x82161A78;
	sub_822D4FA0(ctx, base);
	// addi r29,r1,1616
	r29.s64 = ctx.r1.s64 + 1616;
	// addi r30,r31,1472
	r30.s64 = r31.s64 + 1472;
	// li r28,9
	r28.s64 = 9;
loc_82161A84:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e0bd0
	ctx.lr = 0x82161A90;
	sub_820E0BD0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e0bd0
	ctx.lr = 0x82161A9C;
	sub_820E0BD0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// addi r29,r29,64
	r29.s64 = r29.s64 + 64;
	// bne 0x82161a84
	if (!ctx.cr0.eq) goto loc_82161A84;
	// addi r25,r24,968
	r25.s64 = r24.s64 + 968;
	// li r6,31
	ctx.r6.s64 = 31;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821612d8
	ctx.lr = 0x82161AC4;
	sub_821612D8(ctx, base);
	// li r6,31
	ctx.r6.s64 = 31;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821612d8
	ctx.lr = 0x82161AD8;
	sub_821612D8(ctx, base);
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// addi r30,r31,64
	r30.s64 = r31.s64 + 64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f31,176(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 176);
	f31.f64 = double(temp.f32);
	// lfs f30,180(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	f30.f64 = double(temp.f32);
	// lfs f29,184(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 184);
	f29.f64 = double(temp.f32);
	// bl 0x820e0590
	ctx.lr = 0x82161AF8;
	sub_820E0590(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f30,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// stfs f31,176(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 176, temp.u32);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// stfs f29,184(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 184, temp.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lfs f30,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f30.f64 = double(temp.f32);
	// stfs f30,188(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 188, temp.u32);
	// lfs f31,320(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 320);
	f31.f64 = double(temp.f32);
	// lfs f29,324(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 324);
	f29.f64 = double(temp.f32);
	// lfs f26,328(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 328);
	f26.f64 = double(temp.f32);
	// bl 0x820e0590
	ctx.lr = 0x82161B2C;
	sub_820E0590(ctx, base);
	// stfs f31,320(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stfs f29,324(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// addi r5,r31,896
	ctx.r5.s64 = r31.s64 + 896;
	// stfs f26,328(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stfs f30,332(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lfs f31,944(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 944);
	f31.f64 = double(temp.f32);
	// lfs f29,948(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 948);
	f29.f64 = double(temp.f32);
	// lfs f26,952(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 952);
	f26.f64 = double(temp.f32);
	// bl 0x820e0590
	ctx.lr = 0x82161B58;
	sub_820E0590(ctx, base);
	// stfs f31,944(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 944, temp.u32);
	// stfs f29,948(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 948, temp.u32);
	// addi r5,r1,1040
	ctx.r5.s64 = ctx.r1.s64 + 1040;
	// stfs f26,952(r31)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r31.u32 + 952, temp.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stfs f30,956(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 956, temp.u32);
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// lfs f31,1088(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 1088);
	f31.f64 = double(temp.f32);
	// lfs f29,1092(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 1092);
	f29.f64 = double(temp.f32);
	// lfs f26,1096(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 1096);
	f26.f64 = double(temp.f32);
	// bl 0x820e0590
	ctx.lr = 0x82161B84;
	sub_820E0590(ctx, base);
	// stfs f31,1088(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 1088, temp.u32);
	// stfs f29,1092(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 1092, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f26,1096(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 1096, temp.u32);
	// stfs f30,1100(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 1100, temp.u32);
	// bl 0x820e0208
	ctx.lr = 0x82161B9C;
	sub_820E0208(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x820e0208
	ctx.lr = 0x82161BA4;
	sub_820E0208(ctx, base);
	// ld r28,3576(r24)
	r28.u64 = REX_LOAD_U64(r24.u32 + 3576);
	// clrldi r11,r28,63
	ctx.r11.u64 = r28.u64 & 0x1;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82161d20
	if (ctx.cr6.eq) goto loc_82161D20;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f11,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f31,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820e2028
	ctx.lr = 0x82161BFC;
	sub_820E2028(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e2128
	ctx.lr = 0x82161C04;
	sub_820E2128(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f29,-11804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11804);
	f29.f64 = double(temp.f32);
	// fcmpu cr6,f1,f29
	ctx.cr6.compare(ctx.f1.f64, f29.f64);
	// blt cr6,0x82161c80
	if (ctx.cr6.lt) goto loc_82161C80;
	// lfs f0,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f13,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f11,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f10,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x820e2028
	ctx.lr = 0x82161C58;
	sub_820E2028(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e2128
	ctx.lr = 0x82161C60;
	sub_820E2128(ctx, base);
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f29.f64);
	// blt cr6,0x82161c80
	if (ctx.cr6.lt) goto loc_82161C80;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e08a8
	ctx.lr = 0x82161C7C;
	sub_820E08A8(ctx, base);
	// b 0x82161d20
	goto loc_82161D20;
loc_82161C80:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820e1528
	ctx.lr = 0x82161C8C;
	sub_820E1528(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e1528
	ctx.lr = 0x82161C98;
	sub_820E1528(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e1890
	ctx.lr = 0x82161CAC;
	sub_820E1890(ctx, base);
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,192(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f12,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f11,196(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f10,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f9,200(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f9.f64 = double(temp.f32);
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x820e2028
	ctx.lr = 0x82161CF8;
	sub_820E2028(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e0af8
	ctx.lr = 0x82161D04;
	sub_820E0AF8(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f30,60(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f12,56(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
loc_82161D20:
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// addi r29,r27,4
	r29.s64 = r27.s64 + 4;
	// rldicl r27,r28,63,1
	r27.u64 = __builtin_rotateleft64(r28.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// li r28,1
	r28.s64 = 1;
	// subf r26,r30,r11
	r26.u64 = ctx.r11.u64 - r30.u64;
loc_82161D34:
	// cmpldi cr6,r27,0
	ctx.cr6.compare<uint64_t>(r27.u64, 0, ctx.xer);
	// beq cr6,0x82161d74
	if (ctx.cr6.eq) goto loc_82161D74;
	// clrldi r11,r27,63
	ctx.r11.u64 = r27.u64 & 0x1;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82161d5c
	if (ctx.cr6.eq) goto loc_82161D5C;
	// add r5,r26,r30
	ctx.r5.u64 = r26.u64 + r30.u64;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e08a8
	ctx.lr = 0x82161D5C;
	sub_820E08A8(ctx, base);
loc_82161D5C:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// rldicl r27,r27,63,1
	r27.u64 = __builtin_rotateleft64(r27.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// cmpwi cr6,r28,32
	ctx.cr6.compare<int32_t>(r28.s32, 32, ctx.xer);
	// blt cr6,0x82161d34
	if (ctx.cr6.lt) goto loc_82161D34;
loc_82161D74:
	// stfs f28,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stfs f27,120(r31)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r30,0
	r30.s64 = 0;
	// bl 0x82161230
	ctx.lr = 0x82161D94;
	sub_82161230(ctx, base);
loc_82161D94:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x82161dcc
	if (!ctx.cr6.eq) goto loc_82161DCC;
	// lfs f31,964(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 964);
	f31.f64 = double(temp.f32);
	// addi r31,r31,1472
	r31.s64 = r31.s64 + 1472;
	// li r30,9
	r30.s64 = 9;
loc_82161DA8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820e0d78
	ctx.lr = 0x82161DC0;
	sub_820E0D78(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// bne 0x82161da8
	if (!ctx.cr0.eq) goto loc_82161DA8;
loc_82161DCC:
	// addi r1,r1,2320
	ctx.r1.s64 = ctx.r1.s64 + 2320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f7c
	ctx.lr = 0x82161DD8;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_821740B8) {
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
	// bl 0x82173f70
	ctx.lr = 0x821740C8;
	sub_82173F70(ctx, base);
	// li r11,21
	ctx.r11.s64 = 21;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821740D4:
	// lwzu r9,28(r10)
	ea = 28 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lbz r9,81(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,83(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stb r6,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r6.u8);
	// stb r9,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r9.u8);
	// stb r8,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r8.u8);
	// stbu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bdnz 0x821740d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821740D4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82174C90) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,28096
	ctx.r3.s64 = ctx.r11.s64 + 28096;
	// b 0x82174b80
	sub_82174B80(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82174DB0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,28096
	ctx.r3.s64 = ctx.r11.s64 + 28096;
	// b 0x82174ca0
	sub_82174CA0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82174EC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82174ef0
	if (ctx.cr6.eq) goto loc_82174EF0;
	// lwz r9,104(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16272(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16272);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82174ef0
	if (!ctx.cr6.lt) goto loc_82174EF0;
	// std r10,80(r11)
	REX_STORE_U64(ctx.r11.u32 + 80, ctx.r10.u64);
	// b 0x82174ef8
	goto loc_82174EF8;
loc_82174EF0:
	// li r9,7
	ctx.r9.s64 = 7;
	// std r9,80(r11)
	REX_STORE_U64(ctx.r11.u32 + 80, ctx.r9.u64);
loc_82174EF8:
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// andi. r8,r8,253
	ctx.r8.u64 = ctx.r8.u64 & 253;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lwz r11,-32480(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -32480);
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82177B70) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,204(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82177ba8
	if (ctx.cr6.eq) goto loc_82177BA8;
	// addi r30,r11,16
	r30.s64 = ctx.r11.s64 + 16;
loc_82177BA8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	f31.f64 = double(temp.f32);
	// lfs f30,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(f31.f64, f30.f64);
	// bne cr6,0x82177bc4
	if (!ctx.cr6.eq) goto loc_82177BC4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,16172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16172);
	f31.f64 = double(temp.f32);
loc_82177BC4:
	// bl 0x821fee88
	ctx.lr = 0x82177BC8;
	sub_821FEE88(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r9,r9,432
	ctx.r9.s64 = ctx.r9.s64 + 432;
	// lfs f0,16308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16308);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16688(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16688);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// lhz r11,28(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 28);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bne cr6,0x82177c00
	if (!ctx.cr6.eq) goto loc_82177C00;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2352(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2352);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_82177C00:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// li r9,192
	ctx.r9.s64 = 192;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r11,1827(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1827);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r31,r9
	REX_STORE_U32(r31.u32 + ctx.r9.u32, ctx.f0.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82177c40
	if (ctx.cr6.eq) goto loc_82177C40;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82177C40:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bne cr6,0x82177c5c
	if (!ctx.cr6.eq) goto loc_82177C5C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
loc_82177C5C:
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e0e38
	ctx.lr = 0x82177C70;
	sub_820E0E38(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

DEFINE_REX_FUNC(sub_8217A620) {
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
	ctx.lr = 0x8217A628;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f2,204(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// stfs f3,208(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// stw r4,196(r3)
	REX_STORE_U32(ctx.r3.u32 + 196, ctx.r4.u32);
	// addi r11,r11,-5124
	ctx.r11.s64 = ctx.r11.s64 + -5124;
	// stw r10,200(r3)
	REX_STORE_U32(ctx.r3.u32 + 200, ctx.r10.u32);
	// stw r9,212(r3)
	REX_STORE_U32(ctx.r3.u32 + 212, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x821e7888
	ctx.lr = 0x8217A65C;
	sub_821E7888(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// addic. r11,r31,112
	ctx.xer.ca = r31.u32 > 4294967183;
	ctx.r11.s64 = r31.s64 + 112;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r29,88(r31)
	REX_STORE_U16(r31.u32 + 88, r29.u16);
	// li r30,0
	r30.s64 = 0;
	// stb r29,90(r31)
	REX_STORE_U8(r31.u32 + 90, r29.u8);
	// std r10,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r10.u64);
	// beq 0x8217a684
	if (ctx.cr0.eq) goto loc_8217A684;
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// b 0x8217a688
	goto loc_8217A688;
loc_8217A684:
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
loc_8217A688:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r5,212(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lis r8,-32174
	ctx.r8.s64 = -2108555264;
	// stb r30,105(r31)
	REX_STORE_U8(r31.u32 + 105, r30.u8);
	// addi r11,r11,-4224
	ctx.r11.s64 = ctx.r11.s64 + -4224;
	// stb r30,106(r31)
	REX_STORE_U8(r31.u32 + 106, r30.u8);
	// lfs f4,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f4.f64 = double(temp.f32);
	// addi r7,r8,-28432
	ctx.r7.s64 = ctx.r8.s64 + -28432;
	// lfs f5,-5128(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -5128);
	ctx.f5.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r7,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r7.u32);
	// addi r8,r11,112
	ctx.r8.s64 = ctx.r11.s64 + 112;
	// stb r30,107(r31)
	REX_STORE_U8(r31.u32 + 107, r30.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,109(r31)
	REX_STORE_U8(r31.u32 + 109, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// bl 0x8210ded0
	ctx.lr = 0x8217A6E8;
	sub_8210DED0(ctx, base);
	// stb r29,61(r31)
	REX_STORE_U8(r31.u32 + 61, r29.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,192(r31)
	REX_STORE_U32(r31.u32 + 192, r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8217E340) {
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
	// stw r4,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// addi r11,r11,-4704
	ctx.r11.s64 = ctx.r11.s64 + -4704;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x820e01b0
	ctx.lr = 0x8217E36C;
	sub_820E01B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// stfs f13,96(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
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
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 108, temp.u32);
	// stfs f13,112(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
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

DEFINE_REX_FUNC(sub_8217FA50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8217FA58;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,244(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r3,244
	r31.s64 = ctx.r3.s64 + 244;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r11,-8304
	r30.s64 = ctx.r11.s64 + -8304;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217fa90
	if (ctx.cr6.eq) goto loc_8217FA90;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,496(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 496);
	// li r4,3840
	ctx.r4.s64 = 3840;
	// bl 0x82190670
	ctx.lr = 0x8217FA8C;
	sub_82190670(ctx, base);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
loc_8217FA90:
	// lwz r11,240(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 240);
	// addi r31,r28,240
	r31.s64 = r28.s64 + 240;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217fab4
	if (ctx.cr6.eq) goto loc_8217FAB4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,496(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 496);
	// li r4,3840
	ctx.r4.s64 = 3840;
	// bl 0x82190670
	ctx.lr = 0x8217FAB0;
	sub_82190670(ctx, base);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
loc_8217FAB4:
	// lwz r11,248(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 248);
	// addi r31,r28,248
	r31.s64 = r28.s64 + 248;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217fad8
	if (ctx.cr6.eq) goto loc_8217FAD8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,496(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 496);
	// li r4,3840
	ctx.r4.s64 = 3840;
	// bl 0x82190670
	ctx.lr = 0x8217FAD4;
	sub_82190670(ctx, base);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
loc_8217FAD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821813E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821813F0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82181414;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82181430;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8218144C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82181468;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821829F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,64
	ctx.r10.s64 = 64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r3,-4136
	ctx.r11.s64 = ctx.r3.s64 + -4136;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfd f13,31912(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r8.u32 + 31912);
loc_82182A14:
	// stb r10,4146(r11)
	REX_STORE_U8(ctx.r11.u32 + 4146, ctx.r10.u8);
	// lfd f0,31632(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 31632);
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// ld r8,-16(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// stdu r8,4136(r11)
	ea = 4136 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r8.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82182a14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82182A14;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// ori r11,r11,2560
	ctx.r11.u64 = ctx.r11.u64 | 2560;
	// ori r9,r9,2564
	ctx.r9.u64 = ctx.r9.u64 | 2564;
	// ori r8,r8,2568
	ctx.r8.u64 = ctx.r8.u64 | 2568;
	// li r7,63
	ctx.r7.s64 = 63;
	// stwx r10,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u32);
	// stwx r10,r3,r9
	REX_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r10.u32);
	// stwx r7,r3,r8
	REX_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82183E18) {
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
	// lwz r11,17044(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 17044);
	// addi r30,r3,17044
	r30.s64 = ctx.r3.s64 + 17044;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82183E48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,17032(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 17032);
	// lwz r10,17036(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 17036);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82183e60
	if (ctx.cr6.gt) goto loc_82183E60;
	// subf r31,r11,r10
	r31.u64 = ctx.r10.u64 - ctx.r11.u64;
	// b 0x82183e68
	goto loc_82183E68;
loc_82183E60:
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r31,r11,32
	r31.s64 = ctx.r11.s64 + 32;
loc_82183E68:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82183E7C;
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

DEFINE_REX_FUNC(sub_82185530) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82185558
	if (!ctx.cr6.eq) goto loc_82185558;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82185558:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82233a78
	ctx.lr = 0x82185560;
	sub_82233A78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82185558
	if (ctx.cr0.eq) goto loc_82185558;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822339d8
	ctx.lr = 0x82185574;
	sub_822339D8(ctx, base);
	// lwz r3,492(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 492);
	// bl 0x82189a88
	ctx.lr = 0x8218557C;
	sub_82189A88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
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

DEFINE_REX_FUNC(sub_821878B0) {
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
	ctx.lr = 0x821878B8;
	// stwu r1,-1472(r1)
	ea = -1472 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,436(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 436);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821879f8
	if (!ctx.cr0.eq) goto loc_821879F8;
	// addi r25,r3,404
	r25.s64 = ctx.r3.s64 + 404;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822d5870
	ctx.lr = 0x821878E0;
	sub_822D5870(ctx, base);
	// lwz r11,432(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 432);
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r27,r31,96
	r27.s64 = r31.s64 + 96;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r11,416(r31)
	REX_STORE_U32(r31.u32 + 416, ctx.r11.u32);
	// beq cr6,0x82187904
	if (ctx.cr6.eq) goto loc_82187904;
	// bl 0x82208848
	ctx.lr = 0x821878FC;
	sub_82208848(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_82187904:
	// addi r28,r31,102
	r28.s64 = r31.s64 + 102;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82186828
	ctx.lr = 0x82187914;
	sub_82186828(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// bne 0x82187960
	if (!ctx.cr0.eq) goto loc_82187960;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x822c80d0
	ctx.lr = 0x8218792C;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82187948
	if (ctx.cr0.eq) goto loc_82187948;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821843f0
	ctx.lr = 0x82187940;
	sub_821843F0(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8218794c
	goto loc_8218794C;
loc_82187948:
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
loc_8218794C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x822ad9c0
	ctx.lr = 0x82187958;
	sub_822AD9C0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
loc_82187960:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82188300
	ctx.lr = 0x82187968;
	sub_82188300(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,32779
	ctx.r4.u64 = ctx.r4.u64 | 32779;
	// bl 0x82208998
	ctx.lr = 0x82187978;
	sub_82208998(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82188300
	ctx.lr = 0x82187980;
	sub_82188300(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// bl 0x82208998
	ctx.lr = 0x82187990;
	sub_82208998(ctx, base);
	// lbz r11,437(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 437);
	// li r26,1
	r26.s64 = 1;
	// li r30,2
	r30.s64 = 2;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821879ac
	if (!ctx.cr0.eq) goto loc_821879AC;
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_821879AC:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r24,r31,168
	r24.s64 = r31.s64 + 168;
	// bl 0x82188300
	ctx.lr = 0x821879B8;
	sub_82188300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,46
	ctx.r3.s64 = 46;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// bl 0x82233a90
	ctx.lr = 0x821879DC;
	sub_82233A90(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x821879f0
	if (ctx.cr6.eq) goto loc_821879F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r26,4(r31)
	REX_STORE_U32(r31.u32 + 4, r26.u32);
	// b 0x82187b50
	goto loc_82187B50;
loc_821879F0:
	// stb r26,436(r31)
	REX_STORE_U8(r31.u32 + 436, r26.u8);
	// b 0x82187b4c
	goto loc_82187B4C;
loc_821879F8:
	// lwz r11,404(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 404);
	// addi r3,r31,404
	ctx.r3.s64 = r31.s64 + 404;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82187b4c
	if (ctx.cr6.eq) goto loc_82187B4C;
	// bl 0x82209598
	ctx.lr = 0x82187A0C;
	sub_82209598(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82187a4c
	if (!ctx.cr0.lt) goto loc_82187A4C;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r11,r11,20993
	ctx.r11.u64 = ctx.r11.u64 | 20993;
	// stb r10,436(r31)
	REX_STORE_U8(r31.u32 + 436, ctx.r10.u8);
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82187a44
	if (!ctx.cr6.eq) goto loc_82187A44;
	// li r4,15
	ctx.r4.s64 = 15;
loc_82187A38:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82187d00
	ctx.lr = 0x82187A40;
	sub_82187D00(ctx, base);
	// b 0x82187b4c
	goto loc_82187B4C;
loc_82187A44:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82187b50
	goto loc_82187B50;
loc_82187A4C:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r31,102
	ctx.r4.s64 = r31.s64 + 102;
	// addi r3,r31,110
	ctx.r3.s64 = r31.s64 + 110;
	// bl 0x822339c0
	ctx.lr = 0x82187A5C;
	sub_822339C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82187a7c
	if (ctx.cr0.eq) goto loc_82187A7C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,436(r31)
	REX_STORE_U8(r31.u32 + 436, ctx.r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// b 0x82187b50
	goto loc_82187B50;
loc_82187A7C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82184a50
	ctx.lr = 0x82187A84;
	sub_82184A50(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82184a00
	ctx.lr = 0x82187A90;
	sub_82184A00(ctx, base);
	// ld r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 88);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// bl 0x82188300
	ctx.lr = 0x82187AA0;
	sub_82188300(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// bl 0x82208cc8
	ctx.lr = 0x82187AA8;
	sub_82208CC8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82188300
	ctx.lr = 0x82187AB0;
	sub_82188300(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82208a60
	ctx.lr = 0x82187ABC;
	sub_82208A60(ctx, base);
	// lbz r11,437(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 437);
	// li r29,0
	r29.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r29,135(r1)
	REX_STORE_U8(ctx.r1.u32 + 135, r29.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r11,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821855a0
	ctx.lr = 0x82187AE0;
	sub_821855A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82187afc
	if (!ctx.cr0.eq) goto loc_82187AFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r29,436(r31)
	REX_STORE_U8(r31.u32 + 436, r29.u8);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x82187a38
	goto loc_82187A38;
loc_82187AFC:
	// bl 0x822094c8
	ctx.lr = 0x82187B00;
	sub_822094C8(ctx, base);
	// stw r3,476(r31)
	REX_STORE_U32(r31.u32 + 476, ctx.r3.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// bl 0x82186828
	ctx.lr = 0x82187B14;
	sub_82186828(ctx, base);
	// stw r3,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r3.u32);
	// lwz r30,20(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82187b34
	if (ctx.cr6.eq) goto loc_82187B34;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
	// bl 0x822094c8
	ctx.lr = 0x82187B30;
	sub_822094C8(ctx, base);
	// stw r3,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r3.u32);
loc_82187B34:
	// li r11,6
	ctx.r11.s64 = 6;
	// stb r29,436(r31)
	REX_STORE_U8(r31.u32 + 436, r29.u8);
	// lwz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 76);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82187ed8
	ctx.lr = 0x82187B4C;
	sub_82187ED8(ctx, base);
loc_82187B4C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82187B50:
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82190C80) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lfs f12,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// beq cr6,0x82190cf0
	if (ctx.cr6.eq) goto loc_82190CF0;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,30804
	ctx.r11.s64 = ctx.r11.s64 + 30804;
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82190cb8
	if (!ctx.cr6.gt) goto loc_82190CB8;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_82190CB8:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82190cdc
	if (ctx.cr0.eq) goto loc_82190CDC;
	// fadds f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16264(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x82190cf0
	goto loc_82190CF0;
loc_82190CDC:
	// fadd f13,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64 + ctx.f12.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-17960(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -17960);
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
loc_82190CF0:
	// stfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82193E58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82193E60;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x821f7d50
	ctx.lr = 0x82193E90;
	sub_821F7D50(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82193ea4
	if (ctx.cr0.eq) goto loc_82193EA4;
	// bl 0x82199868
	ctx.lr = 0x82193EA0;
	sub_82199868(ctx, base);
	// b 0x82193ea8
	goto loc_82193EA8;
loc_82193EA4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82193EA8:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r3,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r3.u32);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r11,r11,31868
	ctx.r11.s64 = ctx.r11.s64 + 31868;
	// std r31,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, r31.u64);
	// std r31,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, r31.u64);
	// std r31,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, r31.u64);
	// lwz r8,28(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r7,32(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r6,40(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stb r5,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r5.u8);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// beq cr6,0x82193f00
	if (ctx.cr6.eq) goto loc_82193F00;
	// stb r5,89(r1)
	REX_STORE_U8(ctx.r1.u32 + 89, ctx.r5.u8);
loc_82193F00:
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,84(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 84);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,90(r1)
	REX_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// bl 0x821884c8
	ctx.lr = 0x82193F20;
	sub_821884C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82193f34
	if (!ctx.cr0.eq) goto loc_82193F34;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82187d00
	ctx.lr = 0x82193F34;
	sub_82187D00(ctx, base);
loc_82193F34:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82199598) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r9,r9,4516
	ctx.r9.s64 = ctx.r9.s64 + 4516;
	// lfs f0,-18072(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18072);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4536(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4536);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stfs f13,84(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// bl 0x82191bb0
	ctx.lr = 0x821995D8;
	sub_82191BB0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f1,88(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f2,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f1,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r31,100
	ctx.r7.s64 = r31.s64 + 100;
	// lfs f7,16200(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16200);
	ctx.f7.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f5,4512(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4512);
	ctx.f5.f64 = double(temp.f32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lfs f4,4508(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4508);
	ctx.f4.f64 = double(temp.f32);
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// fmr f6,f7
	ctx.f6.f64 = ctx.f7.f64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fmr f3,f0
	ctx.f3.f64 = ctx.f0.f64;
	// bl 0x82104548
	ctx.lr = 0x82199628;
	sub_82104548(ctx, base);
	// stw r3,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_8219B5B0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r31,r10,r7
	r31.u64 = ctx.r10.u64 + ctx.r7.u64;
	// beq cr6,0x8219b608
	if (ctx.cr6.eq) goto loc_8219B608;
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f13,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,8(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 12, temp.u32);
loc_8219B608:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8219b61c
	if (ctx.cr6.eq) goto loc_8219B61C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x820e1df8
	ctx.lr = 0x8219B61C;
	sub_820E1DF8(ctx, base);
loc_8219B61C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8219b63c
	if (ctx.cr6.eq) goto loc_8219B63C;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f0,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f0,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
loc_8219B63C:
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

DEFINE_REX_FUNC(sub_8219D908) {
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
	// bl 0x822d4e68
	ctx.lr = 0x8219D910;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x822d4f28
	ctx.lr = 0x8219D918;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r31,r11,-32480
	r31.s64 = ctx.r11.s64 + -32480;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x8218cb30
	ctx.lr = 0x8219D92C;
	sub_8218CB30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8219dcc4
	if (!ctx.cr0.eq) goto loc_8219DCC4;
	// lwz r28,12(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x8219d964
	if (!ctx.cr6.eq) goto loc_8219D964;
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219dcc4
	if (!ctx.cr6.eq) goto loc_8219DCC4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// b 0x8219dcc4
	goto loc_8219DCC4;
loc_8219D964:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r23,28(r28)
	r23.u64 = REX_LOAD_U32(r28.u32 + 28);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r20,24(r28)
	r20.u64 = REX_LOAD_U32(r28.u32 + 24);
	// addi r11,r11,30520
	ctx.r11.s64 = ctx.r11.s64 + 30520;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lfs f25,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	f25.f64 = double(temp.f32);
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// bl 0x82191228
	ctx.lr = 0x8219D988;
	sub_82191228(ctx, base);
	// lwz r26,20(r28)
	r26.u64 = REX_LOAD_U32(r28.u32 + 20);
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	f24.f64 = ctx.f1.f64;
	// addi r11,r26,-1
	ctx.r11.s64 = r26.s64 + -1;
	// clrlwi r27,r11,29
	r27.u64 = ctx.r11.u32 & 0x7;
	// stw r27,20(r28)
	REX_STORE_U32(r28.u32 + 20, r27.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8219dcc4
	if (ctx.cr6.eq) goto loc_8219DCC4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f26,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f26.f64 = double(temp.f32);
	// lfs f27,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f27.f64 = double(temp.f32);
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// lfs f28,16644(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16644);
	f28.f64 = double(temp.f32);
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// lfs f29,16908(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16908);
	f29.f64 = double(temp.f32);
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// lis r8,-32174
	ctx.r8.s64 = -2108555264;
	// lfs f30,17120(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 17120);
	f30.f64 = double(temp.f32);
	// lfs f31,-17776(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -17776);
	f31.f64 = double(temp.f32);
	// addi r22,r11,28576
	r22.s64 = ctx.r11.s64 + 28576;
	// addi r25,r10,23880
	r25.s64 = ctx.r10.s64 + 23880;
	// addi r24,r9,14984
	r24.s64 = ctx.r9.s64 + 14984;
	// addi r21,r8,11804
	r21.s64 = ctx.r8.s64 + 11804;
loc_8219D9F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f25.f64;
	// li r10,65
	ctx.r10.s64 = 65;
	// sth r11,16(r7)
	REX_STORE_U16(ctx.r7.u32 + 16, ctx.r11.u16);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,32(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 32);
	// rlwinm r9,r9,0,12,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// subfe r11,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x8218a390
	ctx.lr = 0x8219DA2C;
	sub_8218A390(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8219da48
	if (!ctx.cr0.lt) goto loc_8219DA48;
loc_8219DA34:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8218f9d8
	ctx.lr = 0x8219DA40;
	sub_8218F9D8(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8219dcbc
	goto loc_8219DCBC;
loc_8219DA48:
	// lwz r7,32(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 32);
	// rlwinm r9,r26,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm. r11,r7,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219dbd4
	if (ctx.cr0.eq) goto loc_8219DBD4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,56(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 56);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r29,r9,84
	r29.s64 = ctx.r9.s64 + 84;
	// lha r11,18(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 18));
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// blt cr6,0x8219dac4
	if (ctx.cr6.lt) goto loc_8219DAC4;
	// lha r8,92(r10)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 92));
	// addi r9,r11,-23
	ctx.r9.s64 = ctx.r11.s64 + -23;
	// cmpwi cr6,r8,27
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 27, ctx.xer);
	// bne cr6,0x8219da90
	if (!ctx.cr6.eq) goto loc_8219DA90;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r21
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r21.u32);
	// b 0x8219da9c
	goto loc_8219DA9C;
loc_8219DA90:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x8219da9c
	if (ctx.cr6.lt) goto loc_8219DA9C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8219DA9C:
	// mulli r8,r8,5
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(5));
	// lha r7,142(r10)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 142));
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulli r8,r8,12
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(12));
	// add r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r9,r9,r25
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + r25.u32));
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r30,r9,r24
	r30.u64 = ctx.r9.u64 + r24.u64;
	// b 0x8219dae8
	goto loc_8219DAE8;
loc_8219DAC4:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwzx r30,r9,r22
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + r22.u32);
	// bne cr6,0x8219dadc
	if (!ctx.cr6.eq) goto loc_8219DADC;
	// li r11,64
	ctx.r11.s64 = 64;
	// b 0x8219dae8
	goto loc_8219DAE8;
loc_8219DADC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8219dae8
	if (!ctx.cr6.eq) goto loc_8219DAE8;
	// li r11,72
	ctx.r11.s64 = 72;
loc_8219DAE8:
	// lwz r10,10148(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 10148);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x820e1df8
	ctx.lr = 0x8219DB04;
	sub_820E1DF8(ctx, base);
	// addi r5,r30,16
	ctx.r5.s64 = r30.s64 + 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x820e1df8
	ctx.lr = 0x8219DB14;
	sub_820E1DF8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f1,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e20b0
	ctx.lr = 0x8219DB2C;
	sub_820E20B0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r27,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,84
	ctx.r3.s64 = ctx.r10.s64 + 84;
	// lfs f1,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e20b0
	ctx.lr = 0x8219DB4C;
	sub_820E20B0(ctx, base);
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 32);
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8219db8c
	if (ctx.cr0.eq) goto loc_8219DB8C;
	// bl 0x821feec8
	ctx.lr = 0x8219DB5C;
	sub_821FEEC8(ctx, base);
	// fmsubs f0,f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f31.f64, -f30.f64)));
	// lfs f13,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// bl 0x821feec8
	ctx.lr = 0x8219DB70;
	sub_821FEEC8(ctx, base);
	// fmsubs f0,f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f31.f64, -f30.f64)));
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// bl 0x821feec8
	ctx.lr = 0x8219DB84;
	sub_821FEEC8(ctx, base);
	// fmsubs f0,f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f31.f64, -f30.f64)));
	// b 0x8219dbc4
	goto loc_8219DBC4;
loc_8219DB8C:
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219dcb0
	if (ctx.cr0.eq) goto loc_8219DCB0;
	// bl 0x821feec8
	ctx.lr = 0x8219DB98;
	sub_821FEEC8(ctx, base);
	// fmsubs f0,f1,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f29.f64, -f28.f64)));
	// lfs f13,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// bl 0x821feec8
	ctx.lr = 0x8219DBAC;
	sub_821FEEC8(ctx, base);
	// fmsubs f0,f1,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f29.f64, -f28.f64)));
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// bl 0x821feec8
	ctx.lr = 0x8219DBC0;
	sub_821FEEC8(ctx, base);
	// fmsubs f0,f1,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f29.f64, -f28.f64)));
loc_8219DBC4:
	// lfs f13,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// b 0x8219dcb0
	goto loc_8219DCB0;
loc_8219DBD4:
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r27,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm. r7,r7,0,18,18
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f25.f64;
	// addi r11,r8,84
	ctx.r11.s64 = ctx.r8.s64 + 84;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// add r31,r9,r11
	r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bne 0x8219dc0c
	if (!ctx.cr0.eq) goto loc_8219DC0C;
	// addi r6,r8,212
	ctx.r6.s64 = ctx.r8.s64 + 212;
loc_8219DC0C:
	// bl 0x821911b0
	ctx.lr = 0x8219DC10;
	sub_821911B0(ctx, base);
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 32);
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219dc58
	if (ctx.cr0.eq) goto loc_8219DC58;
	// bl 0x821feec8
	ctx.lr = 0x8219DC20;
	sub_821FEEC8(ctx, base);
	// fmsubs f0,f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f31.f64, -f30.f64)));
	// lfs f13,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// bl 0x821feec8
	ctx.lr = 0x8219DC34;
	sub_821FEEC8(ctx, base);
	// fmsubs f0,f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f31.f64, -f30.f64)));
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// bl 0x821feec8
	ctx.lr = 0x8219DC48;
	sub_821FEEC8(ctx, base);
	// fmsubs f0,f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f31.f64, -f30.f64)));
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
loc_8219DC58:
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 32);
	// rlwinm. r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// beq 0x8219dca0
	if (ctx.cr0.eq) goto loc_8219DCA0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,212
	ctx.r4.s64 = ctx.r11.s64 + 212;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821254e0
	ctx.lr = 0x8219DC7C;
	sub_821254E0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8219dca0
	if (ctx.cr0.eq) goto loc_8219DCA0;
	// lfs f0,264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, f27.f64);
	// ble cr6,0x8219da34
	if (!ctx.cr6.gt) goto loc_8219DA34;
	// fsubs f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 - f26.f64));
	// stfs f0,264(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 264, temp.u32);
	// b 0x8219dcb0
	goto loc_8219DCB0;
loc_8219DCA0:
	// addi r5,r11,212
	ctx.r5.s64 = ctx.r11.s64 + 212;
	// fmr f1,f24
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f24.f64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x820e1cf8
	ctx.lr = 0x8219DCB0;
	sub_820E1CF8(ctx, base);
loc_8219DCB0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
loc_8219DCBC:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8219d9f8
	if (!ctx.cr6.eq) goto loc_8219D9F8;
loc_8219DCC4:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x822d4f74
	ctx.lr = 0x8219DCD0;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_821AFF90) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// b 0x821d6210
	sub_821D6210(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821B0AC0) {
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
	// bl 0x821b09f0
	ctx.lr = 0x821B0AD8;
	sub_821B09F0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r11,30(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x821b0b10
	if (!ctx.cr6.eq) goto loc_821B0B10;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8212e800
	ctx.lr = 0x821B0B04;
	sub_8212E800(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,16232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16232);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821b0b70
	goto loc_821B0B70;
loc_821B0B10:
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x821b0b54
	if (ctx.cr6.eq) goto loc_821B0B54;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// beq cr6,0x821b0b38
	if (ctx.cr6.eq) goto loc_821B0B38;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8212eb40
	ctx.lr = 0x821B0B34;
	sub_8212EB40(ctx, base);
	// b 0x821b0b68
	goto loc_821B0B68;
loc_821B0B38:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
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
	ctx.lr = 0x821B0B50;
	sub_8212F220(ctx, base);
	// b 0x821b0b74
	goto loc_821B0B74;
loc_821B0B54:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821b0a58
	ctx.lr = 0x821B0B5C;
	sub_821B0A58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8212e800
	ctx.lr = 0x821B0B68;
	sub_8212E800(ctx, base);
loc_821B0B68:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,16628(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16628);
	ctx.f1.f64 = double(temp.f32);
loc_821B0B70:
	// bl 0x8212c708
	ctx.lr = 0x821B0B74;
	sub_8212C708(ctx, base);
loc_821B0B74:
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

DEFINE_REX_FUNC(sub_821B32F0) {
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
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r6,15
	ctx.r6.s64 = 15;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,19
	ctx.r4.s64 = 19;
	// lwzx r30,r11,r10
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r10,r30,27
	ctx.r10.u64 = r30.u32 & 0x1F;
	// rlwinm r11,r30,10,0,16
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 10) & 0xFFFF8000;
	// rlwinm r5,r30,26,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 26) & 0x7;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,5816(r3)
	REX_STORE_U16(ctx.r3.u32 + 5816, ctx.r11.u16);
	// bl 0x821be318
	ctx.lr = 0x821B3344;
	sub_821BE318(ctx, base);
	// rlwinm r11,r30,23,28,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 23) & 0xF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,5564(r31)
	REX_STORE_U32(r31.u32 + 5564, ctx.r11.u32);
	// li r6,15
	ctx.r6.s64 = 15;
	// rlwinm r5,r30,19,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 19) & 0x1;
	// li r4,22
	ctx.r4.s64 = 22;
	// bl 0x821bf940
	ctx.lr = 0x821B3360;
	sub_821BF940(ctx, base);
	// li r6,15
	ctx.r6.s64 = 15;
	// rlwinm r5,r30,18,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x1;
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bf940
	ctx.lr = 0x821B3374;
	sub_821BF940(ctx, base);
	// rlwinm. r11,r30,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r6,15
	ctx.r6.s64 = 15;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bne 0x821b3390
	if (!ctx.cr0.eq) goto loc_821B3390;
	// li r5,0
	ctx.r5.s64 = 0;
loc_821B3390:
	// bl 0x821be318
	ctx.lr = 0x821B3394;
	sub_821BE318(ctx, base);
	// lhz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 88);
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bne cr6,0x821b3408
	if (!ctx.cr6.eq) goto loc_821B3408;
	// rlwinm r11,r30,11,27,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 11) & 0x1F;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// rlwinm r9,r30,16,27,31
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 16) & 0x1F;
	// lha r10,92(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 92));
	// sth r9,92(r31)
	REX_STORE_U16(r31.u32 + 92, ctx.r9.u16);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,4
	ctx.r6.s64 = 4;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// lfs f2,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f2.f64 = double(temp.f32);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,9952(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 9952);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x821be3a0
	ctx.lr = 0x821B33E8;
	sub_821BE3A0(ctx, base);
	// lha r6,92(r31)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(r31.u32 + 92));
	// cmpw cr6,r30,r6
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x821b3408
	if (ctx.cr6.eq) goto loc_821B3408;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,868(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 868);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,864(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 864);
	// bl 0x821cd640
	ctx.lr = 0x821B3408;
	sub_821CD640(ctx, base);
loc_821B3408:
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

DEFINE_REX_FUNC(sub_821BE860) {
	REX_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r11,82(r4)
	REX_STORE_U16(ctx.r4.u32 + 82, ctx.r11.u16);
	// sth r11,88(r4)
	REX_STORE_U16(ctx.r4.u32 + 88, ctx.r11.u16);
	// sth r11,86(r4)
	REX_STORE_U16(ctx.r4.u32 + 86, ctx.r11.u16);
	// sth r11,84(r4)
	REX_STORE_U16(ctx.r4.u32 + 84, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BE8B0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821be8c8
	if (ctx.cr6.eq) goto loc_821BE8C8;
	// lhz r11,2(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_821BE8C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BEE40) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r5,24576
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 24576, ctx.xer);
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bge cr6,0x821bee68
	if (!ctx.cr6.lt) goto loc_821BEE68;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// blr 
	return;
loc_821BEE68:
	// cmpwi cr6,r5,27648
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 27648, ctx.xer);
	// bgt cr6,0x821bee84
	if (ctx.cr6.gt) goto loc_821BEE84;
	// lha r11,0(r4)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r4.u32 + 0));
	// addi r5,r5,4096
	ctx.r5.s64 = ctx.r5.s64 + 4096;
	// mulli r11,r11,896
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(896));
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// addi r4,r11,8120
	ctx.r4.s64 = ctx.r11.s64 + 8120;
loc_821BEE84:
	// addi r11,r5,256
	ctx.r11.s64 = ctx.r5.s64 + 256;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// srawi r11,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 9;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// beq cr6,0x821bef50
	if (ctx.cr6.eq) goto loc_821BEF50;
	// cmpwi cr6,r11,59
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 59, ctx.xer);
	// beq cr6,0x821bef34
	if (ctx.cr6.eq) goto loc_821BEF34;
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// beq cr6,0x821bef20
	if (ctx.cr6.eq) goto loc_821BEF20;
	// cmpwi cr6,r11,61
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 61, ctx.xer);
	// beq cr6,0x821beefc
	if (ctx.cr6.eq) goto loc_821BEEFC;
	// cmpwi cr6,r11,62
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 62, ctx.xer);
	// beq cr6,0x821beee0
	if (ctx.cr6.eq) goto loc_821BEEE0;
	// cmpwi cr6,r11,63
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 63, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r11,r5,-32256
	ctx.r11.s64 = ctx.r5.s64 + -32256;
	// lfs f0,5524(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// b 0x821bef64
	goto loc_821BEF64;
loc_821BEEE0:
	// addi r11,r5,-31744
	ctx.r11.s64 = ctx.r5.s64 + -31744;
	// lfs f13,48(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// b 0x821bef10
	goto loc_821BEF10;
loc_821BEEFC:
	// addi r11,r5,-31232
	ctx.r11.s64 = ctx.r5.s64 + -31232;
	// fsubs f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
loc_821BEF10:
	// fcfid f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
loc_821BEF18:
	// fadds f1,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// blr 
	return;
loc_821BEF20:
	// addi r11,r5,-30720
	ctx.r11.s64 = ctx.r5.s64 + -30720;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// b 0x821bef64
	goto loc_821BEF64;
loc_821BEF34:
	// addi r11,r5,-30208
	ctx.r11.s64 = ctx.r5.s64 + -30208;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// b 0x821bef18
	goto loc_821BEF18;
loc_821BEF50:
	// addi r11,r5,-29696
	ctx.r11.s64 = ctx.r5.s64 + -29696;
	// lfs f0,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
loc_821BEF64:
	// fcfid f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C27C0) {
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
	// addi r11,r11,12168
	ctx.r11.s64 = ctx.r11.s64 + 12168;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821C27EC;
	sub_821E2FD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c27fc
	if (ctx.cr0.eq) goto loc_821C27FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821C27FC;
	sub_822C80A8(ctx, base);
loc_821C27FC:
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

DEFINE_REX_FUNC(sub_821C37B8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,129
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 129, ctx.xer);
	// lhz r11,610(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 610);
	// beq cr6,0x821c37dc
	if (ctx.cr6.eq) goto loc_821C37DC;
	// cmplwi cr6,r4,193
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 193, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// bne cr6,0x821c37e0
	if (!ctx.cr6.eq) goto loc_821C37E0;
loc_821C37DC:
	// li r8,1
	ctx.r8.s64 = 1;
loc_821C37E0:
	// rlwinm. r9,r4,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821c37f0
	if (ctx.cr0.eq) goto loc_821C37F0;
loc_821C37E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821C37F0:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821c3800
	if (!ctx.cr6.eq) goto loc_821C3800;
	// rlwinm. r9,r4,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821c37e8
	if (ctx.cr0.eq) goto loc_821C37E8;
loc_821C3800:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c37e8
	if (ctx.cr6.eq) goto loc_821C37E8;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// li r9,11
	ctx.r9.s64 = 11;
	// blt cr6,0x821c3818
	if (ctx.cr6.lt) goto loc_821C3818;
	// li r9,12
	ctx.r9.s64 = 12;
loc_821C3818:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,77
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 77, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,11912
	ctx.r12.s64 = ctx.r12.s64 + 11912;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32228
	ctx.r12.s64 = -2112094208;
	// nop 
	// addi r12,r12,14412
	ctx.r12.s64 = ctx.r12.s64 + 14412;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821C384C;
	case 1:
		goto loc_821C385C;
	case 2:
		goto loc_821C3888;
	case 3:
		goto loc_821C38A8;
	case 4:
		goto loc_821C38BC;
	case 5:
		goto loc_821C38C4;
	case 6:
		goto loc_821C38D4;
	case 7:
		goto loc_821C3974;
	case 8:
		goto loc_821C38FC;
	case 9:
		goto loc_821C391C;
	case 10:
		goto loc_821C3938;
	case 11:
		goto loc_821C394C;
	case 12:
		goto loc_821C392C;
	case 13:
		goto loc_821C395C;
	case 14:
		goto loc_821C385C;
	case 15:
		goto loc_821C392C;
	case 16:
		goto loc_821C395C;
	case 17:
		goto loc_821C396C;
	case 18:
		goto loc_821C397C;
	case 19:
		goto loc_821C385C;
	case 20:
		goto loc_821C385C;
	case 21:
		goto loc_821C391C;
	case 22:
		goto loc_821C38D4;
	case 23:
		goto loc_821C3974;
	case 24:
		goto loc_821C39A0;
	case 25:
		goto loc_821C39A0;
	case 26:
		goto loc_821C39A0;
	case 27:
		goto loc_821C39A0;
	case 28:
		goto loc_821C39A0;
	case 29:
		goto loc_821C39A0;
	case 30:
		goto loc_821C39A0;
	case 31:
		goto loc_821C39A0;
	case 32:
		goto loc_821C39A0;
	case 33:
		goto loc_821C39A0;
	case 34:
		goto loc_821C39A0;
	case 35:
		goto loc_821C384C;
	case 36:
		goto loc_821C385C;
	case 37:
		goto loc_821C3888;
	case 38:
		goto loc_821C38A8;
	case 39:
		goto loc_821C38BC;
	case 40:
		goto loc_821C38C4;
	case 41:
		goto loc_821C38D4;
	case 42:
		goto loc_821C3974;
	case 43:
		goto loc_821C38FC;
	case 44:
		goto loc_821C385C;
	case 45:
		goto loc_821C384C;
	case 46:
		goto loc_821C38A8;
	case 47:
		goto loc_821C39A0;
	case 48:
		goto loc_821C39A0;
	case 49:
		goto loc_821C39A0;
	case 50:
		goto loc_821C39A0;
	case 51:
		goto loc_821C39A0;
	case 52:
		goto loc_821C39A0;
	case 53:
		goto loc_821C39A0;
	case 54:
		goto loc_821C39A0;
	case 55:
		goto loc_821C39A0;
	case 56:
		goto loc_821C39A0;
	case 57:
		goto loc_821C39A0;
	case 58:
		goto loc_821C39A0;
	case 59:
		goto loc_821C39A0;
	case 60:
		goto loc_821C39A0;
	case 61:
		goto loc_821C39A0;
	case 62:
		goto loc_821C39A0;
	case 63:
		goto loc_821C3870;
	case 64:
		goto loc_821C3880;
	case 65:
		goto loc_821C3898;
	case 66:
		goto loc_821C38A8;
	case 67:
		goto loc_821C38BC;
	case 68:
		goto loc_821C38C4;
	case 69:
		goto loc_821C38E4;
	case 70:
		goto loc_821C38F4;
	case 71:
		goto loc_821C390C;
	case 72:
		goto loc_821C398C;
	case 73:
		goto loc_821C3880;
	case 74:
		goto loc_821C38BC;
	case 75:
		goto loc_821C3870;
	case 76:
		goto loc_821C38A8;
	case 77:
		goto loc_821C38C4;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_821C384C:
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c3864
	if (ctx.cr0.eq) goto loc_821C3864;
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821c3864
	if (!ctx.cr0.eq) goto loc_821C3864;
loc_821C385C:
	// rlwinm. r11,r4,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_821C3860:
	// bne 0x821c399c
	if (!ctx.cr0.eq) goto loc_821C399C;
loc_821C3864:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821c399c
	goto loc_821C399C;
loc_821C3870:
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_821C3880:
	// rlwinm. r11,r4,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x821c3998
	goto loc_821C3998;
loc_821C3888:
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c3864
	if (ctx.cr0.eq) goto loc_821C3864;
	// rlwinm. r11,r4,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x821c3860
	goto loc_821C3860;
loc_821C3898:
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_821C389C:
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r11,r4,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x821c3998
	goto loc_821C3998;
loc_821C38A8:
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// b 0x821c3880
	goto loc_821C3880;
loc_821C38BC:
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x821c389c
	goto loc_821C389C;
loc_821C38C4:
	// rlwinm. r11,r4,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// rlwinm. r11,r4,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x821c3998
	goto loc_821C3998;
loc_821C38D4:
	// lha r11,5838(r10)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 5838));
loc_821C38D8:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bgt cr6,0x821c399c
	if (ctx.cr6.gt) goto loc_821C399C;
	// b 0x821c3864
	goto loc_821C3864;
loc_821C38E4:
	// lha r11,5838(r10)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 5838));
loc_821C38E8:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x821c399c
	goto loc_821C399C;
loc_821C38F4:
	// lha r11,5840(r10)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 5840));
	// b 0x821c38e8
	goto loc_821C38E8;
loc_821C38FC:
	// lwz r11,5792(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 5792);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821c399c
	if (ctx.cr6.eq) goto loc_821C399C;
	// b 0x821c3864
	goto loc_821C3864;
loc_821C390C:
	// lwz r11,5792(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 5792);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x821c399c
	goto loc_821C399C;
loc_821C391C:
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c3864
	if (ctx.cr0.eq) goto loc_821C3864;
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821c3864
	if (!ctx.cr0.eq) goto loc_821C3864;
loc_821C392C:
	// rlwinm. r11,r4,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_821C3930:
	// beq 0x821c3864
	if (ctx.cr0.eq) goto loc_821C3864;
	// b 0x821c38d4
	goto loc_821C38D4;
loc_821C3938:
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c3864
	if (ctx.cr0.eq) goto loc_821C3864;
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c3864
	if (ctx.cr0.eq) goto loc_821C3864;
	// b 0x821c392c
	goto loc_821C392C;
loc_821C394C:
	// rlwinm. r11,r4,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821c3864
	if (!ctx.cr0.eq) goto loc_821C3864;
	// rlwinm. r11,r4,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x821c3930
	goto loc_821C3930;
loc_821C395C:
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c3864
	if (ctx.cr0.eq) goto loc_821C3864;
	// rlwinm. r11,r4,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x821c3930
	goto loc_821C3930;
loc_821C396C:
	// rlwinm. r11,r4,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_821C3970:
	// beq 0x821c3864
	if (ctx.cr0.eq) goto loc_821C3864;
loc_821C3974:
	// lha r11,5840(r10)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 5840));
	// b 0x821c38d8
	goto loc_821C38D8;
loc_821C397C:
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c3864
	if (ctx.cr0.eq) goto loc_821C3864;
	// rlwinm. r11,r4,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x821c3970
	goto loc_821C3970;
loc_821C398C:
	// rlwinm. r11,r4,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r11,r5,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_821C3998:
	// beqlr 
	if (ctx.cr0.eq) return;
loc_821C399C:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_821C39A0:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CDA70) {
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
	ctx.lr = 0x821CDA78;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,19672(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 19672);
	// extsb r28,r10
	r28.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821cdbd8
	if (ctx.cr6.eq) goto loc_821CDBD8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821cdb90
	if (ctx.cr6.eq) goto loc_821CDB90;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821cdb30
	if (ctx.cr6.eq) goto loc_821CDB30;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x821cdc6c
	if (!ctx.cr6.eq) goto loc_821CDC6C;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-9512
	ctx.r10.s64 = ctx.r10.s64 + -9512;
	// addi r8,r10,-76
	ctx.r8.s64 = ctx.r10.s64 + -76;
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// blt cr6,0x821cdc6c
	if (ctx.cr6.lt) goto loc_821CDC6C;
	// lis r9,-32171
	ctx.r9.s64 = -2108358656;
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,864(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 864);
	// addi r9,r9,31432
	ctx.r9.s64 = ctx.r9.s64 + 31432;
	// li r30,0
	r30.s64 = 0;
	// addi r7,r9,64
	ctx.r7.s64 = ctx.r9.s64 + 64;
	// stw r30,19764(r3)
	REX_STORE_U32(ctx.r3.u32 + 19764, r30.u32);
	// addi r4,r9,68
	ctx.r4.s64 = ctx.r9.s64 + 68;
	// addi r8,r10,-64
	ctx.r8.s64 = ctx.r10.s64 + -64;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r3,r11,r7
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// addi r7,r31,19756
	ctx.r7.s64 = r31.s64 + 19756;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x821f7aa0
	ctx.lr = 0x821CDB24;
	sub_821F7AA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,19672(r31)
	REX_STORE_U32(r31.u32 + 19672, ctx.r11.u32);
	// b 0x821cdc6c
	goto loc_821CDC6C;
loc_821CDB30:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821cdc6c
	if (!ctx.cr6.eq) goto loc_821CDC6C;
	// lha r11,88(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 88));
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x821cdc6c
	if (ctx.cr6.eq) goto loc_821CDC6C;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// beq cr6,0x821cdc6c
	if (ctx.cr6.eq) goto loc_821CDC6C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lha r4,140(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 140));
	// bl 0x821c91f0
	ctx.lr = 0x821CDB64;
	sub_821C91F0(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-9512
	ctx.r11.s64 = ctx.r11.s64 + -9512;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x821cdc6c
	if (ctx.cr6.eq) goto loc_821CDC6C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lha r4,140(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 140));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c9ef8
	ctx.lr = 0x821CDB8C;
	sub_821C9EF8(ctx, base);
	// b 0x821cdc6c
	goto loc_821CDC6C;
loc_821CDB90:
	// lwz r11,19764(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19764);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821cdc6c
	if (!ctx.cr6.gt) goto loc_821CDC6C;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-9512
	ctx.r11.s64 = ctx.r11.s64 + -9512;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,19672(r31)
	REX_STORE_U32(r31.u32 + 19672, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stdx r8,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u64);
	// lwz r4,864(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 864);
	// lwz r5,19768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 19768);
	// bl 0x821cd640
	ctx.lr = 0x821CDBD4;
	sub_821CD640(ctx, base);
	// b 0x821cdc6c
	goto loc_821CDC6C;
loc_821CDBD8:
	// lha r11,88(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 88));
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x821cdbec
	if (ctx.cr6.eq) goto loc_821CDBEC;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bne cr6,0x821cdbfc
	if (!ctx.cr6.eq) goto loc_821CDBFC;
loc_821CDBEC:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-7176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -7176);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x821cdc6c
	if (ctx.cr6.eq) goto loc_821CDC6C;
loc_821CDBFC:
	// li r30,0
	r30.s64 = 0;
	// stw r30,11004(r31)
	REX_STORE_U32(r31.u32 + 11004, r30.u32);
	// stw r30,11000(r31)
	REX_STORE_U32(r31.u32 + 11000, r30.u32);
	// sth r30,10988(r31)
	REX_STORE_U16(r31.u32 + 10988, r30.u16);
	// sth r30,10990(r31)
	REX_STORE_U16(r31.u32 + 10990, r30.u16);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821cdc24
	if (ctx.cr6.eq) goto loc_821CDC24;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
loc_821CDC24:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// rlwinm r27,r28,3,0,28
	r27.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r29,r11,-9512
	r29.s64 = ctx.r11.s64 + -9512;
	// rlwinm r28,r28,2,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r29,-64
	r26.s64 = r29.s64 + -64;
	// addi r11,r29,-76
	ctx.r11.s64 = r29.s64 + -76;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r10,19672(r31)
	REX_STORE_U32(r31.u32 + 19672, ctx.r10.u32);
	// ldx r3,r27,r26
	ctx.r3.u64 = REX_LOAD_U64(r27.u32 + r26.u32);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// stwx r30,r28,r11
	REX_STORE_U32(r28.u32 + ctx.r11.u32, r30.u32);
	// beq cr6,0x821cdc58
	if (ctx.cr6.eq) goto loc_821CDC58;
	// bl 0x821f7908
	ctx.lr = 0x821CDC58;
	sub_821F7908(ctx, base);
loc_821CDC58:
	// stdx r30,r27,r26
	REX_STORE_U64(r27.u32 + r26.u32, r30.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lha r4,140(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 140));
	// bl 0x821c91f0
	ctx.lr = 0x821CDC68;
	sub_821C91F0(ctx, base);
	// stwx r3,r28,r29
	REX_STORE_U32(r28.u32 + r29.u32, ctx.r3.u32);
loc_821CDC6C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_821D7728) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,24
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 24, ctx.xer);
	// bgt cr6,0x821d777c
	if (ctx.cr6.gt) goto loc_821D777C;
	// beq cr6,0x821d7774
	if (ctx.cr6.eq) goto loc_821D7774;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x821d776c
	if (ctx.cr6.eq) goto loc_821D776C;
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// beq cr6,0x821d7764
	if (ctx.cr6.eq) goto loc_821D7764;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// beq cr6,0x821d775c
	if (ctx.cr6.eq) goto loc_821D775C;
	// cmpwi cr6,r4,20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 20, ctx.xer);
	// bne cr6,0x821d7794
	if (!ctx.cr6.eq) goto loc_821D7794;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821d77b0
	goto loc_821D77B0;
loc_821D775C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821d77b0
	goto loc_821D77B0;
loc_821D7764:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821d77b0
	goto loc_821D77B0;
loc_821D776C:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x821d77b0
	goto loc_821D77B0;
loc_821D7774:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821d77b0
	goto loc_821D77B0;
loc_821D777C:
	// cmpwi cr6,r4,30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 30, ctx.xer);
	// beq cr6,0x821d77ac
	if (ctx.cr6.eq) goto loc_821D77AC;
	// cmpwi cr6,r4,31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 31, ctx.xer);
	// beq cr6,0x821d77a4
	if (ctx.cr6.eq) goto loc_821D77A4;
	// cmpwi cr6,r4,32
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 32, ctx.xer);
	// beq cr6,0x821d779c
	if (ctx.cr6.eq) goto loc_821D779C;
loc_821D7794:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_821D779C:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x821d77b0
	goto loc_821D77B0;
loc_821D77A4:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x821d77b0
	goto loc_821D77B0;
loc_821D77AC:
	// li r11,6
	ctx.r11.s64 = 6;
loc_821D77B0:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r10,r10,3668
	ctx.r10.u64 = ctx.r10.u64 | 3668;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r10,r3,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 & ctx.r9.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D8CC8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,16568(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16568);
	// lwz r10,16624(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16624);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,16568(r3)
	REX_STORE_U32(ctx.r3.u32 + 16568, ctx.r11.u32);
	// stw r10,16624(r3)
	REX_STORE_U32(ctx.r3.u32 + 16624, ctx.r10.u32);
	// lhz r11,606(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 606);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r9,16628(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,16572(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16572);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,16628(r3)
	REX_STORE_U32(ctx.r3.u32 + 16628, ctx.r9.u32);
	// stw r10,16572(r3)
	REX_STORE_U32(ctx.r3.u32 + 16572, ctx.r10.u32);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x821d8d98
	if (!ctx.cr6.gt) goto loc_821D8D98;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821d8d7c
	if (ctx.cr6.eq) goto loc_821D8D7C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821d8d60
	if (ctx.cr6.eq) goto loc_821D8D60;
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lwz r10,16636(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16636);
	// lwz r11,16580(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16580);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,16636(r3)
	REX_STORE_U32(ctx.r3.u32 + 16636, ctx.r10.u32);
	// stw r11,16580(r3)
	REX_STORE_U32(ctx.r3.u32 + 16580, ctx.r11.u32);
	// blr 
	return;
loc_821D8D60:
	// lwz r10,16644(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16644);
	// lwz r11,16588(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16588);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,16644(r3)
	REX_STORE_U32(ctx.r3.u32 + 16644, ctx.r10.u32);
	// stw r11,16588(r3)
	REX_STORE_U32(ctx.r3.u32 + 16588, ctx.r11.u32);
	// blr 
	return;
loc_821D8D7C:
	// lwz r10,16640(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16640);
	// lwz r11,16584(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16584);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,16640(r3)
	REX_STORE_U32(ctx.r3.u32 + 16640, ctx.r10.u32);
	// stw r11,16584(r3)
	REX_STORE_U32(ctx.r3.u32 + 16584, ctx.r11.u32);
	// blr 
	return;
loc_821D8D98:
	// lwz r10,16632(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16632);
	// lwz r11,16576(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16576);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,16632(r3)
	REX_STORE_U32(ctx.r3.u32 + 16632, ctx.r10.u32);
	// stw r11,16576(r3)
	REX_STORE_U32(ctx.r3.u32 + 16576, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DD730) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,432
	ctx.r10.s64 = ctx.r10.s64 + 432;
	// sth r11,428(r10)
	REX_STORE_U16(ctx.r10.u32 + 428, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DDBC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r11,5128
	ctx.r9.s64 = ctx.r11.s64 + 5128;
loc_821DDBD0:
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// li r10,88
	ctx.r10.s64 = 88;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821ddbf8
	if (!ctx.cr6.lt) goto loc_821DDBF8;
	// li r3,87
	ctx.r3.s64 = 87;
loc_821DDBF8:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbzx r11,r3,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
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
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x821ddbd0
	if (ctx.cr6.lt) goto loc_821DDBD0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E0AA0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// lis r8,-32226
	ctx.r8.s64 = -2111963136;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r6,r7,15636
	ctx.r6.s64 = ctx.r7.s64 + 15636;
	// addi r9,r10,-22768
	ctx.r9.s64 = ctx.r10.s64 + -22768;
	// addi r8,r8,2624
	ctx.r8.s64 = ctx.r8.s64 + 2624;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x821f7d50
	ctx.lr = 0x821E0AF4;
	sub_821F7D50(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e0b10
	if (ctx.cr0.eq) goto loc_821E0B10;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x821e0b14
	goto loc_821E0B14;
loc_821E0B10:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_821E0B14:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r10,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, ctx.r10.u64);
	// addi r9,r3,80
	ctx.r9.s64 = ctx.r3.s64 + 80;
	// stb r10,90(r3)
	REX_STORE_U8(ctx.r3.u32 + 90, ctx.r10.u8);
	// lis r8,-32173
	ctx.r8.s64 = -2108489728;
	// stb r10,104(r3)
	REX_STORE_U8(ctx.r3.u32 + 104, ctx.r10.u8);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stb r10,91(r3)
	REX_STORE_U8(ctx.r3.u32 + 91, ctx.r10.u8);
	// addi r8,r8,-5488
	ctx.r8.s64 = ctx.r8.s64 + -5488;
	// stw r31,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, r31.u32);
	// lfs f0,2028(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2028);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f12,f31,f0
	ctx.f12.f64 = double(float(f31.f64 * ctx.f0.f64));
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// stw r8,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r8.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stb r11,105(r3)
	REX_STORE_U8(ctx.r3.u32 + 105, ctx.r11.u8);
	// lfs f0,15632(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15632);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,106(r3)
	REX_STORE_U8(ctx.r3.u32 + 106, ctx.r11.u8);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r9,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r9.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// sth r11,88(r3)
	REX_STORE_U16(ctx.r3.u32 + 88, ctx.r11.u16);
	// stb r11,109(r3)
	REX_STORE_U8(ctx.r3.u32 + 109, ctx.r11.u8);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stb r11,188(r3)
	REX_STORE_U8(ctx.r3.u32 + 188, ctx.r11.u8);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stb r11,187(r3)
	REX_STORE_U8(ctx.r3.u32 + 187, ctx.r11.u8);
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r10,189(r3)
	REX_STORE_U8(ctx.r3.u32 + 189, ctx.r10.u8);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// fctiwz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lfs f0,15624(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 15624);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lfs f0,1992(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,15628(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 15628);
	ctx.f13.f64 = double(temp.f32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stfs f13,116(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f13,164(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// rlwimi r11,r9,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stfs f0,168(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stw r11,144(r3)
	REX_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r30,192(r3)
	REX_STORE_U32(ctx.r3.u32 + 192, r30.u32);
	// lwz r11,-7176(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -7176);
	// stw r11,196(r3)
	REX_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

DEFINE_REX_FUNC(sub_821E4808) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e7c
	ctx.lr = 0x821E4810;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f30
	ctx.lr = 0x821E4818;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821aff90
	ctx.lr = 0x821E4824;
	sub_821AFF90(ctx, base);
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r6,r31,124
	ctx.r6.s64 = r31.s64 + 124;
	// addi r3,r11,-13224
	ctx.r3.s64 = ctx.r11.s64 + -13224;
	// li r5,14
	ctx.r5.s64 = 14;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x8219a078
	ctx.lr = 0x821E483C;
	sub_8219A078(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f31,16228(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16228);
	f31.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f30,16264(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16264);
	f30.f64 = double(temp.f32);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lfs f29,2008(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2008);
	f29.f64 = double(temp.f32);
	// li r28,1
	r28.s64 = 1;
	// lfs f27,26632(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 26632);
	f27.f64 = double(temp.f32);
	// addi r30,r11,-4224
	r30.s64 = ctx.r11.s64 + -4224;
	// lfs f5,28232(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28232);
	ctx.f5.f64 = double(temp.f32);
	// li r29,0
	r29.s64 = 0;
	// lfs f4,16224(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16224);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,20608(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20608);
	ctx.f1.f64 = double(temp.f32);
	// fmr f7,f31
	ctx.f7.f64 = f31.f64;
	// stw r28,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// fmr f6,f30
	ctx.f6.f64 = f30.f64;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// bl 0x82104548
	ctx.lr = 0x821E48AC;
	sub_82104548(ctx, base);
	// stw r3,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb2c0
	ctx.lr = 0x821E48B8;
	sub_821EB2C0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-7380
	ctx.r3.s64 = ctx.r11.s64 + -7380;
	// bl 0x821eacb0
	ctx.lr = 0x821E48C4;
	sub_821EACB0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// addi r27,r11,432
	r27.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// lwz r4,344(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821E48DC;
	sub_820E68B8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r4,344(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 344);
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// bl 0x820e68b8
	ctx.lr = 0x821E48F0;
	sub_820E68B8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lis r3,3840
	ctx.r3.s64 = 251658240;
	// lwz r4,344(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 344);
	// ori r3,r3,65
	ctx.r3.u64 = ctx.r3.u64 | 65;
	// bl 0x820e68b8
	ctx.lr = 0x821E4904;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,16204
	ctx.r5.s64 = ctx.r11.s64 + 16204;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// bl 0x820e6fc8
	ctx.lr = 0x821E4924;
	sub_820E6FC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// lfs f13,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lwz r4,344(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 344);
	// ori r3,r3,27
	ctx.r3.u64 = ctx.r3.u64 | 27;
	// lfs f0,2332(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2332);
	ctx.f0.f64 = double(temp.f32);
	// fadds f26,f13,f0
	f26.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f28,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	f28.f64 = double(temp.f32);
	// bl 0x820e68b8
	ctx.lr = 0x821E4948;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,16192
	ctx.r5.s64 = ctx.r11.s64 + 16192;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e6fc8
	ctx.lr = 0x821E4960;
	sub_820E6FC8(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(f28.f64, ctx.f0.f64);
	// bge cr6,0x821e4970
	if (!ctx.cr6.lt) goto loc_821E4970;
	// fmr f28,f0
	f28.f64 = ctx.f0.f64;
loc_821E4970:
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f10,f0,f26
	ctx.f10.f64 = double(float(ctx.f0.f64 + f26.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f4,f28,f27
	ctx.f4.f64 = double(float(f28.f64 + f27.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f7,f31
	ctx.f7.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f6,f30
	ctx.f6.f64 = f30.f64;
	// lfs f13,26552(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26552);
	ctx.f13.f64 = double(temp.f32);
	// stw r28,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// lfs f0,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// lfs f12,15632(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15632);
	ctx.f12.f64 = double(temp.f32);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// lfs f11,15628(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15628);
	ctx.f11.f64 = double(temp.f32);
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// fadds f5,f10,f13
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fnmsubs f1,f4,f0,f12
	ctx.f1.f64 = double(float(-std::fma(ctx.f4.f64, ctx.f0.f64, -ctx.f12.f64)));
	// fnmsubs f2,f5,f0,f11
	ctx.f2.f64 = double(float(-std::fma(ctx.f5.f64, ctx.f0.f64, -ctx.f11.f64)));
	// bl 0x82104548
	ctx.lr = 0x821E49CC;
	sub_82104548(ctx, base);
	// stw r3,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f5,16188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16188);
	ctx.f5.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f7,f31
	ctx.f7.f64 = f31.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f6,f30
	ctx.f6.f64 = f30.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// stw r28,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// lfs f4,16184(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16184);
	ctx.f4.f64 = double(temp.f32);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// lfs f2,2084(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2084);
	ctx.f2.f64 = double(temp.f32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// lfs f1,16896(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16896);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82104548
	ctx.lr = 0x821E4A14;
	sub_82104548(ctx, base);
	// stw r3,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,14
	ctx.r3.s64 = 14;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212bc38
	ctx.lr = 0x821E4A28;
	sub_8212BC38(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r29,116(r31)
	REX_STORE_U32(r31.u32 + 116, r29.u32);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f7c
	ctx.lr = 0x821E4A40;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_821ED4B0) {
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
	ctx.lr = 0x821ED4B8;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f38
	ctx.lr = 0x821ED4C0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r11,1823(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1823);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821ed6c8
	if (!ctx.cr0.eq) goto loc_821ED6C8;
	// lwz r26,96(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// lhz r29,88(r3)
	r29.u64 = REX_LOAD_U16(ctx.r3.u32 + 88);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x821ed500
	if (!ctx.cr6.eq) goto loc_821ED500;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lbz r4,104(r3)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + 104);
	// lwz r3,100(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// addi r26,r11,-248
	r26.s64 = ctx.r11.s64 + -248;
	// bl 0x821ed388
	ctx.lr = 0x821ED500;
	sub_821ED388(ctx, base);
loc_821ED500:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x821ed6c8
	if (ctx.cr6.eq) goto loc_821ED6C8;
	// lwz r31,92(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 92);
	// mr r25,r29
	r25.u64 = r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x821ed6c8
	if (!ctx.cr6.gt) goto loc_821ED6C8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r28,r11,-32032
	r28.s64 = ctx.r11.s64 + -32032;
	// lfs f28,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f28.f64 = double(temp.f32);
	// lfs f29,16908(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16908);
	f29.f64 = double(temp.f32);
loc_821ED530:
	// lbz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821ed6bc
	if (ctx.cr0.eq) goto loc_821ED6BC;
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1b70
	ctx.lr = 0x821ED54C;
	sub_820E1B70(ctx, base);
	// lfs f11,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// fmr f30,f11
	f30.f64 = ctx.f11.f64;
	// bl 0x821ed290
	ctx.lr = 0x821ED55C;
	sub_821ED290(ctx, base);
	// stfs f11,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f11,f29
	ctx.cr6.compare(ctx.f11.f64, f29.f64);
	// ble cr6,0x821ed6bc
	if (!ctx.cr6.gt) goto loc_821ED6BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ec7c8
	ctx.lr = 0x821ED574;
	sub_821EC7C8(ctx, base);
	// lhz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 16);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// clrlwi r29,r11,27
	r29.u64 = ctx.r11.u32 & 0x1F;
	// addi r3,r28,332
	ctx.r3.s64 = r28.s64 + 332;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(r29.u32, 2, ctx.xer);
	// beq cr6,0x821ed5b8
	if (ctx.cr6.eq) goto loc_821ED5B8;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x821f1818
	ctx.lr = 0x821ED594;
	sub_821F1818(ctx, base);
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,6
	ctx.cr6.compare<uint32_t>(r29.u32, 6, ctx.xer);
	// bne cr6,0x821ed5b0
	if (!ctx.cr6.eq) goto loc_821ED5B0;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821ed5c8
	goto loc_821ED5C8;
loc_821ED5B0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821ed5c8
	goto loc_821ED5C8;
loc_821ED5B8:
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x821f1818
	ctx.lr = 0x821ED5C0;
	sub_821F1818(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_821ED5C8:
	// stb r11,91(r30)
	REX_STORE_U8(r30.u32 + 91, ctx.r11.u8);
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// ble cr6,0x821ed5ec
	if (!ctx.cr6.gt) goto loc_821ED5EC;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fdivs f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 / ctx.f0.f64));
	// b 0x821ed5f8
	goto loc_821ED5F8;
loc_821ED5EC:
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r9,256
	ctx.r9.s64 = 256;
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_821ED5F8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// ld r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 80);
	// stw r11,64(r10)
	REX_STORE_U32(ctx.r10.u32 + 64, ctx.r11.u32);
	// stw r27,68(r10)
	REX_STORE_U32(ctx.r10.u32 + 68, r27.u32);
	// lfs f13,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,48(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// lfs f0,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,52(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 52, temp.u32);
	// lwz r11,100(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 100);
	// stw r11,60(r10)
	REX_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lbz r11,104(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 104);
	// stb r11,76(r10)
	REX_STORE_U8(ctx.r10.u32 + 76, ctx.r11.u8);
	// lbz r11,108(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 108);
	// stb r11,77(r10)
	REX_STORE_U8(ctx.r10.u32 + 77, ctx.r11.u8);
	// lbz r11,111(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 111);
	// sth r11,74(r10)
	REX_STORE_U16(ctx.r10.u32 + 74, ctx.r11.u16);
	// lbz r11,109(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 109);
	// stb r11,78(r10)
	REX_STORE_U8(ctx.r10.u32 + 78, ctx.r11.u8);
	// lbz r11,75(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 75);
	// stb r11,79(r10)
	REX_STORE_U8(ctx.r10.u32 + 79, ctx.r11.u8);
	// lbz r11,74(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 74);
	// rlwinm r11,r11,0,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30;
	// stb r11,72(r10)
	REX_STORE_U8(ctx.r10.u32 + 72, ctx.r11.u8);
	// lbz r11,74(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 74);
	// rlwinm r11,r11,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// stb r11,73(r10)
	REX_STORE_U8(ctx.r10.u32 + 73, ctx.r11.u8);
	// lbz r5,77(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 77);
	// lhz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 72);
	// rotlwi r11,r11,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 6);
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + r26.u64;
	// bl 0x821ec8d8
	ctx.lr = 0x821ED6A8;
	sub_821EC8D8(ctx, base);
	// lbz r11,90(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 90);
	// addi r4,r10,80
	ctx.r4.s64 = ctx.r10.s64 + 80;
	// addi r3,r28,332
	ctx.r3.s64 = r28.s64 + 332;
	// or r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 | ctx.r9.u64;
	// bl 0x821f1a48
	ctx.lr = 0x821ED6BC;
	sub_821F1A48(ctx, base);
loc_821ED6BC:
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r31,r31,80
	r31.s64 = r31.s64 + 80;
	// bgt 0x821ed530
	if (ctx.cr0.gt) goto loc_821ED530;
loc_821ED6C8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f84
	ctx.lr = 0x821ED6D4;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_821F84E8) {
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
	// bl 0x821f8450
	ctx.lr = 0x821F84F8;
	sub_821F8450(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f8508
	if (ctx.cr0.eq) goto loc_821F8508;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x821f850c
	goto loc_821F850C;
loc_821F8508:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821F850C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F96B8) {
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
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r11,1823(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1823);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821f9720
	if (!ctx.cr0.eq) goto loc_821F9720;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,3380
	ctx.r11.s64 = ctx.r11.s64 + 3380;
	// lbz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 64);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821f9720
	if (ctx.cr0.eq) goto loc_821F9720;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x821f93b8
	ctx.lr = 0x821F9720;
	sub_821F93B8(ctx, base);
loc_821F9720:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FABA0) {
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
	// beq cr6,0x821fabd0
	if (ctx.cr6.eq) goto loc_821FABD0;
	// clrlwi. r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821fabd0
	if (!ctx.cr0.eq) goto loc_821FABD0;
	// stw r4,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r4.u32);
	// stw r5,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r5.u32);
	// bl 0x821faa38
	ctx.lr = 0x821FABC8;
	sub_821FAA38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821fabd4
	goto loc_821FABD4;
loc_821FABD0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821FABD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FB5D0) {
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
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23344
	ctx.r11.s64 = ctx.r11.s64 + -23344;
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// bl 0x821fee08
	ctx.lr = 0x821FB5F4;
	sub_821FEE08(ctx, base);
	// stfs f1,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// bl 0x821fedc8
	ctx.lr = 0x821FB5FC;
	sub_821FEDC8(ctx, base);
	// stfs f1,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// bl 0x821fee88
	ctx.lr = 0x821FB604;
	sub_821FEE88(ctx, base);
	// stfs f1,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// bl 0x821feec8
	ctx.lr = 0x821FB60C;
	sub_821FEEC8(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stfs f1,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// addi r10,r11,116
	ctx.r10.s64 = ctx.r11.s64 + 116;
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// stw r10,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// stw r10,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// lwz r10,124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// lwz r10,128(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// lwz r10,132(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// stw r10,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// lwz r10,136(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// lwz r10,140(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// lwz r10,144(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// stw r10,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// lfs f0,60(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
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

DEFINE_REX_FUNC(sub_822002F0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82200328
	if (ctx.cr6.eq) goto loc_82200328;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// bl 0x821d6398
	ctx.lr = 0x82200328;
	sub_821D6398(ctx, base);
loc_82200328:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82200340
	if (ctx.cr6.gt) goto loc_82200340;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82200340:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// lfs f13,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82200358
	if (ctx.cr6.lt) goto loc_82200358;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82200358:
	// stfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82200408
	if (!ctx.cr6.eq) goto loc_82200408;
	// lfs f11,220(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 220);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,224(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 224);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f3,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f4,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f4.f64 = double(temp.f32);
	// lfs f9,228(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 228);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f4,f4,f10
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// lfs f12,76(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,244(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 244);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f1,f12,f9
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// lfs f2,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// lfs f8,240(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 240);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f2,f2,f7
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f7.f64));
	// lfs f6,248(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 248);
	ctx.f6.f64 = double(temp.f32);
	// lfs f13,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,60(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f5,f13,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fsubs f31,f12,f6
	f31.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// lfs f30,108(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 108);
	f30.f64 = double(temp.f32);
	// fmadds f11,f3,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f11.f64)));
	// stfs f11,220(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 220, temp.u32);
	// fmadds f11,f4,f0,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f10.f64)));
	// lfs f12,328(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 328);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,224(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 224, temp.u32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// fmadds f0,f1,f0,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfs f0,228(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 228, temp.u32);
	// fmadds f0,f2,f30,f7
	ctx.f0.f64 = double(float(std::fma(ctx.f2.f64, f30.f64, ctx.f7.f64)));
	// stfs f0,244(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 244, temp.u32);
	// fmadds f8,f5,f30,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f5.f64, f30.f64, ctx.f8.f64)));
	// stfs f8,240(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 240, temp.u32);
	// fmadds f0,f31,f30,f6
	ctx.f0.f64 = double(float(std::fma(f31.f64, f30.f64, ctx.f6.f64)));
	// stfs f0,248(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 248, temp.u32);
	// ble cr6,0x822003f0
	if (!ctx.cr6.gt) goto loc_822003F0;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_822003F0:
	// lfs f0,324(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82200404
	if (ctx.cr6.lt) goto loc_82200404;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82200404:
	// stfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
loc_82200408:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

DEFINE_REX_FUNC(sub_82205E08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82205f2c
	if (ctx.cr6.eq) goto loc_82205F2C;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r5,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r31,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r31.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82205e5c
	if (!ctx.cr6.eq) goto loc_82205E5C;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82205ee8
	goto loc_82205EE8;
loc_82205E5C:
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82205E60:
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82205e78
	if (!ctx.cr6.lt) goto loc_82205E78;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82205e60
	if (!ctx.cr6.eq) goto loc_82205E60;
loc_82205E78:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82205edc
	if (ctx.cr6.eq) goto loc_82205EDC;
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82205ef4
	if (!ctx.cr6.eq) goto loc_82205EF4;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82205ef4
	if (ctx.cr6.eq) goto loc_82205EF4;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82205ebc
	if (!ctx.cr6.eq) goto loc_82205EBC;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82205f24
	if (ctx.cr6.eq) goto loc_82205F24;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82205f24
	goto loc_82205F24;
loc_82205EBC:
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82205ed4
	if (!ctx.cr6.eq) goto loc_82205ED4;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82205ebc
	if (!ctx.cr6.eq) goto loc_82205EBC;
loc_82205ED4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82205ef4
	if (!ctx.cr6.eq) goto loc_82205EF4;
loc_82205EDC:
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82205EE8:
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// b 0x82205f24
	goto loc_82205F24;
loc_82205EF4:
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82205f00
	if (!ctx.cr6.eq) goto loc_82205F00;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_82205F00:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// beq cr6,0x82205f1c
	if (ctx.cr6.eq) goto loc_82205F1C;
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// b 0x82205f20
	goto loc_82205F20;
loc_82205F1C:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82205F20:
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82205F24:
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x82205f30
	goto loc_82205F30;
loc_82205F2C:
	// stw r31,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r31.u32);
loc_82205F30:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220A828) {
	REX_FUNC_PROLOGUE();
	// lwz r11,336(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,256(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// stw r3,352(r11)
	REX_STORE_U32(ctx.r11.u32 + 352, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220B200) {
	REX_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r10,80
	ctx.r10.s64 = 80;
	// li r11,96
	ctx.r11.s64 = 96;
	// li r12,112
	ctx.r12.s64 = 112;
	// li r31,512
	r31.s64 = 512;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// blt cr6,0x8220b528
	if (ctx.cr6.lt) goto loc_8220B528;
loc_8220B230:
	// addi r0,r5,-1024
	ctx.r0.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r0,1024
	ctx.cr6.compare<uint32_t>(ctx.r0.u32, 1024, ctx.xer);
	// blt cr6,0x8220b240
	if (ctx.cr6.lt) goto loc_8220B240;
	// li r0,1024
	ctx.r0.s64 = 1024;
loc_8220B240:
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v9,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v14,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v15,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v16,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v17,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v18,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v19,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v20,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v21,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v22,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v23,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v24,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v25,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v26,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v27,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v28,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v29,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v30,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v31,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v32,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// xor r30,r30,r30
	r30.u64 = r30.u64 ^ r30.u64;
	// lvx128 v33,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v34,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v35,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v36,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v37,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v39,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbzl r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v41,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v42,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v43,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v44,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v45,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v47,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v48,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbzl r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v49,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbzl r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v57,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbzl r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvlx128 v1,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// stvlx128 v8,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v9,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx128 v10,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// stvlx128 v11,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvlx128 v12,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvlx128 v13,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvlx128 v14,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v14.u8[15 - i]);
	// stvlx128 v15,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v15.u8[15 - i]);
	// stvlx128 v16,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v16.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v17,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v17.u8[15 - i]);
	// stvlx128 v18,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v18.u8[15 - i]);
	// stvlx128 v19,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v19.u8[15 - i]);
	// stvlx128 v20,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v20.u8[15 - i]);
	// stvlx128 v21,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v21.u8[15 - i]);
	// stvlx128 v22,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v22.u8[15 - i]);
	// stvlx128 v23,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v23.u8[15 - i]);
	// stvlx128 v24,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v24.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v25,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v25.u8[15 - i]);
	// stvlx128 v26,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v26.u8[15 - i]);
	// stvlx128 v27,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v27.u8[15 - i]);
	// stvlx128 v28,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v28.u8[15 - i]);
	// stvlx128 v29,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v29.u8[15 - i]);
	// stvlx128 v30,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v30.u8[15 - i]);
	// stvlx128 v31,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v31.u8[15 - i]);
	// stvlx128 v32,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v32.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v33,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v33.u8[15 - i]);
	// stvlx128 v34,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v34.u8[15 - i]);
	// stvlx128 v35,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// stvlx128 v36,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// stvlx128 v37,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// stvlx128 v38,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v38.u8[15 - i]);
	// stvlx128 v39,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v39.u8[15 - i]);
	// stvlx128 v40,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v40.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v41,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v41.u8[15 - i]);
	// stvlx128 v42,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v42.u8[15 - i]);
	// stvlx128 v43,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// stvlx128 v44,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// stvlx128 v45,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v45.u8[15 - i]);
	// stvlx128 v46,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v46.u8[15 - i]);
	// stvlx128 v47,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v47.u8[15 - i]);
	// stvlx128 v48,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v49,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v49.u8[15 - i]);
	// stvlx128 v50,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v50.u8[15 - i]);
	// stvlx128 v51,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvlx128 v52,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvlx128 v53,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// stvlx128 v54,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// stvlx128 v55,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// stvlx128 v56,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v57,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// stvlx128 v58,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvlx128 v59,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvlx128 v60,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvlx128 v61,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvlx128 v62,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvlx128 v63,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvlx128 v0,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-1024
	ctx.r5.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// bge cr6,0x8220b230
	if (!ctx.cr6.lt) goto loc_8220B230;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8220b528
	if (!ctx.cr6.eq) goto loc_8220B528;
	// b 0x8220b584
	goto loc_8220B584;
loc_8220B528:
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvlx128 v1,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// stvlx128 v8,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bgt cr6,0x8220b528
	if (ctx.cr6.gt) goto loc_8220B528;
loc_8220B584:
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222C188) {
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
	ctx.lr = 0x8222C190;
	// stwu r1,-928(r1)
	ea = -928 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// mullw. r9,r5,r6
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// ble 0x8222c1c8
	if (!ctx.cr0.gt) goto loc_8222C1C8;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// subf r8,r8,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r8.u64;
loc_8222C1B0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8222c1b0
	if (ctx.cr6.lt) goto loc_8222C1B0;
loc_8222C1C8:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8222c1ec
	if (!ctx.cr6.gt) goto loc_8222C1EC;
	// addi r11,r1,28
	ctx.r11.s64 = ctx.r1.s64 + 28;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x8222c1ec
	if (ctx.cr0.eq) goto loc_8222C1EC;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_8222C1E4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8222c1e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222C1E4;
loc_8222C1EC:
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// addi r9,r1,32
	ctx.r9.s64 = ctx.r1.s64 + 32;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,32
	ctx.r8.s64 = ctx.r1.s64 + 32;
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// stwx r27,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r27.u32);
	// stwx r27,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, r27.u32);
	// beq cr6,0x8222c254
	if (ctx.cr6.eq) goto loc_8222C254;
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// addi r10,r5,-3
	ctx.r10.s64 = ctx.r5.s64 + -3;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r9,r1,32
	ctx.r9.s64 = ctx.r1.s64 + 32;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// addi r8,r1,32
	ctx.r8.s64 = ctx.r1.s64 + 32;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r29.u32);
	// stwx r29,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, r29.u32);
loc_8222C254:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8222c280
	if (!ctx.cr6.gt) goto loc_8222C280;
	// addi r11,r1,32
	ctx.r11.s64 = ctx.r1.s64 + 32;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_8222C264:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8222c278
	if (!ctx.cr6.eq) goto loc_8222C278;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8222C278:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8222c264
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222C264;
loc_8222C280:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8222c5d4
	if (!ctx.cr6.gt) goto loc_8222C5D4;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// subf r30,r4,r11
	r30.u64 = ctx.r11.u64 - ctx.r4.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lfd f10,4000(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r10.u32 + 4000);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r31,4
	r31.s64 = 4;
	// lfs f12,-29984(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -29984);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f11.f64 = double(temp.f32);
loc_8222C2B4:
	// li r7,512
	ctx.r7.s64 = 512;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8222c380
	if (!ctx.cr6.gt) goto loc_8222C380;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// subf r9,r11,r30
	ctx.r9.u64 = r30.u64 - ctx.r11.u64;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// add r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 + ctx.r3.u64;
loc_8222C2D8:
	// lfsux f0,r10,r11
	ctx.fpscr.disableFlushMode();
	ea = ctx.r10.u32 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfsu f0,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8222c2d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222C2D8;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_8222C2EC:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,32
	ctx.r10.s64 = ctx.r1.s64 + 32;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r10,7
	ctx.r9.s64 = ctx.r10.s64 + 7;
	// slw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r9.u8 & 0x3F));
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// ble cr6,0x8222c338
	if (!ctx.cr6.gt) goto loc_8222C338;
	// std r9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fadd f0,f0,f10
	ctx.f0.f64 = ctx.f0.f64 + ctx.f10.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,16(r1)
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.f0.u64);
	// lwz r9,20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// b 0x8222c35c
	goto loc_8222C35C;
loc_8222C338:
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fsub f0,f0,f10
	ctx.f0.f64 = ctx.f0.f64 - ctx.f10.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,16(r1)
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.f0.u64);
	// lwz r9,20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
loc_8222C35C:
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// subfic r10,r10,2
	ctx.xer.ca = ctx.r10.u32 <= 2;
	ctx.r10.u64 = static_cast<uint64_t>(2) - ctx.r10.u64;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// subf r7,r10,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r10.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8222c2ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222C2EC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8222c470
	if (!ctx.cr6.gt) goto loc_8222C470;
loc_8222C380:
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// fmr f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f12.f64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8222c444
	if (!ctx.cr6.gt) goto loc_8222C444;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_8222C39C:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fabs f9,f0
	ctx.f9.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f11
	ctx.cr6.compare(ctx.f9.f64, ctx.f11.f64);
	// ble cr6,0x8222c400
	if (!ctx.cr6.gt) goto loc_8222C400;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,32
	ctx.r10.s64 = ctx.r1.s64 + 32;
	// lwax r4,r11,r4
	ctx.r4.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32));
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// std r4,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// slw r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r10.u8 & 0x3F));
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lfd f9,104(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f8,96(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fsubs f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fdivs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// b 0x8222c404
	goto loc_8222C404;
loc_8222C400:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_8222C404:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// bge cr6,0x8222c438
	if (!ctx.cr6.lt) goto loc_8222C438;
	// addi r10,r1,32
	ctx.r10.s64 = ctx.r1.s64 + 32;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// sraw r10,r31,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r31.s32 < 0) & (((r31.s32 >> temp.u32) << temp.u32) != r31.s32);
	ctx.r10.s64 = r31.s32 >> temp.u32;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8222c438
	if (ctx.cr6.lt) goto loc_8222C438;
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8222c438
	if (!ctx.cr6.lt) goto loc_8222C438;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_8222C438:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8222c39c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222C39C;
loc_8222C444:
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,32
	ctx.r9.s64 = ctx.r1.s64 + 32;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// sraw r8,r31,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r31.s32 < 0) & (((r31.s32 >> temp.u32) << temp.u32) != r31.s32);
	ctx.r8.s64 = r31.s32 >> temp.u32;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf. r7,r8,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// bgt 0x8222c380
	if (ctx.cr0.gt) goto loc_8222C380;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
loc_8222C470:
	// bge cr6,0x8222c58c
	if (!ctx.cr6.lt) goto loc_8222C58C;
loc_8222C474:
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// fmr f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f12.f64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8222c564
	if (!ctx.cr6.gt) goto loc_8222C564;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_8222C490:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fabs f9,f0
	ctx.f9.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f11
	ctx.cr6.compare(ctx.f9.f64, ctx.f11.f64);
	// ble cr6,0x8222c4fc
	if (!ctx.cr6.gt) goto loc_8222C4FC;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r26,r1,32
	r26.s64 = ctx.r1.s64 + 32;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r10,r11,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// slw r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r10.u8 & 0x3F));
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,72(r1)
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// lfd f9,72(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 72);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// lfd f8,80(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// frsp f9,f8
	ctx.f9.f64 = double(float(ctx.f8.f64));
	// fsubs f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fdivs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// b 0x8222c500
	goto loc_8222C500;
loc_8222C4FC:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_8222C500:
	// addi r10,r1,32
	ctx.r10.s64 = ctx.r1.s64 + 32;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// sraw r9,r31,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r31.s32 < 0) & (((r31.s32 >> temp.u32) << temp.u32) != r31.s32);
	ctx.r9.s64 = r31.s32 >> temp.u32;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x8222c558
	if (ctx.cr6.gt) goto loc_8222C558;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8222c534
	if (!ctx.cr6.eq) goto loc_8222C534;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x8222c548
	if (ctx.cr6.gt) goto loc_8222C548;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_8222C534:
	// ble cr6,0x8222c558
	if (!ctx.cr6.gt) goto loc_8222C558;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,-256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -256, ctx.xer);
	// ble cr6,0x8222c558
	if (!ctx.cr6.gt) goto loc_8222C558;
loc_8222C548:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8222c558
	if (!ctx.cr6.lt) goto loc_8222C558;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_8222C558:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8222c490
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222C490;
loc_8222C564:
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,32
	ctx.r9.s64 = ctx.r1.s64 + 32;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// sraw r9,r31,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r31.s32 < 0) & (((r31.s32 >> temp.u32) << temp.u32) != r31.s32);
	ctx.r9.s64 = r31.s32 >> temp.u32;
	// add. r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stwx r8,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// blt 0x8222c474
	if (ctx.cr0.lt) goto loc_8222C474;
loc_8222C58C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8222c5c8
	if (!ctx.cr6.gt) goto loc_8222C5C8;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// subf r9,r10,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r10.u64;
loc_8222C5A4:
	// addi r8,r1,32
	ctx.r8.s64 = ctx.r1.s64 + 32;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r7,r11,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// subfic r8,r8,2
	ctx.xer.ca = ctx.r8.u32 <= 2;
	ctx.r8.u64 = static_cast<uint64_t>(2) - ctx.r8.u64;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// stwux r8,r9,r10
	ea = ctx.r9.u32 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8222c5a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222C5A4;
loc_8222C5C8:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bne 0x8222c2b4
	if (!ctx.cr0.eq) goto loc_8222C2B4;
loc_8222C5D4:
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8223FDE8) {
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
	ctx.lr = 0x8223FDF0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r18,0
	r18.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r16,r18
	r16.u64 = r18.u64;
	// mr r19,r18
	r19.u64 = r18.u64;
	// mr r21,r18
	r21.u64 = r18.u64;
	// bl 0x822094c8
	ctx.lr = 0x8223FE0C;
	sub_822094C8(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 20);
	// li r17,28
	r17.s64 = 28;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// lwz r24,116(r29)
	r24.u64 = REX_LOAD_U32(r29.u32 + 116);
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// addi r23,r29,116
	r23.s64 = r29.s64 + 116;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// stw r11,20(r29)
	REX_STORE_U32(r29.u32 + 20, ctx.r11.u32);
	// beq cr6,0x822400d4
	if (ctx.cr6.eq) goto loc_822400D4;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r20,r11,-23760
	r20.s64 = ctx.r11.s64 + -23760;
loc_8223FE44:
	// lwz r31,0(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// beq cr6,0x822400d4
	if (ctx.cr6.eq) goto loc_822400D4;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822400d4
	if (!ctx.cr6.eq) goto loc_822400D4;
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplw cr6,r19,r10
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822400d4
	if (!ctx.cr6.lt) goto loc_822400D4;
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 20);
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// blt cr6,0x822400d4
	if (ctx.cr6.lt) goto loc_822400D4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// beq cr6,0x8223fec4
	if (ctx.cr6.eq) goto loc_8223FEC4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8223fe94
	if (ctx.cr6.eq) goto loc_8223FE94;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8223fea4
	if (!ctx.cr6.eq) goto loc_8223FEA4;
loc_8223FE94:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r18,20(r31)
	REX_STORE_U32(r31.u32 + 20, r18.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_8223FEA4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x823cd980
	ctx.lr = 0x8223FEB4;
	sub_823CD980(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r21,1
	r21.s64 = 1;
	// stw r18,0(r31)
	REX_STORE_U32(r31.u32 + 0, r18.u32);
	// b 0x8223ffa0
	goto loc_8223FFA0;
loc_8223FEC4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8223ff50
	if (!ctx.cr6.eq) goto loc_8223FF50;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r27,r29,24
	r27.s64 = r29.s64 + 24;
	// lwz r28,8(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addze r30,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r30.s64 = temp.s64;
	// mulli r11,r30,3
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(3));
	// add r26,r11,r28
	r26.u64 = ctx.r11.u64 + r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8223FEFC;
	sub_822D4FA0(ctx, base);
	// mulli r11,r30,7
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(7));
	// add r25,r11,r28
	r25.u64 = ctx.r11.u64 + r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// add r4,r30,r28
	ctx.r4.u64 = r30.u64 + r28.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8223FF14;
	sub_822D4FA0(ctx, base);
	// rlwinm r15,r30,1,0,30
	r15.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8223e3b8
	ctx.lr = 0x8223FF30;
	sub_8223E3B8(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8223e3b8
	ctx.lr = 0x8223FF4C;
	sub_8223E3B8(ctx, base);
	// b 0x8223ff90
	goto loc_8223FF90;
loc_8223FF50:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8223ffa4
	if (!ctx.cr6.eq) goto loc_8223FFA4;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223ff90
	if (ctx.cr6.eq) goto loc_8223FF90;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8223FF78:
	// lbzu r11,-1(r9)
	ea = -1 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r11,r11,r20
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + r20.u32);
	// sthu r11,-2(r10)
	ea = -2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// sthu r11,-2(r10)
	ea = -2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8223ff78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223FF78;
loc_8223FF90:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r18,20(r31)
	REX_STORE_U32(r31.u32 + 20, r18.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_8223FFA0:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_8223FFA4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8223f950
	ctx.lr = 0x8223FFB0;
	sub_8223F950(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// and r21,r11,r21
	r21.u64 = ctx.r11.u64 & r21.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// bl 0x8223f9f8
	ctx.lr = 0x8223FFCC;
	sub_8223F9F8(ctx, base);
	// lwz r11,144(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 144);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8224006c
	if (!ctx.cr6.eq) goto loc_8224006C;
	// lwz r11,136(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 136);
	// mr r28,r18
	r28.u64 = r18.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8224006c
	if (!ctx.cr6.gt) goto loc_8224006C;
	// addi r27,r29,88
	r27.s64 = r29.s64 + 88;
loc_8223FFEC:
	// lwz r11,132(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 132);
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// divw r11,r11,r17
	ctx.r11.u64 = uint32_t((r17.s32 && !(ctx.r11.s32 == INT32_MIN && r17.s32 == -1)) ? ctx.r11.s32 / r17.s32 : 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8224000c
	if (ctx.cr6.lt) goto loc_8224000C;
	// mr r30,r18
	r30.u64 = r18.u64;
	// b 0x82240018
	goto loc_82240018;
loc_8224000C:
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82240018:
	// lwz r26,0(r30)
	r26.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823cd980
	ctx.lr = 0x8224002C;
	sub_823CD980(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r11,12(r26)
	REX_STORE_U32(r26.u32 + 12, ctx.r11.u32);
	// bl 0x8223fca8
	ctx.lr = 0x8224004C;
	sub_8223FCA8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// lwz r11,136(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 136);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223ffec
	if (ctx.cr6.lt) goto loc_8223FFEC;
loc_8224006C:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82240094
	if (ctx.cr6.eq) goto loc_82240094;
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82240088
	if (!ctx.cr6.eq) goto loc_82240088;
	// stw r18,4(r23)
	REX_STORE_U32(r23.u32 + 4, r18.u32);
loc_82240088:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r10.u32);
	// stw r18,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r18.u32);
loc_82240094:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822400ac
	if (!ctx.cr6.eq) goto loc_822400AC;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8223fbd8
	ctx.lr = 0x822400AC;
	sub_8223FBD8(ctx, base);
loc_822400AC:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// stw r22,16(r29)
	REX_STORE_U32(r29.u32 + 16, r22.u32);
	// addic. r11,r11,-20
	ctx.xer.ca = ctx.r11.u32 > 19;
	ctx.r11.s64 = ctx.r11.s64 + -20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r29)
	REX_STORE_U32(r29.u32 + 20, ctx.r11.u32);
	// bge 0x822400c8
	if (!ctx.cr0.lt) goto loc_822400C8;
	// stw r18,20(r29)
	REX_STORE_U32(r29.u32 + 20, r18.u32);
loc_822400C8:
	// lwz r24,0(r23)
	r24.u64 = REX_LOAD_U32(r23.u32 + 0);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x8223fe44
	if (!ctx.cr6.eq) goto loc_8223FE44;
loc_822400D4:
	// lwz r11,136(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 136);
	// mr r30,r18
	r30.u64 = r18.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82240184
	if (!ctx.cr6.gt) goto loc_82240184;
	// addi r31,r29,80
	r31.s64 = r29.s64 + 80;
loc_822400E8:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r11,29
	ctx.r9.s64 = ctx.r11.s64 + 29;
	// addi r7,r11,25
	ctx.r7.s64 = ctx.r11.s64 + 25;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mulli r10,r9,3
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(3));
	// mulli r9,r7,3
	ctx.r9.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(3));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r5,r11,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// bl 0x8223b1f8
	ctx.lr = 0x8224012C;
	sub_8223B1F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_8224013C:
	// lwz r9,-8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82240154
	if (ctx.cr6.eq) goto loc_82240154;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82240168
	if (ctx.cr6.eq) goto loc_82240168;
loc_82240154:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x8224013c
	if (ctx.cr6.lt) goto loc_8224013C;
	// stw r18,144(r29)
	REX_STORE_U32(r29.u32 + 144, r18.u32);
loc_82240168:
	// lwz r11,136(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 136);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822400e8
	if (ctx.cr6.lt) goto loc_822400E8;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// blt cr6,0x82240274
	if (ctx.cr6.lt) goto loc_82240274;
loc_82240184:
	// lwz r11,136(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 136);
	// mr r31,r18
	r31.u64 = r18.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82240274
	if (!ctx.cr6.gt) goto loc_82240274;
	// li r28,24
	r28.s64 = 24;
loc_82240198:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// addi r30,r11,100
	r30.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
loc_822401A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82240264
	if (ctx.cr6.eq) goto loc_82240264;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(r31.u32, 2, ctx.xer);
	// bne cr6,0x822401cc
	if (!ctx.cr6.eq) goto loc_822401CC;
	// lwz r11,132(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 132);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// divw r11,r11,r17
	ctx.r11.u64 = uint32_t((r17.s32 && !(ctx.r11.s32 == INT32_MIN && r17.s32 == -1)) ? ctx.r11.s32 / r17.s32 : 0);
	// b 0x822401e0
	goto loc_822401E0;
loc_822401CC:
	// addi r11,r31,31
	ctx.r11.s64 = r31.s64 + 31;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// divw r11,r11,r28
	ctx.r11.u64 = uint32_t((r28.s32 && !(ctx.r11.s32 == INT32_MIN && r28.s32 == -1)) ? ctx.r11.s32 / r28.s32 : 0);
loc_822401E0:
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822401f4
	if (ctx.cr6.lt) goto loc_822401F4;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// b 0x82240200
	goto loc_82240200;
loc_822401F4:
	// lwz r10,96(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 96);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82240200:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// beq cr6,0x82240264
	if (ctx.cr6.eq) goto loc_82240264;
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82240264
	if (ctx.cr6.eq) goto loc_82240264;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82240244
	if (ctx.cr6.eq) goto loc_82240244;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82240238
	if (!ctx.cr6.eq) goto loc_82240238;
	// stw r18,4(r30)
	REX_STORE_U32(r30.u32 + 4, r18.u32);
loc_82240238:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// stw r18,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r18.u32);
loc_82240244:
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// bne 0x8224025c
	if (!ctx.cr0.eq) goto loc_8224025C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8223fbd8
	ctx.lr = 0x8224025C;
	sub_8223FBD8(ctx, base);
loc_8224025C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x822401a8
	goto loc_822401A8;
loc_82240264:
	// lwz r11,136(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 136);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82240198
	if (ctx.cr6.lt) goto loc_82240198;
loc_82240274:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ea4
	return;
}

DEFINE_REX_FUNC(sub_82252C00) {
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
	// addi r10,r10,-5068
	ctx.r10.s64 = ctx.r10.s64 + -5068;
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
	// addi r9,r9,-5900
	ctx.r9.s64 = ctx.r9.s64 + -5900;
	// std r31,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r8,-7032
	ctx.r8.s64 = ctx.r8.s64 + -7032;
	// addi r11,r7,-20520
	ctx.r11.s64 = ctx.r7.s64 + -20520;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r10,r6,27792
	ctx.r10.s64 = ctx.r6.s64 + 27792;
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
	// bl 0x82250ad0
	ctx.lr = 0x82252C74;
	sub_82250AD0(ctx, base);
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23660
	ctx.r4.s64 = ctx.r11.s64 + 23660;
	// bl 0x822512d8
	ctx.lr = 0x82252C8C;
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

DEFINE_REX_FUNC(sub_822558B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822558B8;
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82255620
	ctx.lr = 0x822558DC;
	sub_82255620(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82255998
	if (ctx.cr0.eq) goto loc_82255998;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addic. r30,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	r30.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble 0x82255998
	if (!ctx.cr0.gt) goto loc_82255998;
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// ori r11,r11,21845
	ctx.r11.u64 = ctx.r11.u64 | 21845;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82255998
	if (!ctx.cr6.lt) goto loc_82255998;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82255940
	if (!ctx.cr6.gt) goto loc_82255940;
	// mulli r4,r30,12
	ctx.r4.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(12));
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82255b88
	ctx.lr = 0x82255918;
	sub_82255B88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82255998
	if (ctx.cr0.eq) goto loc_82255998;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82255b88
	ctx.lr = 0x82255930;
	sub_82255B88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82255998
	if (ctx.cr0.eq) goto loc_82255998;
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
loc_82255940:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mulli r10,r11,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8225596c
	if (ctx.cr0.eq) goto loc_8225596C;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
loc_8225596C:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82255984
	if (ctx.cr0.eq) goto loc_82255984;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82255984:
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82255b70
	ctx.lr = 0x82255990;
	sub_82255B70(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822559a4
	goto loc_822559A4;
loc_82255998:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82255b70
	ctx.lr = 0x822559A0;
	sub_82255B70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822559A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82258FB8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82258fd0
	if (!ctx.cr6.eq) goto loc_82258FD0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82258FD0:
	// b 0x8224a0a0
	sub_8224A0A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8225A4E8) {
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
	// lwz r30,12(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8225a51c
	if (ctx.cr6.eq) goto loc_8225A51C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227c510
	ctx.lr = 0x8225A514;
	sub_8227C510(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82255b70
	ctx.lr = 0x8225A51C;
	sub_82255B70(ctx, base);
loc_8225A51C:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82255b70
	ctx.lr = 0x8225A524;
	sub_82255B70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8225C1E0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-5900
	ctx.r3.s64 = ctx.r11.s64 + -5900;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8225C540) {
	REX_FUNC_PROLOGUE();
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8225CA98) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822586e0
	ctx.lr = 0x8225CAC0;
	sub_822586E0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225cad0
	if (ctx.cr6.eq) goto loc_8225CAD0;
	// bl 0x822516b0
	ctx.lr = 0x8225CAD0;
	sub_822516B0(ctx, base);
loc_8225CAD0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8225D698) {
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
	// blt cr6,0x8225d6ec
	if (ctx.cr6.lt) goto loc_8225D6EC;
	// lis r11,1170
	ctx.r11.s64 = 76677120;
	// ori r11,r11,18724
	ctx.r11.u64 = ctx.r11.u64 | 18724;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8225d6ec
	if (!ctx.cr6.lt) goto loc_8225D6EC;
	// mulli r3,r4,28
	ctx.r3.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(28));
	// bl 0x82255b48
	ctx.lr = 0x8225D6D4;
	sub_82255B48(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225d6ec
	if (ctx.cr0.eq) goto loc_8225D6EC;
	// stw r31,8(r30)
	REX_STORE_U32(r30.u32 + 8, r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8225d6f0
	goto loc_8225D6F0;
loc_8225D6EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225D6F0:
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

DEFINE_REX_FUNC(sub_8225E590) {
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
	ctx.lr = 0x8225E598;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,2018
	ctx.r4.s64 = 2018;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
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
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// bl 0x8225da70
	ctx.lr = 0x8225E5C4;
	sub_8225DA70(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x8225E5D0;
	sub_8227C2B8(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r28,4(r30)
	REX_STORE_U32(r30.u32 + 4, r28.u32);
	// stw r27,8(r30)
	REX_STORE_U32(r30.u32 + 8, r27.u32);
	// stw r26,16(r30)
	REX_STORE_U32(r30.u32 + 16, r26.u32);
	// stw r25,20(r30)
	REX_STORE_U32(r30.u32 + 20, r25.u32);
	// stw r24,24(r30)
	REX_STORE_U32(r30.u32 + 24, r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8225FDF0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82257680
	ctx.lr = 0x8225FE24;
	sub_82257680(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224da00
	ctx.lr = 0x8225FE30;
	sub_8224DA00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8225fe48
	if (!ctx.cr0.lt) goto loc_8225FE48;
	// lis r11,-32720
	ctx.r11.s64 = -2144337920;
	// ori r11,r11,38
	ctx.r11.u64 = ctx.r11.u64 | 38;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8225fe98
	if (!ctx.cr6.eq) goto loc_8225FE98;
loc_8225FE48:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82256990
	ctx.lr = 0x8225FE5C;
	sub_82256990(ctx, base);
	// b 0x8225fe8c
	goto loc_8225FE8C;
loc_8225FE60:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8225fdf0
	ctx.lr = 0x8225FE70;
	sub_8225FDF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225fe98
	if (ctx.cr0.lt) goto loc_8225FE98;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82256a80
	ctx.lr = 0x8225FE84;
	sub_82256A80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225fe98
	if (ctx.cr0.lt) goto loc_8225FE98;
loc_8225FE8C:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225fe60
	if (!ctx.cr6.eq) goto loc_8225FE60;
loc_8225FE98:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

DEFINE_REX_FUNC(sub_822653E0) {
	REX_FUNC_PROLOGUE();
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
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e7c
	ctx.lr = 0x822653E8;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f1c
	ctx.lr = 0x822653F0;
	// stwu r1,-848(r1)
	ea = -848 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// stw r11,688(r1)
	REX_STORE_U32(ctx.r1.u32 + 688, ctx.r11.u32);
	// bl 0x8225e988
	ctx.lr = 0x82265420;
	sub_8225E988(ctx, base);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82288ea0
	ctx.lr = 0x82265430;
	sub_82288EA0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f30.f64 = double(temp.f32);
	// lfs f31,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	f31.f64 = double(temp.f32);
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
	// fmr f12,f31
	ctx.f12.f64 = f31.f64;
	// lfs f28,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f28.f64 = double(temp.f32);
	// fcmpu cr6,f31,f28
	ctx.cr6.compare(f31.f64, f28.f64);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f26,f11
	f26.f64 = double(float(ctx.f11.f64));
	// frsp f29,f0
	f29.f64 = double(float(ctx.f0.f64));
	// beq cr6,0x822657a4
	if (ctx.cr6.eq) goto loc_822657A4;
	// fcmpu cr6,f30,f28
	ctx.cr6.compare(f30.f64, f28.f64);
	// beq cr6,0x822657a4
	if (ctx.cr6.eq) goto loc_822657A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f24,f28
	f24.f64 = f28.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f23,f28
	f23.f64 = f28.f64;
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// lfs f25,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f25.f64 = double(temp.f32);
	// lfs f27,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	f27.f64 = double(temp.f32);
	// fmr f21,f25
	f21.f64 = f25.f64;
	// fmr f22,f25
	f22.f64 = f25.f64;
	// bne cr6,0x822654d0
	if (!ctx.cr6.eq) goto loc_822654D0;
	// stfs f28,4(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f28,0(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fmr f2,f26
	ctx.f2.f64 = f26.f64;
	// stfs f29,8(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// stfs f26,12(r31)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// bl 0x82258b88
	ctx.lr = 0x822654CC;
	sub_82258B88(ctx, base);
	// b 0x82265594
	goto loc_82265594;
loc_822654D0:
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82265548
	if (!ctx.cr6.eq) goto loc_82265548;
	// fmuls f0,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f29.f64 * f27.f64));
	// fmuls f13,f26,f27
	ctx.f13.f64 = double(float(f26.f64 * f27.f64));
	// fmsubs f12,f31,f27,f0
	ctx.f12.f64 = double(float(std::fma(f31.f64, f27.f64, -ctx.f0.f64)));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fmsubs f11,f30,f27,f13
	ctx.f11.f64 = double(float(std::fma(f30.f64, f27.f64, -ctx.f13.f64)));
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fadds f0,f12,f29
	ctx.f0.f64 = double(float(ctx.f12.f64 + f29.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// fdivs f10,f12,f29
	ctx.f10.f64 = double(float(ctx.f12.f64 / f29.f64));
	// fdivs f9,f11,f26
	ctx.f9.f64 = double(float(ctx.f11.f64 / f26.f64));
	// fsel f12,f12,f12,f28
	ctx.f12.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : f28.f64;
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fadds f13,f11,f26
	ctx.f13.f64 = double(float(ctx.f11.f64 + f26.f64));
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// fsel f12,f11,f11,f28
	ctx.f12.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : f28.f64;
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// fneg f24,f10
	f24.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fneg f23,f9
	f23.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// blt cr6,0x82265530
	if (ctx.cr6.lt) goto loc_82265530;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_82265530:
	// stfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, f30.f64);
	// blt cr6,0x82265540
	if (ctx.cr6.lt) goto loc_82265540;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
loc_82265540:
	// stfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// b 0x82265594
	goto loc_82265594;
loc_82265548:
	// rlwinm r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8226563c
	if (!ctx.cr6.eq) goto loc_8226563C;
	// stfs f28,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fdivs f21,f29,f31
	f21.f64 = double(float(f29.f64 / f31.f64));
	// stfs f28,0(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fdivs f22,f26,f30
	f22.f64 = double(float(f26.f64 / f30.f64));
	// stfs f31,8(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f30,12(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
loc_8226556C:
	// fsubs f12,f30,f26
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f30.f64 - f26.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f31,f29
	ctx.f13.f64 = double(float(f31.f64 - f29.f64));
	// lfs f0,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f11,f0,f29
	ctx.f11.f64 = double(float(ctx.f0.f64 / f29.f64));
	// fdivs f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 / f26.f64));
	// fmuls f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 * f27.f64));
	// fmuls f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 * f27.f64));
	// fmuls f23,f12,f0
	f23.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f24,f13,f11
	f24.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
loc_82265594:
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// fmr f3,f25
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f25.f64;
	// fmr f2,f22
	ctx.f2.f64 = f22.f64;
	// fmr f1,f21
	ctx.f1.f64 = f21.f64;
	// bl 0x82291130
	ctx.lr = 0x822655A8;
	sub_82291130(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f28.f64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,15944(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15944);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f30,f0
	ctx.f2.f64 = double(float(f30.f64 * ctx.f0.f64));
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 * ctx.f0.f64));
	// bl 0x822911a8
	ctx.lr = 0x822655C4;
	sub_822911A8(ctx, base);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82291210
	ctx.lr = 0x822655D4;
	sub_82291210(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f28.f64;
	// fmuls f2,f30,f27
	ctx.f2.f64 = double(float(f30.f64 * f27.f64));
	// fmuls f1,f31,f27
	ctx.f1.f64 = double(float(f31.f64 * f27.f64));
	// bl 0x822911a8
	ctx.lr = 0x822655E8;
	sub_822911A8(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82291210
	ctx.lr = 0x822655F8;
	sub_82291210(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// fmr f3,f25
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f25.f64;
	// fdivs f2,f25,f26
	ctx.f2.f64 = double(float(f25.f64 / f26.f64));
	// fdivs f1,f25,f29
	ctx.f1.f64 = double(float(f25.f64 / f29.f64));
	// bl 0x82291130
	ctx.lr = 0x8226560C;
	sub_82291130(ctx, base);
	// addi r5,r1,496
	ctx.r5.s64 = ctx.r1.s64 + 496;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82291210
	ctx.lr = 0x8226561C;
	sub_82291210(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f28.f64;
	// fmr f2,f23
	ctx.f2.f64 = f23.f64;
	// fmr f1,f24
	ctx.f1.f64 = f24.f64;
	// bl 0x822911a8
	ctx.lr = 0x82265630;
	sub_822911A8(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// b 0x82265798
	goto loc_82265798;
loc_8226563C:
	// rlwinm r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82265690
	if (ctx.cr6.eq) goto loc_82265690;
	// rlwinm r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82265690
	if (ctx.cr6.eq) goto loc_82265690;
	// stfs f28,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(f31.f64, f29.f64);
	// stfs f28,0(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// bge cr6,0x8226566c
	if (!ctx.cr6.lt) goto loc_8226566C;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
	// b 0x82265670
	goto loc_82265670;
loc_8226566C:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f29.f64;
loc_82265670:
	// stfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// fcmpu cr6,f30,f26
	ctx.cr6.compare(f30.f64, f26.f64);
	// bge cr6,0x82265684
	if (!ctx.cr6.lt) goto loc_82265684;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// b 0x82265688
	goto loc_82265688;
loc_82265684:
	// fmr f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f26.f64;
loc_82265688:
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// b 0x82265594
	goto loc_82265594;
loc_82265690:
	// fdivs f24,f25,f26
	ctx.fpscr.disableFlushMode();
	f24.f64 = double(float(f25.f64 / f26.f64));
	// stfs f28,0(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fdivs f0,f25,f30
	ctx.f0.f64 = double(float(f25.f64 / f30.f64));
	// stfs f28,4(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// rlwinm r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	// fmuls f11,f24,f29
	ctx.f11.f64 = double(float(f24.f64 * f29.f64));
	// fmuls f10,f0,f31
	ctx.f10.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x822656d8
	if (!ctx.cr6.gt) goto loc_822656D8;
	// fdivs f0,f31,f29
	ctx.f0.f64 = double(float(f31.f64 / f29.f64));
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// fmuls f30,f0,f26
	f30.f64 = double(float(ctx.f0.f64 * f26.f64));
	// bne cr6,0x822656d0
	if (!ctx.cr6.eq) goto loc_822656D0;
	// fsubs f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 - f30.f64));
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
loc_822656D0:
	// fdivs f22,f29,f31
	ctx.fpscr.disableFlushMode();
	f22.f64 = double(float(f29.f64 / f31.f64));
	// b 0x822656f8
	goto loc_822656F8;
loc_822656D8:
	// fmuls f11,f24,f30
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(f24.f64 * f30.f64));
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// fmuls f31,f11,f29
	f31.f64 = double(float(ctx.f11.f64 * f29.f64));
	// bne cr6,0x822656f4
	if (!ctx.cr6.eq) goto loc_822656F4;
	// fsubs f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 - f31.f64));
	// fmuls f11,f11,f27
	ctx.f11.f64 = double(float(ctx.f11.f64 * f27.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
loc_822656F4:
	// fmuls f22,f0,f26
	ctx.fpscr.disableFlushMode();
	f22.f64 = double(float(ctx.f0.f64 * f26.f64));
loc_822656F8:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f21,f22
	f21.f64 = f22.f64;
	// lfs f11,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fadds f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 + f30.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x8226556c
	if (!ctx.cr6.eq) goto loc_8226556C;
	// fsubs f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 - f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 - f30.f64));
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// fmr f3,f25
	ctx.f3.f64 = f25.f64;
	// fmr f2,f22
	ctx.f2.f64 = f22.f64;
	// fmr f1,f22
	ctx.f1.f64 = f22.f64;
	// lfs f0,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 / f31.f64));
	// fdivs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 / f30.f64));
	// fmuls f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 * f27.f64));
	// fmuls f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 * f27.f64));
	// fmuls f31,f12,f11
	f31.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82291130
	ctx.lr = 0x82265758;
	sub_82291130(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// fmr f3,f25
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f25.f64;
	// fmr f2,f24
	ctx.f2.f64 = f24.f64;
	// fdivs f1,f25,f29
	ctx.f1.f64 = double(float(f25.f64 / f29.f64));
	// bl 0x82291130
	ctx.lr = 0x8226576C;
	sub_82291130(ctx, base);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82291210
	ctx.lr = 0x8226577C;
	sub_82291210(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f28.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822911a8
	ctx.lr = 0x82265790;
	sub_822911A8(ctx, base);
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
loc_82265798:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82291210
	ctx.lr = 0x822657A0;
	sub_82291210(ctx, base);
	// b 0x8226584c
	goto loc_8226584C;
loc_822657A4:
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// lvsr v0,r0,r28
	temp.u32 = r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,12
	ctx.r9.s64 = 12;
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
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,20
	ctx.r7.s64 = 20;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,28
	ctx.r5.s64 = 28;
	// vpermwi128 v63,v60,234
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x15));
	// li r4,32
	ctx.r4.s64 = 32;
	// vpermwi128 v62,v60,186
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x45));
	// li r3,36
	ctx.r3.s64 = 36;
	// vpermwi128 v61,v60,174
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x51));
	// li r31,40
	r31.s64 = 40;
	// vpermwi128 v60,v60,171
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x54));
	// li r30,44
	r30.s64 = 44;
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r29,48
	r29.s64 = 48;
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r27,52
	r27.s64 = 52;
	// vperm128 v61,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r26,56
	r26.s64 = 56;
	// vperm128 v60,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r25,60
	r25.s64 = 60;
	// stvewx128 v63,r0,r28
	ea = (r28.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r28,r11
	ea = (r28.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r28,r10
	ea = (r28.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r28,r9
	ea = (r28.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r28,r8
	ea = (r28.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r28,r7
	ea = (r28.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r28,r6
	ea = (r28.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r28,r5
	ea = (r28.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r28,r4
	ea = (r28.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r28,r3
	ea = (r28.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r28,r31
	ea = (r28.u32 + r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r28,r30
	ea = (r28.u32 + r30.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r28,r29
	ea = (r28.u32 + r29.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r28,r27
	ea = (r28.u32 + r27.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r28,r26
	ea = (r28.u32 + r26.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r28,r25
	ea = (r28.u32 + r25.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
loc_8226584C:
	// lwz r3,688(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 688);
	// bl 0x822d7b58
	ctx.lr = 0x82265854;
	sub_822D7B58(ctx, base);
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f68
	ctx.lr = 0x82265860;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8227CEB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227cee8
	if (ctx.cr0.eq) goto loc_8227CEE8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
loc_8227CEE8:
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r6,12
	ctx.r6.s64 = 12;
	// lwz r4,8(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// b 0x82278a08
	sub_82278A08(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8227E370) {
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
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
loc_8227E388:
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
	// bne 0x8227e388
	if (!ctx.cr0.eq) goto loc_8227E388;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8227e3e4
	if (!ctx.cr6.eq) goto loc_8227E3E4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227e3d0
	if (ctx.cr6.eq) goto loc_8227E3D0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227E3D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227E3D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227e2d0
	ctx.lr = 0x8227E3D8;
	sub_8227E2D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x8227E3E0;
	sub_82255B70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227E3E4:
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

DEFINE_REX_FUNC(sub_8227FBB0) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,50
	ctx.r10.s64 = 50;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r11,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stb r11,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stb r11,6(r3)
	REX_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
	// stb r10,7(r3)
	REX_STORE_U8(ctx.r3.u32 + 7, ctx.r10.u8);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822801C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822801D0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,1
	r29.s64 = 1;
	// bl 0x82288590
	ctx.lr = 0x822801E0;
	sub_82288590(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82280214
	if (!ctx.cr6.eq) goto loc_82280214;
	// bl 0x822885a0
	ctx.lr = 0x822801F4;
	sub_822885A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82280218
	if (ctx.cr0.eq) goto loc_82280218;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x82280214
	if (ctx.cr6.eq) goto loc_82280214;
	// addi r10,r30,-1
	ctx.r10.s64 = r30.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82280218
	if (!ctx.cr6.eq) goto loc_82280218;
loc_82280214:
	// li r29,0
	r29.s64 = 0;
loc_82280218:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82281B58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82281B60;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,212(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82281c68
	if (ctx.cr6.eq) goto loc_82281C68;
	// clrlwi r30,r29,16
	r30.u64 = r29.u32 & 0xFFFF;
loc_82281B7C:
	// lhz r11,36(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 36);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x82281c5c
	if (ctx.cr6.eq) goto loc_82281C5C;
	// ble cr6,0x82281ba4
	if (!ctx.cr6.gt) goto loc_82281BA4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82281ba0
	if (ctx.cr6.eq) goto loc_82281BA0;
	// lhz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 36);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82281ba4
	if (!ctx.cr6.lt) goto loc_82281BA4;
loc_82281BA0:
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_82281BA4:
	// lwz r4,24(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82281b7c
	if (!ctx.cr6.eq) goto loc_82281B7C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82281c68
	if (ctx.cr6.eq) goto loc_82281C68;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// bl 0x82281190
	ctx.lr = 0x82281BC8;
	sub_82281190(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82281c68
	if (ctx.cr6.eq) goto loc_82281C68;
	// lhz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 32);
	// sth r11,32(r3)
	REX_STORE_U16(ctx.r3.u32 + 32, ctx.r11.u16);
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// sth r11,34(r3)
	REX_STORE_U16(ctx.r3.u32 + 34, ctx.r11.u16);
	// sth r29,36(r3)
	REX_STORE_U16(ctx.r3.u32 + 36, r29.u16);
	// lhz r11,38(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 38);
	// sth r11,38(r3)
	REX_STORE_U16(ctx.r3.u32 + 38, ctx.r11.u16);
	// lhz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 32);
	// lhz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 36);
	// subf r10,r30,r10
	ctx.r10.u64 = ctx.r10.u64 - r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// sth r11,32(r31)
	REX_STORE_U16(r31.u32 + 32, ctx.r11.u16);
	// sth r10,36(r31)
	REX_STORE_U16(r31.u32 + 36, ctx.r10.u16);
	// stw r31,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82281c2c
	if (ctx.cr6.eq) goto loc_82281C2C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_82281C2C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82281c6c
	if (ctx.cr6.eq) goto loc_82281C6C;
	// stw r3,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// b 0x82281c6c
	goto loc_82281C6C;
loc_82281C5C:
	// bl 0x82280b80
	ctx.lr = 0x82281C60;
	sub_82280B80(ctx, base);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82281c6c
	goto loc_82281C6C;
loc_82281C68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82281C6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82286CA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82286CA8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r30,6
	r30.s64 = 6;
	// li r31,7
	r31.s64 = 7;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82286d18
	if (ctx.cr6.eq) goto loc_82286D18;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82286d10
	if (ctx.cr6.eq) goto loc_82286D10;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82286d00
	if (ctx.cr6.eq) goto loc_82286D00;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82286cf8
	if (ctx.cr6.eq) goto loc_82286CF8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82286d08
	if (ctx.cr6.eq) goto loc_82286D08;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82286d68
	if (!ctx.cr6.eq) goto loc_82286D68;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82286d08
	goto loc_82286D08;
loc_82286CF8:
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x82286d04
	goto loc_82286D04;
loc_82286D00:
	// li r5,2
	ctx.r5.s64 = 2;
loc_82286D04:
	// li r30,1
	r30.s64 = 1;
loc_82286D08:
	// li r31,1
	r31.s64 = 1;
	// b 0x82286d18
	goto loc_82286D18;
loc_82286D10:
	// li r30,0
	r30.s64 = 0;
	// li r31,4
	r31.s64 = 4;
loc_82286D18:
	// lwz r3,332(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 332);
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286D30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,332(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 332);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286D4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,332(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 332);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,76
	ctx.r4.s64 = 76;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286D68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82286D68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82288DB8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82288dcc
	if (!ctx.cr6.eq) goto loc_82288DCC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82288DCC:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82289390) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822893a0
	if (ctx.cr6.eq) goto loc_822893A0;
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_822893A0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822893b0
	if (ctx.cr6.eq) goto loc_822893B0;
	// lwz r11,164(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_822893B0:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,176(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8228A418) {
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
	// bl 0x822869a8
	ctx.lr = 0x8228A438;
	sub_822869A8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228a448
	if (ctx.cr0.eq) goto loc_8228A448;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x8228A448;
	sub_82255B70(ctx, base);
loc_8228A448:
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

DEFINE_REX_FUNC(sub_8228B308) {
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
	ctx.lr = 0x8228B310;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8228b3a8
	if (ctx.cr6.lt) goto loc_8228B3A8;
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8228b3a8
	if (!ctx.cr6.lt) goto loc_8228B3A8;
	// rlwinm r28,r4,3,0,28
	r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82255b48
	ctx.lr = 0x8228B350;
	sub_82255B48(ctx, base);
	// stw r3,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228b3a8
	if (ctx.cr0.eq) goto loc_8228B3A8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8228B368;
	sub_822D4FA0(ctx, base);
	// stw r29,48(r31)
	REX_STORE_U32(r31.u32 + 48, r29.u32);
	// stw r26,4(r31)
	REX_STORE_U32(r31.u32 + 4, r26.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B388;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r25,56(r31)
	REX_STORE_U32(r31.u32 + 56, r25.u32);
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x8228b3b0
	goto loc_8228B3B0;
loc_8228B3A8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_8228B3B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8228E798) {
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
	// stw r4,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822d8730
	ctx.lr = 0x8228E7DC;
	sub_822D8730(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82290720) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_82290754:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82290754
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82290754;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r9,12828
	ctx.r9.s64 = ctx.r9.s64 + 12828;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// li r11,9
	ctx.r11.s64 = 9;
	// lfs f13,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// stb r8,172(r3)
	REX_STORE_U8(ctx.r3.u32 + 172, ctx.r8.u8);
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f13,168(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82292090) {
	REX_FUNC_PROLOGUE();
	// b 0x822957c0
	sub_822957C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82292100) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,12944
	ctx.r9.s64 = ctx.r9.s64 + 12944;
	// stb r11,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82292E00) {
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
	ctx.lr = 0x82292E08;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82292e44
	if (!ctx.cr0.eq) goto loc_82292E44;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82292efc
	goto loc_82292EFC;
loc_82292E44:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82292ef4
	if (ctx.cr6.eq) goto loc_82292EF4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82292ef4
	if (ctx.cr6.eq) goto loc_82292EF4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lwz r29,300(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lfs f0,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f12,2332(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2332);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fctidz f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f11.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,7
	ctx.r4.s64 = ctx.r11.s64 + 7;
	// bgt cr6,0x82292e94
	if (ctx.cr6.gt) goto loc_82292E94;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82292E94:
	// fmuls f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r5,r11,7
	ctx.r5.s64 = ctx.r11.s64 + 7;
	// bl 0x822922d0
	ctx.lr = 0x82292EB0;
	sub_822922D0(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// lwz r10,292(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r31,24(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// bl 0x82291e38
	ctx.lr = 0x82292EF0;
	sub_82291E38(ctx, base);
	// b 0x82292efc
	goto loc_82292EFC;
loc_82292EF4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82292EFC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82295A78) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// addic. r11,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r11.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bltlr 
	if (ctx.cr0.lt) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// addi r8,r5,-4
	ctx.r8.s64 = ctx.r5.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82295A90:
	// lwzu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82295b0c
	if (ctx.cr6.eq) goto loc_82295B0C;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm. r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82295b0c
	if (ctx.cr0.eq) goto loc_82295B0C;
	// rlwinm r10,r11,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// rlwinm r11,r11,0,8,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// addi r10,r10,-151
	ctx.r10.s64 = ctx.r10.s64 + -151;
	// extsh. r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82295ae0
	if (!ctx.cr0.gt) goto loc_82295AE0;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x82295ad8
	if (ctx.cr6.lt) goto loc_82295AD8;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// b 0x82295b00
	goto loc_82295B00;
loc_82295AD8:
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// b 0x82295b00
	goto loc_82295B00;
loc_82295AE0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82295b00
	if (!ctx.cr6.lt) goto loc_82295B00;
	// cmpwi cr6,r10,-24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -24, ctx.xer);
	// bge cr6,0x82295af8
	if (!ctx.cr6.lt) goto loc_82295AF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82295b00
	goto loc_82295B00;
loc_82295AF8:
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// sraw r11,r11,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r11.s64 = ctx.r11.s32 >> temp.u32;
loc_82295B00:
	// extsb. r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82295b0c
	if (ctx.cr0.eq) goto loc_82295B0C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_82295B0C:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82295a90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82295A90;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229C3E8) {
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
	ctx.lr = 0x8229C3F0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r26,4(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r28,0(r4)
	r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r24,4(r4)
	r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r27,32(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r29,28(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// bge cr6,0x8229c42c
	if (!ctx.cr6.lt) goto loc_8229C42C;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// b 0x8229c434
	goto loc_8229C434;
loc_8229C42C:
	// lwz r10,44(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 44);
	// subf r6,r11,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8229C434:
	// lwz r9,0(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r9,9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9, ctx.xer);
	// bgt cr6,0x8229c960
	if (ctx.cr6.gt) goto loc_8229C960;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r21,9
	r21.s64 = 9;
	// li r23,0
	r23.s64 = 0;
	// addi r22,r10,22536
	r22.s64 = ctx.r10.s64 + 22536;
loc_8229C450:
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// rlwinm r0,r9,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,17376
	ctx.r12.s64 = ctx.r12.s64 + 17376;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32214
	ctx.r12.s64 = -2111176704;
	// addi r12,r12,-15240
	ctx.r12.s64 = ctx.r12.s64 + -15240;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_8229C478;
	case 1:
		goto loc_8229C53C;
	case 2:
		goto loc_8229C604;
	case 3:
		goto loc_8229C670;
	case 4:
		goto loc_8229C704;
	case 5:
		goto loc_8229C760;
	case 6:
		goto loc_8229C888;
	case 7:
		goto loc_8229C9C8;
	case 8:
		goto loc_8229CA08;
	case 9:
		goto loc_8229CA10;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8229C478:
	// cmplwi cr6,r6,258
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 258, ctx.xer);
	// blt cr6,0x8229c524
	if (ctx.cr6.lt) goto loc_8229C524;
	// cmplwi cr6,r24,10
	ctx.cr6.compare<uint32_t>(r24.u32, 10, ctx.xer);
	// blt cr6,0x8229c524
	if (ctx.cr6.lt) goto loc_8229C524;
	// stw r27,32(r30)
	REX_STORE_U32(r30.u32 + 32, r27.u32);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// stw r29,28(r30)
	REX_STORE_U32(r30.u32 + 28, r29.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r9,r9,r28
	ctx.r9.u64 = r28.u64 - ctx.r9.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r24,4(r31)
	REX_STORE_U32(r31.u32 + 4, r24.u32);
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r11,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r11.u32);
	// lwz r6,24(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 24);
	// lwz r5,20(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 20);
	// lbz r4,17(r26)
	ctx.r4.u64 = REX_LOAD_U8(r26.u32 + 17);
	// lbz r3,16(r26)
	ctx.r3.u64 = REX_LOAD_U8(r26.u32 + 16);
	// bl 0x8229d1c8
	ctx.lr = 0x8229C4CC;
	sub_8229D1C8(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r28,0(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r24,4(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r27,32(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lwz r29,28(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 28);
	// bge cr6,0x8229c4fc
	if (!ctx.cr6.lt) goto loc_8229C4FC;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// b 0x8229c504
	goto loc_8229C504;
loc_8229C4FC:
	// lwz r10,44(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 44);
	// subf r6,r11,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8229C504:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8229c524
	if (ctx.cr6.eq) goto loc_8229C524;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// li r10,7
	ctx.r10.s64 = 7;
	// beq cr6,0x8229c51c
	if (ctx.cr6.eq) goto loc_8229C51C;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_8229C51C:
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x8229c954
	goto loc_8229C954;
loc_8229C524:
	// lbz r10,16(r26)
	ctx.r10.u64 = REX_LOAD_U8(r26.u32 + 16);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 20);
	// stw r9,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r9.u32);
	// stw r10,12(r26)
	REX_STORE_U32(r26.u32 + 12, ctx.r10.u32);
	// stw r8,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r8.u32);
loc_8229C53C:
	// lwz r10,12(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 12);
	// b 0x8229c568
	goto loc_8229C568;
loc_8229C544:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8229c9a0
	if (ctx.cr6.eq) goto loc_8229C9A0;
	// lbz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U8(r28.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// slw r9,r9,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r29.u8 & 0x3F));
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// or r27,r9,r27
	r27.u64 = ctx.r9.u64 | r27.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_8229C568:
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8229c544
	if (ctx.cr6.lt) goto loc_8229C544;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lwzx r9,r9,r22
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r22.u32);
	// and r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 & r27.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r8,1(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// srw r27,r27,r8
	r27.u64 = ctx.r8.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r8.u8 & 0x3F));
	// subf r29,r8,r29
	r29.u64 = r29.u64 - ctx.r8.u64;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8229c5b4
	if (!ctx.cr0.eq) goto loc_8229C5B4;
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r9.u32);
loc_8229C5AC:
	// stw r10,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r10.u32);
	// b 0x8229c954
	goto loc_8229C954;
loc_8229C5B4:
	// rlwinm. r8,r9,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8229c5d8
	if (ctx.cr0.eq) goto loc_8229C5D8;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r10.u32);
	// stw r8,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r8.u32);
	// b 0x8229c954
	goto loc_8229C954;
loc_8229C5D8:
	// rlwinm. r8,r9,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8229c5f4
	if (!ctx.cr0.eq) goto loc_8229C5F4;
loc_8229C5E0:
	// stw r9,12(r26)
	REX_STORE_U32(r26.u32 + 12, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x8229c5ac
	goto loc_8229C5AC;
loc_8229C5F4:
	// rlwinm. r10,r9,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8229c9b0
	if (ctx.cr0.eq) goto loc_8229C9B0;
	// li r10,7
	ctx.r10.s64 = 7;
	// b 0x8229c51c
	goto loc_8229C51C;
loc_8229C604:
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 8);
	// b 0x8229c630
	goto loc_8229C630;
loc_8229C60C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8229c9a0
	if (ctx.cr6.eq) goto loc_8229C9A0;
	// lbz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U8(r28.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// slw r9,r9,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r29.u8 & 0x3F));
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// or r27,r9,r27
	r27.u64 = ctx.r9.u64 | r27.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_8229C630:
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8229c60c
	if (ctx.cr6.lt) goto loc_8229C60C;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lbz r7,17(r26)
	ctx.r7.u64 = REX_LOAD_U8(r26.u32 + 17);
	// subf r29,r10,r29
	r29.u64 = r29.u64 - ctx.r10.u64;
	// lwz r3,24(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 24);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwzx r8,r8,r22
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + r22.u32);
	// stw r7,12(r26)
	REX_STORE_U32(r26.u32 + 12, ctx.r7.u32);
	// and r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 & r27.u64;
	// stw r3,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r3.u32);
	// srw r27,r27,r10
	r27.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r10.u8 & 0x3F));
	// stw r4,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r4.u32);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r10,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r10.u32);
loc_8229C670:
	// lwz r10,12(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 12);
	// b 0x8229c69c
	goto loc_8229C69C;
loc_8229C678:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8229c9a0
	if (ctx.cr6.eq) goto loc_8229C9A0;
	// lbz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U8(r28.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// slw r9,r9,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r29.u8 & 0x3F));
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// or r27,r9,r27
	r27.u64 = ctx.r9.u64 | r27.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_8229C69C:
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8229c678
	if (ctx.cr6.lt) goto loc_8229C678;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lwzx r9,r9,r22
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r22.u32);
	// and r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 & r27.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r8,1(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// srw r27,r27,r8
	r27.u64 = ctx.r8.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwinm. r7,r9,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// subf r29,r8,r29
	r29.u64 = r29.u64 - ctx.r8.u64;
	// beq 0x8229c6f0
	if (ctx.cr0.eq) goto loc_8229C6F0;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r9,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r8.u32);
	// stw r10,12(r26)
	REX_STORE_U32(r26.u32 + 12, ctx.r10.u32);
	// b 0x8229c954
	goto loc_8229C954;
loc_8229C6F0:
	// rlwinm. r8,r9,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8229c5e0
	if (ctx.cr0.eq) goto loc_8229C5E0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r10,r10,17424
	ctx.r10.s64 = ctx.r10.s64 + 17424;
	// b 0x8229c9b8
	goto loc_8229C9B8;
loc_8229C704:
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 8);
	// b 0x8229c730
	goto loc_8229C730;
loc_8229C70C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8229c9a0
	if (ctx.cr6.eq) goto loc_8229C9A0;
	// lbz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U8(r28.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// slw r9,r9,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r29.u8 & 0x3F));
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// or r27,r9,r27
	r27.u64 = ctx.r9.u64 | r27.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_8229C730:
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8229c70c
	if (ctx.cr6.lt) goto loc_8229C70C;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,12(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 12);
	// subf r29,r10,r29
	r29.u64 = r29.u64 - ctx.r10.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// lwzx r9,r9,r22
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r22.u32);
	// stw r7,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r7.u32);
	// and r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 & r27.u64;
	// srw r27,r27,r10
	r27.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r10.u8 & 0x3F));
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r10,12(r26)
	REX_STORE_U32(r26.u32 + 12, ctx.r10.u32);
loc_8229C760:
	// lwz r9,12(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 12);
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
	// subf r25,r9,r11
	r25.u64 = ctx.r11.u64 - ctx.r9.u64;
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8229c878
	if (!ctx.cr6.lt) goto loc_8229C878;
	// lwz r8,44(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 44);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8229C77C:
	// subf r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r10.u64;
	// add r25,r9,r25
	r25.u64 = ctx.r9.u64 + r25.u64;
	// cmplw cr6,r25,r7
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8229c77c
	if (ctx.cr6.lt) goto loc_8229C77C;
	// b 0x8229c878
	goto loc_8229C878;
loc_8229C790:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8229c844
	if (!ctx.cr6.eq) goto loc_8229C844;
	// lwz r8,44(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 44);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8229c7d4
	if (!ctx.cr6.eq) goto loc_8229C7D4;
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r9,40(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8229c7d4
	if (ctx.cr6.eq) goto loc_8229C7D4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// bge cr6,0x8229c7c8
	if (!ctx.cr6.lt) goto loc_8229C7C8;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// b 0x8229c7cc
	goto loc_8229C7CC;
loc_8229C7C8:
	// subf r6,r11,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r11.u64;
loc_8229C7CC:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8229c844
	if (!ctx.cr6.eq) goto loc_8229C844;
loc_8229C7D4:
	// stw r11,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82404240
	ctx.lr = 0x8229C7E4;
	sub_82404240(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8229c804
	if (!ctx.cr6.lt) goto loc_8229C804;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// b 0x8229c80c
	goto loc_8229C80C;
loc_8229C804:
	// lwz r9,44(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 44);
	// subf r6,r11,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_8229C80C:
	// lwz r8,44(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 44);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8229c83c
	if (!ctx.cr6.eq) goto loc_8229C83C;
	// lwz r9,40(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8229c83c
	if (ctx.cr6.eq) goto loc_8229C83C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// bge cr6,0x8229c838
	if (!ctx.cr6.lt) goto loc_8229C838;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// b 0x8229c83c
	goto loc_8229C83C;
loc_8229C838:
	// subf r6,r11,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r11.u64;
loc_8229C83C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8229c964
	if (ctx.cr6.eq) goto loc_8229C964;
loc_8229C844:
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,44(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 44);
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8229c86c
	if (!ctx.cr6.eq) goto loc_8229C86C;
	// lwz r25,40(r30)
	r25.u64 = REX_LOAD_U32(r30.u32 + 40);
loc_8229C86C:
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r10.u32);
loc_8229C878:
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8229c790
	if (!ctx.cr6.eq) goto loc_8229C790;
	// b 0x8229c950
	goto loc_8229C950;
loc_8229C888:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8229c93c
	if (!ctx.cr6.eq) goto loc_8229C93C;
	// lwz r8,44(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 44);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8229c8cc
	if (!ctx.cr6.eq) goto loc_8229C8CC;
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r9,40(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8229c8cc
	if (ctx.cr6.eq) goto loc_8229C8CC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// bge cr6,0x8229c8c0
	if (!ctx.cr6.lt) goto loc_8229C8C0;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// b 0x8229c8c4
	goto loc_8229C8C4;
loc_8229C8C0:
	// subf r6,r11,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r11.u64;
loc_8229C8C4:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8229c93c
	if (!ctx.cr6.eq) goto loc_8229C93C;
loc_8229C8CC:
	// stw r11,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82404240
	ctx.lr = 0x8229C8DC;
	sub_82404240(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8229c8fc
	if (!ctx.cr6.lt) goto loc_8229C8FC;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// b 0x8229c904
	goto loc_8229C904;
loc_8229C8FC:
	// lwz r9,44(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 44);
	// subf r6,r11,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_8229C904:
	// lwz r8,44(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 44);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8229c934
	if (!ctx.cr6.eq) goto loc_8229C934;
	// lwz r9,40(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8229c934
	if (ctx.cr6.eq) goto loc_8229C934;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// bge cr6,0x8229c930
	if (!ctx.cr6.lt) goto loc_8229C930;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// b 0x8229c934
	goto loc_8229C934;
loc_8229C930:
	// subf r6,r11,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r11.u64;
loc_8229C934:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8229c964
	if (ctx.cr6.eq) goto loc_8229C964;
loc_8229C93C:
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 8);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8229C950:
	// stw r23,0(r26)
	REX_STORE_U32(r26.u32 + 0, r23.u32);
loc_8229C954:
	// lwz r9,0(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r9,9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9, ctx.xer);
	// ble cr6,0x8229c450
	if (!ctx.cr6.gt) goto loc_8229C450;
loc_8229C960:
	// li r5,-2
	ctx.r5.s64 = -2;
loc_8229C964:
	// stw r27,32(r30)
	REX_STORE_U32(r30.u32 + 32, r27.u32);
	// stw r29,28(r30)
	REX_STORE_U32(r30.u32 + 28, r29.u32);
	// stw r24,4(r31)
	REX_STORE_U32(r31.u32 + 4, r24.u32);
loc_8229C970:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// subf r10,r10,r28
	ctx.r10.u64 = r28.u64 - ctx.r10.u64;
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r11,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r11.u32);
	// bl 0x82404240
	ctx.lr = 0x8229C998;
	sub_82404240(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ebc
	return;
loc_8229C9A0:
	// stw r27,32(r30)
	REX_STORE_U32(r30.u32 + 32, r27.u32);
	// stw r29,28(r30)
	REX_STORE_U32(r30.u32 + 28, r29.u32);
	// stw r23,4(r31)
	REX_STORE_U32(r31.u32 + 4, r23.u32);
	// b 0x8229c970
	goto loc_8229C970;
loc_8229C9B0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r10,r10,17396
	ctx.r10.s64 = ctx.r10.s64 + 17396;
loc_8229C9B8:
	// stw r21,0(r26)
	REX_STORE_U32(r26.u32 + 0, r21.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// b 0x8229c964
	goto loc_8229C964;
loc_8229C9C8:
	// cmplwi cr6,r29,7
	ctx.cr6.compare<uint32_t>(r29.u32, 7, ctx.xer);
	// ble cr6,0x8229c9dc
	if (!ctx.cr6.gt) goto loc_8229C9DC;
	// addi r29,r29,-8
	r29.s64 = r29.s64 + -8;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
loc_8229C9DC:
	// stw r11,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82404240
	ctx.lr = 0x8229C9EC;
	sub_82404240(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8229c964
	if (!ctx.cr6.eq) goto loc_8229C964;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_8229CA08:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8229c964
	goto loc_8229C964;
loc_8229CA10:
	// li r5,-3
	ctx.r5.s64 = -3;
	// b 0x8229c964
	goto loc_8229C964;
}

DEFINE_REX_FUNC(sub_822B6D58) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r4,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// addi r9,r3,56
	ctx.r9.s64 = ctx.r3.s64 + 56;
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
loc_822B6D88:
	// stw r11,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r11,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// stwu r11,16(r9)
	ea = 16 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822b6d88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822B6D88;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r11,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// lfs f0,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,140(r3)
	REX_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// stb r11,144(r3)
	REX_STORE_U8(ctx.r3.u32 + 144, ctx.r11.u8);
	// stb r11,145(r3)
	REX_STORE_U8(ctx.r3.u32 + 145, ctx.r11.u8);
	// lfs f0,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,147(r3)
	REX_STORE_U8(ctx.r3.u32 + 147, ctx.r11.u8);
	// stb r11,148(r3)
	REX_STORE_U8(ctx.r3.u32 + 148, ctx.r11.u8);
	// stb r11,149(r3)
	REX_STORE_U8(ctx.r3.u32 + 149, ctx.r11.u8);
	// stb r11,150(r3)
	REX_STORE_U8(ctx.r3.u32 + 150, ctx.r11.u8);
	// stb r11,159(r3)
	REX_STORE_U8(ctx.r3.u32 + 159, ctx.r11.u8);
	// stw r11,160(r3)
	REX_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// stb r11,164(r3)
	REX_STORE_U8(ctx.r3.u32 + 164, ctx.r11.u8);
	// stb r11,165(r3)
	REX_STORE_U8(ctx.r3.u32 + 165, ctx.r11.u8);
	// stb r11,196(r3)
	REX_STORE_U8(ctx.r3.u32 + 196, ctx.r11.u8);
	// stw r8,136(r3)
	REX_STORE_U32(ctx.r3.u32 + 136, ctx.r8.u32);
	// stb r10,146(r3)
	REX_STORE_U8(ctx.r3.u32 + 146, ctx.r10.u8);
	// stb r10,151(r3)
	REX_STORE_U8(ctx.r3.u32 + 151, ctx.r10.u8);
	// stb r10,152(r3)
	REX_STORE_U8(ctx.r3.u32 + 152, ctx.r10.u8);
	// stb r10,153(r3)
	REX_STORE_U8(ctx.r3.u32 + 153, ctx.r10.u8);
	// stb r10,158(r3)
	REX_STORE_U8(ctx.r3.u32 + 158, ctx.r10.u8);
	// stb r10,166(r3)
	REX_STORE_U8(ctx.r3.u32 + 166, ctx.r10.u8);
	// stb r10,192(r3)
	REX_STORE_U8(ctx.r3.u32 + 192, ctx.r10.u8);
	// stw r11,200(r3)
	REX_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// stw r11,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// stw r11,208(r3)
	REX_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// stw r11,216(r3)
	REX_STORE_U32(ctx.r3.u32 + 216, ctx.r11.u32);
	// stw r11,220(r3)
	REX_STORE_U32(ctx.r3.u32 + 220, ctx.r11.u32);
	// stb r11,224(r3)
	REX_STORE_U8(ctx.r3.u32 + 224, ctx.r11.u8);
	// stw r11,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// stw r11,232(r3)
	REX_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
	// stb r11,31(r3)
	REX_STORE_U8(ctx.r3.u32 + 31, ctx.r11.u8);
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
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
	// stfs f0,184(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// stb r10,157(r3)
	REX_STORE_U8(ctx.r3.u32 + 157, ctx.r10.u8);
	// stb r10,156(r3)
	REX_STORE_U8(ctx.r3.u32 + 156, ctx.r10.u8);
	// stb r10,155(r3)
	REX_STORE_U8(ctx.r3.u32 + 155, ctx.r10.u8);
	// stb r10,154(r3)
	REX_STORE_U8(ctx.r3.u32 + 154, ctx.r10.u8);
loc_822B6E64:
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// stb r10,193(r8)
	REX_STORE_U8(ctx.r8.u32 + 193, ctx.r10.u8);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x822b6e64
	if (ctx.cr6.lt) goto loc_822B6E64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822BA708) {
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
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r30,r31,40
	r30.s64 = r31.s64 + 40;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
	// bl 0x822b11e8
	ctx.lr = 0x822BA74C;
	sub_822B11E8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822ad068
	ctx.lr = 0x822BA758;
	sub_822AD068(ctx, base);
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

DEFINE_REX_FUNC(sub_822BD348) {
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
	// addi r11,r11,24128
	ctx.r11.s64 = ctx.r11.s64 + 24128;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x822bd374
	if (ctx.cr0.eq) goto loc_822BD374;
	// bl 0x822c80a8
	ctx.lr = 0x822BD374;
	sub_822C80A8(ctx, base);
loc_822BD374:
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

DEFINE_REX_FUNC(sub_822BE820) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4f04
	ctx.lr = 0x822BE830;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,3
	ctx.r11.s64 = 3;
	// lfs f28,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	f28.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f6,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lfs f5,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f7,f6,f28
	ctx.f7.f64 = double(float(ctx.f6.f64 - f28.f64));
	// fsubs f8,f5,f0
	ctx.f8.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// lfs f27,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	f27.f64 = double(temp.f32);
	// lfs f4,32(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lfs f2,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f9,f4,f0
	ctx.f9.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// lfs f1,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f24,f2,f27
	f24.f64 = double(float(ctx.f2.f64 - f27.f64));
	// lfs f3,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f23,f1,f28
	f23.f64 = double(float(ctx.f1.f64 - f28.f64));
	// fsubs f25,f3,f27
	f25.f64 = double(float(ctx.f3.f64 - f27.f64));
	// lfs f22,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	f22.f64 = double(temp.f32);
	// lfs f12,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f11,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f21,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	f21.f64 = double(temp.f32);
	// lfs f10,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f20,f7,f8
	f20.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// lfs f31,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	f31.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f30,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	f30.f64 = double(temp.f32);
	// fmuls f19,f24,f9
	f19.f64 = double(float(f24.f64 * ctx.f9.f64));
	// lfs f29,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	f29.f64 = double(temp.f32);
	// lfs f26,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f26.f64 = double(temp.f32);
	// fmuls f18,f23,f25
	f18.f64 = double(float(f23.f64 * f25.f64));
	// stfs f26,92(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmsubs f9,f23,f9,f20
	ctx.f9.f64 = double(float(std::fma(f23.f64, ctx.f9.f64, -f20.f64)));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmsubs f8,f25,f8,f19
	ctx.f8.f64 = double(float(std::fma(f25.f64, ctx.f8.f64, -f19.f64)));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmsubs f7,f24,f7,f18
	ctx.f7.f64 = double(float(std::fma(f24.f64, ctx.f7.f64, -f18.f64)));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f27,f9,f27
	f27.f64 = double(float(ctx.f9.f64 * f27.f64));
	// fmuls f25,f9,f22
	f25.f64 = double(float(ctx.f9.f64 * f22.f64));
	// fmuls f24,f12,f9
	f24.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f23,f11,f9
	f23.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmadds f28,f8,f28,f27
	f28.f64 = double(float(std::fma(ctx.f8.f64, f28.f64, f27.f64)));
	// fmadds f25,f8,f21,f25
	f25.f64 = double(float(std::fma(ctx.f8.f64, f21.f64, f25.f64)));
	// fmadds f24,f10,f7,f24
	f24.f64 = double(float(std::fma(ctx.f10.f64, ctx.f7.f64, f24.f64)));
	// fmadds f23,f31,f7,f23
	f23.f64 = double(float(std::fma(f31.f64, ctx.f7.f64, f23.f64)));
	// fmadds f28,f7,f0,f28
	f28.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, f28.f64)));
	// fmadds f27,f7,f13,f25
	f27.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, f25.f64)));
	// fmadds f25,f30,f8,f24
	f25.f64 = double(float(std::fma(f30.f64, ctx.f8.f64, f24.f64)));
	// fmadds f24,f29,f8,f23
	f24.f64 = double(float(std::fma(f29.f64, ctx.f8.f64, f23.f64)));
	// fsubs f27,f27,f28
	f27.f64 = double(float(f27.f64 - f28.f64));
	// stfs f27,96(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f27,f25,f28
	f27.f64 = double(float(f25.f64 - f28.f64));
	// stfs f27,100(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f28,f24,f28
	f28.f64 = double(float(f24.f64 - f28.f64));
	// lfs f24,24124(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24124);
	f24.f64 = double(temp.f32);
	// stfs f28,104(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_822BE924:
	// lfs f28,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	f28.f64 = double(temp.f32);
	// fabs f28,f28
	f28.u64 = f28.u64 & ~0x8000000000000000;
	// fcmpu cr6,f28,f24
	ctx.cr6.compare(f28.f64, f24.f64);
	// bge cr6,0x822be938
	if (!ctx.cr6.lt) goto loc_822BE938;
	// stfs f26,0(r10)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_822BE938:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822be924
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822BE924;
	// lfs f25,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	f25.f64 = double(temp.f32);
	// lfs f28,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	f28.f64 = double(temp.f32);
	// fmuls f23,f28,f25
	f23.f64 = double(float(f28.f64 * f25.f64));
	// lfs f27,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	f27.f64 = double(temp.f32);
	// fmuls f22,f27,f25
	f22.f64 = double(float(f27.f64 * f25.f64));
	// fcmpu cr6,f23,f26
	ctx.cr6.compare(f23.f64, f26.f64);
	// ble cr6,0x822be964
	if (!ctx.cr6.gt) goto loc_822BE964;
	// fcmpu cr6,f22,f26
	ctx.cr6.compare(f22.f64, f26.f64);
	// bgt cr6,0x822bec58
	if (ctx.cr6.gt) goto loc_822BEC58;
loc_822BE964:
	// lfs f21,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	f21.f64 = double(temp.f32);
	// fsubs f31,f31,f13
	f31.f64 = double(float(f31.f64 - ctx.f13.f64));
	// lfs f20,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	f20.f64 = double(temp.f32);
	// fsubs f19,f12,f21
	f19.f64 = double(float(ctx.f12.f64 - f21.f64));
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f18,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	f18.f64 = double(temp.f32);
	// fsubs f11,f11,f21
	ctx.f11.f64 = double(float(ctx.f11.f64 - f21.f64));
	// lfs f17,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	f17.f64 = double(temp.f32);
	// fsubs f30,f30,f20
	f30.f64 = double(float(f30.f64 - f20.f64));
	// li r11,3
	ctx.r11.s64 = 3;
	// fsubs f29,f29,f20
	f29.f64 = double(float(f29.f64 - f20.f64));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmuls f12,f19,f31
	ctx.f12.f64 = double(float(f19.f64 * f31.f64));
	// fmuls f16,f30,f11
	f16.f64 = double(float(f30.f64 * ctx.f11.f64));
	// fmuls f15,f29,f10
	f15.f64 = double(float(f29.f64 * ctx.f10.f64));
	// fmsubs f12,f11,f10,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f10.f64, -ctx.f12.f64)));
	// fmsubs f11,f19,f29,f16
	ctx.f11.f64 = double(float(std::fma(f19.f64, f29.f64, -f16.f64)));
	// fmsubs f10,f30,f31,f15
	ctx.f10.f64 = double(float(std::fma(f30.f64, f31.f64, -f15.f64)));
	// fmuls f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f1,f1,f12
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f31,f10,f21
	f31.f64 = double(float(ctx.f10.f64 * f21.f64));
	// fmadds f6,f4,f11,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f4.f64, ctx.f11.f64, ctx.f6.f64)));
	// fmadds f5,f5,f11,f1
	ctx.f5.f64 = double(float(std::fma(ctx.f5.f64, ctx.f11.f64, ctx.f1.f64)));
	// fmadds f0,f12,f18,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, f18.f64, ctx.f0.f64)));
	// fmadds f4,f12,f20,f31
	ctx.f4.f64 = double(float(std::fma(ctx.f12.f64, f20.f64, f31.f64)));
	// fmadds f6,f3,f10,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, ctx.f6.f64)));
	// fmadds f5,f2,f10,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f2.f64, ctx.f10.f64, ctx.f5.f64)));
	// fmadds f0,f17,f10,f0
	ctx.f0.f64 = double(float(std::fma(f17.f64, ctx.f10.f64, ctx.f0.f64)));
	// fmadds f13,f11,f13,f4
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f4.f64)));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// stfs f5,100(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f0,f6,f13
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_822BE9F8:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, f24.f64);
	// bge cr6,0x822bea0c
	if (!ctx.cr6.lt) goto loc_822BEA0C;
	// stfs f26,0(r10)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_822BEA0C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822be9f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822BE9F8;
	// lfs f6,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// lfs f13,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f4,f13,f6
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fcmpu cr6,f5,f26
	ctx.cr6.compare(ctx.f5.f64, f26.f64);
	// ble cr6,0x822bea38
	if (!ctx.cr6.gt) goto loc_822BEA38;
	// fcmpu cr6,f4,f26
	ctx.cr6.compare(ctx.f4.f64, f26.f64);
	// bgt cr6,0x822bec58
	if (ctx.cr6.gt) goto loc_822BEC58;
loc_822BEA38:
	// fmuls f3,f12,f7
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// stfs f26,92(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f2,f10,f8
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// fmuls f1,f9,f11
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmsubs f11,f8,f11,f3
	ctx.f11.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, -ctx.f3.f64)));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmsubs f12,f12,f9,f2
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f9.f64, -ctx.f2.f64)));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmsubs f10,f10,f7,f1
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f7.f64, -ctx.f1.f64)));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fabs f9,f11
	ctx.f9.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// ble cr6,0x822bea7c
	if (!ctx.cr6.gt) goto loc_822BEA7C;
	// li r11,1
	ctx.r11.s64 = 1;
	// fabs f12,f11
	ctx.f12.u64 = ctx.f11.u64 & ~0x8000000000000000;
loc_822BEA7C:
	// fabs f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x822bea8c
	if (!ctx.cr6.gt) goto loc_822BEA8C;
	// li r11,2
	ctx.r11.s64 = 2;
loc_822BEA8C:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// fcmpu cr6,f5,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f5.f64, f26.f64);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r11,r3
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f12,r10,r3
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r9,r3
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f7,r11,r5
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f8,r10,r5
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f9,r9,r5
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f9.f64 = double(temp.f32);
	// bgt cr6,0x822beb0c
	if (ctx.cr6.gt) goto loc_822BEB0C;
	// fcmpu cr6,f4,f26
	ctx.cr6.compare(ctx.f4.f64, f26.f64);
	// bgt cr6,0x822beae4
	if (ctx.cr6.gt) goto loc_822BEAE4;
	// fmuls f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f5,f26
	ctx.cr6.compare(ctx.f5.f64, f26.f64);
	// bgt cr6,0x822beb3c
	if (ctx.cr6.gt) goto loc_822BEB3C;
	// fcmpu cr6,f6,f26
	ctx.cr6.compare(ctx.f6.f64, f26.f64);
	// bne cr6,0x822beb3c
	if (!ctx.cr6.eq) goto loc_822BEB3C;
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, f26.f64);
	// beq cr6,0x822beb04
	if (ctx.cr6.eq) goto loc_822BEB04;
loc_822BEAE4:
	// fsubs f10,f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsubs f4,f0,f13
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// fmuls f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// b 0x822beb5c
	goto loc_822BEB5C;
loc_822BEB04:
	// fcmpu cr6,f13,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f26.f64);
	// beq cr6,0x822beb2c
	if (ctx.cr6.eq) goto loc_822BEB2C;
loc_822BEB0C:
	// fsubs f10,f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fsubs f3,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// fsubs f4,f13,f0
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f5,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// fmuls f11,f10,f13
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f10,f3,f13
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// b 0x822beb5c
	goto loc_822BEB5C;
loc_822BEB2C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822bac90
	ctx.lr = 0x822BEB38;
	sub_822BAC90(ctx, base);
	// b 0x822bec5c
	goto loc_822BEC5C;
loc_822BEB3C:
	// fsubs f3,f12,f10
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsubs f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// fmr f12,f10
	ctx.f12.f64 = ctx.f10.f64;
	// fsubs f4,f6,f13
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fmuls f0,f3,f6
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// fmuls f10,f11,f6
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_822BEB5C:
	// fcmpu cr6,f23,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f23.f64, f26.f64);
	// bgt cr6,0x822bebb0
	if (ctx.cr6.gt) goto loc_822BEBB0;
	// fcmpu cr6,f22,f26
	ctx.cr6.compare(f22.f64, f26.f64);
	// bgt cr6,0x822beb88
	if (ctx.cr6.gt) goto loc_822BEB88;
	// fmuls f0,f27,f28
	ctx.f0.f64 = double(float(f27.f64 * f28.f64));
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, f26.f64);
	// bgt cr6,0x822bebcc
	if (ctx.cr6.gt) goto loc_822BEBCC;
	// fcmpu cr6,f25,f26
	ctx.cr6.compare(f25.f64, f26.f64);
	// bne cr6,0x822bebcc
	if (!ctx.cr6.eq) goto loc_822BEBCC;
	// fcmpu cr6,f28,f26
	ctx.cr6.compare(f28.f64, f26.f64);
	// beq cr6,0x822beba8
	if (ctx.cr6.eq) goto loc_822BEBA8;
loc_822BEB88:
	// fsubs f7,f7,f8
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fsubs f6,f9,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fmr f9,f8
	ctx.f9.f64 = ctx.f8.f64;
	// fsubs f0,f28,f25
	ctx.f0.f64 = double(float(f28.f64 - f25.f64));
	// fsubs f13,f28,f27
	ctx.f13.f64 = double(float(f28.f64 - f27.f64));
	// fmuls f8,f7,f28
	ctx.f8.f64 = double(float(ctx.f7.f64 * f28.f64));
	// fmuls f7,f6,f28
	ctx.f7.f64 = double(float(ctx.f6.f64 * f28.f64));
	// b 0x822bebe8
	goto loc_822BEBE8;
loc_822BEBA8:
	// fcmpu cr6,f27,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f27.f64, f26.f64);
	// beq cr6,0x822beb2c
	if (ctx.cr6.eq) goto loc_822BEB2C;
loc_822BEBB0:
	// fsubs f7,f7,f9
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fsubs f6,f8,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fsubs f0,f27,f25
	ctx.f0.f64 = double(float(f27.f64 - f25.f64));
	// fsubs f13,f27,f28
	ctx.f13.f64 = double(float(f27.f64 - f28.f64));
	// fmuls f8,f7,f27
	ctx.f8.f64 = double(float(ctx.f7.f64 * f27.f64));
	// fmuls f7,f6,f27
	ctx.f7.f64 = double(float(ctx.f6.f64 * f27.f64));
	// b 0x822bebe8
	goto loc_822BEBE8;
loc_822BEBCC:
	// fsubs f8,f8,f7
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// fmr f9,f7
	ctx.f9.f64 = ctx.f7.f64;
	// fsubs f0,f25,f28
	ctx.f0.f64 = double(float(f25.f64 - f28.f64));
	// fsubs f13,f25,f27
	ctx.f13.f64 = double(float(f25.f64 - f27.f64));
	// fmuls f8,f8,f25
	ctx.f8.f64 = double(float(ctx.f8.f64 * f25.f64));
	// fmuls f7,f6,f25
	ctx.f7.f64 = double(float(ctx.f6.f64 * f25.f64));
loc_822BEBE8:
	// fmuls f6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fmuls f11,f11,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmuls f2,f6,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fmuls f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmuls f8,f8,f3
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// fmuls f7,f7,f3
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// fmuls f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fmuls f9,f9,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmadds f11,f11,f4,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f4.f64, ctx.f12.f64)));
	// fmadds f12,f10,f5,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f5.f64, ctx.f12.f64)));
	// fmadds f13,f8,f13,f9
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f9.f64)));
	// fmadds f0,f7,f0,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f9.f64)));
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x822bec30
	if (!ctx.cr6.gt) goto loc_822BEC30;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// fmr f12,f10
	ctx.f12.f64 = ctx.f10.f64;
loc_822BEC30:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822bec44
	if (!ctx.cr6.gt) goto loc_822BEC44;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_822BEC44:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x822bec58
	if (ctx.cr6.lt) goto loc_822BEC58;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// bge cr6,0x822bec5c
	if (!ctx.cr6.lt) goto loc_822BEC5C;
loc_822BEC58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822BEC5C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x822d4f50
	ctx.lr = 0x822BEC68;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D3258) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822D3260;
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822d3284
	if (!ctx.cr6.eq) goto loc_822D3284;
loc_822D327C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d338c
	goto loc_822D338C;
loc_822D3284:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0de0
	ctx.lr = 0x822D328C;
	sub_822D0DE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822d327c
	if (!ctx.cr0.eq) goto loc_822D327C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0ad0
	ctx.lr = 0x822D329C;
	sub_822D0AD0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 260);
	// bl 0x822cd9a8
	ctx.lr = 0x822D32A8;
	sub_822CD9A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d327c
	if (ctx.cr0.eq) goto loc_822D327C;
	// lbz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 28);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mullw r3,r11,r10
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x82209f88
	ctx.lr = 0x822D32CC;
	sub_82209F88(ctx, base);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// lbz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 28);
	// mulli r3,r11,36
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(36));
	// bl 0x822c80d0
	ctx.lr = 0x822D32DC;
	sub_822C80D0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r3,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d32f8
	if (!ctx.cr6.eq) goto loc_822D32F8;
loc_822D32EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0ad0
	ctx.lr = 0x822D32F4;
	sub_822D0AD0(ctx, base);
	// b 0x822d327c
	goto loc_822D327C;
loc_822D32F8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d32ec
	if (ctx.cr6.eq) goto loc_822D32EC;
	// lbz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 28);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mullw r5,r10,r9
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// bl 0x822d5870
	ctx.lr = 0x822D3318;
	sub_822D5870(ctx, base);
	// lbz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 28);
	// lwz r3,216(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 216);
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r5,r11,36
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(36));
	// bl 0x822d5870
	ctx.lr = 0x822D332C;
	sub_822D5870(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d3340
	if (ctx.cr0.eq) goto loc_822D3340;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0e48
	ctx.lr = 0x822D3340;
	sub_822D0E48(ctx, base);
loc_822D3340:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d3354
	if (ctx.cr0.eq) goto loc_822D3354;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0e48
	ctx.lr = 0x822D3354;
	sub_822D0E48(ctx, base);
loc_822D3354:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2048
	ctx.r10.s64 = 2048;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stb r11,29(r31)
	REX_STORE_U8(r31.u32 + 29, ctx.r11.u8);
loc_822D3368:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 260);
	// bl 0x822cda40
	ctx.lr = 0x822D3378;
	sub_822CDA40(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d3368
	if (ctx.cr0.eq) goto loc_822D3368;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d2780
	ctx.lr = 0x822D3388;
	sub_822D2780(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_822D338C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822D6C18) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d6c38
	if (ctx.cr6.eq) goto loc_822D6C38;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822d6c50
	if (!ctx.cr6.eq) goto loc_822D6C50;
loc_822D6C38:
	// bl 0x822db6c0
	ctx.lr = 0x822D6C3C;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822D6C48;
	sub_822D6910(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x822d6cb8
	goto loc_822D6CB8;
loc_822D6C50:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822d6c78
	if (!ctx.cr6.eq) goto loc_822D6C78;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// bl 0x822db6c0
	ctx.lr = 0x822D6C64;
	sub_822DB6C0(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_822D6C68:
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x822d6910
	ctx.lr = 0x822D6C70;
	sub_822D6910(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x822d6cb8
	goto loc_822D6CB8;
loc_822D6C78:
	// subf r11,r5,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r5.u64;
loc_822D6C7C:
	// lhz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// sthx r10,r11,r5
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u16);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// beq 0x822d6c98
	if (ctx.cr0.eq) goto loc_822D6C98;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x822d6c7c
	if (!ctx.cr0.eq) goto loc_822D6C7C;
loc_822D6C98:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822d6cb4
	if (!ctx.cr6.eq) goto loc_822D6CB4;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// bl 0x822db6c0
	ctx.lr = 0x822D6CAC;
	sub_822DB6C0(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x822d6c68
	goto loc_822D6C68;
loc_822D6CB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D6CB8:
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

DEFINE_REX_FUNC(__savevmx_72) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_120) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
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

DEFINE_REX_FUNC(sub_822D9238) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D93D8) {
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
	ctx.lr = 0x822D93E0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// bl 0x822d6ff8
	ctx.lr = 0x822D9404;
	sub_822D6FF8(ctx, base);
	// stw r30,176(r3)
	REX_STORE_U32(ctx.r3.u32 + 176, r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822e0758
	ctx.lr = 0x822D942C;
	sub_822E0758(ctx, base);
	// bl 0x822d6ff8
	ctx.lr = 0x822D9430;
	sub_822D6FF8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,176(r3)
	REX_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_822DA900) {
	REX_FUNC_PROLOGUE();
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// lfd f4,27104(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = REX_LOAD_U64(ctx.r12.u32 + 27104);
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// lfd f5,27112(r12)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r12.u32 + 27112);
	// fcmpu cr0,f1,f4
	ctx.cr0.compare(ctx.f1.f64, ctx.f4.f64);
	// beq- 0x822da940
	if (ctx.cr0.eq) goto loc_822DA940;
	// fabs f6,f1
	ctx.f6.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fcmpu cr0,f6,f5
	ctx.cr0.compare(ctx.f6.f64, ctx.f5.f64);
	// bge- 0x822da940
	if (!ctx.cr0.lt) goto loc_822DA940;
	// fcmpu cr0,f1,f4
	ctx.cr0.compare(ctx.f1.f64, ctx.f4.f64);
	// blt 0x822da938
	if (ctx.cr0.lt) goto loc_822DA938;
	// fadd f4,f1,f5
	ctx.f4.f64 = ctx.f1.f64 + ctx.f5.f64;
	// fsub f1,f4,f5
	ctx.f1.f64 = ctx.f4.f64 - ctx.f5.f64;
	// b 0x822da940
	goto loc_822DA940;
loc_822DA938:
	// fsub f4,f1,f5
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f1.f64 - ctx.f5.f64;
	// fadd f1,f4,f5
	ctx.f1.f64 = ctx.f4.f64 + ctx.f5.f64;
loc_822DA940:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DBDE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-96
	r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822d6ff8
	ctx.lr = 0x822DBE00;
	sub_822D6FF8(ctx, base);
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dbe28
	if (ctx.cr6.eq) goto loc_822DBE28;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DBE1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_822DBE28:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,324
	ctx.r3.u64 = ctx.r3.u64 | 324;
	// bl 0x824d45bc
	ctx.lr = 0x822DBE34;
	__imp__KeBugCheck(ctx, base);
}

DEFINE_REX_FUNC(sub_822DCE98) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822dcee8
	if (ctx.cr6.eq) goto loc_822DCEE8;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822dcee8
	if (ctx.cr0.eq) goto loc_822DCEE8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822e1da0
	ctx.lr = 0x822DCEC8;
	sub_822E1DA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// rlwinm r11,r11,0,20,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_822DCEE8:
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

DEFINE_REX_FUNC(sub_822E10D0) {
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
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r30,r11,-11584
	r30.s64 = ctx.r11.s64 + -11584;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_822E10F0:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e112c
	if (ctx.cr6.eq) goto loc_822E112C;
	// addi r11,r3,2304
	ctx.r11.s64 = ctx.r3.s64 + 2304;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822e1120
	if (!ctx.cr6.lt) goto loc_822E1120;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r11,r11,2304
	ctx.r11.s64 = ctx.r11.s64 + 2304;
loc_822E1114:
	// addi r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 + 72;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822e1114
	if (ctx.cr6.lt) goto loc_822E1114;
loc_822E1120:
	// bl 0x822d98f0
	ctx.lr = 0x822E1124;
	sub_822D98F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_822E112C:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r11,r30,256
	ctx.r11.s64 = r30.s64 + 256;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e10f0
	if (ctx.cr6.lt) goto loc_822E10F0;
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

DEFINE_REX_FUNC(sub_822E5D10) {
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
	ctx.lr = 0x822E5D18;
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,-1
	r24.s64 = -1;
	// li r25,0
	r25.s64 = 0;
	// li r3,11
	ctx.r3.s64 = 11;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// stw r25,84(r31)
	REX_STORE_U32(r31.u32 + 84, r25.u32);
	// bl 0x822dbc40
	ctx.lr = 0x822E5D38;
	sub_822DBC40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822e5d48
	if (!ctx.cr0.eq) goto loc_822E5D48;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822e5f20
	goto loc_822E5F20;
loc_822E5D48:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x822dbd80
	ctx.lr = 0x822E5D50;
	sub_822DBD80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r28,0
	r28.s64 = 0;
	// li r26,1
	r26.s64 = 1;
	// addi r29,r11,-11584
	r29.s64 = ctx.r11.s64 + -11584;
loc_822E5D64:
	// stw r28,92(r31)
	REX_STORE_U32(r31.u32 + 92, r28.u32);
	// cmpwi cr6,r28,64
	ctx.cr6.compare<int32_t>(r28.s32, 64, ctx.xer);
	// bge cr6,0x822e5f10
	if (!ctx.cr6.lt) goto loc_822E5F10;
	// rlwinm r27,r28,2,0,29
	r27.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r27,r29
	r30.u64 = REX_LOAD_U32(r27.u32 + r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822e5e80
	if (ctx.cr6.eq) goto loc_822E5E80;
loc_822E5D80:
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// addi r11,r11,2304
	ctx.r11.s64 = ctx.r11.s64 + 2304;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822e5e68
	if (!ctx.cr6.lt) goto loc_822E5E68;
	// lbz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e5e34
	if (!ctx.cr0.eq) goto loc_822E5E34;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e5dfc
	if (!ctx.cr6.eq) goto loc_822E5DFC;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x822dbd80
	ctx.lr = 0x822E5DB8;
	sub_822DBD80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e5df0
	if (!ctx.cr6.eq) goto loc_822E5DF0;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x822dbb20
	ctx.lr = 0x822E5DD4;
	sub_822DBB20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822e5de4
	if (!ctx.cr0.eq) goto loc_822E5DE4;
	// stw r26,84(r31)
	REX_STORE_U32(r31.u32 + 84, r26.u32);
	// b 0x822e5df0
	goto loc_822E5DF0;
loc_822E5DE4:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_822E5DF0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = r31.s64 + 176;
	// bl 0x822e5f4c
	ctx.lr = 0x822E5DFC;
	ctx.r24 = r24;
	ctx.r25 = r25;
	ctx.r26 = r26;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_822E5F4C(ctx, base);
	r24 = ctx.r24;
	r25 = ctx.r25;
	r26 = ctx.r26;
	r27 = ctx.r27;
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
loc_822E5DFC:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x822e5e34
	if (!ctx.cr6.eq) goto loc_822E5E34;
	// addi r27,r30,12
	r27.s64 = r30.s64 + 12;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824d438c
	ctx.lr = 0x822E5E10;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lbz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e5e2c
	if (ctx.cr0.eq) goto loc_822E5E2C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824d437c
	ctx.lr = 0x822E5E24;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x822e5e38
	goto loc_822E5E38;
loc_822E5E2C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x822e5e40
	if (ctx.cr6.eq) goto loc_822E5E40;
loc_822E5E34:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_822E5E38:
	// addi r30,r30,72
	r30.s64 = r30.s64 + 72;
	// b 0x822e5d80
	goto loc_822E5D80;
loc_822E5E40:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r26,4(r30)
	REX_STORE_U8(r30.u32 + 4, r26.u8);
	// stw r24,0(r30)
	REX_STORE_U32(r30.u32 + 0, r24.u32);
	// li r9,72
	ctx.r9.s64 = 72;
	// rlwinm r10,r28,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// divw r11,r11,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r11.s32 / ctx.r9.s32 : 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
loc_822E5E68:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822e5f10
	if (!ctx.cr6.eq) goto loc_822E5F10;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x822e5d64
	goto loc_822E5D64;
loc_822E5E80:
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x822dba28
	ctx.lr = 0x822E5E8C;
	sub_822DBA28(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822e5f10
	if (ctx.cr0.eq) goto loc_822E5F10;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// stwx r3,r27,r29
	REX_STORE_U32(r27.u32 + r29.u32, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-11596(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -11596);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,-11596(r9)
	REX_STORE_U32(ctx.r9.u32 + -11596, ctx.r11.u32);
loc_822E5EAC:
	// lwzx r11,r27,r29
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r29.u32);
	// addi r11,r11,2304
	ctx.r11.s64 = ctx.r11.s64 + 2304;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822e5edc
	if (!ctx.cr6.lt) goto loc_822E5EDC;
	// li r11,10
	ctx.r11.s64 = 10;
	// stb r10,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r24,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r24.u32);
	// stb r11,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// b 0x822e5eac
	goto loc_822E5EAC;
loc_822E5EDC:
	// rlwinm r3,r28,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 5) & 0xFFFFFFE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// srawi r9,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 5;
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mulli r10,r11,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r26,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, r26.u8);
	// bl 0x822e5be0
	ctx.lr = 0x822E5F04;
	sub_822E5BE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822e5f10
	if (!ctx.cr0.eq) goto loc_822E5F10;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
loc_822E5F10:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = r31.s64 + 176;
	// bl 0x822e5f28
	ctx.lr = 0x822E5F1C;
	ctx.r24 = r24;
	ctx.r25 = r25;
	ctx.r26 = r26;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_822E5F28(ctx, base);
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
loc_822E5F20:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_822EEC30) {
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
	// addi r10,r11,-27256
	ctx.r10.s64 = ctx.r11.s64 + -27256;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x822edd40
	ctx.lr = 0x822EEC5C;
	sub_822EDD40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822eece8
	ctx.lr = 0x822EEC64;
	sub_822EECE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822eec84
	if (ctx.cr6.eq) goto loc_822EEC84;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// bl 0x823cd250
	ctx.lr = 0x822EEC80;
	sub_823CD250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822EEC84:
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

DEFINE_REX_FUNC(sub_822F1510) {
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
	ctx.lr = 0x822F1518;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f16d4
	if (ctx.cr6.eq) goto loc_822F16D4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822f16d4
	if (ctx.cr6.eq) goto loc_822F16D4;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x822f16d4
	if (ctx.cr6.lt) goto loc_822F16D4;
	// cmplwi cr6,r4,127
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 127, ctx.xer);
	// bgt cr6,0x822f16d4
	if (ctx.cr6.gt) goto loc_822F16D4;
	// lwz r11,528(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f16d4
	if (ctx.cr6.eq) goto loc_822F16D4;
	// li r5,796
	ctx.r5.s64 = 796;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d5870
	ctx.lr = 0x822F1570;
	sub_822D5870(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// clrlwi r30,r28,24
	r30.u64 = r28.u32 & 0xFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x822f9900
	ctx.lr = 0x822F1588;
	sub_822F9900(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f16c4
	if (ctx.cr6.lt) goto loc_822F16C4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x822f16d4
	if (!ctx.cr6.eq) goto loc_822F16D4;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,128(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// bl 0x822f9900
	ctx.lr = 0x822F15B8;
	sub_822F9900(ctx, base);
	// lwz r7,4(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r11,104(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f1600
	if (ctx.cr6.eq) goto loc_822F1600;
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822f1600
	if (ctx.cr6.eq) goto loc_822F1600;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_822F15DC:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r28,r6
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x822f164c
	if (ctx.cr6.eq) goto loc_822F164C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822f15dc
	if (ctx.cr6.lt) goto loc_822F15DC;
loc_822F1600:
	// lwz r11,28(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// li r9,10
	ctx.r9.s64 = 10;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// divwu r7,r8,r9
	ctx.r7.u64 = uint32_t(ctx.r9.u32 ? ctx.r8.u32 / ctx.r9.u32 : 0);
	// stw r7,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r7.u32);
loc_822F1618:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f1658
	if (ctx.cr6.eq) goto loc_822F1658;
	// ld r3,64(r11)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x822f1658
	if (ctx.cr6.eq) goto loc_822F1658;
	// bl 0x822d7620
	ctx.lr = 0x822F1634;
	sub_822D7620(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfd f0,-26240(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -26240);
	// fdiv f0,f0,f1
	ctx.f0.f64 = ctx.f0.f64 / ctx.f1.f64;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfs f13,8(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// b 0x822f1664
	goto loc_822F1664;
loc_822F164C:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// b 0x822f1618
	goto loc_822F1618;
loc_822F1658:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
loc_822F1664:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r29,790
	ctx.r5.s64 = r29.s64 + 790;
	// addi r4,r29,792
	ctx.r4.s64 = r29.s64 + 792;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,16(r29)
	REX_STORE_U32(r29.u32 + 16, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r7,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,20(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// sth r9,788(r29)
	REX_STORE_U16(r29.u32 + 788, ctx.r9.u16);
	// bl 0x822f0260
	ctx.lr = 0x822F16A4;
	sub_822F0260(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f16c4
	if (ctx.cr6.lt) goto loc_822F16C4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r29,20
	ctx.r3.s64 = r29.s64 + 20;
	// addi r4,r11,-27056
	ctx.r4.s64 = ctx.r11.s64 + -27056;
	// li r5,768
	ctx.r5.s64 = 768;
	// bl 0x822d4fa0
	ctx.lr = 0x822F16C4;
	sub_822D4FA0(ctx, base);
loc_822F16C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f0588
	ctx.lr = 0x822F16CC;
	sub_822F0588(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_822F16D4:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822F9B20) {
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
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f9b74
	if (ctx.cr6.eq) goto loc_822F9B74;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822f9b74
	if (ctx.cr6.eq) goto loc_822F9B74;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F9B68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f9c50
	if (ctx.cr6.lt) goto loc_822F9C50;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_822F9B74:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f9b9c
	if (ctx.cr6.eq) goto loc_822F9B9C;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822f94e8
	ctx.lr = 0x822F9B90;
	sub_822F94E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f9c50
	if (ctx.cr6.lt) goto loc_822F9C50;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_822F9B9C:
	// li r31,0
	r31.s64 = 0;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f9be4
	if (ctx.cr6.eq) goto loc_822F9BE4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822f9be4
	if (ctx.cr6.eq) goto loc_822F9BE4;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F9BD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f9c50
	if (ctx.cr6.lt) goto loc_822F9C50;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_822F9BE4:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 + 20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f9c0c
	if (ctx.cr6.eq) goto loc_822F9C0C;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822f94e8
	ctx.lr = 0x822F9C00;
	sub_822F94E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f9c50
	if (ctx.cr6.lt) goto loc_822F9C50;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_822F9C0C:
	// stw r31,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r31.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,100(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822f9c2c
	if (ctx.cr6.eq) goto loc_822F9C2C;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822f9080
	ctx.lr = 0x822F9C28;
	sub_822F9080(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_822F9C2C:
	// lwz r3,72(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// bl 0x822f9a10
	ctx.lr = 0x822F9C34;
	sub_822F9A10(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822f94e8
	ctx.lr = 0x822F9C4C;
	sub_822F94E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822F9C50:
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

DEFINE_REX_FUNC(sub_82302E78) {
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
	ctx.lr = 0x82302E80;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,118(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 118);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r27,56(r5)
	r27.u64 = REX_LOAD_U32(ctx.r5.u32 + 56);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82302fe4
	if (!ctx.cr6.gt) goto loc_82302FE4;
	// lwz r10,484(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 484);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,268(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82302EC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82302fec
	if (ctx.cr6.lt) goto loc_82302FEC;
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sth r11,202(r31)
	REX_STORE_U16(r31.u32 + 202, ctx.r11.u16);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bge cr6,0x82302f8c
	if (!ctx.cr6.lt) goto loc_82302F8C;
loc_82302EF4:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
loc_82302F04:
	// fcfid f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// beq cr6,0x82302f1c
	if (ctx.cr6.eq) goto loc_82302F1C;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82302F1C:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfsx f0,r11,r27
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + r27.u32, temp.u32);
	// lwz r10,484(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 484);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82302F38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82302fec
	if (ctx.cr6.lt) goto loc_82302FEC;
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sth r11,202(r31)
	REX_STORE_U16(r31.u32 + 202, ctx.r11.u16);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bge cr6,0x82302f7c
	if (!ctx.cr6.lt) goto loc_82302F7C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x82302f04
	goto loc_82302F04;
loc_82302F7C:
	// lhz r9,202(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 202);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r30.s32, ctx.xer);
	// blt cr6,0x82302ef4
	if (ctx.cr6.lt) goto loc_82302EF4;
loc_82302F8C:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bne cr6,0x82302fd0
	if (!ctx.cr6.eq) goto loc_82302FD0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// beq cr6,0x82302fc0
	if (ctx.cr6.eq) goto loc_82302FC0;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82302FC0:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r9,r27
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + r27.u32, temp.u32);
loc_82302FD0:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// lwz r10,268(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 268);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82302fec
	if (!ctx.cr6.gt) goto loc_82302FEC;
loc_82302FE4:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_82302FEC:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r30.s32, ctx.xer);
	// bne cr6,0x8230300c
	if (!ctx.cr6.eq) goto loc_8230300C;
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// sth r11,490(r29)
	REX_STORE_U16(r29.u32 + 490, ctx.r11.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
loc_8230300C:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// sth r9,490(r29)
	REX_STORE_U16(r29.u32 + 490, ctx.r9.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8230BF58) {
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
	ctx.lr = 0x8230BF60;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,28(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r30,0
	r30.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r24,r4,-24
	r24.s64 = ctx.r4.s64 + -24;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// lwz r3,0(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r25,r30
	r25.u64 = r30.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// std r30,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r30.u64);
	// sth r30,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r30.u16);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230BFAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230c164
	if (ctx.cr6.lt) goto loc_8230C164;
	// cmplwi cr6,r24,16
	ctx.cr6.compare<uint32_t>(r24.u32, 16, ctx.xer);
	// blt cr6,0x8230c15c
	if (ctx.cr6.lt) goto loc_8230C15C;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r25,16
	r25.s64 = 16;
	// bl 0x82307c58
	ctx.lr = 0x8230BFDC;
	sub_82307C58(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230c164
	if (ctx.cr6.lt) goto loc_8230C164;
	// cmplwi cr6,r24,32
	ctx.cr6.compare<uint32_t>(r24.u32, 32, ctx.xer);
	// blt cr6,0x8230c15c
	if (ctx.cr6.lt) goto loc_8230C15C;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r25,32
	r25.s64 = 32;
	// bl 0x82307a88
	ctx.lr = 0x8230C00C;
	sub_82307A88(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230c164
	if (ctx.cr6.lt) goto loc_8230C164;
	// ld r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// li r10,10000
	ctx.r10.s64 = 10000;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// divwu r8,r9,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r8,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r8.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823078f0
	ctx.lr = 0x8230C044;
	sub_823078F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230c164
	if (ctx.cr6.lt) goto loc_8230C164;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,8(r27)
	REX_STORE_U32(r27.u32 + 8, ctx.r11.u32);
	// bl 0x823078f0
	ctx.lr = 0x8230C070;
	sub_823078F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230c164
	if (ctx.cr6.lt) goto loc_8230C164;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r29,0(r27)
	REX_STORE_U8(r27.u32 + 0, r29.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r27)
	REX_STORE_U32(r27.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8230c164
	if (ctx.cr6.eq) goto loc_8230C164;
	// addi r29,r27,16
	r29.s64 = r27.s64 + 16;
	// lwz r3,224(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 224);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f9490
	ctx.lr = 0x8230C0A8;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230c164
	if (ctx.cr6.lt) goto loc_8230C164;
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x822d5870
	ctx.lr = 0x8230C0C8;
	sub_822D5870(ctx, base);
	// lwz r10,12(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 12);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8230c164
	if (!ctx.cr6.gt) goto loc_8230C164;
	// li r29,38
	r29.s64 = 38;
	// addi r26,r11,-4
	r26.s64 = ctx.r11.s64 + -4;
loc_8230C0E0:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(r29.u32, r24.u32, ctx.xer);
	// bgt cr6,0x8230c15c
	if (ctx.cr6.gt) goto loc_8230C15C;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r25,r25,6
	r25.s64 = r25.s64 + 6;
	// addi r29,r29,6
	r29.s64 = r29.s64 + 6;
	// bl 0x823078f0
	ctx.lr = 0x8230C108;
	sub_823078F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230c164
	if (ctx.cr6.lt) goto loc_8230C164;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r11.u32);
	// bl 0x82307770
	ctx.lr = 0x8230C134;
	sub_82307770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230c164
	if (ctx.cr6.lt) goto loc_8230C164;
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// sthu r11,8(r26)
	ea = 8 + r26.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	r26.u32 = ea;
	// lwz r10,12(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 12);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8230c0e0
	if (ctx.cr6.lt) goto loc_8230C0E0;
	// b 0x8230c164
	goto loc_8230C164;
loc_8230C15C:
	// lis r31,-32688
	r31.s64 = -2142240768;
	// ori r31,r31,12
	r31.u64 = r31.u64 | 12;
loc_8230C164:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r11,r24
	ctx.r10.u64 = r24.u64 - ctx.r11.u64;
	// subf. r30,r25,r10
	r30.u64 = ctx.r10.u64 - r25.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8230c1a8
	if (ctx.cr0.eq) goto loc_8230C1A8;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230C18C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230c164
	if (ctx.cr6.lt) goto loc_8230C164;
	// ld r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U64(r23.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r23)
	REX_STORE_U64(r23.u32 + 8, ctx.r11.u64);
loc_8230C1A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_823120A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x823120B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r28,0
	r28.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823120dc
	if (!ctx.cr6.eq) goto loc_823120DC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_823120DC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823121c4
	if (ctx.cr6.eq) goto loc_823121C4;
loc_823120F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823121c4
	if (ctx.cr6.eq) goto loc_823121C4;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// cmpld cr6,r10,r29
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, r29.u64, ctx.xer);
	// bgt cr6,0x823121c4
	if (ctx.cr6.gt) goto loc_823121C4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,12(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823121b0
	if (!ctx.cr6.eq) goto loc_823121B0;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8231212C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823121c4
	if (ctx.cr6.lt) goto loc_823121C4;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82312174
	if (ctx.cr6.eq) goto loc_82312174;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// b 0x8231217c
	goto loc_8231217C;
loc_82312174:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_8231217C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// bne 0x82312198
	if (!ctx.cr0.eq) goto loc_82312198;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r28.u32);
	// stw r28,20(r31)
	REX_STORE_U32(r31.u32 + 20, r28.u32);
loc_82312198:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x822f94e8
	ctx.lr = 0x823121A8;
	sub_822F94E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823121c4
	if (ctx.cr6.lt) goto loc_823121C4;
loc_823121B0:
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823120f0
	if (!ctx.cr6.eq) goto loc_823120F0;
loc_823121C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82314B00) {
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
	ctx.lr = 0x82314B08;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,110(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 110);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// li r9,-1
	ctx.r9.s64 = -1;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// addi r30,r3,664
	r30.s64 = ctx.r3.s64 + 664;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// li r5,8
	ctx.r5.s64 = 8;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// stw r3,720(r31)
	REX_STORE_U32(r31.u32 + 720, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,724(r31)
	REX_STORE_U32(r31.u32 + 724, ctx.r11.u32);
	// bl 0x82326c20
	ctx.lr = 0x82314B58;
	sub_82326C20(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82314fe4
	if (ctx.cr6.lt) goto loc_82314FE4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82326da8
	ctx.lr = 0x82314B70;
	sub_82326DA8(ctx, base);
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// rotlwi r30,r11,2
	r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823143c0
	ctx.lr = 0x82314B80;
	sub_823143C0(ctx, base);
	// stw r3,356(r31)
	REX_STORE_U32(r31.u32 + 356, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82314fdc
	if (ctx.cr6.eq) goto loc_82314FDC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82314B98;
	sub_822D5870(ctx, base);
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// rotlwi r29,r11,2
	r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823143c0
	ctx.lr = 0x82314BA8;
	sub_823143C0(ctx, base);
	// stw r3,360(r31)
	REX_STORE_U32(r31.u32 + 360, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82314fdc
	if (ctx.cr6.eq) goto loc_82314FDC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82314BC0;
	sub_822D5870(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823143e0
	ctx.lr = 0x82314BCC;
	sub_823143E0(ctx, base);
	// stw r3,364(r31)
	REX_STORE_U32(r31.u32 + 364, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82314fdc
	if (ctx.cr6.eq) goto loc_82314FDC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82314BE4;
	sub_822D5870(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823143e0
	ctx.lr = 0x82314BF0;
	sub_823143E0(ctx, base);
	// stw r3,368(r31)
	REX_STORE_U32(r31.u32 + 368, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82314fdc
	if (ctx.cr6.eq) goto loc_82314FDC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82314C08;
	sub_822D5870(ctx, base);
	// lwz r7,448(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 448);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// li r30,4
	r30.s64 = 4;
	// ori r28,r11,65535
	r28.u64 = ctx.r11.u64 | 65535;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82314cc0
	if (ctx.cr6.eq) goto loc_82314CC0;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// ble cr6,0x82314c64
	if (!ctx.cr6.gt) goto loc_82314C64;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
loc_82314C54:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// srw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x82314c54
	if (ctx.cr6.gt) goto loc_82314C54;
loc_82314C64:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82314C68:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r10,r30,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x82314c68
	if (ctx.cr6.gt) goto loc_82314C68;
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 456);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x82314ca4
	if (ctx.cr6.lt) goto loc_82314CA4;
loc_82314C90:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,87
	r29.u64 = r29.u64 | 87;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_82314CA4:
	// slw r11,r8,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// mulld r8,r9,r10
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * ctx.r10.u64);
	// rldicr r6,r8,2,61
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// cmpd cr6,r6,r28
	ctx.cr6.compare<int64_t>(ctx.r6.s64, r28.s64, ctx.xer);
	// bgt cr6,0x82314c90
	if (ctx.cr6.gt) goto loc_82314C90;
loc_82314CC0:
	// lwz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// beq cr6,0x82314cec
	if (ctx.cr6.eq) goto loc_82314CEC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,456(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 456);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// sraw r11,r6,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r11.s64 = ctx.r6.s32 >> temp.u32;
	// b 0x82314d18
	goto loc_82314D18;
loc_82314CEC:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82314d0c
	if (ctx.cr6.eq) goto loc_82314D0C;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,456(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 456);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// slw r11,r6,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// b 0x82314d18
	goto loc_82314D18;
loc_82314D0C:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
loc_82314D18:
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// li r4,32
	ctx.r4.s64 = 32;
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823143e0
	ctx.lr = 0x82314D2C;
	sub_823143E0(ctx, base);
	// stw r3,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82314fdc
	if (ctx.cr6.eq) goto loc_82314FDC;
	// lwz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82314d60
	if (ctx.cr6.eq) goto loc_82314D60;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823143e0
	ctx.lr = 0x82314D54;
	sub_823143E0(ctx, base);
	// stw r3,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82314fdc
	if (ctx.cr6.eq) goto loc_82314FDC;
loc_82314D60:
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823143c0
	ctx.lr = 0x82314D6C;
	sub_823143C0(ctx, base);
	// stw r3,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82314fdc
	if (ctx.cr6.eq) goto loc_82314FDC;
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// mulli r3,r11,116
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(116));
	// bl 0x823143c0
	ctx.lr = 0x82314D84;
	sub_823143C0(ctx, base);
	// stw r3,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82314fdc
	if (ctx.cr6.eq) goto loc_82314FDC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231a238
	ctx.lr = 0x82314D98;
	sub_8231A238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82316db8
	ctx.lr = 0x82314DA0;
	sub_82316DB8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82314fe4
	if (ctx.cr6.lt) goto loc_82314FE4;
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823143c0
	ctx.lr = 0x82314DB8;
	sub_823143C0(ctx, base);
	// stw r3,352(r31)
	REX_STORE_U32(r31.u32 + 352, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82314fdc
	if (ctx.cr6.eq) goto loc_82314FDC;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// mulli r3,r11,112
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// bl 0x823143c0
	ctx.lr = 0x82314DD0;
	sub_823143C0(ctx, base);
	// stw r3,332(r31)
	REX_STORE_U32(r31.u32 + 332, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82314fdc
	if (ctx.cr6.eq) goto loc_82314FDC;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// mulli r3,r11,112
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// bl 0x823143c0
	ctx.lr = 0x82314DE8;
	sub_823143C0(ctx, base);
	// stw r3,336(r31)
	REX_STORE_U32(r31.u32 + 336, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82314fdc
	if (ctx.cr6.eq) goto loc_82314FDC;
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823143c0
	ctx.lr = 0x82314E00;
	sub_823143C0(ctx, base);
	// stw r3,412(r31)
	REX_STORE_U32(r31.u32 + 412, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82314e1c
	if (!ctx.cr6.eq) goto loc_82314E1C;
loc_82314E0C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_82314E1C:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// lwz r10,304(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 304);
	// mullw r3,r11,r10
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x823143c0
	ctx.lr = 0x82314E2C;
	sub_823143C0(ctx, base);
	// stw r3,416(r31)
	REX_STORE_U32(r31.u32 + 416, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82314e0c
	if (ctx.cr6.eq) goto loc_82314E0C;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// lwz r10,304(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 304);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823143c0
	ctx.lr = 0x82314E4C;
	sub_823143C0(ctx, base);
	// stw r3,424(r31)
	REX_STORE_U32(r31.u32 + 424, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82314e0c
	if (ctx.cr6.eq) goto loc_82314E0C;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// lwz r10,304(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 304);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823143c0
	ctx.lr = 0x82314E6C;
	sub_823143C0(ctx, base);
	// stw r3,420(r31)
	REX_STORE_U32(r31.u32 + 420, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82314e0c
	if (ctx.cr6.eq) goto loc_82314E0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317258
	ctx.lr = 0x82314E80;
	sub_82317258(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82314fe4
	if (ctx.cr6.lt) goto loc_82314FE4;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x823143c0
	ctx.lr = 0x82314E98;
	sub_823143C0(ctx, base);
	// stw r3,552(r31)
	REX_STORE_U32(r31.u32 + 552, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82314e0c
	if (ctx.cr6.eq) goto loc_82314E0C;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x823143c0
	ctx.lr = 0x82314EB0;
	sub_823143C0(ctx, base);
	// stw r3,556(r31)
	REX_STORE_U32(r31.u32 + 556, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82314e0c
	if (ctx.cr6.eq) goto loc_82314E0C;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82314ef8
	if (!ctx.cr6.gt) goto loc_82314EF8;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x823143c0
	ctx.lr = 0x82314ED4;
	sub_823143C0(ctx, base);
	// stw r3,560(r31)
	REX_STORE_U32(r31.u32 + 560, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82314e0c
	if (ctx.cr6.eq) goto loc_82314E0C;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x823143c0
	ctx.lr = 0x82314EEC;
	sub_823143C0(ctx, base);
	// stw r3,564(r31)
	REX_STORE_U32(r31.u32 + 564, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82314e0c
	if (ctx.cr6.eq) goto loc_82314E0C;
loc_82314EF8:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// rotlwi r3,r11,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// bl 0x823143c0
	ctx.lr = 0x82314F04;
	sub_823143C0(ctx, base);
	// stw r3,584(r31)
	REX_STORE_U32(r31.u32 + 584, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82314e0c
	if (ctx.cr6.eq) goto loc_82314E0C;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// rotlwi r3,r11,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// bl 0x823143c0
	ctx.lr = 0x82314F1C;
	sub_823143C0(ctx, base);
	// stw r3,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82314e0c
	if (ctx.cr6.eq) goto loc_82314E0C;
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82314fe4
	if (!ctx.cr6.eq) goto loc_82314FE4;
	// lwz r11,436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 436);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82314fe4
	if (!ctx.cr6.eq) goto loc_82314FE4;
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82314fbc
	if (ctx.cr6.eq) goto loc_82314FBC;
	// lwz r8,256(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// ble cr6,0x82314f70
	if (!ctx.cr6.gt) goto loc_82314F70;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
loc_82314F60:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// srw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x82314f60
	if (ctx.cr6.gt) goto loc_82314F60;
loc_82314F70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82314F74:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r10,r30,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x82314f74
	if (ctx.cr6.gt) goto loc_82314F74;
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 456);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x82314c90
	if (!ctx.cr6.lt) goto loc_82314C90;
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsw r9,r8
	ctx.r9.s64 = ctx.r8.s32;
	// sld r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r11.u8 & 0x7F));
	// mulld r7,r8,r10
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r10.u64);
	// rldicr r6,r7,2,61
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// cmpd cr6,r6,r28
	ctx.cr6.compare<int64_t>(ctx.r6.s64, r28.s64, ctx.xer);
	// bgt cr6,0x82314c90
	if (ctx.cr6.gt) goto loc_82314C90;
loc_82314FBC:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823143c0
	ctx.lr = 0x82314FD0;
	sub_823143C0(ctx, base);
	// stw r3,436(r31)
	REX_STORE_U32(r31.u32 + 436, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82314fe4
	if (!ctx.cr6.eq) goto loc_82314FE4;
loc_82314FDC:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
loc_82314FE4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82332D20) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82332d48
	if (!ctx.cr6.eq) goto loc_82332D48;
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x82332dd8
	goto loc_82332DD8;
loc_82332D48:
	// lwz r10,24688(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24688);
	// lwz r9,712(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 712);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82332d60
	if (ctx.cr6.eq) goto loc_82332D60;
loc_82332D58:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82332dd8
	goto loc_82332DD8;
loc_82332D60:
	// lwz r9,22036(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 22036);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82332d58
	if (ctx.cr6.eq) goto loc_82332D58;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lfd f0,21560(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 21560);
	// lwz r8,3716(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// ori r7,r9,45384
	ctx.r7.u64 = ctx.r9.u64 | 45384;
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r6,22032(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 22032);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,3964(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 3964);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,21932(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 21932);
	// lwz r31,21864(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 21864);
	// lwzx r7,r11,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r6,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r4,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// stw r5,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r7,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r31,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// stw r30,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r30.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// lwz r6,192(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 192);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82332DD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82332DD8:
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

DEFINE_REX_FUNC(sub_823380C8) {
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
loc_823380DC:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82338190
	if (ctx.cr6.lt) goto loc_82338190;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8233813c
	if (ctx.cr6.gt) goto loc_8233813C;
loc_823380F8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r6,r10,40
	ctx.xer.ca = ctx.r10.u32 <= 40;
	ctx.r6.u64 = static_cast<uint64_t>(40) - ctx.r10.u64;
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// sld r10,r7,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r5.u8 & 0x7F));
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x823380f8
	if (!ctx.cr6.gt) goto loc_823380F8;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x823381fc
	if (!ctx.cr6.lt) goto loc_823381FC;
loc_8233813C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82338154
	if (!ctx.cr6.eq) goto loc_82338154;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337bd8
	ctx.lr = 0x82338150;
	sub_82337BD8(ctx, base);
	// b 0x823380dc
	goto loc_823380DC;
loc_82338154:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,-16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -16, ctx.xer);
	// bge cr6,0x823381fc
	if (!ctx.cr6.lt) goto loc_823381FC;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82338174
	if (!ctx.cr6.eq) goto loc_82338174;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_82338174:
	// li r11,127
	ctx.r11.s64 = 127;
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
loc_82338190:
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
loc_823381FC:
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

DEFINE_REX_FUNC(sub_8233FFA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8233FFA8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82340094
	if (ctx.cr6.eq) goto loc_82340094;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8233ffd4
	if (ctx.cr6.eq) goto loc_8233FFD4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8234008c
	if (ctx.cr6.eq) goto loc_8234008C;
	// b 0x8233ffdc
	goto loc_8233FFDC;
loc_8233FFD4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8234008c
	if (!ctx.cr6.eq) goto loc_8234008C;
loc_8233FFDC:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8233d448
	ctx.lr = 0x8233FFE8;
	sub_8233D448(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82340000
	if (ctx.cr6.eq) goto loc_82340000;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82340000;
	sub_822D5870(ctx, base);
loc_82340000:
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8234008c
	if (ctx.cr6.eq) goto loc_8234008C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d440c
	ctx.lr = 0x82340014;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234008c
	if (ctx.cr6.eq) goto loc_8234008C;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x823a6710
	ctx.lr = 0x8234002C;
	sub_823A6710(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234008c
	if (ctx.cr6.eq) goto loc_8234008C;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x823a6710
	ctx.lr = 0x82340040;
	sub_823A6710(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234008c
	if (ctx.cr6.eq) goto loc_8234008C;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x823a6710
	ctx.lr = 0x82340054;
	sub_823A6710(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234008c
	if (ctx.cr6.eq) goto loc_8234008C;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x823a6710
	ctx.lr = 0x82340068;
	sub_823A6710(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234008c
	if (ctx.cr6.eq) goto loc_8234008C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x8232e950
	ctx.lr = 0x82340084;
	sub_8232E950(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823400a4
	if (ctx.cr6.eq) goto loc_823400A4;
loc_8234008C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8233fd40
	ctx.lr = 0x82340094;
	sub_8233FD40(ctx, base);
loc_82340094:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_823400A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8234EB90) {
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
	ctx.lr = 0x8234EB98;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,84(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r27,r11,23984
	r27.s64 = ctx.r11.s64 + 23984;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// ld r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 0);
	// rldicl r9,r10,3,61
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 3) & 0x7;
	// rlwinm r26,r9,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r26,r27
	ctx.r4.u64 = REX_LOAD_U8(r26.u32 + r27.u32);
	// bl 0x82337f50
	ctx.lr = 0x8234EBC8;
	sub_82337F50(ctx, base);
	// addi r8,r27,1
	ctx.r8.s64 = r27.s64 + 1;
	// li r31,3
	r31.s64 = 3;
	// lbzx r11,r26,r8
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8234ebe0
	if (!ctx.cr6.eq) goto loc_8234EBE0;
	// stw r31,20(r30)
	REX_STORE_U32(r30.u32 + 20, r31.u32);
loc_8234EBE0:
	// lwz r3,84(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 84);
	// clrlwi r26,r11,24
	r26.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234ecf0
	if (!ctx.cr6.eq) goto loc_8234ECF0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt cr6,0x8234ecf0
	if (ctx.cr6.lt) goto loc_8234ECF0;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(r26.s32, 3, ctx.xer);
	// bgt cr6,0x8234ecf0
	if (ctx.cr6.gt) goto loc_8234ECF0;
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
	// bge 0x8234ec28
	if (!ctx.cr0.lt) goto loc_8234EC28;
	// bl 0x823380c8
	ctx.lr = 0x8234EC28;
	sub_823380C8(ctx, base);
loc_8234EC28:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	// rlwimi r11,r10,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r9,84(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 84);
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8234ecf0
	if (!ctx.cr6.eq) goto loc_8234ECF0;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// rlwinm r11,r11,0,15,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// addi r27,r10,23856
	r27.s64 = ctx.r10.s64 + 23856;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r30,84(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 0);
	// rldicl r8,r9,6,58
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 6) & 0x3F;
	// rlwinm r25,r8,1,0,30
	r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r25,r27
	ctx.r4.u64 = REX_LOAD_U8(r25.u32 + r27.u32);
	// bl 0x82337f50
	ctx.lr = 0x8234EC78;
	sub_82337F50(ctx, base);
	// addi r7,r27,1
	ctx.r7.s64 = r27.s64 + 1;
	// lbzx r11,r25,r7
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8234ec8c
	if (!ctx.cr6.eq) goto loc_8234EC8C;
	// stw r31,20(r30)
	REX_STORE_U32(r30.u32 + 20, r31.u32);
loc_8234EC8C:
	// lwz r10,84(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 84);
	// clrlwi r28,r11,24
	r28.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8234ecf0
	if (!ctx.cr6.eq) goto loc_8234ECF0;
	// srawi r5,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	ctx.r5.s64 = r26.s32 >> 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8238ecb0
	ctx.lr = 0x8234ECB0;
	sub_8238ECB0(ctx, base);
	// clrlwi r5,r26,31
	ctx.r5.u64 = r26.u32 & 0x1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8238ecb0
	ctx.lr = 0x8234ECC0;
	sub_8238ECB0(ctx, base);
	// li r30,1
	r30.s64 = 1;
loc_8234ECC4:
	// sraw r11,r28,r31
	temp.u32 = r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r28.s32 < 0) & (((r28.s32 >> temp.u32) << temp.u32) != r28.s32);
	ctx.r11.s64 = r28.s32 >> temp.u32;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8238ecb0
	ctx.lr = 0x8234ECD8;
	sub_8238ECB0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bge 0x8234ecc4
	if (!ctx.cr0.lt) goto loc_8234ECC4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_8234ECF0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82356D58) {
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
	ctx.lr = 0x82356D60;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f24
	ctx.lr = 0x82356D68;
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	f25.f64 = ctx.f1.f64;
	// fmr f23,f2
	f23.f64 = ctx.f2.f64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// fmr f27,f3
	f27.f64 = ctx.f3.f64;
	// fmr f26,f4
	f26.f64 = ctx.f4.f64;
	// fmr f24,f5
	f24.f64 = ctx.f5.f64;
	// bne cr6,0x82356da0
	if (!ctx.cr6.eq) goto loc_82356DA0;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f70
	ctx.lr = 0x82356D9C;
	// b 0x822d4ea0
	return;
loc_82356DA0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// lwz r8,15392(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 15392);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// lwz r23,15408(r31)
	r23.u64 = REX_LOAD_U32(r31.u32 + 15408);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r22,15412(r31)
	r22.u64 = REX_LOAD_U32(r31.u32 + 15412);
	// srawi r19,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r19.s64 = ctx.r10.s32 >> 1;
	// frsp f13,f24
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f24.f64));
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// srawi r26,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	r26.s64 = ctx.r8.s32 >> 1;
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// srawi r25,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	r25.s64 = ctx.r10.s32 >> 5;
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// srawi r24,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	r24.s64 = ctx.r10.s32 >> 6;
	// lfd f28,31912(r6)
	f28.u64 = REX_LOAD_U64(ctx.r6.u32 + 31912);
	// stfs f13,224(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r23,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// fcmpu cr6,f25,f28
	ctx.cr6.compare(f25.f64, f28.f64);
	// stw r26,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r26.u32);
	// stvx128 v62,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r25,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r25.u32);
	// stw r24,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r24.u32);
	// beq cr6,0x82358058
	if (ctx.cr6.eq) goto loc_82358058;
	// fcmpu cr6,f27,f28
	ctx.cr6.compare(f27.f64, f28.f64);
	// beq cr6,0x82358058
	if (ctx.cr6.eq) goto loc_82358058;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f29,26912(r10)
	f29.u64 = REX_LOAD_U64(ctx.r10.u32 + 26912);
	// fsub f11,f13,f23
	ctx.f11.f64 = ctx.f13.f64 - f23.f64;
	// fdiv f12,f29,f25
	ctx.f12.f64 = f29.f64 / f25.f64;
	// fdiv f30,f11,f25
	f30.f64 = ctx.f11.f64 / f25.f64;
	// fmul f0,f12,f23
	ctx.f0.f64 = ctx.f12.f64 * f23.f64;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x82356e54
	if (!ctx.cr6.gt) goto loc_82356E54;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// fmr f30,f13
	f30.f64 = ctx.f13.f64;
loc_82356E54:
	// fsel f1,f0,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : f28.f64;
	// bl 0x822d60f0
	ctx.lr = 0x82356E5C;
	sub_822D60F0(ctx, base);
	// lwz r11,15392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15392);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x82356e7c
	if (!ctx.cr6.lt) goto loc_82356E7C;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82356E7C:
	// bl 0x822d6130
	ctx.lr = 0x82356E80;
	sub_822D6130(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,15392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15392);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lfd f0,-28704(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -28704);
	// fadd f0,f30,f0
	ctx.f0.f64 = f30.f64 + ctx.f0.f64;
	// lwz r27,84(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82356eb8
	if (!ctx.cr6.lt) goto loc_82356EB8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82356EB8:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x822d6130
	ctx.lr = 0x82356EC0;
	sub_822D6130(ctx, base);
	// lwz r11,15392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15392);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// blt cr6,0x82356ee4
	if (ctx.cr6.lt) goto loc_82356EE4;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
loc_82356EE4:
	// bl 0x822d6130
	ctx.lr = 0x82356EE8;
	sub_822D6130(ctx, base);
	// fsel f1,f1,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? ctx.f1.f64 : f28.f64;
	// bl 0x822d60f0
	ctx.lr = 0x82356EF0;
	sub_822D60F0(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fsel f1,f31,f31,f28
	ctx.f1.f64 = f31.f64 >= 0.0 ? f31.f64 : f28.f64;
	// bl 0x822d60f0
	ctx.lr = 0x82356F04;
	sub_822D60F0(ctx, base);
	// fctiwz f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,15388(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15388);
	// fdiv f13,f29,f27
	ctx.f13.f64 = f29.f64 / f27.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lfd f30,26664(r10)
	f30.u64 = REX_LOAD_U64(ctx.r10.u32 + 26664);
	// fmul f0,f13,f26
	ctx.f0.f64 = ctx.f13.f64 * f26.f64;
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fsub f9,f10,f26
	ctx.f9.f64 = ctx.f10.f64 - f26.f64;
	// fdiv f8,f9,f27
	ctx.f8.f64 = ctx.f9.f64 / f27.f64;
	// fadd f31,f8,f30
	f31.f64 = ctx.f8.f64 + f30.f64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x82356f54
	if (!ctx.cr6.gt) goto loc_82356F54;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
	// fmr f31,f13
	f31.f64 = ctx.f13.f64;
loc_82356F54:
	// fsel f1,f0,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : f28.f64;
	// bl 0x822d60f0
	ctx.lr = 0x82356F5C;
	sub_822D60F0(ctx, base);
	// lwz r11,15396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15396);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x82356f7c
	if (!ctx.cr6.lt) goto loc_82356F7C;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82356F7C:
	// bl 0x822d6130
	ctx.lr = 0x82356F80;
	sub_822D6130(ctx, base);
	// lwz r11,15396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15396);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lwz r30,108(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f13
	ctx.f0.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82356fac
	if (ctx.cr6.lt) goto loc_82356FAC;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_82356FAC:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x822d6130
	ctx.lr = 0x82356FB4;
	sub_822D6130(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// fsel f1,f1,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? ctx.f1.f64 : f28.f64;
	// addi r10,r27,1
	ctx.r10.s64 = r27.s64 + 1;
	// rlwinm r18,r11,0,0,30
	r18.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r30,r10,0,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r29,r29,0,0,30
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r18,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, r18.u32);
	// rlwinm r14,r28,0,0,30
	r14.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r30,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// stw r29,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// stw r14,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r14.u32);
	// bl 0x822d60f0
	ctx.lr = 0x82356FE4;
	sub_822D60F0(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r28,r9,0,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r28,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r28.u32);
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// bge cr6,0x82357008
	if (!ctx.cr6.lt) goto loc_82357008;
	// li r28,2
	r28.s64 = 2;
	// stw r28,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r28.u32);
loc_82357008:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,15420(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15420);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r6,15424(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 15424);
	// srawi r9,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r9.s64 = r30.s32 >> 1;
	// lwz r16,15416(r31)
	r16.u64 = REX_LOAD_U32(r31.u32 + 15416);
	// srawi r7,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r7.s64 = r29.s32 >> 1;
	// fcmpu cr6,f24,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f24.f64, f30.f64);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r9,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// lfd f0,-28720(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -28720);
	// stw r7,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
	// lfd f13,-28712(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + -28712);
	// fmul f10,f23,f0
	ctx.f10.f64 = f23.f64 * ctx.f0.f64;
	// fmul f9,f25,f13
	ctx.f9.f64 = f25.f64 * ctx.f13.f64;
	// srawi r5,r14,1
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x1) != 0);
	ctx.r5.s64 = r14.s32 >> 1;
	// fmul f11,f26,f0
	ctx.f11.f64 = f26.f64 * ctx.f0.f64;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// fmul f8,f27,f13
	ctx.f8.f64 = f27.f64 * ctx.f13.f64;
	// lfd f12,-25040(r8)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r8.u32 + -25040);
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r5,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// fctiwz f6,f10
	ctx.f6.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f6,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f6.u64);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// fctiwz f5,f9
	ctx.f5.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f5,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f5.u64);
	// lwz r29,108(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// fctiwz f7,f11
	ctx.f7.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f4,f8
	ctx.f4.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r9,r11,r18
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(r18.s32);
	// fmul f3,f9,f12
	ctx.f3.f64 = ctx.f9.f64 * ctx.f12.f64;
	// mullw r7,r29,r30
	ctx.r7.s64 = int64_t(r29.s32) * int64_t(r30.s32);
	// fctiwz f2,f3
	ctx.f2.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f2.u64);
	// subf r8,r4,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r4.u64;
	// subf r4,r10,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r10.u64;
	// rlwinm r11,r8,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// rlwinm r10,r4,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r15,r11,r8
	r15.u64 = ctx.r11.u64 & ctx.r8.u64;
	// and r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 & ctx.r4.u64;
	// stw r15,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r15.u32);
	// stw r9,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// ble cr6,0x823570d8
	if (!ctx.cr6.gt) goto loc_823570D8;
	// fmr f24,f30
	f24.f64 = f30.f64;
	// b 0x823570e4
	goto loc_823570E4;
loc_823570D8:
	// fcmpu cr6,f24,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f24.f64, f28.f64);
	// bge cr6,0x823570e4
	if (!ctx.cr6.lt) goto loc_823570E4;
	// fmr f24,f28
	f24.f64 = f28.f64;
loc_823570E4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r30,128
	r30.s64 = 128;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lfd f0,-28728(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -28728);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// fmul f0,f24,f0
	ctx.f0.f64 = f24.f64 * ctx.f0.f64;
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v1,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.f13.u64);
	// ble cr6,0x823571b4
	if (!ctx.cr6.gt) goto loc_823571B4;
loc_82357118:
	// lwz r10,15392(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15392);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82357140
	if (!ctx.cr6.gt) goto loc_82357140;
	// addi r10,r16,-1
	ctx.r10.s64 = r16.s64 + -1;
loc_8235712C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r4,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r10.u32 = ea;
	// lwz r8,15392(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 15392);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8235712c
	if (ctx.cr6.lt) goto loc_8235712C;
loc_82357140:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x82357164
	if (!ctx.cr6.gt) goto loc_82357164;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// subf r10,r6,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r6.u64;
loc_82357154:
	// stbx r30,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, r30.u8);
	// stb r30,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82357154
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82357154;
loc_82357164:
	// lwz r11,15392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15392);
	// add r3,r3,r26
	ctx.r3.u64 = ctx.r3.u64 + r26.u64;
	// add r6,r6,r26
	ctx.r6.u64 = ctx.r6.u64 + r26.u64;
	// add r8,r11,r16
	ctx.r8.u64 = ctx.r11.u64 + r16.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8235719c
	if (!ctx.cr6.gt) goto loc_8235719C;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
loc_82357188:
	// stbu r4,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,15392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15392);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82357188
	if (ctx.cr6.lt) goto loc_82357188;
loc_8235719C:
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// add r16,r11,r8
	r16.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r18
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r18.s32, ctx.xer);
	// blt cr6,0x82357118
	if (ctx.cr6.lt) goto loc_82357118;
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
loc_823571B4:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// srawi r8,r15,11
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0x7FF) != 0);
	ctx.r8.s64 = r15.s32 >> 11;
	// lwz r9,15404(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15404);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ble cr6,0x823571ec
	if (!ctx.cr6.gt) goto loc_823571EC;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
loc_823571DC:
	// dcbt r11,r9
	// dcbt r11,r10
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x823571dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823571DC;
loc_823571EC:
	// srawi r11,r15,12
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0xFFF) != 0);
	ctx.r11.s64 = r15.s32 >> 12;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// mullw r11,r11,r19
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r19.s32);
	// ble cr6,0x82357210
	if (!ctx.cr6.gt) goto loc_82357210;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
loc_82357200:
	// dcbt r11,r23
	// dcbt r11,r22
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x82357200
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82357200;
loc_82357210:
	// addi r4,r28,-2
	ctx.r4.s64 = r28.s64 + -2;
	// cmpw cr6,r18,r4
	ctx.cr6.compare<int32_t>(r18.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82357cd8
	if (!ctx.cr6.lt) goto loc_82357CD8;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,156(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// subf r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r8,132(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// stw r7,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// subf r6,r9,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r9.u64;
	// addi r17,r11,-29664
	r17.s64 = ctx.r11.s64 + -29664;
	// stw r6,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// lfs f13,17176(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 17176);
	ctx.f13.f64 = double(temp.f32);
	// stw r17,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r17.u32);
loc_82357250:
	// clrlwi r26,r15,21
	r26.u64 = r15.u32 & 0x7FF;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// srawi r8,r15,11
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0x7FF) != 0);
	ctx.r8.s64 = r15.s32 >> 11;
	// lwz r11,15404(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15404);
	// extsw r7,r26
	ctx.r7.s64 = r26.s32;
	// lwz r30,128(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// std r7,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r7.u64);
	// lfd f0,208(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// ble cr6,0x823572a8
	if (!ctx.cr6.gt) goto loc_823572A8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8235729C:
	// dcbt r11,r28
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x8235729c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235729C;
loc_823572A8:
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823572d4
	if (!ctx.cr6.gt) goto loc_823572D4;
	// addi r11,r16,-1
	ctx.r11.s64 = r16.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823572d0
	if (ctx.cr6.eq) goto loc_823572D0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823572C8:
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x823572c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823572C8;
loc_823572D0:
	// add r3,r16,r9
	ctx.r3.u64 = r16.u64 + ctx.r9.u64;
loc_823572D4:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r17,-8
	ctx.r11.s64 = r17.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823572E0:
	// stwu r26,16(r11)
	ea = 16 + ctx.r11.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823572e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823572E0;
	// subfic r27,r26,2048
	ctx.xer.ca = r26.u32 <= 2048;
	r27.u64 = static_cast<uint64_t>(2048) - r26.u64;
	// stfs f0,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// srawi. r11,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r24,r10,r6
	r24.u64 = ctx.r6.u64 - ctx.r10.u64;
	// ble 0x8235749c
	if (!ctx.cr0.gt) goto loc_8235749C;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lvx128 v2,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8235730C:
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r11,r17,256
	ctx.r11.s64 = r17.s64 + 256;
	// addi r10,r17,-4
	ctx.r10.s64 = r17.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82357320:
	// srawi r9,r30,11
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FF) != 0);
	ctx.r9.s64 = r30.s32 >> 11;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r8,r30,r29
	ctx.r8.u64 = r30.u64 + r29.u64;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// srawi r5,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 11;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// clrlwi r4,r30,21
	ctx.r4.u64 = r30.u32 & 0x7FF;
	// clrlwi r30,r8,21
	r30.u64 = ctx.r8.u32 & 0x7FF;
	// lbz r23,1(r9)
	r23.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// subf r22,r4,r27
	r22.u64 = r27.u64 - ctx.r4.u64;
	// lbz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// add r9,r5,r28
	ctx.r9.u64 = ctx.r5.u64 + r28.u64;
	// lbz r21,0(r7)
	r21.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + r29.u64;
	// lbz r7,1(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// subf r20,r30,r27
	r20.u64 = r27.u64 - r30.u64;
	// stw r4,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// srawi r5,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 11;
	// subf r7,r21,r7
	ctx.r7.u64 = ctx.r7.u64 - r21.u64;
	// stw r23,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r23.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// clrlwi r15,r8,21
	r15.u64 = ctx.r8.u32 & 0x7FF;
	// subf r7,r23,r7
	ctx.r7.u64 = ctx.r7.u64 - r23.u64;
	// stw r21,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r21.u32);
	// stw r4,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r4.u32);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + r29.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r22,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r22.u32);
	// srawi r4,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 11;
	// stw r7,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// subf r23,r15,r27
	r23.u64 = r27.u64 - r15.u64;
	// lbz r22,1(r9)
	r22.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// clrlwi r21,r8,21
	r21.u64 = ctx.r8.u32 & 0x7FF;
	// lbz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r14,0(r7)
	r14.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// add r9,r5,r28
	ctx.r9.u64 = ctx.r5.u64 + r28.u64;
	// lbz r7,1(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// subf r7,r14,r7
	ctx.r7.u64 = ctx.r7.u64 - r14.u64;
	// subf r7,r22,r7
	ctx.r7.u64 = ctx.r7.u64 - r22.u64;
	// stw r22,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r22.u32);
	// stw r6,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// subf r22,r21,r27
	r22.u64 = r27.u64 - r21.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r14,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r14.u32);
	// stw r30,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r30.u32);
	// stw r7,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// stw r30,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, r30.u32);
	// stw r20,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, r20.u32);
	// lbz r30,1(r9)
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbzx r6,r5,r28
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + r28.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r5,0(r7)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// add r9,r4,r28
	ctx.r9.u64 = ctx.r4.u64 + r28.u64;
	// lbz r7,1(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// subf r7,r5,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r5.u64;
	// subf r7,r30,r7
	ctx.r7.u64 = ctx.r7.u64 - r30.u64;
	// stw r6,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// stw r5,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r30,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r30.u32);
	// stw r15,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, r15.u32);
	// stw r7,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r7.u32);
	// stw r15,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, r15.u32);
	// stw r23,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, r23.u32);
	// lbzx r7,r4,r28
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + r28.u32);
	// lbz r5,1(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lbz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r9,1(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// subf r6,r4,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r4.u64;
	// subf r9,r5,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r5.u64;
	// stw r4,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r4.u32);
	// stw r5,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r5.u32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r7,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r7.u32);
	// stw r22,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, r22.u32);
	// stwu r9,64(r11)
	ea = 64 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stw r21,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, r21.u32);
	// add r30,r8,r29
	r30.u64 = ctx.r8.u64 + r29.u64;
	// stwu r21,64(r10)
	ea = 64 + ctx.r10.u32;
	REX_STORE_U32(ea, r21.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82357320
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82357320;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r4,r17,256
	ctx.r4.s64 = r17.s64 + 256;
	// bl 0x82354f70
	ctx.lr = 0x82357480;
	sub_82354F70(ctx, base);
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bne 0x8235730c
	if (!ctx.cr0.eq) goto loc_8235730C;
	// lwz r14,152(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r5,140(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r6,144(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r15,116(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
loc_8235749C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x82357524
	if (!ctx.cr6.gt) goto loc_82357524;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
loc_823574A8:
	// srawi r11,r30,11
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FF) != 0);
	ctx.r11.s64 = r30.s32 >> 11;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// clrlwi r7,r30,21
	ctx.r7.u64 = r30.u32 & 0x7FF;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r4,1(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mullw r9,r4,r7
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// lbz r10,1(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// mullw r8,r8,r26
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r26.s32);
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r10,r4,r7
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// mullw r4,r10,r26
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(r26.s32);
	// srawi r10,r4,11
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 11;
	// subfic r7,r7,2048
	ctx.xer.ca = ctx.r7.u32 <= 2048;
	ctx.r7.u64 = static_cast<uint64_t>(2048) - ctx.r7.u64;
	// subf r4,r26,r7
	ctx.r4.u64 = ctx.r7.u64 - r26.u64;
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// srawi r9,r10,11
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 11;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// stb r7,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x823574a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823574A8;
loc_82357524:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpw cr6,r11,r14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r14.s32, ctx.xer);
	// bge cr6,0x8235755c
	if (!ctx.cr6.lt) goto loc_8235755C;
	// subf r11,r11,r14
	ctx.r11.u64 = r14.u64 - ctx.r11.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82357538:
	// srawi r10,r30,11
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FF) != 0);
	ctx.r10.s64 = r30.s32 >> 11;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// lbzx r9,r10,r28
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + r28.u32);
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// stb r7,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x82357538
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82357538;
loc_8235755C:
	// lwz r11,15392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15392);
	// cmpw cr6,r14,r11
	ctx.cr6.compare<int32_t>(r14.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82357588
	if (!ctx.cr6.lt) goto loc_82357588;
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82357574:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,15392(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 15392);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82357574
	if (ctx.cr6.lt) goto loc_82357574;
loc_82357588:
	// srawi r11,r15,12
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0xFFF) != 0);
	ctx.r11.s64 = r15.s32 >> 12;
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// srawi r9,r15,1
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0x1) != 0);
	ctx.r9.s64 = r15.s32 >> 1;
	// lwz r30,128(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mullw r20,r11,r19
	r20.s64 = int64_t(ctx.r11.s32) * int64_t(r19.s32);
	// lwz r25,92(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r24,88(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r23,r9,21
	r23.u64 = ctx.r9.u32 & 0x7FF;
	// add r11,r20,r19
	ctx.r11.u64 = r20.u64 + r19.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823575d0
	if (!ctx.cr6.gt) goto loc_823575D0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_823575C0:
	// dcbt r11,r10
	// dcbt r11,r9
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x823575c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823575C0;
loc_823575D0:
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823575f8
	if (!ctx.cr6.gt) goto loc_823575F8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,128
	ctx.r11.s64 = 128;
loc_823575E4:
	// stb r11,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r11.u8);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// stb r11,0(r24)
	REX_STORE_U8(r24.u32 + 0, ctx.r11.u8);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// bdnz 0x823575e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823575E4;
loc_823575F8:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r17,-8
	ctx.r11.s64 = r17.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82357604:
	// stwu r23,16(r11)
	ea = 16 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82357604
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82357604;
	// lwz r10,180(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// subfic r26,r23,2048
	ctx.xer.ca = r23.u32 <= 2048;
	r26.u64 = static_cast<uint64_t>(2048) - r23.u64;
	// srawi. r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r21,r9,r10
	r21.u64 = ctx.r10.u64 - ctx.r9.u64;
	// ble 0x823577d4
	if (!ctx.cr0.gt) goto loc_823577D4;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r28,r20,r10
	r28.u64 = r20.u64 + ctx.r10.u64;
	// add r27,r20,r9
	r27.u64 = r20.u64 + ctx.r9.u64;
loc_82357638:
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r11,r17,256
	ctx.r11.s64 = r17.s64 + 256;
	// addi r10,r17,-12
	ctx.r10.s64 = r17.s64 + -12;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8235764C:
	// srawi r7,r30,12
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFFF) != 0);
	ctx.r7.s64 = r30.s32 >> 12;
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// srawi r8,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r8.s64 = r30.s32 >> 1;
	// add r9,r28,r7
	ctx.r9.u64 = r28.u64 + ctx.r7.u64;
	// clrlwi r5,r8,21
	ctx.r5.u64 = ctx.r8.u32 & 0x7FF;
	// add r8,r30,r6
	ctx.r8.u64 = r30.u64 + ctx.r6.u64;
	// lbzx r4,r28,r7
	ctx.r4.u64 = REX_LOAD_U8(r28.u32 + ctx.r7.u32);
	// subf r3,r5,r26
	ctx.r3.u64 = r26.u64 - ctx.r5.u64;
	// lbz r30,1(r9)
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbzx r14,r9,r19
	r14.u64 = REX_LOAD_U8(ctx.r9.u32 + r19.u32);
	// add r9,r27,r7
	ctx.r9.u64 = r27.u64 + ctx.r7.u64;
	// stw r5,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r5.u32);
	// srawi r7,r8,12
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 12;
	// stw r3,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// srawi r5,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 1;
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r30.u32);
	// clrlwi r4,r5,21
	ctx.r4.u64 = ctx.r5.u32 & 0x7FF;
	// stw r14,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r14.u32);
	// lbzx r3,r9,r19
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + r19.u32);
	// subf r5,r4,r26
	ctx.r5.u64 = r26.u64 - ctx.r4.u64;
	// lbz r30,0(r9)
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r14,1(r9)
	r14.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// add r9,r28,r7
	ctx.r9.u64 = r28.u64 + ctx.r7.u64;
	// stw r3,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// stw r14,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r14.u32);
	// stw r30,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r30.u32);
	// lbzx r14,r28,r7
	r14.u64 = REX_LOAD_U8(r28.u32 + ctx.r7.u32);
	// lbzx r3,r9,r19
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + r19.u32);
	// lbz r30,1(r9)
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// add r9,r27,r7
	ctx.r9.u64 = r27.u64 + ctx.r7.u64;
	// stw r4,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r4.u32);
	// srawi r7,r8,12
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 12;
	// srawi r4,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 1;
	// stw r3,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r3.u32);
	// stw r5,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r5.u32);
	// clrlwi r3,r4,21
	ctx.r3.u64 = ctx.r4.u32 & 0x7FF;
	// stw r30,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, r30.u32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r14,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r14.u32);
	// subf r5,r3,r26
	ctx.r5.u64 = r26.u64 - ctx.r3.u64;
	// lbz r4,1(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbzx r30,r9,r19
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + r19.u32);
	// lbz r14,0(r9)
	r14.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// add r9,r28,r7
	ctx.r9.u64 = r28.u64 + ctx.r7.u64;
	// stw r4,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r4.u32);
	// stw r30,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, r30.u32);
	// stw r14,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, r14.u32);
	// lbzx r14,r9,r19
	r14.u64 = REX_LOAD_U8(ctx.r9.u32 + r19.u32);
	// lbzx r4,r28,r7
	ctx.r4.u64 = REX_LOAD_U8(r28.u32 + ctx.r7.u32);
	// lbz r30,1(r9)
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// add r9,r27,r7
	ctx.r9.u64 = r27.u64 + ctx.r7.u64;
	// stw r3,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r3.u32);
	// srawi r7,r8,12
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 12;
	// stw r5,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r5.u32);
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// stw r4,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r4.u32);
	// stw r30,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, r30.u32);
	// clrlwi r5,r3,21
	ctx.r5.u64 = ctx.r3.u32 & 0x7FF;
	// stw r14,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, r14.u32);
	// lbz r4,1(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// subf r3,r5,r26
	ctx.r3.u64 = r26.u64 - ctx.r5.u64;
	// lbzx r30,r9,r19
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + r19.u32);
	// lbz r14,0(r9)
	r14.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// add r9,r28,r7
	ctx.r9.u64 = r28.u64 + ctx.r7.u64;
	// stw r4,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r4.u32);
	// stw r30,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, r30.u32);
	// stw r14,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, r14.u32);
	// lbzx r30,r9,r19
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + r19.u32);
	// lbzx r14,r28,r7
	r14.u64 = REX_LOAD_U8(r28.u32 + ctx.r7.u32);
	// lbz r4,1(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// add r9,r27,r7
	ctx.r9.u64 = r27.u64 + ctx.r7.u64;
	// stw r3,60(r10)
	REX_STORE_U32(ctx.r10.u32 + 60, ctx.r3.u32);
	// stwu r5,64(r10)
	ea = 64 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// stw r4,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r4.u32);
	// stw r30,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, r30.u32);
	// stw r14,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, r14.u32);
	// lbzx r3,r27,r7
	ctx.r3.u64 = REX_LOAD_U8(r27.u32 + ctx.r7.u32);
	// lbz r7,1(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbzx r5,r9,r19
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + r19.u32);
	// stw r3,120(r11)
	REX_STORE_U32(ctx.r11.u32 + 120, ctx.r3.u32);
	// add r30,r8,r6
	r30.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r7,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r7.u32);
	// stwu r5,128(r11)
	ea = 128 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8235764c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235764C;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// addi r5,r17,256
	ctx.r5.s64 = r17.s64 + 256;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82355630
	ctx.lr = 0x823577B8;
	sub_82355630(ctx, base);
	// addic. r22,r22,-1
	ctx.xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// addi r25,r25,16
	r25.s64 = r25.s64 + 16;
	// addi r24,r24,16
	r24.s64 = r24.s64 + 16;
	// bne 0x82357638
	if (!ctx.cr0.eq) goto loc_82357638;
	// lwz r6,144(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r5,140(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r14,152(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
loc_823577D4:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// ble cr6,0x82357898
	if (!ctx.cr6.gt) goto loc_82357898;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r8,r20,r11
	ctx.r8.u64 = r20.u64 + ctx.r11.u64;
	// add r7,r20,r10
	ctx.r7.u64 = r20.u64 + ctx.r10.u64;
loc_823577F0:
	// srawi r10,r30,12
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFFF) != 0);
	ctx.r10.s64 = r30.s32 >> 12;
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// srawi r4,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r4.s64 = r30.s32 >> 1;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// clrlwi r3,r4,21
	ctx.r3.u64 = ctx.r4.u32 & 0x7FF;
	// add r30,r30,r9
	r30.u64 = r30.u64 + ctx.r9.u64;
	// subfic r9,r3,2048
	ctx.xer.ca = ctx.r3.u32 <= 2048;
	ctx.r9.u64 = static_cast<uint64_t>(2048) - ctx.r3.u64;
	// lbzx r4,r8,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// lbzx r28,r11,r19
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + r19.u32);
	// subf r27,r23,r9
	r27.u64 = ctx.r9.u64 - r23.u64;
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// mullw r9,r28,r23
	ctx.r9.s64 = int64_t(r28.s32) * int64_t(r23.s32);
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mullw r11,r4,r27
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(r27.s32);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// srawi r10,r4,11
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 11;
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// mullw r4,r10,r9
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// rlwinm r10,r4,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lbz r4,1(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r28,0(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r11,r11,r19
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r19.u32);
	// mullw r10,r11,r23
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r23.s32);
	// mullw r11,r4,r3
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r11,r28,r27
	ctx.r11.s64 = int64_t(r28.s32) * int64_t(r27.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r10,11
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 11;
	// addi r4,r11,-128
	ctx.r4.s64 = ctx.r11.s64 + -128;
	// mullw r3,r4,r9
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r3,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,0(r24)
	REX_STORE_U8(r24.u32 + 0, ctx.r10.u8);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// bdnz 0x823577f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823577F0;
loc_82357898:
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235790c
	if (!ctx.cr6.lt) goto loc_8235790C;
	// subf r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r9,r20,r10
	ctx.r9.u64 = r20.u64 + ctx.r10.u64;
	// add r8,r20,r8
	ctx.r8.u64 = r20.u64 + ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823578BC:
	// srawi r11,r30,12
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFFF) != 0);
	ctx.r11.s64 = r30.s32 >> 12;
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r7,124(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r30,r30,r10
	r30.u64 = r30.u64 + ctx.r10.u64;
	// lbzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// mullw r4,r10,r7
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// rlwinm r10,r4,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// addi r3,r10,128
	ctx.r3.s64 = ctx.r10.s64 + 128;
	// stb r3,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r3.u8);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lbzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r4,r11,-128
	ctx.r4.s64 = ctx.r11.s64 + -128;
	// mullw r3,r4,r7
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// rlwinm r11,r3,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,0(r24)
	REX_STORE_U8(r24.u32 + 0, ctx.r10.u8);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// bdnz 0x823578bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823578BC;
loc_8235790C:
	// lwz r7,148(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82357940
	if (!ctx.cr6.lt) goto loc_82357940;
	// subf r8,r5,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r5.u64;
	// subf r10,r5,r25
	ctx.r10.u64 = r25.u64 - ctx.r5.u64;
	// subf r9,r5,r24
	ctx.r9.u64 = r24.u64 - ctx.r5.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r8,128
	ctx.r8.s64 = 128;
loc_82357930:
	// stbx r8,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// stbx r8,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82357930
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82357930;
loc_82357940:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r21,r18,1
	r21.s64 = r18.s64 + 1;
	// lwz r9,15392(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15392);
	// add r11,r15,r11
	ctx.r11.u64 = r15.u64 + ctx.r11.u64;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r22,r16,r9
	r22.u64 = r16.u64 + ctx.r9.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r30,128(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// add r3,r10,r7
	ctx.r3.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r10,15388(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15388);
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// add r8,r4,r7
	ctx.r8.u64 = ctx.r4.u64 + ctx.r7.u64;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// and r23,r9,r11
	r23.u64 = ctx.r9.u64 & ctx.r11.u64;
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// clrlwi r26,r23,21
	r26.u64 = r23.u32 & 0x7FF;
	// srawi r11,r23,11
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x7FF) != 0);
	ctx.r11.s64 = r23.s32 >> 11;
	// extsw r7,r26
	ctx.r7.s64 = r26.s32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// std r7,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r7.u64);
	// lfd f0,224(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// blt cr6,0x823579b0
	if (ctx.cr6.lt) goto loc_823579B0;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_823579B0:
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,15404(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15404);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r28,r11,r10
	r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x823579ec
	if (!ctx.cr6.gt) goto loc_823579EC;
	// addi r11,r22,-1
	ctx.r11.s64 = r22.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823579e8
	if (ctx.cr6.eq) goto loc_823579E8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823579E0:
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x823579e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823579E0;
loc_823579E8:
	// add r3,r22,r9
	ctx.r3.u64 = r22.u64 + ctx.r9.u64;
loc_823579EC:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r17,-8
	ctx.r11.s64 = r17.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823579F8:
	// stwu r26,16(r11)
	ea = 16 + ctx.r11.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823579f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823579F8;
	// subfic r27,r26,2048
	ctx.xer.ca = r26.u32 <= 2048;
	r27.u64 = static_cast<uint64_t>(2048) - r26.u64;
	// stfs f0,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// srawi. r11,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r24,r10,r6
	r24.u64 = ctx.r6.u64 - ctx.r10.u64;
	// ble 0x82357bbc
	if (!ctx.cr0.gt) goto loc_82357BBC;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lvx128 v2,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82357A24:
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r11,r17,256
	ctx.r11.s64 = r17.s64 + 256;
	// addi r10,r17,-4
	ctx.r10.s64 = r17.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82357A38:
	// srawi r9,r30,11
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FF) != 0);
	ctx.r9.s64 = r30.s32 >> 11;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// clrlwi r4,r30,21
	ctx.r4.u64 = r30.u32 & 0x7FF;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// subf r20,r4,r27
	r20.u64 = r27.u64 - ctx.r4.u64;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r30,r29
	ctx.r8.u64 = r30.u64 + r29.u64;
	// lbz r30,1(r9)
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// srawi r5,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 11;
	// lbz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// clrlwi r18,r8,21
	r18.u64 = ctx.r8.u32 & 0x7FF;
	// lbz r17,0(r7)
	r17.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// add r9,r5,r28
	ctx.r9.u64 = ctx.r5.u64 + r28.u64;
	// lbz r7,1(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// subf r16,r18,r27
	r16.u64 = r27.u64 - r18.u64;
	// stw r4,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + r29.u64;
	// subf r7,r17,r7
	ctx.r7.u64 = ctx.r7.u64 - r17.u64;
	// stw r4,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r4.u32);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r30.u32);
	// srawi r5,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 11;
	// subf r7,r30,r7
	ctx.r7.u64 = ctx.r7.u64 - r30.u64;
	// stw r17,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r17.u32);
	// stw r20,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r20.u32);
	// clrlwi r30,r8,21
	r30.u64 = ctx.r8.u32 & 0x7FF;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + r29.u64;
	// stw r7,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// subf r20,r30,r27
	r20.u64 = r27.u64 - r30.u64;
	// srawi r4,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 11;
	// clrlwi r17,r8,21
	r17.u64 = ctx.r8.u32 & 0x7FF;
	// subf r15,r17,r27
	r15.u64 = r27.u64 - r17.u64;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r9,1(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r14,0(r7)
	r14.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r7,1(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// subf r7,r14,r7
	ctx.r7.u64 = ctx.r7.u64 - r14.u64;
	// stw r14,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r14.u32);
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// add r9,r5,r28
	ctx.r9.u64 = ctx.r5.u64 + r28.u64;
	// lwz r14,116(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subf r7,r14,r7
	ctx.r7.u64 = ctx.r7.u64 - r14.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r18,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r18.u32);
	// stw r18,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, r18.u32);
	// stw r7,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// stw r16,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, r16.u32);
	// stw r14,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r14.u32);
	// stw r6,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lbzx r6,r5,r28
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + r28.u32);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r9,1(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r5,0(r7)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r7,1(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// stw r9,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// subf r7,r5,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r5.u64;
	// stw r5,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// subf r7,r9,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r9.u64;
	// stw r6,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// add r9,r4,r28
	ctx.r9.u64 = ctx.r4.u64 + r28.u64;
	// stw r30,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, r30.u32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r30,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, r30.u32);
	// stw r7,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r7.u32);
	// stw r20,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, r20.u32);
	// lbz r6,1(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r5,0(r7)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r7,1(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// lbzx r9,r4,r28
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + r28.u32);
	// subf r4,r5,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r5.u64;
	// subf r7,r6,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r6.u64;
	// stw r9,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r6,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r6.u32);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r5,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r5.u32);
	// stw r15,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, r15.u32);
	// add r30,r8,r29
	r30.u64 = ctx.r8.u64 + r29.u64;
	// stw r17,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, r17.u32);
	// stwu r9,64(r11)
	ea = 64 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r17,64(r10)
	ea = 64 + ctx.r10.u32;
	REX_STORE_U32(ea, r17.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82357a38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82357A38;
	// lwz r17,164(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r4,r17,256
	ctx.r4.s64 = r17.s64 + 256;
	// bl 0x82354f70
	ctx.lr = 0x82357BA4;
	sub_82354F70(ctx, base);
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bne 0x82357a24
	if (!ctx.cr0.eq) goto loc_82357A24;
	// lwz r6,144(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r5,140(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r14,152(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
loc_82357BBC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x82357c44
	if (!ctx.cr6.gt) goto loc_82357C44;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
loc_82357BC8:
	// srawi r11,r30,11
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FF) != 0);
	ctx.r11.s64 = r30.s32 >> 11;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// clrlwi r7,r30,21
	ctx.r7.u64 = r30.u32 & 0x7FF;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r4,1(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mullw r9,r4,r7
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// lbz r10,1(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// mullw r8,r8,r26
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r26.s32);
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r10,r4,r7
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// mullw r4,r10,r26
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(r26.s32);
	// srawi r10,r4,11
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 11;
	// subfic r7,r7,2048
	ctx.xer.ca = ctx.r7.u32 <= 2048;
	ctx.r7.u64 = static_cast<uint64_t>(2048) - ctx.r7.u64;
	// subf r4,r26,r7
	ctx.r4.u64 = ctx.r7.u64 - r26.u64;
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// srawi r9,r10,11
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 11;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// stb r7,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x82357bc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82357BC8;
loc_82357C44:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpw cr6,r11,r14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r14.s32, ctx.xer);
	// bge cr6,0x82357c7c
	if (!ctx.cr6.lt) goto loc_82357C7C;
	// subf r11,r11,r14
	ctx.r11.u64 = r14.u64 - ctx.r11.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82357C58:
	// srawi r10,r30,11
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FF) != 0);
	ctx.r10.s64 = r30.s32 >> 11;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// lbzx r9,r10,r28
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + r28.u32);
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// stb r7,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x82357c58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82357C58;
loc_82357C7C:
	// lwz r11,15392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15392);
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// cmpw cr6,r14,r11
	ctx.cr6.compare<int32_t>(r14.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82357ca8
	if (!ctx.cr6.lt) goto loc_82357CA8;
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82357C94:
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,15392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15392);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82357c94
	if (ctx.cr6.lt) goto loc_82357C94;
loc_82357CA8:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r18,r21,1
	r18.s64 = r21.s64 + 1;
	// lwz r9,160(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r16,r11,r22
	r16.u64 = ctx.r11.u64 + r22.u64;
	// add r10,r23,r10
	ctx.r10.u64 = r23.u64 + ctx.r10.u64;
	// addi r4,r9,-2
	ctx.r4.s64 = ctx.r9.s64 + -2;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmpw cr6,r18,r4
	ctx.cr6.compare<int32_t>(r18.s32, ctx.r4.s32, ctx.xer);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// and r15,r8,r10
	r15.u64 = ctx.r8.u64 & ctx.r10.u64;
	// stw r15,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r15.u32);
	// blt cr6,0x82357250
	if (ctx.cr6.lt) goto loc_82357250;
loc_82357CD8:
	// lwz r11,15388(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15388);
	// srawi r6,r15,11
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0x7FF) != 0);
	ctx.r6.s64 = r15.s32 >> 11;
	// lwz r23,128(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// blt cr6,0x82357cf4
	if (ctx.cr6.lt) goto loc_82357CF4;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
loc_82357CF4:
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r17,160(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r17,r10
	ctx.cr6.compare<int32_t>(r17.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82357f9c
	if (ctx.cr6.lt) goto loc_82357F9C;
	// cmpw cr6,r4,r17
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r17.s32, ctx.xer);
	// bge cr6,0x82357f9c
	if (!ctx.cr6.lt) goto loc_82357F9C;
	// lwz r18,96(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r22,0
	r22.s64 = 0;
	// lwz r28,148(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r14,128
	r14.s64 = 128;
	// lwz r30,112(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r24,92(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r20,100(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r25,88(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r27,156(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r21,136(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r26,132(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_82357D3C:
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x82357d68
	if (!ctx.cr6.gt) goto loc_82357D68;
	// addi r11,r16,-1
	ctx.r11.s64 = r16.s64 + -1;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82357d64
	if (ctx.cr6.eq) goto loc_82357D64;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82357D5C:
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82357d5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82357D5C;
loc_82357D64:
	// add r11,r16,r30
	ctx.r11.u64 = r16.u64 + r30.u64;
loc_82357D68:
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(r30.s32, r26.s32, ctx.xer);
	// lwz r10,15404(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15404);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bge cr6,0x82357dac
	if (!ctx.cr6.lt) goto loc_82357DAC;
	// subf r9,r30,r26
	ctx.r9.u64 = r26.u64 - r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82357D88:
	// srawi r7,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 11;
	// lwz r9,124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + r29.u64;
	// lbzx r6,r7,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// mullw r5,r6,r9
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// rlwinm r3,r5,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// stb r3,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82357d88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82357D88;
loc_82357DAC:
	// lwz r9,15392(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15392);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82357dd4
	if (!ctx.cr6.lt) goto loc_82357DD4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82357DC0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r22,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, r22.u8);
	ctx.r11.u32 = ea;
	// lwz r9,15392(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15392);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82357dc0
	if (ctx.cr6.lt) goto loc_82357DC0;
loc_82357DD4:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// ble cr6,0x82357dfc
	if (!ctx.cr6.gt) goto loc_82357DFC;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_82357DE8:
	// stb r14,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r14.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r14,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r14.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82357de8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82357DE8;
loc_82357DFC:
	// lwz r7,15388(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 15388);
	// srawi r9,r15,12
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0xFFF) != 0);
	ctx.r9.s64 = r15.s32 >> 12;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// srawi r7,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82357e18
	if (ctx.cr6.lt) goto loc_82357E18;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
loc_82357E18:
	// mullw r9,r9,r19
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r19.s32);
	// cmpw cr6,r21,r27
	ctx.cr6.compare<int32_t>(r21.s32, r27.s32, ctx.xer);
	// bge cr6,0x82357e84
	if (!ctx.cr6.lt) goto loc_82357E84;
	// subf r7,r21,r27
	ctx.r7.u64 = r27.u64 - r21.u64;
	// add r6,r9,r20
	ctx.r6.u64 = ctx.r9.u64 + r20.u64;
	// add r5,r9,r18
	ctx.r5.u64 = ctx.r9.u64 + r18.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82357E34:
	// srawi r9,r8,12
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 12;
	// lwz r7,108(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r3,124(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r7,r6,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// addi r7,r7,-128
	ctx.r7.s64 = ctx.r7.s64 + -128;
	// mullw r7,r7,r3
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// rlwinm r7,r7,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// stb r7,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r9,r5,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// mullw r7,r9,r3
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// rlwinm r9,r7,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// addi r3,r9,128
	ctx.r3.s64 = ctx.r9.s64 + 128;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82357e34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82357E34;
loc_82357E84:
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(r27.s32, r28.s32, ctx.xer);
	// bge cr6,0x82357eb0
	if (!ctx.cr6.lt) goto loc_82357EB0;
	// subf r8,r27,r28
	ctx.r8.u64 = r28.u64 - r27.u64;
	// subf r11,r27,r11
	ctx.r11.u64 = ctx.r11.u64 - r27.u64;
	// subf r10,r27,r10
	ctx.r10.u64 = ctx.r10.u64 - r27.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82357EA0:
	// stbx r14,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, r14.u8);
	// stbx r14,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, r14.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82357ea0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82357EA0;
loc_82357EB0:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r24,r24,r28
	r24.u64 = r24.u64 + r28.u64;
	// lwz r9,15392(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15392);
	// add r25,r25,r28
	r25.u64 = r25.u64 + r28.u64;
	// add r11,r15,r11
	ctx.r11.u64 = r15.u64 + ctx.r11.u64;
	// lwz r10,15388(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15388);
	// add r7,r16,r9
	ctx.r7.u64 = r16.u64 + ctx.r9.u64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 1;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// and r15,r9,r11
	r15.u64 = ctx.r9.u64 & ctx.r11.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// srawi r6,r15,11
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0x7FF) != 0);
	ctx.r6.s64 = r15.s32 >> 11;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82357ef4
	if (ctx.cr6.lt) goto loc_82357EF4;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
loc_82357EF4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x82357f1c
	if (!ctx.cr6.gt) goto loc_82357F1C;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82357f18
	if (ctx.cr6.eq) goto loc_82357F18;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82357F10:
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82357f10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82357F10;
loc_82357F18:
	// add r11,r7,r30
	ctx.r11.u64 = ctx.r7.u64 + r30.u64;
loc_82357F1C:
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(r30.s32, r26.s32, ctx.xer);
	// lwz r10,15404(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15404);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bge cr6,0x82357f60
	if (!ctx.cr6.lt) goto loc_82357F60;
	// subf r9,r30,r26
	ctx.r9.u64 = r26.u64 - r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82357F3C:
	// srawi r4,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 11;
	// lwz r9,124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + r29.u64;
	// lbzx r3,r4,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// mullw r9,r3,r9
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// stb r4,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82357f3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82357F3C;
loc_82357F60:
	// lwz r10,15392(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15392);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82357f88
	if (!ctx.cr6.lt) goto loc_82357F88;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82357F74:
	// stbu r22,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, r22.u8);
	ctx.r11.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r10,15392(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15392);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82357f74
	if (ctx.cr6.lt) goto loc_82357F74;
loc_82357F88:
	// addi r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 1;
	// add r16,r10,r7
	r16.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpw cr6,r4,r17
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r17.s32, ctx.xer);
	// blt cr6,0x82357d3c
	if (ctx.cr6.lt) goto loc_82357D3C;
	// b 0x82357fb0
	goto loc_82357FB0;
loc_82357F9C:
	// lwz r28,148(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r22,0
	r22.s64 = 0;
	// lwz r24,92(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r14,128
	r14.s64 = 128;
	// lwz r25,88(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_82357FB0:
	// lwz r11,15396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15396);
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// cmpw cr6,r17,r11
	ctx.cr6.compare<int32_t>(r17.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82358058
	if (!ctx.cr6.lt) goto loc_82358058;
loc_82357FC0:
	// lwz r10,15392(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15392);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82357fe8
	if (!ctx.cr6.gt) goto loc_82357FE8;
	// addi r10,r16,-1
	ctx.r10.s64 = r16.s64 + -1;
loc_82357FD4:
	// stbu r22,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, r22.u8);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,15392(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 15392);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82357fd4
	if (ctx.cr6.lt) goto loc_82357FD4;
loc_82357FE8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x8235800c
	if (!ctx.cr6.gt) goto loc_8235800C;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// subf r10,r25,r24
	ctx.r10.u64 = r24.u64 - r25.u64;
loc_82357FFC:
	// stbx r14,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, r14.u8);
	// stb r14,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r14.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82357ffc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82357FFC;
loc_8235800C:
	// lwz r11,15392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15392);
	// add r24,r24,r28
	r24.u64 = r24.u64 + r28.u64;
	// add r25,r25,r28
	r25.u64 = r25.u64 + r28.u64;
	// add r8,r11,r16
	ctx.r8.u64 = ctx.r11.u64 + r16.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82358044
	if (!ctx.cr6.gt) goto loc_82358044;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
loc_82358030:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r22,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, r22.u8);
	ctx.r9.u32 = ea;
	// lwz r11,15392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15392);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82358030
	if (ctx.cr6.lt) goto loc_82358030;
loc_82358044:
	// lwz r10,15396(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15396);
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// add r16,r11,r8
	r16.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82357fc0
	if (ctx.cr6.lt) goto loc_82357FC0;
loc_82358058:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f70
	ctx.lr = 0x82358068;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823A4E38) {
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
	ctx.lr = 0x823A4E40;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// rlwinm r31,r4,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r4,r11
	r30.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rlwinm r29,r4,3,0,28
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,23720
	ctx.r11.s64 = ctx.r11.s64 + 23720;
	// rlwinm r28,r30,1,0,30
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r8,2,0,29
	r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r4,r31
	r31.u64 = ctx.r4.u64 + r31.u64;
	// subf r29,r4,r29
	r29.u64 = r29.u64 - ctx.r4.u64;
	// rlwinm r21,r6,1,0,30
	r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r4,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r27,r4,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r16,r26,r11
	r16.u64 = r26.u64 + ctx.r11.u64;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r25,r28,r3
	r25.u64 = r28.u64 + ctx.r3.u64;
	// add r14,r7,r11
	r14.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r26,r29,r3
	r26.u64 = r29.u64 + ctx.r3.u64;
	// add r24,r31,r3
	r24.u64 = r31.u64 + ctx.r3.u64;
	// add r7,r30,r3
	ctx.r7.u64 = r30.u64 + ctx.r3.u64;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r21
	ctx.r11.u64 = ctx.r6.u64 + r21.u64;
	// add r23,r27,r3
	r23.u64 = r27.u64 + ctx.r3.u64;
	// add r22,r10,r3
	r22.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r21,r25,1
	r21.s64 = r25.s64 + 1;
	// addi r20,r26,1
	r20.s64 = r26.s64 + 1;
	// addi r25,r24,1
	r25.s64 = r24.s64 + 1;
	// stw r21,-392(r1)
	REX_STORE_U32(ctx.r1.u32 + -392, r21.u32);
	// addi r19,r7,1
	r19.s64 = ctx.r7.s64 + 1;
	// stw r20,-388(r1)
	REX_STORE_U32(ctx.r1.u32 + -388, r20.u32);
	// addi r26,r23,1
	r26.s64 = r23.s64 + 1;
	// stw r25,-372(r1)
	REX_STORE_U32(ctx.r1.u32 + -372, r25.u32);
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// stw r19,-384(r1)
	REX_STORE_U32(ctx.r1.u32 + -384, r19.u32);
	// subf r24,r4,r10
	r24.u64 = ctx.r10.u64 - ctx.r4.u64;
	// stw r26,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, r26.u32);
	// addi r6,r22,1
	ctx.r6.s64 = r22.s64 + 1;
	// stw r11,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r11.u32);
	// subfic r7,r4,1
	ctx.xer.ca = ctx.r4.u32 <= 1;
	ctx.r7.u64 = static_cast<uint64_t>(1) - ctx.r4.u64;
	// stw r24,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, r24.u32);
	// subf r27,r4,r27
	r27.u64 = r27.u64 - ctx.r4.u64;
	// stw r6,-380(r1)
	REX_STORE_U32(ctx.r1.u32 + -380, ctx.r6.u32);
	// subf r31,r4,r31
	r31.u64 = r31.u64 - ctx.r4.u64;
	// stw r7,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r7.u32);
	// subf r28,r4,r28
	r28.u64 = r28.u64 - ctx.r4.u64;
	// stw r27,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, r27.u32);
	// subf r29,r4,r29
	r29.u64 = r29.u64 - ctx.r4.u64;
	// stw r31,-356(r1)
	REX_STORE_U32(ctx.r1.u32 + -356, r31.u32);
	// subf r30,r4,r30
	r30.u64 = r30.u64 - ctx.r4.u64;
	// stw r28,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, r28.u32);
	// subf r10,r3,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r3.u64;
	// stw r29,-364(r1)
	REX_STORE_U32(ctx.r1.u32 + -364, r29.u32);
	// li r23,8
	r23.s64 = 8;
	// stw r30,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, r30.u32);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stw r10,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r10.u32);
	// add r15,r8,r5
	r15.u64 = ctx.r8.u64 + ctx.r5.u64;
	// stw r23,-376(r1)
	REX_STORE_U32(ctx.r1.u32 + -376, r23.u32);
	// b 0x823a4f54
	goto loc_823A4F54;
loc_823A4F38:
	// lwz r7,-348(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// lwz r24,-332(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// lwz r27,-360(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// lwz r31,-356(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// lwz r28,-320(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// lwz r29,-364(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// lwz r30,-324(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
loc_823A4F54:
	// li r8,2
	ctx.r8.s64 = 2;
	// lbz r23,0(r20)
	r23.u64 = REX_LOAD_U8(r20.u32 + 0);
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r5,0(r26)
	ctx.r5.u64 = REX_LOAD_U8(r26.u32 + 0);
	// lbzx r31,r31,r11
	r31.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// lbz r26,0(r25)
	r26.u64 = REX_LOAD_U8(r25.u32 + 0);
	// lhz r20,2(r14)
	r20.u64 = REX_LOAD_U16(r14.u32 + 2);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lbzx r8,r7,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// lbzx r7,r24,r11
	ctx.r7.u64 = REX_LOAD_U8(r24.u32 + ctx.r11.u32);
	// extsh r20,r20
	r20.s64 = r20.s16;
	// lbzx r24,r4,r11
	r24.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// lbz r25,0(r21)
	r25.u64 = REX_LOAD_U8(r21.u32 + 0);
	// lbz r21,0(r19)
	r21.u64 = REX_LOAD_U8(r19.u32 + 0);
	// lhz r19,0(r14)
	r19.u64 = REX_LOAD_U16(r14.u32 + 0);
	// stw r31,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, r31.u32);
	// mullw r31,r23,r20
	r31.s64 = int64_t(r23.s32) * int64_t(r20.s32);
	// stw r24,-400(r1)
	REX_STORE_U32(ctx.r1.u32 + -400, r24.u32);
	// lbzx r22,r10,r4
	r22.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// stw r20,-396(r1)
	REX_STORE_U32(ctx.r1.u32 + -396, r20.u32);
	// lbz r17,0(r11)
	r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r21,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, r21.u32);
	// lbz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// lbzx r27,r27,r11
	r27.u64 = REX_LOAD_U8(r27.u32 + ctx.r11.u32);
	// std r11,-312(r1)
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.r11.u64);
	// std r9,-296(r1)
	REX_STORE_U64(ctx.r1.u32 + -296, ctx.r9.u64);
	// extsh r19,r19
	r19.s64 = r19.s16;
	// lwz r9,-340(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// mullw r23,r8,r20
	r23.s64 = int64_t(ctx.r8.s32) * int64_t(r20.s32);
	// std r4,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, ctx.r4.u64);
	// lwz r8,-400(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -400);
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// stw r19,-400(r1)
	REX_STORE_U32(ctx.r1.u32 + -400, r19.u32);
	// mullw r21,r22,r20
	r21.s64 = int64_t(r22.s32) * int64_t(r20.s32);
	// lwz r4,-328(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// lbzx r18,r10,r11
	r18.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// mullw r29,r25,r20
	r29.s64 = int64_t(r25.s32) * int64_t(r20.s32);
	// lbzx r25,r30,r11
	r25.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// lbzx r30,r28,r11
	r30.u64 = REX_LOAD_U8(r28.u32 + ctx.r11.u32);
	// lbz r28,0(r3)
	r28.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// stw r10,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r10.u32);
	// lwz r11,44(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// mullw r10,r25,r19
	ctx.r10.s64 = int64_t(r25.s32) * int64_t(r19.s32);
	// mullw r24,r28,r19
	r24.s64 = int64_t(r28.s32) * int64_t(r19.s32);
	// mullw r22,r17,r19
	r22.s64 = int64_t(r17.s32) * int64_t(r19.s32);
	// mullw r30,r30,r19
	r30.s64 = int64_t(r30.s32) * int64_t(r19.s32);
	// mullw r19,r8,r19
	r19.s64 = int64_t(ctx.r8.s32) * int64_t(r19.s32);
	// lwz r8,-400(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -400);
	// mullw r17,r7,r8
	r17.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lwz r7,-396(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -396);
	// stw r26,-396(r1)
	REX_STORE_U32(ctx.r1.u32 + -396, r26.u32);
	// mullw r20,r18,r20
	r20.s64 = int64_t(r18.s32) * int64_t(r20.s32);
	// mullw r18,r6,r7
	r18.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lwz r6,-352(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// mullw r25,r5,r7
	r25.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// lwz r5,-396(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -396);
	// mullw r28,r6,r8
	r28.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// lwz r6,-344(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// mullw r26,r27,r8
	r26.s64 = int64_t(r27.s32) * int64_t(ctx.r8.s32);
	// mullw r27,r5,r7
	r27.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// mullw r5,r6,r8
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// lwz r6,-336(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// mullw r7,r6,r7
	ctx.r7.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r5,-260(r1)
	REX_STORE_U32(ctx.r1.u32 + -260, ctx.r5.u32);
	// add r8,r30,r29
	ctx.r8.u64 = r30.u64 + r29.u64;
	// add r7,r23,r24
	ctx.r7.u64 = r23.u64 + r24.u64;
	// stw r10,-256(r1)
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r10.u32);
	// add r5,r21,r22
	ctx.r5.u64 = r21.u64 + r22.u64;
	// stw r8,-264(r1)
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r8.u32);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r7.u32);
	// add r10,r19,r20
	ctx.r10.u64 = r19.u64 + r20.u64;
	// stw r5,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r5.u32);
	// subf r8,r6,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r6.u64;
	// add r7,r17,r18
	ctx.r7.u64 = r17.u64 + r18.u64;
	// stw r10,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r10.u32);
	// add r5,r26,r25
	ctx.r5.u64 = r26.u64 + r25.u64;
	// add r31,r28,r27
	r31.u64 = r28.u64 + r27.u64;
	// stw r31,-268(r1)
	REX_STORE_U32(ctx.r1.u32 + -268, r31.u32);
	// add r31,r4,r3
	r31.u64 = ctx.r4.u64 + ctx.r3.u64;
	// ld r11,-312(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -312);
	// addi r10,r1,-284
	ctx.r10.s64 = ctx.r1.s64 + -284;
	// ld r9,-296(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + -296);
	// add r29,r8,r15
	r29.u64 = ctx.r8.u64 + r15.u64;
	// ld r4,-304(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// mr r30,r15
	r30.u64 = r15.u64;
	// lwz r28,44(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// stw r7,-276(r1)
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r7.u32);
	// stw r5,-272(r1)
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r5.u32);
loc_823A50C4:
	// lhz r8,2(r16)
	ctx.r8.u64 = REX_LOAD_U16(r16.u32 + 2);
	// lhz r5,0(r16)
	ctx.r5.u64 = REX_LOAD_U16(r16.u32 + 0);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lwz r27,-4(r10)
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// mullw r5,r5,r27
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r27.s32);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// addi r5,r8,8
	ctx.r5.s64 = ctx.r8.s64 + 8;
	// srawi. r8,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x823a5100
	if (!ctx.cr0.lt) goto loc_823A5100;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x823a510c
	goto loc_823A510C;
loc_823A5100:
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// ble cr6,0x823a510c
	if (!ctx.cr6.gt) goto loc_823A510C;
	// li r8,255
	ctx.r8.s64 = 255;
loc_823A510C:
	// stb r8,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r8.u8);
	// lhz r27,2(r16)
	r27.u64 = REX_LOAD_U16(r16.u32 + 2);
	// lhz r8,0(r16)
	ctx.r8.u64 = REX_LOAD_U16(r16.u32 + 0);
	// extsh r26,r8
	r26.s64 = ctx.r8.s16;
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r27,r27
	r27.s64 = r27.s16;
	// mullw r7,r26,r7
	ctx.r7.s64 = int64_t(r26.s32) * int64_t(ctx.r7.s32);
	// mullw r8,r27,r5
	ctx.r8.s64 = int64_t(r27.s32) * int64_t(ctx.r5.s32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r8,r9,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r9.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// srawi. r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x823a5148
	if (!ctx.cr0.lt) goto loc_823A5148;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x823a5154
	goto loc_823A5154;
loc_823A5148:
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// ble cr6,0x823a5154
	if (!ctx.cr6.gt) goto loc_823A5154;
	// li r8,255
	ctx.r8.s64 = 255;
loc_823A5154:
	// stbx r8,r31,r28
	REX_STORE_U8(r31.u32 + r28.u32, ctx.r8.u8);
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lhz r8,2(r16)
	ctx.r8.u64 = REX_LOAD_U16(r16.u32 + 2);
	// extsh r27,r8
	r27.s64 = ctx.r8.s16;
	// lhz r8,0(r16)
	ctx.r8.u64 = REX_LOAD_U16(r16.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// mullw r8,r8,r5
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// mullw r5,r27,r7
	ctx.r5.s64 = int64_t(r27.s32) * int64_t(ctx.r7.s32);
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// subf r8,r9,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r9.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// srawi. r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x823a5190
	if (!ctx.cr0.lt) goto loc_823A5190;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x823a519c
	goto loc_823A519C;
loc_823A5190:
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// ble cr6,0x823a519c
	if (!ctx.cr6.gt) goto loc_823A519C;
	// li r8,255
	ctx.r8.s64 = 255;
loc_823A519C:
	// stb r8,0(r30)
	REX_STORE_U8(r30.u32 + 0, ctx.r8.u8);
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lhz r8,2(r16)
	ctx.r8.u64 = REX_LOAD_U16(r16.u32 + 2);
	// lhz r27,0(r16)
	r27.u64 = REX_LOAD_U16(r16.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r27,r27
	r27.s64 = r27.s16;
	// mullw r8,r8,r5
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// mullw r7,r27,r7
	ctx.r7.s64 = int64_t(r27.s32) * int64_t(ctx.r7.s32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r8,r9,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r9.u64;
	// addi r5,r8,8
	ctx.r5.s64 = ctx.r8.s64 + 8;
	// srawi. r8,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x823a51d8
	if (!ctx.cr0.lt) goto loc_823A51D8;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x823a51e4
	goto loc_823A51E4;
loc_823A51D8:
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// ble cr6,0x823a51e4
	if (!ctx.cr6.gt) goto loc_823A51E4;
	// li r8,255
	ctx.r8.s64 = 255;
loc_823A51E4:
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// add r31,r6,r31
	r31.u64 = ctx.r6.u64 + r31.u64;
	// stbux r8,r29,r6
	ea = r29.u32 + ctx.r6.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	r29.u32 = ea;
	// add r30,r6,r30
	r30.u64 = ctx.r6.u64 + r30.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x823a50c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A50C4;
	// lwz r8,-380(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -380);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lwz r7,-368(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r5,-372(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -372);
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// addi r26,r7,1
	r26.s64 = ctx.r7.s64 + 1;
	// lwz r10,-376(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -376);
	// addi r25,r5,1
	r25.s64 = ctx.r5.s64 + 1;
	// lwz r8,-392(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -392);
	// lwz r7,-388(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -388);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r5,-384(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -384);
	// addi r21,r8,1
	r21.s64 = ctx.r8.s64 + 1;
	// addi r20,r7,1
	r20.s64 = ctx.r7.s64 + 1;
	// stw r10,-376(r1)
	REX_STORE_U32(ctx.r1.u32 + -376, ctx.r10.u32);
	// addi r19,r5,1
	r19.s64 = ctx.r5.s64 + 1;
	// stw r6,-380(r1)
	REX_STORE_U32(ctx.r1.u32 + -380, ctx.r6.u32);
	// stw r26,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, r26.u32);
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// stw r25,-372(r1)
	REX_STORE_U32(ctx.r1.u32 + -372, r25.u32);
	// stw r21,-392(r1)
	REX_STORE_U32(ctx.r1.u32 + -392, r21.u32);
	// stw r20,-388(r1)
	REX_STORE_U32(ctx.r1.u32 + -388, r20.u32);
	// stw r19,-384(r1)
	REX_STORE_U32(ctx.r1.u32 + -384, r19.u32);
	// bne 0x823a4f38
	if (!ctx.cr0.eq) goto loc_823A4F38;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823B8130) {
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
	// bl 0x822d4e60
	ctx.lr = 0x823B8138;
	// stwu r1,-1024(r1)
	ea = -1024 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// stw r5,48(r1)
	REX_STORE_U32(ctx.r1.u32 + 48, ctx.r5.u32);
	// addi r27,r1,32
	r27.s64 = ctx.r1.s64 + 32;
	// vspltish v8,4
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x4)));
	// stw r10,32(r1)
	REX_STORE_U32(ctx.r1.u32 + 32, ctx.r10.u32);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vspltish v7,8
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_set1_epi16(short(0x8)));
	// add r5,r4,r11
	ctx.r5.u64 = ctx.r4.u64 + ctx.r11.u64;
	// vspltisb v6,-9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_set1_epi8(char(0xF7)));
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,16
	ctx.r10.s64 = 16;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r31,r11,r4
	r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v63,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v62,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r26,-32251
	r26.s64 = -2113601536;
	// lvrx128 v61,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v60,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v59,r10,r31
	temp.u32 = ctx.r10.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r28,r4,r7
	r28.u64 = ctx.r4.u64 + ctx.r7.u64;
	// lvrx128 v58,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r9,r1,48
	ctx.r9.s64 = ctx.r1.s64 + 48;
	// add r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 + ctx.r11.u64;
	// vor128 v11,v63,v59
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// vor128 v12,v62,v61
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// rlwinm r30,r4,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// vor128 v10,v60,v58
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// li r31,-16
	r31.s64 = -16;
	// lvlx128 v57,r28,r11
	temp.u32 = r28.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v4,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lvlx128 v54,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v5,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r26,-9248
	r27.s64 = r26.s64 + -9248;
	// subf r29,r4,r30
	r29.u64 = r30.u64 - ctx.r4.u64;
	// lvrx128 v52,r10,r7
	temp.u32 = ctx.r10.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// rlwinm r30,r4,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltb v13,v5,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_set1_epi8(char(0xC))));
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// vsplth v3,v4,1
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_set1_epi16(short(0xD0C))));
	// add r6,r28,r11
	ctx.r6.u64 = r28.u64 + ctx.r11.u64;
	// lvlx128 v56,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r26,r1,128
	r26.s64 = ctx.r1.s64 + 128;
	// lvx128 v43,r27,r31
	ea = (r27.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r25,r1,80
	r25.s64 = ctx.r1.s64 + 80;
	// lvrx128 v55,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r24,r1,96
	r24.s64 = ctx.r1.s64 + 96;
	// lvx128 v62,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,-32
	r28.s64 = -32;
	// lvlx128 v53,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r23,r1,48
	r23.s64 = ctx.r1.s64 + 48;
	// lvrx128 v51,r10,r6
	temp.u32 = ctx.r10.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r7,r1,32
	ctx.r7.s64 = ctx.r1.s64 + 32;
	// lvrx128 v50,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r31,r29,r11
	r31.u64 = r29.u64 + ctx.r11.u64;
	// stvx128 v8,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + ctx.r11.u64;
	// stvx128 v7,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r8,r4,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lvx128 v63,r27,r28
	ea = (r27.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v6,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v9,v56,v55
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// lvlx128 v49,r29,r11
	temp.u32 = r29.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v8,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvlx128 v48,r30,r11
	temp.u32 = r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v7,v57,v51
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvrx128 v47,r10,r31
	temp.u32 = ctx.r10.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// lvrx128 v46,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v6,v53,v50
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// stvx128 v63,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpgtub v20,v11,v13
	simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// stvx128 v62,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// vmrghb v15,v0,v12
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v4,v48,v46
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// vmrglb v14,v0,v12
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v5,v49,v47
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// vmrghb v18,v0,v11
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v17,v0,v11
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcmpgtub v31,v6,v13
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lvrx128 v45,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrglb v11,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v44,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcmpgtub v19,v12,v13
	simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v30,v0,v10
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrglb v29,v0,v10
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcmpgtub v2,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// vmrghb v26,v0,v8
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// vmrglb v25,v0,v8
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// vcmpgtub v10,v8,v13
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// addi r30,r1,368
	r30.s64 = ctx.r1.s64 + 368;
	// vmrghb v22,v0,v6
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r28,r1,384
	r28.s64 = ctx.r1.s64 + 384;
	// vmrghb v21,v0,v5
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r26,r1,400
	r26.s64 = ctx.r1.s64 + 400;
	// vcmpgtub v8,v5,v13
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// addi r24,r1,416
	r24.s64 = ctx.r1.s64 + 416;
	// vmrghb v28,v0,v9
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r22,r1,432
	r22.s64 = ctx.r1.s64 + 432;
	// stvx128 v15,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r21,r1,112
	r21.s64 = ctx.r1.s64 + 112;
	// vmrglb v27,v0,v9
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// vmrghb v24,v0,v7
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// vmrglb v23,v0,v7
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r31,r1,192
	r31.s64 = ctx.r1.s64 + 192;
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r29,r1,208
	r29.s64 = ctx.r1.s64 + 208;
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r27,r1,224
	r27.s64 = ctx.r1.s64 + 224;
	// vmrghb v16,v0,v4
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r25,r1,240
	r25.s64 = ctx.r1.s64 + 240;
	// vor128 v42,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)v31.u8));
	// addi r23,r1,256
	r23.s64 = ctx.r1.s64 + 256;
	// vmrghb v1,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// stvx128 v14,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,64
	ctx.r5.s64 = ctx.r1.s64 + 64;
	// vmrglb v31,v0,v12
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v41,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// stvx128 v11,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v0,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// stvx128 v18,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpgtub v11,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// addi r11,r1,448
	ctx.r11.s64 = ctx.r1.s64 + 448;
	// vcmpgtub v9,v7,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// stvx128 v17,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// vaddsbs v7,v20,v2
	simde_mm_store_si128((simde__m128i*)ctx.v7.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)v20.s8), simde_mm_load_si128((simde__m128i*)ctx.v2.s8)));
	// stvx128 v30,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,864
	ctx.r9.s64 = ctx.r1.s64 + 864;
	// vcmpgtub v12,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// stvx128 v29,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v28,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpgtub v20,v4,v13
	simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// stvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v27,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v23,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v22,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v6,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v5,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v16,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddsbs v13,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.s8), simde_mm_load_si128((simde__m128i*)ctx.v10.s8)));
	// lvx128 v40,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r20,r1,112
	r20.s64 = ctx.r1.s64 + 112;
	// vaddsbs v12,v7,v19
	simde_mm_store_si128((simde__m128i*)ctx.v12.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.s8), simde_mm_load_si128((simde__m128i*)v19.s8)));
	// stvx128 v40,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r18,r1,880
	r18.s64 = ctx.r1.s64 + 880;
	// stvx128 v31,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddsbs v2,v13,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.s8), simde_mm_load_si128((simde__m128i*)ctx.v2.s8)));
	// stvx128 v1,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v31,v42,v42
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// stvx128 v12,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddsbs v0,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.s8), simde_mm_load_si128((simde__m128i*)ctx.v11.s8)));
	// vaddsbs v11,v8,v20
	simde_mm_store_si128((simde__m128i*)ctx.v11.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.s8), simde_mm_load_si128((simde__m128i*)v20.s8)));
	// addi r7,r1,864
	ctx.r7.s64 = ctx.r1.s64 + 864;
	// stvx128 v2,r0,r18
	ea = (r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v4,v17,v29
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vaddsbs v12,v9,v31
	simde_mm_store_si128((simde__m128i*)ctx.v12.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.s8), simde_mm_load_si128((simde__m128i*)v31.s8)));
	// addi r11,r1,464
	ctx.r11.s64 = ctx.r1.s64 + 464;
	// vaddshs v7,v18,v30
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// addi r9,r1,480
	ctx.r9.s64 = ctx.r1.s64 + 480;
	// addi r6,r1,448
	ctx.r6.s64 = ctx.r1.s64 + 448;
	// vaddshs v20,v28,v26
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// vaddsbs v9,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.s8), simde_mm_load_si128((simde__m128i*)ctx.v9.s8)));
	// li r10,8
	ctx.r10.s64 = 8;
	// vaddshs v19,v27,v25
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// addi r31,r1,512
	r31.s64 = ctx.r1.s64 + 512;
	// vaddshs v18,v24,v22
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// addi r30,r1,528
	r30.s64 = ctx.r1.s64 + 528;
	// vaddsbs v13,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.s8), simde_mm_load_si128((simde__m128i*)ctx.v10.s8)));
	// addi r29,r1,544
	r29.s64 = ctx.r1.s64 + 544;
	// vaddshs v17,v23,v6
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// addi r28,r1,560
	r28.s64 = ctx.r1.s64 + 560;
	// vaddsbs v12,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.s8), simde_mm_load_si128((simde__m128i*)ctx.v8.s8)));
	// vaddsbs v10,v11,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.s8), simde_mm_load_si128((simde__m128i*)v31.s8)));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// vaddshs v31,v4,v14
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// addi r27,r1,720
	r27.s64 = ctx.r1.s64 + 720;
	// vaddshs v8,v7,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// addi r26,r1,736
	r26.s64 = ctx.r1.s64 + 736;
	// vaddshs v14,v4,v27
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// lvx128 v15,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v1,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,496
	ctx.r8.s64 = ctx.r1.s64 + 496;
	// vaddshs v4,v20,v30
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// lvx128 v30,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v27,v20,v24
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v28,v7,v28
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// lvx128 v7,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v39,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v2,v21,v16
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vaddshs v29,v19,v29
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// stvx128 v39,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r0,r18
	ea = (r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v23,v19,v23
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vaddshs v20,v18,v26
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// addi r25,r1,752
	r25.s64 = ctx.r1.s64 + 752;
	// addi r24,r1,592
	r24.s64 = ctx.r1.s64 + 592;
	// vaddshs v16,v5,v1
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// addi r23,r1,608
	r23.s64 = ctx.r1.s64 + 608;
	// stvx128 v38,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r22,r1,624
	r22.s64 = ctx.r1.s64 + 624;
	// vaddsbs v24,v11,v15
	simde_mm_store_si128((simde__m128i*)v24.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.s8), simde_mm_load_si128((simde__m128i*)v15.s8)));
	// addi r21,r1,768
	r21.s64 = ctx.r1.s64 + 768;
	// stvx128 v9,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,640
	ctx.r7.s64 = ctx.r1.s64 + 640;
	// stvx128 v13,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,784
	ctx.r6.s64 = ctx.r1.s64 + 784;
	// stvx128 v12,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,656
	ctx.r5.s64 = ctx.r1.s64 + 656;
	// stvx128 v10,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r20,r1,800
	r20.s64 = ctx.r1.s64 + 800;
	// vaddshs v19,v17,v25
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// addi r19,r1,672
	r19.s64 = ctx.r1.s64 + 672;
	// vaddshs v18,v18,v21
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// addi r10,r1,816
	ctx.r10.s64 = ctx.r1.s64 + 816;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r1,464
	ctx.r9.s64 = ctx.r1.s64 + 464;
	// addi r8,r1,688
	ctx.r8.s64 = ctx.r1.s64 + 688;
	// stvx128 v23,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,832
	ctx.r7.s64 = ctx.r1.s64 + 832;
	// stvx128 v20,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,704
	ctx.r6.s64 = ctx.r1.s64 + 704;
	// stvx128 v19,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,576
	ctx.r5.s64 = ctx.r1.s64 + 576;
	// vaddshs v15,v2,v22
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vaddshs v17,v17,v5
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvx128 v8,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v13,v16,v6
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvx128 v31,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v12,v2,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// stvx128 v28,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v11,v16,v30
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// stvx128 v15,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v14,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v1,v43,v43
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v43.u8));
	// stvx128 v4,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v0,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// stvx128 v29,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,4
	ctx.r10.s64 = 4;
	// stvx128 v27,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v18,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823B857C:
	// addi r8,r1,48
	ctx.r8.s64 = ctx.r1.s64 + 48;
	// lvx128 v12,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,32
	ctx.r7.s64 = ctx.r1.s64 + 32;
	// addi r6,r1,592
	ctx.r6.s64 = ctx.r1.s64 + 592;
	// vperm v13,v12,v12,v1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// addi r5,r1,720
	ctx.r5.s64 = ctx.r1.s64 + 720;
	// addi r31,r1,160
	r31.s64 = ctx.r1.s64 + 160;
	// lvx128 v6,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,320
	r30.s64 = ctx.r1.s64 + 320;
	// lvx128 v7,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// vperm v5,v12,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v63,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvx128 v62,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lvx128 v10,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v11,v63,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vaddsbs v2,v5,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.s8), simde_mm_load_si128((simde__m128i*)ctx.v13.s8)));
	// vperm128 v4,v11,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v13,v10,v62,v1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// lvx128 v31,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v30,v10,v62,v7
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v29,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v28,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,64
	ctx.r5.s64 = ctx.r1.s64 + 64;
	// vaddshs v27,v9,v4
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vaddsbs v12,v12,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.s8), simde_mm_load_si128((simde__m128i*)ctx.v2.s8)));
	// vaddshs v26,v13,v30
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v25,v9,v13
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v24,v11,v27
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// lvx128 v23,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpequb v22,v31,v12
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_cmpeq_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vaddshs v21,v10,v26
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vcmpequb v20,v0,v12
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_cmpeq_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vaddshs v19,v13,v3
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubshs v18,v13,v3
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v17,v24,v21
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vor v12,v20,v22
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)v22.u8)));
	// vaddshs v16,v25,v17
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vmrghb v15,v12,v12
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vaddshs v14,v16,v29
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vandc128 v37,v13,v15
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vsrah v12,v14,v28
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v13,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vcmpgtsh v11,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vcmpgtsh v10,v23,v13
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vandc128 v36,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vand128 v35,v19,v11
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vand128 v34,v18,v10
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vor128 v33,v36,v35
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// vandc128 v32,v33,v10
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// vor128 v63,v32,v34
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8)));
	// vand128 v62,v63,v15
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// vor128 v61,v62,v37
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// vpkshus128 v60,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v61.s16), simde_mm_load_si128((simde__m128i*)ctx.v61.s16)));
	// stvewx128 v60,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// bdnz 0x823b857c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B857C;
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_823E1688) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e78
	ctx.lr = 0x823E1690;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f30
	ctx.lr = 0x823E1698;
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
	// beq cr6,0x823e16c4
	if (ctx.cr6.eq) goto loc_823E16C4;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x823E16C0;
	sub_82413040(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_823E16C4:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e16e0
	if (ctx.cr6.eq) goto loc_823E16E0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc0b0
	ctx.lr = 0x823E16DC;
	sub_823DC0B0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_823E16E0:
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
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
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
	// bne 0x823e1750
	if (!ctx.cr0.eq) goto loc_823E1750;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x823e1758
	goto loc_823E1758;
loc_823E1750:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_823E1758:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e1770
	if (ctx.cr6.eq) goto loc_823E1770;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x823E1770;
	sub_823DC658(ctx, base);
loc_823E1770:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823e1af8
	if (!ctx.cr6.gt) goto loc_823E1AF8;
	// add r10,r30,r29
	ctx.r10.u64 = r30.u64 + r29.u64;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lfd f11,-9120(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r7.u32 + -9120);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,-32249
	ctx.r3.s64 = -2113470464;
	// lfs f4,-31056(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -31056);
	ctx.f4.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lfs f12,16288(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16288);
	ctx.f12.f64 = double(temp.f32);
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// lfs f13,-7224(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -7224);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r25,r30,2,0,29
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,17176(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 17176);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f10,-7204(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + -7204);
	ctx.f10.f64 = double(temp.f32);
	// lfs f3,16172(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16172);
	ctx.f3.f64 = double(temp.f32);
	// rlwinm r30,r30,4,0,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f5,-7208(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -7208);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// subf r29,r25,r28
	r29.u64 = r28.u64 - r25.u64;
loc_823E17E4:
	// add r10,r27,r11
	ctx.r10.u64 = r27.u64 + ctx.r11.u64;
	// lfsx f9,r27,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f29,f9
	ctx.f9.f64 = double(float(f29.f64 + ctx.f9.f64));
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
	// lfsx f2,r7,r24
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f6,f6,f3
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fadds f1,f9,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// fadds f27,f8,f2
	f27.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// fadds f26,f7,f2
	f26.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// fadds f2,f6,f2
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// fctiwz f1,f1
	ctx.f1.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f1,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f1,f27
	ctx.f1.s64 = std::isnan(f27.f64) ? int64_t(0x80000000U) : (f27.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f27.f64));
	// stfd f1,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// fctiwz f1,f26
	ctx.f1.s64 = std::isnan(f26.f64) ? int64_t(0x80000000U) : (f26.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f26.f64));
	// stfd f1,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f1.u64);
	// fctiwz f2,f2
	ctx.f2.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f2,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f2.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// beq cr6,0x823e1a1c
	if (ctx.cr6.eq) goto loc_823E1A1C;
	// extsw r7,r5
	ctx.r7.s64 = ctx.r5.s32;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r28,r4
	r28.s64 = ctx.r4.s32;
	// std r7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f2,104(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r28,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r28.u64);
	// lfd f1,112(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f1,f1
	ctx.f1.f64 = double(ctx.f1.s64);
	// extsw r7,r6
	ctx.r7.s64 = ctx.r6.s32;
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// std r7,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f31,120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsw r28,r3
	r28.s64 = ctx.r3.s32;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// std r28,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, r28.u64);
	// lfs f30,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	f30.f64 = double(temp.f32);
	// fsubs f8,f8,f1
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f1.f64));
	// frsp f2,f2
	ctx.f2.f64 = double(float(ctx.f2.f64));
	// fmuls f8,f8,f10
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fsubs f7,f7,f2
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f2.f64));
	// fmadds f2,f8,f0,f30
	ctx.f2.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, f30.f64)));
	// stfs f2,16(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f2,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f2,f8,f13,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f2.f64)));
	// stfs f2,16(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// fcfid f2,f31
	ctx.f2.f64 = double(f31.s64);
	// lfs f1,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f7,f7,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// fmadds f1,f8,f12,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f1.f64)));
	// stfs f1,16(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// frsp f2,f2
	ctx.f2.f64 = double(float(ctx.f2.f64));
	// lfs f1,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f1,f7,f0,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f1,20(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fsubs f9,f9,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f2.f64));
	// lfs f2,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f2,f7,f13,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f2.f64)));
	// stfs f2,20(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f2,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f9,f9,f10
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmadds f2,f7,f12,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f2.f64)));
	// stfs f2,20(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fmul f8,f8,f11
	ctx.f8.f64 = ctx.f8.f64 * ctx.f11.f64;
	// lfs f2,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f2,f9,f0,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f2.f64)));
	// stfs f2,24(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmul f7,f7,f11
	ctx.f7.f64 = ctx.f7.f64 * ctx.f11.f64;
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// frsp f31,f8
	f31.f64 = double(float(ctx.f8.f64));
	// lfs f8,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f9,f13,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f8.f64)));
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
	// fmadds f7,f9,f12,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f7.f64)));
	// fmul f9,f9,f11
	ctx.f9.f64 = ctx.f9.f64 * ctx.f11.f64;
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
	// fmuls f9,f9,f4
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fmadds f8,f9,f0,f7
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f7.f64)));
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
	// fmadds f8,f9,f13,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f8.f64)));
	// fmul f7,f9,f11
	ctx.f7.f64 = ctx.f9.f64 * ctx.f11.f64;
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
	// fmadds f9,f9,f12,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f8.f64)));
	// stfs f9,28(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// frsp f28,f7
	f28.f64 = double(float(ctx.f7.f64));
	// addi r7,r10,28
	ctx.r7.s64 = ctx.r10.s64 + 28;
loc_823E1A1C:
	// cmpwi cr6,r4,511
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 511, ctx.xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt cr6,0x823e1a2c
	if (ctx.cr6.lt) goto loc_823E1A2C;
	// li r10,511
	ctx.r10.s64 = 511;
loc_823E1A2C:
	// cmpwi cr6,r10,-511
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -511, ctx.xer);
	// ble cr6,0x823e1a44
	if (!ctx.cr6.gt) goto loc_823E1A44;
	// cmpwi cr6,r4,511
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 511, ctx.xer);
	// blt cr6,0x823e1a48
	if (ctx.cr6.lt) goto loc_823E1A48;
	// li r4,511
	ctx.r4.s64 = 511;
	// b 0x823e1a48
	goto loc_823E1A48;
loc_823E1A44:
	// li r4,-511
	ctx.r4.s64 = -511;
loc_823E1A48:
	// cmpwi cr6,r5,511
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 511, ctx.xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// blt cr6,0x823e1a58
	if (ctx.cr6.lt) goto loc_823E1A58;
	// li r10,511
	ctx.r10.s64 = 511;
loc_823E1A58:
	// cmpwi cr6,r10,-511
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -511, ctx.xer);
	// ble cr6,0x823e1a70
	if (!ctx.cr6.gt) goto loc_823E1A70;
	// cmpwi cr6,r5,511
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 511, ctx.xer);
	// blt cr6,0x823e1a74
	if (ctx.cr6.lt) goto loc_823E1A74;
	// li r5,511
	ctx.r5.s64 = 511;
	// b 0x823e1a74
	goto loc_823E1A74;
loc_823E1A70:
	// li r5,-511
	ctx.r5.s64 = -511;
loc_823E1A74:
	// cmpwi cr6,r6,511
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 511, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// blt cr6,0x823e1a84
	if (ctx.cr6.lt) goto loc_823E1A84;
	// li r10,511
	ctx.r10.s64 = 511;
loc_823E1A84:
	// cmpwi cr6,r10,-511
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -511, ctx.xer);
	// ble cr6,0x823e1a9c
	if (!ctx.cr6.gt) goto loc_823E1A9C;
	// cmpwi cr6,r6,511
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 511, ctx.xer);
	// blt cr6,0x823e1aa0
	if (ctx.cr6.lt) goto loc_823E1AA0;
	// li r6,511
	ctx.r6.s64 = 511;
	// b 0x823e1aa0
	goto loc_823E1AA0;
loc_823E1A9C:
	// li r6,-511
	ctx.r6.s64 = -511;
loc_823E1AA0:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// blt cr6,0x823e1ab0
	if (ctx.cr6.lt) goto loc_823E1AB0;
	// li r10,3
	ctx.r10.s64 = 3;
loc_823E1AB0:
	// cmpwi cr6,r10,-3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -3, ctx.xer);
	// ble cr6,0x823e1ac8
	if (!ctx.cr6.gt) goto loc_823E1AC8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// blt cr6,0x823e1acc
	if (ctx.cr6.lt) goto loc_823E1ACC;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x823e1acc
	goto loc_823E1ACC;
loc_823E1AC8:
	// li r3,-3
	ctx.r3.s64 = -3;
loc_823E1ACC:
	// rlwimi r6,r3,10,0,21
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 10) & 0xFFFFFC00) | (ctx.r6.u64 & 0xFFFFFFFF000003FF);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// rlwimi r5,r6,10,0,21
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00) | (ctx.r5.u64 & 0xFFFFFFFF000003FF);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// rlwimi r4,r5,10,0,21
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00) | (ctx.r4.u64 & 0xFFFFFFFF000003FF);
	// add r9,r30,r9
	ctx.r9.u64 = r30.u64 + ctx.r9.u64;
	// stwux r4,r29,r25
	ea = r29.u32 + r25.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	r29.u32 = ea;
	// add r8,r30,r8
	ctx.r8.u64 = r30.u64 + ctx.r8.u64;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823e17e4
	if (ctx.cr6.lt) goto loc_823E17E4;
loc_823E1AF8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f7c
	ctx.lr = 0x823E1B04;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_823EE5B8) {
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
	ctx.lr = 0x823EE5C0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,24(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823ee604
	if (!ctx.cr6.eq) goto loc_823EE604;
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EE5E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ee5fc
	if (!ctx.cr6.eq) goto loc_823EE5FC;
loc_823EE5F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_823EE5FC:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
loc_823EE604:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r30,r9,8
	r30.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// bne 0x823ee638
	if (!ctx.cr0.eq) goto loc_823EE638;
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EE628;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ee5f0
	if (ctx.cr6.eq) goto loc_823EE5F0;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
loc_823EE638:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r31,r11,1
	r31.s64 = ctx.r11.s64 + 1;
	// addi r29,r10,-1
	r29.s64 = ctx.r10.s64 + -1;
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + r30.u64;
	// addi r26,r11,-2
	r26.s64 = ctx.r11.s64 + -2;
	// cmpwi cr6,r26,14
	ctx.cr6.compare<int32_t>(r26.s32, 14, ctx.xer);
	// blt cr6,0x823ee65c
	if (ctx.cr6.lt) goto loc_823EE65C;
	// li r28,14
	r28.s64 = 14;
	// b 0x823ee66c
	goto loc_823EE66C;
loc_823EE65C:
	// subfic r11,r26,0
	ctx.xer.ca = r26.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r26.u64;
	// rlwinm r10,r26,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0x1;
	// addme r9,r10
	temp.u8 = (ctx.r10.u32 + 0xFFFFFFFFu < ctx.r10.u32) | (ctx.r10.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ctx.r10.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r28,r9,r26
	r28.u64 = ctx.r9.u64 & r26.u64;
loc_823EE66C:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x823ee6c0
	if (ctx.cr6.eq) goto loc_823EE6C0;
loc_823EE678:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x823ee6a0
	if (!ctx.cr6.eq) goto loc_823EE6A0;
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EE690;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ee5f0
	if (ctx.cr6.eq) goto loc_823EE5F0;
	// lwz r31,0(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r29,4(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 4);
loc_823EE6A0:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stbx r11,r30,r10
	REX_STORE_U8(r30.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// blt cr6,0x823ee678
	if (ctx.cr6.lt) goto loc_823EE678;
loc_823EE6C0:
	// lwz r11,420(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 420);
	// subf r30,r28,r26
	r30.u64 = r26.u64 - r28.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// cmpwi cr6,r11,224
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 224, ctx.xer);
	// beq cr6,0x823ee71c
	if (ctx.cr6.eq) goto loc_823EE71C;
	// cmpwi cr6,r11,238
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 238, ctx.xer);
	// beq cr6,0x823ee708
	if (ctx.cr6.eq) goto loc_823EE708;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// li r10,68
	ctx.r10.s64 = 68;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r8,420(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 420);
	// stw r8,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823EE704;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823ee72c
	goto loc_823EE72C;
loc_823EE708:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823ee4a8
	ctx.lr = 0x823EE718;
	sub_823EE4A8(ctx, base);
	// b 0x823ee72c
	goto loc_823EE72C;
loc_823EE71C:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823ee198
	ctx.lr = 0x823EE72C;
	sub_823EE198(ctx, base);
loc_823EE72C:
	// stw r31,0(r27)
	REX_STORE_U32(r27.u32 + 0, r31.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r29,4(r27)
	REX_STORE_U32(r27.u32 + 4, r29.u32);
	// ble cr6,0x823ee754
	if (!ctx.cr6.gt) goto loc_823EE754;
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EE754;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823EE754:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_823F3C48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823F3C50;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// beq cr6,0x823f3c84
	if (ctx.cr6.eq) goto loc_823F3C84;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823F3C7C:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x823f3c7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F3C7C;
loc_823F3C84:
	// li r11,16
	ctx.r11.s64 = 16;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r31,-32249
	r31.s64 = -2113470464;
	// lis r30,-32255
	r30.s64 = -2113863680;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r29,-32256
	r29.s64 = -2113929216;
	// lfs f8,-7224(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -7224);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,17176(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17176);
	ctx.f9.f64 = double(temp.f32);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// lfs f10,22428(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 22428);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r4,12
	ctx.r3.s64 = ctx.r4.s64 + 12;
	// lfs f11,-30112(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + -30112);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,16288(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16288);
	ctx.f7.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,2000(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 2000);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,29356(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 29356);
	ctx.f13.f64 = double(temp.f32);
loc_823F3CCC:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x823f3ce0
	if (ctx.cr6.eq) goto loc_823F3CE0;
	// lfs f6,-4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
loc_823F3CE0:
	// fmadds f6,f0,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// rlwinm r11,r9,31,1,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r5,r10,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// fctiwz f6,f6
	ctx.f6.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r31,r10,28,0,3
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF0000000;
	// or r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 | r31.u64;
	// stwx r5,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r5.u32);
	// beq cr6,0x823f3d7c
	if (ctx.cr6.eq) goto loc_823F3D7C;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f6,88(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// fnmsubs f0,f6,f11,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f11.f64, -ctx.f0.f64)));
	// beq cr6,0x823f3d40
	if (ctx.cr6.eq) goto loc_823F3D40;
	// lfs f6,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f6,f0,f10,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f6.f64)));
	// stfs f6,0(r8)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_823F3D40:
	// cmplwi cr6,r9,12
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12, ctx.xer);
	// bge cr6,0x823f3d7c
	if (!ctx.cr6.lt) goto loc_823F3D7C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f3d5c
	if (ctx.cr6.eq) goto loc_823F3D5C;
	// lfs f6,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f6,f0,f9,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f6.f64)));
	// stfs f6,8(r8)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
loc_823F3D5C:
	// lfs f6,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// fmadds f6,f0,f8,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, ctx.f6.f64)));
	// stfs f6,12(r8)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// beq cr6,0x823f3d7c
	if (ctx.cr6.eq) goto loc_823F3D7C;
	// lfs f6,16(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f0,f0,f7,f6
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f7.f64, ctx.f6.f64)));
	// stfs f0,16(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 16, temp.u32);
loc_823F3D7C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x823f3ccc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F3CCC;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r7,8
	ctx.r3.s64 = ctx.r7.s64 + 8;
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// stw r11,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// bl 0x823f2b10
	ctx.lr = 0x823F3DB0;
	sub_823F2B10(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823F8D28) {
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
	// stw r11,1384(r3)
	REX_STORE_U32(ctx.r3.u32 + 1384, ctx.r11.u32);
	// bl 0x823f1f08
	ctx.lr = 0x823F8D48;
	sub_823F1F08(ctx, base);
	// lbz r11,1555(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1555);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823f8dbc
	if (ctx.cr0.eq) goto loc_823F8DBC;
	// lwz r11,1376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1376);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,1468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1468);
	// bne 0x823f8d6c
	if (!ctx.cr0.eq) goto loc_823F8D6C;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_823F8D6C:
	// stw r11,1472(r31)
	REX_STORE_U32(r31.u32 + 1472, ctx.r11.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lbz r10,1556(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 1556);
	// addi r11,r11,2388
	ctx.r11.s64 = ctx.r11.s64 + 2388;
	// lwz r9,1464(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1464);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lbz r8,1561(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 1561);
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// lwzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r11,r10,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// subf r10,r6,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r6.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divwu r10,r10,r11
	ctx.r10.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// mullw r11,r8,r10
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// stw r10,1488(r31)
	REX_STORE_U32(r31.u32 + 1488, ctx.r10.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x823f8dd0
	goto loc_823F8DD0;
loc_823F8DBC:
	// lwz r10,1468(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1468);
	// lwz r9,1464(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1464);
	// lwz r11,1480(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1480);
	// stw r10,1472(r31)
	REX_STORE_U32(r31.u32 + 1472, ctx.r10.u32);
	// stw r9,1488(r31)
	REX_STORE_U32(r31.u32 + 1488, ctx.r9.u32);
loc_823F8DD0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,1376(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1376);
	// stw r11,1484(r31)
	REX_STORE_U32(r31.u32 + 1484, ctx.r11.u32);
	// rlwinm. r10,r8,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r11,1561(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1561);
	// beq 0x823f8df8
	if (ctx.cr0.eq) goto loc_823F8DF8;
	// lbz r10,1559(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 1559);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x823f8df8
	if (!ctx.cr6.lt) goto loc_823F8DF8;
	// li r11,8
	ctx.r11.s64 = 8;
loc_823F8DF8:
	// rlwinm. r10,r8,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823f8e6c
	if (ctx.cr0.eq) goto loc_823F8E6C;
	// lbz r10,1558(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 1558);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x823f8e24
	if (!ctx.cr6.eq) goto loc_823F8E24;
	// lhz r11,1546(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 1546);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// b 0x823f8e6c
	goto loc_823F8E6C;
loc_823F8E24:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823f8e4c
	if (!ctx.cr6.eq) goto loc_823F8E4C;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x823f8e38
	if (!ctx.cr6.lt) goto loc_823F8E38;
	// li r11,8
	ctx.r11.s64 = 8;
loc_823F8E38:
	// lhz r10,1546(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 1546);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x823f8e6c
	if (ctx.cr0.eq) goto loc_823F8E6C;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x823f8e6c
	goto loc_823F8E6C;
loc_823F8E4C:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x823f8e6c
	if (!ctx.cr6.eq) goto loc_823F8E6C;
	// lhz r10,1546(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 1546);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x823f8e6c
	if (ctx.cr0.eq) goto loc_823F8E6C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,3
	ctx.r10.s64 = 3;
	// divw r11,r11,r10
	ctx.r11.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
loc_823F8E6C:
	// rlwinm. r10,r8,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823f8eb8
	if (ctx.cr0.eq) goto loc_823F8EB8;
	// lbz r10,1558(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 1558);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x823f8e98
	if (ctx.cr6.eq) goto loc_823F8E98;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823f8ea0
	if (!ctx.cr6.eq) goto loc_823F8EA0;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x823f8e98
	if (ctx.cr6.gt) goto loc_823F8E98;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x823f8eb8
	goto loc_823F8EB8;
loc_823F8E98:
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x823f8eb8
	goto loc_823F8EB8;
loc_823F8EA0:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x823f8eb8
	if (!ctx.cr6.eq) goto loc_823F8EB8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// li r11,32
	ctx.r11.s64 = 32;
	// ble cr6,0x823f8eb8
	if (!ctx.cr6.gt) goto loc_823F8EB8;
	// li r11,64
	ctx.r11.s64 = 64;
loc_823F8EB8:
	// addi r10,r9,7
	ctx.r10.s64 = ctx.r9.s64 + 7;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// rlwinm r8,r10,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// srawi r10,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x823f45f0
	ctx.lr = 0x823F8EE4;
	sub_823F45F0(ctx, base);
	// stw r3,1500(r31)
	REX_STORE_U32(r31.u32 + 1500, ctx.r3.u32);
	// lwz r11,1480(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1480);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x823f45f0
	ctx.lr = 0x823F8EF8;
	sub_823F45F0(ctx, base);
	// stw r3,1496(r31)
	REX_STORE_U32(r31.u32 + 1496, ctx.r3.u32);
	// lwz r11,1480(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1480);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f4698
	ctx.lr = 0x823F8F14;
	sub_823F4698(ctx, base);
	// lwz r11,1372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1372);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,1372(r31)
	REX_STORE_U32(r31.u32 + 1372, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_823FFAE0) {
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
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FFB10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32192
	ctx.r9.s64 = -2109734912;
	// stw r3,456(r30)
	REX_STORE_U32(r30.u32 + 456, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-2520
	ctx.r8.s64 = ctx.r9.s64 + -2520;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r7,120(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 120);
	// lwz r6,112(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 112);
	// mullw r5,r7,r6
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// stw r5,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// lwz r4,316(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 316);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x823ffb84
	if (!ctx.cr6.eq) goto loc_823FFB84;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// lis r10,-32192
	ctx.r10.s64 = -2109734912;
	// addi r9,r11,-2496
	ctx.r9.s64 = ctx.r11.s64 + -2496;
	// addi r8,r10,-1320
	ctx.r8.s64 = ctx.r10.s64 + -1320;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// rotlwi r5,r5,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r8,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823FFB7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// b 0x823ffba0
	goto loc_823FFBA0;
loc_823FFB84:
	// lis r10,-32192
	ctx.r10.s64 = -2109734912;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lis r9,-32192
	ctx.r9.s64 = -2109734912;
	// addi r8,r10,-2232
	ctx.r8.s64 = ctx.r10.s64 + -2232;
	// addi r7,r9,-2120
	ctx.r7.s64 = ctx.r9.s64 + -2120;
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// stw r7,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r7.u32);
loc_823FFBA0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ff508
	ctx.lr = 0x823FFBA8;
	sub_823FF508(ctx, base);
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

DEFINE_REX_FUNC(sub_82404C58) {
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
	ctx.lr = 0x82404C60;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// lwz r29,308(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r27,300(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r26,292(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// li r5,18
	ctx.r5.s64 = 18;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// not r28,r8
	r28.u64 = ~ctx.r8.u64;
	// stw r5,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// stw r29,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r29.u32);
	// li r25,0
	r25.s64 = 0;
	// stw r27,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r27.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r26,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r26.u32);
	// rlwinm r10,r30,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x1;
	// stw r25,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r25.u32);
	// clrlwi r9,r28,31
	ctx.r9.u64 = r28.u32 & 0x1;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x82404900
	ctx.lr = 0x82404CC8;
	sub_82404900(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82405BD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// vspltisw128 v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x0)));
	// li r10,16
	ctx.r10.s64 = 16;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// vupkd3d128 v63,v62,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v62.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v62.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v63 = vTemp;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// vupkd3d128 v61,v62,0
	vTemp.u32[0] = ctx.v62.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v62.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v62.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v62.u8[2] | 0x3F800000;
	ctx.v61 = vTemp;
	// addi r10,r10,16352
	ctx.r10.s64 = ctx.r10.s64 + 16352;
	// vspltw128 v8,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
loc_82405BFC:
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v13,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// lvx128 v7,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v60,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vrefp128 v0,v60
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v60.f32)));
	// vor128 v9,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// vor128 v10,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// vcmpeqfp128 v6,v60,v62
	simde_mm_store_ps(ctx.v6.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vnmsubfp v5,v9,v0,v8
	simde_mm_store_ps(ctx.v5.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v8.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v12,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vmaddfp v0,v0,v5,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v5,v10,v0,v8
	simde_mm_store_ps(ctx.v5.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v8.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v9,v0,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v5,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v11,v12,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v60,v63,v11
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vminfp128 v0,v60,v61
	simde_mm_store_ps(ctx.v0.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vsel v12,v0,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vperm128 v63,v63,v12,v7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// stvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82405bfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82405BFC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82409C98) {
	REX_FUNC_PROLOGUE();
	// b 0x824094f8
	sub_824094F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82409CA0) {
	REX_FUNC_PROLOGUE();
	// b 0x824098c8
	sub_824098C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82409E00) {
	REX_FUNC_PROLOGUE();
	// b 0x82409ca8
	sub_82409CA8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8240A328) {
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
	ctx.lr = 0x8240A330;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 31;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// xor r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 ^ ctx.r11.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// rlwinm r25,r5,16,16,31
	r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// subf r24,r11,r10
	r24.u64 = ctx.r10.u64 - ctx.r11.u64;
	// beq cr6,0x8240a4a4
	if (ctx.cr6.eq) goto loc_8240A4A4;
	// clrlwi. r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240a368
	if (!ctx.cr0.eq) goto loc_8240A368;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8240a4a4
	if (ctx.cr6.eq) goto loc_8240A4A4;
loc_8240A368:
	// subf r11,r29,r3
	ctx.r11.u64 = ctx.r3.u64 - r29.u64;
	// xor. r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8240a384
	if (!ctx.cr0.lt) goto loc_8240A384;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// b 0x8240a398
	goto loc_8240A398;
loc_8240A384:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// neg r26,r6
	r26.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// add r31,r11,r3
	r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r28,r11,r29
	r28.u64 = ctx.r11.u64 + r29.u64;
loc_8240A398:
	// bl 0x824d412c
	ctx.lr = 0x8240A39C;
	__imp__MmQueryAddressProtect(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8240a3b0
	if (ctx.cr0.eq) goto loc_8240A3B0;
	// rlwinm. r11,r3,0,21,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x600;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,1
	r27.s64 = 1;
	// beq 0x8240a3b4
	if (ctx.cr0.eq) goto loc_8240A3B4;
loc_8240A3B0:
	// li r27,0
	r27.s64 = 0;
loc_8240A3B4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824d412c
	ctx.lr = 0x8240A3BC;
	__imp__MmQueryAddressProtect(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8240a3d0
	if (ctx.cr0.eq) goto loc_8240A3D0;
	// rlwinm. r11,r3,0,21,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x600;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8240a3d4
	if (ctx.cr0.eq) goto loc_8240A3D4;
loc_8240A3D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8240A3D4:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x8240a47c
	if (ctx.cr6.eq) goto loc_8240A47C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240a47c
	if (ctx.cr6.eq) goto loc_8240A47C;
	// cmplwi cr6,r25,16
	ctx.cr6.compare<uint32_t>(r25.u32, 16, ctx.xer);
	// bgt cr6,0x8240a47c
	if (ctx.cr6.gt) goto loc_8240A47C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8240a47c
	if (ctx.cr6.eq) goto loc_8240A47C;
	// addi r11,r25,-1
	ctx.r11.s64 = r25.s64 + -1;
	// and. r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 & r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240a47c
	if (!ctx.cr0.eq) goto loc_8240A47C;
	// cmplw cr6,r24,r25
	ctx.cr6.compare<uint32_t>(r24.u32, r25.u32, ctx.xer);
	// bne cr6,0x8240a47c
	if (!ctx.cr6.eq) goto loc_8240A47C;
	// addi r11,r24,-1
	ctx.r11.s64 = r24.s64 + -1;
	// and. r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 & r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240a47c
	if (!ctx.cr0.eq) goto loc_8240A47C;
	// and. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240a47c
	if (!ctx.cr0.eq) goto loc_8240A47C;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// bne cr6,0x8240a43c
	if (!ctx.cr6.eq) goto loc_8240A43C;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240a0b0
	ctx.lr = 0x8240A438;
	sub_8240A0B0(ctx, base);
	// b 0x8240a4a4
	goto loc_8240A4A4;
loc_8240A43C:
	// subf r11,r28,r31
	ctx.r11.u64 = r31.u64 - r28.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// blt cr6,0x8240a47c
	if (ctx.cr6.lt) goto loc_8240A47C;
	// xor r11,r28,r31
	ctx.r11.u64 = r28.u64 ^ r31.u64;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240a47c
	if (!ctx.cr0.eq) goto loc_8240A47C;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409e08
	ctx.lr = 0x8240A478;
	sub_82409E08(ctx, base);
	// b 0x8240a4a4
	goto loc_8240A4A4;
loc_8240A47C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8240a4a4
	if (ctx.cr6.eq) goto loc_8240A4A4;
	// subf r29,r31,r28
	r29.u64 = r28.u64 - r31.u64;
loc_8240A488:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// add r4,r29,r31
	ctx.r4.u64 = r29.u64 + r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409ca8
	ctx.lr = 0x8240A498;
	sub_82409CA8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r31,r26,r31
	r31.u64 = r26.u64 + r31.u64;
	// bne 0x8240a488
	if (!ctx.cr0.eq) goto loc_8240A488;
loc_8240A4A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82412D18) {
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
	// addi r10,r4,3
	ctx.r10.s64 = ctx.r4.s64 + 3;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r30,r10,0,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82412d54
	if (!ctx.cr6.gt) goto loc_82412D54;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82422cf8
	ctx.lr = 0x82412D54;
	sub_82422CF8(ctx, base);
loc_82412D54:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lbz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 40);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// beq 0x82412da4
	if (ctx.cr0.eq) goto loc_82412DA4;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82412da4
	if (!ctx.cr6.lt) goto loc_82412DA4;
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + r30.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// stw r9,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// bge cr6,0x82412d94
	if (!ctx.cr6.lt) goto loc_82412D94;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// b 0x82412d98
	goto loc_82412D98;
loc_82412D94:
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_82412D98:
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
loc_82412DA4:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82412dbc
	if (ctx.cr6.lt) goto loc_82412DBC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82412DBC:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
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

DEFINE_REX_FUNC(sub_82415360) {
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
	// bl 0x822d4e78
	ctx.lr = 0x82415368;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f38
	ctx.lr = 0x82415370;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
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
	// beq cr6,0x8241539c
	if (ctx.cr6.eq) goto loc_8241539C;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x82415398;
	sub_82413040(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8241539C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824153b8
	if (ctx.cr6.eq) goto loc_824153B8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413dd0
	ctx.lr = 0x824153B4;
	sub_82413DD0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_824153B8:
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
	// bne 0x82415428
	if (!ctx.cr0.eq) goto loc_82415428;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x82415430
	goto loc_82415430;
loc_82415428:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_82415430:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82415448
	if (ctx.cr6.eq) goto loc_82415448;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x82415448;
	sub_823DC658(ctx, base);
loc_82415448:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824157c4
	if (!ctx.cr6.gt) goto loc_824157C4;
	// add r10,r30,r29
	ctx.r10.u64 = r30.u64 + r29.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f12,16288(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16288);
	ctx.f12.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// lfd f11,-9120(r10)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r10.u32 + -9120);
	// rlwinm r25,r30,1,0,30
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f13,-7224(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -7224);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f0,17176(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,9952(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 9952);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r30,r30,4,0,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f5,32280(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32280);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// subf r29,r25,r28
	r29.u64 = r28.u64 - r25.u64;
loc_824154AC:
	// add r10,r27,r11
	ctx.r10.u64 = r27.u64 + ctx.r11.u64;
	// lfsx f9,r27,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f29,f9
	ctx.f8.f64 = double(float(f29.f64 + ctx.f9.f64));
	// rlwinm r7,r26,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xC;
	// lwz r6,92(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f9,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f9,f31
	ctx.f6.f64 = double(float(ctx.f9.f64 + f31.f64));
	// fadds f4,f7,f30
	ctx.f4.f64 = double(float(ctx.f7.f64 + f30.f64));
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f9,f28
	ctx.f9.f64 = double(float(ctx.f9.f64 + f28.f64));
	// lfsx f3,r7,r24
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f7,f6,f5
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f6,f4,f5
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fadds f4,f9,f3
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// fadds f2,f8,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// fadds f1,f7,f3
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// fadds f3,f6,f3
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f3.f64));
	// fctiwz f4,f4
	ctx.f4.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f4,f2
	ctx.f4.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f4,f1
	ctx.f4.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// fctiwz f4,f3
	ctx.f4.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f4,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f4.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// beq cr6,0x824156dc
	if (ctx.cr6.eq) goto loc_824156DC;
	// extsw r28,r5
	r28.s64 = ctx.r5.s32;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// std r28,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r28.u64);
	// extsw r28,r4
	r28.s64 = ctx.r4.s32;
	// lfd f3,104(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r7,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// std r28,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r28.u64);
	// lfd f1,112(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// lfd f4,96(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fcfid f1,f1
	ctx.f1.f64 = double(ctx.f1.s64);
	// extsw r28,r6
	r28.s64 = ctx.r6.s32;
	// fcfid f3,f3
	ctx.f3.f64 = double(ctx.f3.s64);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// std r28,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, r28.u64);
	// lfs f2,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f7,f7,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f4.f64));
	// frsp f4,f1
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// fmuls f7,f7,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fsubs f6,f6,f4
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// frsp f4,f3
	ctx.f4.f64 = double(float(ctx.f3.f64));
	// fmadds f3,f7,f0,f2
	ctx.f3.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f2.f64)));
	// stfs f3,16(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fsubs f8,f8,f4
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f4.f64));
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// fmul f4,f7,f11
	ctx.f4.f64 = ctx.f7.f64 * ctx.f11.f64;
	// fmuls f6,f6,f10
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f8,f8,f10
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// frsp f31,f4
	f31.f64 = double(float(ctx.f4.f64));
	// lfs f4,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f4,f7,f13,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f4.f64)));
	// stfs f4,16(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f4,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f7,f7,f12,f4
	ctx.f7.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f4.f64)));
	// stfs f7,16(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f7,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f7,f6,f0,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f7.f64)));
	// stfs f7,20(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f7,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f7,f6,f13,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f7.f64)));
	// stfs f7,20(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f7,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f7,f6,f12,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f7.f64)));
	// stfs f7,20(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f7,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f7,f8,f0,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f7.f64)));
	// stfs f7,24(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f7,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmul f3,f6,f11
	ctx.f3.f64 = ctx.f6.f64 * ctx.f11.f64;
	// fmadds f7,f8,f13,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f7.f64)));
	// stfs f7,24(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfd f6,120(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f7,f6
	ctx.f7.f64 = double(ctx.f6.s64);
	// lfs f6,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// frsp f30,f3
	f30.f64 = double(float(ctx.f3.f64));
	// fmadds f6,f8,f12,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f6.f64)));
	// stfs f6,24(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// fmul f8,f8,f11
	ctx.f8.f64 = ctx.f8.f64 * ctx.f11.f64;
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fsubs f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lfs f6,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// frsp f29,f8
	f29.f64 = double(float(ctx.f8.f64));
	// addi r7,r10,28
	ctx.r7.s64 = ctx.r10.s64 + 28;
	// fmadds f8,f9,f0,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f6.f64)));
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
	// fmadds f8,f9,f13,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f8.f64)));
	// fmul f7,f9,f11
	ctx.f7.f64 = ctx.f9.f64 * ctx.f11.f64;
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
	// fmadds f9,f9,f12,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f8.f64)));
	// stfs f9,28(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// frsp f28,f7
	f28.f64 = double(float(ctx.f7.f64));
	// addi r7,r10,28
	ctx.r7.s64 = ctx.r10.s64 + 28;
loc_824156DC:
	// cmpwi cr6,r3,31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 31, ctx.xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// blt cr6,0x824156ec
	if (ctx.cr6.lt) goto loc_824156EC;
	// li r10,31
	ctx.r10.s64 = 31;
loc_824156EC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82415704
	if (!ctx.cr6.gt) goto loc_82415704;
	// cmpwi cr6,r3,31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 31, ctx.xer);
	// blt cr6,0x82415708
	if (ctx.cr6.lt) goto loc_82415708;
	// li r3,31
	ctx.r3.s64 = 31;
	// b 0x82415708
	goto loc_82415708;
loc_82415704:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82415708:
	// cmpwi cr6,r4,31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 31, ctx.xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt cr6,0x82415718
	if (ctx.cr6.lt) goto loc_82415718;
	// li r10,31
	ctx.r10.s64 = 31;
loc_82415718:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82415730
	if (!ctx.cr6.gt) goto loc_82415730;
	// cmpwi cr6,r4,31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 31, ctx.xer);
	// blt cr6,0x82415734
	if (ctx.cr6.lt) goto loc_82415734;
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x82415734
	goto loc_82415734;
loc_82415730:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82415734:
	// cmpwi cr6,r5,31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 31, ctx.xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// blt cr6,0x82415744
	if (ctx.cr6.lt) goto loc_82415744;
	// li r10,31
	ctx.r10.s64 = 31;
loc_82415744:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8241575c
	if (!ctx.cr6.gt) goto loc_8241575C;
	// cmpwi cr6,r5,31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 31, ctx.xer);
	// blt cr6,0x82415760
	if (ctx.cr6.lt) goto loc_82415760;
	// li r5,31
	ctx.r5.s64 = 31;
	// b 0x82415760
	goto loc_82415760;
loc_8241575C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82415760:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// blt cr6,0x82415770
	if (ctx.cr6.lt) goto loc_82415770;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82415770:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82415788
	if (!ctx.cr6.gt) goto loc_82415788;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// blt cr6,0x8241578c
	if (ctx.cr6.lt) goto loc_8241578C;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8241578c
	goto loc_8241578C;
loc_82415788:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8241578C:
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// or r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 | ctx.r3.u64;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r30,r9
	ctx.r9.u64 = r30.u64 + ctx.r9.u64;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// add r8,r30,r8
	ctx.r8.u64 = r30.u64 + ctx.r8.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// sthux r10,r29,r25
	ea = r29.u32 + r25.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	r29.u32 = ea;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824154ac
	if (ctx.cr6.lt) goto loc_824154AC;
loc_824157C4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f84
	ctx.lr = 0x824157D0;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82422138) {
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
	ctx.lr = 0x82422140;
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
	// bne cr6,0x82422180
	if (!ctx.cr6.eq) goto loc_82422180;
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
	// li r7,447
	ctx.r7.s64 = 447;
	// bl 0x8240e308
	ctx.lr = 0x82422180;
	sub_8240E308(ctx, base);
loc_82422180:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e880
	ctx.lr = 0x82422190;
	sub_8240E880(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x824221f8
	if (!ctx.cr6.eq) goto loc_824221F8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824221b4
	if (ctx.cr6.eq) goto loc_824221B4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8240e930
	ctx.lr = 0x824221B4;
	sub_8240E930(ctx, base);
loc_824221B4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824221f0
	if (ctx.cr6.eq) goto loc_824221F0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824221f0
	if (ctx.cr6.eq) goto loc_824221F0;
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
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,105
	ctx.r6.s64 = 105;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,420(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 420);
	// bctrl 
	ctx.lr = 0x824221F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824221F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82422254
	goto loc_82422254;
loc_824221F8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82422214
	if (ctx.cr6.eq) goto loc_82422214;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8240e930
	ctx.lr = 0x82422214;
	sub_8240E930(ctx, base);
loc_82422214:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82422250
	if (ctx.cr6.eq) goto loc_82422250;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82422250
	if (ctx.cr6.eq) goto loc_82422250;
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
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,105
	ctx.r6.s64 = 105;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,420(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 420);
	// bctrl 
	ctx.lr = 0x82422250;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82422250:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82422254:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_824281C8) {
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
	// bl 0x82427100
	ctx.lr = 0x824281E8;
	sub_82427100(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-5908
	ctx.r11.s64 = ctx.r11.s64 + -5908;
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

DEFINE_REX_FUNC(sub_82428C60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82428C68;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82428a88
	ctx.lr = 0x82428C80;
	sub_82428A88(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r31,1
	r31.s64 = 1;
	// addi r11,r11,-3504
	ctx.r11.s64 = ctx.r11.s64 + -3504;
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// ori r11,r11,18
	ctx.r11.u64 = ctx.r11.u64 | 18;
	// stw r11,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// lwz r3,2736(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 2736);
	// bl 0x824228e0
	ctx.lr = 0x82428CAC;
	sub_824228E0(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r11.u32);
	// stw r31,20(r30)
	REX_STORE_U32(r30.u32 + 20, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82429878) {
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
	// bl 0x82412d18
	ctx.lr = 0x824298A0;
	sub_82412D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// beq 0x824298d8
	if (ctx.cr0.eq) goto loc_824298D8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,126
	ctx.r4.s64 = 126;
	// bl 0x82428a88
	ctx.lr = 0x824298BC;
	sub_82428A88(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-2800
	ctx.r10.s64 = ctx.r10.s64 + -2800;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// b 0x824298dc
	goto loc_824298DC;
loc_824298D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824298DC:
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

DEFINE_REX_FUNC(sub_8242BC70) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lis r12,-3856
	ctx.r12.s64 = -252706816;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// and r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ctx.r10.u64;
	// ori r12,r12,61680
	ctx.r12.u64 = ctx.r12.u64 | 61680;
	// rlwinm r6,r8,0,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF0000;
	// rlwinm r5,r8,0,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// addic r4,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r4.s64 = ctx.r6.s64 + -1;
	// rlwinm r5,r5,0,16,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF;
	// subfe r6,r4,r6
	temp.u8 = (~ctx.r4.u32 + ctx.r6.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r4.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r4,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// and r3,r8,r12
	ctx.r3.u64 = ctx.r8.u64 & ctx.r12.u64;
	// lis r12,-13108
	ctx.r12.s64 = -859045888;
	// subfe r5,r4,r5
	temp.u8 = (~ctx.r4.u32 + ctx.r5.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r4.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addic r4,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// ori r12,r12,52428
	ctx.r12.u64 = ctx.r12.u64 | 52428;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// subfe r5,r4,r3
	temp.u8 = (~ctx.r4.u32 + ctx.r3.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r4.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r8,r12
	ctx.r4.u64 = ctx.r8.u64 & ctx.r12.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r12,-21846
	ctx.r12.s64 = -1431699456;
	// addic r3,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// ori r12,r12,43690
	ctx.r12.u64 = ctx.r12.u64 | 43690;
	// subfe r5,r3,r4
	temp.u8 = (~ctx.r3.u32 + ctx.r4.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r3.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r8,r12
	ctx.r4.u64 = ctx.r8.u64 & ctx.r12.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addic r3,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// subfe r5,r3,r4
	temp.u8 = (~ctx.r3.u32 + ctx.r4.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r3.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// or r8,r6,r5
	ctx.r8.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8242F840) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,32(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f13,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// bne cr6,0x8242f930
	if (!ctx.cr6.eq) goto loc_8242F930;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r9,r11,216
	ctx.r9.s64 = ctx.r11.s64 + 216;
	// li r8,48
	ctx.r8.s64 = 48;
loc_8242F88C:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// dcbt r10,r8
	// dcbt r0,r9
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8242f8f0
	if (ctx.cr6.eq) goto loc_8242F8F0;
	// lfs f7,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f0,f13,f7
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f7.f64)));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f5,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f5.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f4,f0,f12,f5
	ctx.f4.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f5.f64)));
	// stfs f4,0(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f3,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f3.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f2,f0,f11,f3
	ctx.f2.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f3.f64)));
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f7,f0,f10,f1
	ctx.f7.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f1.f64)));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f6,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f6.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f5,f0,f9,f6
	ctx.f5.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f6.f64)));
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f4,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f4.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f3,f0,f8,f4
	ctx.f3.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, ctx.f4.f64)));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x8242f920
	goto loc_8242F920;
loc_8242F8F0:
	// fmuls f7,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f6,f0,f12
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfsu f6,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f5,f0,f11
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfsu f5,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f4,f0,f10
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfsu f4,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f3,f0,f9
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfsu f3,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f2,f0,f8
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfsu f2,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
loc_8242F920:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,216
	ctx.r9.s64 = ctx.r11.s64 + 216;
	// bdnz 0x8242f88c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242F88C;
	// blr 
	return;
loc_8242F930:
	// lfs f7,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f6,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r9,r11,216
	ctx.r9.s64 = ctx.r11.s64 + 216;
	// li r8,48
	ctx.r8.s64 = 48;
loc_8242F95C:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// dcbt r10,r8
	// dcbt r0,r9
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8242f9c0
	if (ctx.cr6.eq) goto loc_8242F9C0;
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f1,f0,f13,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f1.f64)));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f1,f0,f12,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f1.f64)));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f1,f0,f11,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f1.f64)));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f1,f0,f10,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f1.f64)));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f1,f0,f9,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f1.f64)));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f0,f0,f8,f1
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, ctx.f1.f64)));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x8242f9f0
	goto loc_8242F9F0;
loc_8242F9C0:
	// fmuls f1,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f1,f0,f11
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f1,f0,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f1,f0,f9
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
loc_8242F9F0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fadds f13,f7,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// fadds f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// addi r9,r11,216
	ctx.r9.s64 = ctx.r11.s64 + 216;
	// fadds f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fadds f10,f4,f10
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// fadds f9,f3,f9
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// fadds f8,f2,f8
	ctx.f8.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// bdnz 0x8242f95c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242F95C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824396C0) {
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
	// bl 0x82435c70
	ctx.lr = 0x824396D8;
	sub_82435C70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,492(r31)
	REX_STORE_U32(r31.u32 + 492, ctx.r11.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// stw r11,496(r31)
	REX_STORE_U32(r31.u32 + 496, ctx.r11.u32);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// stw r11,512(r31)
	REX_STORE_U32(r31.u32 + 512, ctx.r11.u32);
	// addi r10,r31,544
	ctx.r10.s64 = r31.s64 + 544;
	// stw r11,516(r31)
	REX_STORE_U32(r31.u32 + 516, ctx.r11.u32);
	// addi r9,r9,10432
	ctx.r9.s64 = ctx.r9.s64 + 10432;
	// stw r11,520(r31)
	REX_STORE_U32(r31.u32 + 520, ctx.r11.u32);
	// addi r6,r8,10560
	ctx.r6.s64 = ctx.r8.s64 + 10560;
	// stw r11,524(r31)
	REX_STORE_U32(r31.u32 + 524, ctx.r11.u32);
	// addi r7,r7,10384
	ctx.r7.s64 = ctx.r7.s64 + 10384;
	// stw r11,528(r31)
	REX_STORE_U32(r31.u32 + 528, ctx.r11.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r11,532(r31)
	REX_STORE_U32(r31.u32 + 532, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r6,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r7.u32);
	// stw r11,536(r31)
	REX_STORE_U32(r31.u32 + 536, ctx.r11.u32);
	// stw r11,540(r31)
	REX_STORE_U32(r31.u32 + 540, ctx.r11.u32);
	// stw r11,544(r31)
	REX_STORE_U32(r31.u32 + 544, ctx.r11.u32);
	// stw r10,548(r31)
	REX_STORE_U32(r31.u32 + 548, ctx.r10.u32);
	// addi r10,r31,584
	ctx.r10.s64 = r31.s64 + 584;
	// stw r11,568(r31)
	REX_STORE_U32(r31.u32 + 568, ctx.r11.u32);
	// stw r11,572(r31)
	REX_STORE_U32(r31.u32 + 572, ctx.r11.u32);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r11,576(r31)
	REX_STORE_U32(r31.u32 + 576, ctx.r11.u32);
	// stw r8,580(r31)
	REX_STORE_U32(r31.u32 + 580, ctx.r8.u32);
	// stw r11,552(r31)
	REX_STORE_U32(r31.u32 + 552, ctx.r11.u32);
	// lwz r7,544(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 544);
	// lwz r10,548(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 548);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r10,544(r31)
	REX_STORE_U32(r31.u32 + 544, ctx.r10.u32);
	// stw r11,584(r31)
	REX_STORE_U32(r31.u32 + 584, ctx.r11.u32);
	// stw r11,608(r31)
	REX_STORE_U32(r31.u32 + 608, ctx.r11.u32);
	// stw r11,612(r31)
	REX_STORE_U32(r31.u32 + 612, ctx.r11.u32);
	// stw r11,616(r31)
	REX_STORE_U32(r31.u32 + 616, ctx.r11.u32);
	// stw r9,588(r31)
	REX_STORE_U32(r31.u32 + 588, ctx.r9.u32);
	// stw r8,620(r31)
	REX_STORE_U32(r31.u32 + 620, ctx.r8.u32);
	// stw r11,592(r31)
	REX_STORE_U32(r31.u32 + 592, ctx.r11.u32);
	// lwz r10,584(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 584);
	// lwz r11,588(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 588);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,584(r31)
	REX_STORE_U32(r31.u32 + 584, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8243C8C8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82443cd0
	sub_82443CD0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8243C910) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82435d80
	sub_82435D80(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8243CBF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243D078) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-36
	ctx.r3.s64 = ctx.r3.s64 + -36;
	// b 0x8243cea8
	sub_8243CEA8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8243D4C0) {
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
	// bl 0x8242a3f8
	ctx.lr = 0x8243D4DC;
	sub_8242A3F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// li r30,0
	r30.s64 = 0;
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// lfs f0,92(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8243d508
	if (!ctx.cr6.lt) goto loc_8243D508;
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
loc_8243D508:
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8243d51c
	if (!ctx.cr6.gt) goto loc_8243D51C;
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
loc_8243D51C:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8243d530
	if (ctx.cr6.eq) goto loc_8243D530;
	// bl 0x82473600
	ctx.lr = 0x8243D52C;
	sub_82473600(ctx, base);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
loc_8243D530:
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x822d5870
	ctx.lr = 0x8243D540;
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

DEFINE_REX_FUNC(sub_82440270) {
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
	// bl 0x82440210
	ctx.lr = 0x82440290;
	sub_82440210(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824402a0
	if (ctx.cr0.eq) goto loc_824402A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x824402A0;
	sub_82473600(ctx, base);
loc_824402A0:
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

DEFINE_REX_FUNC(sub_824412C0) {
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
	// bl 0x823cd280
	ctx.lr = 0x824412D8;
	sub_823CD280(ctx, base);
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 60);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8244130c
	if (ctx.cr6.eq) goto loc_8244130C;
	// lwz r8,56(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r11,0
	ctx.r11.s64 = 0;
loc_824412F0:
	// lwzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82441324
	if (ctx.cr6.eq) goto loc_82441324;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824412f0
	if (ctx.cr6.lt) goto loc_824412F0;
loc_8244130C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82441310:
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
loc_82441324:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82441310
	goto loc_82441310;
}

DEFINE_REX_FUNC(sub_82442808) {
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
	ctx.lr = 0x82442810;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,-4
	r30.s64 = ctx.r3.s64 + -4;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x824423f0
	ctx.lr = 0x82442834;
	sub_824423F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824428a0
	if (ctx.cr0.lt) goto loc_824428A0;
	// lwz r10,68(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 68);
	// lwz r11,164(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8244286c
	if (ctx.cr6.eq) goto loc_8244286C;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82442864
	if (!ctx.cr6.eq) goto loc_82442864;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_82442864:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245f448
	ctx.lr = 0x8244286C;
	sub_8245F448(ctx, base);
loc_8244286C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824428a0
	if (ctx.cr6.lt) goto loc_824428A0;
	// lwz r11,68(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 68);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8244289c
	if (ctx.cr6.eq) goto loc_8244289C;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// bl 0x82441dd0
	ctx.lr = 0x82442898;
	sub_82441DD0(ctx, base);
	// b 0x824428a0
	goto loc_824428A0;
loc_8244289C:
	// bl 0x82441200
	ctx.lr = 0x824428A0;
	sub_82441200(ctx, base);
loc_824428A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82444120) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// b 0x82444154
	goto loc_82444154;
loc_8244412C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82444144
	if (ctx.cr6.eq) goto loc_82444144;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82444148
	goto loc_82444148;
loc_82444144:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82444148:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82444160
	if (ctx.cr6.eq) goto loc_82444160;
loc_82444154:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244412c
	if (!ctx.cr6.eq) goto loc_8244412C;
	// blr 
	return;
loc_82444160:
	// lwz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f0,112(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82434bc0
	sub_82434BC0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824490F0) {
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
	// bl 0x822d4e5c
	ctx.lr = 0x824490F8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// sth r10,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// sth r10,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8244915c
	if (ctx.cr6.eq) goto loc_8244915C;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// bgt cr6,0x8244915c
	if (ctx.cr6.gt) goto loc_8244915C;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x8244915c
	if (ctx.cr6.lt) goto loc_8244915C;
	// cmpwi cr6,r5,32
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 32, ctx.xer);
	// bgt cr6,0x8244915c
	if (ctx.cr6.gt) goto loc_8244915C;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// blt cr6,0x8244915c
	if (ctx.cr6.lt) goto loc_8244915C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8244915c
	if (ctx.cr6.eq) goto loc_8244915C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8244916c
	if (!ctx.cr6.eq) goto loc_8244916C;
loc_8244915C:
	// lis r28,-32764
	r28.s64 = -2147221504;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eac
	return;
loc_8244916C:
	// rlwinm r10,r25,0,0,20
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFF800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8244915c
	if (!ctx.cr6.eq) goto loc_8244915C;
	// rlwinm r10,r24,0,0,20
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xFFFFF800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8244915c
	if (!ctx.cr6.eq) goto loc_8244915C;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_824491A8:
	// and r31,r11,r25
	r31.u64 = ctx.r11.u64 & r25.u64;
	// and r30,r11,r24
	r30.u64 = ctx.r11.u64 & r24.u64;
	// addic r29,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r29.s64 = r31.s64 + -1;
	// rlwinm r28,r11,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subfe r11,r29,r31
	temp.u8 = (~r29.u32 + r31.u32 < ~r29.u32) | (~r29.u32 + r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~r29.u64 + r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r31,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r31.s64 = r30.s64 + -1;
	// and r29,r28,r25
	r29.u64 = r28.u64 & r25.u64;
	// subfe r31,r31,r30
	temp.u8 = (~r31.u32 + r30.u32 < ~r31.u32) | (~r31.u32 + r30.u32 + ctx.xer.ca < ctx.xer.ca);
	r31.u64 = ~r31.u64 + r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r30,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r30.s64 = r29.s64 + -1;
	// and r27,r28,r24
	r27.u64 = r28.u64 & r24.u64;
	// rlwinm r28,r28,1,0,30
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// subfe r30,r30,r29
	temp.u8 = (~r30.u32 + r29.u32 < ~r30.u32) | (~r30.u32 + r29.u32 + ctx.xer.ca < ctx.xer.ca);
	r30.u64 = ~r30.u64 + r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r29,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r29.s64 = r27.s64 + -1;
	// and r26,r28,r25
	r26.u64 = r28.u64 & r25.u64;
	// subfe r29,r29,r27
	temp.u8 = (~r29.u32 + r27.u32 < ~r29.u32) | (~r29.u32 + r27.u32 + ctx.xer.ca < ctx.xer.ca);
	r29.u64 = ~r29.u64 + r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r27,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r27.s64 = r26.s64 + -1;
	// and r19,r28,r24
	r19.u64 = r28.u64 & r24.u64;
	// rlwinm r18,r28,1,0,30
	r18.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// subfe r28,r27,r26
	temp.u8 = (~r27.u32 + r26.u32 < ~r27.u32) | (~r27.u32 + r26.u32 + ctx.xer.ca < ctx.xer.ca);
	r28.u64 = ~r27.u64 + r26.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r27,r19,-1
	ctx.xer.ca = r19.u32 > 0;
	r27.s64 = r19.s64 + -1;
	// and r26,r18,r25
	r26.u64 = r18.u64 & r25.u64;
	// subfe r27,r27,r19
	temp.u8 = (~r27.u32 + r19.u32 < ~r27.u32) | (~r27.u32 + r19.u32 + ctx.xer.ca < ctx.xer.ca);
	r27.u64 = ~r27.u64 + r19.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r19,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r19.s64 = r26.s64 + -1;
	// and r17,r18,r24
	r17.u64 = r18.u64 & r24.u64;
	// subfe r26,r19,r26
	temp.u8 = (~r19.u32 + r26.u32 < ~r19.u32) | (~r19.u32 + r26.u32 + ctx.xer.ca < ctx.xer.ca);
	r26.u64 = ~r19.u64 + r26.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r19,r17,-1
	ctx.xer.ca = r17.u32 > 0;
	r19.s64 = r17.s64 + -1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subfe r11,r19,r17
	temp.u8 = (~r19.u32 + r17.u32 < ~r19.u32) | (~r19.u32 + r17.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~r19.u64 + r17.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r9,r31,r9
	ctx.r9.u64 = r31.u64 + ctx.r9.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r8,r30,r8
	ctx.r8.u64 = r30.u64 + ctx.r8.u64;
	// add r7,r29,r7
	ctx.r7.u64 = r29.u64 + ctx.r7.u64;
	// add r6,r28,r6
	ctx.r6.u64 = r28.u64 + ctx.r6.u64;
	// add r5,r27,r5
	ctx.r5.u64 = r27.u64 + ctx.r5.u64;
	// add r4,r26,r4
	ctx.r4.u64 = r26.u64 + ctx.r4.u64;
	// rlwinm r11,r18,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// bdnz 0x824491a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824491A8;
	// add r11,r8,r6
	ctx.r11.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r21.s32, ctx.xer);
	// bne cr6,0x82449264
	if (!ctx.cr6.eq) goto loc_82449264;
	// cmpw cr6,r10,r22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r22.s32, ctx.xer);
	// beq cr6,0x82449278
	if (ctx.cr6.eq) goto loc_82449278;
loc_82449264:
	// lis r28,-32761
	r28.s64 = -2147024896;
	// ori r28,r28,87
	r28.u64 = r28.u64 | 87;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eac
	return;
loc_82449278:
	// rlwinm r11,r25,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x8;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82449294
	if (ctx.cr6.eq) goto loc_82449294;
	// rlwinm r4,r25,0,29,27
	ctx.r4.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r3,r21,-1
	ctx.r3.s64 = r21.s64 + -1;
loc_82449294:
	// rlwinm r11,r24,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x8;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824492b0
	if (ctx.cr6.eq) goto loc_824492B0;
	// rlwinm r6,r24,0,29,27
	ctx.r6.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r5,r22,-1
	ctx.r5.s64 = r22.s64 + -1;
loc_824492B0:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x8244915c
	if (ctx.cr6.lt) goto loc_8244915C;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// blt cr6,0x8244915c
	if (ctx.cr6.lt) goto loc_8244915C;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// bl 0x82448990
	ctx.lr = 0x824492C8;
	sub_82448990(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82449974
	if (ctx.cr6.lt) goto loc_82449974;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x82449360
	if (!ctx.cr6.gt) goto loc_82449360;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
loc_824492EC:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(r21.s32, 4, ctx.xer);
	// blt cr6,0x82449330
	if (ctx.cr6.lt) goto loc_82449330;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r6,r21,-3
	ctx.r6.s64 = r21.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82449304:
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f0,-4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + -4, temp.u32);
	// stfsx f0,r10,r8
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x82449304
	if (ctx.cr6.lt) goto loc_82449304;
loc_82449330:
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r21.s32, ctx.xer);
	// bge cr6,0x82449354
	if (!ctx.cr6.lt) goto loc_82449354;
	// subf r8,r9,r21
	ctx.r8.u64 = r21.u64 - ctx.r9.u64;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82449348:
	// stfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82449348
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82449348;
loc_82449354:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x824492ec
	if (!ctx.cr0.eq) goto loc_824492EC;
loc_82449360:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823177a0
	ctx.lr = 0x82449370;
	sub_823177A0(ctx, base);
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823177a0
	ctx.lr = 0x82449380;
	sub_823177A0(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r9,82(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x824495e0
	if (ctx.cr6.eq) goto loc_824495E0;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824495d8
	if (ctx.cr6.eq) goto loc_824495D8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	r31.s64 = 0;
	// lwzx r7,r11,r20
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// lfs f0,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r7,r8
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, temp.u32);
	// lhz r6,82(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824494c0
	if (!ctx.cr6.gt) goto loc_824494C0;
	// li r5,0
	ctx.r5.s64 = 0;
loc_824493D0:
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82449410
	if (!ctx.cr6.gt) goto loc_82449410;
	// lwzx r8,r5,r20
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_824493EC:
	// lwzx r9,r5,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r8,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// lhz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x824493ec
	if (ctx.cr6.lt) goto loc_824493EC;
loc_82449410:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r21.s32, ctx.xer);
	// bge cr6,0x824494a8
	if (!ctx.cr6.lt) goto loc_824494A8;
	// subf r11,r10,r21
	ctx.r11.u64 = r21.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82449478
	if (ctx.cr6.lt) goto loc_82449478;
	// lwzx r9,r5,r20
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// addi r3,r21,-3
	ctx.r3.s64 = r21.s64 + -3;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82449434:
	// lwzx r7,r5,r23
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// add r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r30,r9,r8
	r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// lfs f0,-4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// lfsx f13,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r9,r8
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// lfsx f11,r8,r7
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r30)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// blt cr6,0x82449434
	if (ctx.cr6.lt) goto loc_82449434;
loc_82449478:
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r21.s32, ctx.xer);
	// bge cr6,0x824494a8
	if (!ctx.cr6.lt) goto loc_824494A8;
	// subf r8,r10,r21
	ctx.r8.u64 = r21.u64 - ctx.r10.u64;
	// lwzx r9,r5,r20
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82449490:
	// lwzx r10,r5,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82449490
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82449490;
loc_824494A8:
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824493d0
	if (ctx.cr6.lt) goto loc_824493D0;
loc_824494C0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// bge cr6,0x82449974
	if (!ctx.cr6.lt) goto loc_82449974;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r11,r22
	r30.u64 = r22.u64 - ctx.r11.u64;
loc_824494D4:
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8244951c
	if (!ctx.cr6.gt) goto loc_8244951C;
	// lwzx r7,r6,r20
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + r20.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r8,r6,r23
	ctx.r8.u64 = ctx.r6.u64 + r23.u64;
loc_824494F4:
	// lwz r9,-4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r6,r23
	ctx.r8.u64 = ctx.r6.u64 + r23.u64;
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r7,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// lhz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x824494f4
	if (ctx.cr6.lt) goto loc_824494F4;
loc_8244951C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r21.s32, ctx.xer);
	// bge cr6,0x824495c0
	if (!ctx.cr6.lt) goto loc_824495C0;
	// subf r11,r9,r21
	ctx.r11.u64 = r21.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8244958c
	if (ctx.cr6.lt) goto loc_8244958C;
	// lwzx r10,r6,r20
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + r20.u32);
	// addi r31,r21,-3
	r31.s64 = r21.s64 + -3;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r6,r23
	ctx.r4.u64 = ctx.r6.u64 + r23.u64;
loc_82449544:
	// lwz r7,-4(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + -4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r29,r10,r8
	r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// add r4,r6,r23
	ctx.r4.u64 = ctx.r6.u64 + r23.u64;
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r31.s32, ctx.xer);
	// lfs f0,-4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lfsx f13,r11,r7
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r10,r8
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// lfsx f11,r8,r7
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r29)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// blt cr6,0x82449544
	if (ctx.cr6.lt) goto loc_82449544;
loc_8244958C:
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r21.s32, ctx.xer);
	// bge cr6,0x824495c0
	if (!ctx.cr6.lt) goto loc_824495C0;
	// subf r10,r9,r21
	ctx.r10.u64 = r21.u64 - ctx.r9.u64;
	// lwzx r8,r6,r20
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + r20.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824495A4:
	// add r10,r6,r23
	ctx.r10.u64 = ctx.r6.u64 + r23.u64;
	// lwz r10,-4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r8,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824495a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824495A4;
loc_824495C0:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x824494d4
	if (!ctx.cr0.eq) goto loc_824494D4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eac
	return;
loc_824495D8:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82449764
	if (!ctx.cr6.eq) goto loc_82449764;
loc_824495E0:
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8244975c
	if (ctx.cr6.eq) goto loc_8244975C;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8244969c
	if (!ctx.cr6.gt) goto loc_8244969C;
	// li r5,0
	ctx.r5.s64 = 0;
loc_824495FC:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(r21.s32, 4, ctx.xer);
	// blt cr6,0x82449658
	if (ctx.cr6.lt) goto loc_82449658;
	// lwzx r9,r5,r20
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// addi r31,r21,-3
	r31.s64 = r21.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82449614:
	// lwzx r10,r5,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r8,-4
	ctx.r6.s64 = ctx.r8.s64 + -4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f13,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r31.s32, ctx.xer);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfsx f12,r6,r10
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r9,r6
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// lfsx f11,r8,r10
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r9,r8
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x82449614
	if (ctx.cr6.lt) goto loc_82449614;
loc_82449658:
	// cmpw cr6,r7,r21
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r21.s32, ctx.xer);
	// bge cr6,0x82449684
	if (!ctx.cr6.lt) goto loc_82449684;
	// subf r9,r7,r21
	ctx.r9.u64 = r21.u64 - ctx.r7.u64;
	// lwzx r10,r5,r20
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82449670:
	// lwzx r9,r5,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82449670
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82449670;
loc_82449684:
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824495fc
	if (ctx.cr6.lt) goto loc_824495FC;
loc_8244969C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// bge cr6,0x82449974
	if (!ctx.cr6.lt) goto loc_82449974;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r29,r11,r22
	r29.u64 = r22.u64 - ctx.r11.u64;
loc_824496B0:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(r21.s32, 4, ctx.xer);
	// blt cr6,0x82449714
	if (ctx.cr6.lt) goto loc_82449714;
	// lwzx r9,r5,r20
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// addi r30,r21,-3
	r30.s64 = r21.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r4,r5,r23
	ctx.r4.u64 = ctx.r5.u64 + r23.u64;
loc_824496CC:
	// lwz r10,-4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + -4);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r8,-4
	ctx.r6.s64 = ctx.r8.s64 + -4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r4,r5,r23
	ctx.r4.u64 = ctx.r5.u64 + r23.u64;
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r30.s32, ctx.xer);
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfsx f12,r10,r6
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r9,r6
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// lfsx f11,r10,r8
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r9,r8
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x824496cc
	if (ctx.cr6.lt) goto loc_824496CC;
loc_82449714:
	// cmpw cr6,r7,r21
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r21.s32, ctx.xer);
	// bge cr6,0x82449744
	if (!ctx.cr6.lt) goto loc_82449744;
	// subf r9,r7,r21
	ctx.r9.u64 = r21.u64 - ctx.r7.u64;
	// lwzx r10,r5,r20
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8244972C:
	// add r9,r5,r23
	ctx.r9.u64 = ctx.r5.u64 + r23.u64;
	// lwz r8,-4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// lfsx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8244972c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8244972C;
loc_82449744:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x824496b0
	if (!ctx.cr0.eq) goto loc_824496B0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eac
	return;
loc_8244975C:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x824498d0
	if (ctx.cr6.eq) goto loc_824498D0;
loc_82449764:
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x824498d0
	if (!ctx.cr6.eq) goto loc_824498D0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x82449974
	if (!ctx.cr6.gt) goto loc_82449974;
	// extsw r11,r22
	ctx.r11.s64 = r22.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r22
	r31.u64 = r22.u64;
	// lfs f12,16308(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16308);
	ctx.f12.f64 = double(temp.f32);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// fadds f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fdivs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
loc_824497A4:
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824497ec
	if (!ctx.cr6.gt) goto loc_824497EC;
	// lwzx r8,r5,r20
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_824497C0:
	// lwzx r9,r5,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f11,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fdivs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// stfsx f9,r8,r11
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// lhz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x824497c0
	if (ctx.cr6.lt) goto loc_824497C0;
loc_824497EC:
	// lwzx r10,r5,r20
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f12,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// lhz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r21.s32, ctx.xer);
	// bge cr6,0x824498b8
	if (!ctx.cr6.lt) goto loc_824498B8;
	// subf r11,r9,r21
	ctx.r11.u64 = r21.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82449884
	if (ctx.cr6.lt) goto loc_82449884;
	// addi r3,r21,-3
	ctx.r3.s64 = r21.s64 + -3;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82449820:
	// lwzx r7,r5,r23
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// add r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r30,r10,r8
	r30.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// lfs f11,-4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fdivs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// stfsx f9,r10,r11
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lfsx f8,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// fmuls f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fdivs f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 / ctx.f13.f64));
	// stfs f6,4(r4)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f5,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fdivs f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 / ctx.f13.f64));
	// stfsx f3,r10,r8
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// lfsx f2,r7,r8
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fdivs f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 / ctx.f13.f64));
	// stfs f11,4(r30)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// blt cr6,0x82449820
	if (ctx.cr6.lt) goto loc_82449820;
loc_82449884:
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r21.s32, ctx.xer);
	// bge cr6,0x824498b8
	if (!ctx.cr6.lt) goto loc_824498B8;
	// subf r8,r9,r21
	ctx.r8.u64 = r21.u64 - ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82449898:
	// lwzx r9,r5,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f11,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fdivs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// stfsx f9,r10,r11
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82449898
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82449898;
loc_824498B8:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x824497a4
	if (!ctx.cr0.eq) goto loc_824497A4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eac
	return;
loc_824498D0:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x82449974
	if (!ctx.cr6.gt) goto loc_82449974;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_824498E0:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(r21.s32, 4, ctx.xer);
	// blt cr6,0x8244993c
	if (ctx.cr6.lt) goto loc_8244993C;
	// lwzx r9,r5,r20
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// addi r31,r21,-3
	r31.s64 = r21.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824498F8:
	// lwzx r10,r5,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r8,-4
	ctx.r6.s64 = ctx.r8.s64 + -4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r31.s32, ctx.xer);
	// lfs f13,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfsx f12,r10,r6
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r9,r6
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// lfsx f11,r10,r8
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r9,r8
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x824498f8
	if (ctx.cr6.lt) goto loc_824498F8;
loc_8244993C:
	// cmpw cr6,r7,r21
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r21.s32, ctx.xer);
	// bge cr6,0x82449968
	if (!ctx.cr6.lt) goto loc_82449968;
	// subf r9,r7,r21
	ctx.r9.u64 = r21.u64 - ctx.r7.u64;
	// lwzx r10,r5,r20
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82449954:
	// lwzx r9,r5,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82449954
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82449954;
loc_82449968:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x824498e0
	if (!ctx.cr0.eq) goto loc_824498E0;
loc_82449974:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eac
	return;
}

DEFINE_REX_FUNC(sub_824737A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x824737A8;
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x82475e70
	ctx.lr = 0x824737C4;
	sub_82475E70(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r28,108(r31)
	REX_STORE_U32(r31.u32 + 108, r28.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,116(r31)
	REX_STORE_U32(r31.u32 + 116, r30.u32);
	// addi r10,r10,3144
	ctx.r10.s64 = ctx.r10.s64 + 3144;
	// stw r29,128(r31)
	REX_STORE_U32(r31.u32 + 128, r29.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
	// stw r9,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r9.u32);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82474040) {
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
	ctx.lr = 0x82474048;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// bl 0x82475dd8
	ctx.lr = 0x82474068;
	sub_82475DD8(ctx, base);
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// ori r22,r11,14
	r22.u64 = ctx.r11.u64 | 14;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x824740c8
	if (ctx.cr6.eq) goto loc_824740C8;
loc_82474080:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt cr6,0x824740c8
	if (ctx.cr6.lt) goto loc_824740C8;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4);
	// bl 0x8245c3e0
	ctx.lr = 0x82474094;
	sub_8245C3E0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r28,16
	ctx.r3.s64 = r28.s64 + 16;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8245c5a8
	ctx.lr = 0x824740A4;
	sub_8245C5A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824741e4
	if (ctx.cr0.eq) goto loc_824741E4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r26,0
	r26.s64 = 0;
	// bl 0x82472fd0
	ctx.lr = 0x824740B8;
	sub_82472FD0(ctx, base);
loc_824740B8:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// blt cr6,0x82474080
	if (ctx.cr6.lt) goto loc_82474080;
loc_824740C8:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82474120
	if (ctx.cr6.eq) goto loc_82474120;
	// mr r31,r27
	r31.u64 = r27.u64;
loc_824740D8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt cr6,0x82474258
	if (ctx.cr6.lt) goto loc_82474258;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4);
	// bl 0x8245c3e0
	ctx.lr = 0x824740EC;
	sub_8245C3E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r28,56
	ctx.r3.s64 = r28.s64 + 56;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8245c5a8
	ctx.lr = 0x824740FC;
	sub_8245C5A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824741ec
	if (ctx.cr0.eq) goto loc_824741EC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r26,0
	r26.s64 = 0;
	// bl 0x82472fd0
	ctx.lr = 0x82474110;
	sub_82472FD0(ctx, base);
loc_82474110:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r23
	ctx.cr6.compare<uint32_t>(r29.u32, r23.u32, ctx.xer);
	// blt cr6,0x824740d8
	if (ctx.cr6.lt) goto loc_824740D8;
loc_82474120:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt cr6,0x82474258
	if (ctx.cr6.lt) goto loc_82474258;
	// rlwinm r11,r24,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 27) & 0x1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,120(r28)
	REX_STORE_U32(r28.u32 + 120, ctx.r11.u32);
	// bl 0x82473e20
	ctx.lr = 0x82474138;
	sub_82473E20(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt 0x82474258
	if (ctx.cr0.lt) goto loc_82474258;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// li r29,-1
	r29.s64 = -1;
	// ori r30,r11,65535
	r30.u64 = ctx.r11.u64 | 65535;
	// rlwinm r4,r25,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(r25.u32, r30.u32, ctx.xer);
	// ble cr6,0x8247415c
	if (!ctx.cr6.gt) goto loc_8247415C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_8247415C:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// addi r31,r11,7712
	r31.s64 = ctx.r11.s64 + 7712;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242c3b0
	ctx.lr = 0x82474178;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,108(r28)
	REX_STORE_U32(r28.u32 + 108, ctx.r3.u32);
	// beq 0x824741f4
	if (ctx.cr0.eq) goto loc_824741F4;
	// cmplw cr6,r23,r30
	ctx.cr6.compare<uint32_t>(r23.u32, r30.u32, ctx.xer);
	// rlwinm r4,r23,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82474194
	if (!ctx.cr6.gt) goto loc_82474194;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82474194:
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// bl 0x8242c3b0
	ctx.lr = 0x824741A8;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,112(r28)
	REX_STORE_U32(r28.u32 + 112, ctx.r3.u32);
	// beq 0x824741f4
	if (ctx.cr0.eq) goto loc_824741F4;
	// lwz r9,40(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 40);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82474214
	if (ctx.cr6.eq) goto loc_82474214;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
loc_824741CC:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824741fc
	if (ctx.cr6.eq) goto loc_824741FC;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82474200
	goto loc_82474200;
loc_824741E4:
	// mr r26,r22
	r26.u64 = r22.u64;
	// b 0x824740b8
	goto loc_824740B8;
loc_824741EC:
	// mr r26,r22
	r26.u64 = r22.u64;
	// b 0x82474110
	goto loc_82474110;
loc_824741F4:
	// mr r26,r22
	r26.u64 = r22.u64;
	// b 0x82474258
	goto loc_82474258;
loc_824741FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82474200:
	// lwz r8,108(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 108);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// stwx r11,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x824741cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824741CC;
loc_82474214:
	// lwz r9,80(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 80);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82474258
	if (ctx.cr6.eq) goto loc_82474258;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r23
	ctx.ctr.u64 = r23.u64;
loc_82474228:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82474240
	if (ctx.cr6.eq) goto loc_82474240;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82474244
	goto loc_82474244;
loc_82474240:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82474244:
	// lwz r8,112(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 112);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// stwx r11,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82474228
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82474228;
loc_82474258:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_8247D550) {
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
	ctx.lr = 0x8247D558;
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
	// bne 0x8247d594
	if (!ctx.cr0.eq) goto loc_8247D594;
loc_8247D57C:
	// bl 0x822db6c0
	ctx.lr = 0x8247D580;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x8247D58C;
	sub_822D6910(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8247d5dc
	goto loc_8247D5DC;
loc_8247D594:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x8247d5ac
	if (ctx.cr6.eq) goto loc_8247D5AC;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// beq cr6,0x8247d5ac
	if (ctx.cr6.eq) goto loc_8247D5AC;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// bne cr6,0x8247d57c
	if (!ctx.cr6.eq) goto loc_8247D57C;
loc_8247D5AC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822dcc80
	ctx.lr = 0x8247D5B4;
	sub_822DCC80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8247d480
	ctx.lr = 0x8247D5C8;
	sub_8247D480(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = r31.s64 + 128;
	// bl 0x8247d604
	ctx.lr = 0x8247D5D8;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_8247D604(ctx, base);
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
loc_8247D5DC:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8247F870) {
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
	ctx.lr = 0x8247F878;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	r23.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r27,r23
	r27.u64 = r23.u64;
	// bl 0x82480168
	ctx.lr = 0x8247F8A8;
	sub_82480168(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8247fd74
	if (!ctx.cr0.eq) goto loc_8247FD74;
	// rlwinm. r11,r21,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8247f8bc
	if (!ctx.cr0.eq) goto loc_8247F8BC;
	// li r27,-128
	r27.s64 = -128;
loc_8247F8BC:
	// clrlwi r11,r21,30
	ctx.r11.u64 = r21.u32 & 0x3;
	// lis r20,-16384
	r20.s64 = -1073741824;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8247f914
	if (ctx.cr6.lt) goto loc_8247F914;
	// beq cr6,0x8247f90c
	if (ctx.cr6.eq) goto loc_8247F90C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8247f904
	if (ctx.cr6.lt) goto loc_8247F904;
loc_8247F8D8:
	// bl 0x822db6f8
	ctx.lr = 0x8247F8DC;
	sub_822DB6F8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r23,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r23.u32);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// bl 0x822db6c0
	ctx.lr = 0x8247F8EC;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x8247F8F8;
	sub_822D6910(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
loc_8247F8FC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
loc_8247F904:
	// mr r25,r20
	r25.u64 = r20.u64;
	// b 0x8247f918
	goto loc_8247F918;
loc_8247F90C:
	// lis r25,16384
	r25.s64 = 1073741824;
	// b 0x8247f918
	goto loc_8247F918;
loc_8247F914:
	// lis r25,-32768
	r25.s64 = -2147483648;
loc_8247F918:
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(r31.s32, 16, ctx.xer);
	// beq cr6,0x8247f96c
	if (ctx.cr6.eq) goto loc_8247F96C;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(r31.s32, 32, ctx.xer);
	// beq cr6,0x8247f964
	if (ctx.cr6.eq) goto loc_8247F964;
	// cmpwi cr6,r31,48
	ctx.cr6.compare<int32_t>(r31.s32, 48, ctx.xer);
	// beq cr6,0x8247f95c
	if (ctx.cr6.eq) goto loc_8247F95C;
	// cmpwi cr6,r31,64
	ctx.cr6.compare<int32_t>(r31.s32, 64, ctx.xer);
	// beq cr6,0x8247f954
	if (ctx.cr6.eq) goto loc_8247F954;
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(r31.s32, 128, ctx.xer);
	// bne cr6,0x8247f8d8
	if (!ctx.cr6.eq) goto loc_8247F8D8;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - r25.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r24,r11,27,31,31
	r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8247f970
	goto loc_8247F970;
loc_8247F954:
	// li r24,3
	r24.s64 = 3;
	// b 0x8247f970
	goto loc_8247F970;
loc_8247F95C:
	// li r24,2
	r24.s64 = 2;
	// b 0x8247f970
	goto loc_8247F970;
loc_8247F964:
	// li r24,1
	r24.s64 = 1;
	// b 0x8247f970
	goto loc_8247F970;
loc_8247F96C:
	// mr r24,r23
	r24.u64 = r23.u64;
loc_8247F970:
	// rlwinm r11,r21,0,21,23
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x700;
	// cmpwi cr6,r11,1024
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1024, ctx.xer);
	// bgt cr6,0x8247f9b8
	if (ctx.cr6.gt) goto loc_8247F9B8;
	// beq cr6,0x8247f9b0
	if (ctx.cr6.eq) goto loc_8247F9B0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8247f9b0
	if (ctx.cr6.eq) goto loc_8247F9B0;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// beq cr6,0x8247f9a8
	if (ctx.cr6.eq) goto loc_8247F9A8;
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// beq cr6,0x8247fa28
	if (ctx.cr6.eq) goto loc_8247FA28;
	// cmpwi cr6,r11,768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 768, ctx.xer);
	// bne cr6,0x8247f8d8
	if (!ctx.cr6.eq) goto loc_8247F8D8;
	// li r31,2
	r31.s64 = 2;
	// b 0x8247f9d4
	goto loc_8247F9D4;
loc_8247F9A8:
	// li r31,4
	r31.s64 = 4;
	// b 0x8247f9d4
	goto loc_8247F9D4;
loc_8247F9B0:
	// li r31,3
	r31.s64 = 3;
	// b 0x8247f9d4
	goto loc_8247F9D4;
loc_8247F9B8:
	// cmpwi cr6,r11,1280
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1280, ctx.xer);
	// beq cr6,0x8247f9d0
	if (ctx.cr6.eq) goto loc_8247F9D0;
	// cmpwi cr6,r11,1536
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1536, ctx.xer);
	// beq cr6,0x8247fa28
	if (ctx.cr6.eq) goto loc_8247FA28;
	// cmpwi cr6,r11,1792
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1792, ctx.xer);
	// bne cr6,0x8247f8d8
	if (!ctx.cr6.eq) goto loc_8247F8D8;
loc_8247F9D0:
	// li r31,1
	r31.s64 = 1;
loc_8247F9D4:
	// rlwinm. r11,r21,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r26,128
	r26.s64 = 128;
	// beq 0x8247f9f8
	if (ctx.cr0.eq) goto loc_8247F9F8;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,31828(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31828);
	// andc r11,r30,r11
	ctx.r11.u64 = r30.u64 & ~ctx.r11.u64;
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8247f9f8
	if (!ctx.cr0.eq) goto loc_8247F9F8;
	// li r26,1
	r26.s64 = 1;
loc_8247F9F8:
	// rlwinm. r11,r21,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247fa0c
	if (ctx.cr0.eq) goto loc_8247FA0C;
	// oris r26,r26,1024
	r26.u64 = r26.u64 | 67108864;
	// oris r25,r25,1
	r25.u64 = r25.u64 | 65536;
	// ori r24,r24,4
	r24.u64 = r24.u64 | 4;
loc_8247FA0C:
	// rlwinm. r11,r21,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247fa18
	if (ctx.cr0.eq) goto loc_8247FA18;
	// ori r26,r26,256
	r26.u64 = r26.u64 | 256;
loc_8247FA18:
	// rlwinm. r11,r21,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247fa30
	if (ctx.cr0.eq) goto loc_8247FA30;
	// oris r26,r26,2048
	r26.u64 = r26.u64 | 134217728;
	// b 0x8247fa3c
	goto loc_8247FA3C;
loc_8247FA28:
	// li r31,5
	r31.s64 = 5;
	// b 0x8247f9d4
	goto loc_8247F9D4;
loc_8247FA30:
	// rlwinm. r11,r21,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247fa3c
	if (ctx.cr0.eq) goto loc_8247FA3C;
	// oris r26,r26,4096
	r26.u64 = r26.u64 | 268435456;
loc_8247FA3C:
	// bl 0x822e5d10
	ctx.lr = 0x8247FA40;
	sub_822E5D10(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8247fa74
	if (!ctx.cr6.eq) goto loc_8247FA74;
	// bl 0x822db6f8
	ctx.lr = 0x8247FA50;
	sub_822DB6F8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r23,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r23.u32);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// bl 0x822db6c0
	ctx.lr = 0x8247FA60;
	sub_822DB6C0(ctx, base);
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822db6c0
	ctx.lr = 0x8247FA6C;
	sub_822DB6C0(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8247f8fc
	goto loc_8247F8FC;
loc_8247FA74:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x822099f8
	ctx.lr = 0x8247FA9C;
	sub_822099F8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8247fb34
	if (!ctx.cr6.eq) goto loc_8247FB34;
	// rlwinm r11,r25,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r20.u32, ctx.xer);
	// bne cr6,0x8247faec
	if (!ctx.cr6.eq) goto loc_8247FAEC;
	// clrlwi. r11,r21,31
	ctx.r11.u64 = r21.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247faec
	if (ctx.cr0.eq) goto loc_8247FAEC;
	// clrlwi r25,r25,1
	r25.u64 = r25.u32 & 0x7FFFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x822099f8
	ctx.lr = 0x8247FAE0;
	sub_822099F8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8247fb34
	if (!ctx.cr6.eq) goto loc_8247FB34;
loc_8247FAEC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// srawi r9,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 5;
	// addi r10,r10,-11584
	ctx.r10.s64 = ctx.r10.s64 + -11584;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// bl 0x822098c8
	ctx.lr = 0x8247FB24;
	sub_822098C8(ctx, base);
	// bl 0x822db730
	ctx.lr = 0x8247FB28;
	sub_822DB730(ctx, base);
loc_8247FB28:
	// bl 0x822db6c0
	ctx.lr = 0x8247FB2C;
	sub_822DB6C0(ctx, base);
	// lwz r23,0(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8247fd6c
	goto loc_8247FD6C;
loc_8247FB34:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x822e5a00
	ctx.lr = 0x8247FB40;
	sub_822E5A00(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// addi r31,r11,-11584
	r31.s64 = ctx.r11.s64 + -11584;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// ori r11,r27,1
	ctx.r11.u64 = r27.u64 | 1;
	// mulli r10,r10,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(72));
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// andi. r30,r11,72
	r30.u64 = ctx.r11.u64 & 72;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// lwzx r9,r9,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// cmpwi r30,0
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stb r11,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// mulli r10,r10,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(72));
	// lwzx r9,r9,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r9,40(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 40);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// stb r9,40(r10)
	REX_STORE_U8(ctx.r10.u32 + 40, ctx.r9.u8);
	// bne 0x8247fc40
	if (!ctx.cr0.eq) goto loc_8247FC40;
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247fc40
	if (ctx.cr0.eq) goto loc_8247FC40;
	// rlwinm. r11,r21,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247fc40
	if (ctx.cr0.eq) goto loc_8247FC40;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8247f088
	ctx.lr = 0x8247FBC4;
	sub_8247F088(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8247fbec
	if (!ctx.cr6.eq) goto loc_8247FBEC;
	// bl 0x822db6f8
	ctx.lr = 0x8247FBD4;
	sub_822DB6F8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,131
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 131, ctx.xer);
	// beq cr6,0x8247fc40
	if (ctx.cr6.eq) goto loc_8247FC40;
loc_8247FBE0:
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x822e6b48
	ctx.lr = 0x8247FBE8;
	sub_822E6B48(ctx, base);
	// b 0x8247fb28
	goto loc_8247FB28;
loc_8247FBEC:
	// stb r23,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r23.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x822e6df8
	ctx.lr = 0x8247FC00;
	sub_822E6DF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8247fc28
	if (!ctx.cr0.eq) goto loc_8247FC28;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// bne cr6,0x8247fc28
	if (!ctx.cr6.eq) goto loc_8247FC28;
	// extsw r4,r27
	ctx.r4.s64 = r27.s32;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x8247ff40
	ctx.lr = 0x8247FC20;
	sub_8247FF40(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8247fbe0
	if (ctx.cr6.eq) goto loc_8247FBE0;
loc_8247FC28:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8247f088
	ctx.lr = 0x8247FC38;
	sub_8247F088(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8247fbe0
	if (ctx.cr6.eq) goto loc_8247FBE0;
loc_8247FC40:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 40);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stb r10,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 40);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
	// bne cr6,0x8247fccc
	if (!ctx.cr6.eq) goto loc_8247FCCC;
	// rlwinm. r11,r21,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247fccc
	if (ctx.cr0.eq) goto loc_8247FCCC;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_8247FCCC:
	// rlwinm r11,r25,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r20.u32, ctx.xer);
	// bne cr6,0x8247fd6c
	if (!ctx.cr6.eq) goto loc_8247FD6C;
	// clrlwi. r11,r21,31
	ctx.r11.u64 = r21.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247fd6c
	if (ctx.cr0.eq) goto loc_8247FD6C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82208848
	ctx.lr = 0x8247FCE8;
	sub_82208848(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// clrlwi r4,r25,1
	ctx.r4.u64 = r25.u32 & 0x7FFFFFFF;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x822099f8
	ctx.lr = 0x8247FD08;
	sub_822099F8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8247fd50
	if (!ctx.cr6.eq) goto loc_8247FD50;
	// bl 0x822098c8
	ctx.lr = 0x8247FD14;
	sub_822098C8(ctx, base);
	// bl 0x822db730
	ctx.lr = 0x8247FD18;
	sub_822DB730(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x822e5a88
	ctx.lr = 0x8247FD4C;
	sub_822E5A88(ctx, base);
	// b 0x8247fb28
	goto loc_8247FB28;
loc_8247FD50:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// stwx r3,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_8247FD6C:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// b 0x8247f8fc
	goto loc_8247F8FC;
loc_8247FD74:
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
	ctx.lr = 0x8247FD8C;
	sub_822D69E8(ctx, base);
}

DEFINE_REX_FUNC(sub_824AA8C0) {
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
	// bl 0x822d4e50
	ctx.lr = 0x824AA8C8;
	// stwu r1,-944(r1)
	ea = -944 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// stw r6,988(r1)
	REX_STORE_U32(ctx.r1.u32 + 988, ctx.r6.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r5,980(r1)
	REX_STORE_U32(ctx.r1.u32 + 980, ctx.r5.u32);
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r5,240
	ctx.r5.s64 = 240;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x824aad64
	if (ctx.cr6.eq) goto loc_824AAD64;
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// beq cr6,0x824aaba0
	if (ctx.cr6.eq) goto loc_824AABA0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x824aab30
	if (!ctx.cr6.gt) goto loc_824AAB30;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// rlwinm r16,r4,1,0,30
	r16.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r15,r4,2,0,29
	r15.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r14,r4,3,0,28
	r14.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r17,-96
	r17.s64 = -96;
	// li r18,-48
	r18.s64 = -48;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r19,-80
	r19.s64 = -80;
	// li r20,-32
	r20.s64 = -32;
	// li r21,64
	r21.s64 = 64;
	// li r22,112
	r22.s64 = 112;
	// li r23,160
	r23.s64 = 160;
	// li r24,208
	r24.s64 = 208;
	// li r25,256
	r25.s64 = 256;
loc_824AA954:
	// add r8,r15,r9
	ctx.r8.u64 = r15.u64 + ctx.r9.u64;
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r16,r9
	ctx.r7.u64 = r16.u64 + ctx.r9.u64;
	// lvx128 v61,r16,r9
	ea = (r16.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r8,r4
	r31.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v60,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r27,r9,r4
	r27.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v59,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r30,r31,r4
	r30.u64 = r31.u64 + ctx.r4.u64;
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r28,r7,r4
	r28.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lvx128 v62,r15,r9
	ea = (r15.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r26,r30,r4
	r26.u64 = r30.u64 + ctx.r4.u64;
	// lvx128 v55,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r29,r14,r9
	r29.u64 = r14.u64 + ctx.r9.u64;
	// lvsl v4,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v53,r27,r10
	ea = (r27.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v5,v63,v59,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v6,r0,r27
	temp.u32 = r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v11,v61,v55,v4
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v58,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v60,v53,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v57,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r31,r4
	ea = (r31.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v25,v0,v5
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v54,r30,r4
	ea = (r30.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v18,v0,v5
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v52,r28,r10
	ea = (r28.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v48,r26,r10
	ea = (r26.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v47,r29,r10
	ea = (r29.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r14,r9
	ea = (r14.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v3,r0,r28
	temp.u32 = r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v2,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v1,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v10,v57,v52,v3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvsl v7,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v9,v62,v51,v2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvsl v6,r0,r26
	temp.u32 = r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v8,v58,v50,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// lvsl v4,r0,r29
	temp.u32 = r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v7,v56,v49,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v6,v54,v48,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v4,v46,v47,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrghb v3,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v1,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v31,v0,v9
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v30,v0,v8
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v19,v3,v25
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vmrghb v29,v0,v7
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v27,v2,v3
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vmrghb v28,v0,v6
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v26,v1,v2
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrghb v23,v0,v4
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v24,v31,v1
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vmrglb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v22,v30,v31
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vmrglb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v21,v29,v30
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v20,v28,v29
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v17,v23,v28
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vmrglb v5,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v11,v12
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v14,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v12,v12,v18
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vslh v4,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v1,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v31,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v28,v9,v10
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// li r9,48
	ctx.r9.s64 = 48;
	// vadduhm v27,v8,v9
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v16,r11,r18
	ea = (ctx.r11.u32 + r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v26,v7,v8
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// li r8,96
	ctx.r8.s64 = 96;
	// vadduhm v25,v6,v7
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// li r7,144
	ctx.r7.s64 = 144;
	// vadduhm v24,v5,v6
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// li r31,192
	r31.s64 = 192;
	// vslh v23,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v3,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v22,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v14,r11,r17
	ea = (ctx.r11.u32 + r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v21,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v4,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v20,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v2,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v19,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v31,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v18,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v30,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v17,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v29,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v16,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v23,r11,r19
	ea = (ctx.r11.u32 + r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v22,r11,r20
	ea = (ctx.r11.u32 + r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// stvx128 v21,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r11,r21
	ea = (ctx.r11.u32 + r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r11,r22
	ea = (ctx.r11.u32 + r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v18,r11,r23
	ea = (ctx.r11.u32 + r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r11,r24
	ea = (ctx.r11.u32 + r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v16,r11,r25
	ea = (ctx.r11.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,384
	ctx.r11.s64 = ctx.r11.s64 + 384;
	// bdnz 0x824aa954
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AA954;
	// lwz r29,980(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 980);
	// lwz r28,988(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 988);
loc_824AAB30:
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,48
	ctx.r3.s64 = ctx.r1.s64 + 48;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x824aae24
	if (!ctx.cr6.gt) goto loc_824AAE24;
	// addi r8,r6,-1
	ctx.r8.s64 = ctx.r6.s64 + -1;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r30,r10,r4
	r30.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r9,r3,-48
	ctx.r9.s64 = ctx.r3.s64 + -48;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_824AAB64:
	// lbzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// lbzux r4,r8,r10
	ea = ctx.r8.u32 + ctx.r10.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lbz r31,0(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// add r6,r31,r3
	ctx.r6.u64 = r31.u64 + ctx.r3.u64;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r6,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// sth r7,48(r9)
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r7.u16);
	// sthu r6,96(r9)
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r6.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x824aab64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AAB64;
	// b 0x824aae24
	goto loc_824AAE24;
loc_824AABA0:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v45,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v44,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r3,r4
	r31.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v43,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,16
	ctx.r6.s64 = ctx.r1.s64 + 16;
	// lvsl v2,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v45,v43,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v42,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,64
	r30.s64 = ctx.r1.s64 + 64;
	// lvx128 v41,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v30,v44,v38,v2
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvx128 v40,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,112
	r27.s64 = ctx.r1.s64 + 112;
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v39,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v31,v0,v6
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v4,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vperm128 v3,v42,v41,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v34,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v40,v39,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v33,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v12,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v37,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v36,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,160
	r31.s64 = ctx.r1.s64 + 160;
	// lvx128 v35,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v32,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v10,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v63,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v5,v12,v31
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// lvx128 v62,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,208
	r26.s64 = ctx.r1.s64 + 208;
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lvsl v6,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v30,v11,v12
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvsl v4,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v3,v62,v37,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v2,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v1,v36,v35,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v31,v34,v32,v4
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// vperm128 v28,v33,v63,v2
	simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vadduhm v29,v10,v11
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghb v7,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v27,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v6,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v26,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v9,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r25,r1,256
	r25.s64 = ctx.r1.s64 + 256;
	// vmrghb v8,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r24,r1,304
	r24.s64 = ctx.r1.s64 + 304;
	// vadduhm v25,v6,v7
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v24,v9,v10
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// addi r23,r1,352
	r23.s64 = ctx.r1.s64 + 352;
	// vadduhm v4,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v27,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v3,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v26,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v2,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v1,v61,v60,v5
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vslh v31,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r7,4
	ctx.r7.s64 = 4;
	// vslh v30,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v27,v0,v1
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// stvx128 v2,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stvx128 v31,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v26,v27,v6
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// stvx128 v30,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v29,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r7,r11,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r11.u64;
	// stvx128 v28,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// vslh v25,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_824AAD24:
	// lbzx r6,r10,r7
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// lbzux r31,r8,r11
	ea = ctx.r8.u32 + ctx.r11.u32;
	r31.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// lbz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// add r6,r31,r6
	ctx.r6.u64 = r31.u64 + ctx.r6.u64;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r3,r6,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r4,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// sth r4,48(r9)
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r4.u16);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sthu r3,96(r9)
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x824aad24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AAD24;
	// b 0x824aae24
	goto loc_824AAE24;
loc_824AAD64:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v58,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v59,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r10,16
	ctx.r10.s64 = 16;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v56,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,16
	ctx.r6.s64 = ctx.r1.s64 + 16;
	// lvx128 v57,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,64
	ctx.r4.s64 = ctx.r1.s64 + 64;
	// lvx128 v55,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
	// lvx128 v54,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,160
	r30.s64 = ctx.r1.s64 + 160;
	// lvx128 v53,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v6,v59,v52,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v3,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v2,v58,v54,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvsl v1,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v31,v57,v55,v4
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vperm128 v30,v56,v53,v3
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vperm128 v29,v50,v51,v1
	simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v12,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v28,v0,v6
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v27,v0,v29
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v26,v11,v12
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v25,v10,v11
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v24,v12,v28
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v23,v27,v10
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v22,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v22,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_824AAE24:
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// vspltish v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x4)));
	// addi r11,r1,16
	ctx.r11.s64 = ctx.r1.s64 + 16;
	// addi r10,r1,64
	ctx.r10.s64 = ctx.r1.s64 + 64;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,32
	ctx.r7.s64 = ctx.r1.s64 + 32;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lvx128 v6,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,304
	ctx.r9.s64 = ctx.r1.s64 + 304;
	// lvx128 v5,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lvx128 v7,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// lvx128 v49,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// lvx128 v48,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// vslh v12,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r7,r1,320
	ctx.r7.s64 = ctx.r1.s64 + 320;
	// vslh v3,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r31,r1,224
	r31.s64 = ctx.r1.s64 + 224;
	// vslh v2,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r30,r1,272
	r30.s64 = ctx.r1.s64 + 272;
	// vslh v1,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// lvx128 v9,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v25,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v10,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v27,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v8,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v26,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v47,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v22,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v46,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v24,v12,v4
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// lvx128 v43,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v23,v3,v5
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsldoi128 v31,v4,v49,2
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), 14));
	// vaddshs v21,v2,v6
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsldoi128 v30,v5,v48,2
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), 14));
	// vaddshs v19,v1,v7
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsldoi128 v29,v6,v47,2
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), 14));
	// lvx128 v45,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v28,v7,v46,2
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), 14));
	// lvx128 v44,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v42,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,1104
	ctx.r4.s64 = 1104;
	// vaddshs v13,v25,v9
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsldoi128 v17,v9,v43,2
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), 14));
	// vaddshs v16,v27,v11
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsldoi128 v20,v11,v45,2
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), 14));
	// vaddshs v14,v26,v10
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsldoi128 v18,v10,v44,2
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8), 14));
	// vaddshs v9,v22,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsldoi128 v15,v8,v42,2
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), 14));
	// vaddshs v11,v24,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// lvx128 v12,r28,r4
	ea = (r28.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v10,v23,v30
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// li r3,288
	ctx.r3.s64 = 288;
	// vaddshs v8,v21,v29
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// li r11,336
	ctx.r11.s64 = 336;
	// vaddshs v7,v19,v28
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v6,v16,v20
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vaddshs v5,v14,v18
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vaddshs v4,v13,v17
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vaddshs v3,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v2,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v1,v9,v15
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vaddshs v31,v8,v12
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v30,v7,v12
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v29,v6,v12
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v28,v5,v12
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v27,v4,v12
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsrah v26,v3,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v2,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v24,v1,v12
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsrah v23,v31,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v22,v30,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// li r10,48
	ctx.r10.s64 = 48;
	// vsrah v21,v29,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// li r9,96
	ctx.r9.s64 = 96;
	// vsrah v20,v28,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// li r8,144
	ctx.r8.s64 = 144;
	// vsrah v19,v27,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// li r7,192
	ctx.r7.s64 = 192;
	// vsrah v18,v24,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v26,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r29,r10
	ea = (r29.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v23,r29,r9
	ea = (r29.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v22,r29,r8
	ea = (r29.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r29,r7
	ea = (r29.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r29,r5
	ea = (r29.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r29,r3
	ea = (r29.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v18,r29,r11
	ea = (r29.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,944
	ctx.r1.s64 = ctx.r1.s64 + 944;
	// b 0x822d4ea0
	return;
}

