#include "soulcalibur2_funcs.12.h"

DEFINE_REX_FUNC(sub_820E0368) {
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
	ctx.lr = 0x820E0378;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f12,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,28(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f13,20(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f4,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f1,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f28,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	f28.f64 = double(temp.f32);
	// fmuls f2,f13,f11
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f3,16(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f30,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	f30.f64 = double(temp.f32);
	// fmuls f31,f13,f9
	f31.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f29,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	f29.f64 = double(temp.f32);
	// fmuls f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// lfs f26,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	f26.f64 = double(temp.f32);
	// lfs f24,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	f24.f64 = double(temp.f32);
	// fmadds f10,f4,f1,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f4.f64, ctx.f1.f64, ctx.f10.f64)));
	// lfs f22,44(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 44);
	f22.f64 = double(temp.f32);
	// fmadds f6,f30,f4,f6
	ctx.f6.f64 = double(float(std::fma(f30.f64, ctx.f4.f64, ctx.f6.f64)));
	// lfs f25,24(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 24);
	f25.f64 = double(temp.f32);
	// fmadds f5,f29,f4,f5
	ctx.f5.f64 = double(float(std::fma(f29.f64, ctx.f4.f64, ctx.f5.f64)));
	// lfs f23,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	f23.f64 = double(temp.f32);
	// fmadds f0,f28,f4,f0
	ctx.f0.f64 = double(float(std::fma(f28.f64, ctx.f4.f64, ctx.f0.f64)));
	// lfs f27,36(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 36);
	f27.f64 = double(temp.f32);
	// fmadds f8,f3,f1,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f3.f64, ctx.f1.f64, ctx.f8.f64)));
	// lfs f4,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f2,f3,f30,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f3.f64, f30.f64, ctx.f2.f64)));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f21,f27,f12
	f21.f64 = double(float(f27.f64 * ctx.f12.f64));
	// lfs f18,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	f18.f64 = double(temp.f32);
	// fmuls f19,f27,f11
	f19.f64 = double(float(f27.f64 * ctx.f11.f64));
	// lfs f15,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	f15.f64 = double(temp.f32);
	// fmuls f17,f27,f9
	f17.f64 = double(float(f27.f64 * ctx.f9.f64));
	// lfs f9,60(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f27,f27,f7
	f27.f64 = double(float(f27.f64 * ctx.f7.f64));
	// lfs f16,28(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 28);
	f16.f64 = double(temp.f32);
	// fmadds f10,f26,f24,f10
	ctx.f10.f64 = double(float(std::fma(f26.f64, f24.f64, ctx.f10.f64)));
	// lfs f14,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	f14.f64 = double(temp.f32);
	// fmadds f6,f23,f26,f6
	ctx.f6.f64 = double(float(std::fma(f23.f64, f26.f64, ctx.f6.f64)));
	// stfs f7,92(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmadds f5,f4,f26,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f4.f64, f26.f64, ctx.f5.f64)));
	// lfs f7,56(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f0,f22,f26,f0
	ctx.f0.f64 = double(float(std::fma(f22.f64, f26.f64, ctx.f0.f64)));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f8,f25,f24,f8
	ctx.f8.f64 = double(float(std::fma(f25.f64, f24.f64, ctx.f8.f64)));
	// lfs f20,32(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 32);
	f20.f64 = double(temp.f32);
	// fmadds f2,f25,f23,f2
	ctx.f2.f64 = double(float(std::fma(f25.f64, f23.f64, ctx.f2.f64)));
	// lfs f26,44(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 44);
	f26.f64 = double(temp.f32);
	// fmadds f31,f3,f29,f31
	f31.f64 = double(float(std::fma(ctx.f3.f64, f29.f64, f31.f64)));
	// lfs f12,60(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f13,f3,f28,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f3.f64, f28.f64, ctx.f13.f64)));
	// stfs f26,96(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f21,f20,f1,f21
	f21.f64 = double(float(std::fma(f20.f64, ctx.f1.f64, f21.f64)));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f19,f20,f30,f19
	f19.f64 = double(float(std::fma(f20.f64, f30.f64, f19.f64)));
	// fmadds f10,f18,f15,f10
	ctx.f10.f64 = double(float(std::fma(f18.f64, f15.f64, ctx.f10.f64)));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f10,f14,f18,f6
	ctx.f10.f64 = double(float(std::fma(f14.f64, f18.f64, ctx.f6.f64)));
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f10,f7,f18,f5
	ctx.f10.f64 = double(float(std::fma(ctx.f7.f64, f18.f64, ctx.f5.f64)));
	// lfs f11,40(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f9,f18,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, f18.f64, ctx.f0.f64)));
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmadds f0,f16,f15,f8
	ctx.f0.f64 = double(float(std::fma(f16.f64, f15.f64, ctx.f8.f64)));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f0,f16,f14,f2
	ctx.f0.f64 = double(float(std::fma(f16.f64, f14.f64, ctx.f2.f64)));
	// lfs f26,52(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 52);
	f26.f64 = double(temp.f32);
	// lfs f3,56(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f17,f20,f29,f17
	f17.f64 = double(float(std::fma(f20.f64, f29.f64, f17.f64)));
	// lfs f12,48(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f27,f20,f28,f27
	f27.f64 = double(float(std::fma(f20.f64, f28.f64, f27.f64)));
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmadds f31,f25,f4,f31
	f31.f64 = double(float(std::fma(f25.f64, ctx.f4.f64, f31.f64)));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmadds f0,f25,f22,f13
	ctx.f0.f64 = double(float(std::fma(f25.f64, f22.f64, ctx.f13.f64)));
	// lfs f5,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f13,f11,f24,f21
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, f24.f64, f21.f64)));
	// lfs f2,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f10,f11,f23,f19
	ctx.f10.f64 = double(float(std::fma(ctx.f11.f64, f23.f64, f19.f64)));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmadds f8,f11,f4,f17
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, ctx.f4.f64, f17.f64)));
	// li r5,64
	ctx.r5.s64 = 64;
	// fmadds f6,f16,f7,f31
	ctx.f6.f64 = double(float(std::fma(f16.f64, ctx.f7.f64, f31.f64)));
	// stfs f6,136(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmadds f11,f11,f22,f27
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, f22.f64, f27.f64)));
	// lfs f6,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f26,f5
	ctx.f5.f64 = double(float(f26.f64 * ctx.f5.f64));
	// lfs f31,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	f31.f64 = double(temp.f32);
	// fmuls f6,f26,f6
	ctx.f6.f64 = double(float(f26.f64 * ctx.f6.f64));
	// fmuls f2,f26,f2
	ctx.f2.f64 = double(float(f26.f64 * ctx.f2.f64));
	// fmuls f31,f26,f31
	f31.f64 = double(float(f26.f64 * f31.f64));
	// fmadds f0,f16,f9,f0
	ctx.f0.f64 = double(float(std::fma(f16.f64, ctx.f9.f64, ctx.f0.f64)));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f0,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f0,f15,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, f15.f64, ctx.f13.f64)));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmadds f13,f0,f14,f10
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, f14.f64, ctx.f10.f64)));
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmadds f13,f0,f7,f8
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f7.f64, ctx.f8.f64)));
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmadds f0,f0,f9,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f11.f64)));
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmadds f0,f12,f1,f5
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f1.f64, ctx.f5.f64)));
	// lfs f10,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f13,f12,f30,f6
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, f30.f64, ctx.f6.f64)));
	// fmadds f11,f12,f29,f2
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, f29.f64, ctx.f2.f64)));
	// fmadds f12,f12,f28,f31
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, f28.f64, f31.f64)));
	// fmadds f0,f3,f24,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f3.f64, f24.f64, ctx.f0.f64)));
	// fmadds f13,f3,f23,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f3.f64, f23.f64, ctx.f13.f64)));
	// fmadds f11,f3,f4,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f3.f64, ctx.f4.f64, ctx.f11.f64)));
	// fmadds f12,f3,f22,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f3.f64, f22.f64, ctx.f12.f64)));
	// fmadds f0,f10,f15,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, f15.f64, ctx.f0.f64)));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmadds f0,f10,f14,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, f14.f64, ctx.f13.f64)));
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmadds f0,f10,f7,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f7.f64, ctx.f11.f64)));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmadds f0,f10,f9,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f9.f64, ctx.f12.f64)));
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x820E0578;
	sub_822D4FA0(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x822d4f4c
	ctx.lr = 0x820E0584;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FA0D8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4224(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4224);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FA0F8) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// stw r4,4264(r3)
	REX_STORE_U32(ctx.r3.u32 + 4264, ctx.r4.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// stw r11,4264(r3)
	REX_STORE_U32(ctx.r3.u32 + 4264, ctx.r11.u32);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// ble cr6,0x820fa118
	if (!ctx.cr6.gt) goto loc_820FA118;
	// li r11,12
	ctx.r11.s64 = 12;
loc_820FA118:
	// stw r11,4264(r3)
	REX_STORE_U32(ctx.r3.u32 + 4264, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FBA38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x820FBA40;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// stw r31,4236(r3)
	REX_STORE_U32(ctx.r3.u32 + 4236, r31.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r31,4232(r3)
	REX_STORE_U32(ctx.r3.u32 + 4232, r31.u32);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// stw r31,4228(r3)
	REX_STORE_U32(ctx.r3.u32 + 4228, r31.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r31,4224(r3)
	REX_STORE_U32(ctx.r3.u32 + 4224, r31.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r31,4220(r3)
	REX_STORE_U32(ctx.r3.u32 + 4220, r31.u32);
	// addi r6,r8,21448
	ctx.r6.s64 = ctx.r8.s64 + 21448;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-18352
	ctx.r8.s64 = ctx.r10.s64 + -18352;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x821f7d50
	ctx.lr = 0x820FBA94;
	sub_821F7D50(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820fbaac
	if (ctx.cr0.eq) goto loc_820FBAAC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,31764
	ctx.r10.s64 = ctx.r10.s64 + 31764;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820fbab0
	goto loc_820FBAB0;
loc_820FBAAC:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_820FBAB0:
	// stw r29,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, r29.u32);
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// stw r28,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, r28.u32);
	// addi r7,r11,80
	ctx.r7.s64 = ctx.r11.s64 + 80;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r30,r10,31432
	r30.s64 = ctx.r10.s64 + 31432;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lbz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// stw r3,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r3.u32);
	// stw r31,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, r31.u32);
	// lwz r3,136(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 136);
	// lwz r11,140(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 140);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x821f7aa0
	ctx.lr = 0x820FBB0C;
	sub_821F7AA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_820FDC98) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820fdd6c
	if (ctx.cr6.lt) goto loc_820FDD6C;
	// beq cr6,0x820fdd34
	if (ctx.cr6.eq) goto loc_820FDD34;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x820fdcd0
	if (ctx.cr6.lt) goto loc_820FDCD0;
	// beq cr6,0x820fdce8
	if (ctx.cr6.eq) goto loc_820FDCE8;
	// b 0x820fde84
	goto loc_820FDE84;
loc_820FDCD0:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r11,604(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 604);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// beq cr6,0x820fdce8
	if (ctx.cr6.eq) goto loc_820FDCE8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_820FDCE8:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x820fed80
	ctx.lr = 0x820FDCF0;
	sub_820FED80(ctx, base);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x820fdd20
	if (ctx.cr6.lt) goto loc_820FDD20;
	// beq cr6,0x820fdd14
	if (ctx.cr6.eq) goto loc_820FDD14;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bge cr6,0x820fdd24
	if (!ctx.cr6.lt) goto loc_820FDD24;
	// li r5,32
	ctx.r5.s64 = 32;
	// b 0x820fdd28
	goto loc_820FDD28;
loc_820FDD14:
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// b 0x820fdd28
	goto loc_820FDD28;
loc_820FDD20:
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
loc_820FDD24:
	// li r5,512
	ctx.r5.s64 = 512;
loc_820FDD28:
	// bl 0x820f8d58
	ctx.lr = 0x820FDD2C;
	sub_820F8D58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820fde80
	goto loc_820FDE80;
loc_820FDD34:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r11,604(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 604);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// beq cr6,0x820fdd4c
	if (ctx.cr6.eq) goto loc_820FDD4C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x820fde80
	goto loc_820FDE80;
loc_820FDD4C:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// ble cr6,0x820fde84
	if (!ctx.cr6.gt) goto loc_820FDE84;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// b 0x820fde80
	goto loc_820FDE80;
loc_820FDD6C:
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FDD80;
	sub_820F8DB8(ctx, base);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820fdd94
	if (ctx.cr0.eq) goto loc_820FDD94;
	// li r5,64
	ctx.r5.s64 = 64;
	// b 0x820fde64
	goto loc_820FDE64;
loc_820FDD94:
	// lhz r11,604(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 604);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// beq cr6,0x820fde6c
	if (ctx.cr6.eq) goto loc_820FDE6C;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addic. r10,r11,8120
	ctx.xer.ca = ctx.r11.u32 > 4294959175;
	ctx.r10.s64 = ctx.r11.s64 + 8120;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,5780(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 5780);
	// beq 0x820fde60
	if (ctx.cr0.eq) goto loc_820FDE60;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fde60
	if (ctx.cr6.eq) goto loc_820FDE60;
	// lha r9,54(r9)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + 54));
	// lfs f0,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x820fde60
	if (ctx.cr6.gt) goto loc_820FDE60;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FDDEC;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820fde30
	if (!ctx.cr0.eq) goto loc_820FDE30;
	// li r5,22
	ctx.r5.s64 = 22;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FDE04;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820fde30
	if (!ctx.cr0.eq) goto loc_820FDE30;
	// li r5,21
	ctx.r5.s64 = 21;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FDE1C;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820fde6c
	if (ctx.cr0.eq) goto loc_820FDE6C;
loc_820FDE24:
	// li r5,2112
	ctx.r5.s64 = 2112;
loc_820FDE28:
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// b 0x820fde64
	goto loc_820FDE64;
loc_820FDE30:
	// li r5,19
	ctx.r5.s64 = 19;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FDE40;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820fde58
	if (ctx.cr0.eq) goto loc_820FDE58;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x820fed80
	ctx.lr = 0x820FDE50;
	sub_820FED80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820fde24
	if (!ctx.cr0.eq) goto loc_820FDE24;
loc_820FDE58:
	// li r5,1088
	ctx.r5.s64 = 1088;
	// b 0x820fde28
	goto loc_820FDE28;
loc_820FDE60:
	// li r5,0
	ctx.r5.s64 = 0;
loc_820FDE64:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FDE6C;
	sub_820F8D58(ctx, base);
loc_820FDE6C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r11,604(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 604);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bne cr6,0x820fde84
	if (!ctx.cr6.eq) goto loc_820FDE84;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FDE80:
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_820FDE84:
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

DEFINE_REX_FUNC(sub_82107ED0) {
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
	// bl 0x822d4e60
	ctx.lr = 0x82107ED8;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x822d4f24
	ctx.lr = 0x82107EE0;
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,112(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r20,32(r3)
	r20.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// addi r26,r11,432
	r26.s64 = ctx.r11.s64 + 432;
	// fmr f27,f2
	f27.f64 = ctx.f2.f64;
	// rlwinm r21,r6,1,0,30
	r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,27752(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 27752);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f23,f1,f0
	f23.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lfs f0,26552(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 26552);
	ctx.f0.f64 = double(temp.f32);
	// addi r23,r3,28
	r23.s64 = ctx.r3.s64 + 28;
	// lwz r11,344(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 344);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lhzx r9,r9,r21
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + r21.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// lfd f26,27744(r10)
	f26.u64 = REX_LOAD_U64(ctx.r10.u32 + 27744);
	// mr. r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fsubs f31,f23,f0
	f31.f64 = double(float(f23.f64 - ctx.f0.f64));
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f28,16172(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16172);
	f28.f64 = double(temp.f32);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lfd f24,26672(r7)
	f24.u64 = REX_LOAD_U64(ctx.r7.u32 + 26672);
	// add r31,r11,r20
	r31.u64 = ctx.r11.u64 + r20.u64;
	// lwzx r25,r10,r23
	r25.u64 = REX_LOAD_U32(ctx.r10.u32 + r23.u32);
	// fmr f29,f31
	f29.f64 = f31.f64;
	// beq 0x821080f8
	if (ctx.cr0.eq) goto loc_821080F8;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_82107F64:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82107f64
	if (!ctx.cr6.eq) goto loc_82107F64;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r30,r11,0
	r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r30,20
	ctx.cr6.compare<int32_t>(r30.s32, 20, ctx.xer);
	// ble cr6,0x82107f8c
	if (!ctx.cr6.gt) goto loc_82107F8C;
	// li r30,20
	r30.s64 = 20;
loc_82107F8C:
	// addi r5,r30,1
	ctx.r5.s64 = r30.s64 + 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d5870
	ctx.lr = 0x82107F9C;
	sub_822D5870(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x82107fd4
	if (!ctx.cr6.gt) goto loc_82107FD4;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// subf r8,r11,r31
	ctx.r8.u64 = r31.u64 - ctx.r11.u64;
loc_82107FB0:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r4,r9,r8
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x82107e38
	ctx.lr = 0x82107FC4;
	sub_82107E38(ctx, base);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r3,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r3.u8);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r30.s32, ctx.xer);
	// blt cr6,0x82107fb0
	if (ctx.cr6.lt) goto loc_82107FB0;
loc_82107FD4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r11,27728
	ctx.r5.s64 = ctx.r11.s64 + 27728;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821eb1a0
	ctx.lr = 0x82107FEC;
	sub_821EB1A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fadds f25,f27,f28
	f25.f64 = double(float(f27.f64 + f28.f64));
	// stfd f26,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f26.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f25,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f25.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f26
	ctx.f3.f64 = f26.f64;
	// lfs f0,16232(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16232);
	ctx.f0.f64 = double(temp.f32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// fnmsubs f31,f13,f0,f31
	f31.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f0.f64, -f31.f64)));
	// stfd f31,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f31.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// addi r3,r10,27708
	ctx.r3.s64 = ctx.r10.s64 + 27708;
	// fmr f2,f25
	ctx.f2.f64 = f25.f64;
	// fmr f29,f31
	f29.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821eacb0
	ctx.lr = 0x82108038;
	sub_821EACB0(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x821080f8
	if (!ctx.cr6.gt) goto loc_821080F8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r29,r11,27700
	r29.s64 = ctx.r11.s64 + 27700;
	// addi r28,r10,27680
	r28.s64 = ctx.r10.s64 + 27680;
	// addi r27,r9,27676
	r27.s64 = ctx.r9.s64 + 27676;
loc_8210805C:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lbzx r19,r31,r11
	r19.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// extsb r18,r19
	r18.s64 = r19.s8;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// bl 0x821eb1a0
	ctx.lr = 0x8210807C;
	sub_821EB1A0(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82107d50
	ctx.lr = 0x82108088;
	sub_82107D50(ctx, base);
	// stfd f24,48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 48, f24.u64);
	// stfd f26,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f26.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f25,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f25.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f31,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// stfd f24,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, f24.u64);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// fmr f5,f24
	ctx.f5.f64 = f24.f64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// fmr f4,f24
	ctx.f4.f64 = f24.f64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f3,f26
	ctx.f3.f64 = f26.f64;
	// fmr f2,f25
	ctx.f2.f64 = f25.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// bl 0x821eacb0
	ctx.lr = 0x821080D4;
	sub_821EACB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x821eacb0
	ctx.lr = 0x821080E4;
	sub_821EACB0(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(r31.s32, r30.s32, ctx.xer);
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// blt cr6,0x8210805c
	if (ctx.cr6.lt) goto loc_8210805C;
loc_821080F8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f25,f27,f28
	ctx.fpscr.disableFlushMode();
	f25.f64 = double(float(f27.f64 + f28.f64));
	// stfd f26,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f26.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f25,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f25.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// lwz r11,344(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 344);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// fmr f3,f26
	ctx.f3.f64 = f26.f64;
	// lfs f0,2332(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2332);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// fadds f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 + ctx.f0.f64));
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r9,27656
	ctx.r3.s64 = ctx.r9.s64 + 27656;
	// li r7,-1
	ctx.r7.s64 = -1;
	// fmr f2,f25
	ctx.f2.f64 = f25.f64;
	// lwzx r11,r11,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// lhzx r11,r11,r21
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + r21.u32);
	// add r31,r11,r25
	r31.u64 = ctx.r11.u64 + r25.u64;
	// bl 0x821eacb0
	ctx.lr = 0x82108154;
	sub_821EACB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r9,27652
	ctx.r3.s64 = ctx.r9.s64 + 27652;
	// lfs f0,26832(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26832);
	ctx.f0.f64 = double(temp.f32);
	// fadds f28,f30,f0
	f28.f64 = double(float(f30.f64 + ctx.f0.f64));
	// lfs f0,16228(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16228);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f29,f28
	ctx.f13.f64 = double(float(f29.f64 - f28.f64));
	// fsubs f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bl 0x821eacb0
	ctx.lr = 0x8210817C;
	sub_821EACB0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eb1a0
	ctx.lr = 0x8210818C;
	sub_821EB1A0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x821081c8
	if (!ctx.cr6.lt) goto loc_821081C8;
	// stfd f28,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f28.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// stfd f25,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f25.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// fmr f2,f25
	ctx.f2.f64 = f25.f64;
	// addi r3,r11,26912
	ctx.r3.s64 = ctx.r11.s64 + 26912;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x821081C4;
	sub_821EACB0(ctx, base);
	// b 0x82108224
	goto loc_82108224;
loc_821081C8:
	// fdivs f3,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(f31.f64 / ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16308(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16308);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bgt cr6,0x821081e0
	if (ctx.cr6.gt) goto loc_821081E0;
	// fmr f3,f0
	ctx.f3.f64 = ctx.f0.f64;
loc_821081E0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfd f28,24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 24, f28.u64);
	// stfd f25,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f25.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f3,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// fmr f2,f25
	ctx.f2.f64 = f25.f64;
	// lfd f4,26664(r11)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r11.u32 + 26664);
	// addi r3,r10,27640
	ctx.r3.s64 = ctx.r10.s64 + 27640;
	// stfd f4,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f4.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// li r8,-1
	ctx.r8.s64 = -1;
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x821eacb0
	ctx.lr = 0x82108224;
	sub_821EACB0(ctx, base);
loc_82108224:
	// lwz r11,344(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 344);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,22
	ctx.r11.s64 = ctx.r11.s64 + 22;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// lhzx r11,r11,r21
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + r21.u32);
	// add r27,r11,r25
	r27.u64 = ctx.r11.u64 + r25.u64;
	// bl 0x822d5870
	ctx.lr = 0x8210824C;
	sub_822D5870(ctx, base);
	// lbz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 0);
	// li r25,0
	r25.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821086f4
	if (ctx.cr0.eq) goto loc_821086F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfd f26,40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 40, f26.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f26
	ctx.f3.f64 = f26.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r3,r9,27620
	ctx.r3.s64 = ctx.r9.s64 + 27620;
	// lfs f0,2340(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2340);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,27636(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 27636);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 + ctx.f0.f64));
	// fadds f2,f27,f13
	ctx.f2.f64 = double(float(f27.f64 + ctx.f13.f64));
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x821eacb0
	ctx.lr = 0x821082A0;
	sub_821EACB0(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_821082A4:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821082a4
	if (!ctx.cr6.eq) goto loc_821082A4;
	// subf r11,r27,r11
	ctx.r11.u64 = ctx.r11.u64 - r27.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r26,r11,0
	r26.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r26,256
	ctx.cr6.compare<int32_t>(r26.s32, 256, ctx.xer);
	// ble cr6,0x821082cc
	if (!ctx.cr6.gt) goto loc_821082CC;
	// li r26,256
	r26.s64 = 256;
loc_821082CC:
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// ble cr6,0x821082fc
	if (!ctx.cr6.gt) goto loc_821082FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x821082fc
	if (!ctx.cr6.gt) goto loc_821082FC;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
loc_821082E4:
	// lbzx r10,r11,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r27.u32);
	// cmplwi cr6,r10,59
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 59, ctx.xer);
	// bne cr6,0x821082f4
	if (!ctx.cr6.eq) goto loc_821082F4;
	// li r25,1
	r25.s64 = 1;
loc_821082F4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x821082e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821082E4;
loc_821082FC:
	// li r28,1
	r28.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x82108690
	if (!ctx.cr6.gt) goto loc_82108690;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// li r6,36
	ctx.r6.s64 = 36;
	// li r4,109
	ctx.r4.s64 = 109;
	// li r3,80
	ctx.r3.s64 = 80;
	// addi r5,r10,27604
	ctx.r5.s64 = ctx.r10.s64 + 27604;
	// li r30,85
	r30.s64 = 85;
	// li r31,52
	r31.s64 = 52;
loc_8210832C:
	// lbzx r10,r29,r27
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + r27.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,59
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 59, ctx.xer);
	// bne cr6,0x82108360
	if (!ctx.cr6.eq) goto loc_82108360;
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,68
	ctx.r9.s64 = 68;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// li r10,51
	ctx.r10.s64 = 51;
	// stbu r6,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
loc_82108358:
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// b 0x82108680
	goto loc_82108680;
loc_82108360:
	// cmpwi cr6,r9,91
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 91, ctx.xer);
	// bne cr6,0x82108384
	if (!ctx.cr6.eq) goto loc_82108384;
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// li r10,48
	ctx.r10.s64 = 48;
	// stbu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r11.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// stbu r6,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// stbu r3,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r3.u8);
	ctx.r11.u32 = ea;
	// b 0x82108358
	goto loc_82108358;
loc_82108384:
	// cmpwi cr6,r9,93
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 93, ctx.xer);
	// bne cr6,0x821083b0
	if (!ctx.cr6.eq) goto loc_821083B0;
	// li r10,115
	ctx.r10.s64 = 115;
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// li r9,49
	ctx.r9.s64 = 49;
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// li r28,1
	r28.s64 = 1;
	// stbu r6,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// stbu r3,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r3.u8);
	ctx.r11.u32 = ea;
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// b 0x82108680
	goto loc_82108680;
loc_821083B0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x8210867c
	if (!ctx.cr6.eq) goto loc_8210867C;
	// addi r8,r26,-1
	ctx.r8.s64 = r26.s64 + -1;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82108534
	if (ctx.cr6.eq) goto loc_82108534;
	// add r8,r29,r27
	ctx.r8.u64 = r29.u64 + r27.u64;
	// lbz r8,1(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// cmplwi cr6,r8,45
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 45, ctx.xer);
	// bne cr6,0x82108534
	if (!ctx.cr6.eq) goto loc_82108534;
	// cmpwi cr6,r9,75
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 75, ctx.xer);
	// bgt cr6,0x8210847c
	if (ctx.cr6.gt) goto loc_8210847C;
	// beq cr6,0x82108474
	if (ctx.cr6.eq) goto loc_82108474;
	// addi r9,r9,-49
	ctx.r9.s64 = ctx.r9.s64 + -49;
	// cmplwi cr6,r9,22
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 22, ctx.xer);
	// bgt cr6,0x82108504
	if (ctx.cr6.gt) goto loc_82108504;
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// addi r12,r12,27328
	ctx.r12.s64 = ctx.r12.s64 + 27328;
	// lbzx r0,r12,r9
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r9.u32);
	// lis r12,-32239
	ctx.r12.s64 = -2112815104;
	// nop 
	// addi r12,r12,-31724
	ctx.r12.s64 = ctx.r12.s64 + -31724;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_82108414;
	case 1:
		goto loc_8210841C;
	case 2:
		goto loc_82108424;
	case 3:
		goto loc_8210842C;
	case 4:
		goto loc_82108434;
	case 5:
		goto loc_8210843C;
	case 6:
		goto loc_82108444;
	case 7:
		goto loc_8210844C;
	case 8:
		goto loc_82108454;
	case 9:
		goto loc_82108504;
	case 10:
		goto loc_82108504;
	case 11:
		goto loc_82108504;
	case 12:
		goto loc_82108504;
	case 13:
		goto loc_82108504;
	case 14:
		goto loc_82108504;
	case 15:
		goto loc_82108504;
	case 16:
		goto loc_82108464;
	case 17:
		goto loc_8210846C;
	case 18:
		goto loc_82108504;
	case 19:
		goto loc_82108504;
	case 20:
		goto loc_82108504;
	case 21:
		goto loc_82108504;
	case 22:
		goto loc_8210845C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82108414:
	// li r10,21
	ctx.r10.s64 = 21;
	// b 0x82108504
	goto loc_82108504;
loc_8210841C:
	// li r10,22
	ctx.r10.s64 = 22;
	// b 0x82108504
	goto loc_82108504;
loc_82108424:
	// li r10,23
	ctx.r10.s64 = 23;
	// b 0x82108504
	goto loc_82108504;
loc_8210842C:
	// li r10,24
	ctx.r10.s64 = 24;
	// b 0x82108504
	goto loc_82108504;
loc_82108434:
	// li r10,25
	ctx.r10.s64 = 25;
	// b 0x82108504
	goto loc_82108504;
loc_8210843C:
	// li r10,26
	ctx.r10.s64 = 26;
	// b 0x82108504
	goto loc_82108504;
loc_82108444:
	// li r10,27
	ctx.r10.s64 = 27;
	// b 0x82108504
	goto loc_82108504;
loc_8210844C:
	// li r10,28
	ctx.r10.s64 = 28;
	// b 0x82108504
	goto loc_82108504;
loc_82108454:
	// li r10,29
	ctx.r10.s64 = 29;
	// b 0x82108504
	goto loc_82108504;
loc_8210845C:
	// li r10,-123
	ctx.r10.s64 = -123;
	// b 0x82108504
	goto loc_82108504;
loc_82108464:
	// li r10,-122
	ctx.r10.s64 = -122;
	// b 0x82108504
	goto loc_82108504;
loc_8210846C:
	// li r10,-121
	ctx.r10.s64 = -121;
	// b 0x82108504
	goto loc_82108504;
loc_82108474:
	// li r10,-120
	ctx.r10.s64 = -120;
	// b 0x82108504
	goto loc_82108504;
loc_8210847C:
	// cmpwi cr6,r9,97
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 97, ctx.xer);
	// beq cr6,0x821084c4
	if (ctx.cr6.eq) goto loc_821084C4;
	// cmpwi cr6,r9,98
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 98, ctx.xer);
	// beq cr6,0x821084bc
	if (ctx.cr6.eq) goto loc_821084BC;
	// cmpwi cr6,r9,103
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 103, ctx.xer);
	// beq cr6,0x821084b4
	if (ctx.cr6.eq) goto loc_821084B4;
	// cmpwi cr6,r9,107
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 107, ctx.xer);
	// beq cr6,0x821084ac
	if (ctx.cr6.eq) goto loc_821084AC;
	// cmpwi cr6,r9,110
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 110, ctx.xer);
	// bne cr6,0x82108504
	if (!ctx.cr6.eq) goto loc_82108504;
	// li r10,13
	ctx.r10.s64 = 13;
	// b 0x82108504
	goto loc_82108504;
loc_821084AC:
	// li r10,-120
	ctx.r10.s64 = -120;
	// b 0x821084c8
	goto loc_821084C8;
loc_821084B4:
	// li r10,-123
	ctx.r10.s64 = -123;
	// b 0x821084c8
	goto loc_821084C8;
loc_821084BC:
	// li r10,-121
	ctx.r10.s64 = -121;
	// b 0x821084c8
	goto loc_821084C8;
loc_821084C4:
	// li r10,-122
	ctx.r10.s64 = -122;
loc_821084C8:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_821084D4:
	// lbz r24,0(r9)
	r24.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x821084d4
	if (!ctx.cr6.eq) goto loc_821084D4;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_821084E8:
	// lbz r24,0(r8)
	r24.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// stb r24,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, r24.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne cr6,0x821084e8
	if (!ctx.cr6.eq) goto loc_821084E8;
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
loc_82108504:
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8210852c
	if (ctx.cr6.eq) goto loc_8210852C;
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// stbu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r11.u32 = ea;
	// stbu r6,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// stbu r30,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, r30.u8);
	ctx.r11.u32 = ea;
	// stbu r31,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, r31.u8);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8210852C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x82108684
	goto loc_82108684;
loc_82108534:
	// cmpwi cr6,r9,97
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 97, ctx.xer);
	// bgt cr6,0x821085ec
	if (ctx.cr6.gt) goto loc_821085EC;
	// beq cr6,0x821085e4
	if (ctx.cr6.eq) goto loc_821085E4;
	// addi r9,r9,-49
	ctx.r9.s64 = ctx.r9.s64 + -49;
	// cmplwi cr6,r9,29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 29, ctx.xer);
	// bgt cr6,0x82108654
	if (ctx.cr6.gt) goto loc_82108654;
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// addi r12,r12,27296
	ctx.r12.s64 = ctx.r12.s64 + 27296;
	// lbzx r0,r12,r9
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r9.u32);
	// lis r12,-32239
	ctx.r12.s64 = -2112815104;
	// nop 
	// addi r12,r12,-31372
	ctx.r12.s64 = ctx.r12.s64 + -31372;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_82108574;
	case 1:
		goto loc_8210857C;
	case 2:
		goto loc_82108584;
	case 3:
		goto loc_8210858C;
	case 4:
		goto loc_82108594;
	case 5:
		goto loc_8210859C;
	case 6:
		goto loc_821085A4;
	case 7:
		goto loc_821085AC;
	case 8:
		goto loc_821085B4;
	case 9:
		goto loc_82108654;
	case 10:
		goto loc_82108654;
	case 11:
		goto loc_82108654;
	case 12:
		goto loc_82108654;
	case 13:
		goto loc_82108654;
	case 14:
		goto loc_82108654;
	case 15:
		goto loc_82108654;
	case 16:
		goto loc_821085C4;
	case 17:
		goto loc_821085CC;
	case 18:
		goto loc_82108654;
	case 19:
		goto loc_82108654;
	case 20:
		goto loc_82108654;
	case 21:
		goto loc_82108654;
	case 22:
		goto loc_821085BC;
	case 23:
		goto loc_82108654;
	case 24:
		goto loc_82108654;
	case 25:
		goto loc_82108654;
	case 26:
		goto loc_821085D4;
	case 27:
		goto loc_82108654;
	case 28:
		goto loc_82108654;
	case 29:
		goto loc_821085DC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82108574:
	// li r10,11
	ctx.r10.s64 = 11;
	// b 0x82108654
	goto loc_82108654;
loc_8210857C:
	// li r10,12
	ctx.r10.s64 = 12;
	// b 0x82108654
	goto loc_82108654;
loc_82108584:
	// li r10,13
	ctx.r10.s64 = 13;
	// b 0x82108654
	goto loc_82108654;
loc_8210858C:
	// li r10,14
	ctx.r10.s64 = 14;
	// b 0x82108654
	goto loc_82108654;
loc_82108594:
	// li r10,15
	ctx.r10.s64 = 15;
	// b 0x82108654
	goto loc_82108654;
loc_8210859C:
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x82108654
	goto loc_82108654;
loc_821085A4:
	// li r10,17
	ctx.r10.s64 = 17;
	// b 0x82108654
	goto loc_82108654;
loc_821085AC:
	// li r10,18
	ctx.r10.s64 = 18;
	// b 0x82108654
	goto loc_82108654;
loc_821085B4:
	// li r10,19
	ctx.r10.s64 = 19;
	// b 0x82108654
	goto loc_82108654;
loc_821085BC:
	// li r10,5
	ctx.r10.s64 = 5;
	// b 0x82108654
	goto loc_82108654;
loc_821085C4:
	// li r10,6
	ctx.r10.s64 = 6;
	// b 0x82108654
	goto loc_82108654;
loc_821085CC:
	// li r10,7
	ctx.r10.s64 = 7;
	// b 0x82108654
	goto loc_82108654;
loc_821085D4:
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x82108654
	goto loc_82108654;
loc_821085DC:
	// li r10,25
	ctx.r10.s64 = 25;
	// b 0x82108654
	goto loc_82108654;
loc_821085E4:
	// li r10,6
	ctx.r10.s64 = 6;
	// b 0x82108618
	goto loc_82108618;
loc_821085EC:
	// cmpwi cr6,r9,98
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 98, ctx.xer);
	// beq cr6,0x82108614
	if (ctx.cr6.eq) goto loc_82108614;
	// cmpwi cr6,r9,103
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 103, ctx.xer);
	// beq cr6,0x8210860c
	if (ctx.cr6.eq) goto loc_8210860C;
	// cmpwi cr6,r9,107
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 107, ctx.xer);
	// bne cr6,0x82108654
	if (!ctx.cr6.eq) goto loc_82108654;
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x82108618
	goto loc_82108618;
loc_8210860C:
	// li r10,5
	ctx.r10.s64 = 5;
	// b 0x82108618
	goto loc_82108618;
loc_82108614:
	// li r10,7
	ctx.r10.s64 = 7;
loc_82108618:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82108624:
	// lbz r24,0(r9)
	r24.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x82108624
	if (!ctx.cr6.eq) goto loc_82108624;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_82108638:
	// lbz r24,0(r8)
	r24.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// stb r24,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, r24.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne cr6,0x82108638
	if (!ctx.cr6.eq) goto loc_82108638;
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
loc_82108654:
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82108684
	if (ctx.cr6.eq) goto loc_82108684;
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// stbu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r11.u32 = ea;
	// stbu r6,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// stbu r30,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, r30.u8);
	ctx.r11.u32 = ea;
	// stbu r31,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, r31.u8);
	ctx.r11.u32 = ea;
	// b 0x82108680
	goto loc_82108680;
loc_8210867C:
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_82108680:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82108684:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(r29.s32, r26.s32, ctx.xer);
	// blt cr6,0x8210832c
	if (ctx.cr6.lt) goto loc_8210832C;
loc_82108690:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// lfs f0,16200(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16200);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 + ctx.f0.f64));
	// bne cr6,0x821086b0
	if (!ctx.cr6.eq) goto loc_821086B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,27600(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27600);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821086b8
	goto loc_821086B8;
loc_821086B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,27596(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27596);
	ctx.f0.f64 = double(temp.f32);
loc_821086B8:
	// fadds f2,f27,f0
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(f27.f64 + ctx.f0.f64));
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f26,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f26.u64);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f26
	ctx.f3.f64 = f26.f64;
	// addi r3,r11,27584
	ctx.r3.s64 = ctx.r11.s64 + 27584;
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x821086E4;
	sub_821EACB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r11,26656
	ctx.r3.s64 = ctx.r11.s64 + 26656;
	// bl 0x821eacb0
	ctx.lr = 0x821086F4;
	sub_821EACB0(ctx, base);
loc_821086F4:
	// stfd f26,24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 24, f26.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// addi r3,r11,27576
	ctx.r3.s64 = ctx.r11.s64 + 27576;
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x8210870C;
	sub_821EACB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r11,27556
	r31.s64 = ctx.r11.s64 + 27556;
	// lwz r11,124(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 124);
	// lhzx r11,r11,r21
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + r21.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82108780
	if (ctx.cr0.eq) goto loc_82108780;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lbzx r4,r11,r20
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + r20.u32);
	// bl 0x82107e38
	ctx.lr = 0x82108730;
	sub_82107E38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// bl 0x82107d50
	ctx.lr = 0x82108744;
	sub_82107D50(ctx, base);
	// stfd f23,24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 24, f23.u64);
	// stfd f24,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f24.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f24,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f24.u64);
	// stfd f25,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f25.u64);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f23
	ctx.f1.f64 = f23.f64;
	// fmr f3,f24
	ctx.f3.f64 = f24.f64;
	// fmr f4,f24
	ctx.f4.f64 = f24.f64;
	// fmr f2,f25
	ctx.f2.f64 = f25.f64;
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x82108780;
	sub_821EACB0(ctx, base);
loc_82108780:
	// lwz r11,128(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 128);
	// lhzx r11,r11,r21
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + r21.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821087f4
	if (ctx.cr0.eq) goto loc_821087F4;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lbzx r4,r11,r20
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + r20.u32);
	// bl 0x82107e38
	ctx.lr = 0x8210879C;
	sub_82107E38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// bl 0x82107d50
	ctx.lr = 0x821087B0;
	sub_82107D50(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfd f24,48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 48, f24.u64);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stfd f24,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f24.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfd f23,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f23.u64);
	// fmr f4,f24
	ctx.f4.f64 = f24.f64;
	// fmr f3,f24
	ctx.f3.f64 = f24.f64;
	// lfs f0,15968(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15968);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f23
	ctx.f1.f64 = f23.f64;
	// fadds f2,f27,f0
	ctx.f2.f64 = double(float(f27.f64 + ctx.f0.f64));
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x821087F4;
	sub_821EACB0(ctx, base);
loc_821087F4:
	// lwz r11,132(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 132);
	// lhzx r11,r11,r21
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + r21.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82108868
	if (ctx.cr0.eq) goto loc_82108868;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lbzx r4,r11,r20
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + r20.u32);
	// bl 0x82107e38
	ctx.lr = 0x82108810;
	sub_82107E38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// bl 0x82107d50
	ctx.lr = 0x82108824;
	sub_82107D50(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfd f24,48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 48, f24.u64);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stfd f24,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f24.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfd f23,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f23.u64);
	// fmr f4,f24
	ctx.f4.f64 = f24.f64;
	// fmr f3,f24
	ctx.f3.f64 = f24.f64;
	// lfs f0,27552(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27552);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f23
	ctx.f1.f64 = f23.f64;
	// fadds f2,f27,f0
	ctx.f2.f64 = double(float(f27.f64 + ctx.f0.f64));
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x82108868;
	sub_821EACB0(ctx, base);
loc_82108868:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x822d4f70
	ctx.lr = 0x82108874;
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_8212C4F0) {
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r11,-23028(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -23028);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212c520
	if (!ctx.cr6.eq) goto loc_8212C520;
	// bl 0x8212c3b8
	ctx.lr = 0x8212C510;
	sub_8212C3B8(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
loc_8212C520:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212CDC8) {
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
	ctx.lr = 0x8212CDD0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r27,-1
	r27.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212a8e0
	ctx.lr = 0x8212CDE8;
	sub_8212A8E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8212ce90
	if (ctx.cr0.eq) goto loc_8212CE90;
	// lwz r28,160(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 160);
	// addi r29,r31,24
	r29.s64 = r31.s64 + 24;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r6,r28,1
	ctx.r6.s64 = r28.s64 + 1;
	// bl 0x8212b520
	ctx.lr = 0x8212CE14;
	sub_8212B520(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8212ce3c
	if (!ctx.cr6.gt) goto loc_8212CE3C;
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,164(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 164);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + r31.u64;
	// bl 0x82129d78
	ctx.lr = 0x8212CE3C;
	sub_82129D78(ctx, base);
loc_8212CE3C:
	// lwz r10,160(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 160);
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-23000
	ctx.r9.s64 = ctx.r9.s64 + -23000;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// stwx r11,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// ble cr6,0x8212ce90
	if (!ctx.cr6.gt) goto loc_8212CE90;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,20220
	ctx.r9.s64 = ctx.r9.s64 + 20220;
	// li r8,16
	ctx.r8.s64 = 16;
	// stwx r11,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8212CE74:
	// lbzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// bdnz 0x8212ce74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8212CE74;
loc_8212CE90:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8212FFF0) {
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
	// bl 0x821b3110
	ctx.lr = 0x82130000;
	sub_821B3110(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8213001c
	if (ctx.cr6.eq) goto loc_8213001C;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,20456
	ctx.r11.s64 = ctx.r11.s64 + 20456;
	// lfsx f1,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82130024
	goto loc_82130024;
loc_8213001C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
loc_82130024:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82130D60) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,20896
	ctx.r11.s64 = ctx.r11.s64 + 20896;
	// stbx r4,r3,r11
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82130EC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f2,116(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// blt cr6,0x82130ef4
	if (ctx.cr6.lt) goto loc_82130EF4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bgt cr6,0x82130ef4
	if (ctx.cr6.gt) goto loc_82130EF4;
	// fmr f0,f3
	ctx.f0.f64 = ctx.f3.f64;
loc_82130EF4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2028(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2028);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// stb r11,147(r3)
	REX_STORE_U8(ctx.r3.u32 + 147, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82132FD0) {
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
	// b 0x82133004
	goto loc_82133004;
loc_82132FF8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mulli r8,r8,24
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(24));
loc_82133004:
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 8);
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// bne cr6,0x82132ff8
	if (!ctx.cr6.eq) goto loc_82132FF8;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82133034
	if (!ctx.cr6.lt) goto loc_82133034;
	// add r11,r9,r6
	ctx.r11.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// blr 
	return;
loc_82133034:
	// li r3,64
	ctx.r3.s64 = 64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82133E18) {
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
	ctx.lr = 0x82133E2C;
	sub_82133B28(ctx, base);
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82133e78
	if (!ctx.cr6.lt) goto loc_82133E78;
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
	// lha r11,16(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 16));
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r3,r11,20
	ctx.r3.u64 = ctx.r11.u32 & 0xFFF;
	// bne 0x82133e7c
	if (!ctx.cr0.eq) goto loc_82133E7C;
loc_82133E78:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82133E7C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82135B40) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r9,r11,23912
	ctx.r9.s64 = ctx.r11.s64 + 23912;
	// addi r10,r10,22000
	ctx.r10.s64 = ctx.r10.s64 + 22000;
	// lwz r11,76(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// lwz r5,32(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// mulli r11,r11,324
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(324));
	// lwz r4,28(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821336c0
	sub_821336C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821361D0) {
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r11,r11,23912
	ctx.r11.s64 = ctx.r11.s64 + 23912;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// beq cr6,0x82136228
	if (ctx.cr6.eq) goto loc_82136228;
	// lis r31,-32169
	r31.s64 = -2108227584;
	// lwz r5,32(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,28(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mulli r11,r10,324
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(324));
	// addi r31,r31,22000
	r31.s64 = r31.s64 + 22000;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// bl 0x82133fe8
	ctx.lr = 0x82136224;
	sub_82133FE8(ctx, base);
	// b 0x82136244
	goto loc_82136244;
loc_82136228:
	// lis r31,-32169
	r31.s64 = -2108227584;
	// lwz r5,24(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mulli r11,r10,88
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(88));
	// addi r31,r31,21824
	r31.s64 = r31.s64 + 21824;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// bl 0x82133410
	ctx.lr = 0x82136244;
	sub_82133410(ctx, base);
loc_82136244:
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

DEFINE_REX_FUNC(sub_8213ABA8) {
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
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// mulli r9,r4,24
	ctx.r9.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(24));
	// addi r11,r11,14448
	ctx.r11.s64 = ctx.r11.s64 + 14448;
	// mulli r10,r5,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(28));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm. r31,r3,0,18,18
	r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq 0x8213abf8
	if (ctx.cr0.eq) goto loc_8213ABF8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lbz r11,5(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// b 0x8213ac60
	goto loc_8213AC60;
loc_8213ABF8:
	// rlwinm. r10,r3,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8213ac1c
	if (ctx.cr0.eq) goto loc_8213AC1C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lbz r10,6(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lbz r11,7(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// b 0x8213ac60
	goto loc_8213AC60;
loc_8213AC1C:
	// rlwinm. r10,r3,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8213ac40
	if (ctx.cr0.eq) goto loc_8213AC40;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lbz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lbz r11,9(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// b 0x8213ac60
	goto loc_8213AC60;
loc_8213AC40:
	// rlwinm. r10,r3,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8213ac6c
	if (ctx.cr0.eq) goto loc_8213AC6C;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lbz r10,10(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lbz r11,11(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
loc_8213AC60:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// b 0x8213ac78
	goto loc_8213AC78;
loc_8213AC6C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_8213AC78:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8213acb0
	if (ctx.cr6.eq) goto loc_8213ACB0;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8213acb0
	if (ctx.cr6.eq) goto loc_8213ACB0;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,23232
	ctx.r11.s64 = ctx.r11.s64 + 23232;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82132ef8
	ctx.lr = 0x8213ACA4;
	sub_82132EF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x8213acb4
	if (!ctx.cr0.eq) goto loc_8213ACB4;
loc_8213ACB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213ACB4:
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

DEFINE_REX_FUNC(sub_82149238) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,23912
	ctx.r10.s64 = ctx.r10.s64 + 23912;
	// stw r11,72(r10)
	REX_STORE_U32(ctx.r10.u32 + 72, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82149280) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r10,r10,23912
	ctx.r10.s64 = ctx.r10.s64 + 23912;
	// stw r11,72(r10)
	REX_STORE_U32(ctx.r10.u32 + 72, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821492C8) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r10,23912
	ctx.r10.s64 = ctx.r10.s64 + 23912;
	// stw r11,72(r10)
	REX_STORE_U32(ctx.r10.u32 + 72, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82149438) {
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
	// lha r11,22(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 22));
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x820e1d28
	ctx.lr = 0x8214946C;
	sub_820E1D28(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x820e1d28
	ctx.lr = 0x82149484;
	sub_820E1D28(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1ba8
	ctx.lr = 0x82149494;
	sub_820E1BA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x820e2290
	ctx.lr = 0x8214949C;
	sub_820E2290(ctx, base);
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x820e0af8
	ctx.lr = 0x821494A8;
	sub_820E0AF8(ctx, base);
	// lha r11,22(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 22));
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x820e0590
	ctx.lr = 0x821494C0;
	sub_820E0590(ctx, base);
	// lfs f0,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x820e1c50
	ctx.lr = 0x821494E8;
	sub_820E1C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x820e2290
	ctx.lr = 0x821494F0;
	sub_820E2290(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1c50
	ctx.lr = 0x82149500;
	sub_820E1C50(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lha r11,20(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 20));
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f13,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f13,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f0,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f0,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lfs f0,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
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

DEFINE_REX_FUNC(sub_8214D478) {
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
	ctx.lr = 0x8214D480;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82187b58
	ctx.lr = 0x8214D48C;
	sub_82187B58(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r10,194
	ctx.r10.s64 = 194;
	// addi r27,r11,-7072
	r27.s64 = ctx.r11.s64 + -7072;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r29,0
	r29.s64 = 0;
	// addi r31,r27,100
	r31.s64 = r27.s64 + 100;
	// addi r28,r30,96
	r28.s64 = r30.s64 + 96;
loc_8214D4AC:
	// lhz r11,-4(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + -4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8214d4f8
	if (ctx.cr0.eq) goto loc_8214D4F8;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 0);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x8214d4f8
	if (!ctx.cr6.eq) goto loc_8214D4F8;
	// lhz r11,-12(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + -12);
	// li r5,10
	ctx.r5.s64 = 10;
	// lhz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r8,412(r30)
	ctx.r8.u64 = REX_LOAD_U16(r30.u32 + 412);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lhz r7,414(r30)
	ctx.r7.u64 = REX_LOAD_U16(r30.u32 + 414);
	// stb r29,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r29.u8);
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// sth r9,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r9.u16);
	// sth r8,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// sth r7,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r7.u16);
	// bl 0x82188698
	ctx.lr = 0x8214D4F8;
	sub_82188698(ctx, base);
loc_8214D4F8:
	// addis r11,r27,1
	ctx.r11.s64 = r27.s64 + 65536;
	// addis r31,r31,1
	r31.s64 = r31.s64 + 65536;
	// addi r11,r11,3796
	ctx.r11.s64 = ctx.r11.s64 + 3796;
	// addi r31,r31,3696
	r31.s64 = r31.s64 + 3696;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8214d4ac
	if (!ctx.cr6.gt) goto loc_8214D4AC;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lbz r11,24292(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 24292);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8214d554
	if (!ctx.cr6.eq) goto loc_8214D554;
	// li r4,550
	ctx.r4.s64 = 550;
	// lha r5,414(r30)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r30.u32 + 414));
	// lha r3,412(r30)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r30.u32 + 412));
	// lwz r6,12(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x821e0958
	ctx.lr = 0x8214D53C;
	sub_821E0958(ctx, base);
	// lhz r11,412(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 412);
	// li r4,-1
	ctx.r4.s64 = -1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x821de0f8
	ctx.lr = 0x8214D54C;
	sub_821DE0F8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,84(r30)
	REX_STORE_U32(r30.u32 + 84, ctx.r11.u32);
loc_8214D554:
	// lbz r11,332(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 332);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8214d578
	if (ctx.cr0.eq) goto loc_8214D578;
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// addi r3,r30,80
	ctx.r3.s64 = r30.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214D578;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214D578:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82151CB8) {
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
	ctx.lr = 0x82151CC0;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f34
	ctx.lr = 0x82151CC8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,188(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 188);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82152120
	if (ctx.cr0.eq) goto loc_82152120;
	// lwz r11,212(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82151d80
	if (ctx.cr6.gt) goto loc_82151D80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82151d20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82151D20;
	// bdzf 4*cr6+eq,0x82151d2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82151D2C;
	// bdzf 4*cr6+eq,0x82151d38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82151D38;
	// bdzf 4*cr6+eq,0x82151d44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82151D44;
	// bdzf 4*cr6+eq,0x82151d50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82151D50;
	// bdzf 4*cr6+eq,0x82151d5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82151D5C;
	// bdzf 4*cr6+eq,0x82151d68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82151D68;
	// bne cr6,0x82151d74
	if (!ctx.cr6.eq) goto loc_82151D74;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,-18220
	r30.s64 = ctx.r11.s64 + -18220;
	// b 0x82151d88
	goto loc_82151D88;
loc_82151D20:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,-18224
	r30.s64 = ctx.r11.s64 + -18224;
	// b 0x82151d88
	goto loc_82151D88;
loc_82151D2C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,-18228
	r30.s64 = ctx.r11.s64 + -18228;
	// b 0x82151d88
	goto loc_82151D88;
loc_82151D38:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,-18236
	r30.s64 = ctx.r11.s64 + -18236;
	// b 0x82151d88
	goto loc_82151D88;
loc_82151D44:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,-18244
	r30.s64 = ctx.r11.s64 + -18244;
	// b 0x82151d88
	goto loc_82151D88;
loc_82151D50:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,-18252
	r30.s64 = ctx.r11.s64 + -18252;
	// b 0x82151d88
	goto loc_82151D88;
loc_82151D5C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,-18260
	r30.s64 = ctx.r11.s64 + -18260;
	// b 0x82151d88
	goto loc_82151D88;
loc_82151D68:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,-18268
	r30.s64 = ctx.r11.s64 + -18268;
	// b 0x82151d88
	goto loc_82151D88;
loc_82151D74:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,-18272
	r30.s64 = ctx.r11.s64 + -18272;
	// b 0x82151d88
	goto loc_82151D88;
loc_82151D80:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,-18276
	r30.s64 = ctx.r11.s64 + -18276;
loc_82151D88:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,30080
	ctx.r5.s64 = ctx.r11.s64 + 30080;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eb1a0
	ctx.lr = 0x82151DA0;
	sub_821EB1A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f31,-23600(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23600);
	f31.f64 = double(temp.f32);
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82151dcc
	if (!ctx.cr6.eq) goto loc_82151DCC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,112(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - f31.f64));
	// lfs f0,-18280(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18280);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82151dd8
	goto loc_82151DD8;
loc_82151DCC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,28232(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28232);
	ctx.f0.f64 = double(temp.f32);
loc_82151DD8:
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// ori r29,r10,65535
	r29.u64 = ctx.r10.u64 | 65535;
	// fsubs f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// bne cr6,0x82151dfc
	if (!ctx.cr6.eq) goto loc_82151DFC;
	// lis r7,-256
	ctx.r7.s64 = -16777216;
	// b 0x82151e10
	goto loc_82151E10;
loc_82151DFC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82151e0c
	if (!ctx.cr6.eq) goto loc_82151E0C;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// b 0x82151e14
	goto loc_82151E14;
loc_82151E0C:
	// lis r7,-1
	ctx.r7.s64 = -65536;
loc_82151E10:
	// ori r7,r7,255
	ctx.r7.u64 = ctx.r7.u64 | 255;
loc_82151E14:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// addi r3,r9,-18300
	ctx.r3.s64 = ctx.r9.s64 + -18300;
	// lfs f0,20484(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20484);
	ctx.f0.f64 = double(temp.f32);
	// lfd f3,-18632(r11)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r11.u32 + -18632);
	// fadds f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfd f3,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x82151E54;
	sub_821EACB0(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lwz r11,1856(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1856);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82151f74
	if (ctx.cr0.eq) goto loc_82151F74;
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// bne cr6,0x82151ea4
	if (!ctx.cr6.eq) goto loc_82151EA4;
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fsubs f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 - f31.f64));
	// lfs f0,-18492(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18492);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,-18304(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -18304);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-18308(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -18308);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fadds f3,f0,f12
	ctx.f3.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// b 0x82151ec8
	goto loc_82151EC8;
loc_82151EA4:
	// lfs f13,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-18492(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18492);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,2344(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2344);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-18312(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -18312);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f3,f12,f13
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
loc_82151EC8:
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82151f1c
	if (!ctx.cr6.gt) goto loc_82151F1C;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bge cr6,0x82151f18
	if (!ctx.cr6.lt) goto loc_82151F18;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// stfd f3,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r3,r10,-18532
	ctx.r3.s64 = ctx.r10.s64 + -18532;
	// lfs f0,-18816(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18816);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// bl 0x821eacb0
	ctx.lr = 0x82151F14;
	sub_821EACB0(ctx, base);
	// b 0x82151f74
	goto loc_82151F74;
loc_82151F18:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82151F1C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lfs f0,-18816(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18816);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bne cr6,0x82151f58
	if (!ctx.cr6.eq) goto loc_82151F58;
	// stfd f3,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f3.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// addi r3,r10,-18328
	ctx.r3.s64 = ctx.r10.s64 + -18328;
	// bl 0x821eacb0
	ctx.lr = 0x82151F54;
	sub_821EACB0(ctx, base);
	// b 0x82151f74
	goto loc_82151F74;
loc_82151F58:
	// stfd f2,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,-18344
	ctx.r3.s64 = ctx.r10.s64 + -18344;
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x82151F74;
	sub_821EACB0(ctx, base);
loc_82151F74:
	// lwz r10,212(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 212);
	// li r30,0
	r30.s64 = 0;
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82152024
	if (ctx.cr6.lt) goto loc_82152024;
	// lwz r10,200(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 200);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82151fa8
	if (!ctx.cr6.eq) goto loc_82151FA8;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - f31.f64));
	// lfs f0,-24480(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24480);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82151fb4
	goto loc_82151FB4;
loc_82151FA8:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-30168(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30168);
	ctx.f0.f64 = double(temp.f32);
loc_82151FB4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,112(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,116(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,28556(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28556);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f13,116(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// lfs f0,-30120(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -30120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// lwa r9,212(r31)
	ctx.r9.s64 = int32_t(REX_LOAD_U32(r31.u32 + 212));
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfs f13,-18352(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -18352);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// stb r10,188(r11)
	REX_STORE_U8(ctx.r11.u32 + 188, ctx.r10.u8);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lfs f0,-18348(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -18348);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,16228(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16228);
	ctx.f12.f64 = double(temp.f32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfs f0,160(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 160, temp.u32);
	// stfs f0,128(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// b 0x82152028
	goto loc_82152028;
loc_82152024:
	// stb r30,188(r11)
	REX_STORE_U8(ctx.r11.u32 + 188, r30.u8);
loc_82152028:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821e78c8
	ctx.lr = 0x82152030;
	sub_821E78C8(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// lfs f13,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82152058
	if (!ctx.cr6.eq) goto loc_82152058;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,28288(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28288);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,-30972(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30972);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82152060
	goto loc_82152060;
loc_82152058:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-30972(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30972);
	ctx.f0.f64 = double(temp.f32);
loc_82152060:
	// fadds f29,f13,f0
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,116(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,3
	ctx.r9.s64 = 3;
	// lfs f31,-18356(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -18356);
	f31.f64 = double(temp.f32);
	// li r8,255
	ctx.r8.s64 = 255;
	// lfs f30,28552(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 28552);
	f30.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// lfs f5,-18360(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18360);
	ctx.f5.f64 = double(temp.f32);
	// fadds f2,f0,f30
	ctx.f2.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lfs f4,28228(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28228);
	ctx.f4.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x821e8688
	ctx.lr = 0x821520A0;
	sub_821E8688(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82152114
	if (ctx.cr6.eq) goto loc_82152114;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-18412
	ctx.r11.s64 = ctx.r11.s64 + -18412;
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f28,16200(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16200);
	f28.f64 = double(temp.f32);
	// lfs f27,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f27.f64 = double(temp.f32);
loc_821520C8:
	// clrldi r11,r30,32
	ctx.r11.u64 = r30.u64 & 0xFFFFFFFF;
	// lfsu f0,4(r29)
	ctx.fpscr.disableFlushMode();
	ea = 4 + r29.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	r29.u32 = ea;
	// fadds f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 + f29.f64));
	// lfs f13,116(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r8,255
	ctx.r8.s64 = 255;
	// fmr f5,f27
	ctx.f5.f64 = f27.f64;
	// fmr f4,f28
	ctx.f4.f64 = f28.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fadds f2,f0,f30
	ctx.f2.f64 = double(float(ctx.f0.f64 + f30.f64));
	// bl 0x821e8688
	ctx.lr = 0x82152108;
	sub_821E8688(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,13
	ctx.cr6.compare<uint32_t>(r30.u32, 13, ctx.xer);
	// blt cr6,0x821520c8
	if (ctx.cr6.lt) goto loc_821520C8;
loc_82152114:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821e78c8
	ctx.lr = 0x8215211C;
	sub_821E78C8(ctx, base);
	// b 0x8215212c
	goto loc_8215212C;
loc_82152120:
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,188(r11)
	REX_STORE_U8(ctx.r11.u32 + 188, ctx.r10.u8);
loc_8215212C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f80
	ctx.lr = 0x82152138;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8216C6D8) {
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
	// bl 0x8216bfa0
	ctx.lr = 0x8216C6F0;
	sub_8216BFA0(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216c704
	if (ctx.cr6.eq) goto loc_8216C704;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_8216C704:
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
	ctx.lr = 0x8216C718;
	sub_821FF668(ctx, base);
	// bl 0x821d4940
	ctx.lr = 0x8216C71C;
	sub_821D4940(ctx, base);
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

DEFINE_REX_FUNC(sub_8216DC00) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e60
	ctx.lr = 0x8216DC08;
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r4.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r10,-8372
	ctx.r10.s64 = ctx.r10.s64 + -8372;
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r6,-32233
	ctx.r6.s64 = -2112421888;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// addi r10,r7,-14208
	ctx.r10.s64 = ctx.r7.s64 + -14208;
	// stfs f31,220(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// addi r7,r6,-10920
	ctx.r7.s64 = ctx.r6.s64 + -10920;
	// addi r9,r9,-16216
	ctx.r9.s64 = ctx.r9.s64 + -16216;
	// stw r10,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r10.u32);
	// addi r8,r8,-15992
	ctx.r8.s64 = ctx.r8.s64 + -15992;
	// stw r7,236(r31)
	REX_STORE_U32(r31.u32 + 236, ctx.r7.u32);
	// lis r5,-32233
	ctx.r5.s64 = -2112421888;
	// stw r9,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r9.u32);
	// lis r4,-32233
	ctx.r4.s64 = -2112421888;
	// stw r8,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r8.u32);
	// lis r3,-32233
	ctx.r3.s64 = -2112421888;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r29,-32233
	r29.s64 = -2112421888;
	// lis r28,-32233
	r28.s64 = -2112421888;
	// lis r27,-32233
	r27.s64 = -2112421888;
	// lis r26,-32233
	r26.s64 = -2112421888;
	// lis r25,-32233
	r25.s64 = -2112421888;
	// lis r24,-32233
	r24.s64 = -2112421888;
	// lis r23,-32233
	r23.s64 = -2112421888;
	// lis r22,-32233
	r22.s64 = -2112421888;
	// lis r21,-32233
	r21.s64 = -2112421888;
	// lis r20,-32233
	r20.s64 = -2112421888;
	// li r30,0
	r30.s64 = 0;
	// addi r6,r5,-10544
	ctx.r6.s64 = ctx.r5.s64 + -10544;
	// addi r19,r4,-10408
	r19.s64 = ctx.r4.s64 + -10408;
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// addi r18,r3,-10328
	r18.s64 = ctx.r3.s64 + -10328;
	// stb r30,88(r31)
	REX_STORE_U8(r31.u32 + 88, r30.u8);
	// addi r11,r11,-14720
	ctx.r11.s64 = ctx.r11.s64 + -14720;
	// stb r30,89(r31)
	REX_STORE_U8(r31.u32 + 89, r30.u8);
	// addi r9,r23,-15128
	ctx.r9.s64 = r23.s64 + -15128;
	// stb r30,90(r31)
	REX_STORE_U8(r31.u32 + 90, r30.u8);
	// addi r8,r22,-15032
	ctx.r8.s64 = r22.s64 + -15032;
	// stb r30,91(r31)
	REX_STORE_U8(r31.u32 + 91, r30.u8);
	// addi r10,r21,-14824
	ctx.r10.s64 = r21.s64 + -14824;
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
	// addi r7,r20,-9288
	ctx.r7.s64 = r20.s64 + -9288;
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// addi r29,r29,-10200
	r29.s64 = r29.s64 + -10200;
	// stw r30,100(r31)
	REX_STORE_U32(r31.u32 + 100, r30.u32);
	// addi r28,r28,-15848
	r28.s64 = r28.s64 + -15848;
	// stw r30,204(r31)
	REX_STORE_U32(r31.u32 + 204, r30.u32);
	// addi r27,r27,-9800
	r27.s64 = r27.s64 + -9800;
	// stw r30,208(r31)
	REX_STORE_U32(r31.u32 + 208, r30.u32);
	// addi r26,r26,-9616
	r26.s64 = r26.s64 + -9616;
	// stw r30,212(r31)
	REX_STORE_U32(r31.u32 + 212, r30.u32);
	// addi r25,r25,-9528
	r25.s64 = r25.s64 + -9528;
	// stw r30,216(r31)
	REX_STORE_U32(r31.u32 + 216, r30.u32);
	// addi r24,r24,-15400
	r24.s64 = r24.s64 + -15400;
	// stw r11,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r11.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r6,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r6.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r19,248(r31)
	REX_STORE_U32(r31.u32 + 248, r19.u32);
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// stw r18,252(r31)
	REX_STORE_U32(r31.u32 + 252, r18.u32);
	// stw r29,256(r31)
	REX_STORE_U32(r31.u32 + 256, r29.u32);
	// stw r28,260(r31)
	REX_STORE_U32(r31.u32 + 260, r28.u32);
	// stw r27,264(r31)
	REX_STORE_U32(r31.u32 + 264, r27.u32);
	// stw r26,268(r31)
	REX_STORE_U32(r31.u32 + 268, r26.u32);
	// stw r25,272(r31)
	REX_STORE_U32(r31.u32 + 272, r25.u32);
	// stw r24,276(r31)
	REX_STORE_U32(r31.u32 + 276, r24.u32);
	// stw r9,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r9.u32);
	// stw r8,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r8.u32);
	// stw r10,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r10.u32);
	// stw r7,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r7.u32);
	// bl 0x822d5870
	ctx.lr = 0x8216DD4C;
	sub_822D5870(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821b0030
	ctx.lr = 0x8216DD54;
	sub_821B0030(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216dd6c
	if (ctx.cr6.eq) goto loc_8216DD6C;
	// bl 0x821523e0
	ctx.lr = 0x8216DD68;
	sub_821523E0(ctx, base);
	// b 0x8216dd70
	goto loc_8216DD70;
loc_8216DD6C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8216DD70:
	// li r5,5624
	ctx.r5.s64 = 5624;
	// stw r3,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x8216DD80;
	sub_822D5870(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r4,r4,38912
	ctx.r4.u64 = ctx.r4.u64 | 38912;
	// stw r29,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r29.u32);
	// bl 0x821af9a0
	ctx.lr = 0x8216DD98;
	sub_821AF9A0(ctx, base);
	// lwz r5,108(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r27,1
	r27.s64 = 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r28,r11,432
	r28.s64 = ctx.r11.s64 + 432;
	// sth r27,4(r5)
	REX_STORE_U16(ctx.r5.u32 + 4, r27.u16);
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lfs f0,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// addi r11,r11,24628
	ctx.r11.s64 = ctx.r11.s64 + 24628;
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r5,108(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 108);
	// stw r30,16(r5)
	REX_STORE_U32(ctx.r5.u32 + 16, r30.u32);
	// lwz r5,40(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 40);
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 108);
	// stw r5,44(r4)
	REX_STORE_U32(ctx.r4.u32 + 44, ctx.r5.u32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// stw r8,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r8.u32);
	// lbz r8,2971(r28)
	ctx.r8.u64 = REX_LOAD_U8(r28.u32 + 2971);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stw r30,24624(r7)
	REX_STORE_U32(ctx.r7.u32 + 24624, r30.u32);
	// stw r11,24620(r6)
	REX_STORE_U32(ctx.r6.u32 + 24620, ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r10,r5,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// sth r30,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, r30.u16);
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
	// beq cr6,0x8216de28
	if (ctx.cr6.eq) goto loc_8216DE28;
	// addi r10,r10,104
	ctx.r10.s64 = ctx.r10.s64 + 104;
loc_8216DE28:
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stfs f0,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,136(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// stfs f31,152(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// stw r30,156(r31)
	REX_STORE_U32(r31.u32 + 156, r30.u32);
	// lfs f2,2348(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2348);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2340(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2340);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// stfs f31,152(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 152, temp.u32);
	// stfs f31,156(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// stfs f31,160(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 160, temp.u32);
	// stfs f0,164(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 164, temp.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// stfs f31,168(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// stfs f31,172(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// stfs f31,176(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// stfs f0,180(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// stfs f31,184(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 184, temp.u32);
	// stfs f31,188(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 188, temp.u32);
	// stfs f31,192(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// stfs f31,196(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 196, temp.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// stfs f31,200(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 200, temp.u32);
	// stfs f31,204(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 204, temp.u32);
	// stfs f31,208(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 208, temp.u32);
	// stfs f31,212(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 212, temp.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// stfs f31,216(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 216, temp.u32);
	// stfs f31,220(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 220, temp.u32);
	// stfs f31,224(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 224, temp.u32);
	// stfs f0,228(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 228, temp.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// stfs f31,232(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 232, temp.u32);
	// stfs f31,236(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 236, temp.u32);
	// stfs f31,240(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 240, temp.u32);
	// stfs f0,244(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 244, temp.u32);
	// bl 0x821ff668
	ctx.lr = 0x8216DEDC;
	sub_821FF668(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r28,84
	ctx.r3.s64 = r28.s64 + 84;
	// bl 0x821d6210
	ctx.lr = 0x8216DEE8;
	sub_821D6210(ctx, base);
	// bl 0x821d4920
	ctx.lr = 0x8216DEEC;
	sub_821D4920(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r27,28(r31)
	REX_STORE_U32(r31.u32 + 28, r27.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_821787D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lwz r11,27608(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 27608);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// stw r11,27608(r10)
	REX_STORE_U32(ctx.r10.u32 + 27608, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82178CE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,128(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 128);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82178d00
	if (ctx.cr6.eq) goto loc_82178D00;
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82178D00:
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// lfs f0,144(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// lfs f0,144(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// lfs f0,144(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,172(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// lfs f0,144(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,236(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 236, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217A4B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,212(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,208(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,40
	ctx.r10.s64 = 40;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,2000(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,2008(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	ctx.f11.f64 = double(temp.f32);
loc_8217A4F4:
	// lbz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8217a530
	if (!ctx.cr6.eq) goto loc_8217A530;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8217a514
	if (!ctx.cr6.lt) goto loc_8217A514;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x8217a52c
	goto loc_8217A52C;
loc_8217A514:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8217a524
	if (!ctx.cr6.gt) goto loc_8217A524;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x8217a52c
	goto loc_8217A52C;
loc_8217A524:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
loc_8217A52C:
	// stfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
loc_8217A530:
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// bdnz 0x8217a4f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217A4F4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217CFD8) {
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
	ctx.lr = 0x8217CFE0;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f14
	ctx.lr = 0x8217CFE8;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,192(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r14,12(r3)
	r14.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217d4f0
	if (ctx.cr6.eq) goto loc_8217D4F0;
	// lwz r11,196(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217d4f0
	if (ctx.cr6.eq) goto loc_8217D4F0;
	// lwz r10,252(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// li r23,0
	r23.s64 = 0;
	// stw r11,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// mr r15,r23
	r15.u64 = r23.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8217d500
	if (!ctx.cr6.gt) goto loc_8217D500;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f24,-18036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18036);
	f24.f64 = double(temp.f32);
	// lfs f28,16688(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16688);
	f28.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f25,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	f25.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f19,16624(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16624);
	f19.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f26,-4864(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -4864);
	f26.f64 = double(temp.f32);
	// lfs f29,-6100(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -6100);
	f29.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f20,-4868(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4868);
	f20.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f21,-5180(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -5180);
	f21.f64 = double(temp.f32);
	// lfs f27,-4872(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4872);
	f27.f64 = double(temp.f32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// lfs f22,-30132(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -30132);
	f22.f64 = double(temp.f32);
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lfs f30,1996(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	f30.f64 = double(temp.f32);
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lfs f31,1992(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// lfs f23,16172(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16172);
	f23.f64 = double(temp.f32);
	// mr r18,r23
	r18.u64 = r23.u64;
	// mr r19,r23
	r19.u64 = r23.u64;
	// li r17,1
	r17.s64 = 1;
	// ori r16,r4,65535
	r16.u64 = ctx.r4.u64 | 65535;
	// lis r20,-32170
	r20.s64 = -2108293120;
	// addi r24,r11,-23760
	r24.s64 = ctx.r11.s64 + -23760;
	// addi r25,r10,27296
	r25.s64 = ctx.r10.s64 + 27296;
	// addi r22,r9,320
	r22.s64 = ctx.r9.s64 + 320;
	// addi r21,r8,13128
	r21.s64 = ctx.r8.s64 + 13128;
loc_8217D0C4:
	// lwz r11,196(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 196);
	// lwz r10,192(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 192);
	// add r27,r19,r11
	r27.u64 = r19.u64 + ctx.r11.u64;
	// add r31,r18,r10
	r31.u64 = r18.u64 + ctx.r10.u64;
	// addi r28,r31,16
	r28.s64 = r31.s64 + 16;
	// lbz r11,76(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217d4d4
	if (ctx.cr0.eq) goto loc_8217D4D4;
	// lbz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 34);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// lbz r9,33(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 33);
	// lbz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 32);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r11,72(r27)
	REX_STORE_U16(r27.u32 + 72, ctx.r11.u16);
	// bl 0x82177820
	ctx.lr = 0x8217D104;
	sub_82177820(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,224(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f0,228(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8217d124
	if (!ctx.cr6.lt) goto loc_8217D124;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
loc_8217D124:
	// addi r26,r27,16
	r26.s64 = r27.s64 + 16;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e1b28
	ctx.lr = 0x8217D138;
	sub_820E1B28(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8217a1d8
	ctx.lr = 0x8217D144;
	sub_8217A1D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8217d1a0
	if (ctx.cr0.eq) goto loc_8217D1A0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r3,29428(r20)
	ctx.r3.u64 = REX_LOAD_U32(r20.u32 + 29428);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8211ea90
	ctx.lr = 0x8217D15C;
	sub_8211EA90(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f1,220(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 220);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1cc0
	ctx.lr = 0x8217D16C;
	sub_820E1CC0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lfs f1,216(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 216);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x820e20b0
	ctx.lr = 0x8217D180;
	sub_820E20B0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x820e22e8
	ctx.lr = 0x8217D188;
	sub_820E22E8(ctx, base);
	// lfs f0,1836(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r21.u32 + 1836);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 * f23.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8217d1b4
	if (!ctx.cr6.gt) goto loc_8217D1B4;
	// sth r17,44(r31)
	REX_STORE_U16(r31.u32 + 44, r17.u16);
	// b 0x8217d1b4
	goto loc_8217D1B4;
loc_8217D1A0:
	// lfs f0,216(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fsubs f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 - ctx.f0.f64));
	// bl 0x820e1cc0
	ctx.lr = 0x8217D1B4;
	sub_820E1CC0(ctx, base);
loc_8217D1B4:
	// lhz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 44);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8217d218
	if (!ctx.cr6.eq) goto loc_8217D218;
	// lhz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,48(r31)
	REX_STORE_U16(r31.u32 + 48, ctx.r11.u16);
	// lfs f0,244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 - ctx.f0.f64));
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// lhz r11,238(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 238);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8217d218
	if (ctx.cr6.lt) goto loc_8217D218;
loc_8217D204:
	// stb r23,76(r27)
	REX_STORE_U8(r27.u32 + 76, r23.u8);
	// lwz r11,248(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 248);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,248(r30)
	REX_STORE_U32(r30.u32 + 248, ctx.r11.u32);
	// b 0x8217d4d4
	goto loc_8217D4D4;
loc_8217D218:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e1b28
	ctx.lr = 0x8217D228;
	sub_820E1B28(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e1b28
	ctx.lr = 0x8217D238;
	sub_820E1B28(ctx, base);
	// lhz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 40);
	// lwz r10,4(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8217d398
	if (ctx.cr6.lt) goto loc_8217D398;
	// bne cr6,0x8217d3e4
	if (!ctx.cr6.eq) goto loc_8217D3E4;
	// lfs f13,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8217d27c
	if (!ctx.cr6.lt) goto loc_8217D27C;
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x8217d270
	if (!ctx.cr6.lt) goto loc_8217D270;
	// fmuls f0,f0,f22
	ctx.f0.f64 = double(float(ctx.f0.f64 * f22.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
loc_8217D270:
	// lfs f0,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,20(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 20, temp.u32);
loc_8217D27C:
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8217d380
	if (!ctx.cr6.eq) goto loc_8217D380;
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, f27.f64);
	// bge cr6,0x8217d2b8
	if (!ctx.cr6.lt) goto loc_8217D2B8;
	// mr r29,r23
	r29.u64 = r23.u64;
loc_8217D298:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// blt cr6,0x8217d2a8
	if (ctx.cr6.lt) goto loc_8217D2A8;
	// fcmpu cr6,f13,f26
	ctx.cr6.compare(ctx.f13.f64, f26.f64);
	// bge cr6,0x8217d2dc
	if (!ctx.cr6.lt) goto loc_8217D2DC;
loc_8217D2A8:
	// lhz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 40);
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + r16.u64;
	// sth r11,40(r31)
	REX_STORE_U16(r31.u32 + 40, ctx.r11.u16);
	// b 0x8217d3e4
	goto loc_8217D3E4;
loc_8217D2B8:
	// fcmpu cr6,f0,f21
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f21.f64);
	// bge cr6,0x8217d2c8
	if (!ctx.cr6.lt) goto loc_8217D2C8;
	// mr r29,r17
	r29.u64 = r17.u64;
	// b 0x8217d298
	goto loc_8217D298;
loc_8217D2C8:
	// fcmpu cr6,f0,f20
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f20.f64);
	// bge cr6,0x8217d2d8
	if (!ctx.cr6.lt) goto loc_8217D2D8;
	// li r29,2
	r29.s64 = 2;
	// b 0x8217d298
	goto loc_8217D298;
loc_8217D2D8:
	// li r29,3
	r29.s64 = 3;
loc_8217D2DC:
	// fcmpu cr6,f13,f19
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f19.f64);
	// ble cr6,0x8217d34c
	if (!ctx.cr6.gt) goto loc_8217D34C;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r25,120
	ctx.r9.s64 = r25.s64 + 120;
	// addi r10,r24,16
	ctx.r10.s64 = r24.s64 + 16;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82179a30
	ctx.lr = 0x8217D304;
	sub_82179A30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8217d310
	if (!ctx.cr0.eq) goto loc_8217D310;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8217D310:
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r25,24
	ctx.r11.s64 = r25.s64 + 24;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfsx f1,r9,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + r25.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821799d8
	ctx.lr = 0x8217D330;
	sub_821799D8(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// ble cr6,0x8217d204
	if (!ctx.cr6.gt) goto loc_8217D204;
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// bge cr6,0x8217d348
	if (!ctx.cr6.lt) goto loc_8217D348;
	// stfs f1,60(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// b 0x8217d34c
	goto loc_8217D34C;
loc_8217D348:
	// stfs f31,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
loc_8217D34C:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821798c8
	ctx.lr = 0x8217D358;
	sub_821798C8(ctx, base);
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8217d370
	if (ctx.cr0.eq) goto loc_8217D370;
	// fsubs f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 - f25.f64));
	// fmadds f0,f0,f28,f25
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f28.f64, f25.f64)));
	// b 0x8217d378
	goto loc_8217D378;
loc_8217D370:
	// fsubs f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fmadds f0,f0,f28,f31
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f28.f64, f31.f64)));
loc_8217D378:
	// stfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// b 0x8217d3e4
	goto loc_8217D3E4;
loc_8217D380:
	// fmuls f13,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, f24.f64);
	// ble cr6,0x8217d3e4
	if (!ctx.cr6.gt) goto loc_8217D3E4;
	// b 0x8217d2a8
	goto loc_8217D2A8;
loc_8217D398:
	// lfs f13,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, f29.f64);
	// blt cr6,0x8217d3b4
	if (ctx.cr6.lt) goto loc_8217D3B4;
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f26
	ctx.cr6.compare(ctx.f13.f64, f26.f64);
	// bge cr6,0x8217d3d4
	if (!ctx.cr6.lt) goto loc_8217D3D4;
loc_8217D3B4:
	// lfs f13,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8217d3d4
	if (!ctx.cr6.lt) goto loc_8217D3D4;
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, f30.f64);
	// bge cr6,0x8217d3d4
	if (!ctx.cr6.lt) goto loc_8217D3D4;
	// sth r23,50(r31)
	REX_STORE_U16(r31.u32 + 50, r23.u16);
	// b 0x8217d3e4
	goto loc_8217D3E4;
loc_8217D3D4:
	// lfs f13,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8217d3e4
	if (!ctx.cr6.gt) goto loc_8217D3E4;
	// sth r17,40(r31)
	REX_STORE_U16(r31.u32 + 40, r17.u16);
loc_8217D3E4:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x820e1b70
	ctx.lr = 0x8217D3F4;
	sub_820E1B70(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x820e1b70
	ctx.lr = 0x8217D404;
	sub_820E1B70(ctx, base);
	// lhz r11,42(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 42);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8217d48c
	if (ctx.cr6.lt) goto loc_8217D48C;
	// beq cr6,0x8217d464
	if (ctx.cr6.eq) goto loc_8217D464;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8217d4d4
	if (!ctx.cr6.lt) goto loc_8217D4D4;
	// lhz r11,46(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 46);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,46(r31)
	REX_STORE_U16(r31.u32 + 46, ctx.r11.u16);
	// lfs f0,240(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// lhz r10,46(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 46);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// lhz r11,236(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 236);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8217d4d4
	if (ctx.cr6.lt) goto loc_8217D4D4;
	// b 0x8217d204
	goto loc_8217D204;
loc_8217D464:
	// lhz r11,50(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 50);
	// stfs f31,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,50(r31)
	REX_STORE_U16(r31.u32 + 50, ctx.r11.u16);
	// bgt 0x8217d4d4
	if (ctx.cr0.gt) goto loc_8217D4D4;
	// li r11,2
	ctx.r11.s64 = 2;
	// sth r23,46(r31)
	REX_STORE_U16(r31.u32 + 46, r23.u16);
	// sth r11,42(r31)
	REX_STORE_U16(r31.u32 + 42, ctx.r11.u16);
	// b 0x8217d4d4
	goto loc_8217D4D4;
loc_8217D48C:
	// lhz r11,46(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 46);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// sth r11,46(r31)
	REX_STORE_U16(r31.u32 + 46, ctx.r11.u16);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfs f0,240(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// lhz r10,236(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 236);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8217d4d4
	if (ctx.cr6.lt) goto loc_8217D4D4;
	// stfs f31,52(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// sth r17,42(r31)
	REX_STORE_U16(r31.u32 + 42, r17.u16);
loc_8217D4D4:
	// lwz r11,252(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 252);
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// addi r19,r19,80
	r19.s64 = r19.s64 + 80;
	// addi r18,r18,84
	r18.s64 = r18.s64 + 84;
	// cmplw cr6,r15,r11
	ctx.cr6.compare<uint32_t>(r15.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8217d0c4
	if (ctx.cr6.lt) goto loc_8217D0C4;
	// b 0x8217d500
	goto loc_8217D500;
loc_8217D4F0:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
loc_8217D500:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f60
	ctx.lr = 0x8217D50C;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8218FA58) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,216(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// blt cr6,0x8218fa80
	if (ctx.cr6.lt) goto loc_8218FA80;
	// lfs f0,240(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lfs f13,244(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,232(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// stw r10,216(r3)
	REX_STORE_U32(ctx.r3.u32 + 216, ctx.r10.u32);
loc_8218FA80:
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,236(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82191470) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82191478;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,88(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82191534
	if (ctx.cr6.eq) goto loc_82191534;
	// bl 0x822caf80
	ctx.lr = 0x82191494;
	sub_822CAF80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821914ec
	if (ctx.cr0.eq) goto loc_821914EC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,2916
	ctx.r6.s64 = ctx.r11.s64 + 2916;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x821914C0;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8219152c
	if (ctx.cr0.eq) goto loc_8219152C;
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r9,2896
	ctx.r9.s64 = ctx.r9.s64 + 2896;
	// stb r11,84(r3)
	REX_STORE_U8(ctx.r3.u32 + 84, ctx.r11.u8);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// b 0x8219152c
	goto loc_8219152C;
loc_821914EC:
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// bl 0x822cb390
	ctx.lr = 0x821914F4;
	sub_822CB390(ctx, base);
	// lwz r30,88(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82191514
	if (ctx.cr6.eq) goto loc_82191514;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822cb5f0
	ctx.lr = 0x82191508;
	sub_822CB5F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c80a8
	ctx.lr = 0x82191510;
	sub_822C80A8(ctx, base);
	// stw r29,88(r31)
	REX_STORE_U32(r31.u32 + 88, r29.u32);
loc_82191514:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r3,r11,-32032
	ctx.r3.s64 = ctx.r11.s64 + -32032;
	// bl 0x821f1f38
	ctx.lr = 0x82191520;
	sub_821F1F38(ctx, base);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// stw r29,30848(r10)
	REX_STORE_U32(ctx.r10.u32 + 30848, r29.u32);
loc_8219152C:
	// bl 0x823caf88
	ctx.lr = 0x82191530;
	sub_823CAF88(ctx, base);
	// stw r29,88(r31)
	REX_STORE_U32(r31.u32 + 88, r29.u32);
loc_82191534:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82191544
	if (ctx.cr6.eq) goto loc_82191544;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
loc_82191544:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821955C8) {
	REX_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821957B8) {
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
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stb r30,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, r30.u8);
	// lwz r11,156(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stb r30,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, r30.u8);
	// lbz r11,164(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 164);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82195810
	if (ctx.cr0.eq) goto loc_82195810;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,160(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// bl 0x82199a88
	ctx.lr = 0x82195804;
	sub_82199A88(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,160(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 160);
	// bl 0x82199a80
	ctx.lr = 0x82195810;
	sub_82199A80(ctx, base);
loc_82195810:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,168(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 168);
	// li r9,12
	ctx.r9.s64 = 12;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stb r30,32(r10)
	REX_STORE_U8(ctx.r10.u32 + 32, r30.u8);
	// stfs f0,28(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stb r30,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, r30.u8);
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stb r30,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, r30.u8);
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stb r30,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, r30.u8);
	// stb r9,36(r31)
	REX_STORE_U8(r31.u32 + 36, ctx.r9.u8);
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

DEFINE_REX_FUNC(sub_82199AA8) {
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
	ctx.lr = 0x82199AB0;
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,4664
	ctx.r11.s64 = ctx.r11.s64 + 4664;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r7,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r7.u32);
	// clrlwi. r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r4,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x82199af4
	if (ctx.cr0.eq) goto loc_82199AF4;
	// li r4,118
	ctx.r4.s64 = 118;
	// li r30,117
	r30.s64 = 117;
	// b 0x82199afc
	goto loc_82199AFC;
loc_82199AF4:
	// li r4,88
	ctx.r4.s64 = 88;
	// li r30,87
	r30.s64 = 87;
loc_82199AFC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lfs f31,30028(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 30028);
	f31.f64 = double(temp.f32);
	// lfs f29,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f29.f64 = double(temp.f32);
	// lfs f30,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f30.f64 = double(temp.f32);
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f29,88(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821918a0
	ctx.lr = 0x82199B34;
	sub_821918A0(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// stfs f30,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stfs f29,88(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821918a0
	ctx.lr = 0x82199B60;
	sub_821918A0(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stb r10,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, ctx.r10.u8);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stb r9,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, ctx.r9.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8219CB70) {
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
	ctx.lr = 0x8219CB78;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r11,5880
	r31.s64 = ctx.r11.s64 + 5880;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 9, ctx.xer);
	// lfs f31,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
	// stfs f31,12(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// bgt cr6,0x8219ceec
	if (ctx.cr6.gt) goto loc_8219CEEC;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,6296
	ctx.r12.s64 = ctx.r12.s64 + 6296;
	// lbzx r0,r12,r5
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r5.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32230
	ctx.r12.s64 = -2112225280;
	// nop 
	// addi r12,r12,-13364
	ctx.r12.s64 = ctx.r12.s64 + -13364;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r5.u32) {
	case 0:
		goto loc_8219CBCC;
	case 1:
		goto loc_8219CC2C;
	case 2:
		goto loc_8219CCB8;
	case 3:
		goto loc_8219CCB8;
	case 4:
		goto loc_8219CD18;
	case 5:
		goto loc_8219CD68;
	case 6:
		goto loc_8219CD88;
	case 7:
		goto loc_8219CE18;
	case 8:
		goto loc_8219CE50;
	case 9:
		goto loc_8219CE64;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8219CBCC:
	// li r31,0
	r31.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8219f3d0
	ctx.lr = 0x8219CBFC;
	sub_8219F3D0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8219f3d0
	ctx.lr = 0x8219CC28;
	sub_8219F3D0(ctx, base);
	// b 0x8219ceec
	goto loc_8219CEEC;
loc_8219CC2C:
	// li r31,0
	r31.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8219f3d0
	ctx.lr = 0x8219CC5C;
	sub_8219F3D0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x8219f3d0
	ctx.lr = 0x8219CC88;
	sub_8219F3D0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8219f3d0
	ctx.lr = 0x8219CCB4;
	sub_8219F3D0(ctx, base);
	// b 0x8219ceec
	goto loc_8219CEEC;
loc_8219CCB8:
	// li r31,0
	r31.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8219f3d0
	ctx.lr = 0x8219CCE8;
	sub_8219F3D0(ctx, base);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,12
	ctx.r4.s64 = 12;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8219f3d0
	ctx.lr = 0x8219CD14;
	sub_8219F3D0(ctx, base);
	// b 0x8219ceec
	goto loc_8219CEEC;
loc_8219CD18:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8219c888
	ctx.lr = 0x8219CD34;
	sub_8219C888(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8219f3d0
	ctx.lr = 0x8219CD64;
	sub_8219F3D0(ctx, base);
	// b 0x8219ceec
	goto loc_8219CEEC;
loc_8219CD68:
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
loc_8219CD78:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8219CD7C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8219c888
	ctx.lr = 0x8219CD84;
	sub_8219C888(ctx, base);
	// b 0x8219ceec
	goto loc_8219CEEC;
loc_8219CD88:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,5
	ctx.r7.s64 = 5;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8219c888
	ctx.lr = 0x8219CDA4;
	sub_8219C888(ctx, base);
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r29,r11,6232
	r29.s64 = ctx.r11.s64 + 6232;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8219c888
	ctx.lr = 0x8219CDC8;
	sub_8219C888(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r8,10
	ctx.r8.s64 = 10;
	// li r7,7
	ctx.r7.s64 = 7;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8219c888
	ctx.lr = 0x8219CDE4;
	sub_8219C888(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r8,11
	ctx.r8.s64 = 11;
	// li r7,7
	ctx.r7.s64 = 7;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8219c888
	ctx.lr = 0x8219CE00;
	sub_8219C888(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r8,12
	ctx.r8.s64 = 12;
	// li r7,7
	ctx.r7.s64 = 7;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// b 0x8219cd7c
	goto loc_8219CD7C;
loc_8219CE18:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8219c888
	ctx.lr = 0x8219CE34;
	sub_8219C888(ctx, base);
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,6232
	ctx.r4.s64 = ctx.r11.s64 + 6232;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,24
	ctx.r6.s64 = 24;
	// b 0x8219cd7c
	goto loc_8219CD7C;
loc_8219CE50:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r8,14
	ctx.r8.s64 = 14;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8219cd78
	goto loc_8219CD78;
loc_8219CE64:
	// li r31,0
	r31.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x8219f3d0
	ctx.lr = 0x8219CE94;
	sub_8219F3D0(ctx, base);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// li r7,21
	ctx.r7.s64 = 21;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x8219f3d0
	ctx.lr = 0x8219CEC0;
	sub_8219F3D0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8219f3d0
	ctx.lr = 0x8219CEEC;
	sub_8219F3D0(ctx, base);
loc_8219CEEC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821A6E08) {
	REX_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x821a6d78
	sub_821A6D78(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A6FE0) {
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
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// bl 0x820e0130
	ctx.lr = 0x821A7014;
	sub_820E0130(ctx, base);
	// fmuls f0,f29,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f29.f64 * f29.f64));
	// stfs f1,4(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// fmadds f0,f31,f31,f0
	ctx.f0.f64 = double(float(std::fma(f31.f64, f31.f64, ctx.f0.f64)));
	// fsqrts f2,f0
	ctx.f2.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x820e0130
	ctx.lr = 0x821A702C;
	sub_820E0130(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// fneg f0,f1
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
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

DEFINE_REX_FUNC(sub_821A8B98) {
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
	// stwu r1,-2192(r1)
	ea = -2192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,37
	ctx.r3.u64 = ctx.r3.u64 | 37;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821A8BC8;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r8,256
	ctx.r8.s64 = 256;
	// bl 0x82208750
	ctx.lr = 0x821A8BE4;
	sub_82208750(ctx, base);
	// lbz r11,89(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 89);
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821a8bfc
	if (ctx.cr0.eq) goto loc_821A8BFC;
	// ori r3,r3,195
	ctx.r3.u64 = ctx.r3.u64 | 195;
	// b 0x821a8c00
	goto loc_821A8C00;
loc_821A8BFC:
	// ori r3,r3,26
	ctx.r3.u64 = ctx.r3.u64 | 26;
loc_821A8C00:
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821A8C08;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r7,r1,624
	ctx.r7.s64 = ctx.r1.s64 + 624;
	// li r8,256
	ctx.r8.s64 = 256;
	// bl 0x82208750
	ctx.lr = 0x821A8C24;
	sub_82208750(ctx, base);
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,42
	ctx.r3.u64 = ctx.r3.u64 | 42;
	// bl 0x820e68b8
	ctx.lr = 0x821A8C34;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r7,r1,1136
	ctx.r7.s64 = ctx.r1.s64 + 1136;
	// li r8,256
	ctx.r8.s64 = 256;
	// bl 0x82208750
	ctx.lr = 0x821A8C50;
	sub_82208750(ctx, base);
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,185
	ctx.r3.u64 = ctx.r3.u64 | 185;
	// bl 0x820e68b8
	ctx.lr = 0x821A8C60;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r7,r1,1648
	ctx.r7.s64 = ctx.r1.s64 + 1648;
	// li r8,256
	ctx.r8.s64 = 256;
	// bl 0x82208750
	ctx.lr = 0x821A8C7C;
	sub_82208750(ctx, base);
	// addi r31,r30,104
	r31.s64 = r30.s64 + 104;
	// addi r11,r1,1136
	ctx.r11.s64 = ctx.r1.s64 + 1136;
	// addi r10,r1,1648
	ctx.r10.s64 = ctx.r1.s64 + 1648;
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5870
	ctx.lr = 0x821A8CA0;
	sub_822D5870(ctx, base);
	// addi r10,r30,132
	ctx.r10.s64 = r30.s64 + 132;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,624
	ctx.r5.s64 = ctx.r1.s64 + 624;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82208d50
	ctx.lr = 0x821A8CC8;
	sub_82208D50(ctx, base);
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// beq cr6,0x821a8ce0
	if (ctx.cr6.eq) goto loc_821A8CE0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,14
	ctx.r10.s64 = 14;
	// stb r11,88(r30)
	REX_STORE_U8(r30.u32 + 88, ctx.r11.u8);
	// stw r10,84(r30)
	REX_STORE_U32(r30.u32 + 84, ctx.r10.u32);
loc_821A8CE0:
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
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

DEFINE_REX_FUNC(sub_821ADB18) {
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
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e58
	ctx.lr = 0x821ADB20;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x822d4f38
	ctx.lr = 0x821ADB28;
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r16,-32480(r11)
	r16.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x821ab048
	ctx.lr = 0x821ADB38;
	sub_821AB048(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// addi r25,r11,432
	r25.s64 = ctx.r11.s64 + 432;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// lwz r11,80(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821adb68
	if (!ctx.cr6.eq) goto loc_821ADB68;
	// ori r3,r3,141
	ctx.r3.u64 = ctx.r3.u64 | 141;
	// bl 0x820e68b8
	ctx.lr = 0x821ADB5C;
	sub_820E68B8(ctx, base);
	// bl 0x821aac50
	ctx.lr = 0x821ADB60;
	sub_821AAC50(ctx, base);
	// li r18,1
	r18.s64 = 1;
	// b 0x821adb78
	goto loc_821ADB78;
loc_821ADB68:
	// ori r3,r3,140
	ctx.r3.u64 = ctx.r3.u64 | 140;
	// bl 0x820e68b8
	ctx.lr = 0x821ADB70;
	sub_820E68B8(ctx, base);
	// bl 0x821aac50
	ctx.lr = 0x821ADB74;
	sub_821AAC50(ctx, base);
	// li r18,0
	r18.s64 = 0;
loc_821ADB78:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lwz r11,-10940(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -10940);
	// lwz r10,-10944(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -10944);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r17,r10
	r17.u64 = ctx.r10.u64;
	// blt cr6,0x821adb98
	if (ctx.cr6.lt) goto loc_821ADB98;
	// mr r17,r11
	r17.u64 = ctx.r11.u64;
loc_821ADB98:
	// lis r3,768
	ctx.r3.s64 = 50331648;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// bl 0x820e68b8
	ctx.lr = 0x821ADBA8;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfd f31,4000(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 4000);
	// li r6,8
	ctx.r6.s64 = 8;
	// lfs f30,8680(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8680);
	f30.f64 = double(temp.f32);
	// addi r31,r5,8664
	r31.s64 = ctx.r5.s64 + 8664;
	// lfs f1,8288(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8288);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// stfd f31,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, f31.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f31,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f31.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfs f30,28(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x821eaf80
	ctx.lr = 0x821ADC04;
	sub_821EAF80(ctx, base);
	// lis r3,768
	ctx.r3.s64 = 50331648;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// bl 0x820e68b8
	ctx.lr = 0x821ADC14;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,8660(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8660);
	ctx.f1.f64 = double(temp.f32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stfd f31,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, f31.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f31,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f31.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfs f30,28(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// li r6,8
	ctx.r6.s64 = 8;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x821eaf80
	ctx.lr = 0x821ADC58;
	sub_821EAF80(ctx, base);
	// mulli r11,r17,24
	ctx.r11.s64 = static_cast<int64_t>(r17.u64 * static_cast<uint64_t>(24));
	// addi r22,r11,90
	r22.s64 = ctx.r11.s64 + 90;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r19,r11,8648
	r19.s64 = ctx.r11.s64 + 8648;
	// lfs f30,8552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8552);
	f30.f64 = double(temp.f32);
	// lfs f29,15632(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15632);
	f29.f64 = double(temp.f32);
	// lwz r11,68(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 68);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// bge cr6,0x821adcc0
	if (!ctx.cr6.lt) goto loc_821ADCC0;
	// stfd f31,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, f31.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f31,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f31.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfs f29,20(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// stfs f30,28(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// li r6,10
	ctx.r6.s64 = 10;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x821eaf80
	ctx.lr = 0x821ADCC0;
	sub_821EAF80(ctx, base);
loc_821ADCC0:
	// rlwinm r24,r17,1,0,30
	r24.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// addic. r29,r24,1
	ctx.xer.ca = r24.u32 > 4294967294;
	r29.s64 = r24.s64 + 1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// lis r20,-32168
	r20.s64 = -2108162048;
	// li r31,0
	r31.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// addi r21,r11,-10936
	r21.s64 = ctx.r11.s64 + -10936;
	// addi r23,r10,-10552
	r23.s64 = ctx.r10.s64 + -10552;
	// ble 0x821add68
	if (!ctx.cr0.gt) goto loc_821ADD68;
	// li r26,60
	r26.s64 = 60;
	// li r30,0
	r30.s64 = 0;
loc_821ADCF0:
	// lwz r11,68(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 68);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// ble cr6,0x821add50
	if (!ctx.cr6.gt) goto loc_821ADD50;
	// lwz r11,-10960(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + -10960);
	// addi r10,r17,-1
	ctx.r10.s64 = r17.s64 + -1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x821add50
	if (!ctx.cr6.gt) goto loc_821ADD50;
	// addi r28,r23,16
	r28.s64 = r23.s64 + 16;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r4,r30,r28
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + r28.u32);
	// bl 0x821ace20
	ctx.lr = 0x821ADD24;
	sub_821ACE20(ctx, base);
	// addi r11,r21,16
	ctx.r11.s64 = r21.s64 + 16;
	// addi r6,r31,16
	ctx.r6.s64 = r31.s64 + 16;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r4,r30,r11
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x821ace20
	ctx.lr = 0x821ADD3C;
	sub_821ACE20(ctx, base);
	// addi r11,r23,20
	ctx.r11.s64 = r23.s64 + 20;
	// lwzx r4,r30,r28
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r30,r11
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x821ad758
	ctx.lr = 0x821ADD50;
	sub_821AD758(ctx, base);
loc_821ADD50:
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// addi r26,r26,24
	r26.s64 = r26.s64 + 24;
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(r27.s32, r29.s32, ctx.xer);
	// blt cr6,0x821adcf0
	if (ctx.cr6.lt) goto loc_821ADCF0;
loc_821ADD68:
	// li r30,0
	r30.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x821addc8
	if (!ctx.cr6.gt) goto loc_821ADDC8;
	// li r31,84
	r31.s64 = 84;
loc_821ADD7C:
	// lwz r11,68(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 68);
	// addi r10,r31,-24
	ctx.r10.s64 = r31.s64 + -24;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x821addb4
	if (!ctx.cr6.gt) goto loc_821ADDB4;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// bge cr6,0x821addb4
	if (!ctx.cr6.lt) goto loc_821ADDB4;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821ad1a0
	ctx.lr = 0x821ADDA4;
	sub_821AD1A0(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821ad1a0
	ctx.lr = 0x821ADDB4;
	sub_821AD1A0(ctx, base);
loc_821ADDB4:
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// cmpw cr6,r29,r24
	ctx.cr6.compare<int32_t>(r29.s32, r24.s32, ctx.xer);
	// blt cr6,0x821add7c
	if (ctx.cr6.lt) goto loc_821ADD7C;
loc_821ADDC8:
	// lwz r11,68(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 68);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// ble cr6,0x821ae280
	if (!ctx.cr6.gt) goto loc_821AE280;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821ab080
	ctx.lr = 0x821ADDDC;
	sub_821AB080(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm. r10,r3,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f28,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f28.f64 = double(temp.f32);
	// beq 0x821ade08
	if (ctx.cr0.eq) goto loc_821ADE08;
	// lwz r11,-10960(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + -10960);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,-10960(r20)
	REX_STORE_U32(r20.u32 + -10960, ctx.r11.u32);
	// bge 0x821ade2c
	if (!ctx.cr0.lt) goto loc_821ADE2C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-10960(r20)
	REX_STORE_U32(r20.u32 + -10960, ctx.r11.u32);
	// b 0x821ade38
	goto loc_821ADE38;
loc_821ADE08:
	// rlwinm. r11,r3,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ade38
	if (ctx.cr0.eq) goto loc_821ADE38;
	// lwz r11,-10960(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + -10960);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-10960(r20)
	REX_STORE_U32(r20.u32 + -10960, ctx.r11.u32);
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r17.s32, ctx.xer);
	// ble cr6,0x821ade2c
	if (!ctx.cr6.gt) goto loc_821ADE2C;
	// stw r17,-10960(r20)
	REX_STORE_U32(r20.u32 + -10960, r17.u32);
	// b 0x821ade38
	goto loc_821ADE38;
loc_821ADE2C:
	// li r3,25
	ctx.r3.s64 = 25;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x8212bc38
	ctx.lr = 0x821ADE38;
	sub_8212BC38(ctx, base);
loc_821ADE38:
	// lwz r11,-10960(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + -10960);
	// addi r10,r17,-1
	ctx.r10.s64 = r17.s64 + -1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x821ae0fc
	if (!ctx.cr6.gt) goto loc_821AE0FC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r8,0
	ctx.r8.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f5,8644(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8644);
	ctx.f5.f64 = double(temp.f32);
	// ori r8,r8,32832
	ctx.r8.u64 = ctx.r8.u64 | 32832;
	// lfs f4,16036(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16036);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-30128(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -30128);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8540(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8540);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x821e8688
	ctx.lr = 0x821ADE7C;
	sub_821E8688(ctx, base);
	// lwz r11,68(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 68);
	// li r27,14
	r27.s64 = 14;
	// li r28,14
	r28.s64 = 14;
	// li r29,14
	r29.s64 = 14;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821adec8
	if (ctx.cr0.eq) goto loc_821ADEC8;
	// lbz r11,26(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 26);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821adec4
	if (ctx.cr6.eq) goto loc_821ADEC4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821adebc
	if (ctx.cr6.eq) goto loc_821ADEBC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821adec8
	if (!ctx.cr6.eq) goto loc_821ADEC8;
	// li r28,8
	r28.s64 = 8;
	// b 0x821adec8
	goto loc_821ADEC8;
loc_821ADEBC:
	// li r29,8
	r29.s64 = 8;
	// b 0x821adec8
	goto loc_821ADEC8;
loc_821ADEC4:
	// li r27,8
	r27.s64 = 8;
loc_821ADEC8:
	// lis r3,768
	ctx.r3.s64 = 50331648;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// bl 0x820e68b8
	ctx.lr = 0x821ADED8;
	sub_820E68B8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,120
	ctx.r3.u64 = ctx.r3.u64 | 120;
	// bl 0x820e68b8
	ctx.lr = 0x821ADEEC;
	sub_820E68B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x822d55f8
	ctx.lr = 0x821ADEFC;
	sub_822D55F8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,8628
	r31.s64 = ctx.r11.s64 + 8628;
	// lfs f31,28664(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28664);
	f31.f64 = double(temp.f32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f30,8640(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8640);
	f30.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stfs f31,20(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// stfs f30,28(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x821eaf80
	ctx.lr = 0x821ADF3C;
	sub_821EAF80(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-10948(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -10948);
	// cmpwi cr6,r11,999
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 999, ctx.xer);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// ble cr6,0x821adf54
	if (!ctx.cr6.gt) goto loc_821ADF54;
	// li r8,999
	ctx.r8.s64 = 999;
loc_821ADF54:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f31,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r30,r11,8612
	r30.s64 = ctx.r11.s64 + 8612;
	// lfs f31,8624(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8624);
	f31.f64 = double(temp.f32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stfs f31,28(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x821eaf80
	ctx.lr = 0x821ADF8C;
	sub_821EAF80(ctx, base);
	// lis r3,768
	ctx.r3.s64 = 50331648;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// bl 0x820e68b8
	ctx.lr = 0x821ADF9C;
	sub_820E68B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,120
	ctx.r3.u64 = ctx.r3.u64 | 120;
	// bl 0x820e68b8
	ctx.lr = 0x821ADFB0;
	sub_820E68B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x822d55f8
	ctx.lr = 0x821ADFC0;
	sub_822D55F8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f30,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f30,-23928(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23928);
	f30.f64 = double(temp.f32);
	// stfs f30,20(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x821ADFF0;
	sub_821EAF80(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-10952(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -10952);
	// cmpwi cr6,r11,999
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 999, ctx.xer);
	// ble cr6,0x821ae004
	if (!ctx.cr6.gt) goto loc_821AE004;
	// li r11,999
	ctx.r11.s64 = 999;
loc_821AE004:
	// stfs f31,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// stfs f30,20(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x821eaf80
	ctx.lr = 0x821AE030;
	sub_821EAF80(ctx, base);
	// lis r3,768
	ctx.r3.s64 = 50331648;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,20
	ctx.r3.u64 = ctx.r3.u64 | 20;
	// bl 0x820e68b8
	ctx.lr = 0x821AE040;
	sub_820E68B8(ctx, base);
	// stfs f29,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f2,8608(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8608);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x821AE06C;
	sub_821EAF80(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-10956(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -10956);
	// cmpwi cr6,r11,999
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 999, ctx.xer);
	// ble cr6,0x821ae080
	if (!ctx.cr6.gt) goto loc_821AE080;
	// li r11,999
	ctx.r11.s64 = 999;
loc_821AE080:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f29,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r5,r7,8588
	ctx.r5.s64 = ctx.r7.s64 + 8588;
	// lfd f4,-24880(r9)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r9.u32 + -24880);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lfs f2,8604(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8604);
	ctx.f2.f64 = double(temp.f32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stfd f4,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.f4.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f4,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f4.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x821AE0D0;
	sub_821EAF80(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r31,r11,-11216
	r31.s64 = ctx.r11.s64 + -11216;
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821ae1c4
	if (!ctx.cr6.eq) goto loc_821AE1C4;
	// li r3,26
	ctx.r3.s64 = 26;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x8212bc38
	ctx.lr = 0x821AE0F0;
	sub_8212BC38(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// b 0x821ae1c4
	goto loc_821AE1C4;
loc_821AE0FC:
	// stfs f30,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// stfd f31,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f31.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfs f29,20(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// stfd f31,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, f31.u64);
	// li r6,10
	ctx.r6.s64 = 10;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// bl 0x821eaf80
	ctx.lr = 0x821AE138;
	sub_821EAF80(ctx, base);
	// lwz r4,-10960(r20)
	ctx.r4.u64 = REX_LOAD_U32(r20.u32 + -10960);
	// li r31,0
	r31.s64 = 0;
	// addic. r11,r4,1
	ctx.xer.ca = ctx.r4.u32 > 4294967294;
	ctx.r11.s64 = ctx.r4.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821ae1a8
	if (!ctx.cr0.gt) goto loc_821AE1A8;
	// li r30,0
	r30.s64 = 0;
loc_821AE14C:
	// addi r29,r23,16
	r29.s64 = r23.s64 + 16;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r4,r30,r29
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + r29.u32);
	// bl 0x821ace20
	ctx.lr = 0x821AE164;
	sub_821ACE20(ctx, base);
	// addi r11,r21,16
	ctx.r11.s64 = r21.s64 + 16;
	// addi r6,r31,16
	ctx.r6.s64 = r31.s64 + 16;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r4,r30,r11
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x821ace20
	ctx.lr = 0x821AE17C;
	sub_821ACE20(ctx, base);
	// addi r11,r23,20
	ctx.r11.s64 = r23.s64 + 20;
	// lwzx r4,r30,r29
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r30,r11
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x821ad758
	ctx.lr = 0x821AE190;
	sub_821AD758(ctx, base);
	// lwz r4,-10960(r20)
	ctx.r4.u64 = REX_LOAD_U32(r20.u32 + -10960);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821ae14c
	if (ctx.cr6.lt) goto loc_821AE14C;
loc_821AE1A8:
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821ad1a0
	ctx.lr = 0x821AE1B4;
	sub_821AD1A0(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r4,-10960(r20)
	ctx.r4.u64 = REX_LOAD_U32(r20.u32 + -10960);
	// bl 0x821ad1a0
	ctx.lr = 0x821AE1C4;
	sub_821AD1A0(ctx, base);
loc_821AE1C4:
	// lwz r11,-10960(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + -10960);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r31,r10,13128
	r31.s64 = ctx.r10.s64 + 13128;
	// ble cr6,0x821ae224
	if (!ctx.cr6.gt) goto loc_821AE224;
	// lwz r11,1856(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1856);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f29,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// rlwinm r11,r11,29,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// addi r5,r9,8572
	ctx.r5.s64 = ctx.r9.s64 + 8572;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r6,-1
	ctx.r6.s64 = -1;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,8584(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8584);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x821AE220;
	sub_821EAF80(ctx, base);
	// lwz r11,-10960(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + -10960);
loc_821AE224:
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r17.s32, ctx.xer);
	// bge cr6,0x821ae274
	if (!ctx.cr6.lt) goto loc_821AE274;
	// lwz r11,1856(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1856);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f29,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// rlwinm r11,r11,29,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r5,r9,8556
	ctx.r5.s64 = ctx.r9.s64 + 8556;
	// lfs f0,8568(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8568);
	ctx.f0.f64 = double(temp.f32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x821AE274;
	sub_821EAF80(ctx, base);
loc_821AE274:
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-11224(r10)
	REX_STORE_U8(ctx.r10.u32 + -11224, ctx.r11.u8);
loc_821AE280:
	// lwz r11,68(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r16)
	REX_STORE_U32(r16.u32 + 68, ctx.r11.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x822d4f84
	ctx.lr = 0x821AE298;
	// b 0x822d4ea8
	return;
}

DEFINE_REX_FUNC(sub_821CE320) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e50
	ctx.lr = 0x821CE328;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f2c
	ctx.lr = 0x821CE330;
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// lwz r31,84(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r30,80(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r19,8(r31)
	r19.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r30,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821cf6f4
	if (ctx.cr6.eq) goto loc_821CF6F4;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r28,r11,432
	r28.s64 = ctx.r11.s64 + 432;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// lwz r11,508(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 508);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821cf6f4
	if (ctx.cr6.eq) goto loc_821CF6F4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c2f08
	ctx.lr = 0x821CE37C;
	sub_821C2F08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821cf6f4
	if (ctx.cr0.eq) goto loc_821CF6F4;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-9536
	ctx.r11.s64 = ctx.r11.s64 + -9536;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821cf6f4
	if (ctx.cr6.eq) goto loc_821CF6F4;
	// lwz r11,10140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10140);
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r10,r11,20156
	ctx.r10.s64 = ctx.r11.s64 + 20156;
	// lfs f1,20156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20156);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,20164(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20164);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x820e0130
	ctx.lr = 0x821CE3B8;
	sub_820E0130(ctx, base);
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821cf6f4
	if (ctx.cr6.eq) goto loc_821CF6F4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lhz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 16);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r16,0
	r16.s64 = 0;
	// addi r29,r10,23240
	r29.s64 = ctx.r10.s64 + 23240;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f31,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f31.f64 = double(temp.f32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// beq 0x821cf5c8
	if (ctx.cr0.eq) goto loc_821CF5C8;
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821cf5c8
	if (!ctx.cr0.eq) goto loc_821CF5C8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lbz r10,211(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 211);
	// lwz r17,872(r31)
	r17.u64 = REX_LOAD_U32(r31.u32 + 872);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r15,872(r11)
	r15.u64 = REX_LOAD_U32(ctx.r11.u32 + 872);
	// beq 0x821ce42c
	if (ctx.cr0.eq) goto loc_821CE42C;
	// lhz r11,74(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 74);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821ce42c
	if (!ctx.cr0.eq) goto loc_821CE42C;
	// lwz r11,5464(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821ce42c
	if (!ctx.cr6.eq) goto loc_821CE42C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,5464(r31)
	REX_STORE_U32(r31.u32 + 5464, ctx.r11.u32);
loc_821CE42C:
	// lbz r11,199(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 199);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821ce44c
	if (ctx.cr0.eq) goto loc_821CE44C;
	// lhz r11,620(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 620);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x821ce44c
	if (ctx.cr6.lt) goto loc_821CE44C;
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r11,5628(r31)
	REX_STORE_U32(r31.u32 + 5628, ctx.r11.u32);
loc_821CE44C:
	// lwz r11,5628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821ce4c8
	if (!ctx.cr6.eq) goto loc_821CE4C8;
	// lbz r11,201(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 201);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821ce4c8
	if (!ctx.cr0.eq) goto loc_821CE4C8;
	// lbz r11,210(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 210);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821ce4c8
	if (ctx.cr0.eq) goto loc_821CE4C8;
	// lbz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 180);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821ce494
	if (!ctx.cr0.eq) goto loc_821CE494;
	// lbz r11,178(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 178);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821ce494
	if (!ctx.cr0.eq) goto loc_821CE494;
	// lbz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 164);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821ce4c8
	if (ctx.cr0.eq) goto loc_821CE4C8;
loc_821CE494:
	// lbz r11,174(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 174);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821ce4a8
	if (ctx.cr0.eq) goto loc_821CE4A8;
	// lfs f13,8128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8128);
	ctx.f13.f64 = double(temp.f32);
	// b 0x821ce4ac
	goto loc_821CE4AC;
loc_821CE4A8:
	// lfs f13,7232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 7232);
	ctx.f13.f64 = double(temp.f32);
loc_821CE4AC:
	// lfs f0,10236(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 10236);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x821ce4c8
	if (!ctx.cr6.gt) goto loc_821CE4C8;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821ce4c8
	if (ctx.cr6.gt) goto loc_821CE4C8;
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,5628(r31)
	REX_STORE_U32(r31.u32 + 5628, ctx.r11.u32);
loc_821CE4C8:
	// lwz r11,5628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5628);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// stw r11,5632(r31)
	REX_STORE_U32(r31.u32 + 5632, ctx.r11.u32);
	// bne cr6,0x821ce4f8
	if (!ctx.cr6.eq) goto loc_821CE4F8;
	// lwz r11,5628(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 5628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ce4f8
	if (ctx.cr6.eq) goto loc_821CE4F8;
	// lwz r11,5780(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5780);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x821c3ba0
	ctx.lr = 0x821CE4F4;
	sub_821C3BA0(ctx, base);
	// stw r16,5632(r31)
	REX_STORE_U32(r31.u32 + 5632, r16.u32);
loc_821CE4F8:
	// lwz r11,5628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ce540
	if (ctx.cr6.eq) goto loc_821CE540;
	// lwz r11,5628(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 5628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ce540
	if (ctx.cr6.eq) goto loc_821CE540;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x821ce540
	if (!ctx.cr6.eq) goto loc_821CE540;
	// lwz r11,6796(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6796);
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// stw r16,5632(r31)
	REX_STORE_U32(r31.u32 + 5632, r16.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821ce540
	if (!ctx.cr6.gt) goto loc_821CE540;
	// addi r9,r31,5856
	ctx.r9.s64 = r31.s64 + 5856;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821CE534:
	// stbx r16,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, r16.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x821ce534
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821CE534;
loc_821CE540:
	// lwz r11,5632(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821cf5a8
	if (ctx.cr6.eq) goto loc_821CF5A8;
	// lwz r20,5768(r31)
	r20.u64 = REX_LOAD_U32(r31.u32 + 5768);
	// mr r14,r16
	r14.u64 = r16.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// bne cr6,0x821ce570
	if (!ctx.cr6.eq) goto loc_821CE570;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822d5870
	ctx.lr = 0x821CE56C;
	sub_822D5870(ctx, base);
	// addi r20,r1,160
	r20.s64 = ctx.r1.s64 + 160;
loc_821CE570:
	// lbz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 180);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821ce590
	if (ctx.cr0.eq) goto loc_821CE590;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821be2d0
	ctx.lr = 0x821CE590;
	sub_821BE2D0(ctx, base);
loc_821CE590:
	// lwz r9,5632(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 5632);
	// cmpwi cr6,r9,14
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 14, ctx.xer);
	// beq cr6,0x821ce5c8
	if (ctx.cr6.eq) goto loc_821CE5C8;
	// lha r11,58(r20)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r20.u32 + 58));
	// lfs f0,5472(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5472);
	ctx.f0.f64 = double(temp.f32);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// stfs f31,5504(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 5504, temp.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f31,5500(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 5500, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,5496(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5496, temp.u32);
	// b 0x821ce5e0
	goto loc_821CE5E0;
loc_821CE5C8:
	// lfs f13,5496(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5496);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,5504(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 5504);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,12624(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12624);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f0,f13,f0,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, -ctx.f12.f64)));
loc_821CE5E0:
	// lwz r11,5556(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5556);
	// stfs f0,5488(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5488, temp.u32);
	// lwz r10,5564(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5564);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,5560(r31)
	REX_STORE_U32(r31.u32 + 5560, ctx.r11.u32);
	// bge cr6,0x821ce5fc
	if (!ctx.cr6.lt) goto loc_821CE5FC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_821CE5FC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,5564(r31)
	REX_STORE_U32(r31.u32 + 5564, ctx.r11.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// li r18,1
	r18.s64 = 1;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// lfs f27,2384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2384);
	f27.f64 = double(temp.f32);
	// lfs f30,16308(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16308);
	f30.f64 = double(temp.f32);
	// bgt cr6,0x821ce664
	if (ctx.cr6.gt) goto loc_821CE664;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,12104
	ctx.r12.s64 = ctx.r12.s64 + 12104;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32227
	ctx.r12.s64 = -2112028672;
	// addi r12,r12,-6584
	ctx.r12.s64 = ctx.r12.s64 + -6584;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821CE8FC;
	case 1:
		goto loc_821CE6E8;
	case 2:
		goto loc_821CE664;
	case 3:
		goto loc_821CE664;
	case 4:
		goto loc_821CE664;
	case 5:
		goto loc_821CE648;
	case 6:
		goto loc_821CE664;
	case 7:
		goto loc_821CEA68;
	case 8:
		goto loc_821CE664;
	case 9:
		goto loc_821CE6E8;
	case 10:
		goto loc_821CE9B0;
	case 11:
		goto loc_821CE98C;
	case 12:
		goto loc_821CE6E8;
	case 13:
		goto loc_821CE6E8;
	case 14:
		goto loc_821CE6E8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_821CE648:
	// lwz r11,5548(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5548);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5548(r31)
	REX_STORE_U32(r31.u32 + 5548, ctx.r11.u32);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x821ce660
	if (ctx.cr6.lt) goto loc_821CE660;
	// li r11,10
	ctx.r11.s64 = 10;
loc_821CE660:
	// stw r11,5548(r31)
	REX_STORE_U32(r31.u32 + 5548, ctx.r11.u32);
loc_821CE664:
	// lwz r11,5544(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5544);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r4,34
	ctx.r4.s64 = 34;
	// stw r11,5544(r31)
	REX_STORE_U32(r31.u32 + 5544, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821be2d0
	ctx.lr = 0x821CE684;
	sub_821BE2D0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821e2580
	ctx.lr = 0x821CE68C;
	sub_821E2580(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821e34e0
	ctx.lr = 0x821CE698;
	sub_821E34E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,12176
	ctx.r11.s64 = ctx.r11.s64 + 12176;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821CE6AC;
	sub_821E2FD0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x821e1f00
	ctx.lr = 0x821CE6B4;
	sub_821E1F00(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x821e34e0
	ctx.lr = 0x821CE6C0;
	sub_821E34E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r11,r11,12152
	ctx.r11.s64 = ctx.r11.s64 + 12152;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821CE6D4;
	sub_821E2FD0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x821c8b90
	ctx.lr = 0x821CE6E0;
	sub_821C8B90(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x821d8b60
	ctx.lr = 0x821CE6E8;
	sub_821D8B60(ctx, base);
loc_821CE6E8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c3a88
	ctx.lr = 0x821CE6F0;
	sub_821C3A88(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,872(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 872);
	// lfs f0,5584(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5584);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,5568(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 5568, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// lfs f29,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f29.f64 = double(temp.f32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// fmr f13,f29
	ctx.f13.f64 = f29.f64;
	// ble cr6,0x821ce74c
	if (!ctx.cr6.gt) goto loc_821CE74C;
	// rlwinm. r10,r11,0,13,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x78000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821ce74c
	if (ctx.cr0.eq) goto loc_821CE74C;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821ce734
	if (ctx.cr0.eq) goto loc_821CE734;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,16272(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16272);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f0,f13,f29
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, f29.f64)));
	// fdivs f13,f29,f13
	ctx.f13.f64 = double(float(f29.f64 / ctx.f13.f64));
loc_821CE734:
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ce74c
	if (ctx.cr0.eq) goto loc_821CE74C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16232);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f29
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, f29.f64)));
	// fdivs f13,f29,f0
	ctx.f13.f64 = double(float(f29.f64 / ctx.f0.f64));
loc_821CE74C:
	// fmuls f11,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// stfs f11,5568(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 5568, temp.u32);
	// lhz r11,10(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821ce770
	if (ctx.cr0.eq) goto loc_821CE770;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c2b60
	ctx.lr = 0x821CE768;
	sub_821C2B60(ctx, base);
	// fmuls f0,f1,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// stfs f0,5568(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5568, temp.u32);
loc_821CE770:
	// lhz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 88);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bne cr6,0x821ce78c
	if (!ctx.cr6.eq) goto loc_821CE78C;
	// lfs f13,5568(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5568);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,252(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,5568(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5568, temp.u32);
loc_821CE78C:
	// lhz r11,88(r19)
	ctx.r11.u64 = REX_LOAD_U16(r19.u32 + 88);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bne cr6,0x821ce7e0
	if (!ctx.cr6.eq) goto loc_821CE7E0;
	// lfs f0,248(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x821ce7d4
	if (!ctx.cr6.lt) goto loc_821CE7D4;
	// lha r11,258(r28)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r28.u32 + 258));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lha r10,260(r28)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r28.u32 + 260));
	// lfs f0,16688(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16688);
	ctx.f0.f64 = double(temp.f32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f13,f13,f30,f29
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f30.f64, f29.f64)));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_821CE7D4:
	// lfs f13,5568(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5568);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,5568(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5568, temp.u32);
loc_821CE7E0:
	// lfs f13,5568(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5568);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8(r15)
	temp.u32 = REX_LOAD_U32(r15.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,5568(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5568, temp.u32);
	// lfs f28,16228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16228);
	f28.f64 = double(temp.f32);
	// lfs f13,12(r17)
	temp.u32 = REX_LOAD_U32(r17.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,5568(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 5568, temp.u32);
	// lhz r11,30(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 30);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x821ceabc
	if (ctx.cr6.eq) goto loc_821CEABC;
	// lfs f12,5468(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 5468);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,5488(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f13,f13,f0,f12
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f0.f64, -ctx.f12.f64)));
	// lfs f12,5476(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 5476);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x821ceabc
	if (!ctx.cr6.lt) goto loc_821CEABC;
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + f28.f64));
	// stfs f0,5488(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5488, temp.u32);
	// mr r22,r18
	r22.u64 = r18.u64;
loc_821CE834:
	// lwz r11,5788(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 5788);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ce868
	if (ctx.cr6.eq) goto loc_821CE868;
	// lwz r10,5632(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5632);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// beq cr6,0x821ce868
	if (ctx.cr6.eq) goto loc_821CE868;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stfs f0,5848(r19)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r19.u32 + 5848, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bf940
	ctx.lr = 0x821CE868;
	sub_821BF940(ctx, base);
loc_821CE868:
	// lhz r30,72(r20)
	r30.u64 = REX_LOAD_U16(r20.u32 + 72);
	// li r27,-1
	r27.s64 = -1;
	// lwz r11,5560(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5560);
	// li r25,-1
	r25.s64 = -1;
	// mr r26,r18
	r26.u64 = r18.u64;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	f30.f64 = f31.f64;
	// mr r28,r16
	r28.u64 = r16.u64;
	// fmr f26,f29
	f26.f64 = f29.f64;
	// fmr f25,f29
	f25.f64 = f29.f64;
	// li r23,-1
	r23.s64 = -1;
	// li r24,-1
	r24.s64 = -1;
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x821ce8cc
	if (ctx.cr6.lt) goto loc_821CE8CC;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lhz r29,74(r20)
	r29.u64 = REX_LOAD_U16(r20.u32 + 74);
	// bl 0x821e2228
	ctx.lr = 0x821CE8AC;
	sub_821E2228(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821e34e0
	ctx.lr = 0x821CE8B8;
	sub_821E34E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r11,r11,12160
	ctx.r11.s64 = ctx.r11.s64 + 12160;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821CE8CC;
	sub_821E2FD0(ctx, base);
loc_821CE8CC:
	// extsh r11,r30
	ctx.r11.s64 = r30.s16;
	// lwz r10,5916(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5916);
	// extsh r9,r29
	ctx.r9.s64 = r29.s16;
	// lbz r8,220(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 220);
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// mulli r9,r9,52
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(52));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x821ceac4
	if (ctx.cr0.eq) goto loc_821CEAC4;
	// lbz r7,213(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 213);
	// b 0x821ceac8
	goto loc_821CEAC8;
loc_821CE8FC:
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,57
	ctx.r4.s64 = 57;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821be2d0
	ctx.lr = 0x821CE910;
	sub_821BE2D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x821c8b90
	ctx.lr = 0x821CE91C;
	sub_821C8B90(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x821d8ba8
	ctx.lr = 0x821CE924;
	sub_821D8BA8(ctx, base);
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r11,r11,-27144
	ctx.r11.s64 = ctx.r11.s64 + -27144;
	// mulli r10,r10,9504
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(9504));
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x820f9200
	ctx.lr = 0x821CE944;
	sub_820F9200(ctx, base);
	// lha r11,5822(r19)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r19.u32 + 5822));
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x821ce95c
	if (!ctx.cr6.lt) goto loc_821CE95C;
	// lha r11,5824(r19)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r19.u32 + 5824));
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x821ce6e8
	if (ctx.cr6.lt) goto loc_821CE6E8;
loc_821CE95C:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x821e1ca0
	ctx.lr = 0x821CE964;
	sub_821E1CA0(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x821e34e0
	ctx.lr = 0x821CE970;
	sub_821E34E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addi r11,r11,12136
	ctx.r11.s64 = ctx.r11.s64 + 12136;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821CE984;
	sub_821E2FD0(ctx, base);
	// mr r14,r18
	r14.u64 = r18.u64;
	// b 0x821ce6e8
	goto loc_821CE6E8;
loc_821CE98C:
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,19
	ctx.r5.s64 = 19;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821be318
	ctx.lr = 0x821CE9A0;
	sub_821BE318(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x821c8b90
	ctx.lr = 0x821CE9AC;
	sub_821C8B90(ctx, base);
	// b 0x821ce6e8
	goto loc_821CE6E8;
loc_821CE9B0:
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821be318
	ctx.lr = 0x821CE9C4;
	sub_821BE318(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,7792(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7792);
	// addi r3,r11,1700
	ctx.r3.s64 = ctx.r11.s64 + 1700;
	// bl 0x822021a0
	ctx.lr = 0x821CE9D8;
	sub_822021A0(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// bne cr6,0x821cea0c
	if (!ctx.cr6.eq) goto loc_821CEA0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820ed268
	ctx.lr = 0x821CE9E8;
	sub_820ED268(ctx, base);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x820ed2e0
	ctx.lr = 0x821CE9F0;
	sub_820ED2E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f3,-8492(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8492);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,2348(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2348);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-30972(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -30972);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820ed080
	ctx.lr = 0x821CEA0C;
	sub_820ED080(ctx, base);
loc_821CEA0C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821d8c68
	ctx.lr = 0x821CEA14;
	sub_821D8C68(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821e1d50
	ctx.lr = 0x821CEA1C;
	sub_821E1D50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821e34e0
	ctx.lr = 0x821CEA28;
	sub_821E34E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,12144
	ctx.r11.s64 = ctx.r11.s64 + 12144;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821CEA3C;
	sub_821E2FD0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821e23d8
	ctx.lr = 0x821CEA44;
	sub_821E23D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821e34e0
	ctx.lr = 0x821CEA50;
	sub_821E34E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,12168
	ctx.r11.s64 = ctx.r11.s64 + 12168;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821CEA64;
	sub_821E2FD0(ctx, base);
	// b 0x821ce6e8
	goto loc_821CE6E8;
loc_821CEA68:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x821c8b90
	ctx.lr = 0x821CEA74;
	sub_821C8B90(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,7792(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7792);
	// addi r3,r11,1700
	ctx.r3.s64 = ctx.r11.s64 + 1700;
	// bl 0x822021a0
	ctx.lr = 0x821CEA88;
	sub_822021A0(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// bne cr6,0x821ce6e8
	if (!ctx.cr6.eq) goto loc_821CE6E8;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x820ed268
	ctx.lr = 0x821CEA98;
	sub_820ED268(ctx, base);
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// bl 0x820ed2e0
	ctx.lr = 0x821CEAA0;
	sub_820ED2E0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f3,2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2340);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,2348(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2348);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// bl 0x820ed080
	ctx.lr = 0x821CEAB8;
	sub_820ED080(ctx, base);
	// b 0x821ce6e8
	goto loc_821CE6E8;
loc_821CEABC:
	// mr r22,r16
	r22.u64 = r16.u64;
	// b 0x821ce834
	goto loc_821CE834;
loc_821CEAC4:
	// lbz r7,162(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 162);
loc_821CEAC8:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821cead8
	if (ctx.cr6.eq) goto loc_821CEAD8;
	// lbz r6,213(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 213);
	// b 0x821ceadc
	goto loc_821CEADC;
loc_821CEAD8:
	// lbz r6,162(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 162);
loc_821CEADC:
	// lwz r8,5808(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 5808);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x821ceaf4
	if (ctx.cr6.eq) goto loc_821CEAF4;
	// mulli r11,r8,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(52));
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_821CEAF4:
	// lwz r10,5632(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5632);
	// li r21,2
	r21.s64 = 2;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// bgt cr6,0x821cf000
	if (ctx.cr6.gt) goto loc_821CF000;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// rlwinm r0,r10,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,12072
	ctx.r12.s64 = ctx.r12.s64 + 12072;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32227
	ctx.r12.s64 = -2112028672;
	// addi r12,r12,-5328
	ctx.r12.s64 = ctx.r12.s64 + -5328;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_821CEB48;
	case 1:
		goto loc_821CEC6C;
	case 2:
		goto loc_821CF000;
	case 3:
		goto loc_821CEDD8;
	case 4:
		goto loc_821CEDD8;
	case 5:
		goto loc_821CEF44;
	case 6:
		goto loc_821CEF84;
	case 7:
		goto loc_821CED24;
	case 8:
		goto loc_821CED34;
	case 9:
		goto loc_821CEFD0;
	case 10:
		goto loc_821CEBE8;
	case 11:
		goto loc_821CEC54;
	case 12:
		goto loc_821CEEEC;
	case 13:
		goto loc_821CEF64;
	case 14:
		goto loc_821CEB30;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_821CEB30:
	// li r11,-1
	ctx.r11.s64 = -1;
	// lha r25,7356(r31)
	r25.s64 = int16_t(REX_LOAD_U16(r31.u32 + 7356));
	// lha r27,8252(r31)
	r27.s64 = int16_t(REX_LOAD_U16(r31.u32 + 8252));
	// sth r11,8252(r31)
	REX_STORE_U16(r31.u32 + 8252, ctx.r11.u16);
	// sth r11,7356(r31)
	REX_STORE_U16(r31.u32 + 7356, ctx.r11.u16);
	// b 0x821cf000
	goto loc_821CF000;
loc_821CEB48:
	// lwz r10,5764(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5764);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x821ceb60
	if (!ctx.cr6.eq) goto loc_821CEB60;
	// mr r25,r16
	r25.u64 = r16.u64;
	// addi r10,r10,18
	ctx.r10.s64 = ctx.r10.s64 + 18;
	// b 0x821ceb68
	goto loc_821CEB68;
loc_821CEB60:
	// mr r25,r18
	r25.u64 = r18.u64;
	// addi r10,r10,22
	ctx.r10.s64 = ctx.r10.s64 + 22;
loc_821CEB68:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,28(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r17.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// li r23,-2
	r23.s64 = -2;
	// fmr f30,f29
	f30.f64 = f29.f64;
	// li r28,5
	r28.s64 = 5;
	// lhzx r27,r10,r11
	r27.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// stfs f0,5568(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5568, temp.u32);
	// lfs f13,24(r15)
	temp.u32 = REX_LOAD_U32(r15.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,5568(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5568, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// blt cr6,0x821ceb9c
	if (ctx.cr6.lt) goto loc_821CEB9C;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
loc_821CEB9C:
	// stfs f0,5568(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5568, temp.u32);
	// lhz r10,5822(r19)
	ctx.r10.u64 = REX_LOAD_U16(r19.u32 + 5822);
	// lha r24,64(r20)
	r24.s64 = int16_t(REX_LOAD_U16(r20.u32 + 64));
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// sth r10,5520(r31)
	REX_STORE_U16(r31.u32 + 5520, ctx.r10.u16);
	// lfs f12,5468(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 5468);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,5488(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// lhz r10,5824(r19)
	ctx.r10.u64 = REX_LOAD_U16(r19.u32 + 5824);
	// fnmsubs f13,f0,f13,f12
	ctx.f13.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f13.f64, -ctx.f12.f64)));
	// lfs f12,5476(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 5476);
	ctx.f12.f64 = double(temp.f32);
	// sth r10,5522(r31)
	REX_STORE_U16(r31.u32 + 5522, ctx.r10.u16);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x821cebe0
	if (!ctx.cr6.lt) goto loc_821CEBE0;
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + f28.f64));
	// stfs f0,5488(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5488, temp.u32);
	// mr r22,r18
	r22.u64 = r18.u64;
	// b 0x821ceffc
	goto loc_821CEFFC;
loc_821CEBE0:
	// mr r22,r16
	r22.u64 = r16.u64;
	// b 0x821cf000
	goto loc_821CF000;
loc_821CEBE8:
	// stfs f31,5568(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 5568, temp.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,16
	ctx.r4.s64 = 16;
	// lhz r5,610(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 610);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// fmr f30,f31
	f30.f64 = f31.f64;
	// mr r24,r16
	r24.u64 = r16.u64;
	// bl 0x821be318
	ctx.lr = 0x821CEC08;
	sub_821BE318(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x821c1760
	ctx.lr = 0x821CEC2C;
	sub_821C1760(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x821c1760
	ctx.lr = 0x821CEC50;
	sub_821C1760(ctx, base);
	// b 0x821cf000
	goto loc_821CF000;
loc_821CEC54:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	f30.f64 = f31.f64;
	// mr r24,r16
	r24.u64 = r16.u64;
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5568(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5568, temp.u32);
	// b 0x821cf000
	goto loc_821CF000;
loc_821CEC6C:
	// stfs f31,5568(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 5568, temp.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f30,f31
	f30.f64 = f31.f64;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r24,r16
	r24.u64 = r16.u64;
	// bl 0x821bf940
	ctx.lr = 0x821CEC8C;
	sub_821BF940(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821be2d0
	ctx.lr = 0x821CECA0;
	sub_821BE2D0(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821be2d0
	ctx.lr = 0x821CECB4;
	sub_821BE2D0(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821be2d0
	ctx.lr = 0x821CECC8;
	sub_821BE2D0(ctx, base);
	// lhz r11,606(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 606);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821ced0c
	if (ctx.cr6.eq) goto loc_821CED0C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821cecfc
	if (ctx.cr6.eq) goto loc_821CECFC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821ced0c
	if (ctx.cr6.eq) goto loc_821CED0C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821cecfc
	if (ctx.cr6.eq) goto loc_821CECFC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821ced0c
	if (ctx.cr6.eq) goto loc_821CED0C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x821cf000
	if (!ctx.cr6.eq) goto loc_821CF000;
loc_821CECFC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r18,10200(r31)
	REX_STORE_U32(r31.u32 + 10200, r18.u32);
	// lfs f0,12188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12188);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821ced18
	goto loc_821CED18;
loc_821CED0C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r21,10200(r31)
	REX_STORE_U32(r31.u32 + 10200, r21.u32);
	// lfs f0,31220(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 31220);
	ctx.f0.f64 = double(temp.f32);
loc_821CED18:
	// stfs f0,10208(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10208, temp.u32);
	// stw r16,10204(r31)
	REX_STORE_U32(r31.u32 + 10204, r16.u32);
	// b 0x821cf000
	goto loc_821CF000;
loc_821CED24:
	// mr r25,r16
	r25.u64 = r16.u64;
	// li r26,15
	r26.s64 = 15;
	// mr r28,r16
	r28.u64 = r16.u64;
	// b 0x821cefe8
	goto loc_821CEFE8;
loc_821CED34:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821ced60
	if (ctx.cr6.eq) goto loc_821CED60;
	// lwz r11,5764(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5764);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x821ced50
	if (!ctx.cr6.eq) goto loc_821CED50;
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// b 0x821ced54
	goto loc_821CED54;
loc_821CED50:
	// addi r11,r11,22
	ctx.r11.s64 = ctx.r11.s64 + 22;
loc_821CED54:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r27,r11,r9
	r27.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// b 0x821ced80
	goto loc_821CED80;
loc_821CED60:
	// lwz r10,5764(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5764);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x821ced74
	if (!ctx.cr6.eq) goto loc_821CED74;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// b 0x821ced78
	goto loc_821CED78;
loc_821CED74:
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
loc_821CED78:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r27,r10,r11
	r27.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
loc_821CED80:
	// lha r24,62(r20)
	r24.s64 = int16_t(REX_LOAD_U16(r20.u32 + 62));
	// rlwinm. r10,r27,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmr f30,f29
	ctx.fpscr.disableFlushMode();
	f30.f64 = f29.f64;
	// beq 0x821cedb4
	if (ctx.cr0.eq) goto loc_821CEDB4;
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r25,r16
	r25.u64 = r16.u64;
	// stw r11,5632(r31)
	REX_STORE_U32(r31.u32 + 5632, ctx.r11.u32);
	// rlwinm r27,r27,0,17,15
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// li r26,7
	r26.s64 = 7;
loc_821CEDA4:
	// li r28,3
	r28.s64 = 3;
loc_821CEDA8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c4558
	ctx.lr = 0x821CEDB0;
	sub_821C4558(ctx, base);
	// b 0x821cf000
	goto loc_821CF000;
loc_821CEDB4:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x821cedc8
	if (!ctx.cr6.eq) goto loc_821CEDC8;
	// mr r25,r16
	r25.u64 = r16.u64;
	// mr r26,r21
	r26.u64 = r21.u64;
	// b 0x821cedd0
	goto loc_821CEDD0;
loc_821CEDC8:
	// mr r25,r18
	r25.u64 = r18.u64;
	// li r26,3
	r26.s64 = 3;
loc_821CEDD0:
	// mr r28,r21
	r28.u64 = r21.u64;
	// b 0x821cf000
	goto loc_821CF000;
loc_821CEDD8:
	// lwz r11,5764(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5764);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x821cedec
	if (!ctx.cr6.eq) goto loc_821CEDEC;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x821cedf0
	goto loc_821CEDF0;
loc_821CEDEC:
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
loc_821CEDF0:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// fmr f30,f29
	ctx.fpscr.disableFlushMode();
	f30.f64 = f29.f64;
	// lhzx r27,r11,r9
	r27.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm. r11,r27,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ceeb0
	if (ctx.cr0.eq) goto loc_821CEEB0;
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r25,r16
	r25.u64 = r16.u64;
	// rlwinm r27,r27,0,17,15
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r11,5632(r31)
	REX_STORE_U32(r31.u32 + 5632, ctx.r11.u32);
	// li r26,7
	r26.s64 = 7;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x821cee30
	if (ctx.cr6.eq) goto loc_821CEE30;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f25,2376(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2376);
	f25.f64 = double(temp.f32);
	// lfs f26,12620(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12620);
	f26.f64 = double(temp.f32);
loc_821CEE30:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r11,10(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821cee90
	if (ctx.cr0.eq) goto loc_821CEE90;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r8,r9,72
	ctx.r8.s64 = ctx.r9.s64 + 72;
	// mulli r7,r11,284
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(284));
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// and. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821cee90
	if (ctx.cr0.eq) goto loc_821CEE90;
	// mulli r10,r11,284
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(284));
	// addi r8,r9,72
	ctx.r8.s64 = ctx.r9.s64 + 72;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r9,572
	ctx.r9.s64 = ctx.r9.s64 + 572;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f26,f0,f26
	f26.f64 = double(float(ctx.f0.f64 * f26.f64));
loc_821CEE90:
	// lwz r11,5560(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5560);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x821ceea8
	if (!ctx.cr6.lt) goto loc_821CEEA8;
	// lha r24,60(r20)
	r24.s64 = int16_t(REX_LOAD_U16(r20.u32 + 60));
	// mr r28,r18
	r28.u64 = r18.u64;
	// b 0x821ceda8
	goto loc_821CEDA8;
loc_821CEEA8:
	// lha r24,66(r20)
	r24.s64 = int16_t(REX_LOAD_U16(r20.u32 + 66));
	// b 0x821ceda4
	goto loc_821CEDA4;
loc_821CEEB0:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x821ceec4
	if (!ctx.cr6.eq) goto loc_821CEEC4;
	// mr r25,r16
	r25.u64 = r16.u64;
	// mr r26,r21
	r26.u64 = r21.u64;
	// b 0x821ceecc
	goto loc_821CEECC;
loc_821CEEC4:
	// mr r25,r18
	r25.u64 = r18.u64;
	// li r26,3
	r26.s64 = 3;
loc_821CEECC:
	// lwz r11,5560(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5560);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x821ceee4
	if (!ctx.cr6.lt) goto loc_821CEEE4;
	// lha r24,62(r20)
	r24.s64 = int16_t(REX_LOAD_U16(r20.u32 + 62));
	// mr r28,r16
	r28.u64 = r16.u64;
	// b 0x821cf000
	goto loc_821CF000;
loc_821CEEE4:
	// lha r24,68(r20)
	r24.s64 = int16_t(REX_LOAD_U16(r20.u32 + 68));
	// b 0x821cedd0
	goto loc_821CEDD0;
loc_821CEEEC:
	// stfs f31,5568(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 5568, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f30,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	f30.f64 = double(temp.f32);
	// mr r24,r16
	r24.u64 = r16.u64;
	// li r27,8192
	r27.s64 = 8192;
	// li r26,14
	r26.s64 = 14;
	// bl 0x821bf940
	ctx.lr = 0x821CEF18;
	sub_821BF940(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bf940
	ctx.lr = 0x821CEF2C;
	sub_821BF940(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
loc_821CEF30:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x821bf940
	ctx.lr = 0x821CEF40;
	sub_821BF940(ctx, base);
	// b 0x821cf000
	goto loc_821CF000;
loc_821CEF44:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r23,5548(r31)
	r23.u64 = REX_LOAD_U32(r31.u32 + 5548);
	// li r27,8192
	r27.s64 = 8192;
	// fmr f30,f29
	ctx.fpscr.disableFlushMode();
	f30.f64 = f29.f64;
	// li r28,4
	r28.s64 = 4;
	// bl 0x821c4558
	ctx.lr = 0x821CEF5C;
	sub_821C4558(ctx, base);
	// li r26,14
	r26.s64 = 14;
	// b 0x821cf000
	goto loc_821CF000;
loc_821CEF64:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,5568(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 5568, temp.u32);
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r24,r16
	r24.u64 = r16.u64;
	// li r27,8192
	r27.s64 = 8192;
	// li r26,17
	r26.s64 = 17;
	// lfs f30,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	f30.f64 = double(temp.f32);
	// b 0x821cef30
	goto loc_821CEF30;
loc_821CEF84:
	// lbz r10,167(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 167);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,5764(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5764);
	// bne 0x821cefa0
	if (!ctx.cr0.eq) goto loc_821CEFA0;
	// li r25,8193
	r25.s64 = 8193;
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// b 0x821cefa8
	goto loc_821CEFA8;
loc_821CEFA0:
	// li r25,8194
	r25.s64 = 8194;
	// addi r10,r10,14
	ctx.r10.s64 = ctx.r10.s64 + 14;
loc_821CEFA8:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// lhzx r27,r10,r11
	r27.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// beq cr6,0x821cefbc
	if (ctx.cr6.eq) goto loc_821CEFBC;
	// li r27,8192
	r27.s64 = 8192;
loc_821CEFBC:
	// lha r24,60(r20)
	r24.s64 = int16_t(REX_LOAD_U16(r20.u32 + 60));
	// li r28,6
	r28.s64 = 6;
	// fmr f30,f29
	ctx.fpscr.disableFlushMode();
	f30.f64 = f29.f64;
	// li r26,10
	r26.s64 = 10;
	// b 0x821cf000
	goto loc_821CF000;
loc_821CEFD0:
	// stfs f31,5524(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 5524, temp.u32);
	// mr r25,r16
	r25.u64 = r16.u64;
	// stfs f31,5528(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 5528, temp.u32);
	// li r26,16
	r26.s64 = 16;
	// stfs f31,5568(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 5568, temp.u32);
	// li r28,5
	r28.s64 = 5;
loc_821CEFE8:
	// lhz r11,5822(r19)
	ctx.r11.u64 = REX_LOAD_U16(r19.u32 + 5822);
	// fmr f30,f27
	ctx.fpscr.disableFlushMode();
	f30.f64 = f27.f64;
	// sth r11,5520(r31)
	REX_STORE_U16(r31.u32 + 5520, ctx.r11.u16);
	// lhz r11,5824(r19)
	ctx.r11.u64 = REX_LOAD_U16(r19.u32 + 5824);
	// sth r11,5522(r31)
	REX_STORE_U16(r31.u32 + 5522, ctx.r11.u16);
loc_821CEFFC:
	// li r27,8192
	r27.s64 = 8192;
loc_821CF000:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,70
	ctx.r4.s64 = 70;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bf940
	ctx.lr = 0x821CF014;
	sub_821BF940(ctx, base);
	// mulli r11,r28,6
	ctx.r11.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + r20.u64;
	// addi r29,r11,8
	r29.s64 = ctx.r11.s64 + 8;
	// lwz r11,5808(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5808);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821cf030
	if (ctx.cr6.eq) goto loc_821CF030;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	f30.f64 = f31.f64;
loc_821CF030:
	// stw r28,5636(r31)
	REX_STORE_U32(r31.u32 + 5636, r28.u32);
	// stw r28,5800(r19)
	REX_STORE_U32(r19.u32 + 5800, r28.u32);
	// stw r29,5640(r31)
	REX_STORE_U32(r31.u32 + 5640, r29.u32);
	// stw r29,5812(r19)
	REX_STORE_U32(r19.u32 + 5812, r29.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821cf068
	if (ctx.cr0.eq) goto loc_821CF068;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,5468(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5468);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,28724(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28724);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x821cf068
	if (ctx.cr6.lt) goto loc_821CF068;
	// stfs f31,5568(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 5568, temp.u32);
loc_821CF068:
	// lwz r30,5632(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 5632);
	// cmpwi cr6,r30,14
	ctx.cr6.compare<int32_t>(r30.s32, 14, ctx.xer);
	// beq cr6,0x821cf170
	if (ctx.cr6.eq) goto loc_821CF170;
	// lfs f0,5488(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f13,5568(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 5568);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f1,5488(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 5488, temp.u32);
	// bl 0x821bdeb8
	ctx.lr = 0x821CF08C;
	sub_821BDEB8(ctx, base);
	// stfs f1,5488(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 5488, temp.u32);
	// stfs f1,5492(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 5492, temp.u32);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x821cf0ac
	if (!ctx.cr6.eq) goto loc_821CF0AC;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ca9d0
	ctx.lr = 0x821CF0AC;
	sub_821CA9D0(ctx, base);
loc_821CF0AC:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bne cr6,0x821cf170
	if (!ctx.cr6.eq) goto loc_821CF170;
	// lfs f0,20(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r17.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5492(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 5492);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// beq cr6,0x821cf110
	if (ctx.cr6.eq) goto loc_821CF110;
	// lfs f13,5472(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 5472);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x821cf104
	if (!ctx.cr6.gt) goto loc_821CF104;
	// lfs f13,5488(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f12,5492(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 5492);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f13,5488(r19)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r19.u32 + 5488, temp.u32);
	// stfs f0,5492(r19)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r19.u32 + 5492, temp.u32);
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x821ca9d0
	ctx.lr = 0x821CF100;
	sub_821CA9D0(ctx, base);
	// b 0x821cf110
	goto loc_821CF110;
loc_821CF104:
	// lfs f13,5468(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r19.u32 + 5468);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,5468(r19)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r19.u32 + 5468, temp.u32);
loc_821CF110:
	// lfs f0,16(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r15.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5488(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// beq cr6,0x821cf170
	if (ctx.cr6.eq) goto loc_821CF170;
	// lfs f13,5472(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 5472);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x821cf144
	if (!ctx.cr6.gt) goto loc_821CF144;
	// lfs f13,5468(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 5468);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,5468(r19)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r19.u32 + 5468, temp.u32);
	// b 0x821cf170
	goto loc_821CF170;
loc_821CF144:
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f13,5488(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,5492(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 5492);
	ctx.f12.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f13,5488(r19)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r19.u32 + 5488, temp.u32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,5492(r19)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r19.u32 + 5492, temp.u32);
	// bl 0x821ca9d0
	ctx.lr = 0x821CF170;
	sub_821CA9D0(ctx, base);
loc_821CF170:
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(r27.s32, -1, ctx.xer);
	// bne cr6,0x821cf180
	if (!ctx.cr6.eq) goto loc_821CF180;
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(r25.s32, -1, ctx.xer);
	// beq cr6,0x821cf594
	if (ctx.cr6.eq) goto loc_821CF594;
loc_821CF180:
	// lbz r11,174(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 174);
	// stw r16,5620(r31)
	REX_STORE_U32(r31.u32 + 5620, r16.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821cf194
	if (!ctx.cr0.eq) goto loc_821CF194;
	// stw r16,5624(r31)
	REX_STORE_U32(r31.u32 + 5624, r16.u32);
loc_821CF194:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821be318
	ctx.lr = 0x821CF1A8;
	sub_821BE318(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bf940
	ctx.lr = 0x821CF1BC;
	sub_821BF940(ctx, base);
	// addi r3,r31,7224
	ctx.r3.s64 = r31.s64 + 7224;
	// bl 0x821bdff8
	ctx.lr = 0x821CF1C4;
	sub_821BDFF8(ctx, base);
	// addi r3,r31,8120
	ctx.r3.s64 = r31.s64 + 8120;
	// bl 0x821bdff8
	ctx.lr = 0x821CF1CC;
	sub_821BDFF8(ctx, base);
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(r25.s32, -1, ctx.xer);
	// sth r18,15258(r31)
	REX_STORE_U16(r31.u32 + 15258, r18.u16);
	// beq cr6,0x821cf200
	if (ctx.cr6.eq) goto loc_821CF200;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c1760
	ctx.lr = 0x821CF1FC;
	sub_821C1760(ctx, base);
	// stw r18,7268(r31)
	REX_STORE_U32(r31.u32 + 7268, r18.u32);
loc_821CF200:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821be318
	ctx.lr = 0x821CF214;
	sub_821BE318(ctx, base);
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(r27.s32, -1, ctx.xer);
	// beq cr6,0x821cf244
	if (ctx.cr6.eq) goto loc_821CF244;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c1760
	ctx.lr = 0x821CF240;
	sub_821C1760(ctx, base);
	// stw r18,8164(r31)
	REX_STORE_U32(r31.u32 + 8164, r18.u32);
loc_821CF244:
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(r25.s32, -1, ctx.xer);
	// bne cr6,0x821cf254
	if (!ctx.cr6.eq) goto loc_821CF254;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(r27.s32, -1, ctx.xer);
	// beq cr6,0x821cf270
	if (ctx.cr6.eq) goto loc_821CF270;
loc_821CF254:
	// lfs f0,10312(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 10312);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10276(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10276, temp.u32);
	// lfs f13,10268(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10268);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bl 0x821af850
	ctx.lr = 0x821CF268;
	sub_821AF850(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821cd0a0
	ctx.lr = 0x821CF270;
	sub_821CD0A0(ctx, base);
loc_821CF270:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f30.f64, f31.f64);
	// blt cr6,0x821cf33c
	if (ctx.cr6.lt) goto loc_821CF33C;
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 0);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bne cr6,0x821cf28c
	if (!ctx.cr6.eq) goto loc_821CF28C;
	// lhz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U16(r20.u32 + 8);
	// sth r11,0(r29)
	REX_STORE_U16(r29.u32 + 0, ctx.r11.u16);
loc_821CF28C:
	// lhz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 4);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bne cr6,0x821cf2a0
	if (!ctx.cr6.eq) goto loc_821CF2A0;
	// lhz r11,12(r20)
	ctx.r11.u64 = REX_LOAD_U16(r20.u32 + 12);
	// sth r11,4(r29)
	REX_STORE_U16(r29.u32 + 4, ctx.r11.u16);
loc_821CF2A0:
	// lhz r11,2(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 2);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bne cr6,0x821cf2b4
	if (!ctx.cr6.eq) goto loc_821CF2B4;
	// lhz r11,10(r20)
	ctx.r11.u64 = REX_LOAD_U16(r20.u32 + 10);
	// sth r11,2(r29)
	REX_STORE_U16(r29.u32 + 2, ctx.r11.u16);
loc_821CF2B4:
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c6530
	ctx.lr = 0x821CF2C8;
	sub_821C6530(ctx, base);
	// lfs f0,10564(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 10564);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f26,f0
	ctx.f12.f64 = double(float(f26.f64 * ctx.f0.f64));
	// lfs f13,10572(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10572);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f26,f13
	ctx.f13.f64 = double(float(f26.f64 * ctx.f13.f64));
	// stfs f12,10564(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 10564, temp.u32);
	// stfs f13,10572(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 10572, temp.u32);
	// addi r30,r31,10564
	r30.s64 = r31.s64 + 10564;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// lfs f0,10568(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10568);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f25,f0
	ctx.f0.f64 = double(float(f25.f64 * ctx.f0.f64));
	// stfs f0,10568(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10568, temp.u32);
	// beq cr6,0x821cf33c
	if (ctx.cr6.eq) goto loc_821CF33C;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x821cf33c
	if (!ctx.cr6.gt) goto loc_821CF33C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e2308
	ctx.lr = 0x821CF308;
	sub_820E2308(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,16284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16284);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// ble cr6,0x821cf33c
	if (!ctx.cr6.gt) goto loc_821CF33C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e2308
	ctx.lr = 0x821CF320;
	sub_820E2308(ctx, base);
	// fdivs f0,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 / ctx.f1.f64));
	// lfs f13,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,10572(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10572);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,10572(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10572, temp.u32);
loc_821CF33C:
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(r24.s32, -1, ctx.xer);
	// beq cr6,0x821cf360
	if (ctx.cr6.eq) goto loc_821CF360;
	// extsw r11,r24
	ctx.r11.s64 = r24.s32;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,5528(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5528, temp.u32);
	// stfs f0,5524(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5524, temp.u32);
loc_821CF360:
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r11,10(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821cf3d0
	if (ctx.cr0.eq) goto loc_821CF3D0;
	// lwz r3,144(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x821353c0
	ctx.lr = 0x821CF378;
	sub_821353C0(ctx, base);
	// lbz r9,0(r19)
	ctx.r9.u64 = REX_LOAD_U8(r19.u32 + 0);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r10,r11,116
	ctx.r10.s64 = ctx.r11.s64 + 116;
	// mulli r8,r9,284
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(284));
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cf3d0
	if (ctx.cr0.eq) goto loc_821CF3D0;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821cf3d0
	if (!ctx.cr6.eq) goto loc_821CF3D0;
	// lfs f0,5492(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5492);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x821cf3d0
	if (!ctx.cr6.gt) goto loc_821CF3D0;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r10,r11,-9496
	ctx.r10.s64 = ctx.r11.s64 + -9496;
	// lhz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,20(r10)
	REX_STORE_U16(ctx.r10.u32 + 20, ctx.r11.u16);
loc_821CF3D0:
	// lwz r11,5632(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5632);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821cf544
	if (ctx.cr6.eq) goto loc_821CF544;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821cf538
	if (ctx.cr6.eq) goto loc_821CF538;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821cf4d8
	if (ctx.cr6.eq) goto loc_821CF4D8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821cf49c
	if (ctx.cr6.eq) goto loc_821CF49C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x821cf474
	if (ctx.cr6.eq) goto loc_821CF474;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x821cf460
	if (ctx.cr6.eq) goto loc_821CF460;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x821cf594
	if (!ctx.cr6.eq) goto loc_821CF594;
	// lhz r11,76(r20)
	ctx.r11.u64 = REX_LOAD_U16(r20.u32 + 76);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r11,5540(r31)
	REX_STORE_U16(r31.u32 + 5540, ctx.r11.u16);
	// bl 0x821caf78
	ctx.lr = 0x821CF41C;
	sub_821CAF78(ctx, base);
	// stfs f31,10588(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 10588, temp.u32);
	// stfs f31,10584(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 10584, temp.u32);
	// stfs f31,10580(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 10580, temp.u32);
	// stfs f31,10572(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 10572, temp.u32);
	// stfs f31,10568(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 10568, temp.u32);
	// stfs f31,10564(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 10564, temp.u32);
	// stfs f31,5660(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 5660, temp.u32);
	// stfs f31,5656(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 5656, temp.u32);
	// stfs f31,5652(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 5652, temp.u32);
	// stfs f31,10604(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 10604, temp.u32);
	// stfs f31,10600(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 10600, temp.u32);
	// stfs f31,10596(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 10596, temp.u32);
	// stfs f31,10240(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 10240, temp.u32);
	// stfs f31,5676(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 5676, temp.u32);
	// stfs f31,5672(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 5672, temp.u32);
	// stfs f31,5668(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 5668, temp.u32);
	// b 0x821cf594
	goto loc_821CF594;
loc_821CF460:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821caf78
	ctx.lr = 0x821CF468;
	sub_821CAF78(ctx, base);
	// lfs f0,10616(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 10616);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10568(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10568, temp.u32);
	// b 0x821cf594
	goto loc_821CF594;
loc_821CF474:
	// li r11,3
	ctx.r11.s64 = 3;
	// stfs f29,5676(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 5676, temp.u32);
	// stfs f29,5672(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 5672, temp.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stfs f29,5668(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 5668, temp.u32);
	// stw r11,5644(r31)
	REX_STORE_U32(r31.u32 + 5644, ctx.r11.u32);
	// stfs f31,5660(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 5660, temp.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// stfs f31,5652(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 5652, temp.u32);
	// b 0x821cf588
	goto loc_821CF588;
loc_821CF49C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821caf78
	ctx.lr = 0x821CF4A4;
	sub_821CAF78(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c89f0
	ctx.lr = 0x821CF4B0;
	sub_821C89F0(ctx, base);
loc_821CF4B0:
	// stfs f31,5660(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 5660, temp.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// stfs f29,5668(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 5668, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f29,5672(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 5672, temp.u32);
	// stw r18,5644(r31)
	REX_STORE_U32(r31.u32 + 5644, r18.u32);
	// stfs f29,5676(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 5676, temp.u32);
	// stfs f31,10240(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 10240, temp.u32);
	// stfs f31,5652(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 5652, temp.u32);
	// b 0x821cf588
	goto loc_821CF588;
loc_821CF4D8:
	// lhz r11,76(r20)
	ctx.r11.u64 = REX_LOAD_U16(r20.u32 + 76);
	// lhz r10,8194(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 8194);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// sth r11,5540(r31)
	REX_STORE_U16(r31.u32 + 5540, ctx.r11.u16);
	// bne cr6,0x821cf4b0
	if (!ctx.cr6.eq) goto loc_821CF4B0;
	// lwz r11,10140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10140);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r6,4
	ctx.r6.s64 = 4;
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// stw r10,5632(r31)
	REX_STORE_U32(r31.u32 + 5632, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,20092
	ctx.r10.s64 = ctx.r11.s64 + 20092;
	// lfs f0,20140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10484(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10484, temp.u32);
	// lfs f0,20144(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10488(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10488, temp.u32);
	// lfs f0,20148(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10492(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10492, temp.u32);
	// stfs f29,10496(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 10496, temp.u32);
	// bl 0x821bf940
	ctx.lr = 0x821CF534;
	sub_821BF940(ctx, base);
	// b 0x821cf4b0
	goto loc_821CF4B0;
loc_821CF538:
	// lhz r11,76(r20)
	ctx.r11.u64 = REX_LOAD_U16(r20.u32 + 76);
	// sth r11,5540(r31)
	REX_STORE_U16(r31.u32 + 5540, ctx.r11.u16);
	// b 0x821cf594
	goto loc_821CF594;
loc_821CF544:
	// lhz r11,76(r20)
	ctx.r11.u64 = REX_LOAD_U16(r20.u32 + 76);
	// stfs f29,5676(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 5676, temp.u32);
	// stfs f29,5672(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 5672, temp.u32);
	// stw r21,5644(r31)
	REX_STORE_U32(r31.u32 + 5644, r21.u32);
	// stfs f29,5668(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 5668, temp.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stfs f31,5660(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 5660, temp.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stfs f31,5652(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 5652, temp.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// sth r11,5540(r31)
	REX_STORE_U16(r31.u32 + 5540, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821be318
	ctx.lr = 0x821CF578;
	sub_821BE318(ctx, base);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq cr6,0x821cf594
	if (ctx.cr6.eq) goto loc_821CF594;
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,9
	ctx.r4.s64 = 9;
loc_821CF588:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821be318
	ctx.lr = 0x821CF594;
	sub_821BE318(ctx, base);
loc_821CF594:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c3ba0
	ctx.lr = 0x821CF5A0;
	sub_821C3BA0(ctx, base);
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_821CF5A8:
	// lbz r11,174(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 174);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821cf5c0
	if (ctx.cr0.eq) goto loc_821CF5C0;
	// lwz r11,844(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 844);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x821cf5c4
	goto loc_821CF5C4;
loc_821CF5C0:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_821CF5C4:
	// stw r11,844(r31)
	REX_STORE_U32(r31.u32 + 844, ctx.r11.u32);
loc_821CF5C8:
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r3,r3,255
	ctx.r3.u64 = ctx.r3.u64 | 255;
	// bl 0x821afe08
	ctx.lr = 0x821CF5D8;
	sub_821AFE08(ctx, base);
	// li r10,71
	ctx.r10.s64 = 71;
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// addi r9,r31,160
	ctx.r9.s64 = r31.s64 + 160;
	// addi r8,r31,231
	ctx.r8.s64 = r31.s64 + 231;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821CF5EC:
	// lbzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x821cf5ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821CF5EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c35d0
	ctx.lr = 0x821CF604;
	sub_821C35D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c34c0
	ctx.lr = 0x821CF60C;
	sub_821C34C0(ctx, base);
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821cf638
	if (!ctx.cr0.eq) goto loc_821CF638;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c86b8
	ctx.lr = 0x821CF620;
	sub_821C86B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821cad10
	ctx.lr = 0x821CF628;
	sub_821CAD10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ca6f8
	ctx.lr = 0x821CF630;
	sub_821CA6F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821d8cc8
	ctx.lr = 0x821CF638;
	sub_821D8CC8(ctx, base);
loc_821CF638:
	// addi r30,r31,16408
	r30.s64 = r31.s64 + 16408;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218f108
	ctx.lr = 0x821CF644;
	sub_8218F108(ctx, base);
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// li r4,4
	ctx.r4.s64 = 4;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// bl 0x821afe08
	ctx.lr = 0x821CF654;
	sub_821AFE08(ctx, base);
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,10148(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 10148);
	// addi r3,r31,10984
	ctx.r3.s64 = r31.s64 + 10984;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8214c448
	ctx.lr = 0x821CF66C;
	sub_8214C448(ctx, base);
	// lhz r11,10(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821cf6bc
	if (ctx.cr0.eq) goto loc_821CF6BC;
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r9,r29,52
	ctx.r9.s64 = r29.s64 + 52;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// mulli r8,r10,284
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(284));
	// lwzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cf6bc
	if (ctx.cr0.eq) goto loc_821CF6BC;
	// lwz r11,10148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10148);
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// addi r4,r11,6784
	ctx.r4.s64 = ctx.r11.s64 + 6784;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x820e0d78
	ctx.lr = 0x821CF6BC;
	sub_820E0D78(ctx, base);
loc_821CF6BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ce0b8
	ctx.lr = 0x821CF6C4;
	sub_821CE0B8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x821afe08
	ctx.lr = 0x821CF6D0;
	sub_821AFE08(ctx, base);
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821cf6e4
	if (!ctx.cr0.eq) goto loc_821CF6E4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218ed90
	ctx.lr = 0x821CF6E4;
	sub_8218ED90(ctx, base);
loc_821CF6E4:
	// lis r3,-1
	ctx.r3.s64 = -65536;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r3,r3,255
	ctx.r3.u64 = ctx.r3.u64 | 255;
	// bl 0x821afe08
	ctx.lr = 0x821CF6F4;
	sub_821AFE08(ctx, base);
loc_821CF6F4:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f78
	ctx.lr = 0x821CF700;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_82226380) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// addi r10,r4,120
	ctx.r10.s64 = ctx.r4.s64 + 120;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// dcbt r0,r5
	// li r8,128
	ctx.r8.s64 = 128;
	// dcbt r8,r5
	// li r5,16
	ctx.r5.s64 = 16;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// ble cr6,0x82226420
	if (!ctx.cr6.gt) goto loc_82226420;
	// addi r8,r6,-4
	ctx.r8.s64 = ctx.r6.s64 + -4;
	// li r6,32
	ctx.r6.s64 = 32;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r8,48
	ctx.r8.s64 = 48;
loc_822263C4:
	// li r4,256
	ctx.r4.s64 = 256;
	// dcbt r4,r11
	// lvrx128 v62,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r4,64
	ctx.r4.s64 = 64;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// vor128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lvlx128 v61,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v62,v61,v62
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lvlx128 v60,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v61,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v61,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvlx128 v59,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v60,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// vor128 v60,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// bdnz 0x822263c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822263C4;
loc_82226420:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82226448
	if (ctx.cr6.eq) goto loc_82226448;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8222642C:
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vor128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x8222642c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222642C;
loc_82226448:
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222DE90) {
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
	ctx.lr = 0x8222DE98;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8222deb8
	if (!ctx.cr6.eq) goto loc_8222DEB8;
	// li r25,1024
	r25.s64 = 1024;
loc_8222DEB8:
	// lwz r11,24584(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24584);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x8222dedc
	if (!ctx.cr6.eq) goto loc_8222DEDC;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8222dfa8
	if (ctx.cr6.eq) goto loc_8222DFA8;
	// lwz r11,24492(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24492);
	// addi r10,r25,-1
	ctx.r10.s64 = r25.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8222dfa8
	if (ctx.cr6.eq) goto loc_8222DFA8;
loc_8222DEDC:
	// lwz r11,24592(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24592);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8222def0
	if (ctx.cr6.eq) goto loc_8222DEF0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822152c0
	ctx.lr = 0x8222DEF0;
	sub_822152C0(ctx, base);
loc_8222DEF0:
	// lwz r11,24584(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24584);
	// li r31,0
	r31.s64 = 0;
	// mr r28,r31
	r28.u64 = r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8222df40
	if (!ctx.cr6.gt) goto loc_8222DF40;
	// addi r30,r29,24464
	r30.s64 = r29.s64 + 24464;
loc_8222DF08:
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x823cd250
	ctx.lr = 0x8222DF14;
	sub_823CD250(ctx, base);
	// stw r31,20(r30)
	REX_STORE_U32(r30.u32 + 20, r31.u32);
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stw r31,24(r30)
	REX_STORE_U32(r30.u32 + 24, r31.u32);
	// stw r31,16(r30)
	REX_STORE_U32(r30.u32 + 16, r31.u32);
	// stw r31,28(r30)
	REX_STORE_U32(r30.u32 + 28, r31.u32);
	// stw r31,32(r30)
	REX_STORE_U32(r30.u32 + 32, r31.u32);
	// stwu r31,36(r30)
	ea = 36 + r30.u32;
	REX_STORE_U32(ea, r31.u32);
	r30.u32 = ea;
	// lwz r11,24584(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24584);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8222df08
	if (ctx.cr6.lt) goto loc_8222DF08;
loc_8222DF40:
	// stw r26,24584(r29)
	REX_STORE_U32(r29.u32 + 24584, r26.u32);
	// mr r27,r31
	r27.u64 = r31.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// stw r24,24588(r29)
	REX_STORE_U32(r29.u32 + 24588, r24.u32);
	// beq cr6,0x8222dfa8
	if (ctx.cr6.eq) goto loc_8222DFA8;
	// mulli r26,r25,28
	r26.s64 = static_cast<int64_t>(r25.u64 * static_cast<uint64_t>(28));
	// li r28,2
	r28.s64 = 2;
	// addi r30,r29,24460
	r30.s64 = r29.s64 + 24460;
loc_8222DF60:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823cd118
	ctx.lr = 0x8222DF6C;
	sub_823CD118(ctx, base);
	// stw r3,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222dfb4
	if (ctx.cr0.eq) goto loc_8222DFB4;
	// addi r11,r25,-1
	ctx.r11.s64 = r25.s64 + -1;
	// stw r31,20(r30)
	REX_STORE_U32(r30.u32 + 20, r31.u32);
	// stw r31,24(r30)
	REX_STORE_U32(r30.u32 + 24, r31.u32);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stw r31,28(r30)
	REX_STORE_U32(r30.u32 + 28, r31.u32);
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
	// stw r31,40(r30)
	REX_STORE_U32(r30.u32 + 40, r31.u32);
	// stwu r28,36(r30)
	ea = 36 + r30.u32;
	REX_STORE_U32(ea, r28.u32);
	r30.u32 = ea;
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// lwz r11,24584(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24584);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8222df60
	if (ctx.cr6.lt) goto loc_8222DF60;
loc_8222DFA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222DFAC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_8222DFB4:
	// lwz r11,24584(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24584);
	// mr r28,r31
	r28.u64 = r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8222e000
	if (!ctx.cr6.gt) goto loc_8222E000;
	// addi r30,r29,24464
	r30.s64 = r29.s64 + 24464;
loc_8222DFC8:
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x823cd250
	ctx.lr = 0x8222DFD4;
	sub_823CD250(ctx, base);
	// stw r31,20(r30)
	REX_STORE_U32(r30.u32 + 20, r31.u32);
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stw r31,24(r30)
	REX_STORE_U32(r30.u32 + 24, r31.u32);
	// stw r31,16(r30)
	REX_STORE_U32(r30.u32 + 16, r31.u32);
	// stw r31,28(r30)
	REX_STORE_U32(r30.u32 + 28, r31.u32);
	// stw r31,32(r30)
	REX_STORE_U32(r30.u32 + 32, r31.u32);
	// stwu r31,36(r30)
	ea = 36 + r30.u32;
	REX_STORE_U32(ea, r31.u32);
	r30.u32 = ea;
	// lwz r11,24584(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24584);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8222dfc8
	if (ctx.cr6.lt) goto loc_8222DFC8;
loc_8222E000:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// stw r31,24584(r29)
	REX_STORE_U32(r29.u32 + 24584, r31.u32);
	// stw r31,24588(r29)
	REX_STORE_U32(r29.u32 + 24588, r31.u32);
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8222dfac
	goto loc_8222DFAC;
}

DEFINE_REX_FUNC(sub_82234F28) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r4,5
	ctx.r4.s64 = 327680;
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r6,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// ori r4,r4,32821
	ctx.r4.u64 = ctx.r4.u64 | 32821;
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// li r3,252
	ctx.r3.s64 = 252;
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// bl 0x824d479c
	ctx.lr = 0x82234F70;
	__imp__XMsgInProcessCall(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82234f80
	if (ctx.cr0.lt) goto loc_82234F80;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82234fb0
	goto loc_82234FB0;
loc_82234F80:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,87
	ctx.r11.u64 = ctx.r11.u64 | 87;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82234f98
	if (!ctx.cr6.eq) goto loc_82234F98;
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82234fb0
	goto loc_82234FB0;
loc_82234F98:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,122
	ctx.r11.u64 = ctx.r11.u64 | 122;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// li r3,122
	ctx.r3.s64 = 122;
	// beq cr6,0x82234fb0
	if (ctx.cr6.eq) goto loc_82234FB0;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82234FB0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82236680) {
	REX_FUNC_PROLOGUE();
	// b 0x82236218
	sub_82236218(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82236758) {
	REX_FUNC_PROLOGUE();
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,64
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 64, ctx.xer);
	// blt cr6,0x82236770
	if (ctx.cr6.lt) goto loc_82236770;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82236770:
	// cmplwi cr6,r4,63
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 63, ctx.xer);
	// bne cr6,0x82236780
	if (!ctx.cr6.eq) goto loc_82236780;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82236780:
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm. r8,r11,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822367a8
	if (ctx.cr0.eq) goto loc_822367A8;
	// rlwinm. r8,r11,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822367a8
	if (ctx.cr0.eq) goto loc_822367A8;
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r11,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// blr 
	return;
loc_822367A8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822375E0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223766c
	if (ctx.cr6.eq) goto loc_8223766C;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82237638
	if (!ctx.cr6.eq) goto loc_82237638;
	// lwz r3,60(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82237630
	if (ctx.cr6.eq) goto loc_82237630;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223762C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
loc_82237630:
	// lwz r3,76(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 76);
	// bl 0x8223bfe0
	ctx.lr = 0x82237638;
	sub_8223BFE0(ctx, base);
loc_82237638:
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82237654
	if (ctx.cr6.eq) goto loc_82237654;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823cd250
	ctx.lr = 0x82237650;
	sub_823CD250(ctx, base);
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
loc_82237654:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x8223b780
	ctx.lr = 0x8223765C;
	sub_8223B780(ctx, base);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,32785
	ctx.r4.u64 = ctx.r4.u64 | 32785;
	// bl 0x823cd250
	ctx.lr = 0x8223766C;
	sub_823CD250(ctx, base);
loc_8223766C:
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

DEFINE_REX_FUNC(sub_822392D0) {
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
	ctx.lr = 0x822392D8;
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
	ctx.lr = 0x822392F8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82238300
	ctx.lr = 0x82239304;
	sub_82238300(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82239318
	if (!ctx.cr0.eq) goto loc_82239318;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,87
	r31.u64 = r31.u64 | 87;
	// b 0x82239328
	goto loc_82239328;
loc_82239318:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8223df40
	ctx.lr = 0x82239324;
	sub_8223DF40(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82239328:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824d437c
	ctx.lr = 0x82239330;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8223AD88) {
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
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bl 0x82240538
	ctx.lr = 0x8223AD9C;
	sub_82240538(ctx, base);
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

DEFINE_REX_FUNC(sub_8223B600) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,259
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 259, ctx.xer);
	// bne cr6,0x8223b61c
	if (!ctx.cr6.eq) goto loc_8223B61C;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8223B61C:
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r11,r8,8
	ctx.r11.s64 = ctx.r8.s64 + 8;
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8223b658
	if (!ctx.cr6.eq) goto loc_8223B658;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223b658
	if (ctx.cr6.eq) goto loc_8223B658;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8223b64c
	if (!ctx.cr6.eq) goto loc_8223B64C;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8223B64C:
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_8223B658:
	// stw r10,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223b670
	if (ctx.cr6.eq) goto loc_8223B670;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// b 0x8223b674
	goto loc_8223B674;
loc_8223B670:
	// stw r4,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
loc_8223B674:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8223D3D0) {
	REX_FUNC_PROLOGUE();
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223d3f4
	if (ctx.cr6.eq) goto loc_8223D3F4;
	// lwz r3,80(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x8223d3f8
	goto loc_8223D3F8;
loc_8223D3F4:
	// lwz r3,72(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
loc_8223D3F8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223d408
	if (ctx.cr6.eq) goto loc_8223D408;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8223d40c
	goto loc_8223D40C;
loc_8223D408:
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
loc_8223D40C:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8223FCA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8223FCB0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 + 20;
	// lwz r28,0(r5)
	r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwzx r3,r11,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// bl 0x8223b1d0
	ctx.lr = 0x8223FCDC;
	sub_8223B1D0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8223fcf4
	if (!ctx.cr0.lt) goto loc_8223FCF4;
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
loc_8223FCF4:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223fd18
	if (ctx.cr6.eq) goto loc_8223FD18;
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// b 0x8223fd1c
	goto loc_8223FD1C;
loc_8223FD18:
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
loc_8223FD1C:
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82244BA8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e84
	ctx.lr = 0x82244BB0;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f2c
	ctx.lr = 0x82244BB8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r28,0
	r28.s64 = 0;
	// lfd f13,-5928(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + -5928);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f0,-5936(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -5936);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lfd f30,-5944(r9)
	f30.u64 = REX_LOAD_U64(ctx.r9.u32 + -5944);
	// li r29,0
	r29.s64 = 0;
	// lfd f29,4000(r8)
	f29.u64 = REX_LOAD_U64(ctx.r8.u32 + 4000);
	// fsqrt f28,f0
	f28.f64 = sqrt(ctx.f0.f64);
	// addi r30,r11,18544
	r30.s64 = ctx.r11.s64 + 18544;
	// lfs f26,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f26.f64 = double(temp.f32);
	// fsqrt f27,f13
	f27.f64 = sqrt(ctx.f13.f64);
loc_82244BFC:
	// extsw r11,r28
	ctx.r11.s64 = r28.s32;
	// li r31,0
	r31.s64 = 0;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fadd f31,f0,f29
	f31.f64 = ctx.f0.f64 + f29.f64;
loc_82244C14:
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// add r10,r29,r31
	ctx.r10.u64 = r29.u64 + r31.u64;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// rlwinm r27,r10,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fadd f25,f0,f29
	f25.f64 = ctx.f0.f64 + f29.f64;
	// fmul f0,f31,f25
	ctx.f0.f64 = f31.f64 * f25.f64;
	// fmul f1,f0,f30
	ctx.f1.f64 = ctx.f0.f64 * f30.f64;
	// bl 0x822d4d68
	ctx.lr = 0x82244C3C;
	sub_822D4D68(ctx, base);
	// fmul f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 * f28.f64;
	// addi r11,r30,-6912
	ctx.r11.s64 = r30.s64 + -6912;
	// fmul f13,f31,f25
	ctx.f13.f64 = f31.f64 * f25.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsx f0,r27,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + ctx.r11.u32, temp.u32);
	// fmul f1,f13,f30
	ctx.f1.f64 = ctx.f13.f64 * f30.f64;
	// bl 0x822d4d68
	ctx.lr = 0x82244C58;
	sub_822D4D68(ctx, base);
	// fmul f0,f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 * f27.f64;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,10
	ctx.cr6.compare<int32_t>(r31.s32, 10, ctx.xer);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsx f0,r27,r30
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + r30.u32, temp.u32);
	// blt cr6,0x82244c14
	if (ctx.cr6.lt) goto loc_82244C14;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r11,11
	ctx.r11.s64 = 11;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82244C7C:
	// add r10,r29,r11
	ctx.r10.u64 = r29.u64 + ctx.r11.u64;
	// addi r9,r30,-6912
	ctx.r9.s64 = r30.s64 + -6912;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stfsx f26,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// stfsx f26,r10,r30
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r10.u32 + r30.u32, temp.u32);
	// bdnz 0x82244c7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82244C7C;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpwi cr6,r29,160
	ctx.cr6.compare<int32_t>(r29.s32, 160, ctx.xer);
	// blt cr6,0x82244bfc
	if (ctx.cr6.lt) goto loc_82244BFC;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r29,0
	r29.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r11,-10816
	r30.s64 = ctx.r11.s64 + -10816;
loc_82244CB8:
	// addi r11,r30,64
	ctx.r11.s64 = r30.s64 + 64;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + r30.u32);
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
	// li r9,5
	ctx.r9.s64 = 5;
	// slw r6,r9,r29
	ctx.r6.u64 = r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r29.u8 & 0x3F));
	// lwzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// lwzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// bl 0x822449e0
	ctx.lr = 0x82244CD8;
	sub_822449E0(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(r31.u32, 32, ctx.xer);
	// blt cr6,0x82244cb8
	if (ctx.cr6.lt) goto loc_82244CB8;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f78
	ctx.lr = 0x82244CF4;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82247468) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8224747c
	if (!ctx.cr6.eq) goto loc_8224747C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_8224747C:
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82247494
	if (ctx.cr6.lt) goto loc_82247494;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// blr 
	return;
loc_82247494:
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x822474d8
	if (ctx.cr6.eq) goto loc_822474D8;
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822474c8
	if (ctx.cr6.eq) goto loc_822474C8;
	// lwz r9,132(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 132);
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stw r9,132(r10)
	REX_STORE_U32(ctx.r10.u32 + 132, ctx.r9.u32);
loc_822474C8:
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_822474D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82248890) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82248898;
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
	// addi r31,r11,24704
	r31.s64 = ctx.r11.s64 + 24704;
	// lwz r11,24848(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 24848);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822489c8
	if (!ctx.cr0.eq) goto loc_822489C8;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r10,-4596
	ctx.r9.s64 = ctx.r10.s64 + -4596;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r11,24848(r8)
	REX_STORE_U32(ctx.r8.u32 + 24848, ctx.r11.u32);
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
	// bl 0x8225a078
	ctx.lr = 0x822488F4;
	sub_8225A078(ctx, base);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// addi r9,r9,-30240
	ctx.r9.s64 = ctx.r9.s64 + -30240;
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
	// addi r9,r11,-4628
	ctx.r9.s64 = ctx.r11.s64 + -4628;
	// std r30,40(r31)
	REX_STORE_U64(r31.u32 + 40, r30.u64);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// li r9,144
	ctx.r9.s64 = 144;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// addi r11,r31,40
	ctx.r11.s64 = r31.s64 + 40;
	// stw r9,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// stw r10,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// bl 0x8225a078
	ctx.lr = 0x82248950;
	sub_8225A078(ctx, base);
	// stw r3,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// addi r9,r11,-4652
	ctx.r9.s64 = ctx.r11.s64 + -4652;
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r9,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// li r9,132
	ctx.r9.s64 = 132;
	// stw r10,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// addi r11,r31,76
	ctx.r11.s64 = r31.s64 + 76;
	// stw r30,108(r31)
	REX_STORE_U32(r31.u32 + 108, r30.u32);
	// stw r9,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// bl 0x8225a078
	ctx.lr = 0x822489A0;
	sub_8225A078(ctx, base);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,124(r31)
	REX_STORE_U32(r31.u32 + 124, r30.u32);
	// addi r11,r31,136
	ctx.r11.s64 = r31.s64 + 136;
	// stw r3,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// addi r11,r9,-30664
	ctx.r11.s64 = ctx.r9.s64 + -30664;
	// stw r30,128(r31)
	REX_STORE_U32(r31.u32 + 128, r30.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
	// std r30,136(r31)
	REX_STORE_U64(r31.u32 + 136, r30.u64);
loc_822489C8:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8224D4B8) {
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
	// addi r31,r11,26520
	r31.s64 = ctx.r11.s64 + 26520;
	// lwz r11,26540(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 26540);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8224d4fc
	if (!ctx.cr0.eq) goto loc_8224D4FC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,26540(r10)
	REX_STORE_U32(ctx.r10.u32 + 26540, ctx.r11.u32);
	// bl 0x8227acf8
	ctx.lr = 0x8224D4F0;
	sub_8227ACF8(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15544
	ctx.r3.s64 = ctx.r11.s64 + 15544;
	// bl 0x822d5848
	ctx.lr = 0x8224D4FC;
	sub_822D5848(ctx, base);
loc_8224D4FC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lfs f0,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
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

DEFINE_REX_FUNC(sub_8224F0D0) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x8224b870
	sub_8224B870(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8224F228) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8224F230;
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
	// addi r31,r11,-9040
	r31.s64 = ctx.r11.s64 + -9040;
	// lwz r11,26772(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 26772);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8224f498
	if (!ctx.cr0.eq) goto loc_8224F498;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r10,-3496
	ctx.r9.s64 = ctx.r10.s64 + -3496;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r11,26772(r8)
	REX_STORE_U32(ctx.r8.u32 + 26772, ctx.r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x8224dc30
	ctx.lr = 0x8224F28C;
	sub_8224DC30(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// addi r9,r11,-3516
	ctx.r9.s64 = ctx.r11.s64 + -3516;
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// li r9,40
	ctx.r9.s64 = 40;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// addi r11,r31,28
	ctx.r11.s64 = r31.s64 + 28;
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r9,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// stw r10,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// bl 0x8224dc30
	ctx.lr = 0x8224F2DC;
	sub_8224DC30(ctx, base);
	// stw r3,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// addi r9,r11,-3532
	ctx.r9.s64 = ctx.r11.s64 + -3532;
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r9,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// li r9,44
	ctx.r9.s64 = 44;
	// stw r10,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// addi r11,r31,76
	ctx.r11.s64 = r31.s64 + 76;
	// stw r30,108(r31)
	REX_STORE_U32(r31.u32 + 108, r30.u32);
	// stw r9,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// bl 0x8224dc30
	ctx.lr = 0x8224F32C;
	sub_8224DC30(ctx, base);
	// stw r3,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// addi r11,r31,124
	ctx.r11.s64 = r31.s64 + 124;
	// stw r30,124(r31)
	REX_STORE_U32(r31.u32 + 124, r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,128(r31)
	REX_STORE_U32(r31.u32 + 128, r30.u32);
	// stw r30,132(r31)
	REX_STORE_U32(r31.u32 + 132, r30.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r30,136(r31)
	REX_STORE_U32(r31.u32 + 136, r30.u32);
	// addi r9,r11,-3560
	ctx.r9.s64 = ctx.r11.s64 + -3560;
	// stw r30,140(r31)
	REX_STORE_U32(r31.u32 + 140, r30.u32);
	// stw r9,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r9.u32);
	// li r9,48
	ctx.r9.s64 = 48;
	// stw r10,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r30,144(r31)
	REX_STORE_U32(r31.u32 + 144, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r9,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r9.u32);
	// stw r30,156(r31)
	REX_STORE_U32(r31.u32 + 156, r30.u32);
	// stw r10,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r10.u32);
	// bl 0x8224dc30
	ctx.lr = 0x8224F37C;
	sub_8224DC30(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r3,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r30,172(r31)
	REX_STORE_U32(r31.u32 + 172, r30.u32);
	// addi r9,r11,-3584
	ctx.r9.s64 = ctx.r11.s64 + -3584;
	// stw r30,176(r31)
	REX_STORE_U32(r31.u32 + 176, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,180(r31)
	REX_STORE_U32(r31.u32 + 180, r30.u32);
	// addi r11,r31,172
	ctx.r11.s64 = r31.s64 + 172;
	// stw r30,184(r31)
	REX_STORE_U32(r31.u32 + 184, r30.u32);
	// stw r30,188(r31)
	REX_STORE_U32(r31.u32 + 188, r30.u32);
	// stw r9,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r9.u32);
	// li r9,52
	ctx.r9.s64 = 52;
	// stw r10,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r30,192(r31)
	REX_STORE_U32(r31.u32 + 192, r30.u32);
	// stw r30,204(r31)
	REX_STORE_U32(r31.u32 + 204, r30.u32);
	// stw r9,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r9.u32);
	// stw r10,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r10.u32);
	// bl 0x8224dc30
	ctx.lr = 0x8224F3CC;
	sub_8224DC30(ctx, base);
	// stw r3,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r3.u32);
	// stw r30,220(r31)
	REX_STORE_U32(r31.u32 + 220, r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,224(r31)
	REX_STORE_U32(r31.u32 + 224, r30.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r30,228(r31)
	REX_STORE_U32(r31.u32 + 228, r30.u32);
	// addi r9,r11,-3628
	ctx.r9.s64 = ctx.r11.s64 + -3628;
	// stw r30,232(r31)
	REX_STORE_U32(r31.u32 + 232, r30.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r30,236(r31)
	REX_STORE_U32(r31.u32 + 236, r30.u32);
	// stw r9,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r9.u32);
	// li r9,60
	ctx.r9.s64 = 60;
	// stw r10,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,252(r31)
	REX_STORE_U32(r31.u32 + 252, r30.u32);
	// addi r11,r31,220
	ctx.r11.s64 = r31.s64 + 220;
	// stw r9,248(r31)
	REX_STORE_U32(r31.u32 + 248, ctx.r9.u32);
	// stw r10,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r10.u32);
	// bl 0x8225a078
	ctx.lr = 0x8224F420;
	sub_8225A078(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r30,268(r31)
	REX_STORE_U32(r31.u32 + 268, r30.u32);
	// addi r9,r9,31080
	ctx.r9.s64 = ctx.r9.s64 + 31080;
	// stw r30,272(r31)
	REX_STORE_U32(r31.u32 + 272, r30.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r3,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r3.u32);
	// stw r9,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r9.u32);
	// addi r9,r8,-3656
	ctx.r9.s64 = ctx.r8.s64 + -3656;
	// li r10,6
	ctx.r10.s64 = 6;
	// std r30,280(r31)
	REX_STORE_U64(r31.u32 + 280, r30.u64);
	// stw r9,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r9.u32);
	// stw r10,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r10.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// li r11,56
	ctx.r11.s64 = 56;
	// stw r30,288(r31)
	REX_STORE_U32(r31.u32 + 288, r30.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r11.u32);
	// stw r9,300(r31)
	REX_STORE_U32(r31.u32 + 300, ctx.r9.u32);
	// addi r11,r31,280
	ctx.r11.s64 = r31.s64 + 280;
	// stw r10,308(r31)
	REX_STORE_U32(r31.u32 + 308, ctx.r10.u32);
	// bl 0x8224dca0
	ctx.lr = 0x8224F47C;
	sub_8224DCA0(ctx, base);
	// stw r3,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r3.u32);
	// stw r30,316(r31)
	REX_STORE_U32(r31.u32 + 316, r30.u32);
	// addi r11,r31,316
	ctx.r11.s64 = r31.s64 + 316;
	// stw r30,320(r31)
	REX_STORE_U32(r31.u32 + 320, r30.u32);
	// stw r30,324(r31)
	REX_STORE_U32(r31.u32 + 324, r30.u32);
	// stw r30,328(r31)
	REX_STORE_U32(r31.u32 + 328, r30.u32);
	// stw r30,332(r31)
	REX_STORE_U32(r31.u32 + 332, r30.u32);
loc_8224F498:
	// li r11,7
	ctx.r11.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82257CE0) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8225da70
	ctx.lr = 0x82257CFC;
	sub_8225DA70(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x822517a0
	ctx.lr = 0x82257D08;
	sub_822517A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82259A68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82259A70;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82256a08
	ctx.lr = 0x82259A84;
	sub_82256A08(ctx, base);
	// b 0x82259b30
	goto loc_82259B30;
loc_82259A88:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82259aa0
	if (ctx.cr6.eq) goto loc_82259AA0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82257bf8
	ctx.lr = 0x82259A98;
	sub_82257BF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82259b24
	if (ctx.cr0.eq) goto loc_82259B24;
loc_82259AA0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82259ab8
	if (ctx.cr6.eq) goto loc_82259AB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225ee88
	ctx.lr = 0x82259AB0;
	sub_8225EE88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82259b24
	if (ctx.cr0.eq) goto loc_82259B24;
loc_82259AB8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82257c40
	ctx.lr = 0x82259AC4;
	sub_82257C40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82259b24
	if (!ctx.cr0.eq) goto loc_82259B24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822469c0
	ctx.lr = 0x82259AD4;
	sub_822469C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82247078
	ctx.lr = 0x82259AE8;
	sub_82247078(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822469c0
	ctx.lr = 0x82259AF0;
	sub_822469C0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8224da00
	ctx.lr = 0x82259AF8;
	sub_8224DA00(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82259b10
	if (ctx.cr6.eq) goto loc_82259B10;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82259b48
	if (ctx.cr6.eq) goto loc_82259B48;
loc_82259B10:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822469c0
	ctx.lr = 0x82259B18;
	sub_822469C0(ctx, base);
	// bl 0x82259908
	ctx.lr = 0x82259B1C;
	sub_82259908(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82259b50
	if (!ctx.cr0.eq) goto loc_82259B50;
loc_82259B24:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82256af8
	ctx.lr = 0x82259B30;
	sub_82256AF8(ctx, base);
loc_82259B30:
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82259a88
	if (!ctx.cr6.eq) goto loc_82259A88;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82259B40:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4edc
	return;
loc_82259B48:
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x82259b40
	goto loc_82259B40;
loc_82259B50:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822469c0
	ctx.lr = 0x82259B58;
	sub_822469C0(ctx, base);
	// b 0x82259b40
	goto loc_82259B40;
}

DEFINE_REX_FUNC(sub_8225D560) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8225DAE8) {
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
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8225da70
	ctx.lr = 0x8225DB10;
	sub_8225DA70(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x8225DB1C;
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

DEFINE_REX_FUNC(sub_8225E3A0) {
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
	// li r4,2011
	ctx.r4.s64 = 2011;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8225da70
	ctx.lr = 0x8225E3C8;
	sub_8225DA70(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x8225E3D4;
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

DEFINE_REX_FUNC(sub_8225F270) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82247020
	ctx.lr = 0x8225F29C;
	sub_82247020(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822469c0
	ctx.lr = 0x8225F2A4;
	sub_822469C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8224da00
	ctx.lr = 0x8225F2AC;
	sub_8224DA00(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82262010) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82262018;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// beq cr6,0x82262064
	if (ctx.cr6.eq) goto loc_82262064;
	// cmplwi cr6,r11,2006
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2006, ctx.xer);
	// bne cr6,0x822620a0
	if (!ctx.cr6.eq) goto loc_822620A0;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r29,16(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x8226204C;
	sub_822469C0(ctx, base);
	// bl 0x8225ef18
	ctx.lr = 0x82262050;
	sub_8225EF18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82261f28
	ctx.lr = 0x82262060;
	sub_82261F28(ctx, base);
	// b 0x822620a0
	goto loc_822620A0;
loc_82262064:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lbz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// bl 0x82255d40
	ctx.lr = 0x82262070;
	sub_82255D40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82262088
	if (ctx.cr6.eq) goto loc_82262088;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x822620a0
	goto loc_822620A0;
loc_82262088:
	// lwz r29,4(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x82262094;
	sub_822469C0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82261e18
	ctx.lr = 0x822620A0;
	sub_82261E18(ctx, base);
loc_822620A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822658B8) {
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
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822658f4
	if (ctx.cr0.eq) goto loc_822658F4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r5,132(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 132);
	// addi r6,r31,12
	ctx.r6.s64 = r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82265868
	ctx.lr = 0x822658EC;
	sub_82265868(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,8(r31)
	REX_STORE_U8(r31.u32 + 8, ctx.r11.u8);
loc_822658F4:
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

DEFINE_REX_FUNC(sub_82267180) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822672B8) {
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
	// bl 0x82255b70
	ctx.lr = 0x822672DC;
	sub_82255B70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bl 0x8225d978
	ctx.lr = 0x822672F8;
	sub_8225D978(ctx, base);
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

DEFINE_REX_FUNC(sub_82268918) {
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
	ctx.lr = 0x82268920;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// li r21,0
	r21.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82268a64
	if (!ctx.cr6.gt) goto loc_82268A64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r22,0
	r22.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// addi r20,r11,44
	r20.s64 = ctx.r11.s64 + 44;
loc_82268954:
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 20);
	// add r31,r22,r11
	r31.u64 = r22.u64 + ctx.r11.u64;
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24);
	// add r25,r24,r11
	r25.u64 = r24.u64 + ctx.r11.u64;
	// lwzx r27,r10,r23
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + r23.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82268a5c
	if (ctx.cr6.lt) goto loc_82268A5C;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r19.u32);
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// stw r20,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r20.u32);
	// li r28,0
	r28.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x822689f4
	if (!ctx.cr0.gt) goto loc_822689F4;
	// li r29,0
	r29.s64 = 0;
loc_82268998:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8227acf8
	ctx.lr = 0x822689A0;
	sub_8227ACF8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwzx r10,r10,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bctrl 
	ctx.lr = 0x822689C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// blt 0x82268a50
	if (ctx.cr0.lt) goto loc_82268A50;
	// lwz r30,100(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8227b2c8
	ctx.lr = 0x822689DC;
	sub_8227B2C8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82268998
	if (ctx.cr6.lt) goto loc_82268998;
loc_822689F4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,20(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bctrl 
	ctx.lr = 0x82268A24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82268A28:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x82268a64
	if (ctx.cr6.lt) goto loc_82268A64;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r24,r24,20
	r24.s64 = r24.s64 + 20;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// addi r22,r22,12
	r22.s64 = r22.s64 + 12;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(r21.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82268954
	if (ctx.cr6.lt) goto loc_82268954;
	// b 0x82268a64
	goto loc_82268A64;
loc_82268A50:
	// bl 0x8227b2c8
	ctx.lr = 0x82268A54;
	sub_8227B2C8(ctx, base);
	// mr r31,r30
	r31.u64 = r30.u64;
	// b 0x82268a28
	goto loc_82268A28;
loc_82268A5C:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,87
	r31.u64 = r31.u64 | 87;
loc_82268A64:
	// addi r4,r26,28
	ctx.r4.s64 = r26.s64 + 28;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82256da0
	ctx.lr = 0x82268A70;
	sub_82256DA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_8226EFB0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// stw r4,144(r3)
	REX_STORE_U32(ctx.r3.u32 + 144, ctx.r4.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8226efd0
	if (!ctx.cr6.lt) goto loc_8226EFD0;
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// sthx r9,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
loc_8226EFD0:
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r9,108(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// lwz r10,144(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8226eff0
	if (!ctx.cr6.lt) goto loc_8226EFF0;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
loc_8226EFF0:
	// b 0x8226b6f8
	sub_8226B6F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82270448) {
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
	// bl 0x82255b70
	ctx.lr = 0x82270464;
	sub_82255B70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226ced8
	ctx.lr = 0x8227046C;
	sub_8226CED8(ctx, base);
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

DEFINE_REX_FUNC(sub_82272C80) {
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
	// bl 0x822d4e50
	ctx.lr = 0x82272C88;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r4,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r4.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// bl 0x822647f8
	ctx.lr = 0x82272CA0;
	sub_822647F8(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82256990
	ctx.lr = 0x82272CB4;
	sub_82256990(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82273178
	if (ctx.cr6.eq) goto loc_82273178;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r31,-32254
	r31.s64 = -2113798144;
	// lis r30,-32254
	r30.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r15,-32163
	r15.s64 = -2107834368;
	// lis r16,-32163
	r16.s64 = -2107834368;
	// lis r20,-32163
	r20.s64 = -2107834368;
	// addi r19,r8,-3140
	r19.s64 = ctx.r8.s64 + -3140;
	// addi r26,r7,-3068
	r26.s64 = ctx.r7.s64 + -3068;
	// addi r25,r6,-3308
	r25.s64 = ctx.r6.s64 + -3308;
	// addi r24,r5,-3256
	r24.s64 = ctx.r5.s64 + -3256;
	// addi r23,r4,-3212
	r23.s64 = ctx.r4.s64 + -3212;
	// addi r22,r31,-3168
	r22.s64 = r31.s64 + -3168;
	// addi r21,r30,-3104
	r21.s64 = r30.s64 + -3104;
	// addi r18,r9,-3040
	r18.s64 = ctx.r9.s64 + -3040;
	// addi r14,r10,1220
	r14.s64 = ctx.r10.s64 + 1220;
	// addi r17,r11,1192
	r17.s64 = ctx.r11.s64 + 1192;
loc_82272D24:
	// li r30,0
	r30.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// bl 0x82256e40
	ctx.lr = 0x82272D34;
	sub_82256E40(ctx, base);
	// lwz r4,23612(r20)
	ctx.r4.u64 = REX_LOAD_U32(r20.u32 + 23612);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82246920
	ctx.lr = 0x82272D40;
	sub_82246920(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// beq 0x82272da0
	if (ctx.cr0.eq) goto loc_82272DA0;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// bl 0x82256688
	ctx.lr = 0x82272D54;
	sub_82256688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822733fc
	if (ctx.cr0.lt) goto loc_822733FC;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82272d88
	if (ctx.cr6.eq) goto loc_82272D88;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82272d88
	if (ctx.cr6.eq) goto loc_82272D88;
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82273158
	if (!ctx.cr6.eq) goto loc_82273158;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,32(r29)
	REX_STORE_U32(r29.u32 + 32, ctx.r11.u32);
	// b 0x82273158
	goto loc_82273158;
loc_82272D88:
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82273158
	if (!ctx.cr6.eq) goto loc_82273158;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r11.u32);
	// b 0x82273158
	goto loc_82273158;
loc_82272DA0:
	// lwz r4,23616(r16)
	ctx.r4.u64 = REX_LOAD_U32(r16.u32 + 23616);
	// bl 0x82246920
	ctx.lr = 0x82272DA8;
	sub_82246920(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82272ddc
	if (ctx.cr0.eq) goto loc_82272DDC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822566f0
	ctx.lr = 0x82272DBC;
	sub_822566F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822733fc
	if (ctx.cr0.lt) goto loc_822733FC;
	// lwz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82273158
	if (!ctx.cr6.eq) goto loc_82273158;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,40(r29)
	REX_STORE_U32(r29.u32 + 40, ctx.r11.u32);
	// b 0x82273158
	goto loc_82273158;
loc_82272DDC:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82272e04
	if (ctx.cr6.eq) goto loc_82272E04;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x822d7938
	ctx.lr = 0x82272DF0;
	sub_822D7938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82272e04
	if (!ctx.cr0.eq) goto loc_82272E04;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,48(r29)
	REX_STORE_U32(r29.u32 + 48, ctx.r11.u32);
	// b 0x82273158
	goto loc_82273158;
loc_82272E04:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82273158
	if (!ctx.cr6.eq) goto loc_82273158;
	// lwz r4,23596(r15)
	ctx.r4.u64 = REX_LOAD_U32(r15.u32 + 23596);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82246920
	ctx.lr = 0x82272E18;
	sub_82246920(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82272e38
	if (!ctx.cr0.eq) goto loc_82272E38;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,23608(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23608);
	// bl 0x82246920
	ctx.lr = 0x82272E30;
	sub_82246920(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82273158
	if (ctx.cr0.eq) goto loc_82273158;
loc_82272E38:
	// lwz r4,23596(r15)
	ctx.r4.u64 = REX_LOAD_U32(r15.u32 + 23596);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82246920
	ctx.lr = 0x82272E44;
	sub_82246920(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82272ec8
	if (ctx.cr0.eq) goto loc_82272EC8;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82256e40
	ctx.lr = 0x82272E5C;
	sub_82256E40(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82273158
	if (ctx.cr6.eq) goto loc_82273158;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// bl 0x822d7938
	ctx.lr = 0x82272E70;
	sub_822D7938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82273158
	if (!ctx.cr0.eq) goto loc_82273158;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r3,44(r29)
	REX_STORE_U32(r29.u32 + 44, ctx.r3.u32);
	// bl 0x82256990
	ctx.lr = 0x82272E8C;
	sub_82256990(ctx, base);
	// b 0x82272eb0
	goto loc_82272EB0;
loc_82272E90:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r4,23608(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23608);
	// bl 0x82246920
	ctx.lr = 0x82272E9C;
	sub_82246920(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82272ec0
	if (!ctx.cr0.eq) goto loc_82272EC0;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82256a80
	ctx.lr = 0x82272EB0;
	sub_82256A80(ctx, base);
loc_82272EB0:
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82272e90
	if (!ctx.cr6.eq) goto loc_82272E90;
	// b 0x82273158
	goto loc_82273158;
loc_82272EC0:
	// lwz r28,92(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x82272ecc
	goto loc_82272ECC;
loc_82272EC8:
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82272ECC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82273158
	if (ctx.cr6.eq) goto loc_82273158;
	// addi r4,r29,144
	ctx.r4.s64 = r29.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82256c10
	ctx.lr = 0x82272EE0;
	sub_82256C10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822733fc
	if (ctx.cr0.lt) goto loc_822733FC;
	// addi r30,r29,64
	r30.s64 = r29.s64 + 64;
	// addi r27,r29,60
	r27.s64 = r29.s64 + 60;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8225e988
	ctx.lr = 0x82272F00;
	sub_8225E988(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822733fc
	if (ctx.cr0.lt) goto loc_822733FC;
	// addi r4,r29,156
	ctx.r4.s64 = r29.s64 + 156;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822570a8
	ctx.lr = 0x82272F14;
	sub_822570A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822733fc
	if (ctx.cr0.lt) goto loc_822733FC;
	// addi r4,r29,160
	ctx.r4.s64 = r29.s64 + 160;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822564b0
	ctx.lr = 0x82272F28;
	sub_822564B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822733fc
	if (ctx.cr0.lt) goto loc_822733FC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822464a0
	ctx.lr = 0x82272F48;
	sub_822464A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822733fc
	if (ctx.cr0.lt) goto loc_822733FC;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8227acf8
	ctx.lr = 0x82272F58;
	sub_8227ACF8(ctx, base);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8224a0a0
	ctx.lr = 0x82272F6C;
	sub_8224A0A0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// bl 0x822464a0
	ctx.lr = 0x82272F84;
	sub_822464A0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82273184
	if (ctx.cr0.lt) goto loc_82273184;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8224a0a0
	ctx.lr = 0x82272FA0;
	sub_8224A0A0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// bl 0x822464a0
	ctx.lr = 0x82272FB8;
	sub_822464A0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82273184
	if (ctx.cr0.lt) goto loc_82273184;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8224a0a0
	ctx.lr = 0x82272FD4;
	sub_8224A0A0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,100(r29)
	REX_STORE_U32(r29.u32 + 100, ctx.r11.u32);
	// bl 0x822464a0
	ctx.lr = 0x82272FEC;
	sub_822464A0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82273184
	if (ctx.cr0.lt) goto loc_82273184;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8224a0a0
	ctx.lr = 0x82273008;
	sub_8224A0A0(ctx, base);
	// lfs f0,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fsel f0,f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : f31.f64;
	// stfs f31,120(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 120, temp.u32);
	// stfs f0,104(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 104, temp.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822464a0
	ctx.lr = 0x82273028;
	sub_822464A0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82273184
	if (ctx.cr0.lt) goto loc_82273184;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8224a0a0
	ctx.lr = 0x82273044;
	sub_8224A0A0(ctx, base);
	// lfs f0,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fsel f0,f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : f31.f64;
	// stfs f0,108(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 108, temp.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822464a0
	ctx.lr = 0x82273060;
	sub_822464A0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82273184
	if (ctx.cr0.lt) goto loc_82273184;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8224a0a0
	ctx.lr = 0x8227307C;
	sub_8224A0A0(ctx, base);
	// lfs f0,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fsel f0,f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : f31.f64;
	// stfs f0,112(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 112, temp.u32);
	// lfs f13,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lfs f12,52(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lfs f11,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f13,76(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + 76, temp.u32);
	// stfs f12,72(r29)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r29.u32 + 72, temp.u32);
	// stfs f11,80(r29)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r29.u32 + 80, temp.u32);
	// lfs f0,56(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 68, temp.u32);
	// bl 0x822464a0
	ctx.lr = 0x822730B8;
	sub_822464A0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82273184
	if (ctx.cr0.lt) goto loc_82273184;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8224a0a0
	ctx.lr = 0x822730D4;
	sub_8224A0A0(ctx, base);
	// lfs f0,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,56(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822730e8
	if (!ctx.cr6.gt) goto loc_822730E8;
	// stfs f0,68(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 68, temp.u32);
loc_822730E8:
	// lfs f13,52(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822730fc
	if (!ctx.cr6.gt) goto loc_822730FC;
	// stfs f0,72(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 72, temp.u32);
loc_822730FC:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822464a0
	ctx.lr = 0x8227310C;
	sub_822464A0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82273184
	if (ctx.cr0.lt) goto loc_82273184;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8224a0a0
	ctx.lr = 0x82273128;
	sub_8224A0A0(ctx, base);
	// lfs f0,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : f31.f64;
	// fsel f13,f13,f13,f31
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : f31.f64;
	// stfs f0,84(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 84, temp.u32);
	// stfs f13,88(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + 88, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8225d040
	ctx.lr = 0x82273148;
	sub_8225D040(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8227b2c8
	ctx.lr = 0x82273150;
	sub_8227B2C8(ctx, base);
	// lwz r27,380(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// li r30,0
	r30.s64 = 0;
loc_82273158:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82256a80
	ctx.lr = 0x82273164;
	sub_82256A80(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82272d24
	if (!ctx.cr6.eq) goto loc_82272D24;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82273194
	if (!ctx.cr6.eq) goto loc_82273194;
loc_82273178:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,23
	ctx.r3.u64 = ctx.r3.u64 | 23;
	// b 0x822733fc
	goto loc_822733FC;
loc_82273184:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8227b2c8
	ctx.lr = 0x8227318C;
	sub_8227B2C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x822733fc
	goto loc_822733FC;
loc_82273194:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82256758
	ctx.lr = 0x8227319C;
	sub_82256758(ctx, base);
	// lwz r3,36(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822731ac
	if (ctx.cr6.eq) goto loc_822731AC;
	// bl 0x822568d0
	ctx.lr = 0x822731AC;
	sub_822568D0(ctx, base);
loc_822731AC:
	// lwz r3,32(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822731bc
	if (ctx.cr6.eq) goto loc_822731BC;
	// bl 0x822568d0
	ctx.lr = 0x822731BC;
	sub_822568D0(ctx, base);
loc_822731BC:
	// lwz r3,40(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822731cc
	if (ctx.cr6.eq) goto loc_822731CC;
	// bl 0x822568d0
	ctx.lr = 0x822731CC;
	sub_822568D0(ctx, base);
loc_822731CC:
	// lwz r3,44(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822731dc
	if (ctx.cr6.eq) goto loc_822731DC;
	// bl 0x822568d0
	ctx.lr = 0x822731DC;
	sub_822568D0(ctx, base);
loc_822731DC:
	// lwz r3,48(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822731ec
	if (ctx.cr6.eq) goto loc_822731EC;
	// bl 0x822568d0
	ctx.lr = 0x822731EC;
	sub_822568D0(ctx, base);
loc_822731EC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822568d0
	ctx.lr = 0x822731F4;
	sub_822568D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82256758
	ctx.lr = 0x822731FC;
	sub_82256758(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822516b0
	ctx.lr = 0x82273204;
	sub_822516B0(ctx, base);
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82256e40
	ctx.lr = 0x82273214;
	sub_82256E40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822733fc
	if (ctx.cr0.lt) goto loc_822733FC;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x82257af0
	ctx.lr = 0x82273228;
	sub_82257AF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// bl 0x8225a4c0
	ctx.lr = 0x8227323C;
	sub_8225A4C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822733fc
	if (ctx.cr0.lt) goto loc_822733FC;
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 44);
	// stw r30,168(r29)
	REX_STORE_U32(r29.u32 + 168, r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227334c
	if (ctx.cr6.eq) goto loc_8227334C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r4,r11,-2420
	ctx.r4.s64 = ctx.r11.s64 + -2420;
	// bl 0x822464a0
	ctx.lr = 0x82273268;
	sub_822464A0(ctx, base);
	// mr r31,r30
	r31.u64 = r30.u64;
loc_8227326C:
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82273284
	if (!ctx.cr6.eq) goto loc_82273284;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// b 0x8227328c
	goto loc_8227328C;
loc_82273284:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8227328C:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822733d4
	if (!ctx.cr6.lt) goto loc_822733D4;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r30,23596(r15)
	r30.u64 = REX_LOAD_U32(r15.u32 + 23596);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8224d8a0
	ctx.lr = 0x822732B4;
	sub_8224D8A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8224a060
	ctx.lr = 0x822732BC;
	sub_8224A060(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82273314
	if (ctx.cr0.eq) goto loc_82273314;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8227acf8
	ctx.lr = 0x822732CC;
	sub_8227ACF8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82264750
	ctx.lr = 0x822732F0;
	sub_82264750(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8227330c
	if (ctx.cr0.lt) goto loc_8227330C;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// lwz r3,164(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x822d7938
	ctx.lr = 0x82273304;
	sub_822D7938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82273320
	if (ctx.cr0.eq) goto loc_82273320;
loc_8227330C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8227b2c8
	ctx.lr = 0x82273314;
	sub_8227B2C8(ctx, base);
loc_82273314:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// li r30,0
	r30.s64 = 0;
	// b 0x8227326c
	goto loc_8227326C;
loc_82273320:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r28,r11,8
	r28.s64 = ctx.r11.s64 + 8;
	// bl 0x8227b2c8
	ctx.lr = 0x82273340;
	sub_8227B2C8(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r30,0
	r30.s64 = 0;
	// b 0x82273354
	goto loc_82273354;
loc_8227334C:
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
loc_82273354:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822733d4
	if (ctx.cr6.eq) goto loc_822733D4;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82273360:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82273374
	if (ctx.cr6.eq) goto loc_82273374;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82273374:
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822733d0
	if (!ctx.cr6.lt) goto loc_822733D0;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,23608(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 23608);
	// mullw r10,r9,r31
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(r31.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8224d8a0
	ctx.lr = 0x8227339C;
	sub_8224D8A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8224a060
	ctx.lr = 0x822733A4;
	sub_8224A060(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822733b8
	if (!ctx.cr0.eq) goto loc_822733B8;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// li r30,0
	r30.s64 = 0;
	// b 0x82273360
	goto loc_82273360;
loc_822733B8:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,168(r29)
	REX_STORE_U32(r29.u32 + 168, ctx.r11.u32);
loc_822733D0:
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_822733D4:
	// lwz r11,168(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822733ec
	if (!ctx.cr6.eq) goto loc_822733EC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x822733fc
	goto loc_822733FC;
loc_822733EC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822724d8
	ctx.lr = 0x822733F4;
	sub_822724D8(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_822733FC:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8228E5A8) {
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
	ctx.lr = 0x8228E5C0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwa r9,20(r4)
	ctx.r9.s64 = int32_t(REX_LOAD_U32(ctx.r4.u32 + 20));
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwa r7,12(r4)
	ctx.r7.s64 = int32_t(REX_LOAD_U32(ctx.r4.u32 + 12));
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwa r11,16(r4)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r4.u32 + 16));
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwa r8,24(r4)
	ctx.r8.s64 = int32_t(REX_LOAD_U32(ctx.r4.u32 + 24));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f30,f13
	f30.f64 = double(float(ctx.f13.f64));
	// lwz r10,-2144(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -2144);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// stw r10,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f31,f12
	f31.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f29,f30,f11
	f29.f64 = double(float(f30.f64 / ctx.f11.f64));
	// fdivs f28,f31,f0
	f28.f64 = double(float(f31.f64 / ctx.f0.f64));
	// bl 0x82289370
	ctx.lr = 0x8228E638;
	sub_82289370(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f31.f64 - ctx.f1.f64));
	// fsubs f12,f30,f1
	ctx.f12.f64 = double(float(f30.f64 - ctx.f1.f64));
	// stfs f28,108(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f29,136(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stfs f28,140(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f29,152(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fneg f0,f1
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x82288db8
	ctx.lr = 0x8228E69C;
	sub_82288DB8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8228e6bc
	if (ctx.cr0.lt) goto loc_8228E6BC;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82289308
	ctx.lr = 0x8228E6BC;
	sub_82289308(ctx, base);
loc_8228E6BC:
	// lwz r3,160(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x822d7b58
	ctx.lr = 0x8228E6C4;
	sub_822D7B58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f84
	ctx.lr = 0x8228E6D4;
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

DEFINE_REX_FUNC(sub_82293388) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8221c430
	ctx.lr = 0x8229339C;
	sub_8221C430(ctx, base);
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

DEFINE_REX_FUNC(sub_822939E8) {
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
	ctx.lr = 0x822939F0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r23,0
	r23.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// mr r26,r23
	r26.u64 = r23.u64;
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// mr r24,r23
	r24.u64 = r23.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// blt cr6,0x82293b78
	if (ctx.cr6.lt) goto loc_82293B78;
	// addi r25,r3,20
	r25.s64 = ctx.r3.s64 + 20;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82295d28
	ctx.lr = 0x82293A34;
	sub_82295D28(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82293b7c
	if (ctx.cr0.lt) goto loc_82293B7C;
	// lbz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 92);
	// lbz r10,93(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 93);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// or r30,r11,r10
	r30.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(r30.s32, 3, ctx.xer);
	// blt cr6,0x82293b78
	if (ctx.cr6.lt) goto loc_82293B78;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(r30.s32, 32, ctx.xer);
	// bgt cr6,0x82293b78
	if (ctx.cr6.gt) goto loc_82293B78;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r5,r30,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82295bd8
	ctx.lr = 0x82293A74;
	sub_82295BD8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82293b7c
	if (ctx.cr0.lt) goto loc_82293B7C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x82293afc
	if (!ctx.cr6.gt) goto loc_82293AFC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r23
	r28.u64 = r23.u64;
	// addi r27,r11,13208
	r27.s64 = ctx.r11.s64 + 13208;
loc_82293A90:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r3,r28,r11
	ctx.r3.u64 = r28.u64 + ctx.r11.u64;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// lbz r10,9(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 9);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,10(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 10);
	// lbz r8,11(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 11);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r31,r11,r8
	r31.u64 = ctx.r11.u64 | ctx.r8.u64;
	// bl 0x822d60a0
	ctx.lr = 0x82293ACC;
	sub_822D60A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82293adc
	if (!ctx.cr0.eq) goto loc_82293ADC;
	// mr r26,r31
	r26.u64 = r31.u64;
	// b 0x82293ae8
	goto loc_82293AE8;
loc_82293ADC:
	// cmplw cr6,r31,r24
	ctx.cr6.compare<uint32_t>(r31.u32, r24.u32, ctx.xer);
	// ble cr6,0x82293ae8
	if (!ctx.cr6.gt) goto loc_82293AE8;
	// mr r24,r31
	r24.u64 = r31.u64;
loc_82293AE8:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// bne 0x82293a90
	if (!ctx.cr0.eq) goto loc_82293A90;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x82293b04
	if (!ctx.cr6.eq) goto loc_82293B04;
loc_82293AFC:
	// li r31,-1
	r31.s64 = -1;
	// b 0x82293b64
	goto loc_82293B64;
loc_82293B04:
	// cmplw cr6,r24,r26
	ctx.cr6.compare<uint32_t>(r24.u32, r26.u32, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// ble cr6,0x82293b40
	if (!ctx.cr6.gt) goto loc_82293B40;
	// lwz r5,28(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 28);
	// addi r6,r29,32
	ctx.r6.s64 = r29.s64 + 32;
	// stw r5,40(r29)
	REX_STORE_U32(r29.u32 + 40, ctx.r5.u32);
	// bl 0x82295bd8
	ctx.lr = 0x82293B24;
	sub_82295BD8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x82293b34
	if (!ctx.cr0.lt) goto loc_82293B34;
	// stw r23,40(r29)
	REX_STORE_U32(r29.u32 + 40, r23.u32);
	// b 0x82293b64
	goto loc_82293B64;
loc_82293B34:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,44(r29)
	REX_STORE_U32(r29.u32 + 44, ctx.r11.u32);
	// b 0x82293b64
	goto loc_82293B64;
loc_82293B40:
	// stw r26,40(r29)
	REX_STORE_U32(r29.u32 + 40, r26.u32);
	// addi r30,r29,32
	r30.s64 = r29.s64 + 32;
	// stw r23,44(r29)
	REX_STORE_U32(r29.u32 + 44, r23.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x82295bd8
	ctx.lr = 0x82293B58;
	sub_82295BD8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x82293b64
	if (!ctx.cr0.lt) goto loc_82293B64;
	// stw r23,0(r30)
	REX_STORE_U32(r30.u32 + 0, r23.u32);
loc_82293B64:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82295cf8
	ctx.lr = 0x82293B70;
	sub_82295CF8(ctx, base);
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// b 0x82293b7c
	goto loc_82293B7C;
loc_82293B78:
	// li r31,-1
	r31.s64 = -1;
loc_82293B7C:
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82293b9c
	if (ctx.cr6.eq) goto loc_82293B9C;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// addi r3,r29,20
	ctx.r3.s64 = r29.s64 + 20;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82293b9c
	if (!ctx.cr6.eq) goto loc_82293B9C;
	// bl 0x82295dd8
	ctx.lr = 0x82293B9C;
	sub_82295DD8(ctx, base);
loc_82293B9C:
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x822d7b58
	ctx.lr = 0x82293BA4;
	sub_822D7B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_8229E150) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r9,r9,22772
	ctx.r9.s64 = ctx.r9.s64 + 22772;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stb r11,28(r3)
	REX_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// sth r11,30(r3)
	REX_STORE_U16(ctx.r3.u32 + 30, ctx.r11.u16);
	// sth r11,32(r3)
	REX_STORE_U16(ctx.r3.u32 + 32, ctx.r11.u16);
	// sth r11,34(r3)
	REX_STORE_U16(ctx.r3.u32 + 34, ctx.r11.u16);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// std r11,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r11.u64);
	// std r11,48(r3)
	REX_STORE_U64(ctx.r3.u32 + 48, ctx.r11.u64);
	// stw r10,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r8,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// stb r11,76(r3)
	REX_STORE_U8(ctx.r3.u32 + 76, ctx.r11.u8);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// ld r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// std r11,48(r3)
	REX_STORE_U64(ctx.r3.u32 + 48, ctx.r11.u64);
	// ld r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// std r11,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229ED18) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8229ED20;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12036(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12036);
	// addi r30,r3,12036
	r30.s64 = ctx.r3.s64 + 12036;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229ED44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// bne 0x8229ed78
	if (!ctx.cr0.eq) goto loc_8229ED78;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r29,12024
	ctx.r3.s64 = r29.s64 + 12024;
	// bl 0x822abf40
	ctx.lr = 0x8229ED60;
	sub_822ABF40(ctx, base);
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
	ctx.lr = 0x8229ED78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229ED78:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229ED8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822A03F0) {
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
	ctx.lr = 0x822A03F8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r4.u64;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// add r31,r11,r4
	r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822a0160
	ctx.lr = 0x822A0434;
	sub_822A0160(ctx, base);
	// addi r28,r31,4
	r28.s64 = r31.s64 + 4;
	// cmplw cr6,r25,r31
	ctx.cr6.compare<uint32_t>(r25.u32, r31.u32, ctx.xer);
	// bge cr6,0x822a04b8
	if (!ctx.cr6.lt) goto loc_822A04B8;
loc_822A0440:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r30,r31,-4
	r30.s64 = r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -4);
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// bctrl 
	ctx.lr = 0x822A0454;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822a04b8
	if (!ctx.cr0.eq) goto loc_822A04B8;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bctrl 
	ctx.lr = 0x822A046C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822a04b8
	if (!ctx.cr0.eq) goto loc_822A04B8;
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(r25.u32, r30.u32, ctx.xer);
	// blt cr6,0x822a0440
	if (ctx.cr6.lt) goto loc_822A0440;
	// b 0x822a04b8
	goto loc_822A04B8;
loc_822A0484:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bctrl 
	ctx.lr = 0x822A0494;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822a04c0
	if (!ctx.cr0.eq) goto loc_822A04C0;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bctrl 
	ctx.lr = 0x822A04AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822a04c0
	if (!ctx.cr0.eq) goto loc_822A04C0;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
loc_822A04B8:
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(r28.u32, r24.u32, ctx.xer);
	// blt cr6,0x822a0484
	if (ctx.cr6.lt) goto loc_822A0484;
loc_822A04C0:
	// mr r30,r28
	r30.u64 = r28.u64;
	// mr r27,r31
	r27.u64 = r31.u64;
	// b 0x822a0518
	goto loc_822A0518;
loc_822A04CC:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bctrl 
	ctx.lr = 0x822A04DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822a0514
	if (!ctx.cr0.eq) goto loc_822A0514;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bctrl 
	ctx.lr = 0x822A04F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822a0520
	if (!ctx.cr0.eq) goto loc_822A0520;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
loc_822A0510:
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
loc_822A0514:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_822A0518:
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(r30.u32, r24.u32, ctx.xer);
	// blt cr6,0x822a04cc
	if (ctx.cr6.lt) goto loc_822A04CC;
loc_822A0520:
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(r27.u32, r25.u32, ctx.xer);
	// ble cr6,0x822a057c
	if (!ctx.cr6.gt) goto loc_822A057C;
loc_822A0528:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r29,r27,-4
	r29.s64 = r27.s64 + -4;
	// lwz r3,-4(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + -4);
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// bctrl 
	ctx.lr = 0x822A053C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822a056c
	if (!ctx.cr0.eq) goto loc_822A056C;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bctrl 
	ctx.lr = 0x822A0554;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822a0578
	if (!ctx.cr0.eq) goto loc_822A0578;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwzu r11,-4(r31)
	ea = -4 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_822A056C:
	// mr r27,r29
	r27.u64 = r29.u64;
	// cmplw cr6,r25,r29
	ctx.cr6.compare<uint32_t>(r25.u32, r29.u32, ctx.xer);
	// blt cr6,0x822a0528
	if (ctx.cr6.lt) goto loc_822A0528;
loc_822A0578:
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(r27.u32, r25.u32, ctx.xer);
loc_822A057C:
	// bne cr6,0x822a05c0
	if (!ctx.cr6.eq) goto loc_822A05C0;
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(r30.u32, r24.u32, ctx.xer);
	// beq cr6,0x822a0614
	if (ctx.cr6.eq) goto loc_822A0614;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(r28.u32, r30.u32, ctx.xer);
	// beq cr6,0x822a05a0
	if (ctx.cr6.eq) goto loc_822A05A0;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
loc_822A05A0:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// b 0x822a0510
	goto loc_822A0510;
loc_822A05C0:
	// addi r11,r27,-4
	ctx.r11.s64 = r27.s64 + -4;
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(r30.u32, r24.u32, ctx.xer);
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// bne cr6,0x822a0600
	if (!ctx.cr6.eq) goto loc_822A0600;
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// beq cr6,0x822a05ec
	if (ctx.cr6.eq) goto loc_822A05EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_822A05EC:
	// lwzu r11,-4(r28)
	ea = -4 + r28.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r28.u32 = ea;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// b 0x822a0518
	goto loc_822A0518;
loc_822A0600:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822a0514
	goto loc_822A0514;
loc_822A0614:
	// stw r31,0(r23)
	REX_STORE_U32(r23.u32 + 0, r31.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r28,4(r23)
	REX_STORE_U32(r23.u32 + 4, r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_822AA060) {
	REX_FUNC_PROLOGUE();
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x822a13a0
	sub_822A13A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822AA1F8) {
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
	ctx.lr = 0x822AA210;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,452(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 452);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// addi r30,r3,1168
	r30.s64 = ctx.r3.s64 + 1168;
	// lfs f30,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f30.f64 = double(temp.f32);
	// lfs f31,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f31.f64 = double(temp.f32);
	// bne cr6,0x822aa2a8
	if (!ctx.cr6.eq) goto loc_822AA2A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,1172(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 1172, temp.u32);
	// stfs f31,1176(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 1176, temp.u32);
	// addi r5,r3,560
	ctx.r5.s64 = ctx.r3.s64 + 560;
	// stfs f31,1180(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 1180, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stfs f31,1184(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 1184, temp.u32);
	// stfs f31,1192(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 1192, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,1196(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1196, temp.u32);
	// stfs f31,1200(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1200, temp.u32);
	// stfs f31,1204(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1204, temp.u32);
	// stfs f31,1212(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1212, temp.u32);
	// stfs f31,1216(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1216, temp.u32);
	// stfs f31,1220(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1220, temp.u32);
	// stfs f31,1224(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1224, temp.u32);
	// stfs f30,1228(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 1228, temp.u32);
	// stfs f30,1168(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 1168, temp.u32);
	// stfs f0,1188(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 1188, temp.u32);
	// stfs f30,1208(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 1208, temp.u32);
	// bl 0x8229f270
	ctx.lr = 0x822AA290;
	sub_8229F270(ctx, base);
	// lfs f0,1104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 1104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1120(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1120);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f29,f0,f13
	f29.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,1112(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,1128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1128);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822aa2c8
	goto loc_822AA2C8;
loc_822AA2A8:
	// addi r4,r31,560
	ctx.r4.s64 = r31.s64 + 560;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f3f40
	ctx.lr = 0x822AA2B4;
	sub_821F3F40(ctx, base);
	// lfs f0,1120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 1120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1104);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f29,f0,f13
	f29.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,1128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1128);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,1112(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1112);
	ctx.f0.f64 = double(temp.f32);
loc_822AA2C8:
	// stfs f31,1216(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1216, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stfs f31,1220(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1220, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f31,1224(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1224, temp.u32);
	// fsubs f28,f12,f0
	f28.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f30,1228(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 1228, temp.u32);
	// bl 0x822a4998
	ctx.lr = 0x822AA2E8;
	sub_822A4998(ctx, base);
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f31.f64);
	// ble cr6,0x822aa310
	if (!ctx.cr6.gt) goto loc_822AA310;
	// fdivs f1,f28,f29
	ctx.f1.f64 = double(float(f28.f64 / f29.f64));
	// bl 0x822d47d0
	ctx.lr = 0x822AA2F8;
	sub_822D47D0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lfs f0,-5912(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -5912);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// b 0x822aa330
	goto loc_822AA330;
loc_822AA310:
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f31.f64);
	// bge cr6,0x822aa33c
	if (!ctx.cr6.lt) goto loc_822AA33C;
	// fdivs f1,f28,f29
	ctx.f1.f64 = double(float(f28.f64 / f29.f64));
	// bl 0x822d47d0
	ctx.lr = 0x822AA320;
	sub_822D47D0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lfs f0,-5912(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -5912);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_822AA330:
	// addi r3,r31,1232
	ctx.r3.s64 = r31.s64 + 1232;
	// bl 0x822a5038
	ctx.lr = 0x822AA338;
	sub_822A5038(ctx, base);
	// b 0x822aa37c
	goto loc_822AA37C;
loc_822AA33C:
	// stfs f30,1232(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 1232, temp.u32);
	// stfs f31,1236(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1236, temp.u32);
	// stfs f31,1240(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1240, temp.u32);
	// stfs f31,1244(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1244, temp.u32);
	// stfs f31,1248(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1248, temp.u32);
	// stfs f30,1252(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 1252, temp.u32);
	// stfs f31,1256(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1256, temp.u32);
	// stfs f31,1260(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1260, temp.u32);
	// stfs f31,1264(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1264, temp.u32);
	// stfs f31,1268(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1268, temp.u32);
	// stfs f30,1272(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 1272, temp.u32);
	// stfs f31,1276(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1276, temp.u32);
	// stfs f31,1280(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1280, temp.u32);
	// stfs f31,1284(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1284, temp.u32);
	// stfs f31,1288(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1288, temp.u32);
	// stfs f30,1292(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 1292, temp.u32);
loc_822AA37C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f84
	ctx.lr = 0x822AA388;
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

DEFINE_REX_FUNC(sub_822B39D0) {
	REX_FUNC_PROLOGUE();
	// lwz r10,112(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// stw r11,232(r3)
	REX_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm. r9,r11,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822b39f4
	if (ctx.cr0.eq) goto loc_822B39F4;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r9.u32);
loc_822B39F4:
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b3a08
	if (ctx.cr0.eq) goto loc_822B3A08;
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
loc_822B3A08:
	// lbz r11,260(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 260);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x822b3a20
	if (!ctx.cr6.gt) goto loc_822B3A20;
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
loc_822B3A20:
	// lbz r11,151(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 151);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822b3a40
	if (ctx.cr0.eq) goto loc_822B3A40;
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// li r10,512
	ctx.r10.s64 = 512;
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// stw r10,232(r3)
	REX_STORE_U32(ctx.r3.u32 + 232, ctx.r10.u32);
	// stw r11,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
loc_822B3A40:
	// lbz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 148);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822b3a64
	if (ctx.cr0.eq) goto loc_822B3A64;
	// lwz r10,228(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// lwz r9,232(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// oris r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 131072;
	// stw r10,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r10.u32);
	// stw r9,232(r3)
	REX_STORE_U32(ctx.r3.u32 + 232, ctx.r9.u32);
loc_822B3A64:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,158(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 158);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// lwz r10,232(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// stw r11,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// stw r10,232(r3)
	REX_STORE_U32(ctx.r3.u32 + 232, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B89A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822B89A8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b8a00
	if (ctx.cr0.eq) goto loc_822B8A00;
	// lwz r10,-4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// addi r29,r3,-4
	r29.s64 = ctx.r3.s64 + -4;
	// mulli r11,r10,84
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(84));
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// blt 0x822b89e8
	if (ctx.cr0.lt) goto loc_822B89E8;
loc_822B89D4:
	// addi r30,r30,-84
	r30.s64 = r30.s64 + -84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b9138
	ctx.lr = 0x822B89E0;
	sub_822B9138(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x822b89d4
	if (!ctx.cr0.lt) goto loc_822B89D4;
loc_822B89E8:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b89f8
	if (ctx.cr0.eq) goto loc_822B89F8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c80a8
	ctx.lr = 0x822B89F8;
	sub_822C80A8(ctx, base);
loc_822B89F8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x822b8a1c
	goto loc_822B8A1C;
loc_822B8A00:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b9138
	ctx.lr = 0x822B8A08;
	sub_822B9138(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b8a18
	if (ctx.cr0.eq) goto loc_822B8A18;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c80a8
	ctx.lr = 0x822B8A18;
	sub_822C80A8(ctx, base);
loc_822B8A18:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_822B8A1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822B9D20) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lhz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 80);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,376
	ctx.r8.s64 = ctx.r11.s64 + 376;
	// addi r7,r9,-17312
	ctx.r7.s64 = ctx.r9.s64 + -17312;
	// rotlwi r9,r11,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// lwz r10,31492(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 31492);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rldicr r7,r7,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r11.u8 & 0x7F));
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stfsx f0,r8,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// lfs f0,-12(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6020(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 6020, temp.u32);
	// lfs f0,-8(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6024(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 6024, temp.u32);
	// lfs f0,-4(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6028(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 6028, temp.u32);
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822BC970) {
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
	// bl 0x822d4e58
	ctx.lr = 0x822BC978;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x822d4f20
	ctx.lr = 0x822BC980;
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// mr r17,r4
	r17.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bc9bc
	if (ctx.cr6.eq) goto loc_822BC9BC;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x822bc9c0
	if (ctx.cr0.eq) goto loc_822BC9C0;
loc_822BC9BC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822BC9C0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bd2e8
	if (ctx.cr0.eq) goto loc_822BD2E8;
	// lwz r11,20(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bc9f0
	if (ctx.cr6.eq) goto loc_822BC9F0;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x822bc9f4
	if (ctx.cr0.eq) goto loc_822BC9F4;
loc_822BC9F0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822BC9F4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bd2e8
	if (ctx.cr0.eq) goto loc_822BD2E8;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x821f3f40
	ctx.lr = 0x822BCA08;
	sub_821F3F40(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x821f3f40
	ctx.lr = 0x822BCA14;
	sub_821F3F40(ctx, base);
	// lwz r31,28(r17)
	r31.u64 = REX_LOAD_U32(r17.u32 + 28);
	// lfs f30,320(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 320);
	f30.f64 = double(temp.f32);
	// lwz r19,24(r17)
	r19.u64 = REX_LOAD_U32(r17.u32 + 24);
	// lfs f29,324(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 324);
	f29.f64 = double(temp.f32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lfs f28,328(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 328);
	f28.f64 = double(temp.f32);
	// lfs f0,332(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 332);
	ctx.f0.f64 = double(temp.f32);
	// stfs f30,96(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f29,100(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f28,104(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// beq cr6,0x822bcd74
	if (ctx.cr6.eq) goto loc_822BCD74;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x821f3f40
	ctx.lr = 0x822BCA50;
	sub_821F3F40(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
	// stfs f0,400(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// stfs f0,404(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// stfs f0,408(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// stfs f31,412(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 412, temp.u32);
	// stfs f0,0(r18)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r18.u32 + 0, temp.u32);
	// stfs f0,4(r18)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r18.u32 + 4, temp.u32);
	// stfs f0,8(r18)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r18.u32 + 8, temp.u32);
	// stfs f31,12(r18)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r18.u32 + 12, temp.u32);
	// bl 0x821f3f40
	ctx.lr = 0x822BCA8C;
	sub_821F3F40(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x822ca328
	ctx.lr = 0x822BCA98;
	sub_822CA328(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r1,76
	ctx.r9.s64 = ctx.r1.s64 + 76;
	// lfs f0,256(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,260(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 - ctx.f0.f64));
	// lfs f12,264(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f29,f13
	ctx.f13.f64 = double(float(f29.f64 - ctx.f13.f64));
	// addi r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 + 44;
	// fsubs f12,f28,f12
	ctx.f12.f64 = double(float(f28.f64 - ctx.f12.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822BCAC0:
	// lfs f11,-12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,-44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -44);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -28);
	ctx.f8.f64 = double(temp.f32);
	// lfsu f11,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfs f7,204(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f10,f9,f0,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f10.f64)));
	// fmadds f10,f13,f8,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f8.f64, ctx.f10.f64)));
	// fmadds f11,f7,f11,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f7.f64, ctx.f11.f64, ctx.f10.f64)));
	// stfsu f11,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822bcac0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822BCAC0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lfs f23,128(r16)
	temp.u32 = REX_LOAD_U32(r16.u32 + 128);
	f23.f64 = double(temp.f32);
	// lwz r30,52(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lfs f30,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f30.f64 = double(temp.f32);
	// li r28,0
	r28.s64 = 0;
	// lfs f29,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f29.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f28,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	f28.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f27,f23,f23
	f27.f64 = double(float(f23.f64 * f23.f64));
	// lfs f22,1452(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1452);
	f22.f64 = double(temp.f32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stfs f30,96(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f29,100(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f28,104(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// beq cr6,0x822bcb40
	if (ctx.cr6.eq) goto loc_822BCB40;
	// lwz r8,56(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 56);
	// b 0x822bcb44
	goto loc_822BCB44;
loc_822BCB40:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
loc_822BCB44:
	// lwz r29,48(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 48);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822bcd14
	if (ctx.cr6.eq) goto loc_822BCD14;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
loc_822BCB5C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822bcb84
	if (ctx.cr6.eq) goto loc_822BCB84;
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lfs f13,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// b 0x822bcba0
	goto loc_822BCBA0;
loc_822BCB84:
	// lfs f0,-8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lfs f13,-4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
loc_822BCBA0:
	// lfs f26,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f26.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f25,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	f25.f64 = double(temp.f32);
	// lfs f24,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	f24.f64 = double(temp.f32);
	// beq cr6,0x822bcbbc
	if (ctx.cr6.eq) goto loc_822BCBBC;
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822bcbc0
	goto loc_822BCBC0;
loc_822BCBBC:
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
loc_822BCBC0:
	// fmuls f13,f24,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f24.f64 * f28.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fmadds f13,f26,f30,f13
	ctx.f13.f64 = double(float(std::fma(f26.f64, f30.f64, ctx.f13.f64)));
	// fmadds f13,f25,f29,f13
	ctx.f13.f64 = double(float(std::fma(f25.f64, f29.f64, ctx.f13.f64)));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, f23.f64);
	// ble cr6,0x822bcbe4
	if (!ctx.cr6.gt) goto loc_822BCBE4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BCBE4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bcd00
	if (ctx.cr0.eq) goto loc_822BCD00;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822bcbfc
	if (ctx.cr6.eq) goto loc_822BCBFC;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x822bcc00
	goto loc_822BCC00;
loc_822BCBFC:
	// lhz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 8);
loc_822BCC00:
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// beq cr6,0x822bcc24
	if (ctx.cr6.eq) goto loc_822BCC24;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x822bcc28
	goto loc_822BCC28;
loc_822BCC24:
	// lhz r11,10(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 10);
loc_822BCC28:
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// beq cr6,0x822bcc4c
	if (ctx.cr6.eq) goto loc_822BCC4C;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// b 0x822bcc50
	goto loc_822BCC50;
loc_822BCC4C:
	// lhz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 12);
loc_822BCC50:
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
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
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f11,160(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f10,164(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f9,168(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x822bbbb8
	ctx.lr = 0x822BCCAC;
	sub_822BBBB8(ctx, base);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - f29.f64));
	// lfs f13,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 - f28.f64));
	// lfs f12,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 - f30.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fcmpu cr6,f27,f0
	ctx.cr6.compare(f27.f64, ctx.f0.f64);
	// ble cr6,0x822bcd00
	if (!ctx.cr6.gt) goto loc_822BCD00;
	// fcmpu cr6,f22,f0
	ctx.cr6.compare(f22.f64, ctx.f0.f64);
	// ble cr6,0x822bcd00
	if (!ctx.cr6.gt) goto loc_822BCD00;
	// stfs f26,128(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmr f22,f0
	f22.f64 = ctx.f0.f64;
	// stfs f25,132(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// li r28,1
	r28.s64 = 1;
	// stfs f24,136(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_822BCD00:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// blt cr6,0x822bcb5c
	if (ctx.cr6.lt) goto loc_822BCB5C;
loc_822BCD14:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bcd6c
	if (ctx.cr0.eq) goto loc_822BCD6C;
	// fsqrts f0,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(f22.f64)));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,24124(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24124);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822bcd34
	if (!ctx.cr6.lt) goto loc_822BCD34;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_822BCD34:
	// fsubs f0,f0,f23
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - f23.f64));
	// lfs f13,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,204(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r18)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r18.u32 + 12, temp.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r18)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r18.u32 + 0, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,4(r18)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r18.u32 + 4, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,8(r18)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r18.u32 + 8, temp.u32);
	// stw r17,188(r16)
	REX_STORE_U32(r16.u32 + 188, r17.u32);
	// stw r16,188(r17)
	REX_STORE_U32(r17.u32 + 188, r16.u32);
loc_822BCD6C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x822bd2ec
	goto loc_822BD2EC;
loc_822BCD74:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x822bd2e8
	if (ctx.cr6.eq) goto loc_822BD2E8;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x821f3f40
	ctx.lr = 0x822BCD88;
	sub_821F3F40(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f25,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f25.f64 = double(temp.f32);
	// stfs f0,320(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stfs f0,324(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stfs f0,328(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stfs f25,332(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// stfs f0,0(r18)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r18.u32 + 0, temp.u32);
	// stfs f0,4(r18)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r18.u32 + 4, temp.u32);
	// stfs f0,8(r18)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r18.u32 + 8, temp.u32);
	// stfs f25,12(r18)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r18.u32 + 12, temp.u32);
	// bl 0x821f3f40
	ctx.lr = 0x822BCDC4;
	sub_821F3F40(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822ca328
	ctx.lr = 0x822BCDD0;
	sub_822CA328(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r1,76
	ctx.r9.s64 = ctx.r1.s64 + 76;
	// lfs f0,256(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,260(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 - ctx.f0.f64));
	// lfs f12,264(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f29,f13
	ctx.f13.f64 = double(float(f29.f64 - ctx.f13.f64));
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// fsubs f12,f28,f12
	ctx.f12.f64 = double(float(f28.f64 - ctx.f12.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822BCDF8:
	// lfs f11,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f9,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,204(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f7.f64 = double(temp.f32);
	// lfsu f11,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f10,f12,f9,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f9.f64, ctx.f10.f64)));
	// fmadds f10,f7,f8,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f7.f64, ctx.f8.f64, ctx.f10.f64)));
	// fmadds f11,f0,f11,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f10.f64)));
	// stfsu f11,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822bcdf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822BCDF8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,0(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lfs f0,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f28,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f28.f64 = double(temp.f32);
	// lfs f27,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f27.f64 = double(temp.f32);
	// lfs f26,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	f26.f64 = double(temp.f32);
	// lfs f31,1452(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	f31.f64 = double(temp.f32);
	// lwz r11,44(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// stfs f28,96(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f30,f31
	f30.f64 = f31.f64;
	// stfs f27,100(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f29,f31
	f29.f64 = f31.f64;
	// stfs f26,104(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BCE68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bce88
	if (ctx.cr0.eq) goto loc_822BCE88;
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BCE84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822bce94
	goto loc_822BCE94;
loc_822BCE88:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x822b3b28
	ctx.lr = 0x822BCE94;
	sub_822B3B28(ctx, base);
loc_822BCE94:
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BCEAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bcecc
	if (ctx.cr0.eq) goto loc_822BCECC;
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BCEC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822bced8
	goto loc_822BCED8;
loc_822BCECC:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x822b3b38
	ctx.lr = 0x822BCED8;
	sub_822B3B38(ctx, base);
loc_822BCED8:
	// lwz r9,112(r19)
	ctx.r9.u64 = REX_LOAD_U32(r19.u32 + 112);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lwz r11,120(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 120);
	// addi r21,r19,120
	r21.s64 = r19.s64 + 120;
	// lwz r10,124(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 124);
	// li r20,0
	r20.s64 = 0;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r30,88(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r29,40(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bd238
	if (ctx.cr0.eq) goto loc_822BD238;
loc_822BCF04:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x822b41b0
	ctx.lr = 0x822BCF10;
	sub_822B41B0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822bd070
	if (!ctx.cr6.eq) goto loc_822BD070;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// add r26,r10,r11
	r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bge cr6,0x822bd21c
	if (!ctx.cr6.lt) goto loc_822BD21C;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r11,r22
	r31.u64 = ctx.r11.u64 + r22.u64;
loc_822BCF40:
	// lhz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + -4);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lhz r10,-2(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + -2);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// lhz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r9,r9,r29
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r29.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + r30.u64;
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + r30.u64;
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f11,188(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f8,136(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f7,140(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x822a5ac8
	ctx.lr = 0x822BCFE8;
	sub_822A5AC8(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822a5ac8
	ctx.lr = 0x822BCFF4;
	sub_822A5AC8(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822a5ac8
	ctx.lr = 0x822BD000;
	sub_822A5AC8(ctx, base);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822bbbb8
	ctx.lr = 0x822BD018;
	sub_822BBBB8(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 - f27.f64));
	// lfs f13,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f30,f30
	ctx.f11.f64 = double(float(f30.f64 * f30.f64));
	// lfs f12,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 - f26.f64));
	// fsubs f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 - f28.f64));
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f11,f29,f29,f11
	ctx.f11.f64 = double(float(std::fma(f29.f64, f29.f64, ctx.f11.f64)));
	// fmadds f10,f13,f13,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f11,f31,f31,f11
	ctx.f11.f64 = double(float(std::fma(f31.f64, f31.f64, ctx.f11.f64)));
	// fmadds f10,f12,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f10.f64)));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x822bd05c
	if (!ctx.cr6.gt) goto loc_822BD05C;
	// fmr f31,f12
	f31.f64 = ctx.f12.f64;
	// fmr f30,f0
	f30.f64 = ctx.f0.f64;
	// fmr f29,f13
	f29.f64 = ctx.f13.f64;
loc_822BD05C:
	// addi r27,r27,3
	r27.s64 = r27.s64 + 3;
	// addi r31,r31,6
	r31.s64 = r31.s64 + 6;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(r27.u32, r26.u32, ctx.xer);
	// blt cr6,0x822bcf40
	if (ctx.cr6.lt) goto loc_822BCF40;
	// b 0x822bd21c
	goto loc_822BD21C;
loc_822BD070:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822bd21c
	if (!ctx.cr6.eq) goto loc_822BD21C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r24,0
	r24.s64 = 0;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r31,r11,2
	r31.s64 = ctx.r11.s64 + 2;
	// add r23,r10,r11
	r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(r31.u32, r23.u32, ctx.xer);
	// bge cr6,0x822bd21c
	if (!ctx.cr6.lt) goto loc_822BD21C;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r26,r31,-1
	r26.s64 = r31.s64 + -1;
	// addi r27,r31,-2
	r27.s64 = r31.s64 + -2;
	// add r25,r11,r22
	r25.u64 = ctx.r11.u64 + r22.u64;
loc_822BD0A4:
	// lhz r8,0(r25)
	ctx.r8.u64 = REX_LOAD_U16(r25.u32 + 0);
	// cmplwi cr6,r8,32767
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 32767, ctx.xer);
	// bne cr6,0x822bd0c8
	if (!ctx.cr6.eq) goto loc_822BD0C8;
	// li r24,0
	r24.s64 = 0;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
	// addi r26,r26,2
	r26.s64 = r26.s64 + 2;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// b 0x822bd204
	goto loc_822BD204;
loc_822BD0C8:
	// clrlwi. r11,r24,31
	ctx.r11.u64 = r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// bne 0x822bd0e0
	if (!ctx.cr0.eq) goto loc_822BD0E0;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_822BD0E0:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// lhzx r11,r11,r22
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + r22.u32);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + r28.u64;
	// bne cr6,0x822bd100
	if (!ctx.cr6.eq) goto loc_822BD100;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_822BD100:
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + r30.u64;
	// lfsx f0,r10,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r10,r8,r29
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(r29.s32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lhzx r9,r9,r22
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + r22.u32);
	// lfs f12,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mullw r11,r9,r29
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r29.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f11,172(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f9,148(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f8,152(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f7,156(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x822a5ac8
	ctx.lr = 0x822BD190;
	sub_822A5AC8(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822a5ac8
	ctx.lr = 0x822BD19C;
	sub_822A5AC8(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822a5ac8
	ctx.lr = 0x822BD1A8;
	sub_822A5AC8(ctx, base);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x822bbbb8
	ctx.lr = 0x822BD1C0;
	sub_822BBBB8(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 - f27.f64));
	// lfs f13,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f30,f30
	ctx.f11.f64 = double(float(f30.f64 * f30.f64));
	// lfs f12,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 - f26.f64));
	// fsubs f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 - f28.f64));
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f11,f29,f29,f11
	ctx.f11.f64 = double(float(std::fma(f29.f64, f29.f64, ctx.f11.f64)));
	// fmadds f10,f13,f13,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f11,f31,f31,f11
	ctx.f11.f64 = double(float(std::fma(f31.f64, f31.f64, ctx.f11.f64)));
	// fmadds f10,f12,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f10.f64)));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x822bd204
	if (!ctx.cr6.gt) goto loc_822BD204;
	// fmr f31,f12
	f31.f64 = ctx.f12.f64;
	// fmr f30,f0
	f30.f64 = ctx.f0.f64;
	// fmr f29,f13
	f29.f64 = ctx.f13.f64;
loc_822BD204:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r25,r25,2
	r25.s64 = r25.s64 + 2;
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(r31.u32, r23.u32, ctx.xer);
	// blt cr6,0x822bd0a4
	if (ctx.cr6.lt) goto loc_822BD0A4;
loc_822BD21C:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822bcf04
	if (ctx.cr6.lt) goto loc_822BCF04;
loc_822BD238:
	// fmuls f0,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 * f30.f64));
	// lfs f13,128(r16)
	temp.u32 = REX_LOAD_U32(r16.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f29,f29,f0
	ctx.f0.f64 = double(float(std::fma(f29.f64, f29.f64, ctx.f0.f64)));
	// fmadds f0,f31,f31,f0
	ctx.f0.f64 = double(float(std::fma(f31.f64, f31.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x822bd2e8
	if (!ctx.cr6.lt) goto loc_822BD2E8;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f12,24124(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24124);
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x822bd270
	if (!ctx.cr6.lt) goto loc_822BD270;
	// fmr f0,f25
	ctx.f0.f64 = f25.f64;
loc_822BD270:
	// fsubs f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// fneg f11,f31
	ctx.f11.u64 = f31.u64 ^ 0x8000000000000000;
	// fneg f10,f30
	ctx.f10.u64 = f30.u64 ^ 0x8000000000000000;
	// fneg f9,f29
	ctx.f9.u64 = f29.u64 ^ 0x8000000000000000;
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// ble cr6,0x822bd2e8
	if (!ctx.cr6.gt) goto loc_822BD2E8;
	// lfs f11,348(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 348);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stfs f0,0(r18)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r18.u32 + 0, temp.u32);
	// stfs f13,4(r18)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r18.u32 + 4, temp.u32);
	// stfs f12,8(r18)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r18.u32 + 8, temp.u32);
	// stfs f11,12(r18)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r18.u32 + 12, temp.u32);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BD2C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822bd2e0
	if (!ctx.cr0.eq) goto loc_822BD2E0;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x822b3b30
	ctx.lr = 0x822BD2D0;
	sub_822B3B30(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x822b3b40
	ctx.lr = 0x822BD2D8;
	sub_822B3B40(ctx, base);
	// stw r17,188(r16)
	REX_STORE_U32(r16.u32 + 188, r17.u32);
	// stw r16,188(r17)
	REX_STORE_U32(r17.u32 + 188, r16.u32);
loc_822BD2E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822bd2ec
	goto loc_822BD2EC;
loc_822BD2E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822BD2EC:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x822d4f6c
	ctx.lr = 0x822BD2F8;
	// b 0x822d4ea8
	return;
}

DEFINE_REX_FUNC(__restvmx_118) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_822D92E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822D92F0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d931c
	if (ctx.cr6.eq) goto loc_822D931C;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d931c
	if (ctx.cr6.eq) goto loc_822D931C;
	// lwz r29,4(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x822d9320
	goto loc_822D9320;
loc_822D931C:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_822D9320:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x822df828
	ctx.lr = 0x822D932C;
	sub_822DF828(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d936c
	if (ctx.cr6.eq) goto loc_822D936C;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mulli r9,r10,20
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(20));
loc_822D9340:
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x822d9360
	if (!ctx.cr6.gt) goto loc_822D9360;
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x822d9370
	if (!ctx.cr6.gt) goto loc_822D9370;
loc_822D9360:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,-20
	ctx.r9.s64 = ctx.r9.s64 + -20;
	// bne 0x822d9340
	if (!ctx.cr0.eq) goto loc_822D9340;
loc_822D936C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822D9370:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d9380
	if (!ctx.cr6.eq) goto loc_822D9380;
	// li r6,-1
	ctx.r6.s64 = -1;
	// b 0x822d9388
	goto loc_822D9388;
loc_822D9380:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
loc_822D9388:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822dfa80
	ctx.lr = 0x822D9398;
	sub_822DFA80(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822DBEC0) {
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
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,32268(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32268);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822dbef0
	if (ctx.cr0.eq) goto loc_822DBEF0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DBEE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x822dbef4
	if (!ctx.cr0.eq) goto loc_822DBEF4;
loc_822DBEF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822DBEF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DD3D8) {
	REX_FUNC_PROLOGUE();
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x822dd0f8
	sub_822DD0F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822DE8B0) {
	REX_FUNC_PROLOGUE();
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// blt cr6,0x822dea68
	if (ctx.cr6.lt) goto loc_822DEA68;
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// bge cr6,0x822de8cc
	if (!ctx.cr6.lt) goto loc_822DE8CC;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// blr 
	return;
loc_822DE8CC:
	// cmplwi cr6,r11,65296
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65296, ctx.xer);
	// bge cr6,0x822dea54
	if (!ctx.cr6.lt) goto loc_822DEA54;
	// cmplwi cr6,r11,1632
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1632, ctx.xer);
	// blt cr6,0x822dea68
	if (ctx.cr6.lt) goto loc_822DEA68;
	// cmplwi cr6,r11,1642
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1642, ctx.xer);
	// bge cr6,0x822de8ec
	if (!ctx.cr6.lt) goto loc_822DE8EC;
	// addi r3,r11,-1632
	ctx.r3.s64 = ctx.r11.s64 + -1632;
	// blr 
	return;
loc_822DE8EC:
	// cmplwi cr6,r11,1776
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1776, ctx.xer);
	// blt cr6,0x822dea68
	if (ctx.cr6.lt) goto loc_822DEA68;
	// cmplwi cr6,r11,1786
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1786, ctx.xer);
	// bge cr6,0x822de904
	if (!ctx.cr6.lt) goto loc_822DE904;
	// addi r3,r11,-1776
	ctx.r3.s64 = ctx.r11.s64 + -1776;
	// blr 
	return;
loc_822DE904:
	// cmplwi cr6,r11,2406
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2406, ctx.xer);
	// blt cr6,0x822dea68
	if (ctx.cr6.lt) goto loc_822DEA68;
	// cmplwi cr6,r11,2416
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2416, ctx.xer);
	// bge cr6,0x822de91c
	if (!ctx.cr6.lt) goto loc_822DE91C;
	// addi r3,r11,-2406
	ctx.r3.s64 = ctx.r11.s64 + -2406;
	// blr 
	return;
loc_822DE91C:
	// cmplwi cr6,r11,2534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2534, ctx.xer);
	// blt cr6,0x822dea68
	if (ctx.cr6.lt) goto loc_822DEA68;
	// cmplwi cr6,r11,2544
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2544, ctx.xer);
	// bge cr6,0x822de934
	if (!ctx.cr6.lt) goto loc_822DE934;
	// addi r3,r11,-2534
	ctx.r3.s64 = ctx.r11.s64 + -2534;
	// blr 
	return;
loc_822DE934:
	// cmplwi cr6,r11,2662
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2662, ctx.xer);
	// blt cr6,0x822dea68
	if (ctx.cr6.lt) goto loc_822DEA68;
	// cmplwi cr6,r11,2672
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2672, ctx.xer);
	// bge cr6,0x822de94c
	if (!ctx.cr6.lt) goto loc_822DE94C;
	// addi r3,r11,-2662
	ctx.r3.s64 = ctx.r11.s64 + -2662;
	// blr 
	return;
loc_822DE94C:
	// cmplwi cr6,r11,2790
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2790, ctx.xer);
	// blt cr6,0x822dea68
	if (ctx.cr6.lt) goto loc_822DEA68;
	// cmplwi cr6,r11,2800
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2800, ctx.xer);
	// bge cr6,0x822de964
	if (!ctx.cr6.lt) goto loc_822DE964;
	// addi r3,r11,-2790
	ctx.r3.s64 = ctx.r11.s64 + -2790;
	// blr 
	return;
loc_822DE964:
	// cmplwi cr6,r11,2918
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2918, ctx.xer);
	// blt cr6,0x822dea68
	if (ctx.cr6.lt) goto loc_822DEA68;
	// cmplwi cr6,r11,2928
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2928, ctx.xer);
	// bge cr6,0x822de97c
	if (!ctx.cr6.lt) goto loc_822DE97C;
	// addi r3,r11,-2918
	ctx.r3.s64 = ctx.r11.s64 + -2918;
	// blr 
	return;
loc_822DE97C:
	// cmplwi cr6,r11,3174
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3174, ctx.xer);
	// blt cr6,0x822dea68
	if (ctx.cr6.lt) goto loc_822DEA68;
	// cmplwi cr6,r11,3184
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3184, ctx.xer);
	// bge cr6,0x822de994
	if (!ctx.cr6.lt) goto loc_822DE994;
	// addi r3,r11,-3174
	ctx.r3.s64 = ctx.r11.s64 + -3174;
	// blr 
	return;
loc_822DE994:
	// cmplwi cr6,r11,3302
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3302, ctx.xer);
	// blt cr6,0x822dea68
	if (ctx.cr6.lt) goto loc_822DEA68;
	// cmplwi cr6,r11,3312
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3312, ctx.xer);
	// bge cr6,0x822de9ac
	if (!ctx.cr6.lt) goto loc_822DE9AC;
	// addi r3,r11,-3302
	ctx.r3.s64 = ctx.r11.s64 + -3302;
	// blr 
	return;
loc_822DE9AC:
	// cmplwi cr6,r11,3430
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3430, ctx.xer);
	// blt cr6,0x822dea68
	if (ctx.cr6.lt) goto loc_822DEA68;
	// cmplwi cr6,r11,3440
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3440, ctx.xer);
	// bge cr6,0x822de9c4
	if (!ctx.cr6.lt) goto loc_822DE9C4;
	// addi r3,r11,-3430
	ctx.r3.s64 = ctx.r11.s64 + -3430;
	// blr 
	return;
loc_822DE9C4:
	// cmplwi cr6,r11,3664
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3664, ctx.xer);
	// blt cr6,0x822dea68
	if (ctx.cr6.lt) goto loc_822DEA68;
	// cmplwi cr6,r11,3674
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3674, ctx.xer);
	// bge cr6,0x822de9dc
	if (!ctx.cr6.lt) goto loc_822DE9DC;
	// addi r3,r11,-3664
	ctx.r3.s64 = ctx.r11.s64 + -3664;
	// blr 
	return;
loc_822DE9DC:
	// cmplwi cr6,r11,3792
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3792, ctx.xer);
	// blt cr6,0x822dea68
	if (ctx.cr6.lt) goto loc_822DEA68;
	// cmplwi cr6,r11,3802
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3802, ctx.xer);
	// bge cr6,0x822de9f4
	if (!ctx.cr6.lt) goto loc_822DE9F4;
	// addi r3,r11,-3792
	ctx.r3.s64 = ctx.r11.s64 + -3792;
	// blr 
	return;
loc_822DE9F4:
	// cmplwi cr6,r11,3872
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3872, ctx.xer);
	// blt cr6,0x822dea68
	if (ctx.cr6.lt) goto loc_822DEA68;
	// cmplwi cr6,r11,3882
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3882, ctx.xer);
	// bge cr6,0x822dea0c
	if (!ctx.cr6.lt) goto loc_822DEA0C;
	// addi r3,r11,-3872
	ctx.r3.s64 = ctx.r11.s64 + -3872;
	// blr 
	return;
loc_822DEA0C:
	// cmplwi cr6,r11,4160
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4160, ctx.xer);
	// blt cr6,0x822dea68
	if (ctx.cr6.lt) goto loc_822DEA68;
	// cmplwi cr6,r11,4170
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4170, ctx.xer);
	// bge cr6,0x822dea24
	if (!ctx.cr6.lt) goto loc_822DEA24;
	// addi r3,r11,-4160
	ctx.r3.s64 = ctx.r11.s64 + -4160;
	// blr 
	return;
loc_822DEA24:
	// cmplwi cr6,r11,6112
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6112, ctx.xer);
	// blt cr6,0x822dea68
	if (ctx.cr6.lt) goto loc_822DEA68;
	// cmplwi cr6,r11,6122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6122, ctx.xer);
	// bge cr6,0x822dea3c
	if (!ctx.cr6.lt) goto loc_822DEA3C;
	// addi r3,r11,-6112
	ctx.r3.s64 = ctx.r11.s64 + -6112;
	// blr 
	return;
loc_822DEA3C:
	// cmplwi cr6,r11,6160
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6160, ctx.xer);
	// blt cr6,0x822dea68
	if (ctx.cr6.lt) goto loc_822DEA68;
	// cmplwi cr6,r11,6170
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6170, ctx.xer);
	// bge cr6,0x822dea68
	if (!ctx.cr6.lt) goto loc_822DEA68;
	// addi r3,r11,-6160
	ctx.r3.s64 = ctx.r11.s64 + -6160;
	// blr 
	return;
loc_822DEA54:
	// cmplwi cr6,r11,65306
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65306, ctx.xer);
	// bge cr6,0x822dea68
	if (!ctx.cr6.lt) goto loc_822DEA68;
	// addis r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -65536;
	// addi r3,r3,240
	ctx.r3.s64 = ctx.r3.s64 + 240;
	// blr 
	return;
loc_822DEA68:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E9CA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r3,368
	ctx.r11.s64 = ctx.r3.s64 + 368;
loc_822E9CA4:
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
	// bne 0x822e9ca4
	if (!ctx.cr0.eq) goto loc_822E9CA4;
	// lwz r11,272(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,284(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822EB2B8) {
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
	// addi r10,r11,-28328
	ctx.r10.s64 = ctx.r11.s64 + -28328;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x822ea728
	ctx.lr = 0x822EB2E4;
	sub_822EA728(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = r31.s64 + 212;
	// bl 0x822f20d8
	ctx.lr = 0x822EB2EC;
	sub_822F20D8(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x822e8ce0
	ctx.lr = 0x822EB2F4;
	sub_822E8CE0(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x822eeef8
	ctx.lr = 0x822EB2FC;
	sub_822EEEF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822eece8
	ctx.lr = 0x822EB304;
	sub_822EECE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822eb324
	if (ctx.cr6.eq) goto loc_822EB324;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32797
	ctx.r4.u64 = ctx.r4.u64 | 32797;
	// bl 0x823cd250
	ctx.lr = 0x822EB320;
	sub_823CD250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822EB324:
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

DEFINE_REX_FUNC(sub_822ECFC8) {
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
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822ECFF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,316(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 316);
	// lis r9,-13108
	ctx.r9.s64 = -859045888;
	// lwz r10,332(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 332);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 + r30.u64;
	// stw r8,316(r31)
	REX_STORE_U32(r31.u32 + 316, ctx.r8.u32);
	// ori r6,r9,52429
	ctx.r6.u64 = ctx.r9.u64 | 52429;
	// std r7,304(r31)
	REX_STORE_U64(r31.u32 + 304, ctx.r7.u64);
	// lwz r5,316(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 316);
	// mulhwu r4,r5,r6
	ctx.r4.u64 = (uint64_t(ctx.r5.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// rlwinm r11,r4,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf. r11,r3,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ed044
	if (!ctx.cr0.eq) goto loc_822ED044;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822ED044;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822ED044:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822ED058;
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

DEFINE_REX_FUNC(sub_822F0260) {
	REX_FUNC_PROLOGUE();
	// lwz r11,552(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 552);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x822f0378
	if (ctx.cr6.gt) goto loc_822F0378;
	// lis r12,-32209
	ctx.r12.s64 = -2110849024;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,652
	ctx.r12.s64 = ctx.r12.s64 + 652;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822F0304;
	case 1:
		goto loc_822F0314;
	case 2:
		goto loc_822F0324;
	case 3:
		goto loc_822F0330;
	case 4:
		goto loc_822F033C;
	case 5:
		goto loc_822F0348;
	case 6:
		goto loc_822F0360;
	case 7:
		goto loc_822F036C;
	case 8:
		goto loc_822F02BC;
	case 9:
		goto loc_822F02CC;
	case 10:
		goto loc_822F0354;
	case 11:
		goto loc_822F02DC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_822F02BC:
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// li r10,12
	ctx.r10.s64 = 12;
	// ori r11,r11,22857
	ctx.r11.u64 = ctx.r11.u64 | 22857;
	// b 0x822f02e8
	goto loc_822F02E8;
loc_822F02CC:
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// li r10,12
	ctx.r10.s64 = 12;
	// ori r11,r11,13385
	ctx.r11.u64 = ctx.r11.u64 | 13385;
	// b 0x822f02e8
	goto loc_822F02E8;
loc_822F02DC:
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// li r10,12
	ctx.r10.s64 = 12;
loc_822F02E4:
	// ori r11,r11,22105
	ctx.r11.u64 = ctx.r11.u64 | 22105;
loc_822F02E8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822f02f4
	if (ctx.cr6.eq) goto loc_822F02F4;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_822F02F4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822f0300
	if (ctx.cr6.eq) goto loc_822F0300;
	// sth r10,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r10.u16);
loc_822F0300:
	// blr 
	return;
loc_822F0304:
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r11,r11,21849
	ctx.r11.u64 = ctx.r11.u64 | 21849;
	// b 0x822f02e8
	goto loc_822F02E8;
loc_822F0314:
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r11,r11,22869
	ctx.r11.u64 = ctx.r11.u64 | 22869;
	// b 0x822f02e8
	goto loc_822F02E8;
loc_822F0324:
	// lis r11,21849
	ctx.r11.s64 = 1431896064;
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x822f02e4
	goto loc_822F02E4;
loc_822F0330:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,24
	ctx.r10.s64 = 24;
	// b 0x822f02e8
	goto loc_822F02E8;
loc_822F033C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x822f02e8
	goto loc_822F02E8;
loc_822F0348:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x822f02e8
	goto loc_822F02E8;
loc_822F0354:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,12
	ctx.r10.s64 = 12;
	// b 0x822f02e8
	goto loc_822F02E8;
loc_822F0360:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x822f02e8
	goto loc_822F02E8;
loc_822F036C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x822f02e8
	goto loc_822F02E8;
loc_822F0378:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F46E0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// subf r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F4AE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822F4AE8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f4b4c
	if (ctx.cr6.eq) goto loc_822F4B4C;
	// lwz r10,-4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// addi r29,r3,-4
	r29.s64 = ctx.r3.s64 + -4;
	// mulli r11,r10,60
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(60));
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// blt 0x822f4b2c
	if (ctx.cr0.lt) goto loc_822F4B2C;
loc_822F4B18:
	// addi r30,r30,-60
	r30.s64 = r30.s64 + -60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822ed7d8
	ctx.lr = 0x822F4B24;
	sub_822ED7D8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x822f4b18
	if (!ctx.cr0.lt) goto loc_822F4B18;
loc_822F4B2C:
	// clrlwi r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f4b40
	if (ctx.cr6.eq) goto loc_822F4B40;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822ed508
	ctx.lr = 0x822F4B40;
	sub_822ED508(ctx, base);
loc_822F4B40:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_822F4B4C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822ed7d8
	ctx.lr = 0x822F4B54;
	sub_822ED7D8(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f4b68
	if (ctx.cr6.eq) goto loc_822F4B68;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822ed508
	ctx.lr = 0x822F4B68;
	sub_822ED508(ctx, base);
loc_822F4B68:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822F8B70) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-25952
	ctx.r10.s64 = ctx.r11.s64 + -25952;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x822f6df8
	ctx.lr = 0x822F8B94;
	sub_822F6DF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822eece8
	ctx.lr = 0x822F8B9C;
	sub_822EECE8(ctx, base);
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

DEFINE_REX_FUNC(sub_822F90C8) {
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
	ctx.lr = 0x822F90D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x822f919c
	if (ctx.cr6.lt) goto loc_822F919C;
	// cmpwi cr6,r30,127
	ctx.cr6.compare<int32_t>(r30.s32, 127, ctx.xer);
	// bge cr6,0x822f919c
	if (!ctx.cr6.lt) goto loc_822F919C;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822f9128
	if (!ctx.cr6.eq) goto loc_822F9128;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,182
	ctx.r3.u64 = ctx.r3.u64 | 182;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_822F9128:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F9140;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x822f9190
	if (ctx.cr6.eq) goto loc_822F9190;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822f9170
	if (ctx.cr6.eq) goto loc_822F9170;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822f9190
	if (!ctx.cr6.eq) goto loc_822F9190;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,189
	ctx.r3.u64 = ctx.r3.u64 | 189;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_822F9170:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x822f9260
	ctx.lr = 0x822F9190;
	sub_822F9260(ctx, base);
loc_822F9190:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_822F919C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822FD658) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e58
	ctx.lr = 0x822FD660;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r10,r5,32
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// lwz r9,232(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// li r16,0
	r16.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrldi r10,r4,32
	ctx.r10.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// stw r16,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r16.u32);
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r30,r16
	r30.u64 = r16.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r21,r11,-24
	r21.s64 = ctx.r11.s64 + -24;
	// bne cr6,0x822fdb6c
	if (!ctx.cr6.eq) goto loc_822FDB6C;
	// addi r31,r4,2
	r31.s64 = ctx.r4.s64 + 2;
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// cmpld cr6,r31,r21
	ctx.cr6.compare<uint64_t>(r31.u64, r21.u64, ctx.xer);
	// ori r17,r11,32768
	r17.u64 = ctx.r11.u64 | 32768;
	// ble cr6,0x822fd6b8
	if (!ctx.cr6.gt) goto loc_822FD6B8;
loc_822FD6B0:
	// li r24,6
	r24.s64 = 6;
	// b 0x822fdad8
	goto loc_822FDAD8;
loc_822FD6B8:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FD6C8;
	sub_822EC1E8(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x822fdad4
	if (!ctx.cr6.eq) goto loc_822FDAD4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r31
	r29.u64 = r31.u64;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r31,r7,16
	r31.u64 = ctx.r7.u32 & 0xFFFF;
	// mr r19,r31
	r19.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822fdb6c
	if (ctx.cr6.eq) goto loc_822FDB6C;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x823cd118
	ctx.lr = 0x822FD70C;
	sub_823CD118(ctx, base);
	// stw r3,232(r23)
	REX_STORE_U32(r23.u32 + 232, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822fd720
	if (!ctx.cr6.eq) goto loc_822FD720;
loc_822FD718:
	// li r24,5
	r24.s64 = 5;
	// b 0x822fdad8
	goto loc_822FDAD8;
loc_822FD720:
	// sth r31,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, r31.u16);
	// rlwinm r11,r19,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// add r11,r19,r11
	ctx.r11.u64 = r19.u64 + ctx.r11.u64;
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cd118
	ctx.lr = 0x822FD73C;
	sub_823CD118(ctx, base);
	// lwz r10,232(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 232);
	// stw r3,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// lwz r9,232(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 232);
	// lwz r3,4(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822fd75c
	if (!ctx.cr6.eq) goto loc_822FD75C;
	// li r24,5
	r24.s64 = 5;
	// b 0x822fdad8
	goto loc_822FDAD8;
loc_822FD75C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x822FD768;
	sub_822D5870(ctx, base);
	// lwz r11,232(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 232);
	// mr r31,r16
	r31.u64 = r16.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// lwz r22,4(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x822fdb6c
	if (ctx.cr6.eq) goto loc_822FDB6C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r18,1
	r18.s64 = 1;
	// ori r20,r11,65535
	r20.u64 = ctx.r11.u64 | 65535;
loc_822FD788:
	// addi r30,r29,12
	r30.s64 = r29.s64 + 12;
	// cmpld cr6,r30,r21
	ctx.cr6.compare<uint64_t>(r30.u64, r21.u64, ctx.xer);
	// bgt cr6,0x822fd6b0
	if (ctx.cr6.gt) goto loc_822FD6B0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FD7A8;
	sub_822EC1E8(ctx, base);
	// cmplwi cr6,r3,12
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 12, ctx.xer);
	// bne cr6,0x822fdad4
	if (!ctx.cr6.eq) goto loc_822FDAD4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r31,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0x3FFFC;
	// clrlwi r25,r31,16
	r25.u64 = r31.u32 & 0xFFFF;
	// std r30,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r30.u64);
	// add r10,r25,r10
	ctx.r10.u64 = r25.u64 + ctx.r10.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// add r31,r10,r22
	r31.u64 = ctx.r10.u64 + r22.u64;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r6,r31,4
	ctx.r6.s64 = r31.s64 + 4;
	// sthx r8,r10,r22
	REX_STORE_U16(ctx.r10.u32 + r22.u32, ctx.r8.u16);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lbz r4,1(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r4,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r3,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r3.u16);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r9,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r8,4(r31)
	REX_STORE_U16(r31.u32 + 4, ctx.r8.u16);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lbz r4,1(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r4,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r3,6(r31)
	REX_STORE_U16(r31.u32 + 6, ctx.r3.u16);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,3(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r10,r7,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 6);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x822fd8d4
	if (ctx.cr6.gt) goto loc_822FD8D4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822fd8b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822FD8B8;
	// bdzf 4*cr6+eq,0x822fd8c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822FD8C4;
	// bne cr6,0x822fd8ac
	if (!ctx.cr6.eq) goto loc_822FD8AC;
loc_822FD8AC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// b 0x822fd8cc
	goto loc_822FD8CC;
loc_822FD8B8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// b 0x822fd8cc
	goto loc_822FD8CC;
loc_822FD8C4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
loc_822FD8CC:
	// beq cr6,0x822fd8d4
	if (ctx.cr6.eq) goto loc_822FD8D4;
	// sth r18,6(r31)
	REX_STORE_U16(r31.u32 + 6, r18.u16);
loc_822FD8D4:
	// addi r7,r31,12
	ctx.r7.s64 = r31.s64 + 12;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x822fb7a0
	ctx.lr = 0x822FD8E8;
	sub_822FB7A0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fdad8
	if (!ctx.cr6.eq) goto loc_822FDAD8;
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822fd98c
	if (!ctx.cr6.eq) goto loc_822FD98C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r29,r16
	r29.u64 = r16.u64;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// ble cr6,0x822fd918
	if (!ctx.cr6.gt) goto loc_822FD918;
	// subf r29,r20,r11
	r29.u64 = ctx.r11.u64 - r20.u64;
	// stw r20,8(r31)
	REX_STORE_U32(r31.u32 + 8, r20.u32);
loc_822FD918:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x822fb7a0
	ctx.lr = 0x822FD93C;
	sub_822FB7A0(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x822fdad8
	if (!ctx.cr6.eq) goto loc_822FDAD8;
	// ld r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// clrldi r10,r29,32
	ctx.r10.u64 = r29.u64 & 0xFFFFFFFF;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r29,r10,r8
	r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fdab8
	if (ctx.cr6.eq) goto loc_822FDAB8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
loc_822FD974:
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
	// bdnz 0x822fd974
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822FD974;
	// b 0x822fdab8
	goto loc_822FDAB8;
loc_822FD98C:
	// lwz r27,8(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 8);
	// ld r26,88(r1)
	r26.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// add r11,r27,r26
	ctx.r11.u64 = r27.u64 + r26.u64;
	// cmpld cr6,r11,r21
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, r21.u64, ctx.xer);
	// bgt cr6,0x822fd6b0
	if (ctx.cr6.gt) goto loc_822FD6B0;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823cd118
	ctx.lr = 0x822FD9AC;
	sub_823CD118(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// beq cr6,0x822fd718
	if (ctx.cr6.eq) goto loc_822FD718;
	// mr r30,r16
	r30.u64 = r16.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x822fda18
	if (ctx.cr6.eq) goto loc_822FDA18;
loc_822FD9C4:
	// subf r28,r30,r27
	r28.u64 = r27.u64 - r30.u64;
	// cmplwi cr6,r28,128
	ctx.cr6.compare<uint32_t>(r28.u32, 128, ctx.xer);
	// ble cr6,0x822fd9d4
	if (!ctx.cr6.gt) goto loc_822FD9D4;
	// li r28,128
	r28.s64 = 128;
loc_822FD9D4:
	// clrldi r11,r30,32
	ctx.r11.u64 = r30.u64 & 0xFFFFFFFF;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FD9EC;
	sub_822EC1E8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, ctx.xer);
	// bne cr6,0x822fdad4
	if (!ctx.cr6.eq) goto loc_822FDAD4;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x822FDA0C;
	sub_822D4FA0(ctx, base);
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// blt cr6,0x822fd9c4
	if (ctx.cr6.lt) goto loc_822FD9C4;
loc_822FDA18:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// bne cr6,0x822fdad4
	if (!ctx.cr6.eq) goto loc_822FDAD4;
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 6);
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// add r29,r10,r26
	r29.u64 = ctx.r10.u64 + r26.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x822fdab8
	if (ctx.cr6.gt) goto loc_822FDAB8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822fda64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822FDA64;
	// bdzf 4*cr6+eq,0x822fda8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822FDA8C;
	// bne cr6,0x822fda4c
	if (!ctx.cr6.eq) goto loc_822FDA4C;
loc_822FDA4C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// b 0x822fdab8
	goto loc_822FDAB8;
loc_822FDA64:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// stb r8,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// stb r7,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// b 0x822fdab8
	goto loc_822FDAB8;
loc_822FDA8C:
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
loc_822FDA9C:
	// lbz r8,-1(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + -1);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lbz r7,1(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// stbu r7,-1(r9)
	ea = -1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r9.u32 = ea;
	// blt cr6,0x822fda9c
	if (ctx.cr6.lt) goto loc_822FDA9C;
loc_822FDAB8:
	// addi r11,r25,1
	ctx.r11.s64 = r25.s64 + 1;
	// clrlwi r31,r11,16
	r31.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r31,r19
	ctx.cr6.compare<uint32_t>(r31.u32, r19.u32, ctx.xer);
	// blt cr6,0x822fd788
	if (ctx.cr6.lt) goto loc_822FD788;
loc_822FDAC8:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea8
	return;
loc_822FDAD4:
	// li r24,3
	r24.s64 = 3;
loc_822FDAD8:
	// lwz r11,232(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fdac8
	if (ctx.cr6.eq) goto loc_822FDAC8;
	// lwz r29,4(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822fdb50
	if (ctx.cr6.eq) goto loc_822FDB50;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fdb40
	if (ctx.cr6.eq) goto loc_822FDB40;
	// mr r31,r16
	r31.u64 = r16.u64;
loc_822FDB00:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r29
	r30.u64 = ctx.r11.u64 + r29.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x823cd250
	ctx.lr = 0x822FDB1C;
	sub_823CD250(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// bl 0x823cd250
	ctx.lr = 0x822FDB28;
	sub_823CD250(ctx, base);
	// lwz r9,232(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 232);
	// addi r10,r31,1
	ctx.r10.s64 = r31.s64 + 1;
	// clrlwi r31,r10,16
	r31.u64 = ctx.r10.u32 & 0xFFFF;
	// lhz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822fdb00
	if (ctx.cr6.lt) goto loc_822FDB00;
loc_822FDB40:
	// lwz r11,232(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 232);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x823cd250
	ctx.lr = 0x822FDB50;
	sub_823CD250(ctx, base);
loc_822FDB50:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r3,232(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 232);
	// bl 0x823cd250
	ctx.lr = 0x822FDB5C;
	sub_823CD250(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r16,232(r23)
	REX_STORE_U32(r23.u32 + 232, r16.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea8
	return;
loc_822FDB6C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea8
	return;
}

DEFINE_REX_FUNC(sub_82313590) {
	REX_FUNC_PROLOGUE();
	// lwz r9,44(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r8,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// stw r8,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lwz r10,16(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// ld r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823135dc
	if (!ctx.cr6.eq) goto loc_823135DC;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// blr 
	return;
loc_823135DC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// cmpld cr6,r7,r6
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r6.u64, ctx.xer);
	// bge cr6,0x82313628
	if (!ctx.cr6.lt) goto loc_82313628;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82313608
	if (!ctx.cr6.eq) goto loc_82313608;
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r8,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r4,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r4.u32);
loc_82313608:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823135dc
	if (!ctx.cr6.eq) goto loc_823135DC;
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// blr 
	return;
loc_82313628:
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82313644
	if (ctx.cr6.eq) goto loc_82313644;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82313644:
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82315AB8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// subfic r9,r4,4
	ctx.xer.ca = ctx.r4.u32 <= 4;
	ctx.r9.u64 = static_cast<uint64_t>(4) - ctx.r4.u64;
	// rlwinm r8,r4,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r10,r4,r6
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r31,r9,3,0,28
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// subf r30,r5,r8
	r30.u64 = ctx.r8.u64 - ctx.r5.u64;
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82315b10
	if (!ctx.cr6.gt) goto loc_82315B10;
	// subf r9,r10,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subf r9,r3,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r3.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bl 0x822d5428
	ctx.lr = 0x82315B10;
	sub_822D5428(ctx, base);
loc_82315B10:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r30,r31
	ctx.r10.u64 = r30.u64 + r31.u64;
	// sraw r3,r11,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r3.s64 = ctx.r11.s32 >> temp.u32;
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

DEFINE_REX_FUNC(sub_823193F0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82319434
	if (ctx.cr6.eq) goto loc_82319434;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,704(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 704);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8231942c
	if (ctx.cr6.eq) goto loc_8231942C;
	// lwz r8,28(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82319434
	if (ctx.cr6.lt) goto loc_82319434;
loc_8231942C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82319434:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8231AE30) {
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
	// bl 0x822d4e60
	ctx.lr = 0x8231AE38;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x822d4f28
	ctx.lr = 0x8231AE40;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r31,60(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// li r30,1
	r30.s64 = 1;
	// lwz r24,552(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 552);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(r31.s32, 2, ctx.xer);
	// lwz r5,320(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// ble cr6,0x8231ae90
	if (!ctx.cr6.gt) goto loc_8231AE90;
	// lwz r11,576(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 576);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231ae7c
	if (ctx.cr6.eq) goto loc_8231AE7C;
	// lwz r11,572(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231ae90
	if (!ctx.cr6.eq) goto loc_8231AE90;
loc_8231AE7C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x822d4f74
	ctx.lr = 0x8231AE8C;
	// b 0x822d4eb0
	return;
loc_8231AE90:
	// lhz r11,580(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 580);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8231aee0
	if (!ctx.cr6.gt) goto loc_8231AEE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,584(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 584);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8231AEAC:
	// lhzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mulli r11,r10,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1776));
	// add r28,r11,r5
	r28.u64 = ctx.r11.u64 + ctx.r5.u64;
	// extsh r11,r29
	ctx.r11.s64 = r29.s16;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r29,40(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 40);
	// cntlzw r29,r29
	r29.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// rlwinm r29,r29,27,31,31
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 27) & 0x1;
	// and r9,r29,r9
	ctx.r9.u64 = r29.u64 & ctx.r9.u64;
	// blt cr6,0x8231aeac
	if (ctx.cr6.lt) goto loc_8231AEAC;
loc_8231AEE0:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(r31.s32, 2, ctx.xer);
	// bgt cr6,0x8231b018
	if (ctx.cr6.gt) goto loc_8231B018;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8231b018
	if (!ctx.cr6.eq) goto loc_8231B018;
	// lwz r11,68(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231b9e0
	if (ctx.cr6.eq) goto loc_8231B9E0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8231b9e0
	if (!ctx.cr6.eq) goto loc_8231B9E0;
	// lwz r10,320(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// lhz r9,34(r8)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + 34);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r11,56(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r9,1832(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 1832);
	// beq cr6,0x8231af48
	if (ctx.cr6.eq) goto loc_8231AF48;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8231AF20:
	// lwz r7,320(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// mulli r6,r10,1776
	ctx.r6.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1776));
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// stw r30,40(r7)
	REX_STORE_U32(ctx.r7.u32 + 40, r30.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lhz r4,34(r8)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r8.u32 + 34);
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8231af20
	if (ctx.cr6.lt) goto loc_8231AF20;
loc_8231AF48:
	// lhz r10,120(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 120);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8231afdc
	if (ctx.cr6.lt) goto loc_8231AFDC;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8231AF70:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f11,0(r9)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f9,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fsubs f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfs f7,4(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f6,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f4,8(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fsubs f3,f6,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// stfs f3,8(r9)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f2,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fsubs f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// stfs f13,12(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x8231af70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231AF70;
loc_8231AFDC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8231b9e0
	if (!ctx.cr6.gt) goto loc_8231B9E0;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8231AFEC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r9,r11
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfsx f11,r9,r11
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8231afec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231AFEC;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x822d4f74
	ctx.lr = 0x8231B014;
	// b 0x822d4eb0
	return;
loc_8231B018:
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(r31.s32, 3, ctx.xer);
	// blt cr6,0x8231b9e0
	if (ctx.cr6.lt) goto loc_8231B9E0;
	// lhz r23,730(r8)
	r23.u64 = REX_LOAD_U16(ctx.r8.u32 + 730);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8231b9e0
	if (!ctx.cr6.eq) goto loc_8231B9E0;
	// lwz r11,572(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 572);
	// li r22,0
	r22.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8231b9e0
	if (!ctx.cr6.gt) goto loc_8231B9E0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-24332(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24332);
	ctx.f13.f64 = double(temp.f32);
loc_8231B04C:
	// lwz r11,576(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 576);
	// mulli r10,r22,152
	ctx.r10.s64 = static_cast<int64_t>(r22.u64 * static_cast<uint64_t>(152));
	// add r26,r10,r11
	r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lwz r30,4(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 4);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8231b9d0
	if (!ctx.cr6.eq) goto loc_8231B9D0;
	// lwz r6,0(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x8231b9d0
	if (ctx.cr6.eq) goto loc_8231B9D0;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231b08c
	if (!ctx.cr6.eq) goto loc_8231B08C;
	// lwz r10,16(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 16);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8231b9d0
	if (ctx.cr6.eq) goto loc_8231B9D0;
loc_8231B08C:
	// lhz r10,34(r8)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + 34);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8231b190
	if (!ctx.cr6.eq) goto loc_8231B190;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231b190
	if (!ctx.cr6.eq) goto loc_8231B190;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231b190
	if (!ctx.cr6.eq) goto loc_8231B190;
	// lwz r10,320(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// li r31,0
	r31.s64 = 0;
	// lwz r9,304(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r11,56(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r10,1832(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 1832);
	// ble cr6,0x8231b9d0
	if (!ctx.cr6.gt) goto loc_8231B9D0;
	// clrlwi r7,r23,16
	ctx.r7.u64 = r23.u32 & 0xFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r30,r26,24
	r30.s64 = r26.s64 + 24;
	// addi r5,r10,-4
	ctx.r5.s64 = ctx.r10.s64 + -4;
	// addi r6,r11,-4
	ctx.r6.s64 = ctx.r11.s64 + -4;
loc_8231B0DC:
	// lwzx r11,r30,r9
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,308(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bne cr6,0x8231b138
	if (!ctx.cr6.eq) goto loc_8231B138;
loc_8231B0F0:
	// lwz r11,308(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8231b108
	if (!ctx.cr6.lt) goto loc_8231B108;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8231B108:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8231b178
	if (!ctx.cr6.lt) goto loc_8231B178;
	// lfs f12,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f11,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f10,4(r6)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fadds f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f9,4(r5)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// b 0x8231b0f0
	goto loc_8231B0F0;
loc_8231B138:
	// lwz r11,308(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8231b150
	if (!ctx.cr6.lt) goto loc_8231B150;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8231B150:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8231b178
	if (!ctx.cr6.lt) goto loc_8231B178;
	// lfs f12,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfsu f11,4(r6)
	ea = 4 + ctx.r6.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r6.u32 = ea;
	// lfs f10,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfsu f9,4(r5)
	ea = 4 + ctx.r5.u32;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r5.u32 = ea;
	// b 0x8231b138
	goto loc_8231B138;
loc_8231B178:
	// lwz r11,304(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8231b0dc
	if (ctx.cr6.lt) goto loc_8231B0DC;
	// b 0x8231b9d0
	goto loc_8231B9D0;
loc_8231B190:
	// lhz r10,580(r8)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + 580);
	// lwz r11,556(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 556);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lwz r10,148(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 148);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8231b200
	if (!ctx.cr6.gt) goto loc_8231B200;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
loc_8231B1B4:
	// lwz r7,584(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 584);
	// lhzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + r30.u32);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x8231b1e4
	if (!ctx.cr6.eq) goto loc_8231B1E4;
	// lwz r7,320(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// mulli r9,r9,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(1776));
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r7,144(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 144);
	// stwu r7,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	r31.u32 = ea;
loc_8231B1E4:
	// lhz r7,580(r8)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + 580);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x8231b1b4
	if (ctx.cr6.lt) goto loc_8231B1B4;
loc_8231B200:
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x8231b304
	if (!ctx.cr6.eq) goto loc_8231B304;
	// lwz r9,304(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8231b9d0
	if (!ctx.cr6.gt) goto loc_8231B9D0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r29,r26,24
	r29.s64 = r26.s64 + 24;
loc_8231B220:
	// lwzx r9,r6,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + r29.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r9,308(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// bne cr6,0x8231b2a8
	if (!ctx.cr6.eq) goto loc_8231B2A8;
	// lwzx r5,r9,r6
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// clrlwi r31,r23,16
	r31.u64 = r23.u32 & 0xFFFF;
loc_8231B238:
	// lwz r9,308(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8231b250
	if (!ctx.cr6.lt) goto loc_8231B250;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_8231B250:
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8231b2ec
	if (!ctx.cr6.lt) goto loc_8231B2EC;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f11,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r28,r9,4
	r28.s64 = ctx.r9.s64 + 4;
	// lfs f9,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r27,r7,4
	r27.s64 = ctx.r7.s64 + 4;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// lfs f8,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r27.u32);
	// lfs f7,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f5,f11,f7
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmadds f4,f10,f7,f6
	ctx.f4.f64 = double(float(std::fma(ctx.f10.f64, ctx.f7.f64, ctx.f6.f64)));
	// stfs f4,0(r9)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmadds f3,f9,f8,f5
	ctx.f3.f64 = double(float(std::fma(ctx.f9.f64, ctx.f8.f64, ctx.f5.f64)));
	// stfs f3,0(r7)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// b 0x8231b238
	goto loc_8231B238;
loc_8231B2A8:
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,4(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subf r9,r9,r31
	ctx.r9.u64 = r31.u64 - ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r9,308(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// subf r7,r7,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r7.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
loc_8231B2EC:
	// lwz r9,304(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8231b220
	if (ctx.cr6.lt) goto loc_8231B220;
	// b 0x8231b9d0
	goto loc_8231B9D0;
loc_8231B304:
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// bne cr6,0x8231b468
	if (!ctx.cr6.eq) goto loc_8231B468;
	// lwz r9,304(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8231b9d0
	if (!ctx.cr6.gt) goto loc_8231B9D0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r28,r26,24
	r28.s64 = r26.s64 + 24;
loc_8231B324:
	// lwzx r9,r5,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r28.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r9,308(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// bne cr6,0x8231b3e8
	if (!ctx.cr6.eq) goto loc_8231B3E8;
	// lwzx r31,r9,r5
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// clrlwi r30,r23,16
	r30.u64 = r23.u32 & 0xFFFF;
loc_8231B33C:
	// lwz r9,308(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8231b354
	if (!ctx.cr6.lt) goto loc_8231B354;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_8231B354:
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8231b450
	if (!ctx.cr6.lt) goto loc_8231B450;
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f12,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f11,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r27,r7,4
	r27.s64 = ctx.r7.s64 + 4;
	// lfs f8,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// addi r26,r9,4
	r26.s64 = ctx.r9.s64 + 4;
	// lfs f7,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r25,r6,4
	r25.s64 = ctx.r6.s64 + 4;
	// lfs f6,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f4,f11,f6
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// lfs f3,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f10,f6
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// lfs f1,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lfs f11,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r26.u32);
	// lfs f10,32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// stw r25,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r25.u32);
	// stw r27,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r27.u32);
	// fmadds f9,f9,f6,f5
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f6.f64, ctx.f5.f64)));
	// fmadds f8,f8,f3,f4
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f3.f64, ctx.f4.f64)));
	// fmadds f6,f1,f3,f2
	ctx.f6.f64 = double(float(std::fma(ctx.f1.f64, ctx.f3.f64, ctx.f2.f64)));
	// fmadds f5,f3,f12,f9
	ctx.f5.f64 = double(float(std::fma(ctx.f3.f64, ctx.f12.f64, ctx.f9.f64)));
	// stfs f5,0(r9)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmadds f4,f11,f7,f8
	ctx.f4.f64 = double(float(std::fma(ctx.f11.f64, ctx.f7.f64, ctx.f8.f64)));
	// stfs f4,0(r6)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmadds f3,f10,f7,f6
	ctx.f3.f64 = double(float(std::fma(ctx.f10.f64, ctx.f7.f64, ctx.f6.f64)));
	// stfs f3,0(r7)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// b 0x8231b33c
	goto loc_8231B33C;
loc_8231B3E8:
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,8(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,4(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subf r9,r9,r30
	ctx.r9.u64 = r30.u64 - ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r9,308(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// subf r7,r7,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r7.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r9,308(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subf r9,r6,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r6.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 + r31.u64;
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
loc_8231B450:
	// lwz r9,304(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8231b324
	if (ctx.cr6.lt) goto loc_8231B324;
	// b 0x8231b9d0
	goto loc_8231B9D0;
loc_8231B468:
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// bne cr6,0x8231b63c
	if (!ctx.cr6.eq) goto loc_8231B63C;
	// lwz r9,304(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8231b9d0
	if (!ctx.cr6.gt) goto loc_8231B9D0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r27,r26,24
	r27.s64 = r26.s64 + 24;
loc_8231B488:
	// lwzx r7,r9,r27
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + r27.u32);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// bne cr6,0x8231b598
	if (!ctx.cr6.eq) goto loc_8231B598;
	// lwzx r30,r9,r7
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// clrlwi r29,r23,16
	r29.u64 = r23.u32 & 0xFFFF;
loc_8231B4A0:
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8231b4b8
	if (!ctx.cr6.lt) goto loc_8231B4B8;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
loc_8231B4B8:
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8231b624
	if (!ctx.cr6.lt) goto loc_8231B624;
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f12,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f11,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,36(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f9,52(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// lwz r31,12(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f8,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r26,r7,4
	r26.s64 = ctx.r7.s64 + 4;
	// lfs f7,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r25,r6,4
	r25.s64 = ctx.r6.s64 + 4;
	// lfs f6,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f4,f11,f6
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// lfs f3,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f10,f6
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// lfs f1,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f9,f6
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// lfs f11,32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// addi r21,r5,4
	r21.s64 = ctx.r5.s64 + 4;
	// lfs f9,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r20,r31,4
	r20.s64 = r31.s64 + 4;
	// lfs f31,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	f31.f64 = double(temp.f32);
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r26.u32);
	// lfs f30,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	f30.f64 = double(temp.f32);
	// stw r21,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r21.u32);
	// lfs f29,40(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 40);
	f29.f64 = double(temp.f32);
	// stw r25,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r25.u32);
	// lfs f28,56(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 56);
	f28.f64 = double(temp.f32);
	// stw r20,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r20.u32);
	// fmadds f8,f8,f6,f5
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f6.f64, ctx.f5.f64)));
	// lfs f6,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f1,f3,f4
	ctx.f5.f64 = double(float(std::fma(ctx.f1.f64, ctx.f3.f64, ctx.f4.f64)));
	// lfs f4,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f2,f11,f3,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f11.f64, ctx.f3.f64, ctx.f2.f64)));
	// lfs f1,44(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f12,f10,f3,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f3.f64, ctx.f12.f64)));
	// lfs f11,60(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// fmadds f10,f31,f9,f8
	ctx.f10.f64 = double(float(std::fma(f31.f64, ctx.f9.f64, ctx.f8.f64)));
	// fmadds f8,f30,f7,f5
	ctx.f8.f64 = double(float(std::fma(f30.f64, ctx.f7.f64, ctx.f5.f64)));
	// fmadds f5,f29,f7,f2
	ctx.f5.f64 = double(float(std::fma(f29.f64, ctx.f7.f64, ctx.f2.f64)));
	// fmadds f2,f28,f7,f12
	ctx.f2.f64 = double(float(std::fma(f28.f64, ctx.f7.f64, ctx.f12.f64)));
	// fmadds f12,f6,f3,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f6.f64, ctx.f3.f64, ctx.f10.f64)));
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmadds f10,f4,f9,f8
	ctx.f10.f64 = double(float(std::fma(ctx.f4.f64, ctx.f9.f64, ctx.f8.f64)));
	// stfs f10,0(r5)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmadds f8,f1,f9,f5
	ctx.f8.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, ctx.f5.f64)));
	// stfs f8,0(r6)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmadds f7,f11,f9,f2
	ctx.f7.f64 = double(float(std::fma(ctx.f11.f64, ctx.f9.f64, ctx.f2.f64)));
	// stfs f7,0(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// b 0x8231b4a0
	goto loc_8231B4A0;
loc_8231B598:
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,8(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,12(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r29,4(r7)
	r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r7,r7,r29
	ctx.r7.u64 = r29.u64 - ctx.r7.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r6,r7,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r7.u64;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// subf r7,r6,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r6.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r7,r31
	ctx.r6.u64 = ctx.r7.u64 + r31.u64;
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r6,r7,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r7.u64;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r7,r30
	ctx.r5.u64 = ctx.r7.u64 + r30.u64;
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
loc_8231B624:
	// lwz r7,304(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r28,r7
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8231b488
	if (ctx.cr6.lt) goto loc_8231B488;
	// b 0x8231b9d0
	goto loc_8231B9D0;
loc_8231B63C:
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// li r27,0
	r27.s64 = 0;
	// bne cr6,0x8231b890
	if (!ctx.cr6.eq) goto loc_8231B890;
	// lwz r9,304(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8231b9d0
	if (!ctx.cr6.gt) goto loc_8231B9D0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r26,r26,24
	r26.s64 = r26.s64 + 24;
loc_8231B65C:
	// lwzx r7,r9,r26
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + r26.u32);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// bne cr6,0x8231b7c8
	if (!ctx.cr6.eq) goto loc_8231B7C8;
	// lwzx r29,r9,r7
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// clrlwi r28,r23,16
	r28.u64 = r23.u32 & 0xFFFF;
loc_8231B674:
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r28,r7
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8231b68c
	if (!ctx.cr6.lt) goto loc_8231B68C;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
loc_8231B68C:
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8231b878
	if (!ctx.cr6.lt) goto loc_8231B878;
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f12,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f11,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,44(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f9,64(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// lwz r31,12(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f8,84(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lwz r30,16(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lfs f7,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r25,r7,4
	r25.s64 = ctx.r7.s64 + 4;
	// lfs f6,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f4,f11,f6
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// lfs f3,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f10,f6
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// lfs f1,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f9,f6
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// lfs f11,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f8,f6
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// lfs f9,40(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,60(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// addi r21,r6,4
	r21.s64 = ctx.r6.s64 + 4;
	// lfs f31,80(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 80);
	f31.f64 = double(temp.f32);
	// addi r20,r5,4
	r20.s64 = ctx.r5.s64 + 4;
	// lfs f30,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	f30.f64 = double(temp.f32);
	// addi r19,r31,4
	r19.s64 = r31.s64 + 4;
	// lfs f29,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	f29.f64 = double(temp.f32);
	// addi r18,r30,4
	r18.s64 = r30.s64 + 4;
	// lfs f28,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	f28.f64 = double(temp.f32);
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r25.u32);
	// fmadds f6,f3,f6,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f6.f64, ctx.f5.f64)));
	// lfs f5,48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f11,f1,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f11.f64, ctx.f1.f64, ctx.f4.f64)));
	// lfs f3,68(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f9,f1,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f1.f64, ctx.f2.f64)));
	// lfs f11,88(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f9,f8,f1,f12
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f1.f64, ctx.f12.f64)));
	// lfs f8,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f12,f31,f1,f10
	ctx.f12.f64 = double(float(std::fma(f31.f64, ctx.f1.f64, ctx.f10.f64)));
	// lfs f10,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f31,32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	f31.f64 = double(temp.f32);
	// stw r21,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r21.u32);
	// lfs f27,52(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 52);
	f27.f64 = double(temp.f32);
	// stw r20,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r20.u32);
	// lfs f26,72(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 72);
	f26.f64 = double(temp.f32);
	// stw r19,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r19.u32);
	// lfs f25,92(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 92);
	f25.f64 = double(temp.f32);
	// stw r18,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r18.u32);
	// lfs f24,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	f24.f64 = double(temp.f32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// fmadds f6,f29,f30,f6
	ctx.f6.f64 = double(float(std::fma(f29.f64, f30.f64, ctx.f6.f64)));
	// lfs f29,36(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 36);
	f29.f64 = double(temp.f32);
	// fmadds f4,f28,f7,f4
	ctx.f4.f64 = double(float(std::fma(f28.f64, ctx.f7.f64, ctx.f4.f64)));
	// lfs f28,56(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 56);
	f28.f64 = double(temp.f32);
	// fmadds f2,f5,f7,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f5.f64, ctx.f7.f64, ctx.f2.f64)));
	// lfs f5,76(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f3,f3,f7,f9
	ctx.f3.f64 = double(float(std::fma(ctx.f3.f64, ctx.f7.f64, ctx.f9.f64)));
	// lfs f9,96(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f7,f11,f7,f12
	ctx.f7.f64 = double(float(std::fma(ctx.f11.f64, ctx.f7.f64, ctx.f12.f64)));
	// fmadds f6,f10,f8,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f10.f64, ctx.f8.f64, ctx.f6.f64)));
	// fmadds f4,f31,f30,f4
	ctx.f4.f64 = double(float(std::fma(f31.f64, f30.f64, ctx.f4.f64)));
	// fmadds f2,f27,f30,f2
	ctx.f2.f64 = double(float(std::fma(f27.f64, f30.f64, ctx.f2.f64)));
	// fmadds f12,f26,f30,f3
	ctx.f12.f64 = double(float(std::fma(f26.f64, f30.f64, ctx.f3.f64)));
	// fmadds f11,f25,f30,f7
	ctx.f11.f64 = double(float(std::fma(f25.f64, f30.f64, ctx.f7.f64)));
	// fmadds f10,f24,f1,f6
	ctx.f10.f64 = double(float(std::fma(f24.f64, ctx.f1.f64, ctx.f6.f64)));
	// stfs f10,0(r7)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmadds f7,f29,f8,f4
	ctx.f7.f64 = double(float(std::fma(f29.f64, ctx.f8.f64, ctx.f4.f64)));
	// stfs f7,0(r6)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmadds f6,f28,f8,f2
	ctx.f6.f64 = double(float(std::fma(f28.f64, ctx.f8.f64, ctx.f2.f64)));
	// stfs f6,0(r5)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmadds f5,f5,f8,f12
	ctx.f5.f64 = double(float(std::fma(ctx.f5.f64, ctx.f8.f64, ctx.f12.f64)));
	// stfs f5,0(r31)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fmadds f4,f9,f8,f11
	ctx.f4.f64 = double(float(std::fma(ctx.f9.f64, ctx.f8.f64, ctx.f11.f64)));
	// stfs f4,0(r30)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// b 0x8231b674
	goto loc_8231B674;
loc_8231B7C8:
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,8(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,12(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r29,16(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r28,4(r7)
	r28.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r7,r7,r28
	ctx.r7.u64 = r28.u64 - ctx.r7.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// subf r6,r6,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r6.u64;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r5,0(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r7,r5,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r5.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r7,r31
	ctx.r6.u64 = ctx.r7.u64 + r31.u64;
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r6,r7,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r7.u64;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r7,r30
	ctx.r5.u64 = ctx.r7.u64 + r30.u64;
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r5,0(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r7,r5,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r5.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r7,r29
	ctx.r6.u64 = ctx.r7.u64 + r29.u64;
	// stw r6,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
loc_8231B878:
	// lwz r7,304(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r27,r7
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8231b65c
	if (ctx.cr6.lt) goto loc_8231B65C;
	// b 0x8231b9d0
	goto loc_8231B9D0;
loc_8231B890:
	// lwz r10,304(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8231b9d0
	if (!ctx.cr6.gt) goto loc_8231B9D0;
	// li r30,0
	r30.s64 = 0;
	// addi r25,r26,24
	r25.s64 = r26.s64 + 24;
loc_8231B8A4:
	// lwzx r10,r30,r25
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + r25.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8231b978
	if (!ctx.cr6.eq) goto loc_8231B978;
	// lwz r10,308(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// clrlwi r29,r23,16
	r29.u64 = r23.u32 & 0xFFFF;
	// lwzx r28,r30,r10
	r28.u64 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
loc_8231B8BC:
	// lwz r10,308(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8231b8d4
	if (!ctx.cr6.lt) goto loc_8231B8D4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8231B8D4:
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8231b9bc
	if (!ctx.cr6.lt) goto loc_8231B9BC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8231b970
	if (!ctx.cr6.gt) goto loc_8231B970;
	// li r31,0
	r31.s64 = 0;
loc_8231B8E8:
	// mullw r10,r31,r6
	ctx.r10.s64 = int64_t(r31.s32) * int64_t(ctx.r6.s32);
	// lwz r5,148(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 148);
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stfsx f0,r9,r24
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + r24.u32, temp.u32);
loc_8231B904:
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r9,r24
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + r24.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwzx r21,r5,r11
	r21.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lfsx f11,r5,r7
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// lfs f10,0(r21)
	temp.u32 = REX_LOAD_U32(r21.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f11,f12
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f12.f64)));
	// stfsx f9,r9,r24
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r9.u32 + r24.u32, temp.u32);
	// blt cr6,0x8231b904
	if (ctx.cr6.lt) goto loc_8231B904;
	// addi r10,r31,1
	ctx.r10.s64 = r31.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8231b8e8
	if (ctx.cr6.lt) goto loc_8231B8E8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8231B948:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lfsx f12,r9,r24
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + r24.u32);
	ctx.f12.f64 = double(temp.f32);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// addi r5,r7,4
	ctx.r5.s64 = ctx.r7.s64 + 4;
	// stwx r5,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u32);
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// blt cr6,0x8231b948
	if (ctx.cr6.lt) goto loc_8231B948;
loc_8231B970:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x8231b8bc
	goto loc_8231B8BC;
loc_8231B978:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8231b9bc
	if (!ctx.cr6.gt) goto loc_8231B9BC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8231B984:
	// lwz r9,308(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r30,r9
	ctx.r9.u64 = r30.u64 + ctx.r9.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwzx r5,r7,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// lwz r31,4(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subf r9,r9,r31
	ctx.r9.u64 = r31.u64 - ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stwx r5,r7,r11
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r5.u32);
	// blt cr6,0x8231b984
	if (ctx.cr6.lt) goto loc_8231B984;
loc_8231B9BC:
	// lwz r10,304(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8231b8a4
	if (ctx.cr6.lt) goto loc_8231B8A4;
loc_8231B9D0:
	// lwz r11,572(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 572);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8231b04c
	if (ctx.cr6.lt) goto loc_8231B04C;
loc_8231B9E0:
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x822d4f74
	ctx.lr = 0x8231B9E8;
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_82364BD8) {
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
	ctx.lr = 0x82364BE0;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r31,r11,r3
	r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82364BFC:
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,12(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwzu r9,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r30,r6,r7
	r30.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mulli r4,r3,1892
	ctx.r4.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(1892));
	// mulli r5,r9,784
	ctx.r5.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(784));
	// subf r6,r6,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r6.u64;
	// mulli r3,r3,784
	ctx.r3.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(784));
	// mulli r29,r9,1892
	r29.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(1892));
	// add r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mulli r7,r30,1448
	ctx.r7.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(1448));
	// subf r5,r29,r3
	ctx.r5.u64 = ctx.r3.u64 - r29.u64;
	// mulli r6,r6,1448
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1448));
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 + ctx.r6.u64;
	// subf r6,r5,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r5.u64;
	// addi r5,r4,64
	ctx.r5.s64 = ctx.r4.s64 + 64;
	// subf r9,r9,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r9.u64;
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// addi r3,r6,64
	ctx.r3.s64 = ctx.r6.s64 + 64;
	// srawi r7,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 7;
	// addi r6,r9,64
	ctx.r6.s64 = ctx.r9.s64 + 64;
	// srawi r5,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 7;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// srawi r4,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 7;
	// srawi r3,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 7;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x82364bfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82364BFC;
	// add r11,r8,r31
	ctx.r11.u64 = ctx.r8.u64 + r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// subf r10,r11,r31
	ctx.r10.u64 = r31.u64 - ctx.r11.u64;
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r28,r11,r9
	r28.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// subf r27,r11,r7
	r27.u64 = ctx.r7.u64 - ctx.r11.u64;
	// add r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 + ctx.r6.u64;
	// subf r9,r11,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 + ctx.r5.u64;
	// subf r26,r11,r5
	r26.u64 = ctx.r5.u64 - ctx.r11.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r25,r11,r7
	r25.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r24,r11,r8
	r24.u64 = ctx.r8.u64 - ctx.r11.u64;
loc_82364CBC:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r7,r24,r11
	ctx.r7.u64 = REX_LOAD_U32(r24.u32 + ctx.r11.u32);
	// mulli r4,r8,2276
	ctx.r4.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(2276));
	// lwzx r6,r26,r11
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + ctx.r11.u32);
	// lwzx r5,r27,r11
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	// lwzx r29,r28,r11
	r29.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// lwzx r30,r25,r11
	r30.u64 = REX_LOAD_U32(r25.u32 + ctx.r11.u32);
	// lwzx r23,r10,r11
	r23.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r22,r9,r11
	r22.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mulli r8,r8,565
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(565));
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// mulli r31,r7,3406
	r31.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(3406));
	// mulli r7,r3,2408
	ctx.r7.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(2408));
	// subf r3,r31,r8
	ctx.r3.u64 = ctx.r8.u64 - r31.u64;
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// mulli r7,r6,799
	ctx.r7.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(799));
	// mulli r6,r5,4017
	ctx.r6.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(4017));
	// add r31,r29,r30
	r31.u64 = r29.u64 + r30.u64;
	// subf r5,r7,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r7.u64;
	// subf r21,r6,r8
	r21.u64 = ctx.r8.u64 - ctx.r6.u64;
	// srawi r7,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 3;
	// srawi r6,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 3;
	// mulli r8,r31,1108
	ctx.r8.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(1108));
	// srawi r5,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 3;
	// srawi r4,r21,3
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x7) != 0);
	ctx.r4.s64 = r21.s32 >> 3;
	// addi r21,r23,32
	r21.s64 = r23.s64 + 32;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// mulli r30,r30,3784
	r30.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(3784));
	// subf r3,r4,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r4.u64;
	// subf r31,r5,r7
	r31.u64 = ctx.r7.u64 - ctx.r5.u64;
	// mulli r23,r29,1568
	r23.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(1568));
	// subf r20,r30,r8
	r20.u64 = ctx.r8.u64 - r30.u64;
	// add r23,r23,r8
	r23.u64 = r23.u64 + ctx.r8.u64;
	// add r19,r3,r31
	r19.u64 = ctx.r3.u64 + r31.u64;
	// rlwinm r29,r22,8,0,23
	r29.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r30,r21,8,0,23
	r30.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 8) & 0xFFFFFF00;
	// subf r21,r3,r31
	r21.u64 = r31.u64 - ctx.r3.u64;
	// srawi r3,r20,3
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x7) != 0);
	ctx.r3.s64 = r20.s32 >> 3;
	// add r8,r29,r30
	ctx.r8.u64 = r29.u64 + r30.u64;
	// srawi r31,r23,3
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x7) != 0);
	r31.s64 = r23.s32 >> 3;
	// mulli r22,r19,181
	r22.s64 = static_cast<int64_t>(r19.u64 * static_cast<uint64_t>(181));
	// mulli r23,r21,181
	r23.s64 = static_cast<int64_t>(r21.u64 * static_cast<uint64_t>(181));
	// subf r30,r29,r30
	r30.u64 = r30.u64 - r29.u64;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r5,r8,r31
	ctx.r5.u64 = ctx.r8.u64 + r31.u64;
	// addi r29,r22,128
	r29.s64 = r22.s64 + 128;
	// subf r31,r31,r8
	r31.u64 = ctx.r8.u64 - r31.u64;
	// addi r23,r23,128
	r23.s64 = r23.s64 + 128;
	// add r8,r3,r30
	ctx.r8.u64 = ctx.r3.u64 + r30.u64;
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// srawi r4,r29,8
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xFF) != 0);
	ctx.r4.s64 = r29.s32 >> 8;
	// subf r30,r3,r30
	r30.u64 = r30.u64 - ctx.r3.u64;
	// srawi r3,r23,8
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0xFF) != 0);
	ctx.r3.s64 = r23.s32 >> 8;
	// add r29,r7,r5
	r29.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r23,r8,r4
	r23.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r22,r30,r3
	r22.u64 = r30.u64 + ctx.r3.u64;
	// add r21,r31,r6
	r21.u64 = r31.u64 + ctx.r6.u64;
	// srawi r29,r29,14
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x3FFF) != 0);
	r29.s64 = r29.s32 >> 14;
	// srawi r23,r23,14
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x3FFF) != 0);
	r23.s64 = r23.s32 >> 14;
	// subf r6,r6,r31
	ctx.r6.u64 = r31.u64 - ctx.r6.u64;
	// stwx r29,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r29.u32);
	// subf r3,r3,r30
	ctx.r3.u64 = r30.u64 - ctx.r3.u64;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r23.u32);
	// srawi r31,r22,14
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x3FFF) != 0);
	r31.s64 = r22.s32 >> 14;
	// subf r8,r4,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r4.u64;
	// srawi r30,r21,14
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x3FFF) != 0);
	r30.s64 = r21.s32 >> 14;
	// stwx r31,r28,r11
	REX_STORE_U32(r28.u32 + ctx.r11.u32, r31.u32);
	// srawi r6,r6,14
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 14;
	// srawi r4,r3,14
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 14;
	// stwx r30,r27,r11
	REX_STORE_U32(r27.u32 + ctx.r11.u32, r30.u32);
	// srawi r3,r8,14
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 14;
	// stwx r6,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u32);
	// subf r8,r7,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r7.u64;
	// stwx r4,r26,r11
	REX_STORE_U32(r26.u32 + ctx.r11.u32, ctx.r4.u32);
	// stwx r3,r25,r11
	REX_STORE_U32(r25.u32 + ctx.r11.u32, ctx.r3.u32);
	// srawi r7,r8,14
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 14;
	// stwx r7,r24,r11
	REX_STORE_U32(r24.u32 + ctx.r11.u32, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82364cbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82364CBC;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_8236D618) {
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
	// bl 0x822d4e6c
	ctx.lr = 0x8236D620;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r21,-32161
	r21.s64 = -2107703296;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r11,5316(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 5316);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8236D65C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,5316(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 5316);
	// addi r24,r30,8
	r24.s64 = r30.s64 + 8;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236D67C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,5316(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 5316);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// add r29,r11,r30
	r29.u64 = ctx.r11.u64 + r30.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8236D6A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,5316(r21)
	ctx.r8.u64 = REX_LOAD_U32(r21.u32 + 5316);
	// addi r23,r29,8
	r23.s64 = r29.s64 + 8;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8236D6C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,5316(r21)
	ctx.r7.u64 = REX_LOAD_U32(r21.u32 + 5316);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8236D6DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,5316(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 5316);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8236D6F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// adde r11,r7,r8
	temp.u8 = (ctx.r7.u32 + ctx.r8.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r5,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x8236d72c
	if (ctx.cr6.gt) goto loc_8236D72C;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8236D72C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x8236d748
	if (ctx.cr6.gt) goto loc_8236D748;
	// li r11,3
	ctx.r11.s64 = 3;
loc_8236D748:
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwzx r7,r8,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236D768:
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bge cr6,0x8236d78c
	if (!ctx.cr6.lt) goto loc_8236D78C;
	// cmpwi cr6,r7,64
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 64, ctx.xer);
	// blt cr6,0x8236d78c
	if (ctx.cr6.lt) goto loc_8236D78C;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwzx r5,r8,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stwx r5,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r5.u32);
loc_8236D78C:
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// bge cr6,0x8236d79c
	if (!ctx.cr6.lt) goto loc_8236D79C;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stwx r6,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
loc_8236D79C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// bdnz 0x8236d768
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236D768;
	// lis r21,-32161
	r21.s64 = -2107703296;
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r22,r22,1,0,30
	r22.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,5320(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 5320);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8236D7CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,5320(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 5320);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r6,116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8236D7E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,5320(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 5320);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r6,120(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8236D804;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,5320(r21)
	ctx.r8.u64 = REX_LOAD_U32(r21.u32 + 5320);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r6,124(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8236D820;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,5320(r21)
	ctx.r7.u64 = REX_LOAD_U32(r21.u32 + 5320);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8236D83C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,5320(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 5320);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r6,132(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8236D858;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_82378480) {
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
	ctx.lr = 0x82378488;
	// add r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 + ctx.r7.u64;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lis r31,-32161
	r31.s64 = -2107703296;
	// lwz r26,84(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r27,r31,5308
	r27.s64 = r31.s64 + 5308;
	// addi r30,r10,-1
	r30.s64 = ctx.r10.s64 + -1;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// lwz r10,5308(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5308);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// subf r29,r10,r3
	r29.u64 = ctx.r3.u64 - ctx.r10.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bge cr6,0x8237854c
	if (!ctx.cr6.lt) goto loc_8237854C;
	// subf r6,r5,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r5.u64;
	// subf r28,r29,r3
	r28.u64 = ctx.r3.u64 - r29.u64;
	// add r10,r29,r26
	ctx.r10.u64 = r29.u64 + r26.u64;
	// subfic r31,r26,16
	ctx.xer.ca = r26.u32 <= 16;
	r31.u64 = static_cast<uint64_t>(16) - r26.u64;
	// subf r3,r11,r30
	ctx.r3.u64 = r30.u64 - ctx.r11.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// li r6,16
	ctx.r6.s64 = 16;
loc_823784DC:
	// lbzux r5,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// addi r22,r1,-128
	r22.s64 = ctx.r1.s64 + -128;
	// addi r20,r1,-128
	r20.s64 = ctx.r1.s64 + -128;
	// lbzx r30,r28,r7
	r30.u64 = REX_LOAD_U8(r28.u32 + ctx.r7.u32);
	// addi r24,r1,-144
	r24.s64 = ctx.r1.s64 + -144;
	// addi r21,r1,-144
	r21.s64 = ctx.r1.s64 + -144;
	// stw r5,-128(r1)
	REX_STORE_U32(ctx.r1.u32 + -128, ctx.r5.u32);
	// lvx128 v13,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r30,-144(r1)
	REX_STORE_U32(ctx.r1.u32 + -144, r30.u32);
	// add r30,r31,r10
	r30.u64 = r31.u64 + ctx.r10.u64;
	// lvx128 v0,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltb v0,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_set1_epi8(char(0xC))));
	// vspltb v13,v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_set1_epi8(char(0xC))));
	// stvx128 v0,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// stvx128 v13,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx v0,0,r7
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r7,r6
	ea = ctx.r7.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stvlx v0,r31,r10
	ea = r31.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r30,r6
	ea = r30.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// stvlx v13,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvrx v13,r10,r6
	ea = ctx.r10.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stvlx v13,0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvrx v13,r5,r6
	ea = ctx.r5.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// bdnz 0x823784dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823784DC;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
loc_8237854C:
	// subf r6,r26,r11
	ctx.r6.u64 = ctx.r11.u64 - r26.u64;
	// cmpwi cr6,r6,32
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 32, ctx.xer);
	// beq cr6,0x8237856c
	if (ctx.cr6.eq) goto loc_8237856C;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r23,r10,2
	r23.s64 = ctx.r10.s64 + 2;
	// srawi r25,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	r25.s64 = ctx.r11.s32 >> 1;
	// subf r4,r6,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r6.u64;
loc_8237856C:
	// rlwinm r28,r25,0,0,27
	r28.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82378654
	if (ctx.cr6.eq) goto loc_82378654;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x82378654
	if (!ctx.cr6.gt) goto loc_82378654;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r23,-1
	ctx.r8.s64 = r23.s64 + -1;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r10,r8,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r26,r5,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r11,3,0,28
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r24,r3,3,0,28
	r24.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r29,r4,r29
	r29.u64 = r29.u64 - ctx.r4.u64;
	// addi r27,r10,1
	r27.s64 = ctx.r10.s64 + 1;
loc_823785AC:
	// add r10,r26,r6
	ctx.r10.u64 = r26.u64 + ctx.r6.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x82378644
	if (!ctx.cr6.gt) goto loc_82378644;
	// addi r5,r28,-1
	ctx.r5.s64 = r28.s64 + -1;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r5,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// add r31,r11,r8
	r31.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r4,1
	ctx.r8.s64 = ctx.r4.s64 + 1;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// subf r21,r11,r3
	r21.u64 = ctx.r3.u64 - ctx.r11.u64;
	// rlwinm r22,r11,2,0,29
	r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// subf r30,r10,r4
	r30.u64 = ctx.r4.u64 - ctx.r10.u64;
	// subf r4,r10,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r10.u64;
	// subf r31,r10,r31
	r31.u64 = r31.u64 - ctx.r10.u64;
	// subf r3,r10,r22
	ctx.r3.u64 = r22.u64 - ctx.r10.u64;
	// subf r5,r10,r21
	ctx.r5.u64 = r21.u64 - ctx.r10.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// add r30,r30,r6
	r30.u64 = r30.u64 + ctx.r6.u64;
	// add r31,r31,r6
	r31.u64 = r31.u64 + ctx.r6.u64;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
loc_82378614:
	// lvx128 v63,r8,r29
	ea = (ctx.r8.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// stvx128 v63,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82378614
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82378614;
loc_82378644:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// add r6,r25,r6
	ctx.r6.u64 = r25.u64 + ctx.r6.u64;
	// add r29,r24,r29
	r29.u64 = r24.u64 + r29.u64;
	// bne 0x823785ac
	if (!ctx.cr0.eq) goto loc_823785AC;
loc_82378654:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82378738
	if (ctx.cr6.eq) goto loc_82378738;
	// subf r9,r11,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r11.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x82378738
	if (!ctx.cr6.gt) goto loc_82378738;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r23,-1
	ctx.r8.s64 = r23.s64 + -1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// neg r5,r11
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r10,r8,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r29,r6,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r11,3,0,28
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r26,r5,3,0,28
	r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r31,r7,r9
	r31.u64 = ctx.r9.u64 - ctx.r7.u64;
	// addi r30,r10,1
	r30.s64 = ctx.r10.s64 + 1;
loc_82378690:
	// add r10,r29,r7
	ctx.r10.u64 = r29.u64 + ctx.r7.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x82378728
	if (!ctx.cr6.gt) goto loc_82378728;
	// addi r9,r28,-1
	ctx.r9.s64 = r28.s64 + -1;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf r24,r11,r5
	r24.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r25,r11,2,0,29
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r10,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r10.u64;
	// subf r6,r10,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r10.u64;
	// subf r4,r10,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r5,r10,r25
	ctx.r5.u64 = r25.u64 - ctx.r10.u64;
	// subf r8,r10,r24
	ctx.r8.u64 = r24.u64 - ctx.r10.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 + ctx.r7.u64;
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
loc_823786F8:
	// lvx128 v62,r9,r31
	ea = (ctx.r9.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stvx128 v62,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x823786f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823786F8;
loc_82378728:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r7,r27,r7
	ctx.r7.u64 = r27.u64 + ctx.r7.u64;
	// add r31,r26,r31
	r31.u64 = r26.u64 + r31.u64;
	// bne 0x82378690
	if (!ctx.cr0.eq) goto loc_82378690;
loc_82378738:
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_82387BD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82387BD8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x82387eec
	if (ctx.cr6.gt) goto loc_82387EEC;
	// lis r12,-32200
	ctx.r12.s64 = -2110259200;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,31764
	ctx.r12.s64 = ctx.r12.s64 + 31764;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82387C50;
	case 1:
		goto loc_82387C80;
	case 2:
		goto loc_82387CA8;
	case 3:
		goto loc_82387CD0;
	case 4:
		goto loc_82387CF8;
	case 5:
		goto loc_82387D48;
	case 6:
		goto loc_82387D70;
	case 7:
		goto loc_82387D98;
	case 8:
		goto loc_82387DA0;
	case 9:
		goto loc_82387DEC;
	case 10:
		goto loc_82387E30;
	case 11:
		goto loc_82387E74;
	case 12:
		goto loc_82387E7C;
	case 13:
		goto loc_82387EC8;
	case 14:
		goto loc_82387ED0;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82387C50:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,15932(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15932);
	// li r6,4
	ctx.r6.s64 = 4;
	// add r9,r31,r11
	ctx.r9.u64 = r31.u64 + ctx.r11.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// bctrl 
	ctx.lr = 0x82387C78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_82387C80:
	// lwz r10,15932(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15932);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,4
	ctx.r6.s64 = 4;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82387CA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_82387CA8:
	// lwz r10,15932(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15932);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,8
	ctx.r6.s64 = 8;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82387CC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_82387CD0:
	// lwz r10,15932(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15932);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,4
	ctx.r6.s64 = 4;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82387CF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_82387CF8:
	// lwz r10,15932(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15932);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82387D18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,15932(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 15932);
	// li r6,4
	ctx.r6.s64 = 4;
	// add r9,r31,r11
	ctx.r9.u64 = r31.u64 + ctx.r11.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82387D40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_82387D48:
	// lwz r10,15932(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15932);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,8
	ctx.r6.s64 = 8;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82387D68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_82387D70:
	// lwz r10,15932(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15932);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,12
	ctx.r6.s64 = 12;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82387D90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_82387D98:
	// li r6,4
	ctx.r6.s64 = 4;
	// b 0x82387ed4
	goto loc_82387ED4;
loc_82387DA0:
	// lwz r11,15932(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15932);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82387DBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,15932(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 15932);
	// li r6,4
	ctx.r6.s64 = 4;
	// add r10,r31,r11
	ctx.r10.u64 = r31.u64 + ctx.r11.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// bctrl 
	ctx.lr = 0x82387DE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_82387DEC:
	// lwz r11,15932(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15932);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82387E08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,15932(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15932);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,4
	ctx.r6.s64 = 4;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82387E28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_82387E30:
	// lwz r11,15932(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15932);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82387E4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,15932(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15932);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,8
	ctx.r6.s64 = 8;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82387E6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_82387E74:
	// li r6,8
	ctx.r6.s64 = 8;
	// b 0x82387ed4
	goto loc_82387ED4;
loc_82387E7C:
	// lwz r11,15932(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15932);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82387E98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,15932(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 15932);
	// li r6,4
	ctx.r6.s64 = 4;
	// add r10,r31,r11
	ctx.r10.u64 = r31.u64 + ctx.r11.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// bctrl 
	ctx.lr = 0x82387EC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_82387EC8:
	// li r6,12
	ctx.r6.s64 = 12;
	// b 0x82387ed4
	goto loc_82387ED4;
loc_82387ED0:
	// li r6,16
	ctx.r6.s64 = 16;
loc_82387ED4:
	// lwz r11,15932(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15932);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82387EEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82387EEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82392330) {
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
	ctx.lr = 0x82392338;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r9
	r16.u64 = ctx.r9.u64;
	// lwz r11,14892(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14892);
	// lwz r9,14888(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 14888);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,-21696
	ctx.r10.s64 = ctx.r10.s64 + -21696;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// addi r8,r11,178
	ctx.r8.s64 = ctx.r11.s64 + 178;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r6,r10,24
	ctx.r6.s64 = ctx.r10.s64 + 24;
	// mulli r9,r11,84
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(84));
	// lwzx r18,r7,r10
	r18.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwzx r19,r7,r6
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mulli r5,r8,84
	ctx.r5.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(84));
	// lwzx r14,r5,r31
	r14.u64 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + r31.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r26,14896(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 14896);
	// mr r24,r27
	r24.u64 = r27.u64;
	// lwz r25,14904(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 14904);
	// mr r21,r22
	r21.u64 = r22.u64;
	// lwz r23,14948(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 14948);
	// mr r15,r16
	r15.u64 = r16.u64;
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(r19.s32, 2, ctx.xer);
	// bne cr6,0x823923c4
	if (!ctx.cr6.eq) goto loc_823923C4;
	// addi r11,r26,31
	ctx.r11.s64 = r26.s64 + 31;
	// rlwinm r26,r11,0,0,26
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
loc_823923C4:
	// cmpwi cr6,r18,2
	ctx.cr6.compare<int32_t>(r18.s32, 2, ctx.xer);
	// bne cr6,0x823923d4
	if (!ctx.cr6.eq) goto loc_823923D4;
	// addi r11,r25,31
	ctx.r11.s64 = r25.s64 + 31;
	// rlwinm r25,r11,0,0,26
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
loc_823923D4:
	// lwz r11,3980(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823923ec
	if (ctx.cr6.eq) goto loc_823923EC;
	// srawi r20,r26,2
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x3) != 0);
	r20.s64 = r26.s32 >> 2;
	// mr r17,r25
	r17.u64 = r25.u64;
	// b 0x823923f4
	goto loc_823923F4;
loc_823923EC:
	// srawi r20,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	r20.s64 = r26.s32 >> 1;
	// srawi r17,r25,1
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x1) != 0);
	r17.s64 = r25.s32 >> 1;
loc_823923F4:
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(r19.s32, 2, ctx.xer);
	// bne cr6,0x8239246c
	if (!ctx.cr6.eq) goto loc_8239246C;
	// lwz r9,15876(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15876);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// lwz r11,15252(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15252);
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// stw r14,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r14.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stw r23,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r17,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// stw r9,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82392448;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r18,2
	ctx.cr6.compare<int32_t>(r18.s32, 2, ctx.xer);
	// bne cr6,0x823924ac
	if (!ctx.cr6.eq) goto loc_823924AC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r24,r30
	r24.u64 = r30.u64;
	// mr r21,r29
	r21.u64 = r29.u64;
	// mr r15,r28
	r15.u64 = r28.u64;
	// b 0x82392474
	goto loc_82392474;
loc_8239246C:
	// cmpwi cr6,r18,2
	ctx.cr6.compare<int32_t>(r18.s32, 2, ctx.xer);
	// bne cr6,0x823924ac
	if (!ctx.cr6.eq) goto loc_823924AC;
loc_82392474:
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// lwz r11,15252(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15252);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// lwz r30,15880(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 15880);
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// stw r14,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r14.u32);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// stw r23,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// stw r17,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// bctrl 
	ctx.lr = 0x823924AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823924AC:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x823924fc
	if (!ctx.cr6.gt) goto loc_823924FC;
	// mullw r7,r18,r23
	ctx.r7.s64 = int64_t(r18.s32) * int64_t(r23.s32);
loc_823924C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x823924e4
	if (!ctx.cr6.gt) goto loc_823924E4;
	// addi r9,r27,-1
	ctx.r9.s64 = r27.s64 + -1;
loc_823924D0:
	// lbzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + r19.u64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// stbu r6,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r9.u32 = ea;
	// blt cr6,0x823924d0
	if (ctx.cr6.lt) goto loc_823924D0;
loc_823924E4:
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// add r8,r8,r18
	ctx.r8.u64 = ctx.r8.u64 + r18.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r27,r27,r11
	r27.u64 = r27.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r25
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r25.s32, ctx.xer);
	// blt cr6,0x823924c0
	if (ctx.cr6.lt) goto loc_823924C0;
loc_823924FC:
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// ble cr6,0x82392550
	if (!ctx.cr6.gt) goto loc_82392550;
	// mullw r6,r18,r14
	ctx.r6.s64 = int64_t(r18.s32) * int64_t(r14.s32);
loc_82392514:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x82392538
	if (!ctx.cr6.gt) goto loc_82392538;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
loc_82392524:
	// lbzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + r19.u64;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r20.s32, ctx.xer);
	// stbu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r9.u32 = ea;
	// blt cr6,0x82392524
	if (ctx.cr6.lt) goto loc_82392524;
loc_82392538:
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// add r8,r8,r18
	ctx.r8.u64 = ctx.r8.u64 + r18.u64;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r17.s32, ctx.xer);
	// blt cr6,0x82392514
	if (ctx.cr6.lt) goto loc_82392514;
loc_82392550:
	// mr r10,r15
	ctx.r10.u64 = r15.u64;
	// mr r7,r16
	ctx.r7.u64 = r16.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// ble cr6,0x823925a4
	if (!ctx.cr6.gt) goto loc_823925A4;
	// mullw r6,r18,r14
	ctx.r6.s64 = int64_t(r18.s32) * int64_t(r14.s32);
loc_82392568:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x8239258c
	if (!ctx.cr6.gt) goto loc_8239258C;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
loc_82392578:
	// lbzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + r19.u64;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r20.s32, ctx.xer);
	// stbu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r9.u32 = ea;
	// blt cr6,0x82392578
	if (ctx.cr6.lt) goto loc_82392578;
loc_8239258C:
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// add r8,r8,r18
	ctx.r8.u64 = ctx.r8.u64 + r18.u64;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r17.s32, ctx.xer);
	// blt cr6,0x82392568
	if (ctx.cr6.lt) goto loc_82392568;
loc_823925A4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_82395BA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82395bb4
	if (ctx.cr6.lt) goto loc_82395BB4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82395bb8
	goto loc_82395BB8;
loc_82395BB4:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82395BB8:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x82395bc8
	if (!ctx.cr6.gt) goto loc_82395BC8;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82395bd4
	goto loc_82395BD4;
loc_82395BC8:
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82395bd4
	if (!ctx.cr6.gt) goto loc_82395BD4;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_82395BD4:
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82395be4
	if (!ctx.cr6.gt) goto loc_82395BE4;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82395bf0
	goto loc_82395BF0;
loc_82395BE4:
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82395bf0
	if (!ctx.cr6.gt) goto loc_82395BF0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82395BF0:
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82395c08
	if (ctx.cr6.lt) goto loc_82395C08;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82395C08:
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x82395c18
	if (!ctx.cr6.gt) goto loc_82395C18;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82395c24
	goto loc_82395C24;
loc_82395C18:
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82395c24
	if (!ctx.cr6.gt) goto loc_82395C24;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_82395C24:
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x82395c34
	if (!ctx.cr6.gt) goto loc_82395C34;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82395c40
	goto loc_82395C40;
loc_82395C34:
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82395c40
	if (!ctx.cr6.gt) goto loc_82395C40;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82395C40:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82395c50
	if (!ctx.cr6.gt) goto loc_82395C50;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82395c5c
	goto loc_82395C5C;
loc_82395C50:
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82395c5c
	if (!ctx.cr6.gt) goto loc_82395C5C;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82395C5C:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82395c6c
	if (!ctx.cr6.gt) goto loc_82395C6C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82395c78
	goto loc_82395C78;
loc_82395C6C:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82395c78
	if (!ctx.cr6.gt) goto loc_82395C78;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82395C78:
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subfc r10,r7,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r10.u64 = ctx.r11.u64 - ctx.r7.u64;
	// eqv r9,r7,r11
	ctx.r9.u64 = ~(ctx.r7.u64 ^ ctx.r11.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82398B20) {
	REX_FUNC_PROLOGUE();
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
	// li r10,16
	ctx.r10.s64 = 16;
	// lvlx128 v63,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r11,48
	ctx.r11.s64 = 48;
	// vspltish v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x3)));
	// li r9,32
	ctx.r9.s64 = 32;
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// li r8,64
	ctx.r8.s64 = 64;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// vspltish v5,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x2)));
	// lvlx128 v62,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltish v4,5
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_set1_epi16(short(0x5)));
	// lvrx128 v61,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vspltisw128 v60,1
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_set1_epi32(int(0x1)));
	// lvlx128 v59,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v10,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvrx128 v58,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vspltisw128 v57,3
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_set1_epi32(int(0x3)));
	// lvrx128 v56,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vspltisw128 v52,2
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_set1_epi32(int(0x2)));
	// lvrx128 v55,r8,r5
	temp.u32 = ctx.r8.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v12,v62,v56
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// lvlx128 v54,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v11,v59,v55
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vor128 v9,v54,v58
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisw128 v53,6
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_set1_epi32(int(0x6)));
	// vslh v3,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vadduhm v8,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v7,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsubuhm v10,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v2,v12,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v8,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v28,v3,v2
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v27,v31,v7
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v12,v1,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vslh v26,v11,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v29,v10
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v11,v13,v27
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v10,v12,v28
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vsubuhm v12,v12,v26
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v13,v13,v25
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v24,v11,v10
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubuhm v23,v11,v10
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v22,v13,v12
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vsubuhm v21,v13,v12
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vsrah v20,v24,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v23,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v22,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vupkhsb128 v47,v20,v96
	simde_mm_store_si128((simde__m128i*)ctx.v47.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v20.s16))));
	// vupkhsb128 v44,v19,v96
	simde_mm_store_si128((simde__m128i*)ctx.v44.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v19.s16))));
	// vupkhsb128 v46,v18,v96
	simde_mm_store_si128((simde__m128i*)ctx.v46.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v18.s16))));
	// vupkhsb128 v45,v17,v96
	simde_mm_store_si128((simde__m128i*)ctx.v45.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v17.s16))));
	// vupklsb128 v51,v20,v96
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vupklsb128 v50,v19,v96
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vupklsb128 v49,v18,v96
	simde_mm_store_si128((simde__m128i*)ctx.v49.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vupklsb128 v48,v17,v96
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vmrghw128 v41,v47,v45
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), simde_mm_load_si128((simde__m128i*)ctx.v47.u32)));
	// vmrghw128 v40,v46,v44
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// vmrglw128 v42,v49,v50
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// vmrglw128 v43,v51,v48
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// vmrghw128 v37,v51,v48
	simde_mm_store_si128((simde__m128i*)ctx.v37.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// vmrglw128 v13,v41,v40
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), simde_mm_load_si128((simde__m128i*)ctx.v41.u32)));
	// vmrghw128 v36,v49,v50
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// vmrglw128 v12,v43,v42
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.u32), simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// vmrglw128 v39,v47,v45
	simde_mm_store_si128((simde__m128i*)ctx.v39.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), simde_mm_load_si128((simde__m128i*)ctx.v47.u32)));
	// vmrglw128 v38,v46,v44
	simde_mm_store_si128((simde__m128i*)ctx.v38.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// vslw128 v7,v13,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vmrghw128 v35,v41,v40
	simde_mm_store_si128((simde__m128i*)ctx.v35.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), simde_mm_load_si128((simde__m128i*)ctx.v41.u32)));
	// vslw128 v15,v13,v52
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v52.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v6,v12,v57
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v57.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vmrglw128 v10,v37,v36
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v36.u32), simde_mm_load_si128((simde__m128i*)ctx.v37.u32)));
	// vaddsws v0,v13,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vmrghw128 v34,v37,v36
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v36.u32), simde_mm_load_si128((simde__m128i*)ctx.v37.u32)));
	// vmrglw128 v11,v39,v38
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.u32), simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// vaddsws v16,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v13,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vspltisw128 v33,5
	simde_mm_store_si128((simde__m128i*)ctx.v33.u32, simde_mm_set1_epi32(int(0x5)));
	// vslw128 v14,v35,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v35.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vmrghw128 v9,v39,v38
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.u32), simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// vslw128 v5,v35,v52
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v35.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v52.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vmrghw128 v8,v43,v42
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.u32), simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// vslw128 v4,v12,v52
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v52.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_sllv_epi32(a, shift));
	}
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// vslw128 v1,v13,v57
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v57.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_sllv_epi32(a, shift));
	}
	// li r9,4
	ctx.r9.s64 = 4;
	// vslw128 v3,v12,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_sllv_epi32(a, shift));
	}
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vaddsws v2,v15,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// vaddsws v30,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// vslw128 v7,v11,v57
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v57.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_sllv_epi32(a, shift));
	}
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// vslw128 v12,v10,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v31,v11,v52
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v52.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vsubsws v28,v1,v13
	temp.s64 = int64_t(ctx.v1.s32[0]) - int64_t(ctx.v13.s32[0]);
	v28.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[1]) - int64_t(ctx.v13.s32[1]);
	v28.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[2]) - int64_t(ctx.v13.s32[2]);
	v28.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[3]) - int64_t(ctx.v13.s32[3]);
	v28.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vslw128 v29,v10,v52
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v52.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v24,v5,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v27,v34,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v34.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v26,v34,v52
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v34.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v52.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v25,v60,v33
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v33.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v22,v6,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v23,v6,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v21,v11,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vor v6,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)v30.u8));
	// vaddsws v20,v12,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v19,v29,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v11,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v28.u8));
	// vaddsws v18,v7,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v12,v24,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v10,v26,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v17,v13,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v15,v8,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v14,v8,v52
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v52.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v3,v6,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v2,v6,v22
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(v22.s32[0]);
	ctx.v2.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(v22.s32[1]);
	ctx.v2.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(v22.s32[2]);
	ctx.v2.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(v22.s32[3]);
	ctx.v2.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v5,v11,v20
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(v20.s32[0]);
	ctx.v5.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(v20.s32[1]);
	ctx.v5.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(v20.s32[2]);
	ctx.v5.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(v20.s32[3]);
	ctx.v5.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v1,v11,v18
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(v18.s32[0]);
	ctx.v1.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(v18.s32[1]);
	ctx.v1.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(v18.s32[2]);
	ctx.v1.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(v18.s32[3]);
	ctx.v1.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v31,v7,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v11,v12,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v7,v12,v10
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v10.s32[0]);
	ctx.v7.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v10.s32[1]);
	ctx.v7.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v10.s32[2]);
	ctx.v7.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v10.s32[3]);
	ctx.v7.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vor v6,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)v17.u8));
	// vslw128 v12,v15,v57
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v57.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v30,v14,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v26,v9,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v28,v6,v19
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v27,v6,v31
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(v31.s32[0]);
	v27.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(v31.s32[1]);
	v27.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(v31.s32[2]);
	v27.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(v31.s32[3]);
	v27.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v6,v3,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v8,v12,v30
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(v30.s32[0]);
	ctx.v8.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(v30.s32[1]);
	ctx.v8.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(v30.s32[2]);
	ctx.v8.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(v30.s32[3]);
	ctx.v8.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v13,v13,v60
	ctx.v13.s32[0] = ctx.v13.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v13.s32[1] = ctx.v13.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v13.s32[2] = ctx.v13.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v13.s32[3] = ctx.v13.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vslw128 v29,v0,v57
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v57.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v25,v9,v57
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v57.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v24,v26,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v10,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v9,v11,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v5,v29,v0
	temp.s64 = int64_t(v29.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v5.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v29.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v5.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v29.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v5.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v29.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v5.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v0,v0,v60
	ctx.v0.s32[0] = ctx.v0.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v0.s32[1] = ctx.v0.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v0.s32[2] = ctx.v0.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v0.s32[3] = ctx.v0.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vsubsws v6,v11,v8
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v8.s32[0]);
	ctx.v6.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v8.s32[1]);
	ctx.v6.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v8.s32[2]);
	ctx.v6.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v8.s32[3]);
	ctx.v6.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v22,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v4,v5,v23
	temp.s64 = int64_t(ctx.v5.s32[0]) - int64_t(v23.s32[0]);
	ctx.v4.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[1]) - int64_t(v23.s32[1]);
	ctx.v4.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[2]) - int64_t(v23.s32[2]);
	ctx.v4.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[3]) - int64_t(v23.s32[3]);
	ctx.v4.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v23,v25,v24
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v5,v5,v16
	temp.s64 = int64_t(ctx.v5.s32[0]) - int64_t(v16.s32[0]);
	ctx.v5.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[1]) - int64_t(v16.s32[1]);
	ctx.v5.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[2]) - int64_t(v16.s32[2]);
	ctx.v5.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[3]) - int64_t(v16.s32[3]);
	ctx.v5.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v32,v22,v53
	ctx.v32.s32[0] = v22.s32[0] >> (ctx.v53.u8[0] & 0x1F);
	ctx.v32.s32[1] = v22.s32[1] >> (ctx.v53.u8[4] & 0x1F);
	ctx.v32.s32[2] = v22.s32[2] >> (ctx.v53.u8[8] & 0x1F);
	ctx.v32.s32[3] = v22.s32[3] >> (ctx.v53.u8[12] & 0x1F);
	// vsubsws v4,v4,v28
	temp.s64 = int64_t(ctx.v4.s32[0]) - int64_t(v28.s32[0]);
	ctx.v4.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v4.s32[1]) - int64_t(v28.s32[1]);
	ctx.v4.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v4.s32[2]) - int64_t(v28.s32[2]);
	ctx.v4.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v4.s32[3]) - int64_t(v28.s32[3]);
	ctx.v4.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v12,v12,v23
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(v23.s32[0]);
	ctx.v12.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(v23.s32[1]);
	ctx.v12.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(v23.s32[2]);
	ctx.v12.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(v23.s32[3]);
	ctx.v12.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v5,v5,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vpkswss128 v63,v32,v32
	simde_mm_store_si128((simde__m128i*)ctx.v63.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.s32), simde_mm_load_si128((simde__m128i*)ctx.v32.s32)));
	// vaddsws v3,v2,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v11,v4,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v8,v7,v12
	temp.s64 = int64_t(ctx.v7.s32[0]) - int64_t(ctx.v12.s32[0]);
	ctx.v8.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v7.s32[1]) - int64_t(ctx.v12.s32[1]);
	ctx.v8.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v7.s32[2]) - int64_t(ctx.v12.s32[2]);
	ctx.v8.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v7.s32[3]) - int64_t(ctx.v12.s32[3]);
	ctx.v8.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v0,v5,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v12,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v13,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v21,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// stvewx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddsws v20,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsraw128 v62,v21,v53
	ctx.v62.s32[0] = v21.s32[0] >> (ctx.v53.u8[0] & 0x1F);
	ctx.v62.s32[1] = v21.s32[1] >> (ctx.v53.u8[4] & 0x1F);
	ctx.v62.s32[2] = v21.s32[2] >> (ctx.v53.u8[8] & 0x1F);
	ctx.v62.s32[3] = v21.s32[3] >> (ctx.v53.u8[12] & 0x1F);
	// stvewx128 v63,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// vsraw128 v61,v20,v53
	ctx.v61.s32[0] = v20.s32[0] >> (ctx.v53.u8[0] & 0x1F);
	ctx.v61.s32[1] = v20.s32[1] >> (ctx.v53.u8[4] & 0x1F);
	ctx.v61.s32[2] = v20.s32[2] >> (ctx.v53.u8[8] & 0x1F);
	ctx.v61.s32[3] = v20.s32[3] >> (ctx.v53.u8[12] & 0x1F);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vaddsws v19,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v18,v6,v13
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(ctx.v13.s32[0]);
	v18.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(ctx.v13.s32[1]);
	v18.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(ctx.v13.s32[2]);
	v18.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(ctx.v13.s32[3]);
	v18.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vpkswss128 v58,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v58.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.s32), simde_mm_load_si128((simde__m128i*)ctx.v62.s32)));
	// vsubsws v17,v12,v0
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v0.s32[0]);
	v17.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v0.s32[1]);
	v17.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v0.s32[2]);
	v17.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v0.s32[3]);
	v17.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vpkswss128 v57,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v57.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.s32), simde_mm_load_si128((simde__m128i*)ctx.v61.s32)));
	// vsubsws v16,v8,v11
	temp.s64 = int64_t(ctx.v8.s32[0]) - int64_t(ctx.v11.s32[0]);
	v16.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[1]) - int64_t(ctx.v11.s32[1]);
	v16.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[2]) - int64_t(ctx.v11.s32[2]);
	v16.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[3]) - int64_t(ctx.v11.s32[3]);
	v16.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v60,v19,v53
	ctx.v60.s32[0] = v19.s32[0] >> (ctx.v53.u8[0] & 0x1F);
	ctx.v60.s32[1] = v19.s32[1] >> (ctx.v53.u8[4] & 0x1F);
	ctx.v60.s32[2] = v19.s32[2] >> (ctx.v53.u8[8] & 0x1F);
	ctx.v60.s32[3] = v19.s32[3] >> (ctx.v53.u8[12] & 0x1F);
	// vsraw128 v59,v18,v53
	ctx.v59.s32[0] = v18.s32[0] >> (ctx.v53.u8[0] & 0x1F);
	ctx.v59.s32[1] = v18.s32[1] >> (ctx.v53.u8[4] & 0x1F);
	ctx.v59.s32[2] = v18.s32[2] >> (ctx.v53.u8[8] & 0x1F);
	ctx.v59.s32[3] = v18.s32[3] >> (ctx.v53.u8[12] & 0x1F);
	// vsraw128 v54,v17,v53
	ctx.v54.s32[0] = v17.s32[0] >> (ctx.v53.u8[0] & 0x1F);
	ctx.v54.s32[1] = v17.s32[1] >> (ctx.v53.u8[4] & 0x1F);
	ctx.v54.s32[2] = v17.s32[2] >> (ctx.v53.u8[8] & 0x1F);
	ctx.v54.s32[3] = v17.s32[3] >> (ctx.v53.u8[12] & 0x1F);
	// vsraw128 v52,v16,v53
	ctx.v52.s32[0] = v16.s32[0] >> (ctx.v53.u8[0] & 0x1F);
	ctx.v52.s32[1] = v16.s32[1] >> (ctx.v53.u8[4] & 0x1F);
	ctx.v52.s32[2] = v16.s32[2] >> (ctx.v53.u8[8] & 0x1F);
	ctx.v52.s32[3] = v16.s32[3] >> (ctx.v53.u8[12] & 0x1F);
	// vpkswss128 v56,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v56.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.s32), simde_mm_load_si128((simde__m128i*)ctx.v60.s32)));
	// vsubsws v15,v9,v10
	temp.s64 = int64_t(ctx.v9.s32[0]) - int64_t(ctx.v10.s32[0]);
	v15.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[1]) - int64_t(ctx.v10.s32[1]);
	v15.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[2]) - int64_t(ctx.v10.s32[2]);
	v15.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[3]) - int64_t(ctx.v10.s32[3]);
	v15.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// stvewx128 v58,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkswss128 v55,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v55.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.s32), simde_mm_load_si128((simde__m128i*)ctx.v59.s32)));
	// stvewx128 v58,r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stvewx128 v57,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// vpkswss128 v50,v54,v54
	simde_mm_store_si128((simde__m128i*)ctx.v50.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.s32), simde_mm_load_si128((simde__m128i*)ctx.v54.s32)));
	// vsraw128 v51,v15,v53
	ctx.v51.s32[0] = v15.s32[0] >> (ctx.v53.u8[0] & 0x1F);
	ctx.v51.s32[1] = v15.s32[1] >> (ctx.v53.u8[4] & 0x1F);
	ctx.v51.s32[2] = v15.s32[2] >> (ctx.v53.u8[8] & 0x1F);
	ctx.v51.s32[3] = v15.s32[3] >> (ctx.v53.u8[12] & 0x1F);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// vpkswss128 v49,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v49.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.s32), simde_mm_load_si128((simde__m128i*)ctx.v52.s32)));
	// subf r7,r11,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r11.u64;
	// stvewx128 v57,r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// add r8,r6,r10
	ctx.r8.u64 = ctx.r6.u64 + ctx.r10.u64;
	// stvewx128 v56,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkswss128 v48,v51,v51
	simde_mm_store_si128((simde__m128i*)ctx.v48.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.s32), simde_mm_load_si128((simde__m128i*)ctx.v51.s32)));
	// stvewx128 v56,r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// add r8,r5,r10
	ctx.r8.u64 = ctx.r5.u64 + ctx.r10.u64;
	// stvewx128 v55,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v55,r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stvewx128 v50,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v50,r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v49,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v49,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stvewx128 v48,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v48.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v48,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v48.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D7900) {
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
	ctx.lr = 0x823D7908;
	// mullw r11,r6,r7
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r26,r11,r4
	r26.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r26.u32, ctx.xer);
	// bge cr6,0x823d79ec
	if (!ctx.cr6.lt) goto loc_823D79EC;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r7,1,0,30
	r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r11,r4
	r28.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_823D7924:
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r28.u32, ctx.xer);
	// bge cr6,0x823d79d8
	if (!ctx.cr6.lt) goto loc_823D79D8;
	// subf r10,r4,r28
	ctx.r10.u64 = r28.u64 - ctx.r4.u64;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r29,r7,-4
	r29.s64 = ctx.r7.s64 + -4;
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823D794C:
	// lwzx r31,r29,r11
	r31.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r6,r31,30,2,25
	ctx.r6.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFC0;
	// lwzx r25,r11,r7
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r5,r9,30,2,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFC0;
	// lwz r24,0(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,0,18,9
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFC03FFF;
	// rlwinm r5,r5,0,18,9
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFC03FFF;
	// clrlwi r9,r9,8
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFFFF;
	// clrlwi r30,r31,8
	r30.u64 = r31.u32 & 0xFFFFFF;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// rlwinm r9,r9,0,24,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r30,r30,0,24,15
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r31,r25,30,2,25
	r31.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 30) & 0x3FFFFFC0;
	// clrlwi r6,r25,8
	ctx.r6.u64 = r25.u32 & 0xFFFFFF;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// rlwinm r6,r6,0,24,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r31,r31,0,18,9
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFC03FFF;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// rlwinm r31,r24,30,2,25
	r31.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 30) & 0x3FFFFFC0;
	// clrlwi r6,r24,8
	ctx.r6.u64 = r24.u32 & 0xFFFFFF;
	// rlwinm r31,r31,0,18,9
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFC03FFF;
	// rlwinm r6,r6,0,24,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addis r6,r5,128
	ctx.r6.s64 = ctx.r5.s64 + 8388608;
	// addis r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 131072;
	// addi r6,r6,128
	ctx.r6.s64 = ctx.r6.s64 + 128;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwimi r6,r9,30,24,31
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0xFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFF00);
	// rlwimi r6,r9,30,8,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0xFF0000) | (ctx.r6.u64 & 0xFFFFFFFFFF00FFFF);
	// stwu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823d794c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D794C;
loc_823D79D8:
	// add r4,r27,r4
	ctx.r4.u64 = r27.u64 + ctx.r4.u64;
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r28,r28,r27
	r28.u64 = r28.u64 + r27.u64;
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r26.u32, ctx.xer);
	// blt cr6,0x823d7924
	if (ctx.cr6.lt) goto loc_823D7924;
loc_823D79EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_823D8698) {
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
	ctx.lr = 0x823D86A0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,11(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 11);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x823d86c0
	if (ctx.cr6.eq) goto loc_823D86C0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x823d88ac
	goto loc_823D88AC;
loc_823D86C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x823cd118
	ctx.lr = 0x823D86D4;
	sub_823CD118(ctx, base);
	// mr. r20,r3
	r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne 0x823d86e8
	if (!ctx.cr0.eq) goto loc_823D86E8;
loc_823D86DC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823d88ac
	goto loc_823D88AC;
loc_823D86E8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x823cd118
	ctx.lr = 0x823D86FC;
	sub_823CD118(ctx, base);
	// mr. r18,r3
	r18.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bne 0x823d8714
	if (!ctx.cr0.eq) goto loc_823D8714;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x823cd250
	ctx.lr = 0x823D8710;
	sub_823CD250(ctx, base);
	// b 0x823d86dc
	goto loc_823D86DC;
loc_823D8714:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r19,0
	r19.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823d8744
	if (ctx.cr6.eq) goto loc_823D8744;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823d8744
	if (ctx.cr6.eq) goto loc_823D8744;
	// stw r19,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r19.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r19,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r19.u32);
loc_823D8744:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r24,r19
	r24.u64 = r19.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r26,r19
	r26.u64 = r19.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r8,104(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// lwz r7,108(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// lwz r6,104(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// rlwinm r8,r8,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// lwz r10,112(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// lwz r5,108(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 108);
	// divwu r23,r8,r6
	r23.u64 = uint32_t(ctx.r6.u32 ? ctx.r8.u32 / ctx.r6.u32 : 0);
	// lwz r9,112(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 112);
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lwz r8,112(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r22,r7,r5
	r22.u64 = uint32_t(ctx.r5.u32 ? ctx.r7.u32 / ctx.r5.u32 : 0);
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r21,r10,r9
	r21.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x823d8890
	if (!ctx.cr6.gt) goto loc_823D8890;
loc_823D87A0:
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mr r30,r19
	r30.u64 = r19.u64;
	// mr r27,r19
	r27.u64 = r19.u64;
	// li r25,-1
	r25.s64 = -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x823d887c
	if (!ctx.cr6.gt) goto loc_823D887C;
loc_823D87B8:
	// xor r11,r25,r30
	ctx.r11.u64 = r25.u64 ^ r30.u64;
	// mr r28,r19
	r28.u64 = r19.u64;
	// rlwinm. r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r19
	r29.u64 = r19.u64;
	// beq 0x823d87f0
	if (ctx.cr0.eq) goto loc_823D87F0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// rlwinm r5,r24,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 16) & 0xFFFF;
	// rlwinm r4,r30,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 16) & 0xFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D87EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r30
	r25.u64 = r30.u64;
loc_823D87F0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823d8844
	if (!ctx.cr6.gt) goto loc_823D8844;
	// addi r11,r18,-4
	ctx.r11.s64 = r18.s64 + -4;
loc_823D8804:
	// rlwinm r10,r28,20,12,27
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 20) & 0xFFFF0;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r10,r10,r20
	ctx.r10.u64 = ctx.r10.u64 + r20.u64;
	// add r28,r28,r23
	r28.u64 = r28.u64 + r23.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,104(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823d8804
	if (ctx.cr6.lt) goto loc_823D8804;
loc_823D8844:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D8864;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// add r30,r30,r22
	r30.u64 = r30.u64 + r22.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823d87b8
	if (ctx.cr6.lt) goto loc_823D87B8;
loc_823D887C:
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// add r24,r24,r21
	r24.u64 = r24.u64 + r21.u64;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823d87a0
	if (ctx.cr6.lt) goto loc_823D87A0;
loc_823D8890:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x823cd250
	ctx.lr = 0x823D889C;
	sub_823CD250(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x823cd250
	ctx.lr = 0x823D88A8;
	sub_823CD250(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823D88AC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_823E1390) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e7c
	ctx.lr = 0x823E1398;
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e13cc
	if (ctx.cr6.eq) goto loc_823E13CC;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x823E13C8;
	sub_82413040(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_823E13CC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e13e8
	if (ctx.cr6.eq) goto loc_823E13E8;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc0b0
	ctx.lr = 0x823E13E4;
	sub_823DC0B0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_823E13E8:
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
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r10,r6
	r28.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r26,r9,r5
	r26.u64 = ctx.r9.u64 + ctx.r5.u64;
	// bne 0x823e1450
	if (!ctx.cr0.eq) goto loc_823E1450;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x823e1458
	goto loc_823E1458;
loc_823E1450:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_823E1458:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e1470
	if (ctx.cr6.eq) goto loc_823E1470;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x823E1470;
	sub_823DC658(ctx, base);
loc_823E1470:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823e1674
	if (!ctx.cr6.gt) goto loc_823E1674;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// rlwinm r27,r30,2,0,29
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r11,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r30,r27,r28
	r30.u64 = r28.u64 - r27.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r29,-32254
	r29.s64 = -2113798144;
	// lis r28,-32254
	r28.s64 = -2113798144;
	// lfd f8,-9120(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + -9120);
	// lfs f9,16288(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16288);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,-7224(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -7224);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,17176(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17176);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,23268(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 23268);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,-6656(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + -6656);
	ctx.f7.f64 = double(temp.f32);
loc_823E14D0:
	// add r11,r10,r25
	ctx.r11.u64 = ctx.r10.u64 + r25.u64;
	// lfsx f0,r10,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// rlwinm r9,r4,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xC;
	// lwz r8,92(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + f30.f64));
	// lfsx f6,r9,r26
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + r26.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fadds f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// fadds f6,f13,f6
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// fctiwz f5,f5
	ctx.f5.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f6,f6
	ctx.f6.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x823e15f8
	if (ctx.cr6.eq) goto loc_823E15F8;
	// extsw r8,r5
	ctx.r8.s64 = ctx.r5.s32;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r29,r9
	r29.s64 = ctx.r9.s32;
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f6,88(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r29,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, r29.u64);
	// lfd f5,96(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// lfs f4,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// fsubs f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fsubs f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// fmadds f6,f0,f11,f4
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f4.f64)));
	// stfs f6,16(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f6,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f6,f0,f10,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f6.f64)));
	// stfs f6,16(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lfs f6,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmadds f6,f0,f9,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f6.f64)));
	// stfs f6,16(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// fmul f0,f0,f8
	ctx.f0.f64 = ctx.f0.f64 * ctx.f8.f64;
	// lfs f6,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f6,f13,f11,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f6.f64)));
	// stfs f6,20(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f6,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmul f5,f13,f8
	ctx.f5.f64 = ctx.f13.f64 * ctx.f8.f64;
	// fmadds f6,f13,f10,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f6.f64)));
	// stfs f6,20(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// frsp f31,f0
	f31.f64 = double(float(ctx.f0.f64));
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f13,f9,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, ctx.f0.f64)));
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// frsp f30,f5
	f30.f64 = double(float(ctx.f5.f64));
loc_823E15F8:
	// cmpwi cr6,r9,32767
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32767, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt cr6,0x823e1608
	if (ctx.cr6.lt) goto loc_823E1608;
	// li r11,32767
	ctx.r11.s64 = 32767;
loc_823E1608:
	// cmpwi cr6,r11,-32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32767, ctx.xer);
	// ble cr6,0x823e1620
	if (!ctx.cr6.gt) goto loc_823E1620;
	// cmpwi cr6,r9,32767
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32767, ctx.xer);
	// blt cr6,0x823e1624
	if (ctx.cr6.lt) goto loc_823E1624;
	// li r9,32767
	ctx.r9.s64 = 32767;
	// b 0x823e1624
	goto loc_823E1624;
loc_823E1620:
	// li r9,-32767
	ctx.r9.s64 = -32767;
loc_823E1624:
	// cmpwi cr6,r5,32767
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 32767, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x823e1634
	if (ctx.cr6.lt) goto loc_823E1634;
	// li r11,32767
	ctx.r11.s64 = 32767;
loc_823E1634:
	// cmpwi cr6,r11,-32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32767, ctx.xer);
	// ble cr6,0x823e164c
	if (!ctx.cr6.gt) goto loc_823E164C;
	// cmpwi cr6,r5,32767
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 32767, ctx.xer);
	// blt cr6,0x823e1650
	if (ctx.cr6.lt) goto loc_823E1650;
	// li r5,32767
	ctx.r5.s64 = 32767;
	// b 0x823e1650
	goto loc_823E1650;
loc_823E164C:
	// li r5,-32767
	ctx.r5.s64 = -32767;
loc_823E1650:
	// rlwimi r9,r5,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwux r9,r30,r27
	ea = r30.u32 + r27.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	r30.u32 = ea;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 + ctx.r6.u64;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823e14d0
	if (ctx.cr6.lt) goto loc_823E14D0;
loc_823E1674:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_823E5238) {
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
	ctx.lr = 0x823E5240;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f38
	ctx.lr = 0x823E5248;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823e5274
	if (!ctx.cr6.eq) goto loc_823E5274;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823e5680
	goto loc_823E5680;
loc_823E5274:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823e52a4
	if (ctx.cr6.lt) goto loc_823E52A4;
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823e52a4
	if (!ctx.cr6.lt) goto loc_823E52A4;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823e52a4
	if (ctx.cr6.lt) goto loc_823E52A4;
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823e567c
	if (ctx.cr6.lt) goto loc_823E567C;
loc_823E52A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e4f08
	ctx.lr = 0x823E52AC;
	sub_823E4F08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823e5680
	if (ctx.cr0.lt) goto loc_823E5680;
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// stw r30,136(r31)
	REX_STORE_U32(r31.u32 + 136, r30.u32);
	// addi r10,r29,1
	ctx.r10.s64 = r29.s64 + 1;
	// stw r29,148(r31)
	REX_STORE_U32(r31.u32 + 148, r29.u32);
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r10,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r10.u32);
	// beq cr6,0x823e567c
	if (ctx.cr6.eq) goto loc_823E567C;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lis r5,6184
	ctx.r5.s64 = 405274624;
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// mullw r9,r11,r30
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r6,128(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 128);
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r5,r5,75
	ctx.r5.u64 = ctx.r5.u64 | 75;
	// rlwinm r10,r4,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// blt cr6,0x823e567c
	if (ctx.cr6.lt) goto loc_823E567C;
	// lis r8,6184
	ctx.r8.s64 = 405274624;
	// ori r8,r8,76
	ctx.r8.u64 = ctx.r8.u64 | 76;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x823e559c
	if (!ctx.cr6.gt) goto loc_823E559C;
	// lis r8,6688
	ctx.r8.s64 = 438304768;
	// ori r8,r8,74
	ctx.r8.u64 = ctx.r8.u64 | 74;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x823e567c
	if (!ctx.cr6.gt) goto loc_823E567C;
	// lis r8,6688
	ctx.r8.s64 = 438304768;
	// ori r8,r8,76
	ctx.r8.u64 = ctx.r8.u64 | 76;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x823e567c
	if (ctx.cr6.gt) goto loc_823E567C;
	// lwz r8,140(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 140);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x823e567c
	if (!ctx.cr6.lt) goto loc_823E567C;
	// addi r11,r6,-8
	ctx.r11.s64 = ctx.r6.s64 + -8;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// lfs f11,1996(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f11.f64 = double(temp.f32);
	// lis r3,-32249
	ctx.r3.s64 = -2113470464;
	// lfs f12,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lfs f29,-7156(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -7156);
	f29.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f30,-7160(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -7160);
	f30.f64 = double(temp.f32);
	// lfs f31,-7164(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -7164);
	f31.f64 = double(temp.f32);
	// lfs f4,-7168(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + -7168);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,-7172(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -7172);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,28452(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 28452);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,-8492(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -8492);
	ctx.f3.f64 = double(temp.f32);
loc_823E53A4:
	// lhz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r7,2(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// rlwinm r4,r8,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// rlwinm r6,r8,8,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00;
	// lwz r5,168(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 168);
	// rlwinm r29,r7,8,16,23
	r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF00;
	// stfs f12,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// rlwinm r28,r7,24,8,31
	r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// or r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 | ctx.r4.u64;
	// or r4,r29,r28
	ctx.r4.u64 = r29.u64 | r28.u64;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r30,r8,8,16,23
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00;
	// srw r4,r4,r3
	ctx.r4.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r3.u8 & 0x3F));
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// std r4,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// or r8,r30,r8
	ctx.r8.u64 = r30.u64 | ctx.r8.u64;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// srw r8,r8,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r3.u8 & 0x3F));
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// srw r6,r6,r5
	ctx.r6.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r5.u8 & 0x3F));
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// rlwinm r8,r7,8,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF00;
	// rlwinm r7,r7,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// srw r8,r8,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r5.u8 & 0x3F));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// std r8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f9,104(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fsubs f0,f0,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// fsubs f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// fsubs f10,f10,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f2.f64));
	// fsubs f5,f9,f3
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// fmuls f28,f0,f4
	f28.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f9,f13,f31
	ctx.f9.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f8,f10,f1
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f6,f13,f29
	ctx.f6.f64 = double(float(ctx.f13.f64 * f29.f64));
	// fmuls f7,f10,f30
	ctx.f7.f64 = double(float(ctx.f10.f64 * f30.f64));
	// fsubs f13,f28,f9
	ctx.f13.f64 = double(float(f28.f64 - ctx.f9.f64));
	// fadds f0,f28,f8
	ctx.f0.f64 = double(float(f28.f64 + ctx.f8.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fadds f10,f6,f28
	ctx.f10.f64 = double(float(ctx.f6.f64 + f28.f64));
	// stfs f10,16(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fsubs f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x823e54b0
	if (!ctx.cr6.lt) goto loc_823E54B0;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x823e54bc
	goto loc_823E54BC;
loc_823E54B0:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x823e54bc
	if (!ctx.cr6.gt) goto loc_823E54BC;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_823E54BC:
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x823e54d0
	if (!ctx.cr6.lt) goto loc_823E54D0;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// b 0x823e54dc
	goto loc_823E54DC;
loc_823E54D0:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x823e54dc
	if (!ctx.cr6.gt) goto loc_823E54DC;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_823E54DC:
	// stfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x823e54f0
	if (!ctx.cr6.lt) goto loc_823E54F0;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// b 0x823e54fc
	goto loc_823E54FC;
loc_823E54F0:
	// fcmpu cr6,f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// ble cr6,0x823e54fc
	if (!ctx.cr6.gt) goto loc_823E54FC;
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
loc_823E54FC:
	// fmuls f13,f5,f4
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// stfs f10,16(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// fsubs f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fadds f0,f13,f8
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fadds f10,f13,f6
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// stfs f10,32(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fsubs f13,f9,f7
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x823e5534
	if (!ctx.cr6.lt) goto loc_823E5534;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x823e5540
	goto loc_823E5540;
loc_823E5534:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x823e5540
	if (!ctx.cr6.gt) goto loc_823E5540;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_823E5540:
	// stfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x823e5554
	if (!ctx.cr6.lt) goto loc_823E5554;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// b 0x823e5560
	goto loc_823E5560;
loc_823E5554:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x823e5560
	if (!ctx.cr6.gt) goto loc_823E5560;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_823E5560:
	// stfs f13,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x823e5574
	if (!ctx.cr6.lt) goto loc_823E5574;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// b 0x823e5580
	goto loc_823E5580;
loc_823E5574:
	// fcmpu cr6,f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// ble cr6,0x823e5580
	if (!ctx.cr6.gt) goto loc_823E5580;
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
loc_823E5580:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stfsu f10,32(r11)
	ctx.fpscr.disableFlushMode();
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lwz r8,140(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823e53a4
	if (ctx.cr6.lt) goto loc_823E53A4;
	// b 0x823e567c
	goto loc_823E567C;
loc_823E559C:
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 140);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823e567c
	if (!ctx.cr6.lt) goto loc_823E567C;
	// addi r10,r9,-2
	ctx.r10.s64 = ctx.r9.s64 + -2;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// lfs f0,-13044(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -13044);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
loc_823E55C4:
	// lwz r6,168(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 168);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// lwz r4,172(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lhz r7,2(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// lhzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// srw r5,r7,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// stfs f13,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// srw r3,r9,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r4.u8 & 0x3F));
	// srw r7,r7,r4
	ctx.r7.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r4.u8 & 0x3F));
	// srw r9,r9,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// std r5,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f9,80(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// std r4,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsu f13,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823e55c4
	if (ctx.cr6.lt) goto loc_823E55C4;
loc_823E567C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E5680:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f84
	ctx.lr = 0x823E568C;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823F66A0) {
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
	ctx.lr = 0x823F66A8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,424(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 424);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823f6410
	ctx.lr = 0x823F66B8;
	sub_823F6410(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r5,1408
	ctx.r5.s64 = 1408;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823F66D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r3,256
	r30.s64 = ctx.r3.s64 + 256;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,328(r31)
	REX_STORE_U32(r31.u32 + 328, r30.u32);
	// addi r3,r30,-256
	ctx.r3.s64 = r30.s64 + -256;
	// bl 0x822d5870
	ctx.lr = 0x823F66EC;
	sub_822D5870(ctx, base);
	// li r10,256
	ctx.r10.s64 = 256;
	// li r28,0
	r28.s64 = 0;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823F66FC:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stbx r10,r11,r30
	REX_STORE_U8(ctx.r11.u32 + r30.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823f66fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F66FC;
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
	// li r10,384
	ctx.r10.s64 = 384;
	// addi r11,r30,128
	ctx.r11.s64 = r30.s64 + 128;
	// li r9,255
	ctx.r9.s64 = 255;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823F6724:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x823f6724
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F6724;
	// li r5,384
	ctx.r5.s64 = 384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,512
	ctx.r3.s64 = r30.s64 + 512;
	// bl 0x822d5870
	ctx.lr = 0x823F673C;
	sub_822D5870(ctx, base);
	// addi r3,r30,896
	ctx.r3.s64 = r30.s64 + 896;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r4,328(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 328);
	// bl 0x822d4fa0
	ctx.lr = 0x823F674C;
	sub_822D4FA0(ctx, base);
	// stw r28,12(r27)
	REX_STORE_U32(r27.u32 + 12, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f6348
	ctx.lr = 0x823F6758;
	sub_823F6348(ctx, base);
	// stw r3,16(r27)
	REX_STORE_U32(r27.u32 + 16, ctx.r3.u32);
	// stw r28,20(r27)
	REX_STORE_U32(r27.u32 + 20, r28.u32);
	// stw r28,24(r27)
	REX_STORE_U32(r27.u32 + 24, r28.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f677c
	if (ctx.cr6.eq) goto loc_823F677C;
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823f6788
	if (!ctx.cr6.eq) goto loc_823F6788;
loc_823F677C:
	// stw r28,100(r31)
	REX_STORE_U32(r31.u32 + 100, r28.u32);
	// stw r28,104(r31)
	REX_STORE_U32(r31.u32 + 104, r28.u32);
	// stw r28,108(r31)
	REX_STORE_U32(r31.u32 + 108, r28.u32);
loc_823F6788:
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f683c
	if (ctx.cr6.eq) goto loc_823F683C;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f67c0
	if (ctx.cr6.eq) goto loc_823F67C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,47
	ctx.r10.s64 = 47;
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
	ctx.lr = 0x823F67C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F67C0:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823f6860
	if (ctx.cr6.eq) goto loc_823F6860;
	// stw r28,104(r31)
	REX_STORE_U32(r31.u32 + 104, r28.u32);
	// stw r28,108(r31)
	REX_STORE_U32(r31.u32 + 108, r28.u32);
	// stw r28,136(r31)
	REX_STORE_U32(r31.u32 + 136, r28.u32);
loc_823F67D8:
	// stw r29,100(r31)
	REX_STORE_U32(r31.u32 + 100, r29.u32);
loc_823F67DC:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// li r30,48
	r30.s64 = 48;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f6808
	if (ctx.cr6.eq) goto loc_823F6808;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r30.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823F6808;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F6808:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823f6820
	if (!ctx.cr6.eq) goto loc_823F6820;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f683c
	if (ctx.cr6.eq) goto loc_823F683C;
loc_823F6820:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r30.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823F683C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F683C:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823f68a0
	if (!ctx.cr6.eq) goto loc_823F68A0;
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f6888
	if (ctx.cr6.eq) goto loc_823F6888;
	// bl 0x823ffae0
	ctx.lr = 0x823F685C;
	sub_823FFAE0(ctx, base);
	// b 0x823f6894
	goto loc_823F6894;
loc_823F6860:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f6874
	if (ctx.cr6.eq) goto loc_823F6874;
	// stw r29,104(r31)
	REX_STORE_U32(r31.u32 + 104, r29.u32);
	// b 0x823f67dc
	goto loc_823F67DC;
loc_823F6874:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f67d8
	if (ctx.cr6.eq) goto loc_823F67D8;
	// stw r29,108(r31)
	REX_STORE_U32(r31.u32 + 108, r29.u32);
	// b 0x823f67dc
	goto loc_823F67DC;
loc_823F6888:
	// bl 0x823ff258
	ctx.lr = 0x823F688C;
	sub_823FF258(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823fe400
	ctx.lr = 0x823F6894;
	sub_823FE400(ctx, base);
loc_823F6894:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 108);
	// bl 0x823fdd88
	ctx.lr = 0x823F68A0;
	sub_823FDD88(ctx, base);
loc_823F68A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823fdb98
	ctx.lr = 0x823F68A8;
	sub_823FDB98(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f68d4
	if (ctx.cr6.eq) goto loc_823F68D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r29.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823F68D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f68f0
	goto loc_823F68F0;
loc_823F68D4:
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f68ec
	if (ctx.cr6.eq) goto loc_823F68EC;
	// bl 0x823fd6b8
	ctx.lr = 0x823F68E8;
	sub_823FD6B8(ctx, base);
	// b 0x823f68f0
	goto loc_823F68F0;
loc_823F68EC:
	// bl 0x823fc890
	ctx.lr = 0x823F68F0;
	sub_823FC890(ctx, base);
loc_823F68F0:
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 440);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823f6910
	if (!ctx.cr6.eq) goto loc_823F6910;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f6914
	if (ctx.cr6.eq) goto loc_823F6914;
loc_823F6910:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_823F6914:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823fba80
	ctx.lr = 0x823F691C;
	sub_823FBA80(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823f6934
	if (!ctx.cr6.eq) goto loc_823F6934;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823fa830
	ctx.lr = 0x823F6934;
	sub_823FA830(ctx, base);
loc_823F6934:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823F6948;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,440(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 440);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823F695C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823f69e4
	if (ctx.cr6.eq) goto loc_823F69E4;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823f69e4
	if (!ctx.cr6.eq) goto loc_823F69E4;
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 440);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823f69e4
	if (ctx.cr6.eq) goto loc_823F69E4;
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// beq cr6,0x823f69a0
	if (ctx.cr6.eq) goto loc_823F69A0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_823F69A0:
	// stw r28,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, r28.u32);
	// lwz r10,324(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 324);
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r9,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r28,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, r28.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r5,108(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// xori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 ^ 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,16(r6)
	REX_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,12(r27)
	REX_STORE_U32(r27.u32 + 12, ctx.r10.u32);
loc_823F69E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82403AD0) {
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
	ctx.lr = 0x82403AD8;
	// li r27,0
	r27.s64 = 0;
	// stw r5,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// stw r6,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// addi r31,r3,-4
	r31.s64 = ctx.r3.s64 + -4;
	// stw r7,52(r1)
	REX_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r8,60(r1)
	REX_STORE_U32(ctx.r1.u32 + 60, ctx.r8.u32);
	// stw r10,76(r1)
	REX_STORE_U32(ctx.r1.u32 + 76, ctx.r10.u32);
	// stw r27,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, r27.u32);
	// stw r27,-364(r1)
	REX_STORE_U32(ctx.r1.u32 + -364, r27.u32);
	// stw r27,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, r27.u32);
	// stw r27,-356(r1)
	REX_STORE_U32(ctx.r1.u32 + -356, r27.u32);
	// stw r27,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, r27.u32);
	// stw r27,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, r27.u32);
	// stw r27,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, r27.u32);
	// stw r27,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, r27.u32);
	// stw r27,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, r27.u32);
	// stw r27,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, r27.u32);
	// stw r27,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, r27.u32);
	// stw r27,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, r27.u32);
	// stw r27,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, r27.u32);
	// stw r27,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, r27.u32);
	// stw r27,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, r27.u32);
	// stw r27,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, r27.u32);
loc_82403B38:
	// lwzu r29,4(r31)
	ea = 4 + r31.u32;
	r29.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// addi r30,r1,-368
	r30.s64 = ctx.r1.s64 + -368;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r29,r30
	r28.u64 = REX_LOAD_U32(r29.u32 + r30.u32);
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// stwx r10,r29,r30
	REX_STORE_U32(r29.u32 + r30.u32, ctx.r10.u32);
	// bne 0x82403b38
	if (!ctx.cr0.eq) goto loc_82403B38;
	// lwz r11,-368(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82403b74
	if (!ctx.cr6.eq) goto loc_82403B74;
	// stw r27,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r27.u32);
	// b 0x82403f6c
	goto loc_82403F6C;
loc_82403B74:
	// li r15,1
	r15.s64 = 1;
	// lwz r23,0(r9)
	r23.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r31,r1,-364
	r31.s64 = ctx.r1.s64 + -364;
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
loc_82403B84:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82403ba0
	if (!ctx.cr6.eq) goto loc_82403BA0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// ble cr6,0x82403b84
	if (!ctx.cr6.gt) goto loc_82403B84;
loc_82403BA0:
	// mr r18,r11
	r18.u64 = ctx.r11.u64;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82403bb0
	if (!ctx.cr6.lt) goto loc_82403BB0;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
loc_82403BB0:
	// li r31,15
	r31.s64 = 15;
	// addi r30,r1,-308
	r30.s64 = ctx.r1.s64 + -308;
loc_82403BB8:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82403bd0
	if (!ctx.cr6.eq) goto loc_82403BD0;
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// bne 0x82403bb8
	if (!ctx.cr0.eq) goto loc_82403BB8;
loc_82403BD0:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// cmplw cr6,r23,r31
	ctx.cr6.compare<uint32_t>(r23.u32, r31.u32, ctx.xer);
	// ble cr6,0x82403be0
	if (!ctx.cr6.gt) goto loc_82403BE0;
	// mr r23,r31
	r23.u64 = r31.u64;
loc_82403BE0:
	// stw r23,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r23.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// slw r30,r15,r11
	r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (r15.u32 << (ctx.r11.u8 & 0x3F));
	// bge cr6,0x82403c1c
	if (!ctx.cr6.lt) goto loc_82403C1C;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-368
	ctx.r9.s64 = ctx.r1.s64 + -368;
	// add r9,r29,r9
	ctx.r9.u64 = r29.u64 + ctx.r9.u64;
loc_82403BFC:
	// lwz r29,0(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subf. r30,r29,r30
	r30.u64 = r30.u64 - r29.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82403cf4
	if (ctx.cr0.lt) goto loc_82403CF4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r30,r30,1,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// blt cr6,0x82403bfc
	if (ctx.cr6.lt) goto loc_82403BFC;
loc_82403C1C:
	// rlwinm r29,r31,2,0,29
	r29.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-368
	ctx.r9.s64 = ctx.r1.s64 + -368;
	// lwzx r11,r29,r9
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r9.u32);
	// subf. r14,r11,r30
	r14.u64 = r30.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(r14.s32, 0, ctx.xer);
	// blt 0x82403cf4
	if (ctx.cr0.lt) goto loc_82403CF4;
	// add r30,r11,r14
	r30.u64 = ctx.r11.u64 + r14.u64;
	// stw r27,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, r27.u32);
	// addic. r11,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	ctx.r11.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r30,r29,r9
	REX_STORE_U32(r29.u32 + ctx.r9.u32, r30.u32);
	// mr r31,r27
	r31.u64 = r27.u64;
	// beq 0x82403c6c
	if (ctx.cr0.eq) goto loc_82403C6C;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82403C50:
	// addi r11,r1,-364
	ctx.r11.s64 = ctx.r1.s64 + -364;
	// addi r30,r1,-280
	r30.s64 = ctx.r1.s64 + -280;
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// stwx r31,r9,r30
	REX_STORE_U32(ctx.r9.u32 + r30.u32, r31.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82403c50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82403C50;
loc_82403C6C:
	// lwz r17,92(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r30,r3,-4
	r30.s64 = ctx.r3.s64 + -4;
	// mr r31,r27
	r31.u64 = r27.u64;
loc_82403C78:
	// lwzu r11,4(r30)
	ea = 4 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82403ca0
	if (ctx.cr6.eq) goto loc_82403CA0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,-288
	ctx.r3.s64 = ctx.r1.s64 + -288;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// stwx r31,r28,r17
	REX_STORE_U32(r28.u32 + r17.u32, r31.u32);
loc_82403CA0:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82403c78
	if (ctx.cr6.lt) goto loc_82403C78;
	// addi r11,r1,-288
	ctx.r11.s64 = ctx.r1.s64 + -288;
	// stw r27,-224(r1)
	REX_STORE_U32(ctx.r1.u32 + -224, r27.u32);
	// mr r28,r27
	r28.u64 = r27.u64;
	// mr r22,r17
	r22.u64 = r17.u64;
	// li r26,-1
	r26.s64 = -1;
	// neg r30,r23
	r30.s64 = static_cast<int64_t>(-r23.u64);
	// lwzx r16,r29,r11
	r16.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// mr r31,r27
	r31.u64 = r27.u64;
	// stw r27,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, r27.u32);
	// mr r24,r27
	r24.u64 = r27.u64;
	// cmpw cr6,r18,r10
	ctx.cr6.compare<int32_t>(r18.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82403f54
	if (ctx.cr6.gt) goto loc_82403F54;
	// rlwinm r11,r18,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r19,84(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r1,-368
	ctx.r9.s64 = ctx.r1.s64 + -368;
	// add r20,r11,r9
	r20.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82403CEC:
	// lwz r21,0(r20)
	r21.u64 = REX_LOAD_U32(r20.u32 + 0);
	// b 0x82403f3c
	goto loc_82403F3C;
loc_82403CF4:
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x82403f6c
	goto loc_82403F6C;
loc_82403CFC:
	// add r11,r30,r23
	ctx.r11.u64 = r30.u64 + r23.u64;
	// addi r21,r21,-1
	r21.s64 = r21.s64 + -1;
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(r18.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82403e38
	if (!ctx.cr6.gt) goto loc_82403E38;
	// addi r25,r21,1
	r25.s64 = r21.s64 + 1;
	// subf r29,r23,r30
	r29.u64 = r30.u64 - r23.u64;
loc_82403D14:
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// add r29,r29,r23
	r29.u64 = r29.u64 + r23.u64;
	// cmplw cr6,r9,r23
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r23.u32, ctx.xer);
	// ble cr6,0x82403d30
	if (!ctx.cr6.gt) goto loc_82403D30;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
loc_82403D30:
	// subf r11,r30,r18
	ctx.r11.u64 = r18.u64 - r30.u64;
	// slw r4,r15,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (r15.u32 << (ctx.r11.u8 & 0x3F));
	// cmplw cr6,r4,r25
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r25.u32, ctx.xer);
	// ble cr6,0x82403d78
	if (!ctx.cr6.gt) goto loc_82403D78;
	// subf r4,r21,r4
	ctx.r4.u64 = ctx.r4.u64 - r21.u64;
	// mr r31,r20
	r31.u64 = r20.u64;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82403d78
	if (!ctx.cr6.lt) goto loc_82403D78;
	// b 0x82403d6c
	goto loc_82403D6C;
loc_82403D58:
	// lwzu r3,4(r31)
	ea = 4 + r31.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82403d78
	if (!ctx.cr6.gt) goto loc_82403D78;
	// subf r4,r3,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r3.u64;
loc_82403D6C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82403d58
	if (ctx.cr6.lt) goto loc_82403D58;
loc_82403D78:
	// lwz r4,0(r19)
	ctx.r4.u64 = REX_LOAD_U32(r19.u32 + 0);
	// slw r24,r15,r11
	r24.u64 = ctx.r11.u8 & 0x20 ? 0 : (r15.u32 << (ctx.r11.u8 & 0x3F));
	// add r3,r4,r24
	ctx.r3.u64 = ctx.r4.u64 + r24.u64;
	// cmplwi cr6,r3,1440
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1440, ctx.xer);
	// bgt cr6,0x82403cf4
	if (ctx.cr6.gt) goto loc_82403CF4;
	// stw r3,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r3.u32);
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// lwz r3,76(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// rlwinm r9,r26,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// stw r3,-392(r1)
	REX_STORE_U32(ctx.r1.u32 + -392, ctx.r3.u32);
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r9,r31
	ctx.r4.u64 = ctx.r9.u64 + r31.u64;
	// lwz r31,-392(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -392);
	// add r31,r3,r31
	r31.u64 = ctx.r3.u64 + r31.u64;
	// stw r31,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r31.u32);
	// beq cr6,0x82403e28
	if (ctx.cr6.eq) goto loc_82403E28;
	// lwz r4,-4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + -4);
	// srw r3,r28,r29
	ctx.r3.u64 = r29.u8 & 0x20 ? 0 : (r28.u32 >> (r29.u8 & 0x3F));
	// lwz r8,60(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 60);
	// subf r7,r4,r31
	ctx.r7.u64 = r31.u64 - ctx.r4.u64;
	// rlwinm r5,r3,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r11,-400(r1)
	REX_STORE_U8(ctx.r1.u32 + -400, ctx.r11.u8);
	// srawi r7,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// stb r23,-399(r1)
	REX_STORE_U8(ctx.r1.u32 + -399, r23.u8);
	// addi r6,r1,-288
	ctx.r6.s64 = ctx.r1.s64 + -288;
	// stw r5,-388(r1)
	REX_STORE_U32(ctx.r1.u32 + -388, ctx.r5.u32);
	// stw r7,-392(r1)
	REX_STORE_U32(ctx.r1.u32 + -392, ctx.r7.u32);
	// std r8,-296(r1)
	REX_STORE_U64(ctx.r1.u32 + -296, ctx.r8.u64);
	// lwz r8,-392(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -392);
	// subf r3,r3,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r3.u64;
	// stw r3,-396(r1)
	REX_STORE_U32(ctx.r1.u32 + -396, ctx.r3.u32);
	// stw r6,-384(r1)
	REX_STORE_U32(ctx.r1.u32 + -384, ctx.r6.u32);
	// lwz r3,-384(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -384);
	// stwx r28,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, r28.u32);
	// ld r11,-400(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -400);
	// lwz r3,-388(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -388);
	// lwz r6,44(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// lwz r7,52(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// lwz r5,36(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// ld r8,-296(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + -296);
	// std r10,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, ctx.r10.u64);
	// stdx r11,r3,r4
	REX_STORE_U64(ctx.r3.u32 + ctx.r4.u32, ctx.r11.u64);
	// b 0x82403e2c
	goto loc_82403E2C;
loc_82403E28:
	// stw r31,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, r31.u32);
loc_82403E2C:
	// add r11,r30,r23
	ctx.r11.u64 = r30.u64 + r23.u64;
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(r18.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82403d14
	if (ctx.cr6.gt) goto loc_82403D14;
loc_82403E38:
	// rlwinm r11,r16,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r30,r18
	ctx.r9.u64 = r18.u64 - r30.u64;
	// add r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 + r17.u64;
	// stb r9,-399(r1)
	REX_STORE_U8(ctx.r1.u32 + -399, ctx.r9.u8);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82403e58
	if (ctx.cr6.lt) goto loc_82403E58;
	// li r11,192
	ctx.r11.s64 = 192;
	// b 0x82403ea0
	goto loc_82403EA0;
loc_82403E58:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82403e88
	if (!ctx.cr6.lt) goto loc_82403E88;
	// li r9,256
	ctx.r9.s64 = 256;
	// stw r11,-396(r1)
	REX_STORE_U32(ctx.r1.u32 + -396, ctx.r11.u32);
	// li r4,96
	ctx.r4.s64 = 96;
	// subfc r11,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// addze r3,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r3.s64 = temp.s64;
	// subf r11,r3,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r3.u64;
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// b 0x82403ea0
	goto loc_82403EA0;
loc_82403E88:
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// stw r9,-396(r1)
	REX_STORE_U32(ctx.r1.u32 + -396, ctx.r9.u32);
loc_82403EA0:
	// stb r11,-400(r1)
	REX_STORE_U8(ctx.r1.u32 + -400, ctx.r11.u8);
	// subf r9,r30,r18
	ctx.r9.u64 = r18.u64 - r30.u64;
	// srw r11,r28,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (r28.u32 >> (r30.u8 & 0x3F));
	// slw r9,r15,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r15.u32 << (ctx.r9.u8 & 0x3F));
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// bge cr6,0x82403edc
	if (!ctx.cr6.lt) goto loc_82403EDC;
	// rlwinm r3,r9,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r3,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r3.u64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + r31.u64;
loc_82403EC8:
	// ld r29,-400(r1)
	r29.u64 = REX_LOAD_U64(ctx.r1.u32 + -400);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// stdux r29,r4,r3
	ea = ctx.r4.u32 + ctx.r3.u32;
	REX_STORE_U64(ea, r29.u64);
	ctx.r4.u32 = ea;
	// blt cr6,0x82403ec8
	if (ctx.cr6.lt) goto loc_82403EC8;
loc_82403EDC:
	// addi r11,r18,-1
	ctx.r11.s64 = r18.s64 + -1;
	// slw r11,r15,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r15.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x82403eec
	goto loc_82403EEC;
loc_82403EE8:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
loc_82403EEC:
	// and. r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 & r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// xor r28,r11,r28
	r28.u64 = ctx.r11.u64 ^ r28.u64;
	// bne 0x82403ee8
	if (!ctx.cr0.eq) goto loc_82403EE8;
	// addi r4,r1,-288
	ctx.r4.s64 = ctx.r1.s64 + -288;
	// rlwinm r9,r26,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// slw r4,r15,r30
	ctx.r4.u64 = r30.u8 & 0x20 ? 0 : (r15.u32 << (r30.u8 & 0x3F));
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// lwz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// and r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & r28.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82403f3c
	if (ctx.cr6.eq) goto loc_82403F3C;
loc_82403F1C:
	// subf r30,r23,r30
	r30.u64 = r30.u64 - r23.u64;
	// lwzu r11,-4(r9)
	ea = -4 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r26,r26,-1
	r26.s64 = r26.s64 + -1;
	// slw r4,r15,r30
	ctx.r4.u64 = r30.u8 & 0x20 ? 0 : (r15.u32 << (r30.u8 & 0x3F));
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// and r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 & r28.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82403f1c
	if (!ctx.cr6.eq) goto loc_82403F1C;
loc_82403F3C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// bne cr6,0x82403cfc
	if (!ctx.cr6.eq) goto loc_82403CFC;
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// cmpw cr6,r18,r10
	ctx.cr6.compare<int32_t>(r18.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82403cec
	if (!ctx.cr6.gt) goto loc_82403CEC;
loc_82403F54:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq cr6,0x82403f68
	if (ctx.cr6.eq) goto loc_82403F68;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// li r3,-5
	ctx.r3.s64 = -5;
	// bne cr6,0x82403f6c
	if (!ctx.cr6.eq) goto loc_82403F6C;
loc_82403F68:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82403F6C:
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_82418BB0) {
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
	ctx.lr = 0x82418BB8;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f38
	ctx.lr = 0x82418BC0;
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
	// beq cr6,0x82418bec
	if (ctx.cr6.eq) goto loc_82418BEC;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x82418BE8;
	sub_82413040(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82418BEC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82418c08
	if (ctx.cr6.eq) goto loc_82418C08;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413dd0
	ctx.lr = 0x82418C04;
	sub_82413DD0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82418C08:
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
	// bne 0x82418c78
	if (!ctx.cr0.eq) goto loc_82418C78;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x82418c80
	goto loc_82418C80;
loc_82418C78:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_82418C80:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82418c98
	if (ctx.cr6.eq) goto loc_82418C98;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x82418C98;
	sub_823DC658(ctx, base);
loc_82418C98:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82419010
	if (!ctx.cr6.gt) goto loc_82419010;
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
	// lfs f11,16288(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16288);
	ctx.f11.f64 = double(temp.f32);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// lfd f10,-9120(r10)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r10.u32 + -9120);
	// rlwinm r25,r30,2,0,29
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,-7224(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -7224);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,17176(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17176);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21348(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r30,r30,4,0,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f5,23032(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 23032);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// subf r29,r25,r28
	r29.u64 = r28.u64 - r25.u64;
loc_82418CFC:
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
	// lfsx f4,r7,r24
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fadds f3,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// fadds f2,f8,f4
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// fadds f1,f7,f4
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// fadds f4,f6,f4
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// fctiwz f3,f3
	ctx.f3.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f3,f2
	ctx.f3.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// fctiwz f3,f1
	ctx.f3.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f3.u64);
	// fctiwz f4,f4
	ctx.f4.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f4,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f4.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// beq cr6,0x82418f34
	if (ctx.cr6.eq) goto loc_82418F34;
	// extsw r7,r5
	ctx.r7.s64 = ctx.r5.s32;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r28,r4
	r28.s64 = ctx.r4.s32;
	// std r7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f4,104(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r28,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r28.u64);
	// lfd f3,112(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f3
	ctx.f3.f64 = double(ctx.f3.s64);
	// extsw r7,r6
	ctx.r7.s64 = ctx.r6.s32;
	// frsp f3,f3
	ctx.f3.f64 = double(float(ctx.f3.f64));
	// std r7,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f2,120(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsw r28,r3
	r28.s64 = ctx.r3.s32;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// std r28,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, r28.u64);
	// lfs f1,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f8,f8,f3
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f3.f64));
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fsubs f7,f7,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f4.f64));
	// fmadds f4,f8,f13,f1
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f1.f64)));
	// stfs f4,16(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f4,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f4,f8,f12,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f4.f64)));
	// stfs f4,16(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// fcfid f4,f2
	ctx.f4.f64 = double(ctx.f2.s64);
	// lfs f3,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// fmadds f3,f8,f11,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f3.f64)));
	// stfs f3,16(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// lfs f3,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f3,f7,f13,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f3.f64)));
	// stfs f3,20(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fsubs f9,f9,f4
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// lfs f4,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f4,f7,f12,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f4.f64)));
	// stfs f4,20(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f4,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f4,f7,f11,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f7.f64, ctx.f11.f64, ctx.f4.f64)));
	// stfs f4,20(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fmul f8,f8,f10
	ctx.f8.f64 = ctx.f8.f64 * ctx.f10.f64;
	// lfs f4,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f4,f9,f13,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f4.f64)));
	// stfs f4,24(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmul f7,f7,f10
	ctx.f7.f64 = ctx.f7.f64 * ctx.f10.f64;
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// frsp f31,f8
	f31.f64 = double(float(ctx.f8.f64));
	// lfs f8,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f9,f12,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f8.f64)));
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
	// fmadds f7,f9,f11,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f7.f64)));
	// fmul f9,f9,f10
	ctx.f9.f64 = ctx.f9.f64 * ctx.f10.f64;
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
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f8,f9,f13,f7
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f7.f64)));
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
	// fmadds f8,f9,f12,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f8.f64)));
	// fmul f7,f9,f10
	ctx.f7.f64 = ctx.f9.f64 * ctx.f10.f64;
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
	// fmadds f9,f9,f11,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f8.f64)));
	// stfs f9,28(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// frsp f28,f7
	f28.f64 = double(float(ctx.f7.f64));
	// addi r7,r10,28
	ctx.r7.s64 = ctx.r10.s64 + 28;
loc_82418F34:
	// cmpwi cr6,r4,127
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 127, ctx.xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt cr6,0x82418f44
	if (ctx.cr6.lt) goto loc_82418F44;
	// li r10,127
	ctx.r10.s64 = 127;
loc_82418F44:
	// cmpwi cr6,r10,-127
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -127, ctx.xer);
	// ble cr6,0x82418f5c
	if (!ctx.cr6.gt) goto loc_82418F5C;
	// cmpwi cr6,r4,127
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 127, ctx.xer);
	// blt cr6,0x82418f60
	if (ctx.cr6.lt) goto loc_82418F60;
	// li r4,127
	ctx.r4.s64 = 127;
	// b 0x82418f60
	goto loc_82418F60;
loc_82418F5C:
	// li r4,-127
	ctx.r4.s64 = -127;
loc_82418F60:
	// cmpwi cr6,r5,127
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 127, ctx.xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// blt cr6,0x82418f70
	if (ctx.cr6.lt) goto loc_82418F70;
	// li r10,127
	ctx.r10.s64 = 127;
loc_82418F70:
	// cmpwi cr6,r10,-127
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -127, ctx.xer);
	// ble cr6,0x82418f88
	if (!ctx.cr6.gt) goto loc_82418F88;
	// cmpwi cr6,r5,127
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 127, ctx.xer);
	// blt cr6,0x82418f8c
	if (ctx.cr6.lt) goto loc_82418F8C;
	// li r5,127
	ctx.r5.s64 = 127;
	// b 0x82418f8c
	goto loc_82418F8C;
loc_82418F88:
	// li r5,-127
	ctx.r5.s64 = -127;
loc_82418F8C:
	// cmpwi cr6,r6,127
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 127, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// blt cr6,0x82418f9c
	if (ctx.cr6.lt) goto loc_82418F9C;
	// li r10,127
	ctx.r10.s64 = 127;
loc_82418F9C:
	// cmpwi cr6,r10,-127
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -127, ctx.xer);
	// ble cr6,0x82418fb4
	if (!ctx.cr6.gt) goto loc_82418FB4;
	// cmpwi cr6,r6,127
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 127, ctx.xer);
	// blt cr6,0x82418fb8
	if (ctx.cr6.lt) goto loc_82418FB8;
	// li r6,127
	ctx.r6.s64 = 127;
	// b 0x82418fb8
	goto loc_82418FB8;
loc_82418FB4:
	// li r6,-127
	ctx.r6.s64 = -127;
loc_82418FB8:
	// cmpwi cr6,r3,127
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 127, ctx.xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// blt cr6,0x82418fc8
	if (ctx.cr6.lt) goto loc_82418FC8;
	// li r10,127
	ctx.r10.s64 = 127;
loc_82418FC8:
	// cmpwi cr6,r10,-127
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -127, ctx.xer);
	// ble cr6,0x82418fe0
	if (!ctx.cr6.gt) goto loc_82418FE0;
	// cmpwi cr6,r3,127
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 127, ctx.xer);
	// blt cr6,0x82418fe4
	if (ctx.cr6.lt) goto loc_82418FE4;
	// li r3,127
	ctx.r3.s64 = 127;
	// b 0x82418fe4
	goto loc_82418FE4;
loc_82418FE0:
	// li r3,-127
	ctx.r3.s64 = -127;
loc_82418FE4:
	// rlwimi r6,r3,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// rlwimi r5,r6,8,0,23
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r5.u64 & 0xFFFFFFFF000000FF);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// rlwimi r4,r5,8,0,23
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r4.u64 & 0xFFFFFFFF000000FF);
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
	// blt cr6,0x82418cfc
	if (ctx.cr6.lt) goto loc_82418CFC;
loc_82419010:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f84
	ctx.lr = 0x8241901C;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82427200) {
	REX_FUNC_PROLOGUE();
	// stb r4,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r4.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824272D8) {
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
	ctx.lr = 0x824272E0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242731c
	if (!ctx.cr6.eq) goto loc_8242731C;
	// lwz r11,1508(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 1508);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r5,1508(r6)
	REX_STORE_U32(ctx.r6.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 172);
	// bl 0x82424730
	ctx.lr = 0x82427318;
	sub_82424730(ctx, base);
	// stw r3,52(r29)
	REX_STORE_U32(r29.u32 + 52, ctx.r3.u32);
loc_8242731C:
	// lwz r31,1452(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 1452);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r24,52(r29)
	r24.u64 = REX_LOAD_U32(r29.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82412d18
	ctx.lr = 0x82427330;
	sub_82412D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// beq 0x82427350
	if (ctx.cr0.eq) goto loc_82427350;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82428c60
	ctx.lr = 0x82427348;
	sub_82428C60(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82427354
	goto loc_82427354;
loc_82427350:
	// li r31,0
	r31.s64 = 0;
loc_82427354:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824288c8
	ctx.lr = 0x82427364;
	sub_824288C8(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// stw r31,48(r29)
	REX_STORE_U32(r29.u32 + 48, r31.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82427378
	if (!ctx.cr6.eq) goto loc_82427378;
	// stw r31,116(r30)
	REX_STORE_U32(r30.u32 + 116, r31.u32);
loc_82427378:
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82427390
	if (!ctx.cr6.eq) goto loc_82427390;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,120(r30)
	REX_STORE_U32(r30.u32 + 120, r31.u32);
	// stb r11,126(r30)
	REX_STORE_U8(r30.u32 + 126, ctx.r11.u8);
loc_82427390:
	// lwz r10,32(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// addi r28,r11,-6072
	r28.s64 = ctx.r11.s64 + -6072;
	// bne cr6,0x824273c0
	if (!ctx.cr6.eq) goto loc_824273C0;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
	// stw r31,112(r30)
	REX_STORE_U32(r30.u32 + 112, r31.u32);
	// lwz r3,96(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 96);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82426a60
	ctx.lr = 0x824273BC;
	sub_82426A60(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_824273C0:
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x824273e0
	if (!ctx.cr6.eq) goto loc_824273E0;
	// stw r31,108(r30)
	REX_STORE_U32(r30.u32 + 108, r31.u32);
	// lwz r3,96(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 96);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82426a60
	ctx.lr = 0x824273DC;
	sub_82426A60(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_824273E0:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824288c8
	ctx.lr = 0x824273F0;
	sub_824288C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82422960
	ctx.lr = 0x824273FC;
	sub_82422960(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,168(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 168);
	// bl 0x82429bf8
	ctx.lr = 0x82427408;
	sub_82429BF8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// li r30,0
	r30.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r28,r10,16880
	r28.s64 = ctx.r10.s64 + 16880;
	// addi r29,r11,-5940
	r29.s64 = ctx.r11.s64 + -5940;
	// addi r27,r9,-5972
	r27.s64 = ctx.r9.s64 + -5972;
	// addi r26,r8,-6064
	r26.s64 = ctx.r8.s64 + -6064;
loc_82427438:
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// lbzx r25,r30,r11
	r25.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r25,8
	ctx.cr6.compare<uint32_t>(r25.u32, 8, ctx.xer);
	// blt cr6,0x82427460
	if (ctx.cr6.lt) goto loc_82427460;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,361
	ctx.r7.s64 = 361;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x82427460;
	sub_8240E308(ctx, base);
loc_82427460:
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stbx r11,r30,r10
	REX_STORE_U8(r30.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x82427438
	if (ctx.cr6.lt) goto loc_82427438;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8242CF40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8242CF48;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242CF6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,568(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 568);
loc_8242CF70:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8242cf88
	if (ctx.cr6.eq) goto loc_8242CF88;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8242cf8c
	goto loc_8242CF8C;
loc_8242CF88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8242CF8C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242cfac
	if (ctx.cr6.eq) goto loc_8242CFAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242CFA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8242cf70
	goto loc_8242CF70;
loc_8242CFAC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242CFC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8242EC18) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8242ebf0
	sub_8242EBF0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8242EC30) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8242ec28
	sub_8242EC28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8242F220) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8242F228;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,7712
	r30.s64 = ctx.r11.s64 + 7712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8242c298
	ctx.lr = 0x8242F240;
	sub_8242C298(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8242f254
	if (!ctx.cr6.eq) goto loc_8242F254;
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16387
	r31.u64 = r31.u64 | 16387;
	// b 0x8242f290
	goto loc_8242F290;
loc_8242F254:
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,10
	ctx.r5.u64 = ctx.r5.u64 | 10;
	// li r4,108
	ctx.r4.s64 = 108;
	// bl 0x8242c3b0
	ctx.lr = 0x8242F26C;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8242f27c
	if (ctx.cr0.eq) goto loc_8242F27C;
	// bl 0x8243cfb8
	ctx.lr = 0x8242F278;
	sub_8243CFB8(ctx, base);
	// b 0x8242f280
	goto loc_8242F280;
loc_8242F27C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8242F280:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f2a4
	if (ctx.cr6.eq) goto loc_8242F2A4;
	// li r31,0
	r31.s64 = 0;
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
loc_8242F290:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8242c330
	ctx.lr = 0x8242F298;
	sub_8242C330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_8242F2A4:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8242f290
	goto loc_8242F290;
}

DEFINE_REX_FUNC(sub_824347F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x824347F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824348a0
	if (ctx.cr6.eq) goto loc_824348A0;
	// li r29,8
	r29.s64 = 8;
loc_82434810:
	// li r31,0
	r31.s64 = 0;
loc_82434814:
	// add r11,r29,r31
	ctx.r11.u64 = r29.u64 + r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mulli r11,r11,240
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(240));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r4,r11,-1880
	ctx.r4.s64 = ctx.r11.s64 + -1880;
	// bl 0x82434650
	ctx.lr = 0x8243482C;
	sub_82434650(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(r31.u32, 8, ctx.xer);
	// blt cr6,0x82434814
	if (ctx.cr6.lt) goto loc_82434814;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplwi cr6,r29,64
	ctx.cr6.compare<uint32_t>(r29.u32, 64, ctx.xer);
	// ble cr6,0x82434810
	if (!ctx.cr6.gt) goto loc_82434810;
	// addi r28,r30,15400
	r28.s64 = r30.s64 + 15400;
	// b 0x82434874
	goto loc_82434874;
loc_8243484C:
	// addi r29,r31,12
	r29.s64 = r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82434650
	ctx.lr = 0x8243485C;
	sub_82434650(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82434874
	if (ctx.cr6.eq) goto loc_82434874;
	// addi r3,r29,20
	ctx.r3.s64 = r29.s64 + 20;
	// bl 0x8242d988
	ctx.lr = 0x8243486C;
	sub_8242D988(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x82434874;
	sub_82473600(ctx, base);
loc_82434874:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824344e8
	ctx.lr = 0x8243487C;
	sub_824344E8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8243484c
	if (!ctx.cr0.eq) goto loc_8243484C;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82434898;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_824348A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_824359E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x824359F0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,484(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 484);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82435ab4
	if (ctx.cr6.eq) goto loc_82435AB4;
	// addi r31,r3,272
	r31.s64 = ctx.r3.s64 + 272;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x82435a40
	if (!ctx.cr6.eq) goto loc_82435A40;
	// bl 0x82438670
	ctx.lr = 0x82435A18;
	sub_82438670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82435a2c
	goto loc_82435A2C;
loc_82435A20:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82435a2c
	if (ctx.cr6.eq) goto loc_82435A2C;
	// bl 0x82473600
	ctx.lr = 0x82435A2C;
	sub_82473600(ctx, base);
loc_82435A2C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242d2c8
	ctx.lr = 0x82435A34;
	sub_8242D2C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82435a20
	if (!ctx.cr0.eq) goto loc_82435A20;
	// b 0x82435a6c
	goto loc_82435A6C;
loc_82435A40:
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,19232
	ctx.r5.s64 = ctx.r11.s64 + 19232;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82434b38
	ctx.lr = 0x82435A58;
	sub_82434B38(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82435ab4
	if (ctx.cr0.eq) goto loc_82435AB4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245cef8
	ctx.lr = 0x82435A68;
	sub_8245CEF8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82435A6C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82435ab4
	if (ctx.cr6.eq) goto loc_82435AB4;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82435aa4
	if (ctx.cr6.lt) goto loc_82435AA4;
	// beq cr6,0x82435a94
	if (ctx.cr6.eq) goto loc_82435A94;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82435aac
	if (!ctx.cr6.lt) goto loc_82435AAC;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82435a98
	goto loc_82435A98;
loc_82435A94:
	// li r4,1
	ctx.r4.s64 = 1;
loc_82435A98:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824355a8
	ctx.lr = 0x82435AA0;
	sub_824355A8(ctx, base);
	// b 0x82435aac
	goto loc_82435AAC;
loc_82435AA4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82435530
	ctx.lr = 0x82435AAC;
	sub_82435530(ctx, base);
loc_82435AAC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82473600
	ctx.lr = 0x82435AB4;
	sub_82473600(ctx, base);
loc_82435AB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82437AD0) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e78
	ctx.lr = 0x82437AD8;
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// addi r26,r11,7712
	r26.s64 = ctx.r11.s64 + 7712;
	// lhz r11,16(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,18
	ctx.r4.s64 = ctx.r11.s64 + 18;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// bl 0x8242c3b0
	ctx.lr = 0x82437B1C;
	sub_8242C3B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82437d78
	if (ctx.cr0.eq) goto loc_82437D78;
	// lhz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,18
	ctx.r5.s64 = ctx.r11.s64 + 18;
	// bl 0x822d4fa0
	ctx.lr = 0x82437B38;
	sub_822D4FA0(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// li r25,16
	r25.s64 = 16;
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// bne cr6,0x82437b94
	if (!ctx.cr6.eq) goto loc_82437B94;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,9780
	ctx.r9.s64 = ctx.r11.s64 + 9780;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// lwz r11,9780(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 9780);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,8(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r6,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x82437B8C;
	sub_822D4FA0(ctx, base);
	// sth r25,18(r31)
	REX_STORE_U16(r31.u32 + 18, r25.u16);
	// b 0x82437b9c
	goto loc_82437B9C;
loc_82437B94:
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
loc_82437B9C:
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// rlwinm r11,r11,1,16,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFE;
	// sth r25,14(r31)
	REX_STORE_U16(r31.u32 + 14, r25.u16);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// sth r11,12(r31)
	REX_STORE_U16(r31.u32 + 12, ctx.r11.u16);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82435fc0
	ctx.lr = 0x82437BD4;
	sub_82435FC0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x82437BE0;
	sub_82473600(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x82437de0
	if (ctx.cr6.lt) goto loc_82437DE0;
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r31,0
	r31.s64 = 0;
	// lhz r9,2(r28)
	ctx.r9.u64 = REX_LOAD_U16(r28.u32 + 2);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r5,22
	ctx.r5.s64 = 22;
	// sth r31,128(r1)
	REX_STORE_U16(ctx.r1.u32 + 128, r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// addi r3,r1,130
	ctx.r3.s64 = ctx.r1.s64 + 130;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// stw r31,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r31.u32);
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r31.u32);
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r31.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r31,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stw r25,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r25.u32);
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// bl 0x822d5870
	ctx.lr = 0x82437C3C;
	sub_822D5870(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8244c838
	ctx.lr = 0x82437C48;
	sub_8244C838(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8243a300
	ctx.lr = 0x82437C50;
	sub_8243A300(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// sth r3,128(r1)
	REX_STORE_U16(ctx.r1.u32 + 128, ctx.r3.u16);
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, r31.u32);
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x822d5870
	ctx.lr = 0x82437C70;
	sub_822D5870(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8244c7a8
	ctx.lr = 0x82437C78;
	sub_8244C7A8(ctx, base);
	// li r5,90
	ctx.r5.s64 = 90;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,160(r1)
	REX_STORE_U16(ctx.r1.u32 + 160, r31.u16);
	// addi r3,r1,162
	ctx.r3.s64 = ctx.r1.s64 + 162;
	// bl 0x822d5870
	ctx.lr = 0x82437C8C;
	sub_822D5870(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8244c730
	ctx.lr = 0x82437C9C;
	sub_8244C730(ctx, base);
	// stw r31,492(r30)
	REX_STORE_U32(r30.u32 + 492, r31.u32);
	// stw r31,496(r30)
	REX_STORE_U32(r30.u32 + 496, r31.u32);
	// not r10,r27
	ctx.r10.u64 = ~r27.u64;
	// stw r31,500(r30)
	REX_STORE_U32(r30.u32 + 500, r31.u32);
	// li r11,375
	ctx.r11.s64 = 375;
	// stw r31,504(r30)
	REX_STORE_U32(r30.u32 + 504, r31.u32);
	// rlwinm r5,r10,31,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// stw r31,508(r30)
	REX_STORE_U32(r30.u32 + 508, r31.u32);
	// stw r30,492(r30)
	REX_STORE_U32(r30.u32 + 492, r30.u32);
	// addi r29,r30,492
	r29.s64 = r30.s64 + 492;
	// lhz r10,172(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 172);
	// stw r10,504(r30)
	REX_STORE_U32(r30.u32 + 504, ctx.r10.u32);
	// lwz r10,112(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 112);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 4);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// divwu r3,r10,r11
	ctx.r3.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lwz r28,104(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 104);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x82436b78
	ctx.lr = 0x82437D10;
	sub_82436B78(ctx, base);
	// mullw r11,r3,r28
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(r28.s32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,2048
	ctx.r10.s64 = 2048;
	// stw r11,528(r30)
	REX_STORE_U32(r30.u32 + 528, ctx.r11.u32);
	// addi r9,r11,2048
	ctx.r9.s64 = ctx.r11.s64 + 2048;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r10,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,0
	ctx.r6.s64 = 0;
	// mullw r4,r9,r11
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stw r11,636(r30)
	REX_STORE_U32(r30.u32 + 636, ctx.r11.u32);
	// stw r4,532(r30)
	REX_STORE_U32(r30.u32 + 532, ctx.r4.u32);
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// bl 0x8242c3b0
	ctx.lr = 0x82437D54;
	sub_8242C3B0(ctx, base);
	// stw r3,524(r30)
	REX_STORE_U32(r30.u32 + 524, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82437d78
	if (ctx.cr0.eq) goto loc_82437D78;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824455b8
	ctx.lr = 0x82437D6C;
	sub_824455B8(ctx, base);
	// stw r3,512(r30)
	REX_STORE_U32(r30.u32 + 512, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82437d84
	if (!ctx.cr0.eq) goto loc_82437D84;
loc_82437D78:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x82437de0
	goto loc_82437DE0;
loc_82437D84:
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// addi r7,r30,516
	ctx.r7.s64 = r30.s64 + 516;
	// addi r10,r10,30672
	ctx.r10.s64 = ctx.r10.s64 + 30672;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r31,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r31.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// bl 0x8244ac10
	ctx.lr = 0x82437DC0;
	sub_8244AC10(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r31,516(r30)
	REX_STORE_U32(r30.u32 + 516, r31.u32);
	// blt 0x82437de0
	if (ctx.cr0.lt) goto loc_82437DE0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r30,652
	ctx.r3.s64 = r30.s64 + 652;
	// bl 0x82437738
	ctx.lr = 0x82437DDC;
	sub_82437738(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82437DE0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82441EE8) {
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
	// lwz r11,372(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 372);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82441f44
	if (ctx.cr6.eq) goto loc_82441F44;
	// addi r30,r3,340
	r30.s64 = ctx.r3.s64 + 340;
loc_82441F10:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824344e8
	ctx.lr = 0x82441F18;
	sub_824344E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82441F34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82473600
	ctx.lr = 0x82441F38;
	sub_82473600(ctx, base);
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82441f10
	if (!ctx.cr6.eq) goto loc_82441F10;
loc_82441F44:
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

DEFINE_REX_FUNC(sub_82442FB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82442FB8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82442FDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82442FF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82444370) {
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
	ctx.lr = 0x82444378;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244439C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r25,r31,4
	r25.s64 = r31.s64 + 4;
	// li r30,0
	r30.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824443B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// bne cr6,0x824443ec
	if (!ctx.cr6.eq) goto loc_824443EC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824443dc
	if (ctx.cr6.eq) goto loc_824443DC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x824443e0
	goto loc_824443E0;
loc_824443DC:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
loc_824443E0:
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// b 0x8244446c
	goto loc_8244446C;
loc_824443EC:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// ori r5,r5,4
	ctx.r5.u64 = ctx.r5.u64 | 4;
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x8242c3b0
	ctx.lr = 0x82444408;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82444420
	if (ctx.cr0.eq) goto loc_82444420;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82442bb8
	ctx.lr = 0x82444418;
	sub_82442BB8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x82444424
	goto loc_82444424;
loc_82444420:
	// li r28,0
	r28.s64 = 0;
loc_82444424:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82444438
	if (!ctx.cr6.eq) goto loc_82444438;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x82444674
	goto loc_82444674;
loc_82444438:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82442cb0
	ctx.lr = 0x82444444;
	sub_82442CB0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824444d4
	if (ctx.cr0.lt) goto loc_824444D4;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82444464
	if (ctx.cr6.eq) goto loc_82444464;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82444468
	goto loc_82444468;
loc_82444464:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
loc_82444468:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
loc_8244446C:
	// beq cr6,0x82444484
	if (ctx.cr6.eq) goto loc_82444484;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82444484;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82444484:
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lis r11,4919
	ctx.r11.s64 = 322371584;
	// ori r26,r11,61441
	r26.u64 = ctx.r11.u64 | 61441;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824444a0
	if (ctx.cr6.eq) goto loc_824444A0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82442988
	ctx.lr = 0x824444A0;
	sub_82442988(ctx, base);
loc_824444A0:
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// stw r28,88(r31)
	REX_STORE_U32(r31.u32 + 88, r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824444cc
	if (ctx.cr6.eq) goto loc_824444CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824444C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_824444CC:
	// lwz r27,68(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 68);
	// b 0x82444628
	goto loc_82444628;
loc_824444D4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82442c10
	ctx.lr = 0x824444DC;
	sub_82442C10(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82473600
	ctx.lr = 0x824444E4;
	sub_82473600(ctx, base);
	// b 0x82444674
	goto loc_82444674;
loc_824444E8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82444674
	if (ctx.cr6.lt) goto loc_82444674;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82444508
	if (ctx.cr6.eq) goto loc_82444508;
	// lwz r27,4(r27)
	r27.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8244450c
	goto loc_8244450C;
loc_82444508:
	// li r29,0
	r29.s64 = 0;
loc_8244450C:
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,160(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 160);
	// lwz r28,4(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bne cr6,0x8244453c
	if (!ctx.cr6.eq) goto loc_8244453C;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82444538
	if (ctx.cr6.eq) goto loc_82444538;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8244453c
	goto loc_8244453C;
loc_82444538:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
loc_8244453C:
	// lwz r7,168(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82444584
	if (!ctx.cr6.eq) goto loc_82444584;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82444560
	if (ctx.cr6.eq) goto loc_82444560;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82444584
	goto loc_82444584;
loc_82444560:
	// lwz r7,172(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82444584
	if (!ctx.cr6.eq) goto loc_82444584;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82444580;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82444584:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82443770
	ctx.lr = 0x824445A4;
	sub_82443770(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82444628
	if (ctx.cr0.lt) goto loc_82444628;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824445CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8242c888
	ctx.lr = 0x824445DC;
	sub_8242C888(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// bl 0x82434bc0
	ctx.lr = 0x824445F4;
	sub_82434BC0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82444628
	if (ctx.cr0.lt) goto loc_82444628;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82444628
	if (ctx.cr6.eq) goto loc_82444628;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82444624;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82444628:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x824444e8
	if (!ctx.cr6.eq) goto loc_824444E8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82444674
	if (ctx.cr6.lt) goto loc_82444674;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244464C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82444674
	if (ctx.cr0.lt) goto loc_82444674;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,180(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82444670;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82444674:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82444688;
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
	ctx.lr = 0x824446A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x824446b8
	if (ctx.cr6.eq) goto loc_824446B8;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82442c10
	ctx.lr = 0x824446B0;
	sub_82442C10(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82473600
	ctx.lr = 0x824446B8;
	sub_82473600(ctx, base);
loc_824446B8:
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// bl 0x8242c890
	ctx.lr = 0x824446C0;
	sub_8242C890(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82456938) {
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
	// bl 0x824563e0
	ctx.lr = 0x82456950;
	sub_824563E0(ctx, base);
	// addis r31,r31,3
	r31.s64 = r31.s64 + 196608;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r31,r31,23248
	r31.s64 = r31.s64 + 23248;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5870
	ctx.lr = 0x82456968;
	sub_822D5870(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,1024(r31)
	REX_STORE_U32(r31.u32 + 1024, ctx.r10.u32);
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1060(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 1060, temp.u32);
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

DEFINE_REX_FUNC(sub_8245BD88) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e7c
	ctx.lr = 0x8245BD90;
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f29.u64);
	// stfd f30,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8245b3d0
	ctx.lr = 0x8245BDA8;
	sub_8245B3D0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addis r3,r29,3
	ctx.r3.s64 = r29.s64 + 196608;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r3,23248
	ctx.r3.s64 = ctx.r3.s64 + 23248;
	// lfs f30,30916(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 30916);
	f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82456320
	ctx.lr = 0x8245BDC4;
	sub_82456320(ctx, base);
	// addis r3,r29,5
	ctx.r3.s64 = r29.s64 + 327680;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r3,23296
	ctx.r3.s64 = ctx.r3.s64 + 23296;
	// lfs f0,30912(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 30912);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f31.f64 = double(temp.f32);
	// stfs f30,0(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f31,8(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f31,12(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f31,16(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f31,20(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f31,24(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f31,28(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f31,32(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f31,36(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// bl 0x82453bf0
	ctx.lr = 0x8245BE08;
	sub_82453BF0(ctx, base);
	// lis r28,-32246
	r28.s64 = -2113273856;
	// lis r8,5
	ctx.r8.s64 = 327680;
	// lis r7,5
	ctx.r7.s64 = 327680;
	// addis r26,r29,5
	r26.s64 = r29.s64 + 327680;
	// addi r27,r28,27568
	r27.s64 = r28.s64 + 27568;
	// ori r6,r8,23336
	ctx.r6.u64 = ctx.r8.u64 | 23336;
	// ori r11,r7,23340
	ctx.r11.u64 = ctx.r7.u64 | 23340;
	// addi r26,r26,23344
	r26.s64 = r26.s64 + 23344;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,44(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f13,48(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f0,r29,r6
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + ctx.r6.u32, temp.u32);
	// stfsx f13,r29,r11
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + ctx.r11.u32, temp.u32);
	// bl 0x822d5870
	ctx.lr = 0x8245BE48;
	sub_822D5870(ctx, base);
	// addis r25,r29,5
	r25.s64 = r29.s64 + 327680;
	// lfs f0,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f13,8(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r25,r25,25456
	r25.s64 = r25.s64 + 25456;
	// stfs f0,2080(r26)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r26.u32 + 2080, temp.u32);
	// li r9,509
	ctx.r9.s64 = 509;
	// lfs f30,27568(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 27568);
	f30.f64 = double(temp.f32);
	// li r8,508
	ctx.r8.s64 = 508;
	// lfs f12,12(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// li r31,0
	r31.s64 = 0;
	// stfs f30,2076(r26)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r26.u32 + 2076, temp.u32);
	// li r30,1
	r30.s64 = 1;
	// lfs f0,30908(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 30908);
	ctx.f0.f64 = double(temp.f32);
	// li r7,97
	ctx.r7.s64 = 97;
	// stfs f13,2084(r26)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r26.u32 + 2084, temp.u32);
	// li r5,512
	ctx.r5.s64 = 512;
	// stfs f31,2088(r26)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r26.u32 + 2088, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f31,2092(r26)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r26.u32 + 2092, temp.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stfs f31,2096(r26)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r26.u32 + 2096, temp.u32);
	// stw r31,2048(r26)
	REX_STORE_U32(r26.u32 + 2048, r31.u32);
	// stw r9,2064(r26)
	REX_STORE_U32(r26.u32 + 2064, ctx.r9.u32);
	// stw r8,2068(r26)
	REX_STORE_U32(r26.u32 + 2068, ctx.r8.u32);
	// stw r30,2072(r26)
	REX_STORE_U32(r26.u32 + 2072, r30.u32);
	// stfs f12,524(r25)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r25.u32 + 524, temp.u32);
	// stfs f0,528(r25)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r25.u32 + 528, temp.u32);
	// stw r7,520(r25)
	REX_STORE_U32(r25.u32 + 520, ctx.r7.u32);
	// bl 0x822d5870
	ctx.lr = 0x8245BEC0;
	sub_822D5870(ctx, base);
	// addis r28,r29,5
	r28.s64 = r29.s64 + 327680;
	// lwz r6,520(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 520);
	// stfs f31,532(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r25.u32 + 532, temp.u32);
	// addi r28,r28,26000
	r28.s64 = r28.s64 + 26000;
	// stw r31,512(r25)
	REX_STORE_U32(r25.u32 + 512, r31.u32);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// neg r11,r6
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// stw r10,516(r25)
	REX_STORE_U32(r25.u32 + 516, ctx.r10.u32);
	// bl 0x822d5870
	ctx.lr = 0x8245BEF0;
	sub_822D5870(ctx, base);
	// addis r26,r29,6
	r26.s64 = r29.s64 + 393216;
	// lfs f0,20(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f0,8224(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 8224, temp.u32);
	// addi r26,r26,-31280
	r26.s64 = r26.s64 + -31280;
	// stfs f30,8220(r28)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r28.u32 + 8220, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f31,8232(r28)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 8232, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f31,8236(r28)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 8236, temp.u32);
	// li r6,1297
	ctx.r6.s64 = 1297;
	// stfs f31,8240(r28)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 8240, temp.u32);
	// li r5,1296
	ctx.r5.s64 = 1296;
	// lfs f0,16260(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16260);
	ctx.f0.f64 = double(temp.f32);
	// li r4,600
	ctx.r4.s64 = 600;
	// stfs f0,8228(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 8228, temp.u32);
	// li r3,223
	ctx.r3.s64 = 223;
	// stw r5,8212(r28)
	REX_STORE_U32(r28.u32 + 8212, ctx.r5.u32);
	// stw r4,8216(r28)
	REX_STORE_U32(r28.u32 + 8216, ctx.r4.u32);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// stw r31,8192(r28)
	REX_STORE_U32(r28.u32 + 8192, r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r6,8208(r28)
	REX_STORE_U32(r28.u32 + 8208, ctx.r6.u32);
	// lfs f30,2000(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2000);
	f30.f64 = double(temp.f32);
	// stw r3,1032(r26)
	REX_STORE_U32(r26.u32 + 1032, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f29,15944(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15944);
	f29.f64 = double(temp.f32);
	// stfs f30,1036(r26)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r26.u32 + 1036, temp.u32);
	// stfs f29,1040(r26)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r26.u32 + 1040, temp.u32);
	// bl 0x822d5870
	ctx.lr = 0x8245BF68;
	sub_822D5870(ctx, base);
	// lwz r10,1032(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 1032);
	// addis r28,r29,6
	r28.s64 = r29.s64 + 393216;
	// li r11,293
	ctx.r11.s64 = 293;
	// stfs f31,1044(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r26.u32 + 1044, temp.u32);
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stw r31,1024(r26)
	REX_STORE_U32(r26.u32 + 1024, r31.u32);
	// addi r28,r28,-30224
	r28.s64 = r28.s64 + -30224;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,1028(r26)
	REX_STORE_U32(r26.u32 + 1028, ctx.r8.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f30,2060(r28)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r28.u32 + 2060, temp.u32);
	// stw r11,2056(r28)
	REX_STORE_U32(r28.u32 + 2056, ctx.r11.u32);
	// stfs f29,2064(r28)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r28.u32 + 2064, temp.u32);
	// bl 0x822d5870
	ctx.lr = 0x8245BFA8;
	sub_822D5870(ctx, base);
	// lwz r6,2056(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 2056);
	// addis r26,r29,6
	r26.s64 = r29.s64 + 393216;
	// li r7,1020
	ctx.r7.s64 = 1020;
	// lfs f0,36(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// neg r3,r6
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// lfs f13,40(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// addi r26,r26,-28144
	r26.s64 = r26.s64 + -28144;
	// stfs f31,2068(r28)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 2068, temp.u32);
	// clrlwi r11,r3,23
	ctx.r11.u64 = ctx.r3.u32 & 0x1FF;
	// stw r31,2048(r28)
	REX_STORE_U32(r28.u32 + 2048, r31.u32);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,2052(r28)
	REX_STORE_U32(r28.u32 + 2052, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stfs f0,4108(r26)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r26.u32 + 4108, temp.u32);
	// stw r7,4100(r26)
	REX_STORE_U32(r26.u32 + 4100, ctx.r7.u32);
	// stfs f13,4112(r26)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r26.u32 + 4112, temp.u32);
	// stw r30,4104(r26)
	REX_STORE_U32(r26.u32 + 4104, r30.u32);
	// bl 0x822d5870
	ctx.lr = 0x8245BFF4;
	sub_822D5870(ctx, base);
	// addis r30,r29,6
	r30.s64 = r29.s64 + 393216;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f30,124(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 124);
	f30.f64 = double(temp.f32);
	// addi r30,r30,-24016
	r30.s64 = r30.s64 + -24016;
	// stfs f31,4116(r26)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r26.u32 + 4116, temp.u32);
	// stfs f31,4120(r26)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r26.u32 + 4120, temp.u32);
	// stw r31,4096(r26)
	REX_STORE_U32(r26.u32 + 4096, r31.u32);
	// li r9,107
	ctx.r9.s64 = 107;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lfs f29,30900(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 30900);
	f29.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f30,2060(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 2060, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f29,2064(r30)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r30.u32 + 2064, temp.u32);
	// stw r9,2056(r30)
	REX_STORE_U32(r30.u32 + 2056, ctx.r9.u32);
	// bl 0x822d5870
	ctx.lr = 0x8245C034;
	sub_822D5870(ctx, base);
	// lwz r8,2056(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 2056);
	// addis r28,r29,6
	r28.s64 = r29.s64 + 393216;
	// stfs f31,2068(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 2068, temp.u32);
	// neg r6,r8
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// stw r31,2048(r30)
	REX_STORE_U32(r30.u32 + 2048, r31.u32);
	// addi r28,r28,-21936
	r28.s64 = r28.s64 + -21936;
	// clrlwi r3,r6,23
	ctx.r3.u64 = ctx.r6.u32 & 0x1FF;
	// li r7,127
	ctx.r7.s64 = 127;
	// stw r3,2052(r30)
	REX_STORE_U32(r30.u32 + 2052, ctx.r3.u32);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f30,2060(r28)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r28.u32 + 2060, temp.u32);
	// stfs f29,2064(r28)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r28.u32 + 2064, temp.u32);
	// stw r7,2056(r28)
	REX_STORE_U32(r28.u32 + 2056, ctx.r7.u32);
	// bl 0x822d5870
	ctx.lr = 0x8245C074;
	sub_822D5870(ctx, base);
	// lwz r11,2056(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 2056);
	// stfs f31,2068(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 2068, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r31,2048(r28)
	REX_STORE_U32(r28.u32 + 2048, r31.u32);
	// clrlwi r9,r10,23
	ctx.r9.u64 = ctx.r10.u32 & 0x1FF;
	// stw r9,2052(r28)
	REX_STORE_U32(r28.u32 + 2052, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-88(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82465470) {
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
	ctx.lr = 0x82465478;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,580(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 580);
	// li r28,0
	r28.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stw r28,716(r3)
	REX_STORE_U32(ctx.r3.u32 + 716, r28.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,648(r3)
	REX_STORE_U32(ctx.r3.u32 + 648, ctx.r10.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82465548
	if (!ctx.cr6.gt) goto loc_82465548;
	// mr r27,r28
	r27.u64 = r28.u64;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_824654AC:
	// lwz r10,584(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 584);
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mulli r11,r8,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(1776));
	// add r31,r11,r26
	r31.u64 = ctx.r11.u64 + r26.u64;
	// addi r3,r31,1616
	ctx.r3.s64 = r31.s64 + 1616;
	// bl 0x822d5870
	ctx.lr = 0x824654D0;
	sub_822D5870(ctx, base);
	// stw r28,468(r31)
	REX_STORE_U32(r31.u32 + 468, r28.u32);
	// stw r28,472(r31)
	REX_STORE_U32(r31.u32 + 472, r28.u32);
	// stw r28,476(r31)
	REX_STORE_U32(r31.u32 + 476, r28.u32);
	// stw r28,480(r31)
	REX_STORE_U32(r31.u32 + 480, r28.u32);
	// lhz r7,182(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 182);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82465524
	if (!ctx.cr6.gt) goto loc_82465524;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_824654F4:
	// mulli r11,r30,56
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(56));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,200
	ctx.r4.s64 = ctx.r11.s64 + 200;
	// bl 0x82246ca8
	ctx.lr = 0x82465508;
	sub_82246CA8(ctx, base);
	// lhz r9,182(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 182);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x824654f4
	if (ctx.cr6.lt) goto loc_824654F4;
loc_82465524:
	// addi r11,r27,1
	ctx.r11.s64 = r27.s64 + 1;
	// stw r28,188(r31)
	REX_STORE_U32(r31.u32 + 188, r28.u32);
	// lhz r10,580(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 580);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x824654ac
	if (ctx.cr6.lt) goto loc_824654AC;
loc_82465548:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8246BA58) {
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
	// addi r30,r3,224
	r30.s64 = ctx.r3.s64 + 224;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8246e538
	ctx.lr = 0x8246BA80;
	sub_8246E538(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246badc
	if (ctx.cr6.lt) goto loc_8246BADC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824658f8
	ctx.lr = 0x8246BA98;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246badc
	if (ctx.cr6.lt) goto loc_8246BADC;
loc_8246BAA0:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,296(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 296);
	// cmpwi cr6,r10,127
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 127, ctx.xer);
	// bne cr6,0x8246bad4
	if (!ctx.cr6.eq) goto loc_8246BAD4;
	// addi r11,r11,127
	ctx.r11.s64 = ctx.r11.s64 + 127;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r11.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824658f8
	ctx.lr = 0x8246BAC8;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8246baa0
	if (!ctx.cr6.lt) goto loc_8246BAA0;
	// b 0x8246badc
	goto loc_8246BADC;
loc_8246BAD4:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r11.u32);
loc_8246BADC:
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

DEFINE_REX_FUNC(sub_8246D310) {
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
	ctx.lr = 0x8246D318;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// lwz r27,0(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r29,r3,224
	r29.s64 = ctx.r3.s64 + 224;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r28,r4,1776
	r28.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1776));
	// lwz r11,320(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 320);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r24,r9,r10
	r24.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r25,r11,r28
	r25.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x8246e538
	ctx.lr = 0x8246D354;
	sub_8246E538(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246d464
	if (ctx.cr6.lt) goto loc_8246D464;
	// lhz r11,114(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 114);
	// li r23,1
	r23.s64 = 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8246d390
	if (ctx.cr6.gt) goto loc_8246D390;
	// lwz r11,132(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 132);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8246d390
	if (ctx.cr6.eq) goto loc_8246D390;
	// lwz r11,424(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 424);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stb r23,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r23.u8);
	// b 0x8246d3c0
	goto loc_8246D3C0;
loc_8246D390:
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824658f8
	ctx.lr = 0x8246D3A4;
	sub_824658F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246d464
	if (ctx.cr6.lt) goto loc_8246D464;
	// lwz r11,424(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 424);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stb r10,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
loc_8246D3C0:
	// lwz r11,424(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 424);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8246d414
	if (!ctx.cr6.eq) goto loc_8246D414;
	// lwz r11,444(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8246d414
	if (!ctx.cr6.eq) goto loc_8246D414;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824658f8
	ctx.lr = 0x8246D3F4;
	sub_824658F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246d464
	if (ctx.cr6.lt) goto loc_8246D464;
	// lwz r11,320(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 320);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + r28.u64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,436(r9)
	REX_STORE_U32(ctx.r9.u32 + 436, ctx.r8.u32);
loc_8246D414:
	// lwz r11,424(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 424);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8246d460
	if (!ctx.cr6.eq) goto loc_8246D460;
	// lwz r11,444(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 444);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8246d460
	if (!ctx.cr6.eq) goto loc_8246D460;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// sth r26,32(r11)
	REX_STORE_U16(ctx.r11.u32 + 32, r26.u16);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r26,124(r31)
	REX_STORE_U32(r31.u32 + 124, r26.u32);
	// lwz r9,304(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 304);
	// lwz r11,320(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 320);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822d4fa0
	ctx.lr = 0x8246D460;
	sub_822D4FA0(ctx, base);
loc_8246D460:
	// stw r23,4(r24)
	REX_STORE_U32(r24.u32 + 4, r23.u32);
loc_8246D464:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82472FD0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82472FF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82473014;
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

DEFINE_REX_FUNC(sub_824735F0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,148(r3)
	REX_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82473790) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82473820) {
	REX_FUNC_PROLOGUE();
	// lwz r3,104(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82473828) {
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
	// lwz r3,128(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r10,144(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 144);
	// lwz r4,124(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 124);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247386C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,2184
	ctx.r11.s64 = 143130624;
	// ori r11,r11,1638
	ctx.r11.u64 = ctx.r11.u64 | 1638;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82473888
	if (!ctx.cr6.eq) goto loc_82473888;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
loc_82473888:
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

DEFINE_REX_FUNC(sub_82474508) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r5,r3,256
	ctx.r5.s64 = ctx.r3.s64 + 256;
	// addi r4,r10,-6500
	ctx.r4.s64 = ctx.r10.s64 + -6500;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82474544;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82474584
	if (ctx.cr0.lt) goto loc_82474584;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r5,r30,260
	ctx.r5.s64 = r30.s64 + 260;
	// addi r4,r10,11052
	ctx.r4.s64 = ctx.r10.s64 + 11052;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247456C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16386
	ctx.r11.u64 = ctx.r11.u64 | 16386;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_82474584:
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

DEFINE_REX_FUNC(sub_82475D30) {
	REX_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82475DD0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,96(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82475FD0) {
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
	// bl 0x82475f10
	ctx.lr = 0x82475FF0;
	sub_82475F10(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82476000
	if (ctx.cr0.eq) goto loc_82476000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x82476000;
	sub_82473600(ctx, base);
loc_82476000:
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

DEFINE_REX_FUNC(sub_8247A308) {
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
	ctx.lr = 0x8247A310;
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
	// ble cr6,0x8247a410
	if (!ctx.cr6.gt) goto loc_8247A410;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,0
	r28.s64 = 0;
	// lfs f12,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f12.f64 = double(temp.f32);
loc_8247A35C:
	// lwz r29,16(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 16);
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r29.s32, ctx.xer);
	// bge cr6,0x8247a3ac
	if (!ctx.cr6.lt) goto loc_8247A3AC;
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
loc_8247A388:
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
	// blt cr6,0x8247a388
	if (ctx.cr6.lt) goto loc_8247A388;
loc_8247A3AC:
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
	// bge cr6,0x8247a3fc
	if (!ctx.cr6.lt) goto loc_8247A3FC;
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
loc_8247A3E0:
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
	// blt cr6,0x8247a3e0
	if (ctx.cr6.lt) goto loc_8247A3E0;
loc_8247A3FC:
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
	// blt cr6,0x8247a35c
	if (ctx.cr6.lt) goto loc_8247A35C;
loc_8247A410:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8247a450
	if (ctx.cr6.lt) goto loc_8247A450;
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
	// bl 0x822d4fa0
	ctx.lr = 0x8247A43C;
	sub_822D4FA0(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subf r11,r30,r26
	ctx.r11.u64 = r26.u64 - r30.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// b 0x8247a494
	goto loc_8247A494;
loc_8247A450:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d6840
	ctx.lr = 0x8247A464;
	sub_822D6840(ctx, base);
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
	// bl 0x822d4fa0
	ctx.lr = 0x8247A484;
	sub_822D4FA0(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subf r11,r30,r26
	ctx.r11.u64 = r26.u64 - r30.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r7.u32);
loc_8247A494:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8247a4a4
	if (ctx.cr6.eq) goto loc_8247A4A4;
	// stw r30,0(r25)
	REX_STORE_U32(r25.u32 + 0, r30.u32);
loc_8247A4A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82484190) {
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
	ctx.lr = 0x82484198;
	// stwu r1,-1728(r1)
	ea = -1728 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r25,1312(r4)
	r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 1312);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// ori r8,r10,45236
	ctx.r8.u64 = ctx.r10.u64 | 45236;
	// addi r9,r1,223
	ctx.r9.s64 = ctx.r1.s64 + 223;
	// addi r7,r1,796
	ctx.r7.s64 = ctx.r1.s64 + 796;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r6,r9,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// lwzx r10,r3,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// rlwinm r5,r7,0,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r6,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r6.u32);
	// stw r5,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r5.u32);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// lwz r10,22268(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 22268);
	// li r15,0
	r15.s64 = 0;
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// mr r19,r25
	r19.u64 = r25.u64;
	// lwz r11,22280(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 22280);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r15,0(r31)
	REX_STORE_U32(r31.u32 + 0, r15.u32);
	// mr r21,r15
	r21.u64 = r15.u64;
	// stw r15,4(r31)
	REX_STORE_U32(r31.u32 + 4, r15.u32);
	// mr r20,r15
	r20.u64 = r15.u64;
	// sth r15,16(r31)
	REX_STORE_U16(r31.u32 + 16, r15.u16);
	// mr r18,r15
	r18.u64 = r15.u64;
	// lhz r6,50(r29)
	ctx.r6.u64 = REX_LOAD_U16(r29.u32 + 50);
	// mr r17,r15
	r17.u64 = r15.u64;
	// lhz r5,52(r29)
	ctx.r5.u64 = REX_LOAD_U16(r29.u32 + 52);
	// rlwinm r14,r5,31,1,31
	r14.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// lhz r16,74(r29)
	r16.u64 = REX_LOAD_U16(r29.u32 + 74);
	// rlwinm r8,r8,16,22,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x3FF;
	// mr r22,r15
	r22.u64 = r15.u64;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// rlwinm r24,r6,31,1,31
	r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x824843c8
	if (ctx.cr6.eq) goto loc_824843C8;
	// lis r27,-32161
	r27.s64 = -2107703296;
	// lis r26,-32161
	r26.s64 = -2107703296;
loc_8248424C:
	// stw r18,8(r31)
	REX_STORE_U32(r31.u32 + 8, r18.u32);
	// cmplw cr6,r22,r8
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r8.u32, ctx.xer);
	// stw r17,12(r31)
	REX_STORE_U32(r31.u32 + 12, r17.u32);
	// sth r15,18(r31)
	REX_STORE_U16(r31.u32 + 18, r15.u16);
	// bne cr6,0x82484378
	if (!ctx.cr6.eq) goto loc_82484378;
	// mr r23,r15
	r23.u64 = r15.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82484378
	if (ctx.cr6.eq) goto loc_82484378;
loc_8248426C:
	// cmplw cr6,r23,r7
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82484328
	if (!ctx.cr6.eq) goto loc_82484328;
	// ld r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U64(r25.u32 + 0);
	// mr r30,r15
	r30.u64 = r15.u64;
	// rldicl r10,r11,8,56
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFF;
	// clrlwi r28,r10,26
	r28.u64 = ctx.r10.u32 & 0x3F;
loc_82484284:
	// srawi r11,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r11.s64 = r30.s32 >> 2;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r9,r30,140
	ctx.r9.s64 = r30.s64 + 140;
	// lwz r8,40(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 40);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r10,-128
	ctx.r3.s64 = ctx.r10.s64 + -128;
	// li r4,-128
	ctx.r4.s64 = -128;
	// lwzx r10,r6,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + r29.u32);
	// lwzx r11,r5,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// dcbt r4,r3
	// dcbzl r0,r8
	ea = (ctx.r8.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// srawi r10,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r10.s64 = r30.s32 >> 2;
	// lwz r8,392(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 392);
	// rlwinm r11,r28,6,18,25
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 6) & 0x3FC0;
	// addi r10,r10,45
	ctx.r10.s64 = ctx.r10.s64 + 45;
	// lwz r9,5112(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 5112);
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r6,5100(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 5100);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lhzx r8,r8,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + r29.u32);
	// bl 0x823ae2e8
	ctx.lr = 0x824842EC;
	sub_823AE2E8(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(r30.s32, 6, ctx.xer);
	// blt cr6,0x82484284
	if (ctx.cr6.lt) goto loc_82484284;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// rlwinm r8,r7,16,22,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0x3FF;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r22,r8
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8248426c
	if (ctx.cr6.eq) goto loc_8248426C;
	// b 0x82484378
	goto loc_82484378;
loc_82484328:
	// lhz r10,18(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 18);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// clrlwi r3,r6,16
	ctx.r3.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r5,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r4,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// sth r3,18(r31)
	REX_STORE_U16(r31.u32 + 18, ctx.r3.u16);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r23,r24
	ctx.cr6.compare<uint32_t>(r23.u32, r24.u32, ctx.xer);
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// blt cr6,0x8248426c
	if (ctx.cr6.lt) goto loc_8248426C;
loc_82484378:
	// lhz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 16);
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r24,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// add r21,r10,r21
	r21.u64 = ctx.r10.u64 + r21.u64;
	// add r19,r11,r19
	r19.u64 = ctx.r11.u64 + r19.u64;
	// add r20,r24,r20
	r20.u64 = r24.u64 + r20.u64;
	// stw r21,0(r31)
	REX_STORE_U32(r31.u32 + 0, r21.u32);
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r10,r16,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r20,4(r31)
	REX_STORE_U32(r31.u32 + 4, r20.u32);
	// rlwinm r11,r16,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r6,16(r31)
	REX_STORE_U16(r31.u32 + 16, ctx.r6.u16);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// mr r25,r19
	r25.u64 = r19.u64;
	// add r18,r10,r18
	r18.u64 = ctx.r10.u64 + r18.u64;
	// add r17,r11,r17
	r17.u64 = ctx.r11.u64 + r17.u64;
	// cmplw cr6,r22,r14
	ctx.cr6.compare<uint32_t>(r22.u32, r14.u32, ctx.xer);
	// blt cr6,0x8248424c
	if (ctx.cr6.lt) goto loc_8248424C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_824843C8:
	// addi r1,r1,1728
	ctx.r1.s64 = ctx.r1.s64 + 1728;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_824A5FB8) {
	REX_FUNC_PROLOGUE();
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
	PPCVRegister v69{};
	uint32_t ea{};
	// li r7,32
	ctx.r7.s64 = 32;
	// lvx v5,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,16
	ctx.r6.s64 = 16;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// li r8,48
	ctx.r8.s64 = 48;
	// vspltish v10,1
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x1)));
	// vspltish v31,3
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_set1_epi16(short(0x3)));
	// vor128 v16,v69,v69
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_load_si128((simde__m128i*)v69.u8));
	// vspltish v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x2)));
	// li r10,64
	ctx.r10.s64 = 64;
	// lvx v7,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v13,5
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x5)));
	// vaddshs v28,v5,v7
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// lvx v6,r6,r3
	ea = (ctx.r6.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx v8,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubuhm v29,v5,v7
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vaddshs v30,v6,v8
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vspltish v25,1
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_set1_epi16(short(0x1)));
	// vslh v3,v6,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v26,2
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v1,v28,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v27,3
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_set1_epi16(short(0x3)));
	// vslh v2,v29,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v17,8
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_set1_epi16(short(0x8)));
	// vslh v9,v30,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v21,6
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_set1_epi16(short(0x6)));
	// vslh v30,v30,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v24,0
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_set1_epi16(short(0x0)));
	// vaddshs v1,v1,v28
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// li r11,80
	ctx.r11.s64 = 80;
	// vslh v28,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r12,96
	ctx.r12.s64 = 96;
	// vaddshs v2,v2,v29
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// li r5,112
	ctx.r5.s64 = 112;
	// vaddshs v9,v9,v30
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vslh v4,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v3,v3,v28
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v1,v1,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v2,v2,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsubuhm v4,v9,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vaddshs v3,v9,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v11,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v10,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubuhm v13,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsubuhm v12,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsrah v11,v11,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v10,v10,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v13,v13,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v12,v12,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrghh v28,v10,v11
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vmrglh v29,v10,v11
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vmrghh v30,v12,v13
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrglh v31,v12,v13
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrghw v1,v28,v30
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v30.u32), simde_mm_load_si128((simde__m128i*)v28.u32)));
	// vmrglw v3,v29,v31
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v31.u32), simde_mm_load_si128((simde__m128i*)v29.u32)));
	// vmrghw v2,v29,v31
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v31.u32), simde_mm_load_si128((simde__m128i*)v29.u32)));
	// vslh v29,v17,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglw v4,v28,v30
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v30.u32), simde_mm_load_si128((simde__m128i*)v28.u32)));
	// vsldoi v5,v1,v1,8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), 8));
	// vslh v18,v1,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v6,v3,v3,8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), 8));
	// vslh v1,v1,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v2,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v7,v2,v2,8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), 8));
	// vslh v2,v2,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v28,4
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_set1_epi16(short(0x4)));
	// vsldoi v8,v4,v4,8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8), 8));
	// vaddshs v13,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v1,v1,v18
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vslh v10,v6,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v2,v2,v19
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vslh v9,v13,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v6,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v6,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v1,v1,v29
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vsubuhm v9,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vslh v18,v5,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v5,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v6,v6,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v10,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubuhm v11,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vslh v5,v5,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// vsubuhm v10,v10,v17
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vslh v9,v13,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v11,v11,v18
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vaddshs v5,v5,v19
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vaddshs v12,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vslh v18,v7,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v7,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v6,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vaddshs v5,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v9,v12,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v17,v17,v18
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vslh v19,v8,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v6,v6,v20
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vslh v20,v8,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v17,v9,v17
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vsubuhm v19,v9,v19
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vslh v9,v12,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v4,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v10,v10,v17
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vsubuhm v19,v19,v20
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vslh v17,v7,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v9,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v20,v8,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v11,v11,v19
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vaddshs v17,v17,v7
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vslh v19,v8,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v7,v3,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v23,v12,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubuhm v17,v9,v17
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vsubuhm v19,v9,v19
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vaddshs v9,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubuhm v1,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vaddshs v2,v3,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v5,v5,v17
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vaddshs v7,v7,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vslh v17,v4,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v2,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v22,v13,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v5,v5,v23
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vsubuhm v19,v19,v20
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vsubuhm v7,v2,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vsubuhm v2,v2,v17
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v10,v10,v22
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vaddshs v6,v6,v19
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vaddshs v8,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsubuhm v2,v2,v18
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vsubuhm v9,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vaddshs v6,v6,v23
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vaddshs v24,v8,v5
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubuhm v2,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vaddshs v11,v11,v22
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vsubuhm v31,v8,v5
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vsrah v24,v24,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubuhm v7,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vaddshs v1,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v27,v9,v6
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vperm v24,v24,v24,v16
	simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// vsubuhm v28,v9,v6
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vaddshs v25,v7,v10
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubuhm v30,v7,v10
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vaddshs v26,v1,v11
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubuhm v29,v1,v11
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vsrah v25,v25,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v31,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v27,v27,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvewx v24,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, v24.u32[3 - ((ea & 0xF) >> 2)]);
	// vsrah v28,v28,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvewx v24,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, v24.u32[3 - ((ea & 0xF) >> 2)]);
	// vperm v25,v25,v25,v16
	simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// vsrah v30,v30,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v26,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vperm v31,v31,v31,v16
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// vsrah v29,v29,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vperm v27,v27,v27,v16
	simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// vperm v28,v28,v28,v16
	simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// vperm v30,v30,v30,v16
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// vperm v26,v26,v26,v16
	simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// vperm v29,v29,v29,v16
	simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// stvewx v25,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, v25.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v25,r6,r3
	ea = (ctx.r6.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, v25.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v26,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, v26.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v26,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, v26.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v27,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, v27.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v27,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, v27.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v28,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, v28.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v28,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, v28.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r12,r3
	ea = (ctx.r12.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r5,r4
	ea = (ctx.r5.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, v31.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r5,r3
	ea = (ctx.r5.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, v31.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824B3188) {
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
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r8,196(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// subfic r9,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	ctx.r9.u64 = static_cast<uint64_t>(8) - ctx.r11.u64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r8,r7,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// li r7,4
	ctx.r7.s64 = 4;
	// and r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 & ctx.r10.u64;
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// slw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// vsplth v1,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// bl 0x824b0010
	ctx.lr = 0x824B31D8;
	sub_824B0010(ctx, base);
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

DEFINE_REX_FUNC(sub_824B3AE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x824B3AF0;
	// stwu r1,-912(r1)
	ea = -912 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,996(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 996);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// li r8,4
	ctx.r8.s64 = 4;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// slw r29,r8,r10
	r29.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// slw r28,r7,r9
	r28.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// subfic r10,r5,8
	ctx.xer.ca = ctx.r5.u32 <= 8;
	ctx.r10.u64 = static_cast<uint64_t>(8) - ctx.r5.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x824a9408
	ctx.lr = 0x824B3B3C;
	sub_824A9408(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// vsplth v1,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// bl 0x824b0b18
	ctx.lr = 0x824B3B60;
	sub_824B0B18(ctx, base);
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_824B4DD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x824B4DE0;
	// stwu r1,-912(r1)
	ea = -912 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,996(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 996);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// li r8,4
	ctx.r8.s64 = 4;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// slw r29,r8,r10
	r29.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// slw r28,r7,r9
	r28.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// subfic r10,r5,8
	ctx.xer.ca = ctx.r5.u32 <= 8;
	ctx.r10.u64 = static_cast<uint64_t>(8) - ctx.r5.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x824a9408
	ctx.lr = 0x824B4E2C;
	sub_824A9408(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// vsplth v1,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// bl 0x824b0fd8
	ctx.lr = 0x824B4E50;
	sub_824B0FD8(ctx, base);
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_824B58F8) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e7c
	ctx.lr = 0x824B5900;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1156(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 1156);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r25,r1,128
	r25.s64 = ctx.r1.s64 + 128;
	// lwz r8,1148(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 1148);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// vspltish v0,7
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x7)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r31,1164(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 1164);
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// lwz r28,308(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,144
	r26.s64 = ctx.r1.s64 + 144;
	// stw r8,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vspltish v1,3
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x3)));
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v12,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// vsplth v2,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vsplth v11,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xD0C))));
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// stvx128 v0,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// stvx128 v11,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824a6eb0
	ctx.lr = 0x824B5978;
	sub_824A6EB0(ctx, base);
	// cntlzw r5,r28
	ctx.r5.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// vspltish v10,8
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x8)));
	// vspltish v9,-1
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// vspltisb v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// and r9,r3,r27
	ctx.r9.u64 = ctx.r3.u64 & r27.u64;
	// vspltish v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x2)));
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// vslh v2,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// vspltish v5,5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x5)));
	// slw r9,r4,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
	// vspltish v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x0)));
	// bne cr6,0x824b5a64
	if (!ctx.cr6.eq) goto loc_824B5A64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824b5b5c
	if (!ctx.cr6.gt) goto loc_824B5B5C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_824B59D8:
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvx128 v63,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v9,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// vsldoi128 v11,v13,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v10,v13,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// vsldoi128 v13,v13,v63,6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 10));
	// vsubshs v4,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// lvx128 v3,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v11,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v31,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v10,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v26,v30,v1
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v25,v29,v11
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v24,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v23,v27,v28
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v22,v25,v26
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vsubshs v21,v13,v24
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vadduhm v20,v22,v23
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v19,v21,v4
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v18,v20,v3
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v17,v18,v19
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vsrah v16,v17,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v62,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vor v8,v8,v16
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// stvewx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// bdnz 0x824b59d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B59D8;
	// b 0x824b5b5c
	goto loc_824B5B5C;
loc_824B5A64:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824b5b5c
	if (!ctx.cr6.gt) goto loc_824B5B5C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_824B5A7C:
	// lvx128 v13,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvx128 v11,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v10,v11,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 14));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// vsldoi128 v9,v13,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsubshs v31,v7,v3
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi v4,v11,v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 12));
	// vsldoi128 v3,v13,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// vsubshs v30,v7,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v10,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v11,v11,v13,6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 10));
	// vslh v28,v9,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v13,v13,v61,6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 10));
	// vslh v27,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v21,v27,v29
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v20,v26,v10
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v23,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v4,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v25,v28
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v16,v24,v9
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v18,v3,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v10,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v9,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vadduhm v4,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vslh v14,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v3,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vsubshs v1,v13,v15
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// lvx128 v13,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v28,v9,v10
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubshs v29,v11,v14
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vadduhm v27,v3,v4
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v26,v1,v31
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v24,v28,v13
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v25,v29,v30
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v23,v27,v13
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// lvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v22,v24,v25
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v21,v23,v26
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vsrah v20,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v60,v8,v20
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v20.u8)));
	// vpkshus128 v59,v20,v19
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vor128 v8,v60,v19
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)v19.u8)));
	// stvx128 v59,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// bdnz 0x824b5a7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B5A7C;
loc_824B5B5C:
	// vand v0,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// mfocrf r11,2
	ctx.r11.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ecc
	return;
}

