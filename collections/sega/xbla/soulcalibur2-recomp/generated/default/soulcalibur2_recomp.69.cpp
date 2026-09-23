#include "soulcalibur2_funcs.69.h"

DEFINE_REX_FUNC(sub_820E4A00) {
	REX_FUNC_PROLOGUE();
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r10,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E4DF0) {
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
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820e4e48
	if (!ctx.cr6.gt) goto loc_820E4E48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 80);
	// bl 0x822c8418
	ctx.lr = 0x820E4E1C;
	sub_822C8418(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f3,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x821afa50
	ctx.lr = 0x820E4E38;
	sub_821AFA50(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// stw r10,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r10.u32);
loc_820E4E48:
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

DEFINE_REX_FUNC(sub_820E7E28) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820e7e50
	if (ctx.cr6.eq) goto loc_820E7E50;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820e7e50
	if (ctx.cr6.eq) goto loc_820E7E50;
	// bl 0x820e7d50
	ctx.lr = 0x820E7E50;
	sub_820E7D50(ctx, base);
loc_820E7E50:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ffed0
	ctx.lr = 0x820E7E5C;
	sub_821FFED0(ctx, base);
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

DEFINE_REX_FUNC(sub_820EB458) {
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
	ctx.lr = 0x820EB460;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f2c
	ctx.lr = 0x820EB468;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820eb480
	if (!ctx.cr6.eq) goto loc_820EB480;
	// bl 0x820eb320
	ctx.lr = 0x820EB480;
	sub_820EB320(ctx, base);
loc_820EB480:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820eb6cc
	if (ctx.cr6.eq) goto loc_820EB6CC;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r28,r11,432
	r28.s64 = ctx.r11.s64 + 432;
	// addi r3,r28,84
	ctx.r3.s64 = r28.s64 + 84;
	// bl 0x821d6398
	ctx.lr = 0x820EB49C;
	sub_821D6398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820eb4b0
	if (!ctx.cr0.eq) goto loc_820EB4B0;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
loc_820EB4B0:
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r11,-28232
	ctx.r3.s64 = ctx.r11.s64 + -28232;
	// lwz r11,-28232(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -28232);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EB4CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82200ad0
	ctx.lr = 0x820EB4D4;
	sub_82200AD0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,16616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16616);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200ac8
	ctx.lr = 0x820EB4E4;
	sub_82200AC8(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 28);
	// lwz r10,10140(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 10140);
	// rlwinm r8,r10,14,0,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFFFFC000;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f0,20144(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20144);
	ctx.f0.f64 = double(temp.f32);
	// lwz r30,24(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 24);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lfs f11,40(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f13,20080(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20080);
	ctx.f13.f64 = double(temp.f32);
	// lfs f26,20076(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20076);
	f26.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820eb528
	if (ctx.cr6.lt) goto loc_820EB528;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_820EB528:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f0,13284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 13284);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f10,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f27,20084(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20084);
	f27.f64 = double(temp.f32);
	// lfs f12,13284(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 13284);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f12,16260(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16260);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2008(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fadds f28,f12,f13
	f28.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(f28.f64, ctx.f0.f64);
	// blt cr6,0x820eb568
	if (ctx.cr6.lt) goto loc_820EB568;
	// fmr f28,f0
	f28.f64 = ctx.f0.f64;
loc_820EB568:
	// lwz r10,40(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 40);
	// cmpwi cr6,r10,19
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 19, ctx.xer);
	// beq cr6,0x820eb5a0
	if (ctx.cr6.eq) goto loc_820EB5A0;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x820eb5a0
	if (ctx.cr6.eq) goto loc_820EB5A0;
	// lhz r10,90(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 90);
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// bne cr6,0x820eb594
	if (!ctx.cr6.eq) goto loc_820EB594;
	// lwz r10,32(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 32);
	// cmpwi cr6,r10,19
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 19, ctx.xer);
	// beq cr6,0x820eb5a0
	if (ctx.cr6.eq) goto loc_820EB5A0;
loc_820EB594:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x820eb5a4
	if (ctx.cr0.eq) goto loc_820EB5A4;
loc_820EB5A0:
	// fneg f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
loc_820EB5A4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	f31.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,2360(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2360);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 * ctx.f13.f64));
	// lfs f30,2364(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2364);
	f30.f64 = double(temp.f32);
	// fmuls f29,f13,f30
	f29.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(f29.f64, ctx.f0.f64);
	// bgt cr6,0x820eb5cc
	if (ctx.cr6.gt) goto loc_820EB5CC;
	// fmr f29,f0
	f29.f64 = ctx.f0.f64;
loc_820EB5CC:
	// lfs f0,10312(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10312);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fadds f25,f0,f11
	f25.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// bl 0x822009d0
	ctx.lr = 0x820EB5DC;
	sub_822009D0(ctx, base);
	// fsubs f1,f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f25.f64 - ctx.f1.f64));
	// bl 0x82201938
	ctx.lr = 0x820EB5E4;
	sub_82201938(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// lfs f31,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// bl 0x82201850
	ctx.lr = 0x820EB5FC;
	sub_82201850(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82200730
	ctx.lr = 0x820EB604;
	sub_82200730(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f29,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	f29.f64 = double(temp.f32);
	// bl 0x822009c8
	ctx.lr = 0x820EB610;
	sub_822009C8(ctx, base);
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// bl 0x82201938
	ctx.lr = 0x820EB61C;
	sub_82201938(ctx, base);
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f29.f64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// bl 0x82201850
	ctx.lr = 0x820EB62C;
	sub_82201850(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82200720
	ctx.lr = 0x820EB634;
	sub_82200720(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82200a38
	ctx.lr = 0x820EB63C;
	sub_82200A38(ctx, base);
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f13,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82200a40
	ctx.lr = 0x820EB654;
	sub_82200A40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82200a08
	ctx.lr = 0x820EB65C;
	sub_82200A08(ctx, base);
	// fsubs f0,f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f26.f64 - ctx.f1.f64));
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82200760
	ctx.lr = 0x820EB670;
	sub_82200760(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82200a10
	ctx.lr = 0x820EB678;
	sub_82200A10(ctx, base);
	// fsubs f0,f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f28.f64 - ctx.f1.f64));
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82200770
	ctx.lr = 0x820EB68C;
	sub_82200770(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82200a18
	ctx.lr = 0x820EB694;
	sub_82200A18(ctx, base);
	// fsubs f0,f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f27.f64 - ctx.f1.f64));
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82200780
	ctx.lr = 0x820EB6A8;
	sub_82200780(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82200a10
	ctx.lr = 0x820EB6B0;
	sub_82200A10(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820eb6c4
	if (!ctx.cr6.lt) goto loc_820EB6C4;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_820EB6C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82200758
	ctx.lr = 0x820EB6CC;
	sub_82200758(ctx, base);
loc_820EB6CC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f78
	ctx.lr = 0x820EB6D8;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_820FC698) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r9,r11,10144
	ctx.r9.s64 = ctx.r11.s64 + 10144;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r9,-112
	ctx.r11.s64 = ctx.r9.s64 + -112;
	// stw r10,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820FC6BC:
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
	// bdnz 0x820fc6bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FC6BC;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820FC710:
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
	// bdnz 0x820fc710
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FC710;
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

DEFINE_REX_FUNC(sub_820FF2F8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f3,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82204ae0
	ctx.lr = 0x820FF320;
	sub_82204AE0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// lfs f0,2028(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2028);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
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

DEFINE_REX_FUNC(sub_82100768) {
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
	// bl 0x821003c0
	ctx.lr = 0x82100778;
	sub_821003C0(ctx, base);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82100C10) {
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
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r31,r11,22576
	r31.s64 = ctx.r11.s64 + 22576;
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82100c6c
	if (ctx.cr6.eq) goto loc_82100C6C;
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82100c6c
	if (ctx.cr6.eq) goto loc_82100C6C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r10,r10,32832
	ctx.r10.u64 = ctx.r10.u64 | 32832;
	// li r3,15
	ctx.r3.s64 = 15;
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// lfs f1,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x8212bc38
	ctx.lr = 0x82100C64;
	sub_8212BC38(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
loc_82100C6C:
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

DEFINE_REX_FUNC(sub_821067E0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23636(r10)
	REX_STORE_U32(ctx.r10.u32 + 23636, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82106980) {
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
	ctx.lr = 0x82106988;
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
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r28,r11,22960
	r28.s64 = ctx.r11.s64 + 22960;
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821069b8
	if (!ctx.cr0.eq) goto loc_821069B8;
loc_821069AC:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// b 0x82106b88
	goto loc_82106B88;
loc_821069B8:
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r28,228
	ctx.r10.s64 = r28.s64 + 228;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821069e4
	if (!ctx.cr6.eq) goto loc_821069E4;
	// addi r10,r28,280
	ctx.r10.s64 = r28.s64 + 280;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821069ac
	if (!ctx.cr6.eq) goto loc_821069AC;
loc_821069E4:
	// lwz r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821069ac
	if (!ctx.cr6.eq) goto loc_821069AC;
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82106c34
	if (ctx.cr6.eq) goto loc_82106C34;
	// lis r29,-32165
	r29.s64 = -2107965440;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// addi r30,r11,432
	r30.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,124
	ctx.r3.u64 = ctx.r3.u64 | 124;
	// lwz r11,-32480(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -32480);
	// addi r31,r11,80
	r31.s64 = ctx.r11.s64 + 80;
	// lwz r4,344(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 344);
	// lfs f30,100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 100);
	f30.f64 = double(temp.f32);
	// lwz r27,84(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// lfs f29,96(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 96);
	f29.f64 = double(temp.f32);
	// bl 0x820e68b8
	ctx.lr = 0x82106A2C;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r5,r10,27488
	ctx.r5.s64 = ctx.r10.s64 + 27488;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfd f31,26664(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 26664);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stfd f31,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f31.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f31,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821eb1a0
	ctx.lr = 0x82106A68;
	sub_821EB1A0(ctx, base);
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// lwz r4,344(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 344);
	// ori r3,r3,124
	ctx.r3.u64 = ctx.r3.u64 | 124;
	// lwz r27,4(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x820e68b8
	ctx.lr = 0x82106A7C;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfd f31,72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 72, f31.u64);
	// stfd f31,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, f31.u64);
	// ld r10,72(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 72);
	// stfd f30,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f30.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f29,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f29.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfd f3,27456(r11)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r11.u32 + 27456);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfd f3,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// addi r11,r11,27464
	ctx.r11.s64 = ctx.r11.s64 + 27464;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r8,36(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 36);
	// fmr f5,f31
	ctx.f5.f64 = f31.f64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x821eacb0
	ctx.lr = 0x82106ADC;
	sub_821EACB0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82106ba8
	if (ctx.cr6.lt) goto loc_82106BA8;
	// beq cr6,0x82106b94
	if (ctx.cr6.eq) goto loc_82106B94;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82106c34
	if (!ctx.cr6.lt) goto loc_82106C34;
	// addi r3,r30,84
	ctx.r3.s64 = r30.s64 + 84;
	// bl 0x821d6398
	ctx.lr = 0x82106AFC;
	sub_821D6398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82106b78
	if (!ctx.cr0.eq) goto loc_82106B78;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f12,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f13,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82106b38
	if (ctx.cr6.gt) goto loc_82106B38;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82106B38:
	// lbz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// addi r10,r10,225
	ctx.r10.s64 = ctx.r10.s64 + 225;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stb r10,28(r31)
	REX_STORE_U8(r31.u32 + 28, ctx.r10.u8);
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r11,r9,r8
	temp.u8 = (~ctx.r9.u32 + ctx.r8.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// oris r10,r11,65486
	ctx.r10.u64 = ctx.r11.u64 | 4291690496;
	// stb r11,28(r31)
	REX_STORE_U8(r31.u32 + 28, ctx.r11.u8);
	// ori r10,r10,16128
	ctx.r10.u64 = ctx.r10.u64 | 16128;
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
loc_82106B78:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// ble cr6,0x82106c34
	if (!ctx.cr6.gt) goto loc_82106C34;
	// lwz r11,-32480(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -32480);
loc_82106B88:
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// b 0x82106c34
	goto loc_82106C34;
loc_82106B94:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,2
	ctx.r10.s64 = 2;
	// lfs f0,2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// b 0x82106c30
	goto loc_82106C30;
loc_82106BA8:
	// addi r3,r30,84
	ctx.r3.s64 = r30.s64 + 84;
	// bl 0x821d6398
	ctx.lr = 0x82106BB0;
	sub_821D6398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82106c0c
	if (!ctx.cr0.eq) goto loc_82106C0C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82106bfc
	if (ctx.cr6.gt) goto loc_82106BFC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82106BFC:
	// lis r11,-50
	ctx.r11.s64 = -3276800;
	// stfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// ori r11,r11,16383
	ctx.r11.u64 = ctx.r11.u64 | 16383;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
loc_82106C0C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,180
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 180, ctx.xer);
	// ble cr6,0x82106c20
	if (!ctx.cr6.gt) goto loc_82106C20;
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
loc_82106C20:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,652(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 652);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82106c34
	if (ctx.cr6.eq) goto loc_82106C34;
loc_82106C30:
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
loc_82106C34:
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

DEFINE_REX_FUNC(sub_821146F8) {
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
	ctx.lr = 0x82114700;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,92(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x82114b0c
	if (ctx.cr6.eq) goto loc_82114B0C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r29,r10,13128
	r29.s64 = ctx.r10.s64 + 13128;
	// lfs f30,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f30.f64 = double(temp.f32);
loc_82114730:
	// lwa r9,4(r31)
	ctx.r9.s64 = int32_t(REX_LOAD_U32(r31.u32 + 4));
	// lfs f0,1840(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f31,f30,f0
	f31.f64 = double(float(f30.f64 / ctx.f0.f64));
	// std r9,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// lfd f0,128(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lwz r10,68(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 68);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82114b00
	if (!ctx.cr6.eq) goto loc_82114B00;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x82114b00
	if (ctx.cr6.gt) goto loc_82114B00;
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// addi r12,r12,29592
	ctx.r12.s64 = ctx.r12.s64 + 29592;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32239
	ctx.r12.s64 = -2112815104;
	// nop 
	// addi r12,r12,18328
	ctx.r12.s64 = ctx.r12.s64 + 18328;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82114798;
	case 1:
		goto loc_82114B00;
	case 2:
		goto loc_82114920;
	case 3:
		goto loc_82114940;
	case 4:
		goto loc_82114870;
	case 5:
		goto loc_82114980;
	case 6:
		goto loc_8211499C;
	case 7:
		goto loc_82114A14;
	case 8:
		goto loc_82114A7C;
	case 9:
		goto loc_82114AA0;
	case 10:
		goto loc_82114AC4;
	case 11:
		goto loc_82114AE8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82114798:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x821147A8;
	sub_822D4FA0(ctx, base);
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 120);
	// lwz r9,128(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 128);
	// lfs f0,1840(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f11,208(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f11.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// lfs f10,212(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f10.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lwz r10,124(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 124);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r6,116(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 116);
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f13,212(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// lwa r11,192(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 192));
	// lfs f11,216(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f11.f64 = double(temp.f32);
	// std r11,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r11.u64);
	// lfd f0,160(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f13,216(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// bl 0x82113b50
	ctx.lr = 0x8211482C;
	sub_82113B50(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,96(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 96);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// lfs f0,100(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 96);
	// lfs f13,112(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lfs f11,108(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stfs f0,216(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 216, temp.u32);
	// stfs f11,224(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 224, temp.u32);
	// stfs f12,220(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 220, temp.u32);
	// stfs f13,228(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 228, temp.u32);
	// b 0x82114b00
	goto loc_82114B00;
loc_82114870:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwa r11,16(r31)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r31.u32 + 16));
	// bne cr6,0x821148e8
	if (!ctx.cr6.eq) goto loc_821148E8;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lfs f13,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,96(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 96);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// lfd f12,112(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f12,144(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// stw r9,244(r11)
	REX_STORE_U32(ctx.r11.u32 + 244, ctx.r9.u32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// stfs f13,72(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// stfs f0,44(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// b 0x82114b00
	goto loc_82114B00;
loc_821148E8:
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f3,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f2,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lfs f1,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821afa50
	ctx.lr = 0x8211491C;
	sub_821AFA50(ctx, base);
	// b 0x82114b00
	goto loc_82114B00;
loc_82114920:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,96(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 96);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stb r9,104(r11)
	REX_STORE_U8(ctx.r11.u32 + 104, ctx.r9.u8);
	// b 0x82114b00
	goto loc_82114B00;
loc_82114940:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lfs f11,1840(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 1840);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,96(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 96);
	// lfs f0,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stfs f12,232(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 232, temp.u32);
	// stfs f13,236(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 236, temp.u32);
	// stfs f0,240(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 240, temp.u32);
	// b 0x82114b00
	goto loc_82114B00;
loc_82114980:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r11,116(r30)
	REX_STORE_U32(r30.u32 + 116, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r11,120(r30)
	REX_STORE_U32(r30.u32 + 120, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r11,124(r30)
	REX_STORE_U32(r30.u32 + 124, ctx.r11.u32);
	// b 0x82114b00
	goto loc_82114B00;
loc_8211499C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 84);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82114b00
	if (ctx.cr6.eq) goto loc_82114B00;
	// lwa r7,12(r31)
	ctx.r7.s64 = int32_t(REX_LOAD_U32(r31.u32 + 12));
	// li r8,1
	ctx.r8.s64 = 1;
	// std r7,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lwa r9,16(r31)
	ctx.r9.s64 = int32_t(REX_LOAD_U32(r31.u32 + 16));
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82114A00:
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82112fb8
	ctx.lr = 0x82114A10;
	sub_82112FB8(ctx, base);
	// b 0x82114b00
	goto loc_82114B00;
loc_82114A14:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 84);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82114b00
	if (ctx.cr6.eq) goto loc_82114B00;
	// lwa r7,16(r31)
	ctx.r7.s64 = int32_t(REX_LOAD_U32(r31.u32 + 16));
	// li r8,0
	ctx.r8.s64 = 0;
	// std r7,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r7.u64);
	// lwa r9,12(r31)
	ctx.r9.s64 = int32_t(REX_LOAD_U32(r31.u32 + 12));
	// std r9,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,136(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f0,f13
	ctx.f0.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f0,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// lwz r6,156(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// b 0x82114a00
	goto loc_82114A00;
loc_82114A7C:
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 100, temp.u32);
	// lfs f0,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 108, temp.u32);
	// lfs f0,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 104, temp.u32);
	// lfs f0,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 112, temp.u32);
	// b 0x82114b00
	goto loc_82114B00;
loc_82114AA0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,96(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 96);
	// lfs f13,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stfs f13,204(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 204, temp.u32);
	// stfs f0,212(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 212, temp.u32);
	// b 0x82114b00
	goto loc_82114B00;
loc_82114AC4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,88(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 88);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82114b00
	if (!ctx.cr6.eq) goto loc_82114B00;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r11,68(r30)
	REX_STORE_U32(r30.u32 + 68, ctx.r11.u32);
	// b 0x82114b00
	goto loc_82114B00;
loc_82114AE8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r9,96(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 96);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stb r10,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r10.u8);
loc_82114B00:
	// lwzu r11,44(r31)
	ea = 44 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82114730
	if (!ctx.cr6.eq) goto loc_82114730;
loc_82114B0C:
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r30)
	REX_STORE_U32(r30.u32 + 68, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82125C68) {
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
	ctx.lr = 0x82125C70;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lfs f0,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82125C94:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,34
	ctx.r9.s64 = ctx.r11.s64 + 34;
	// addi r7,r11,78
	ctx.r7.s64 = ctx.r11.s64 + 78;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,8
	ctx.r6.s64 = 8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r8,r9,r31
	REX_STORE_U32(ctx.r9.u32 + r31.u32, ctx.r8.u32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// stw r8,276(r10)
	REX_STORE_U32(ctx.r10.u32 + 276, ctx.r8.u32);
	// stwx r6,r7,r31
	REX_STORE_U32(ctx.r7.u32 + r31.u32, ctx.r6.u32);
	// beq cr6,0x82125ccc
	if (ctx.cr6.eq) goto loc_82125CCC;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
loc_82125CCC:
	// lfs f13,13284(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 13284);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfs f13,388(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 388, temp.u32);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// beq cr6,0x82125ce4
	if (ctx.cr6.eq) goto loc_82125CE4;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_82125CE4:
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// lfs f13,13280(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 13280);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,100
	ctx.r10.s64 = ctx.r11.s64 + 100;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,82
	ctx.r3.s64 = ctx.r11.s64 + 82;
	// addi r7,r11,102
	ctx.r7.s64 = ctx.r11.s64 + 102;
	// addi r6,r11,104
	ctx.r6.s64 = ctx.r11.s64 + 104;
	// addi r4,r11,124
	ctx.r4.s64 = ctx.r11.s64 + 124;
	// stfsx f13,r9,r31
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + r31.u32, temp.u32);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r10,r31
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + r31.u32, temp.u32);
	// addi r27,r11,84
	r27.s64 = ctx.r11.s64 + 84;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r31
	REX_STORE_U32(ctx.r9.u32 + r31.u32, r30.u32);
	// addi r5,r11,122
	ctx.r5.s64 = ctx.r11.s64 + 122;
	// addi r26,r11,86
	r26.s64 = ctx.r11.s64 + 86;
	// stwx r30,r7,r31
	REX_STORE_U32(ctx.r7.u32 + r31.u32, r30.u32);
	// addi r25,r11,88
	r25.s64 = ctx.r11.s64 + 88;
	// stwx r30,r6,r31
	REX_STORE_U32(ctx.r6.u32 + r31.u32, r30.u32);
	// addi r24,r11,90
	r24.s64 = ctx.r11.s64 + 90;
	// stwx r30,r4,r31
	REX_STORE_U32(ctx.r4.u32 + r31.u32, r30.u32);
	// addi r23,r11,92
	r23.s64 = ctx.r11.s64 + 92;
	// stwx r30,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, r30.u32);
	// addi r22,r11,94
	r22.s64 = ctx.r11.s64 + 94;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r26,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r25,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r24,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r23,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r22,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stwx r30,r7,r31
	REX_STORE_U32(ctx.r7.u32 + r31.u32, r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r30,r6,r31
	REX_STORE_U32(ctx.r6.u32 + r31.u32, r30.u32);
	// stwx r10,r5,r31
	REX_STORE_U32(ctx.r5.u32 + r31.u32, ctx.r10.u32);
	// stwx r30,r3,r31
	REX_STORE_U32(ctx.r3.u32 + r31.u32, r30.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stwx r30,r4,r31
	REX_STORE_U32(ctx.r4.u32 + r31.u32, r30.u32);
	// stwx r30,r9,r31
	REX_STORE_U32(ctx.r9.u32 + r31.u32, r30.u32);
	// blt cr6,0x82125c94
	if (ctx.cr6.lt) goto loc_82125C94;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8211f870
	ctx.lr = 0x82125DA8;
	sub_8211F870(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8211f870
	ctx.lr = 0x82125DBC;
	sub_8211F870(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8211f870
	ctx.lr = 0x82125DD0;
	sub_8211F870(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r31,48
	ctx.r5.s64 = r31.s64 + 48;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8211f870
	ctx.lr = 0x82125DE4;
	sub_8211F870(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r31,444
	ctx.r11.s64 = r31.s64 + 444;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82125DF0:
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r30,-20(r11)
	REX_STORE_U32(ctx.r11.u32 + -20, r30.u32);
	// stw r30,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, r30.u32);
	// stw r10,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r10.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82125df0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82125DF0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_8212BD60) {
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
	ctx.lr = 0x8212BD68;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8212be80
	if (ctx.cr6.lt) goto loc_8212BE80;
	// cmpwi cr6,r3,99
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 99, ctx.xer);
	// bgt cr6,0x8212be80
	if (ctx.cr6.gt) goto loc_8212BE80;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bgt cr6,0x8212bdac
	if (ctx.cr6.gt) goto loc_8212BDAC;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r6,r31,1
	ctx.r6.s64 = r31.s64 + 1;
	// addi r3,r11,15284
	ctx.r3.s64 = ctx.r11.s64 + 15284;
	// b 0x8212bdec
	goto loc_8212BDEC;
loc_8212BDAC:
	// cmpwi cr6,r31,20
	ctx.cr6.compare<int32_t>(r31.s32, 20, ctx.xer);
	// bgt cr6,0x8212bdc4
	if (ctx.cr6.gt) goto loc_8212BDC4;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r6,r31,18
	ctx.r6.s64 = r31.s64 + 18;
	// addi r3,r11,15284
	ctx.r3.s64 = ctx.r11.s64 + 15284;
	// b 0x8212bdec
	goto loc_8212BDEC;
loc_8212BDC4:
	// li r30,10
	r30.s64 = 10;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// divw r11,r31,r30
	ctx.r11.u64 = uint32_t((r30.s32 && !(r31.s32 == INT32_MIN && r30.s32 == -1)) ? r31.s32 / r30.s32 : 0);
	// mulli r11,r11,10
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(10));
	// subf. r28,r11,r31
	r28.u64 = r31.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x8212bdf4
	if (!ctx.cr0.eq) goto loc_8212BDF4;
	// addi r11,r31,-30
	ctx.r11.s64 = r31.s64 + -30;
	// addi r3,r10,15284
	ctx.r3.s64 = ctx.r10.s64 + 15284;
	// divw r11,r11,r30
	ctx.r11.u64 = uint32_t((r30.s32 && !(ctx.r11.s32 == INT32_MIN && r30.s32 == -1)) ? ctx.r11.s32 / r30.s32 : 0);
	// addi r6,r11,39
	ctx.r6.s64 = ctx.r11.s64 + 39;
loc_8212BDEC:
	// bl 0x822042f8
	ctx.lr = 0x8212BDF0;
	sub_822042F8(ctx, base);
	// b 0x8212be84
	goto loc_8212BE84;
loc_8212BDF4:
	// addi r11,r31,-20
	ctx.r11.s64 = r31.s64 + -20;
	// addi r27,r10,15284
	r27.s64 = ctx.r10.s64 + 15284;
	// divw r11,r11,r30
	ctx.r11.u64 = uint32_t((r30.s32 && !(ctx.r11.s32 == INT32_MIN && r30.s32 == -1)) ? ctx.r11.s32 / r30.s32 : 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r6,r11,38
	ctx.r6.s64 = ctx.r11.s64 + 38;
	// bl 0x822042f8
	ctx.lr = 0x8212BE0C;
	sub_822042F8(ctx, base);
	// divw r10,r31,r30
	ctx.r10.u64 = uint32_t((r30.s32 && !(r31.s32 == INT32_MIN && r30.s32 == -1)) ? r31.s32 / r30.s32 : 0);
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,10184
	ctx.r11.s64 = ctx.r11.s64 + 10184;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r9,r9,13128
	ctx.r9.s64 = ctx.r9.s64 + 13128;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwax r11,r10,r11
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32));
	// li r8,0
	ctx.r8.s64 = 0;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfs f0,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1840(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1840);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r28,1
	ctx.r6.s64 = r28.s64 + 1;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// li r5,3
	ctx.r5.s64 = 3;
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x822042f8
	ctx.lr = 0x8212BE78;
	sub_822042F8(ctx, base);
	// or r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 | r31.u64;
	// b 0x8212be84
	goto loc_8212BE84;
loc_8212BE80:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8212BE84:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82130660) {
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
	// cmpwi cr6,r4,260
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 260, ctx.xer);
	// beq cr6,0x82130750
	if (ctx.cr6.eq) goto loc_82130750;
	// cmpwi cr6,r4,261
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 261, ctx.xer);
	// beq cr6,0x821306d4
	if (ctx.cr6.eq) goto loc_821306D4;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
loc_8213068C:
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// beq cr6,0x821306bc
	if (ctx.cr6.eq) goto loc_821306BC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// li r3,75
	ctx.r3.s64 = 75;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bne cr6,0x821306b0
	if (!ctx.cr6.eq) goto loc_821306B0;
	// li r3,21
	ctx.r3.s64 = 21;
loc_821306B0:
	// bl 0x8212eb40
	ctx.lr = 0x821306B4;
	sub_8212EB40(ctx, base);
	// li r11,21
	ctx.r11.s64 = 21;
loc_821306B8:
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
loc_821306BC:
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
loc_821306D4:
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r30,44
	r30.s64 = 44;
	// addi r8,r10,21824
	ctx.r8.s64 = ctx.r10.s64 + 21824;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mulli r11,r11,88
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(88));
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,14
	ctx.r10.s64 = ctx.r10.s64 + 14;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lhax r11,r8,r9
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + ctx.r9.u32));
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,18(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 18);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x82130728
	if (ctx.cr6.eq) goto loc_82130728;
	// li r30,50
	r30.s64 = 50;
loc_82130728:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// beq cr6,0x821306bc
	if (ctx.cr6.eq) goto loc_821306BC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8212eb40
	ctx.lr = 0x82130748;
	sub_8212EB40(ctx, base);
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
	// b 0x821306bc
	goto loc_821306BC;
loc_82130750:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x82130790
	if (!ctx.cr6.eq) goto loc_82130790;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x821306bc
	if (ctx.cr6.eq) goto loc_821306BC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,17
	ctx.r3.s64 = 17;
	// bne cr6,0x82130784
	if (!ctx.cr6.eq) goto loc_82130784;
	// li r3,16
	ctx.r3.s64 = 16;
loc_82130784:
	// bl 0x8212eb40
	ctx.lr = 0x82130788;
	sub_8212EB40(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x821306b8
	goto loc_821306B8;
loc_82130790:
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// blt cr6,0x8213068c
	if (ctx.cr6.lt) goto loc_8213068C;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x821306bc
	if (ctx.cr6.eq) goto loc_821306BC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,74
	ctx.r3.s64 = 74;
	// bne cr6,0x821307c0
	if (!ctx.cr6.eq) goto loc_821307C0;
	// li r3,20
	ctx.r3.s64 = 20;
loc_821307C0:
	// bl 0x8212eb40
	ctx.lr = 0x821307C4;
	sub_8212EB40(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// b 0x821306b8
	goto loc_821306B8;
}

DEFINE_REX_FUNC(sub_82134C88) {
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
	// lis r30,-32165
	r30.s64 = -2107965440;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r31,-32480(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + -32480);
	// addi r11,r31,80
	ctx.r11.s64 = r31.s64 + 80;
	// bl 0x821b0030
	ctx.lr = 0x82134CB0;
	sub_821B0030(ctx, base);
	// stw r3,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,-32480(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -32480);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r9,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r9.u32);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lwz r11,7840(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7840);
	// lfs f0,1996(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// addi r31,r10,23912
	r31.s64 = ctx.r10.s64 + 23912;
	// stfs f0,112(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// addi r10,r11,108
	ctx.r10.s64 = ctx.r11.s64 + 108;
	// stfs f0,116(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// stfs f0,120(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// lwz r11,-32480(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -32480);
	// addi r5,r11,96
	ctx.r5.s64 = ctx.r11.s64 + 96;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r4,36(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x82130818
	ctx.lr = 0x82134D0C;
	sub_82130818(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// bl 0x821d6210
	ctx.lr = 0x82134D20;
	sub_821D6210(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82137388) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82137400
	if (!ctx.cr6.eq) goto loc_82137400;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r11,23912(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 23912);
	// lha r3,526(r11)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 526));
	// bl 0x821c4fd0
	ctx.lr = 0x821373BC;
	sub_821C4FD0(ctx, base);
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lhz r11,126(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 126);
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r10,r10,22984
	ctx.r10.s64 = ctx.r10.s64 + 22984;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,432
	ctx.r9.s64 = ctx.r9.s64 + 432;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lbzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + ctx.r10.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// lwz r4,344(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 344);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r3,r11,3072
	ctx.r3.s64 = ctx.r11.s64 + 201326592;
	// addi r3,r3,99
	ctx.r3.s64 = ctx.r3.s64 + 99;
	// b 0x82137414
	goto loc_82137414;
loc_82137400:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,214
	ctx.r3.u64 = ctx.r3.u64 | 214;
	// lwz r4,344(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
loc_82137414:
	// bl 0x820e68b8
	ctx.lr = 0x82137418;
	sub_820E68B8(ctx, base);
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

DEFINE_REX_FUNC(sub_8213F160) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e6c
	ctx.lr = 0x8213F168;
	// stfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, f29.u64);
	// stfd f30,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, f30.u64);
	// stfd f31,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// bl 0x821343f0
	ctx.lr = 0x8213F184;
	sub_821343F0(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r11,-8304
	r29.s64 = ctx.r11.s64 + -8304;
	// addi r5,r10,29368
	ctx.r5.s64 = ctx.r10.s64 + 29368;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r22,r31,8
	r22.s64 = r31.s64 + 8;
	// lwz r3,324(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 324);
	// bl 0x821af9d8
	ctx.lr = 0x8213F1A8;
	sub_821AF9D8(ctx, base);
	// bl 0x820e4bb0
	ctx.lr = 0x8213F1AC;
	sub_820E4BB0(ctx, base);
	// lhz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 8);
	// li r31,0
	r31.s64 = 0;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r21,r31
	r21.u64 = r31.u64;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x8213f2a8
	if (ctx.cr6.eq) goto loc_8213F2A8;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r30,85
	r30.s64 = 5570560;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f29,-24904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -24904);
	f29.f64 = double(temp.f32);
	// lfs f30,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	f30.f64 = double(temp.f32);
	// mr r28,r22
	r28.u64 = r22.u64;
	// lfs f31,1996(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	f31.f64 = double(temp.f32);
	// ori r30,r30,9016
	r30.u64 = r30.u64 | 9016;
	// lis r25,-32173
	r25.s64 = -2108489728;
	// addi r27,r11,20332
	r27.s64 = ctx.r11.s64 + 20332;
	// addi r26,r10,-24100
	r26.s64 = ctx.r10.s64 + -24100;
loc_8213F1FC:
	// lha r3,0(r28)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r28.u32 + 0));
	// bl 0x821dd490
	ctx.lr = 0x8213F204;
	sub_821DD490(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x8213f28c
	if (!ctx.cr6.eq) goto loc_8213F28C;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// lha r3,0(r28)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r28.u32 + 0));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x821dcf00
	ctx.lr = 0x8213F220;
	sub_821DCF00(ctx, base);
	// lwz r9,144(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,-5012(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + -5012);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f4,f29
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f29.f64;
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// stb r31,135(r1)
	REX_STORE_U8(ctx.r1.u32 + 135, r31.u8);
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwzx r6,r9,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// bl 0x82138e60
	ctx.lr = 0x8213F26C;
	sub_82138E60(ctx, base);
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 48);
	// stwx r3,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 48);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213f28c
	if (ctx.cr6.eq) goto loc_8213F28C;
	// li r10,-10
	ctx.r10.s64 = -10;
	// stw r10,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
loc_8213F28C:
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// mulli r11,r21,12
	ctx.r11.s64 = static_cast<int64_t>(r21.u64 * static_cast<uint64_t>(12));
	// lhzx r10,r11,r22
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + r22.u32);
	// add r28,r11,r22
	r28.u64 = ctx.r11.u64 + r22.u64;
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x8213f1fc
	if (!ctx.cr6.eq) goto loc_8213F1FC;
loc_8213F2A8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_8214A068) {
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
	// addi r10,r10,-23052
	ctx.r10.s64 = ctx.r10.s64 + -23052;
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
	ctx.lr = 0x8214A0E4;
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
	ctx.lr = 0x8214A0F8;
	sub_820E0EC8(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e0590
	ctx.lr = 0x8214A108;
	sub_820E0590(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1528
	ctx.lr = 0x8214A114;
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

DEFINE_REX_FUNC(sub_8214C948) {
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
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lha r11,30(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 30));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8214c9a0
	if (!ctx.cr0.gt) goto loc_8214C9A0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8214c998
	if (!ctx.cr6.gt) goto loc_8214C998;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8214c998
	if (ctx.cr6.eq) goto loc_8214C998;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x8214c998
	if (ctx.cr6.eq) goto loc_8214C998;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x8214c998
	if (ctx.cr6.eq) goto loc_8214C998;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// ble cr6,0x8214c9a0
	if (!ctx.cr6.gt) goto loc_8214C9A0;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x8214c9a0
	if (ctx.cr6.gt) goto loc_8214C9A0;
loc_8214C998:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8214c9b4
	goto loc_8214C9B4;
loc_8214C9A0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821c7f28
	ctx.lr = 0x8214C9AC;
	sub_821C7F28(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8214C9B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214EC30) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f30,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f30.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,-19048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19048);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f31.f64 = double(temp.f32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lfs f13,28316(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 28316);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lfs f12,26620(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 26620);
	ctx.f12.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r7,r11,-19056
	ctx.r7.s64 = ctx.r11.s64 + -19056;
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r8,22
	ctx.r8.s64 = 22;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f30,104(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x821675c0
	ctx.lr = 0x8214ECBC;
	sub_821675C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// beq 0x8214ed60
	if (ctx.cr0.eq) goto loc_8214ED60;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,6
	ctx.r10.s64 = 6;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// sth r11,18(r3)
	REX_STORE_U16(ctx.r3.u32 + 18, ctx.r11.u16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,192(r11)
	REX_STORE_U32(ctx.r11.u32 + 192, ctx.r10.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stfs f30,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lfs f0,-19060(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -19060);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stb r8,186(r11)
	REX_STORE_U8(ctx.r11.u32 + 186, ctx.r8.u8);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stfs f31,144(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// stfs f31,148(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 148, temp.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfs f31,152(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 152, temp.u32);
	// stfs f31,156(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lhz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 20);
	// lfs f0,-19064(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19064);
	ctx.f0.f64 = double(temp.f32);
	// stb r7,188(r11)
	REX_STORE_U8(ctx.r11.u32 + 188, ctx.r7.u8);
	// addi r10,r8,-20952
	ctx.r10.s64 = ctx.r8.s64 + -20952;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stb r9,90(r11)
	REX_STORE_U8(ctx.r11.u32 + 90, ctx.r9.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stfs f0,168(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// lbz r10,74(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 74);
	// ori r10,r10,192
	ctx.r10.u64 = ctx.r10.u64 | 192;
	// stb r10,74(r11)
	REX_STORE_U8(ctx.r11.u32 + 74, ctx.r10.u8);
loc_8214ED60:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

DEFINE_REX_FUNC(sub_821578D8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e84
	ctx.lr = 0x821578E0;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f38
	ctx.lr = 0x821578E8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,200(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r29,1
	r29.s64 = 1;
	// lwz r7,204(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// subfic r8,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// rlwinm r9,r11,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// std r29,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, r29.u64);
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// sth r29,88(r3)
	REX_STORE_U16(ctx.r3.u32 + 88, r29.u16);
	// addi r10,r10,-17352
	ctx.r10.s64 = ctx.r10.s64 + -17352;
	// stb r29,90(r3)
	REX_STORE_U8(ctx.r3.u32 + 90, r29.u8);
	// rlwinm r8,r8,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r8,r8,0,29,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addic. r11,r3,112
	ctx.xer.ca = ctx.r3.u32 > 4294967183;
	ctx.r11.s64 = ctx.r3.s64 + 112;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r28,0
	r28.s64 = 0;
	// addi r9,r8,16
	ctx.r9.s64 = ctx.r8.s64 + 16;
	// beq 0x82157940
	if (ctx.cr0.eq) goto loc_82157940;
	// stw r11,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// b 0x82157944
	goto loc_82157944;
loc_82157940:
	// stw r28,92(r31)
	REX_STORE_U32(r31.u32 + 92, r28.u32);
loc_82157944:
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82157958
	if (ctx.cr6.eq) goto loc_82157958;
	// stw r7,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r7.u32);
	// stb r9,104(r31)
	REX_STORE_U8(r31.u32 + 104, ctx.r9.u8);
loc_82157958:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r29,105(r31)
	REX_STORE_U8(r31.u32 + 105, r29.u8);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stb r28,106(r31)
	REX_STORE_U8(r31.u32 + 106, r28.u8);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// stb r28,107(r31)
	REX_STORE_U8(r31.u32 + 107, r28.u8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r28,109(r31)
	REX_STORE_U8(r31.u32 + 109, r28.u8);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r28,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f30,20484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20484);
	f30.f64 = double(temp.f32);
	// lfs f29,-17392(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -17392);
	f29.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,-17400(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + -17400);
	ctx.f13.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lfs f28,1996(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	f28.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,-17396(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -17396);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmr f5,f31
	ctx.f5.f64 = f31.f64;
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// stfs f28,128(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x8210ded0
	ctx.lr = 0x821579EC;
	sub_8210DED0(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// li r27,8
	r27.s64 = 8;
	// stfs f30,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// sth r27,18(r31)
	REX_STORE_U16(r31.u32 + 18, r27.u16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82157a14
	if (!ctx.cr6.eq) goto loc_82157A14;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-17404(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -17404);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// b 0x82157a18
	goto loc_82157A18;
loc_82157A14:
	// stfs f29,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
loc_82157A18:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,-17364
	ctx.r6.s64 = ctx.r10.s64 + -17364;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x821f7d50
	ctx.lr = 0x82157A40;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82157a5c
	if (ctx.cr0.eq) goto loc_82157A5C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82157a60
	goto loc_82157A60;
loc_82157A5C:
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82157A60:
	// stw r30,192(r31)
	REX_STORE_U32(r31.u32 + 192, r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82157afc
	if (ctx.cr6.eq) goto loc_82157AFC;
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// addic. r11,r30,112
	ctx.xer.ca = r30.u32 > 4294967183;
	ctx.r11.s64 = r30.s64 + 112;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,80(r30)
	REX_STORE_U64(r30.u32 + 80, r29.u64);
	// sth r29,88(r30)
	REX_STORE_U16(r30.u32 + 88, r29.u16);
	// stb r29,90(r30)
	REX_STORE_U8(r30.u32 + 90, r29.u8);
	// beq 0x82157a8c
	if (ctx.cr0.eq) goto loc_82157A8C;
	// stw r11,92(r30)
	REX_STORE_U32(r30.u32 + 92, ctx.r11.u32);
	// b 0x82157a90
	goto loc_82157A90;
loc_82157A8C:
	// stw r28,92(r30)
	REX_STORE_U32(r30.u32 + 92, r28.u32);
loc_82157A90:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r28,96(r30)
	REX_STORE_U32(r30.u32 + 96, r28.u32);
	// beq cr6,0x82157aa8
	if (ctx.cr6.eq) goto loc_82157AA8;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r10,100(r30)
	REX_STORE_U32(r30.u32 + 100, ctx.r10.u32);
	// stb r11,104(r30)
	REX_STORE_U8(r30.u32 + 104, ctx.r11.u8);
loc_82157AA8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f5,f31
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = f31.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stw r28,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stb r29,105(r30)
	REX_STORE_U8(r30.u32 + 105, r29.u8);
	// lfs f2,2332(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2332);
	ctx.f2.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r28,106(r30)
	REX_STORE_U8(r30.u32 + 106, r28.u8);
	// stb r28,107(r30)
	REX_STORE_U8(r30.u32 + 107, r28.u8);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// stb r28,109(r30)
	REX_STORE_U8(r30.u32 + 109, r28.u8);
	// bl 0x8210ded0
	ctx.lr = 0x82157AF0;
	sub_8210DED0(ctx, base);
	// lfs f0,164(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// sth r27,18(r30)
	REX_STORE_U16(r30.u32 + 18, r27.u16);
	// stfs f0,132(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 132, temp.u32);
loc_82157AFC:
	// stfs f28,216(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 216, temp.u32);
	// stw r29,208(r31)
	REX_STORE_U32(r31.u32 + 208, r29.u32);
	// stb r29,61(r31)
	REX_STORE_U8(r31.u32 + 61, r29.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f84
	ctx.lr = 0x82157B14;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821639C8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e7c
	ctx.lr = 0x821639D0;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f28
	ctx.lr = 0x821639D8;
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r30,r11,2956
	r30.s64 = ctx.r11.s64 + 2956;
	// bl 0x820e02d8
	ctx.lr = 0x821639F0;
	sub_820E02D8(ctx, base);
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
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f27,2008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	f27.f64 = double(temp.f32);
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// li r25,8
	r25.s64 = 8;
	// lfs f26,2004(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2004);
	f26.f64 = double(temp.f32);
	// lfs f25,2024(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2024);
	f25.f64 = double(temp.f32);
	// lfs f28,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	f28.f64 = double(temp.f32);
	// lfs f24,2020(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2020);
	f24.f64 = double(temp.f32);
loc_82163A24:
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, f24.f64);
	// ble cr6,0x82163e2c
	if (!ctx.cr6.gt) goto loc_82163E2C;
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lbz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r26,r30,12
	r26.s64 = r30.s64 + 12;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lbz r9,2(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 2);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r31,r11,r27
	r31.u64 = ctx.r11.u64 + r27.u64;
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r10,r9,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r28,r11,r27
	r28.u64 = ctx.r11.u64 + r27.u64;
	// add r29,r10,r27
	r29.u64 = ctx.r10.u64 + r27.u64;
	// bl 0x820e0250
	ctx.lr = 0x82163A70;
	sub_820E0250(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x820e0590
	ctx.lr = 0x82163A80;
	sub_820E0590(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x820e1df8
	ctx.lr = 0x82163A90;
	sub_820E1DF8(ctx, base);
	// lfs f0,48(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,28(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f0,52(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,56(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f28,92(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x820e2028
	ctx.lr = 0x82163AC0;
	sub_820E2028(ctx, base);
	// lfs f0,48(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lbz r11,3(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 3);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,52(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lfs f0,56(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f28,172(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lfs f0,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// beq 0x82163b10
	if (ctx.cr0.eq) goto loc_82163B10;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1cf8
	ctx.lr = 0x82163B10;
	sub_820E1CF8(ctx, base);
loc_82163B10:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1ba8
	ctx.lr = 0x82163B20;
	sub_820E1BA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e2128
	ctx.lr = 0x82163B28;
	sub_820E2128(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f26
	ctx.cr6.compare(ctx.f1.f64, f26.f64);
	// blt cr6,0x82163e2c
	if (ctx.cr6.lt) goto loc_82163E2C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e1c50
	ctx.lr = 0x82163B44;
	sub_820E1C50(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e2128
	ctx.lr = 0x82163B4C;
	sub_820E2128(ctx, base);
	// fcmpu cr6,f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f26.f64);
	// blt cr6,0x82163e2c
	if (ctx.cr6.lt) goto loc_82163E2C;
	// fsqrts f0,f30
	ctx.f0.f64 = double(float(sqrt(f30.f64)));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fdivs f1,f28,f0
	ctx.f1.f64 = double(float(f28.f64 / ctx.f0.f64));
	// bl 0x820e1cc0
	ctx.lr = 0x82163B68;
	sub_820E1CC0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e2290
	ctx.lr = 0x82163B74;
	sub_820E2290(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1c50
	ctx.lr = 0x82163B84;
	sub_820E1C50(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f29,f30
	f29.f64 = double(float(sqrt(f30.f64)));
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,204(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f11,192(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f10,196(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f9,200(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f8,208(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f7,212(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f6,216(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,48(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,224(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lfs f12,52(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,228(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,56(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,232(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f28,236(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(f29.f64, ctx.f0.f64);
	// ble cr6,0x82163c30
	if (!ctx.cr6.gt) goto loc_82163C30;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmr f29,f0
	f29.f64 = ctx.f0.f64;
	// fmuls f30,f0,f0
	f30.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// bl 0x820e1df8
	ctx.lr = 0x82163C30;
	sub_820E1DF8(ctx, base);
loc_82163C30:
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f29,f27
	ctx.f13.f64 = double(float(f29.f64 * f27.f64));
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fadds f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 + f30.f64));
	// fnmsubs f0,f0,f0,f11
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f0.f64, -ctx.f11.f64)));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fnmsubs f0,f0,f0,f12
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f0.f64, -ctx.f12.f64)));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x820e1df8
	ctx.lr = 0x82163C74;
	sub_820E1DF8(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1ba8
	ctx.lr = 0x82163C84;
	sub_820E1BA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x820e2290
	ctx.lr = 0x82163C8C;
	sub_820E2290(ctx, base);
	// lbz r11,3(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 3);
	// lfs f0,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,212(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f12,216(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 216);
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
	// beq 0x82163cc0
	if (ctx.cr0.eq) goto loc_82163CC0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1cf8
	ctx.lr = 0x82163CC0;
	sub_820E1CF8(ctx, base);
loc_82163CC0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e1c50
	ctx.lr = 0x82163CD0;
	sub_820E1C50(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// lfs f0,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// stfs f31,12(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 12, temp.u32);
	// lfs f0,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 16, temp.u32);
	// lfs f0,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 20, temp.u32);
	// lfs f0,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 24, temp.u32);
	// stfs f31,28(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 28, temp.u32);
	// lfs f0,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 32, temp.u32);
	// lfs f0,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 36, temp.u32);
	// lfs f0,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 40, temp.u32);
	// stfs f31,44(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 44, temp.u32);
	// bl 0x820e1ba8
	ctx.lr = 0x82163D34;
	sub_820E1BA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x820e2290
	ctx.lr = 0x82163D3C;
	sub_820E2290(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e1c50
	ctx.lr = 0x82163D4C;
	sub_820E1C50(ctx, base);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// lfs f0,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f0,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// stfs f28,60(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f0,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f31,12(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f0,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f0,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f0,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f31,28(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f0,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f0,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f0,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f31,44(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// lbz r11,3(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 3);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82163df0
	if (ctx.cr0.eq) goto loc_82163DF0;
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lbz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + r27.u64;
	// add r3,r10,r27
	ctx.r3.u64 = ctx.r10.u64 + r27.u64;
	// bl 0x820e0590
	ctx.lr = 0x82163DF0;
	sub_820E0590(ctx, base);
loc_82163DF0:
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x820e1df8
	ctx.lr = 0x82163E10;
	sub_820E1DF8(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 48, temp.u32);
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 52, temp.u32);
	// lfs f0,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 56, temp.u32);
	// stfs f28,60(r28)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r28.u32 + 60, temp.u32);
loc_82163E2C:
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// bgt 0x82163a24
	if (ctx.cr0.gt) goto loc_82163A24;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f74
	ctx.lr = 0x82163E44;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82178AF0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// addi r5,r3,128
	ctx.r5.s64 = ctx.r3.s64 + 128;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r4,1280
	ctx.r4.s64 = 1280;
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// lwz r3,496(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 496);
	// b 0x82190670
	sub_82190670(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82178D58) {
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
	ctx.lr = 0x82178D60;
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-5268
	ctx.r11.s64 = ctx.r11.s64 + -5268;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x821fee88
	ctx.lr = 0x82178D8C;
	sub_821FEE88(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,16308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16308);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16688(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16688);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f1,f0,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// lfs f13,2352(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2352);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-31132(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -31132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,224(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 224, temp.u32);
	// lfs f31,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	f31.f64 = double(temp.f32);
	// stfs f31,192(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 192, temp.u32);
	// fmuls f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// bl 0x821fee88
	ctx.lr = 0x82178DCC;
	sub_821FEE88(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lfs f0,16272(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16272);
	ctx.f0.f64 = double(temp.f32);
	// addi r27,r8,13128
	r27.s64 = ctx.r8.s64 + 13128;
	// lfs f13,16232(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16232);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// fmadds f12,f1,f0,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// lfs f0,16264(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16264);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1836(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 1836);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820e1cc0
	ctx.lr = 0x82178E08;
	sub_820E1CC0(ctx, base);
	// bl 0x821fee88
	ctx.lr = 0x82178E0C;
	sub_821FEE88(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,1836(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 1836);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,16172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16172);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2356(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2356);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f1,f0,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// lfs f0,2384(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,2000(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2000);
	f30.f64 = double(temp.f32);
	// lfs f13,1996(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
	// lfs f0,1836(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 1836);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// stfs f0,204(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 204, temp.u32);
	// lfs f12,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82178e68
	if (!ctx.cr6.gt) goto loc_82178E68;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,204(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 204, temp.u32);
loc_82178E68:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7888
	ctx.lr = 0x82178E78;
	sub_821E7888(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// addic. r10,r31,112
	ctx.xer.ca = r31.u32 > 4294967183;
	ctx.r10.s64 = r31.s64 + 112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r9,88(r31)
	REX_STORE_U16(r31.u32 + 88, ctx.r9.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r9,90(r31)
	REX_STORE_U8(r31.u32 + 90, ctx.r9.u8);
	// std r8,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r8.u64);
	// beq 0x82178ea0
	if (ctx.cr0.eq) goto loc_82178EA0;
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// b 0x82178ea4
	goto loc_82178EA4;
loc_82178EA0:
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
loc_82178EA4:
	// lfs f0,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * f30.f64));
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// lis r7,-32174
	ctx.r7.s64 = -2108555264;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// addi r8,r10,-4224
	ctx.r8.s64 = ctx.r10.s64 + -4224;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// addi r7,r7,-28432
	ctx.r7.s64 = ctx.r7.s64 + -28432;
	// stb r11,105(r31)
	REX_STORE_U8(r31.u32 + 105, ctx.r11.u8);
	// lfs f5,2376(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2376);
	ctx.f5.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r11,106(r31)
	REX_STORE_U8(r31.u32 + 106, ctx.r11.u8);
	// addi r8,r8,112
	ctx.r8.s64 = ctx.r8.s64 + 112;
	// stw r7,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r7.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stb r11,107(r31)
	REX_STORE_U8(r31.u32 + 107, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,109(r31)
	REX_STORE_U8(r31.u32 + 109, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bl 0x8210ded0
	ctx.lr = 0x82178F04;
	sub_8210DED0(ctx, base);
	// lwz r30,92(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 92);
	// bl 0x821fee88
	ctx.lr = 0x82178F0C;
	sub_821FEE88(ctx, base);
	// stfs f1,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 60, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-64(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8217F100) {
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
	// bl 0x822d4e6c
	ctx.lr = 0x8217F108;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x822d4f00
	ctx.lr = 0x8217F110;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,204(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r30,360(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 360);
	// li r21,0
	r21.s64 = 0;
	// lwz r29,364(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8217f668
	if (!ctx.cr6.gt) goto loc_8217F668;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f0,-4620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2012(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2012);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,17064(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 17064);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f16,-4624(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -4624);
	f16.f64 = double(temp.f32);
	// lfs f17,16688(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16688);
	f17.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f18,-4600(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -4600);
	f18.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f21,16360(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16360);
	f21.f64 = double(temp.f32);
	// lfs f23,16908(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16908);
	f23.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f24,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f24.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f27,2376(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2376);
	f27.f64 = double(temp.f32);
	// lfs f26,2384(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2384);
	f26.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f14,-30104(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -30104);
	f14.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f19,16204(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16204);
	f19.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f20,2008(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	f20.f64 = double(temp.f32);
	// lfs f22,16628(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16628);
	f22.f64 = double(temp.f32);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lfs f28,2000(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2000);
	f28.f64 = double(temp.f32);
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// lfs f29,16308(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16308);
	f29.f64 = double(temp.f32);
	// lfs f15,16172(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16172);
	f15.f64 = double(temp.f32);
	// addi r31,r30,16
	r31.s64 = r30.s64 + 16;
	// lfs f25,1996(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1996);
	f25.f64 = double(temp.f32);
	// li r25,60
	r25.s64 = 60;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r22,-32170
	r22.s64 = -2108293120;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r23,r11,27624
	r23.s64 = ctx.r11.s64 + 27624;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r27,r10,7808
	r27.s64 = ctx.r10.s64 + 7808;
	// addi r24,r9,13128
	r24.s64 = ctx.r9.s64 + 13128;
loc_8217F1F8:
	// lfs f0,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, f25.f64);
	// blt cr6,0x8217f624
	if (ctx.cr6.lt) goto loc_8217F624;
	// lfs f0,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, f25.f64);
	// bge cr6,0x8217f21c
	if (!ctx.cr6.lt) goto loc_8217F21C;
	// lbz r11,76(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217f624
	if (ctx.cr0.eq) goto loc_8217F624;
loc_8217F21C:
	// lhz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 60);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x8217f52c
	if (ctx.cr6.lt) goto loc_8217F52C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,368(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 368);
	// bl 0x8217e560
	ctx.lr = 0x8217F234;
	sub_8217E560(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8217f390
	if (ctx.cr6.lt) goto loc_8217F390;
	// beq cr6,0x8217f310
	if (ctx.cr6.eq) goto loc_8217F310;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x8217f28c
	if (ctx.cr6.lt) goto loc_8217F28C;
	// bne cr6,0x8217f518
	if (!ctx.cr6.eq) goto loc_8217F518;
	// lwz r11,368(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 368);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,84
	ctx.r5.s64 = ctx.r11.s64 + 84;
	// bl 0x820e1ba8
	ctx.lr = 0x8217F260;
	sub_820E1BA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e2290
	ctx.lr = 0x8217F26C;
	sub_820E2290(ctx, base);
	// lfs f0,192(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// fmuls f1,f0,f15
	ctx.f1.f64 = double(float(ctx.f0.f64 * f15.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e1cc0
	ctx.lr = 0x8217F280;
	sub_820E1CC0(ctx, base);
	// bl 0x821fecf0
	ctx.lr = 0x8217F284;
	sub_821FECF0(ctx, base);
	// addi r11,r3,5
	ctx.r11.s64 = ctx.r3.s64 + 5;
	// b 0x8217f308
	goto loc_8217F308;
loc_8217F28C:
	// bl 0x821fee88
	ctx.lr = 0x8217F290;
	sub_821FEE88(ctx, base);
	// fsubs f0,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f29.f64));
	// fmuls f31,f0,f29
	f31.f64 = double(float(ctx.f0.f64 * f29.f64));
	// bl 0x821fee88
	ctx.lr = 0x8217F29C;
	sub_821FEE88(ctx, base);
	// fsubs f30,f1,f28
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64 - f28.f64));
	// bl 0x821fee88
	ctx.lr = 0x8217F2A4;
	sub_821FEE88(ctx, base);
	// fsubs f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f28.f64));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmuls f2,f30,f22
	ctx.f2.f64 = double(float(f30.f64 * f22.f64));
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * f29.f64));
	// bl 0x820e0ec8
	ctx.lr = 0x8217F2BC;
	sub_820E0EC8(ctx, base);
	// lwz r11,368(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 368);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,84
	ctx.r5.s64 = ctx.r11.s64 + 84;
	// bl 0x820e1ba8
	ctx.lr = 0x8217F2D0;
	sub_820E1BA8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e1ec0
	ctx.lr = 0x8217F2E0;
	sub_820E1EC0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e2290
	ctx.lr = 0x8217F2EC;
	sub_820E2290(ctx, base);
	// lfs f0,192(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// fmuls f1,f0,f20
	ctx.f1.f64 = double(float(ctx.f0.f64 * f20.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e1cc0
	ctx.lr = 0x8217F300;
	sub_820E1CC0(ctx, base);
	// bl 0x821fecf0
	ctx.lr = 0x8217F304;
	sub_821FECF0(ctx, base);
	// addi r11,r3,3
	ctx.r11.s64 = ctx.r3.s64 + 3;
loc_8217F308:
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// b 0x8217f3f8
	goto loc_8217F3F8;
loc_8217F310:
	// bl 0x821fee88
	ctx.lr = 0x8217F314;
	sub_821FEE88(ctx, base);
	// fsubs f0,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f29.f64));
	// fmuls f31,f0,f29
	f31.f64 = double(float(ctx.f0.f64 * f29.f64));
	// bl 0x821fee88
	ctx.lr = 0x8217F320;
	sub_821FEE88(ctx, base);
	// fsubs f30,f1,f28
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64 - f28.f64));
	// bl 0x821fee88
	ctx.lr = 0x8217F328;
	sub_821FEE88(ctx, base);
	// fsubs f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f28.f64));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmuls f2,f30,f22
	ctx.f2.f64 = double(float(f30.f64 * f22.f64));
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * f29.f64));
	// bl 0x820e0ec8
	ctx.lr = 0x8217F340;
	sub_820E0EC8(ctx, base);
	// lwz r11,368(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 368);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,84
	ctx.r5.s64 = ctx.r11.s64 + 84;
	// bl 0x820e1ba8
	ctx.lr = 0x8217F354;
	sub_820E1BA8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e1ec0
	ctx.lr = 0x8217F364;
	sub_820E1EC0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e2290
	ctx.lr = 0x8217F370;
	sub_820E2290(ctx, base);
	// lfs f0,192(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// fmuls f1,f0,f19
	ctx.f1.f64 = double(float(ctx.f0.f64 * f19.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e1cc0
	ctx.lr = 0x8217F384;
	sub_820E1CC0(ctx, base);
	// bl 0x821fecf0
	ctx.lr = 0x8217F388;
	sub_821FECF0(ctx, base);
	// clrlwi r11,r3,28
	ctx.r11.u64 = ctx.r3.u32 & 0xF;
	// b 0x8217f3f8
	goto loc_8217F3F8;
loc_8217F390:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8217dd40
	ctx.lr = 0x8217F398;
	sub_8217DD40(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8217e6b8
	ctx.lr = 0x8217F3A8;
	sub_8217E6B8(ctx, base);
	// fcmpu cr6,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f28.f64);
	// bge cr6,0x8217f408
	if (!ctx.cr6.lt) goto loc_8217F408;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f1,f14
	ctx.f1.f64 = f14.f64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x820e1cf8
	ctx.lr = 0x8217F3C0;
	sub_820E1CF8(ctx, base);
	// rlwinm r11,r26,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// add r5,r11,r23
	ctx.r5.u64 = ctx.r11.u64 + r23.u64;
	// bl 0x820e1b70
	ctx.lr = 0x8217F3D4;
	sub_820E1B70(ctx, base);
	// bl 0x821fee88
	ctx.lr = 0x8217F3D8;
	sub_821FEE88(ctx, base);
	// fnmsubs f0,f1,f26,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(-std::fma(ctx.f1.f64, f26.f64, -f27.f64)));
	// lfs f13,192(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x820e1cc0
	ctx.lr = 0x8217F3F0;
	sub_820E1CC0(ctx, base);
	// bl 0x821fecf0
	ctx.lr = 0x8217F3F4;
	sub_821FECF0(ctx, base);
	// clrlwi r11,r3,26
	ctx.r11.u64 = ctx.r3.u32 & 0x3F;
loc_8217F3F8:
	// mulli r11,r11,50
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(50));
	// divwu r11,r11,r25
	ctx.r11.u64 = uint32_t(r25.u32 ? ctx.r11.u32 / r25.u32 : 0);
	// sth r11,60(r30)
	REX_STORE_U16(r30.u32 + 60, ctx.r11.u16);
	// b 0x8217f518
	goto loc_8217F518;
loc_8217F408:
	// bl 0x821fee88
	ctx.lr = 0x8217F40C;
	sub_821FEE88(ctx, base);
	// fsubs f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f28.f64));
	// fmuls f31,f0,f29
	f31.f64 = double(float(ctx.f0.f64 * f29.f64));
	// bl 0x821fee88
	ctx.lr = 0x8217F418;
	sub_821FEE88(ctx, base);
	// fsubs f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f28.f64));
	// fmuls f30,f0,f29
	f30.f64 = double(float(ctx.f0.f64 * f29.f64));
	// bl 0x821fee88
	ctx.lr = 0x8217F424;
	sub_821FEE88(ctx, base);
	// fsubs f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f28.f64));
	// stfs f30,4(r27)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r27.u32 + 4, temp.u32);
	// stfs f31,8(r27)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r27.u32 + 8, temp.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stfs f24,12(r27)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(r27.u32 + 12, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 0, temp.u32);
	// bl 0x820e1b28
	ctx.lr = 0x8217F44C;
	sub_820E1B28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e2290
	ctx.lr = 0x8217F458;
	sub_820E2290(ctx, base);
	// lhz r11,62(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 62);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r4,r11,296
	ctx.r4.s64 = ctx.r11.s64 + 296;
	// bl 0x820e1bf0
	ctx.lr = 0x8217F474;
	sub_820E1BF0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e2290
	ctx.lr = 0x8217F480;
	sub_820E2290(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f23.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e20b0
	ctx.lr = 0x8217F494;
	sub_820E20B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e2290
	ctx.lr = 0x8217F4A0;
	sub_820E2290(ctx, base);
	// bl 0x821fee88
	ctx.lr = 0x8217F4A4;
	sub_821FEE88(ctx, base);
	// fnmsubs f0,f1,f26,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(-std::fma(ctx.f1.f64, f26.f64, -f27.f64)));
	// lfs f13,192(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x820e1cc0
	ctx.lr = 0x8217F4BC;
	sub_820E1CC0(ctx, base);
	// bl 0x821fecf0
	ctx.lr = 0x8217F4C0;
	sub_821FECF0(ctx, base);
	// clrlwi r11,r3,26
	ctx.r11.u64 = ctx.r3.u32 & 0x3F;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mulli r11,r11,50
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(50));
	// divwu r11,r11,r25
	ctx.r11.u64 = uint32_t(r25.u32 ? ctx.r11.u32 / r25.u32 : 0);
	// sth r11,60(r30)
	REX_STORE_U16(r30.u32 + 60, ctx.r11.u16);
	// lwz r3,368(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 368);
	// bl 0x8217f090
	ctx.lr = 0x8217F4DC;
	sub_8217F090(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217f518
	if (ctx.cr0.eq) goto loc_8217F518;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,29428(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 29428);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8211ea90
	ctx.lr = 0x8217F4F4;
	sub_8211EA90(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f1,f15
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f15.f64;
	// bl 0x820e1cc0
	ctx.lr = 0x8217F504;
	sub_820E1CC0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e20b0
	ctx.lr = 0x8217F518;
	sub_820E20B0(ctx, base);
loc_8217F518:
	// bl 0x821fee88
	ctx.lr = 0x8217F51C;
	sub_821FEE88(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f0,40(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 40, temp.u32);
loc_8217F52C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// fmr f1,f21
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f21.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e20b0
	ctx.lr = 0x8217F540;
	sub_820E20B0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e1b70
	ctx.lr = 0x8217F550;
	sub_820E1B70(ctx, base);
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, f27.f64);
	// bge cr6,0x8217f578
	if (!ctx.cr6.lt) goto loc_8217F578;
	// lfs f13,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1836(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 1836);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 52, temp.u32);
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 - f27.f64));
	// b 0x8217f5ac
	goto loc_8217F5AC;
loc_8217F578:
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8217f5a0
	if (!ctx.cr6.gt) goto loc_8217F5A0;
	// lfs f13,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1836(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 1836);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 52, temp.u32);
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f18,f13
	ctx.f13.f64 = double(float(f18.f64 - ctx.f13.f64));
	// b 0x8217f5ac
	goto loc_8217F5AC;
loc_8217F5A0:
	// lfs f0,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_8217F5AC:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8217f5b8
	if (!ctx.cr6.gt) goto loc_8217F5B8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8217F5B8:
	// stfs f0,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 44, temp.u32);
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, f25.f64);
	// bgt cr6,0x8217f5c8
	if (ctx.cr6.gt) goto loc_8217F5C8;
	// fmr f0,f25
	ctx.f0.f64 = f25.f64;
loc_8217F5C8:
	// lfs f13,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, f25.f64);
	// fmuls f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 * f26.f64));
	// lfs f12,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,44(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 44, temp.u32);
	// fmadds f13,f12,f17,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, f17.f64, ctx.f13.f64)));
	// stfs f13,32(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 32, temp.u32);
	// bgt cr6,0x8217f5ec
	if (ctx.cr6.gt) goto loc_8217F5EC;
	// fmr f0,f25
	ctx.f0.f64 = f25.f64;
loc_8217F5EC:
	// fmuls f0,f0,f21
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * f21.f64));
	// lhz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 60);
	// lfs f13,36(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f12,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// fmadds f0,f13,f16,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f16.f64, ctx.f0.f64)));
	// stfs f0,36(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 36, temp.u32);
	// lfs f0,1836(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 1836);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 52, temp.u32);
	// sth r11,60(r30)
	REX_STORE_U16(r30.u32 + 60, ctx.r11.u16);
	// stb r10,76(r29)
	REX_STORE_U8(r29.u32 + 76, ctx.r10.u8);
	// b 0x8217f64c
	goto loc_8217F64C;
loc_8217F624:
	// lfs f13,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1836(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 1836);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,56(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 56, temp.u32);
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, f25.f64);
	// bge cr6,0x8217f64c
	if (!ctx.cr6.lt) goto loc_8217F64C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8217e180
	ctx.lr = 0x8217F64C;
	sub_8217E180(ctx, base);
loc_8217F64C:
	// lwz r11,204(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 204);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// addi r29,r29,80
	r29.s64 = r29.s64 + 80;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(r21.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8217f1f8
	if (ctx.cr6.lt) goto loc_8217F1F8;
loc_8217F668:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x822d4f4c
	ctx.lr = 0x8217F674;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_82195440) {
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
	ctx.lr = 0x82195448;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r4,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r4.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f0,20484(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r6,3924
	ctx.r10.s64 = ctx.r6.s64 + 3924;
	// lfs f13,15968(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15968);
	ctx.f13.f64 = double(temp.f32);
	// lfs f30,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	f30.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f31,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	f31.f64 = double(temp.f32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f30,104(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r4,83
	ctx.r4.s64 = 83;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821918a0
	ctx.lr = 0x821954B8;
	sub_821918A0(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r4,82
	ctx.r4.s64 = 82;
	// bl 0x821918a0
	ctx.lr = 0x821954D4;
	sub_821918A0(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// blt cr6,0x82195518
	if (ctx.cr6.lt) goto loc_82195518;
	// beq cr6,0x82195508
	if (ctx.cr6.eq) goto loc_82195508;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// blt cr6,0x82195500
	if (ctx.cr6.lt) goto loc_82195500;
	// bne cr6,0x82195528
	if (!ctx.cr6.eq) goto loc_82195528;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f30,17064(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 17064);
	f30.f64 = double(temp.f32);
	// b 0x8219552c
	goto loc_8219552C;
loc_82195500:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8219552c
	goto loc_8219552C;
loc_82195508:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f30,2012(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2012);
	f30.f64 = double(temp.f32);
	// b 0x8219552c
	goto loc_8219552C;
loc_82195518:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f30,2000(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	f30.f64 = double(temp.f32);
	// b 0x8219552c
	goto loc_8219552C;
loc_82195528:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8219552C:
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,92(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
	// stb r11,77(r10)
	REX_STORE_U8(ctx.r10.u32 + 77, ctx.r11.u8);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r10,92(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
	// stb r11,77(r10)
	REX_STORE_U8(ctx.r10.u32 + 77, ctx.r11.u8);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stfs f30,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stfs f30,60(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8219B420) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// beq cr6,0x8219b458
	if (ctx.cr6.eq) goto loc_8219B458;
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f13,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
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
loc_8219B458:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219C1E0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219C888) {
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
	ctx.lr = 0x8219C890;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// addi r8,r11,-15952
	ctx.r8.s64 = ctx.r11.s64 + -15952;
	// addi r7,r10,-15896
	ctx.r7.s64 = ctx.r10.s64 + -15896;
	// addi r6,r9,-16392
	ctx.r6.s64 = ctx.r9.s64 + -16392;
	// li r5,901
	ctx.r5.s64 = 901;
	// li r4,5
	ctx.r4.s64 = 5;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8218e5c0
	ctx.lr = 0x8219C8D4;
	sub_8218E5C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8219ca20
	if (ctx.cr0.eq) goto loc_8219CA20;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r3,80
	r31.s64 = ctx.r3.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r31,40
	ctx.r11.s64 = r31.s64 + 40;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r9,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r9.u32);
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x8219c920
	if (ctx.cr6.eq) goto loc_8219C920;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x8219c938
	goto loc_8219C938;
loc_8219C920:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_8219C938:
	// addi r11,r31,72
	ctx.r11.s64 = r31.s64 + 72;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8219c968
	if (ctx.cr6.eq) goto loc_8219C968;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 12);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x8219c978
	goto loc_8219C978;
loc_8219C968:
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_8219C978:
	// stw r27,160(r31)
	REX_STORE_U32(r31.u32 + 160, r27.u32);
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// mulli r10,r26,44
	ctx.r10.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(44));
	// addi r28,r11,5184
	r28.s64 = ctx.r11.s64 + 5184;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r11,r28,256
	ctx.r11.s64 = r28.s64 + 256;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x8219bf50
	ctx.lr = 0x8219C9A0;
	sub_8219BF50(ctx, base);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
	// rlwinm r11,r25,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f0,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// lfs f0,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 172, temp.u32);
	// lfs f0,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 176, temp.u32);
	// lfs f0,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// lfs f0,28(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 184, temp.u32);
	// lfs f0,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 188, temp.u32);
	// lwz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 36);
	// stw r10,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r10.u32);
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r10.u32);
	// stw r11,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r11.u32);
	// lhz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// stw r11,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r11,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r11,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stw r11,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// stw r11,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r11.u32);
loc_8219CA20:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_821A33F8) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821a3488
	if (ctx.cr6.eq) goto loc_821A3488;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821a3458
	if (ctx.cr6.eq) goto loc_821A3458;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821a34bc
	if (!ctx.cr6.eq) goto loc_821A34BC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821a34bc
	if (!ctx.cr6.eq) goto loc_821A34BC;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821a34bc
	if (!ctx.cr6.eq) goto loc_821A34BC;
	// li r10,6
	ctx.r10.s64 = 6;
	// b 0x821a34ac
	goto loc_821A34AC;
loc_821A3458:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821a3178
	ctx.lr = 0x821A3460;
	sub_821A3178(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821a34bc
	if (ctx.cr0.eq) goto loc_821A34BC;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x821a2120
	ctx.lr = 0x821A3474;
	sub_821A2120(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x821a29a8
	ctx.lr = 0x821A3480;
	sub_821A29A8(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x821a34ac
	goto loc_821A34AC;
loc_821A3488:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821a34bc
	if (!ctx.cr6.eq) goto loc_821A34BC;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821a34bc
	if (!ctx.cr6.eq) goto loc_821A34BC;
	// li r10,2
	ctx.r10.s64 = 2;
loc_821A34AC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
loc_821A34BC:
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

DEFINE_REX_FUNC(sub_821A6D78) {
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
	ctx.lr = 0x821A6D80;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r8,r6,1
	ctx.r8.s64 = ctx.r6.s64 + 1;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// divw r7,r8,r11
	ctx.r7.u64 = uint32_t((ctx.r11.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r8.s32 / ctx.r11.s32 : 0);
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// rlwinm r9,r6,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// addi r11,r10,28776
	ctx.r11.s64 = ctx.r10.s64 + 28776;
	// mulli r6,r7,3
	ctx.r6.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(3));
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// subf r6,r6,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r6.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bl 0x821a6bd8
	ctx.lr = 0x821A6DD0;
	sub_821A6BD8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r30,1
	ctx.r5.s64 = r30.s64 + 1;
	// lfs f2,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f2.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lfs f1,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821a6bd8
	ctx.lr = 0x821A6DFC;
	sub_821A6BD8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821A86C8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r11,43
	ctx.r11.s64 = ctx.r11.s64 + 43;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_821A8CF8) {
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
	// addi r3,r3,104
	ctx.r3.s64 = ctx.r3.s64 + 104;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x821a8d54
	if (ctx.cr6.eq) goto loc_821A8D54;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82208d78
	ctx.lr = 0x821A8D28;
	sub_82208D78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821a8d8c
	if (!ctx.cr0.eq) goto loc_821A8D8C;
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821a8d68
	if (ctx.cr6.lt) goto loc_821A8D68;
	// bne cr6,0x821a8d54
	if (!ctx.cr6.eq) goto loc_821A8D54;
loc_821A8D40:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r11,156(r31)
	REX_STORE_U8(r31.u32 + 156, ctx.r11.u8);
loc_821A8D4C:
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
loc_821A8D50:
	// stb r11,88(r31)
	REX_STORE_U8(r31.u32 + 88, ctx.r11.u8);
loc_821A8D54:
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
loc_821A8D68:
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,432
	ctx.r10.s64 = ctx.r10.s64 + 432;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,20
	ctx.r8.s64 = 20;
	// stb r11,3394(r10)
	REX_STORE_U8(ctx.r10.u32 + 3394, ctx.r11.u8);
	// stb r9,156(r31)
	REX_STORE_U8(r31.u32 + 156, ctx.r9.u8);
	// stw r8,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r8.u32);
	// b 0x821a8d50
	goto loc_821A8D50;
loc_821A8D8C:
	// cmplwi cr6,r3,1223
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1223, ctx.xer);
	// beq cr6,0x821a8d40
	if (ctx.cr6.eq) goto loc_821A8D40;
	// cmplwi cr6,r3,1627
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1627, ctx.xer);
	// beq cr6,0x821a8d40
	if (ctx.cr6.eq) goto loc_821A8D40;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x821a8d4c
	goto loc_821A8D4C;
}

DEFINE_REX_FUNC(sub_821AA4B0) {
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
	// lbz r11,324(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 324);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821aa548
	if (ctx.cr0.eq) goto loc_821AA548;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x821aa548
	if (ctx.cr6.eq) goto loc_821AA548;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821aa538
	if (!ctx.cr6.eq) goto loc_821AA538;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82208d78
	ctx.lr = 0x821AA504;
	sub_82208D78(ctx, base);
	// cmplwi cr6,r3,1223
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1223, ctx.xer);
	// beq cr6,0x821aa524
	if (ctx.cr6.eq) goto loc_821AA524;
	// cmplwi cr6,r3,1627
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1627, ctx.xer);
	// beq cr6,0x821aa524
	if (ctx.cr6.eq) goto loc_821AA524;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821aa328
	ctx.lr = 0x821AA520;
	sub_821AA328(ctx, base);
	// b 0x821aa548
	goto loc_821AA548;
loc_821AA524:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,325(r31)
	REX_STORE_U8(r31.u32 + 325, ctx.r11.u8);
	// stb r10,324(r31)
	REX_STORE_U8(r31.u32 + 324, ctx.r10.u8);
	// b 0x821aa548
	goto loc_821AA548;
loc_821AA538:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821aa0f8
	ctx.lr = 0x821AA540;
	sub_821AA0F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,324(r31)
	REX_STORE_U8(r31.u32 + 324, ctx.r11.u8);
loc_821AA548:
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

DEFINE_REX_FUNC(sub_821AF9F8) {
	REX_FUNC_PROLOGUE();
	// subfic r11,r4,-1
	ctx.xer.ca = ctx.r4.u32 <= 4294967295;
	ctx.r11.u64 = static_cast<uint64_t>(-1) - ctx.r4.u64;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x821afa0c
	if (!ctx.cr6.lt) goto loc_821AFA0C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_821AFA0C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// neg. r11,r4
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r4.u64);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x821afa1c
	if (!ctx.cr0.lt) goto loc_821AFA1C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_821AFA1C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// subf r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B0E40) {
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
	// addi r11,r11,9820
	ctx.r11.s64 = ctx.r11.s64 + 9820;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821B0E6C;
	sub_821E2FD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b0e7c
	if (ctx.cr0.eq) goto loc_821B0E7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821B0E7C;
	sub_822C80A8(ctx, base);
loc_821B0E7C:
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

DEFINE_REX_FUNC(sub_821B1DA8) {
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
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x821b1dc4
	if (!ctx.cr6.eq) goto loc_821B1DC4;
	// lha r4,88(r3)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 88));
loc_821B1DC4:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-9896
	ctx.r11.s64 = ctx.r11.s64 + -9896;
	// lhax r31,r10,r11
	r31.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32));
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(r31.s32, -1, ctx.xer);
	// bne cr6,0x821b1de0
	if (!ctx.cr6.eq) goto loc_821B1DE0;
	// lha r31,100(r3)
	r31.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 100));
loc_821B1DE0:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x821c8d20
	ctx.lr = 0x821B1DE8;
	sub_821C8D20(ctx, base);
	// rotlwi r11,r31,1
	ctx.r11.u64 = __builtin_rotateleft32(r31.u32, 1);
	// divw r10,r31,r3
	ctx.r10.u64 = uint32_t((ctx.r3.s32 && !(r31.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? r31.s32 / ctx.r3.s32 : 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r10,r10,r3
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// andc r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ~ctx.r11.u64;
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// subf r3,r10,r31
	ctx.r3.u64 = r31.u64 - ctx.r10.u64;
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
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

DEFINE_REX_FUNC(sub_821B44F0) {
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
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r31,r10,432
	r31.s64 = ctx.r10.s64 + 432;
	// addi r30,r11,-7072
	r30.s64 = ctx.r11.s64 + -7072;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b45a8
	if (ctx.cr0.eq) goto loc_821B45A8;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bne cr6,0x821b45cc
	if (!ctx.cr6.eq) goto loc_821B45CC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,216(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 216);
	// bl 0x821c54e0
	ctx.lr = 0x821B4534;
	sub_821C54E0(ctx, base);
	// bl 0x8212bbf0
	ctx.lr = 0x821B4538;
	sub_8212BBF0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8212bf38
	ctx.lr = 0x821B4548;
	sub_8212BF38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8212bf38
	ctx.lr = 0x821B4558;
	sub_8212BF38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218e510
	ctx.lr = 0x821B4560;
	sub_8218E510(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218e510
	ctx.lr = 0x821B4568;
	sub_8218E510(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x8218e510
	ctx.lr = 0x821B4574;
	sub_8218E510(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821d7b50
	ctx.lr = 0x821B457C;
	sub_821D7B50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821dfd28
	ctx.lr = 0x821B4588;
	sub_821DFD28(ctx, base);
	// bl 0x820ee428
	ctx.lr = 0x821B458C;
	sub_820EE428(ctx, base);
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
	// b 0x821b45c4
	goto loc_821B45C4;
loc_821B45A8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,30
	ctx.r4.s64 = 30;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f3,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x821afa50
	ctx.lr = 0x821B45C4;
	sub_821AFA50(ctx, base);
loc_821B45C4:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
loc_821B45CC:
	// ble cr6,0x821b4620
	if (!ctx.cr6.gt) goto loc_821B4620;
	// bl 0x821e0020
	ctx.lr = 0x821B45D4;
	sub_821E0020(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821b4620
	if (ctx.cr0.eq) goto loc_821B4620;
	// lwz r3,220(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 220);
	// bl 0x8218e1b0
	ctx.lr = 0x821B45E4;
	sub_8218E1B0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// stw r10,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r10.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// stw r11,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r11.u32);
	// bl 0x820ee438
	ctx.lr = 0x821B4608;
	sub_820EE438(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,3700
	ctx.r9.u64 = ctx.r10.u64 | 3700;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,4(r30)
	REX_STORE_U8(r30.u32 + 4, ctx.r10.u8);
	// stbx r11,r30,r9
	REX_STORE_U8(r30.u32 + ctx.r9.u32, ctx.r11.u8);
loc_821B4620:
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

DEFINE_REX_FUNC(sub_821BE8A0) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r4,8252(r3)
	REX_STORE_U16(ctx.r3.u32 + 8252, ctx.r4.u16);
	// sth r11,7356(r3)
	REX_STORE_U16(ctx.r3.u32 + 7356, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BEC98) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,896
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(896));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r11,r11,7224
	ctx.xer.ca = ctx.r11.u32 > 4294960071;
	ctx.r11.s64 = ctx.r11.s64 + 7224;
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
	// stfs f1,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// bgt cr6,0x821becd4
	if (ctx.cr6.gt) goto loc_821BECD4;
	// stfs f1,48(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// b 0x821becfc
	goto loc_821BECFC;
loc_821BECD4:
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// lfs f13,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
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
	// stfs f12,64(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// stfs f13,56(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
loc_821BECFC:
	// stfs f0,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BFAC0) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,10024(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 10024);
	// bl 0x821bf940
	ctx.lr = 0x821BFADC;
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

DEFINE_REX_FUNC(sub_821C0708) {
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
	// lwz r11,5896(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5896);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821c0760
	if (ctx.cr6.eq) goto loc_821C0760;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821c0754
	if (ctx.cr6.eq) goto loc_821C0754;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821c0770
	if (!ctx.cr6.eq) goto loc_821C0770;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821C073C:
	// stb r11,217(r31)
	REX_STORE_U8(r31.u32 + 217, ctx.r11.u8);
	// stb r11,195(r31)
	REX_STORE_U8(r31.u32 + 195, ctx.r11.u8);
	// stw r11,5900(r31)
	REX_STORE_U32(r31.u32 + 5900, ctx.r11.u32);
	// stw r11,5904(r31)
	REX_STORE_U32(r31.u32 + 5904, ctx.r11.u32);
	// stw r11,5908(r31)
	REX_STORE_U32(r31.u32 + 5908, ctx.r11.u32);
	// b 0x821c076c
	goto loc_821C076C;
loc_821C0754:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,194(r31)
	REX_STORE_U8(r31.u32 + 194, ctx.r11.u8);
	// b 0x821c073c
	goto loc_821C073C;
loc_821C0760:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c0618
	ctx.lr = 0x821C0768;
	sub_821C0618(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821C076C:
	// stw r11,5896(r31)
	REX_STORE_U32(r31.u32 + 5896, ctx.r11.u32);
loc_821C0770:
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

DEFINE_REX_FUNC(sub_821C1700) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r4,10008(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 10008);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x821c1680
	sub_821C1680(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821C22C0) {
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
	ctx.lr = 0x821C22C8;
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,896
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(896));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,7224
	r30.s64 = ctx.r11.s64 + 7224;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lhz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,76(r30)
	REX_STORE_U16(r30.u32 + 76, ctx.r11.u16);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x821c24d4
	if (ctx.cr6.gt) goto loc_821C24D4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r28,1
	r28.s64 = 1;
	// lis r29,-32168
	r29.s64 = -2108162048;
	// lis r25,-32168
	r25.s64 = -2108162048;
	// lfs f31,15628(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15628);
	f31.f64 = double(temp.f32);
	// addi r27,r11,13128
	r27.s64 = ctx.r11.s64 + 13128;
loc_821C2318:
	// stw r30,10008(r31)
	REX_STORE_U32(r31.u32 + 10008, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lha r11,0(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 0));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,10016(r31)
	REX_STORE_U32(r31.u32 + 10016, ctx.r11.u32);
	// lha r11,0(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 0));
	// slw r11,r28,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r11.u8 & 0x3F));
	// stw r11,10024(r31)
	REX_STORE_U32(r31.u32 + 10024, ctx.r11.u32);
	// lhz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 2);
	// sth r11,10032(r31)
	REX_STORE_U16(r31.u32 + 10032, ctx.r11.u16);
	// lha r11,0(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 0));
	// subfic r11,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r11.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// mulli r10,r11,896
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(896));
	// stw r11,10020(r31)
	REX_STORE_U32(r31.u32 + 10020, ctx.r11.u32);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r11,r11,7224
	ctx.r11.s64 = ctx.r11.s64 + 7224;
	// stw r11,10012(r31)
	REX_STORE_U32(r31.u32 + 10012, ctx.r11.u32);
	// bl 0x821c2198
	ctx.lr = 0x821C2360;
	sub_821C2198(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821be160
	ctx.lr = 0x821C236C;
	sub_821BE160(ctx, base);
	// lha r11,2(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 2));
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// blt cr6,0x821c2380
	if (ctx.cr6.lt) goto loc_821C2380;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821c23c4
	if (ctx.cr6.lt) goto loc_821C23C4;
loc_821C2380:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r28,72(r30)
	REX_STORE_U16(r30.u32 + 72, r28.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-9752(r25)
	REX_STORE_U32(r25.u32 + -9752, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,-9764(r29)
	REX_STORE_U32(r29.u32 + -9764, ctx.r10.u32);
	// lha r4,2(r30)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r30.u32 + 2));
	// bl 0x821bede8
	ctx.lr = 0x821C23A0;
	sub_821BEDE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821a4c80
	ctx.lr = 0x821C23AC;
	sub_821A4C80(ctx, base);
	// lwz r11,-9764(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -9764);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c23c4
	if (ctx.cr6.eq) goto loc_821C23C4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c2198
	ctx.lr = 0x821C23C4;
	sub_821C2198(ctx, base);
loc_821C23C4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c4f80
	ctx.lr = 0x821C23D0;
	sub_821C4F80(ctx, base);
	// lfs f1,5736(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5736);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821af850
	ctx.lr = 0x821C23D8;
	sub_821AF850(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f31.f64));
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821bf148
	ctx.lr = 0x821C23F4;
	sub_821BF148(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c2410
	if (ctx.cr6.eq) goto loc_821C2410;
	// lhz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c2410
	if (!ctx.cr0.eq) goto loc_821C2410;
	// bl 0x821bfca0
	ctx.lr = 0x821C2410;
	sub_821BFCA0(ctx, base);
loc_821C2410:
	// lbz r10,1829(r27)
	ctx.r10.u64 = REX_LOAD_U8(r27.u32 + 1829);
	// lwz r11,5780(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5780);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821c249c
	if (ctx.cr0.eq) goto loc_821C249C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c249c
	if (ctx.cr6.eq) goto loc_821C249C;
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lha r11,54(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 54));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,1840(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821c24a0
	if (!ctx.cr6.gt) goto loc_821C24A0;
	// lfs f13,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf. r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821c24a0
	if (!ctx.cr0.gt) goto loc_821C24A0;
	// cmpw cr6,r11,r11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821c24a0
	if (ctx.cr6.eq) goto loc_821C24A0;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
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
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x821c24a0
	goto loc_821C24A0;
loc_821C249C:
	// lfs f0,1840(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
loc_821C24A0:
	// stfs f0,7220(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 7220, temp.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bff88
	ctx.lr = 0x821C24B0;
	sub_821BFF88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821c2510
	if (ctx.cr0.eq) goto loc_821C2510;
	// lhz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sth r11,76(r30)
	REX_STORE_U16(r30.u32 + 76, ctx.r11.u16);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x821c2318
	if (!ctx.cr6.gt) goto loc_821C2318;
loc_821C24D4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x821c2508
	if (!ctx.cr6.eq) goto loc_821C2508;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c1760
	ctx.lr = 0x821C2504;
	sub_821C1760(ctx, base);
	// b 0x821c2510
	goto loc_821C2510;
loc_821C2508:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821c15b8
	ctx.lr = 0x821C2510;
	sub_821C15B8(ctx, base);
loc_821C2510:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_821C9368) {
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
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// ori r7,r10,3696
	ctx.r7.u64 = ctx.r10.u64 | 3696;
	// addi r9,r9,-7072
	ctx.r9.s64 = ctx.r9.s64 + -7072;
	// lwz r10,-32480(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r8,432
	ctx.r8.s64 = ctx.r8.s64 + 432;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r8,r8,56
	ctx.r8.s64 = ctx.r8.s64 + 56;
	// lwz r6,80(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mullw r10,r6,r7
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lbzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// add r31,r10,r9
	r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r3,r7
	ctx.r3.s64 = ctx.r7.s8;
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// stwx r11,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u32);
	// stw r11,19708(r31)
	REX_STORE_U32(r31.u32 + 19708, ctx.r11.u32);
	// stw r11,19676(r31)
	REX_STORE_U32(r31.u32 + 19676, ctx.r11.u32);
	// stw r11,19668(r31)
	REX_STORE_U32(r31.u32 + 19668, ctx.r11.u32);
	// lwz r30,19428(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 19428);
	// bl 0x821c5420
	ctx.lr = 0x821C93E0;
	sub_821C5420(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x822d55f8
	ctx.lr = 0x821C93EC;
	sub_822D55F8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r11,156(r31)
	REX_STORE_U16(r31.u32 + 156, ctx.r11.u16);
	// sth r11,154(r31)
	REX_STORE_U16(r31.u32 + 154, ctx.r11.u16);
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

DEFINE_REX_FUNC(sub_821CB410) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821be318
	ctx.lr = 0x821CB43C;
	sub_821BE318(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,8192
	ctx.r9.s64 = 8192;
	// sth r10,7356(r31)
	REX_STORE_U16(r31.u32 + 7356, ctx.r10.u16);
	// sth r9,8252(r31)
	REX_STORE_U16(r31.u32 + 8252, ctx.r9.u16);
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// ble cr6,0x821cb474
	if (!ctx.cr6.gt) goto loc_821CB474;
	// stfs f31,5492(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 5492, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f31,5488(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 5488, temp.u32);
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ca9d0
	ctx.lr = 0x821CB474;
	sub_821CA9D0(ctx, base);
loc_821CB474:
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

DEFINE_REX_FUNC(sub_821CF708) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e68
	ctx.lr = 0x821CF710;
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r10,98(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 98);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r30,8(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// extsb r24,r11
	r24.s64 = ctx.r11.s8;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821d000c
	if (ctx.cr0.eq) goto loc_821D000C;
	// lhz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 88);
	// lhz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 88);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821cf76c
	if (!ctx.cr6.eq) goto loc_821CF76C;
	// lhz r11,100(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 100);
	// lhz r10,100(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 100);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821cf76c
	if (!ctx.cr6.eq) goto loc_821CF76C;
	// lbz r11,6(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 6);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821cf76c
	if (ctx.cr0.eq) goto loc_821CF76C;
	// bl 0x821cb388
	ctx.lr = 0x821CF768;
	sub_821CB388(ctx, base);
	// sth r3,100(r31)
	REX_STORE_U16(r31.u32 + 100, ctx.r3.u16);
loc_821CF76C:
	// lis r23,-32168
	r23.s64 = -2108162048;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r29,1
	r29.s64 = 1;
	// addi r26,r11,-9528
	r26.s64 = ctx.r11.s64 + -9528;
	// li r25,0
	r25.s64 = 0;
	// lwz r11,-7176(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + -7176);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x821cf840
	if (!ctx.cr6.eq) goto loc_821CF840;
	// lwz r11,19668(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19668);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821cf840
	if (ctx.cr6.eq) goto loc_821CF840;
	// lha r3,88(r31)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r31.u32 + 88));
	// lha r9,100(r31)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r31.u32 + 100));
	// bl 0x821c8cd0
	ctx.lr = 0x821CF7A4;
	sub_821C8CD0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x821cf7b4
	if (!ctx.cr6.gt) goto loc_821CF7B4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_821CF7B4:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lbz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lha r5,98(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 98));
	// sth r11,100(r31)
	REX_STORE_U16(r31.u32 + 100, ctx.r11.u16);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// lwz r3,19428(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 19428);
	// bl 0x821c5478
	ctx.lr = 0x821CF7D4;
	sub_821C5478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821cf840
	if (!ctx.cr0.eq) goto loc_821CF840;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r10,r26,-24
	ctx.r10.s64 = r26.s64 + -24;
	// stw r29,19668(r31)
	REX_STORE_U32(r31.u32 + 19668, r29.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x821cf814
	if (ctx.cr6.eq) goto loc_821CF814;
	// bl 0x821f7908
	ctx.lr = 0x821CF800;
	sub_821F7908(ctx, base);
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r11,r26,-24
	ctx.r11.s64 = r26.s64 + -24;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r25,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, r25.u64);
loc_821CF814:
	// addi r11,r26,-48
	ctx.r11.s64 = r26.s64 + -48;
	// rlwinm r10,r24,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x821cf840
	if (ctx.cr6.eq) goto loc_821CF840;
	// bl 0x821f7908
	ctx.lr = 0x821CF82C;
	sub_821F7908(ctx, base);
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r11,r26,-48
	ctx.r11.s64 = r26.s64 + -48;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r25,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, r25.u64);
loc_821CF840:
	// lwz r11,19668(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19668);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821cff04
	if (ctx.cr6.eq) goto loc_821CFF04;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821cfed8
	if (ctx.cr6.eq) goto loc_821CFED8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821cfdb4
	if (ctx.cr6.eq) goto loc_821CFDB4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821cf948
	if (ctx.cr6.eq) goto loc_821CF948;
	// ble cr6,0x821cffc0
	if (!ctx.cr6.gt) goto loc_821CFFC0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x821cf938
	if (!ctx.cr6.gt) goto loc_821CF938;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x821cffc0
	if (!ctx.cr6.eq) goto loc_821CFFC0;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821cf8a4
	if (ctx.cr0.eq) goto loc_821CF8A4;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r11,r11,-7072
	ctx.r11.s64 = ctx.r11.s64 + -7072;
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821cf8a4
	if (ctx.cr6.eq) goto loc_821CF8A4;
	// lwz r11,19668(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 19668);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821cffc0
	if (!ctx.cr6.eq) goto loc_821CFFC0;
loc_821CF8A4:
	// addi r10,r26,-32
	ctx.r10.s64 = r26.s64 + -32;
	// rlwinm r9,r24,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x821cffc0
	if (ctx.cr6.lt) goto loc_821CFFC0;
	// lha r4,100(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 100));
	// lha r3,98(r31)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r31.u32 + 98));
	// bl 0x821c9180
	ctx.lr = 0x821CF8CC;
	sub_821C9180(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// sth r25,138(r31)
	REX_STORE_U16(r31.u32 + 138, r25.u16);
	// rlwinm r9,r24,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,19428(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 19428);
	// addi r11,r11,31432
	ctx.r11.s64 = ctx.r11.s64 + 31432;
	// lbz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// addi r7,r11,32
	ctx.r7.s64 = ctx.r11.s64 + 32;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// lwz r6,36(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// lwzx r3,r9,r7
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r9,r4
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// addi r11,r26,-24
	ctx.r11.s64 = r26.s64 + -24;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,2
	ctx.r9.s64 = 2;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r7,r31,19740
	ctx.r7.s64 = r31.s64 + 19740;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x821f7aa0
	ctx.lr = 0x821CF92C;
	sub_821F7AA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
loc_821CF930:
	// stw r11,19668(r31)
	REX_STORE_U32(r31.u32 + 19668, ctx.r11.u32);
	// b 0x821cffc0
	goto loc_821CFFC0;
loc_821CF938:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821cda70
	ctx.lr = 0x821CF944;
	sub_821CDA70(ctx, base);
	// b 0x821cffc0
	goto loc_821CFFC0;
loc_821CF948:
	// lwz r11,19428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19428);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r5,r10,12544
	ctx.r5.s64 = ctx.r10.s64 + 12544;
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x821af9f8
	ctx.lr = 0x821CF960;
	sub_821AF9F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821cf978
	if (ctx.cr0.eq) goto loc_821CF978;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c2eb8
	ctx.lr = 0x821CF970;
	sub_821C2EB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821cffc0
	if (ctx.cr0.eq) goto loc_821CFFC0;
loc_821CF978:
	// lwz r11,19428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19428);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r10,12760
	ctx.r5.s64 = ctx.r10.s64 + 12760;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x821af9d8
	ctx.lr = 0x821CF994;
	sub_821AF9D8(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r28,r31,19496
	r28.s64 = r31.s64 + 19496;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// ori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 | 1;
	// bl 0x821ee990
	ctx.lr = 0x821CF9B8;
	sub_821EE990(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821cfdac
	if (ctx.cr0.eq) goto loc_821CFDAC;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lis r30,-32165
	r30.s64 = -2107965440;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821cfa34
	if (!ctx.cr6.eq) goto loc_821CFA34;
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lwz r11,-32480(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -32480);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// addi r10,r10,300
	ctx.r10.s64 = ctx.r10.s64 + 300;
	// addi r6,r7,12752
	ctx.r6.s64 = ctx.r7.s64 + 12752;
	// addi r9,r9,-12752
	ctx.r9.s64 = ctx.r9.s64 + -12752;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r8,r8,21040
	ctx.r8.s64 = ctx.r8.s64 + 21040;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x821366d8
	ctx.lr = 0x821CFA0C;
	sub_821366D8(ctx, base);
	// lwz r11,10140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10140);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r11,r11,20156
	ctx.r11.s64 = ctx.r11.s64 + 20156;
	// stw r11,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// bl 0x821e0c00
	ctx.lr = 0x821CFA28;
	sub_821E0C00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821cfa34
	if (!ctx.cr0.eq) goto loc_821CFA34;
	// stw r29,104(r31)
	REX_STORE_U32(r31.u32 + 104, r29.u32);
loc_821CFA34:
	// lwz r10,-32480(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + -32480);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r10,336(r11)
	REX_STORE_U32(ctx.r11.u32 + 336, ctx.r10.u32);
	// stw r9,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
	// sth r25,100(r11)
	REX_STORE_U16(ctx.r11.u32 + 100, r25.u16);
	// stw r28,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, r28.u32);
	// stb r25,103(r11)
	REX_STORE_U8(ctx.r11.u32 + 103, r25.u8);
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// bne 0x821cfa6c
	if (!ctx.cr0.eq) goto loc_821CFA6C;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// b 0x821cfa70
	goto loc_821CFA70;
loc_821CFA6C:
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
loc_821CFA70:
	// stw r10,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,19428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19428);
	// addi r5,r10,-29156
	ctx.r5.s64 = ctx.r10.s64 + -29156;
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x821af9d8
	ctx.lr = 0x821CFA90;
	sub_821AF9D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82129d78
	ctx.lr = 0x821CFAA4;
	sub_82129D78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821cae60
	ctx.lr = 0x821CFAAC;
	sub_821CAE60(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821f2ec8
	ctx.lr = 0x821CFAB4;
	sub_821F2EC8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821f2ee8
	ctx.lr = 0x821CFAC0;
	sub_821F2EE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,12320
	ctx.r3.s64 = r31.s64 + 12320;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x821617d0
	ctx.lr = 0x821CFAD0;
	sub_821617D0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r30,r11,12736
	r30.s64 = ctx.r11.s64 + 12736;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,19428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19428);
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x821af9f8
	ctx.lr = 0x821CFAEC;
	sub_821AF9F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x821cfb14
	if (!ctx.cr0.gt) goto loc_821CFB14;
	// lwz r11,19428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19428);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x821af9d8
	ctx.lr = 0x821CFB0C;
	sub_821AF9D8(ctx, base);
	// stw r3,10124(r31)
	REX_STORE_U32(r31.u32 + 10124, ctx.r3.u32);
	// b 0x821cfb18
	goto loc_821CFB18;
loc_821CFB14:
	// stw r25,10124(r31)
	REX_STORE_U32(r31.u32 + 10124, r25.u32);
loc_821CFB18:
	// addi r30,r31,16408
	r30.s64 = r31.s64 + 16408;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218ec78
	ctx.lr = 0x821CFB28;
	sub_8218EC78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218f040
	ctx.lr = 0x821CFB30;
	sub_8218F040(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r30,r11,12724
	r30.s64 = ctx.r11.s64 + 12724;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,19428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19428);
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x821af9f8
	ctx.lr = 0x821CFB4C;
	sub_821AF9F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x821cfb84
	if (!ctx.cr0.gt) goto loc_821CFB84;
	// lwz r11,19428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19428);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x821af9d8
	ctx.lr = 0x821CFB6C;
	sub_821AF9D8(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r3,r11,13
	ctx.r3.s64 = ctx.r11.s64 + 13;
	// bl 0x820e6b50
	ctx.lr = 0x821CFB84;
	sub_820E6B50(ctx, base);
loc_821CFB84:
	// lwz r11,19428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19428);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r10,12704
	ctx.r5.s64 = ctx.r10.s64 + 12704;
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x821af9d8
	ctx.lr = 0x821CFBA0;
	sub_821AF9D8(ctx, base);
	// lwz r11,19428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19428);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r4,13
	ctx.r4.s64 = 13;
	// addi r5,r10,12336
	ctx.r5.s64 = ctx.r10.s64 + 12336;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x821af9f8
	ctx.lr = 0x821CFBBC;
	sub_821AF9F8(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lis r9,15
	ctx.r9.s64 = 983040;
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r11,828(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 828);
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821ff870
	ctx.lr = 0x821CFBF0;
	sub_821FF870(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,12684
	ctx.r5.s64 = ctx.r11.s64 + 12684;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,19428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19428);
	// lwz r22,40(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x821af9d8
	ctx.lr = 0x821CFC10;
	sub_821AF9D8(ctx, base);
	// addi r30,r31,6272
	r30.s64 = r31.s64 + 6272;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r8,r30,516
	ctx.r8.s64 = r30.s64 + 516;
	// addi r7,r30,520
	ctx.r7.s64 = r30.s64 + 520;
	// addi r6,r30,512
	ctx.r6.s64 = r30.s64 + 512;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215cd78
	ctx.lr = 0x821CFC30;
	sub_8215CD78(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f0,-30444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30444);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,6812(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 6812, temp.u32);
	// stfs f13,6816(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 6816, temp.u32);
	// bl 0x821f2ec8
	ctx.lr = 0x821CFC54;
	sub_821F2EC8(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821f2ee8
	ctx.lr = 0x821CFC60;
	sub_821F2EE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,10984
	ctx.r3.s64 = r31.s64 + 10984;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// bl 0x821c25f8
	ctx.lr = 0x821CFC74;
	sub_821C25F8(ctx, base);
	// addi r11,r3,2047
	ctx.r11.s64 = ctx.r3.s64 + 2047;
	// lwz r3,19428(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 19428);
	// srawi r11,r11,11
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 11;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r28,r11,11,0,20
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// subf r4,r22,r28
	ctx.r4.u64 = r28.u64 - r22.u64;
	// bl 0x821af9a0
	ctx.lr = 0x821CFC90;
	sub_821AF9A0(ctx, base);
	// lha r11,88(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 88));
	// stw r28,864(r31)
	REX_STORE_U32(r31.u32 + 864, r28.u32);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// stw r29,868(r31)
	REX_STORE_U32(r31.u32 + 868, r29.u32);
	// beq cr6,0x821cfd04
	if (ctx.cr6.eq) goto loc_821CFD04;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x821cfd04
	if (ctx.cr6.eq) goto loc_821CFD04;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821ff870
	ctx.lr = 0x821CFCBC;
	sub_821FF870(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lha r4,100(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 100));
	// lha r3,90(r31)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r31.u32 + 90));
	// bl 0x82135908
	ctx.lr = 0x821CFCCC;
	sub_82135908(ctx, base);
	// sth r3,142(r31)
	REX_STORE_U16(r31.u32 + 142, ctx.r3.u16);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r5,868(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 868);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,864(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 864);
	// bl 0x821cd640
	ctx.lr = 0x821CFCE8;
	sub_821CD640(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c91f0
	ctx.lr = 0x821CFCF4;
	sub_821C91F0(ctx, base);
	// addi r11,r26,16
	ctx.r11.s64 = r26.s64 + 16;
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// b 0x821cfd28
	goto loc_821CFD28;
loc_821CFD04:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c91f0
	ctx.lr = 0x821CFD10;
	sub_821C91F0(ctx, base);
	// addi r11,r26,16
	ctx.r11.s64 = r26.s64 + 16;
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// stw r25,524(r30)
	REX_STORE_U32(r30.u32 + 524, r25.u32);
	// stw r25,528(r30)
	REX_STORE_U32(r30.u32 + 528, r25.u32);
	// stw r25,532(r30)
	REX_STORE_U32(r30.u32 + 532, r25.u32);
loc_821CFD28:
	// lhz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 140);
	// li r30,5
	r30.s64 = 5;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821cfd3c
	if (!ctx.cr6.eq) goto loc_821CFD3C;
	// stw r30,19672(r31)
	REX_STORE_U32(r31.u32 + 19672, r30.u32);
loc_821CFD3C:
	// lwz r11,-7176(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + -7176);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x821cfd68
	if (ctx.cr6.eq) goto loc_821CFD68;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x821cfd68
	if (ctx.cr6.eq) goto loc_821CFD68;
	// bl 0x821d81e8
	ctx.lr = 0x821CFD60;
	sub_821D81E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821cfda4
	if (ctx.cr0.eq) goto loc_821CFDA4;
loc_821CFD68:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// stfs f31,5468(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 5468, temp.u32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821ca490
	ctx.lr = 0x821CFD88;
	sub_821CA490(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x821ca558
	ctx.lr = 0x821CFD94;
	sub_821CA558(ctx, base);
	// bl 0x821cd9a0
	ctx.lr = 0x821CFD98;
	sub_821CD9A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821cd2a8
	ctx.lr = 0x821CFDA4;
	sub_821CD2A8(ctx, base);
loc_821CFDA4:
	// stw r30,19668(r31)
	REX_STORE_U32(r31.u32 + 19668, r30.u32);
	// b 0x821cffc0
	goto loc_821CFFC0;
loc_821CFDAC:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x821cf930
	goto loc_821CF930;
loc_821CFDB4:
	// addi r4,r31,19740
	ctx.r4.s64 = r31.s64 + 19740;
	// lwz r3,19428(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 19428);
	// bl 0x821b0660
	ctx.lr = 0x821CFDC0;
	sub_821B0660(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,12668
	ctx.r5.s64 = ctx.r11.s64 + 12668;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,19428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19428);
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x821af9d8
	ctx.lr = 0x821CFDDC;
	sub_821AF9D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x8212b730
	ctx.lr = 0x821CFDEC;
	sub_8212B730(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r30,r11,12544
	r30.s64 = ctx.r11.s64 + 12544;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,19428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19428);
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x821af9f8
	ctx.lr = 0x821CFE08;
	sub_821AF9F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x821cfe8c
	if (!ctx.cr0.gt) goto loc_821CFE8C;
	// lwz r11,19428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19428);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x821af9d8
	ctx.lr = 0x821CFE28;
	sub_821AF9D8(ctx, base);
	// lhz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 88);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x821cfe4c
	if (ctx.cr6.eq) goto loc_821CFE4C;
	// bl 0x8212b730
	ctx.lr = 0x821CFE48;
	sub_8212B730(ctx, base);
	// b 0x821cfe7c
	goto loc_821CFE7C;
loc_821CFE4C:
	// bl 0x8212b730
	ctx.lr = 0x821CFE50;
	sub_8212B730(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// stw r3,19424(r31)
	REX_STORE_U32(r31.u32 + 19424, ctx.r3.u32);
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r11,30(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x821cfe84
	if (!ctx.cr6.eq) goto loc_821CFE84;
	// li r11,24
	ctx.r11.s64 = 24;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// sth r11,92(r31)
	REX_STORE_U16(r31.u32 + 92, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212b838
	ctx.lr = 0x821CFE7C;
	sub_8212B838(ctx, base);
loc_821CFE7C:
	// stw r3,19424(r31)
	REX_STORE_U32(r31.u32 + 19424, ctx.r3.u32);
	// b 0x821cfe8c
	goto loc_821CFE8C;
loc_821CFE84:
	// li r11,-2
	ctx.r11.s64 = -2;
	// stw r11,19424(r31)
	REX_STORE_U32(r31.u32 + 19424, ctx.r11.u32);
loc_821CFE8C:
	// lwz r11,19428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19428);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r4,13
	ctx.r4.s64 = 13;
	// addi r5,r10,12648
	ctx.r5.s64 = ctx.r10.s64 + 12648;
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x821af9f8
	ctx.lr = 0x821CFEA4;
	sub_821AF9F8(ctx, base);
	// lwz r11,19428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19428);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r5,r10,12628
	ctx.r5.s64 = ctx.r10.s64 + 12628;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x821af9f8
	ctx.lr = 0x821CFEC0;
	sub_821AF9F8(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + r30.u64;
	// lwz r3,19428(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 19428);
	// neg r4,r11
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x821af9a0
	ctx.lr = 0x821CFED0;
	sub_821AF9A0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x821cf930
	goto loc_821CF930;
loc_821CFED8:
	// lwz r11,19748(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19748);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821cffc0
	if (!ctx.cr6.gt) goto loc_821CFFC0;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r10,r26,-24
	ctx.r10.s64 = r26.s64 + -24;
	// li r9,3
	ctx.r9.s64 = 3;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r9,19668(r31)
	REX_STORE_U32(r31.u32 + 19668, ctx.r9.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r25,r11,r10
	REX_STORE_U64(ctx.r11.u32 + ctx.r10.u32, r25.u64);
	// b 0x821cffc0
	goto loc_821CFFC0;
loc_821CFF04:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821cff28
	if (ctx.cr0.eq) goto loc_821CFF28;
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821cff28
	if (ctx.cr6.eq) goto loc_821CFF28;
	// lwz r11,19668(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 19668);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821d000c
	if (!ctx.cr6.eq) goto loc_821D000C;
loc_821CFF28:
	// stw r25,19748(r31)
	REX_STORE_U32(r31.u32 + 19748, r25.u32);
	// lwz r3,19428(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 19428);
	// bl 0x821af980
	ctx.lr = 0x821CFF34;
	sub_821AF980(ctx, base);
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r11,r26,-24
	ctx.r11.s64 = r26.s64 + -24;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x821cff54
	if (ctx.cr6.eq) goto loc_821CFF54;
	// bl 0x821f7908
	ctx.lr = 0x821CFF54;
	sub_821F7908(ctx, base);
loc_821CFF54:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r10,r26,-24
	ctx.r10.s64 = r26.s64 + -24;
	// li r9,7
	ctx.r9.s64 = 7;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r25,r11,r10
	REX_STORE_U64(ctx.r11.u32 + ctx.r10.u32, r25.u64);
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,19668(r31)
	REX_STORE_U32(r31.u32 + 19668, ctx.r9.u32);
	// stw r25,19424(r31)
	REX_STORE_U32(r31.u32 + 19424, r25.u32);
	// stwx r25,r11,r26
	REX_STORE_U32(ctx.r11.u32 + r26.u32, r25.u32);
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lha r5,100(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 100));
	// lha r4,98(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 98));
	// lwz r30,19428(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 19428);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x821c5420
	ctx.lr = 0x821CFF9C;
	sub_821C5420(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x822d55f8
	ctx.lr = 0x821CFFA8;
	sub_822D55F8(ctx, base);
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r26,-32
	ctx.r10.s64 = r26.s64 + -32;
	// addi r9,r26,16
	ctx.r9.s64 = r26.s64 + 16;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stwx r25,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r25.u32);
	// stwx r8,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
loc_821CFFC0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r10,15
	ctx.r10.s64 = 15;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821cffe8
	if (ctx.cr6.eq) goto loc_821CFFE8;
	// lwz r9,19668(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 19668);
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// beq cr6,0x821cffe4
	if (ctx.cr6.eq) goto loc_821CFFE4;
	// sth r25,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, r25.u16);
	// b 0x821cffe8
	goto loc_821CFFE8;
loc_821CFFE4:
	// sth r10,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
loc_821CFFE8:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d000c
	if (ctx.cr6.eq) goto loc_821D000C;
	// lwz r9,19668(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 19668);
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// beq cr6,0x821d0008
	if (ctx.cr6.eq) goto loc_821D0008;
	// sth r25,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, r25.u16);
	// b 0x821d000c
	goto loc_821D000C;
loc_821D0008:
	// sth r10,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
loc_821D000C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_821F1FB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r3,40(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f4,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f4.f64 = double(temp.f32);
	// b 0x822a4b68
	sub_822A4B68(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F2160) {
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
	// lis r31,-32165
	r31.s64 = -2107965440;
	// lwz r3,-32040(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -32040);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821f21a0
	if (!ctx.cr6.eq) goto loc_821F21A0;
	// li r3,8292
	ctx.r3.s64 = 8292;
	// bl 0x822c80d0
	ctx.lr = 0x821F2188;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f2198
	if (ctx.cr0.eq) goto loc_821F2198;
	// bl 0x822c9480
	ctx.lr = 0x821F2194;
	sub_822C9480(ctx, base);
	// b 0x821f219c
	goto loc_821F219C;
loc_821F2198:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821F219C:
	// stw r3,-32040(r31)
	REX_STORE_U32(r31.u32 + -32040, ctx.r3.u32);
loc_821F21A0:
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
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

DEFINE_REX_FUNC(sub_821F3ED8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// b 0x821f3f24
	goto loc_821F3F24;
loc_821F3EE4:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f13,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821f3f08
	if (ctx.cr6.gt) goto loc_821F3F08;
	// li r9,0
	ctx.r9.s64 = 0;
loc_821F3F08:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821f3f30
	if (ctx.cr0.eq) goto loc_821F3F30;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// srawi r11,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	// stwx r10,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
loc_821F3F24:
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x821f3ee4
	if (ctx.cr6.lt) goto loc_821F3EE4;
loc_821F3F30:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F7AA0) {
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
	ctx.lr = 0x821F7AA8;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// divw r11,r5,r11
	ctx.r11.u64 = uint32_t((ctx.r11.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r5.s32 / ctx.r11.s32 : 0);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mulli r11,r11,1000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1000));
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// subf r7,r11,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r11.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// addi r5,r3,48
	ctx.r5.s64 = ctx.r3.s64 + 48;
	// addi r4,r10,18560
	ctx.r4.s64 = ctx.r10.s64 + 18560;
	// addi r6,r24,48
	ctx.r6.s64 = r24.s64 + 48;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// bl 0x822d55f8
	ctx.lr = 0x821F7AF4;
	sub_822D55F8(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r3,0
	ctx.r3.s64 = 0;
	// addi r8,r11,31064
	ctx.r8.s64 = ctx.r11.s64 + 31064;
	// addi r7,r10,30728
	ctx.r7.s64 = ctx.r10.s64 + 30728;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// ori r3,r3,32914
	ctx.r3.u64 = ctx.r3.u64 | 32914;
	// bl 0x821f7778
	ctx.lr = 0x821F7B1C;
	sub_821F7778(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f7bc8
	if (ctx.cr0.eq) goto loc_821F7BC8;
	// lwz r6,340(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// clrldi r8,r3,32
	ctx.r8.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r7,348(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// rlwinm r5,r6,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// addi r9,r3,80
	ctx.r9.s64 = ctx.r3.s64 + 80;
	// rlwinm r4,r7,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// subf r10,r5,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r5.u64;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// rldimi r8,r11,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// std r8,104(r3)
	REX_STORE_U64(ctx.r3.u32 + 104, ctx.r8.u64);
	// beq cr6,0x821f7b88
	if (ctx.cr6.eq) goto loc_821F7B88;
	// std r8,0(r25)
	REX_STORE_U64(r25.u32 + 0, ctx.r8.u64);
loc_821F7B88:
	// lwz r5,356(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// addi r4,r9,16
	ctx.r4.s64 = ctx.r9.s64 + 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,32(r9)
	REX_STORE_U32(ctx.r9.u32 + 32, r30.u32);
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r11,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r11.u32);
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// bl 0x82205f38
	ctx.lr = 0x821F7BC8;
	sub_82205F38(ctx, base);
loc_821F7BC8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_821FB4D8) {
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
	// addi r11,r11,-24728
	ctx.r11.s64 = ctx.r11.s64 + -24728;
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// bl 0x821fee08
	ctx.lr = 0x821FB4FC;
	sub_821FEE08(ctx, base);
	// stfs f1,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// bl 0x821fedc8
	ctx.lr = 0x821FB504;
	sub_821FEDC8(ctx, base);
	// stfs f1,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// bl 0x821feec8
	ctx.lr = 0x821FB50C;
	sub_821FEEC8(ctx, base);
	// stfs f1,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// bl 0x821fef70
	ctx.lr = 0x821FB514;
	sub_821FEF70(ctx, base);
	// stfs f1,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
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

DEFINE_REX_FUNC(sub_821FED80) {
	REX_FUNC_PROLOGUE();
	// b 0x821feb38
	sub_821FEB38(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821FEE08) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r9,r11,62237
	ctx.r9.u64 = ctx.r11.u64 | 62237;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lwz r11,10460(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 10460);
	// divw r7,r11,r9
	ctx.r7.u64 = uint32_t((ctx.r9.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r11.s32 / ctx.r9.s32 : 0);
	// mulli r11,r11,16807
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(16807));
	// mullw r7,r7,r10
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// subf. r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x821fee38
	if (ctx.cr0.gt) goto loc_821FEE38;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_821FEE38:
	// divw r9,r11,r9
	ctx.r9.u64 = uint32_t((ctx.r9.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r11.s32 / ctx.r9.s32 : 0);
	// mulli r7,r11,16807
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(16807));
	// mullw r6,r9,r10
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r11,r6,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x821fee54
	if (ctx.cr0.gt) goto loc_821FEE54;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_821FEE54:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r11,10460(r8)
	REX_STORE_U32(ctx.r8.u32 + 10460, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r10,r10,9
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFF;
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,21056(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 21056);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822007F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,380(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 380, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200858) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200948) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,348(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 348, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200998) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,336(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 336, temp.u32);
	// stfs f2,352(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 352, temp.u32);
	// stfs f3,368(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 368, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200B18) {
	REX_FUNC_PROLOGUE();
	// stw r4,256(r3)
	REX_STORE_U32(ctx.r3.u32 + 256, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82201A70) {
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
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fsqrts f2,f0
	ctx.f2.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x820e0130
	ctx.lr = 0x82201AB0;
	sub_820E0130(ctx, base);
	// fneg f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82203510) {
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
	// addi r11,r11,21336
	ctx.r11.s64 = ctx.r11.s64 + 21336;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8220353c
	if (ctx.cr0.eq) goto loc_8220353C;
	// bl 0x822c80a8
	ctx.lr = 0x8220353C;
	sub_822C80A8(ctx, base);
loc_8220353C:
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

DEFINE_REX_FUNC(sub_82204D68) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82204c48
	ctx.lr = 0x82204D98;
	sub_82204C48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822059D0) {
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
	ctx.lr = 0x822059D8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82205a0c
	if (!ctx.cr6.eq) goto loc_82205A0C;
loc_82205A04:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82205bac
	goto loc_82205BAC;
loc_82205A0C:
	// clrlwi r23,r28,16
	r23.u64 = r28.u32 & 0xFFFF;
	// li r21,0
	r21.s64 = 0;
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(r23.u32, 1, ctx.xer);
	// bne cr6,0x82205a3c
	if (!ctx.cr6.eq) goto loc_82205A3C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x82205a3c
	if (!ctx.cr6.eq) goto loc_82205A3C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r22,1
	r22.s64 = 1;
	// bl 0x82202ea0
	ctx.lr = 0x82205A30;
	sub_82202EA0(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne 0x82205a40
	if (!ctx.cr0.eq) goto loc_82205A40;
	// b 0x82205a04
	goto loc_82205A04;
loc_82205A3C:
	// mr r22,r21
	r22.u64 = r21.u64;
loc_82205A40:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r3,r11,23424
	ctx.r3.s64 = ctx.r11.s64 + 23424;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82205e08
	ctx.lr = 0x82205A58;
	sub_82205E08(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82205b84
	if (ctx.cr6.eq) goto loc_82205B84;
	// rlwinm r10,r26,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r9,r29,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xFFFFFF00;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(r23.u32, 1, ctx.xer);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// rldimi r8,r10,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// std r8,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r8.u64);
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r31.u32);
	// beq cr6,0x82205ab4
	if (ctx.cr6.eq) goto loc_82205AB4;
	// cmplwi cr6,r23,2
	ctx.cr6.compare<uint32_t>(r23.u32, 2, ctx.xer);
	// bne cr6,0x82205ab8
	if (!ctx.cr6.eq) goto loc_82205AB8;
loc_82205AB4:
	// oris r28,r28,16384
	r28.u64 = r28.u64 | 1073741824;
loc_82205AB8:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,28672
	ctx.r10.s64 = 1879048192;
	// lwz r9,300(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// lwz r7,308(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lwz r6,316(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// stw r28,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r28.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r26,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r26.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r29.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r27.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r21,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r21.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,30728(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 30728);
	// sth r9,60(r10)
	REX_STORE_U16(ctx.r10.u32 + 60, ctx.r9.u16);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// sth r7,62(r10)
	REX_STORE_U16(ctx.r10.u32 + 62, ctx.r7.u16);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// sth r6,64(r10)
	REX_STORE_U16(ctx.r10.u32 + 64, ctx.r6.u16);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,30728(r8)
	REX_STORE_U32(ctx.r8.u32 + 30728, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bne cr6,0x82205b70
	if (!ctx.cr6.eq) goto loc_82205B70;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r21,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r21.u32);
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// stw r21,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r21.u32);
	// stw r21,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r21.u32);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// b 0x82205b54
	goto loc_82205B54;
loc_82205B50:
	// bl 0x82205488
	ctx.lr = 0x82205B54;
	sub_82205488(ctx, base);
loc_82205B54:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82205b50
	if (ctx.cr6.eq) goto loc_82205B50;
	// cmplwi cr6,r23,4
	ctx.cr6.compare<uint32_t>(r23.u32, 4, ctx.xer);
	// bne cr6,0x82205b98
	if (!ctx.cr6.eq) goto loc_82205B98;
	// lwz r27,108(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x82205b98
	goto loc_82205B98;
loc_82205B70:
	// stw r30,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, r30.u32);
	// stw r29,12(r30)
	REX_STORE_U32(r30.u32 + 12, r29.u32);
	// stw r21,0(r30)
	REX_STORE_U32(r30.u32 + 0, r21.u32);
	// stw r21,4(r30)
	REX_STORE_U32(r30.u32 + 4, r21.u32);
	// b 0x82205b98
	goto loc_82205B98;
loc_82205B84:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x82205b94
	if (ctx.cr6.eq) goto loc_82205B94;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82202ea8
	ctx.lr = 0x82205B94;
	sub_82202EA8(ctx, base);
loc_82205B94:
	// mr r25,r21
	r25.u64 = r21.u64;
loc_82205B98:
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82205ba8
	if (ctx.cr6.eq) goto loc_82205BA8;
	// std r25,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r25.u64);
loc_82205BA8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82205BAC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_8220F850) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
	// std r21,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r21.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220f87c
	if (ctx.cr6.eq) goto loc_8220F87C;
	// lwz r3,1408(r21)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + 1408);
	// bl 0x824d437c
	ctx.lr = 0x8220F87C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8220F87C:
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r21,-16(r1)
	ctx.r21.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210408) {
	REX_FUNC_PROLOGUE();
	// lwz r10,12280(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12280);
	// lwz r11,12284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12284);
	// rlwimi r10,r4,8,19,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0x1F00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE0FF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,12280(r3)
	REX_STORE_U32(ctx.r3.u32 + 12280, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,12280(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12280);
	// bne 0x8221044c
	if (!ctx.cr0.eq) goto loc_8221044C;
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
loc_8221044C:
	// stw r11,10552(r3)
	REX_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	REX_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	REX_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82211150) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,20,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0xFFF00000;
	// rlwinm r11,r11,0,12,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10540(r3)
	REX_STORE_U32(ctx.r3.u32 + 10540, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822113C0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,12,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822117D0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,10456(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 10456);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211908) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12284);
	// rlwinm r3,r11,12,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211A60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82211A68;
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// lbz r9,10864(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 10864);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r8,r8,27432
	ctx.r8.s64 = ctx.r8.s64 + 27432;
	// rlwinm r7,r5,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// lwz r31,12(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r30,1
	r30.s64 = 1;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// rlwinm r6,r6,22,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 22) & 0x1;
	// lwzx r8,r9,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwimi r29,r7,11,20,20
	r29.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0x800) | (r29.u64 & 0xFFFFFFFFFFFFF7FF);
	// or r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stw r29,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r29.u32);
	// rldicr r6,r30,63,63
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// clrldi r8,r4,32
	ctx.r8.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// srd r8,r6,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r8.u8 & 0x7F));
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rlwimi r31,r9,21,9,10
	r31.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0x600000) | (r31.u64 & 0xFFFFFFFFFF9FFFFF);
	// rlwimi r31,r9,21,4,6
	r31.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0xE000000) | (r31.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r31.u32);
	// lbz r9,10890(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 10890);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(r31.u32, 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwimi r6,r7,31,13,31
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFF80000);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwimi r6,r7,31,1,11
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FF00000) | (ctx.r6.u64 & 0xFFFFFFFF800FFFFF);
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rlwinm r7,r6,13,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 13) & 0xFFF;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwimi r10,r29,0,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82215C10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82215C18;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// rlwinm r11,r7,0,20,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xF00;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x82215d30
	if (!ctx.cr6.eq) goto loc_82215D30;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lis r29,-1
	r29.s64 = -65536;
	// lis r28,16384
	r28.s64 = 1073741824;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x82215cb0
	if (ctx.cr6.eq) goto loc_82215CB0;
	// rlwinm r10,r11,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm. r9,r11,16,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r8,r10,4,13,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x7FFF0;
	// bne 0x82215c60
	if (!ctx.cr0.eq) goto loc_82215C60;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82215C60:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r11,4,13,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x7FFF0;
	// bne 0x82215c70
	if (!ctx.cr0.eq) goto loc_82215C70;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82215C70:
	// rlwinm. r11,r7,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,20(r30)
	REX_STORE_U32(r30.u32 + 20, r29.u32);
	// bne 0x82215c94
	if (!ctx.cr0.eq) goto loc_82215C94;
	// rlwinm r11,r4,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r4,3
	ctx.r10.u64 = ctx.r4.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r28,r11
	ctx.r4.u64 = ctx.r11.u64 - r28.u64;
loc_82215C94:
	// rlwinm r11,r4,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r9,r9,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r10,r8,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8221c548
	ctx.lr = 0x82215CB0;
	sub_8221C548(ctx, base);
loc_82215CB0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82215d30
	if (ctx.cr6.eq) goto loc_82215D30;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x82215d30
	if (ctx.cr6.eq) goto loc_82215D30;
	// rlwinm r10,r11,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm. r9,r11,16,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r8,r10,4,13,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x7FFF0;
	// bne 0x82215cdc
	if (!ctx.cr0.eq) goto loc_82215CDC;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82215CDC:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r11,4,13,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x7FFF0;
	// bne 0x82215cec
	if (!ctx.cr0.eq) goto loc_82215CEC;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82215CEC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r29,24(r30)
	REX_STORE_U32(r30.u32 + 24, r29.u32);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82215d14
	if (!ctx.cr0.eq) goto loc_82215D14;
	// rlwinm r11,r31,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r31,3
	ctx.r10.u64 = r31.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r31,r28,r11
	r31.u64 = ctx.r11.u64 - r28.u64;
loc_82215D14:
	// rlwinm r11,r31,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r9,r9,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r10,r8,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8221c548
	ctx.lr = 0x82215D30;
	sub_8221C548(ctx, base);
loc_82215D30:
	// sync 
	// li r11,-256
	ctx.r11.s64 = -256;
loc_82215D38:
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
	// bne 0x82215d38
	if (!ctx.cr0.eq) goto loc_82215D38;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8221E1B0) {
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
	// lwz r11,13068(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 13068);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221e1ec
	if (ctx.cr6.eq) goto loc_8221E1EC;
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r8,r11,5,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
loc_8221E1EC:
	// lwz r10,10548(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10548);
	// lbz r11,11070(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11070);
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r6,10560(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 10560);
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r9,12284(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12284);
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// rlwinm r9,r9,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// rlwimi r11,r6,0,0,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE) | (ctx.r11.u64 & 0xFFFFFFFF00000001);
	// rlwinm. r5,r9,0,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r11,10560(r31)
	REX_STORE_U32(r31.u32 + 10560, ctx.r11.u32);
	// bne 0x8221e224
	if (!ctx.cr0.eq) goto loc_8221E224;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// b 0x8221e2c0
	goto loc_8221E2C0;
loc_8221E224:
	// rlwinm. r6,r11,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwinm r9,r10,28,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x7;
	// bne 0x8221e240
	if (!ctx.cr0.eq) goto loc_8221E240;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x8221e25c
	if (ctx.cr6.eq) goto loc_8221E25C;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// b 0x8221e24c
	goto loc_8221E24C;
loc_8221E240:
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// beq cr6,0x8221e25c
	if (ctx.cr6.eq) goto loc_8221E25C;
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
loc_8221E24C:
	// beq cr6,0x8221e25c
	if (ctx.cr6.eq) goto loc_8221E25C;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// bne cr6,0x8221e260
	if (!ctx.cr6.eq) goto loc_8221E260;
loc_8221E25C:
	// li r9,1
	ctx.r9.s64 = 1;
loc_8221E260:
	// andc r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// beq 0x8221e2c0
	if (ctx.cr0.eq) goto loc_8221E2C0;
	// rlwinm r9,r10,0,18,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3800;
	// rlwinm r8,r10,0,12,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE0000;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm. r6,r10,0,24,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// beq 0x8221e2c0
	if (ctx.cr0.eq) goto loc_8221E2C0;
	// rlwinm r9,r10,0,0,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE0000000;
	// rlwinm r8,r10,0,6,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3800000;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
loc_8221E2C0:
	// lwz r9,10560(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 10560);
	// rlwimi r9,r11,1,30,30
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwinm. r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,10560(r31)
	REX_STORE_U32(r31.u32 + 10560, ctx.r9.u32);
	// beq 0x8221e334
	if (ctx.cr0.eq) goto loc_8221E334;
	// lbz r11,11069(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11069);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8221e38c
	if (ctx.cr0.eq) goto loc_8221E38C;
	// lwz r10,13904(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13904);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221e2f8
	if (ctx.cr6.eq) goto loc_8221E2F8;
	// lwz r10,13912(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13912);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8221e38c
	if (!ctx.cr6.eq) goto loc_8221E38C;
loc_8221E2F8:
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// andi. r11,r11,251
	ctx.r11.u64 = ctx.r11.u64 & 251;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// stb r11,11069(r31)
	REX_STORE_U8(r31.u32 + 11069, ctx.r11.u8);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8221e318
	if (!ctx.cr6.gt) goto loc_8221E318;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x8221E318;
	sub_82215008(ctx, base);
loc_8221E318:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// li r10,15
	ctx.r10.s64 = 15;
	// ori r11,r11,17920
	ctx.r11.u64 = ctx.r11.u64 | 17920;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// b 0x8221e38c
	goto loc_8221E38C;
loc_8221E334:
	// clrlwi. r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221e38c
	if (ctx.cr0.eq) goto loc_8221E38C;
	// rlwinm. r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221e38c
	if (ctx.cr0.eq) goto loc_8221E38C;
	// rlwinm r11,r10,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x7;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x8221e380
	if (ctx.cr6.eq) goto loc_8221E380;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x8221e380
	if (ctx.cr6.eq) goto loc_8221E380;
	// rlwinm. r10,r9,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8221e370
	if (!ctx.cr0.eq) goto loc_8221E370;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8221e380
	if (ctx.cr6.eq) goto loc_8221E380;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// b 0x8221e37c
	goto loc_8221E37C;
loc_8221E370:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8221e380
	if (ctx.cr6.eq) goto loc_8221E380;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
loc_8221E37C:
	// bne cr6,0x8221e38c
	if (!ctx.cr6.eq) goto loc_8221E38C;
loc_8221E380:
	// lbz r11,11069(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11069);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r11,11069(r31)
	REX_STORE_U8(r31.u32 + 11069, ctx.r11.u8);
loc_8221E38C:
	// ori r3,r30,256
	ctx.r3.u64 = r30.u64 | 256;
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

DEFINE_REX_FUNC(sub_82228650) {
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
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,22160
	ctx.r3.s64 = ctx.r3.s64 + 22160;
	// bl 0x822d5870
	ctx.lr = 0x82228678;
	sub_822D5870(ctx, base);
	// li r5,1536
	ctx.r5.s64 = 1536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,22216
	ctx.r3.s64 = r31.s64 + 22216;
	// bl 0x822d5870
	ctx.lr = 0x82228688;
	sub_822D5870(ctx, base);
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// ori r30,r11,262
	r30.u64 = ctx.r11.u64 | 262;
	// lwz r11,22088(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22088);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// beq cr6,0x822286b8
	if (ctx.cr6.eq) goto loc_822286B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822285f8
	ctx.lr = 0x822286A4;
	sub_822285F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221b0d8
	ctx.lr = 0x822286B0;
	sub_8221B0D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x822286B8;
	sub_82215008(ctx, base);
loc_822286B8:
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

DEFINE_REX_FUNC(sub_82229550) {
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
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplwi cr6,r4,18
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 18, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bgt cr6,0x82229a0c
	if (ctx.cr6.gt) goto loc_82229A0C;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// rlwinm r0,r31,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,-25896
	ctx.r12.s64 = ctx.r12.s64 + -25896;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// addi r12,r12,-27220
	ctx.r12.s64 = ctx.r12.s64 + -27220;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (r31.u32) {
	case 0:
		goto loc_822295AC;
	case 1:
		goto loc_822295CC;
	case 2:
		goto loc_822295F8;
	case 3:
		goto loc_82229610;
	case 4:
		goto loc_82229674;
	case 5:
		goto loc_822296A4;
	case 6:
		goto loc_822296E0;
	case 7:
		goto loc_82229780;
	case 8:
		goto loc_82229804;
	case 9:
		goto loc_82229864;
	case 10:
		goto loc_822298C4;
	case 11:
		goto loc_822298F8;
	case 12:
		goto loc_8222993C;
	case 13:
		goto loc_82229968;
	case 14:
		goto loc_82229990;
	case 15:
		goto loc_822299B8;
	case 16:
		goto loc_822299EC;
	case 17:
		goto loc_82229770;
	case 18:
		goto loc_82229780;
	case 19:
		goto loc_822295AC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_822295AC:
	// lwz r11,21984(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21984);
	// lfs f0,22000(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 22000);
	ctx.f0.f64 = double(temp.f32);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82229a10
	goto loc_82229A10;
loc_822295CC:
	// lwz r11,21984(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21984);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82229a0c
	if (ctx.cr6.eq) goto loc_82229A0C;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f0,21996(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 21996);
	ctx.f0.f64 = double(temp.f32);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// b 0x82229a10
	goto loc_82229A10;
loc_822295F8:
	// lwz r11,16968(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16968);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
loc_82229604:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// b 0x82229a10
	goto loc_82229A10;
loc_82229610:
	// lwz r11,22024(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22024);
	// lwz r9,21984(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 21984);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
loc_8222963C:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f12,1996(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f12.f64 = double(temp.f32);
loc_82229644:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2344(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2344);
	ctx.f0.f64 = double(temp.f32);
loc_8222964C:
	// fmuls f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82229660
	if (!ctx.cr6.lt) goto loc_82229660;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x8222966c
	goto loc_8222966C;
loc_82229660:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8222966c
	if (ctx.cr6.gt) goto loc_8222966C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8222966C:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// b 0x82229a10
	goto loc_82229A10;
loc_82229674:
	// lwz r11,21984(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21984);
	// lwz r9,22028(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 22028);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
loc_82229698:
	// frsp f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// b 0x8222963c
	goto loc_8222963C;
loc_822296A4:
	// lwz r11,21984(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21984);
	// lwz r9,22028(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 22028);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r7,22024(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 22024);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r6,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// b 0x82229698
	goto loc_82229698;
loc_822296E0:
	// lwz r11,22032(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22032);
	// lwz r8,11024(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 11024);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// clrlwi r10,r7,29
	ctx.r10.u64 = ctx.r7.u32 & 0x7;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwbrx r31,r7,r8
	r31.u64 = __builtin_bswap32(REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32));
	// cmpldi cr6,r31,0
	ctx.cr6.compare<uint64_t>(r31.u64, 0, ctx.xer);
	// lwbrx r30,r10,r8
	r30.u64 = __builtin_bswap32(REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32));
	// lwbrx r10,r9,r8
	ctx.r10.u64 = __builtin_bswap32(REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32));
	// beq cr6,0x82229a0c
	if (ctx.cr6.eq) goto loc_82229A0C;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// stw r11,22032(r3)
	REX_STORE_U32(ctx.r3.u32 + 22032, ctx.r11.u32);
	// beq cr6,0x82229a0c
	if (ctx.cr6.eq) goto loc_82229A0C;
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(r30.u64, 0, ctx.xer);
	// beq cr6,0x82229a0c
	if (ctx.cr6.eq) goto loc_82229A0C;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpld cr6,r10,r30
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, r30.u64, ctx.xer);
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bgt cr6,0x82229754
	if (ctx.cr6.gt) goto loc_82229754;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82229754:
	// cmpld cr6,r31,r10
	ctx.cr6.compare<uint64_t>(r31.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x82229760
	if (ctx.cr6.gt) goto loc_82229760;
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
loc_82229760:
	// subf r3,r10,r31
	ctx.r3.u64 = r31.u64 - ctx.r10.u64;
	// bl 0x822d7620
	ctx.lr = 0x82229768;
	sub_822D7620(ctx, base);
	// subf r3,r30,r31
	ctx.r3.u64 = r31.u64 - r30.u64;
	// b 0x82229840
	goto loc_82229840;
loc_82229770:
	// lwz r11,23760(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 23760);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x82229604
	goto loc_82229604;
loc_82229780:
	// bl 0x82228ff0
	ctx.lr = 0x82229784;
	sub_82228FF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82229a0c
	if (ctx.cr0.eq) goto loc_82229A0C;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,-7164
	ctx.r7.s64 = ctx.r11.s64 + -7164;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(r31.s32, 7, ctx.xer);
	// lwz r9,-7164(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -7164);
	// ld r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 4);
	// ld r10,484(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + 484);
	// ld r8,12(r7)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r7.u32 + 12);
	// ld r7,492(r7)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r7.u32 + 492);
	// subf r31,r11,r10
	r31.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// subf r3,r8,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r8.u64;
	// bne cr6,0x822297cc
	if (!ctx.cr6.eq) goto loc_822297CC;
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
loc_822297CC:
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x82229a0c
	if (ctx.cr6.eq) goto loc_82229A0C;
	// bl 0x822d7620
	ctx.lr = 0x822297D8;
	sub_822D7620(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x822d7620
	ctx.lr = 0x822297E4;
	sub_822D7620(ctx, base);
	// fdiv f11,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = f31.f64 / ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f12.f64 = double(temp.f32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// b 0x82229644
	goto loc_82229644;
loc_82229804:
	// bl 0x82228ff0
	ctx.lr = 0x82229808;
	sub_82228FF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82229a0c
	if (ctx.cr0.eq) goto loc_82229A0C;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r11,r11,-7164
	ctx.r11.s64 = ctx.r11.s64 + -7164;
	// ld r10,124(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 124);
	// ld r9,604(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 604);
	// subf r31,r10,r9
	r31.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpldi cr6,r31,0
	ctx.cr6.compare<uint64_t>(r31.u64, 0, ctx.xer);
	// beq cr6,0x82229a0c
	if (ctx.cr6.eq) goto loc_82229A0C;
	// ld r10,132(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 132);
	// ld r11,612(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 612);
loc_82229834:
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
	// bl 0x822d7620
	ctx.lr = 0x8222983C;
	sub_822D7620(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82229840:
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x822d7620
	ctx.lr = 0x82229848;
	sub_822D7620(ctx, base);
	// fdiv f13,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64 / ctx.f1.f64;
loc_8222984C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2344(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2344);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8222964c
	goto loc_8222964C;
loc_82229864:
	// bl 0x82228ff0
	ctx.lr = 0x82229868;
	sub_82228FF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82229a0c
	if (ctx.cr0.eq) goto loc_82229A0C;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r31,r11,-7164
	r31.s64 = ctx.r11.s64 + -7164;
	// ld r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 124);
	// ld r10,604(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 604);
	// subf r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x82229a0c
	if (ctx.cr6.eq) goto loc_82229A0C;
	// bl 0x822d7620
	ctx.lr = 0x82229890;
	sub_822D7620(ctx, base);
	// ld r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 132);
	// ld r10,612(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 612);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// subf r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	// bl 0x822d7620
	ctx.lr = 0x822298A4;
	sub_822D7620(ctx, base);
	// ld r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 140);
	// ld r10,620(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 620);
	// fsub f30,f31,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = f31.f64 - ctx.f1.f64;
	// subf r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	// bl 0x822d7620
	ctx.lr = 0x822298B8;
	sub_822D7620(ctx, base);
	// fsub f13,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f30.f64 - ctx.f1.f64;
	// fdiv f13,f13,f31
	ctx.f13.f64 = ctx.f13.f64 / f31.f64;
	// b 0x8222984c
	goto loc_8222984C;
loc_822298C4:
	// bl 0x82228ff0
	ctx.lr = 0x822298C8;
	sub_82228FF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82229a0c
	if (ctx.cr0.eq) goto loc_82229A0C;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r11,r11,-7164
	ctx.r11.s64 = ctx.r11.s64 + -7164;
	// ld r10,124(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 124);
	// ld r9,604(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 604);
	// subf r31,r10,r9
	r31.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpldi cr6,r31,0
	ctx.cr6.compare<uint64_t>(r31.u64, 0, ctx.xer);
	// beq cr6,0x82229a0c
	if (ctx.cr6.eq) goto loc_82229A0C;
	// ld r10,140(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 140);
	// ld r11,620(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 620);
	// b 0x82229834
	goto loc_82229834;
loc_822298F8:
	// bl 0x82228ff0
	ctx.lr = 0x822298FC;
	sub_82228FF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82229a0c
	if (ctx.cr0.eq) goto loc_82229A0C;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r8,r11,-7164
	ctx.r8.s64 = ctx.r11.s64 + -7164;
	// ld r11,444(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 444);
	// ld r10,924(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 924);
	// ld r9,436(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 436);
	// subf r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	// ld r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 4);
	// ld r10,484(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 484);
	// ld r8,916(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 916);
	// subf r9,r9,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r9.u64;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_82229930:
	// subf r4,r11,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_82229934:
	// bl 0x82228870
	ctx.lr = 0x82229938;
	sub_82228870(ctx, base);
	// b 0x82229a10
	goto loc_82229A10;
loc_8222993C:
	// bl 0x82228ff0
	ctx.lr = 0x82229940;
	sub_82228FF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82229a0c
	if (ctx.cr0.eq) goto loc_82229A0C;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r8,r11,-7164
	ctx.r8.s64 = ctx.r11.s64 + -7164;
	// ld r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 4);
	// ld r10,484(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 484);
	// ld r9,452(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 452);
	// ld r8,932(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 932);
loc_82229960:
	// subf r3,r9,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r9.u64;
	// b 0x82229930
	goto loc_82229930;
loc_82229968:
	// bl 0x82228ff0
	ctx.lr = 0x8222996C;
	sub_82228FF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82229a0c
	if (ctx.cr0.eq) goto loc_82229A0C;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r8,r11,-7164
	ctx.r8.s64 = ctx.r11.s64 + -7164;
	// ld r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 4);
	// ld r10,484(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 484);
	// ld r9,236(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 236);
	// ld r8,716(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 716);
	// b 0x82229960
	goto loc_82229960;
loc_82229990:
	// bl 0x82228ff0
	ctx.lr = 0x82229994;
	sub_82228FF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82229a0c
	if (ctx.cr0.eq) goto loc_82229A0C;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r8,r11,-7164
	ctx.r8.s64 = ctx.r11.s64 + -7164;
	// ld r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 4);
	// ld r10,484(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 484);
	// ld r9,92(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 92);
	// ld r8,572(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 572);
	// b 0x82229960
	goto loc_82229960;
loc_822299B8:
	// bl 0x82228ff0
	ctx.lr = 0x822299BC;
	sub_82228FF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82229a0c
	if (ctx.cr0.eq) goto loc_82229A0C;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r8,r11,-7164
	ctx.r8.s64 = ctx.r11.s64 + -7164;
	// ld r11,460(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 460);
	// ld r10,940(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 940);
loc_822299D4:
	// ld r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// ld r8,484(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 484);
	// rldicr r3,r11,1,62
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// subf r4,r9,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r9.u64;
	// b 0x82229934
	goto loc_82229934;
loc_822299EC:
	// bl 0x82228ff0
	ctx.lr = 0x822299F0;
	sub_82228FF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82229a0c
	if (ctx.cr0.eq) goto loc_82229A0C;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r8,r11,-7164
	ctx.r8.s64 = ctx.r11.s64 + -7164;
	// ld r11,468(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 468);
	// ld r10,948(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 948);
	// b 0x822299d4
	goto loc_822299D4;
loc_82229A0C:
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
loc_82229A10:
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

DEFINE_REX_FUNC(sub_8223FBD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8223FBE0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223fc10
	if (!ctx.cr6.eq) goto loc_8223FC10;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_8223FC10:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223fc4c
	if (ctx.cr6.eq) goto loc_8223FC4C;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,212(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// rlwinm. r10,r10,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223fc4c
	if (ctx.cr0.eq) goto loc_8223FC4C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824d48ec
	ctx.lr = 0x8223FC4C;
	__imp__XamVoiceSubmitPacket(ctx, base);
loc_8223FC4C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223fc64
	if (ctx.cr6.eq) goto loc_8223FC64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8223fc78
	if (!ctx.cr6.lt) goto loc_8223FC78;
loc_8223FC64:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_8223FC78:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,116
	ctx.r11.s64 = r30.s64 + 116;
	// stw r10,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// lwz r10,120(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223fc98
	if (ctx.cr6.eq) goto loc_8223FC98;
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// b 0x8223fc9c
	goto loc_8223FC9C;
loc_8223FC98:
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
loc_8223FC9C:
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82245A00) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82245a30
	if (ctx.cr6.eq) goto loc_82245A30;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82245a30
	if (!ctx.cr6.eq) goto loc_82245A30;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r10,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// blr 
	return;
loc_82245A30:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82245E40) {
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
	// beq cr6,0x82245e60
	if (ctx.cr6.eq) goto loc_82245E60;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_82245E60:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82245ea4
	if (ctx.cr6.eq) goto loc_82245EA4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82256918
	ctx.lr = 0x82245E78;
	sub_82256918(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82245ea4
	if (ctx.cr6.eq) goto loc_82245EA4;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r4,23544(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23544);
	// bl 0x82255c88
	ctx.lr = 0x82245E90;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82245ea4
	if (ctx.cr0.eq) goto loc_82245EA4;
	// lwz r11,240(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,240(r3)
	REX_STORE_U32(ctx.r3.u32 + 240, ctx.r11.u32);
loc_82245EA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82246AB8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r3,23832(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 23832);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82246B58) {
	REX_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x82270480
	sub_82270480(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82246BA0) {
	REX_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x82261110
	sub_82261110(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82246BD0) {
	REX_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x82263180
	sub_82263180(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82246C18) {
	REX_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x8226fc68
	sub_8226FC68(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82246C90) {
	REX_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x8226c618
	sub_8226C618(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82247078) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82247080;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x8225da70
	ctx.lr = 0x8224709C;
	sub_8225DA70(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x822470A8;
	sub_8227C2B8(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82247798) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82247818
	if (ctx.cr6.eq) goto loc_82247818;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82247818
	if (!ctx.cr6.eq) goto loc_82247818;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r10,136(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 136);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82247810
	if (ctx.cr6.eq) goto loc_82247810;
	// stw r11,136(r4)
	REX_STORE_U32(ctx.r4.u32 + 136, ctx.r11.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822477d4
	if (!ctx.cr6.eq) goto loc_822477D4;
	// lwz r10,32(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x822477e4
	goto loc_822477E4;
loc_822477D4:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82247804
	if (!ctx.cr6.eq) goto loc_82247804;
	// lwz r10,32(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
loc_822477E4:
	// addi r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 + 20;
	// lwz r11,36(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// stw r10,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82247804
	if (ctx.cr6.eq) goto loc_82247804;
	// lwz r10,132(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,132(r11)
	REX_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
loc_82247804:
	// lwz r11,132(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 132);
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// stw r11,132(r4)
	REX_STORE_U32(ctx.r4.u32 + 132, ctx.r11.u32);
loc_82247810:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82247818:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82248CA8) {
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
	ctx.lr = 0x82248CC0;
	sub_82246220(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82248d04
	if (ctx.cr0.lt) goto loc_82248D04;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82248cfc
	if (ctx.cr6.eq) goto loc_82248CFC;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82248cfc
	if (!ctx.cr6.eq) goto loc_82248CFC;
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x82248d04
	goto loc_82248D04;
loc_82248CFC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82248D04:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224A8E8) {
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
	// beq cr6,0x8224a904
	if (ctx.cr6.eq) goto loc_8224A904;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82246dd0
	ctx.lr = 0x8224A904;
	sub_82246DD0(ctx, base);
loc_8224A904:
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

DEFINE_REX_FUNC(sub_8224B498) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8224B4A0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224B4C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8224b510
	if (ctx.cr6.lt) goto loc_8224B510;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r10,r10,48
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(48));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r10,-44(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -44);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8224b510
	if (ctx.cr6.gt) goto loc_8224B510;
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mulli r11,r11,48
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(48));
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82249e80
	ctx.lr = 0x8224B50C;
	sub_82249E80(ctx, base);
	// b 0x8224b518
	goto loc_8224B518;
loc_8224B510:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
loc_8224B518:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8224D660) {
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
	// lis r8,-32163
	ctx.r8.s64 = -2107834368;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,26620
	r31.s64 = ctx.r11.s64 + 26620;
	// lwz r11,26668(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 26668);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8224d6f4
	if (!ctx.cr0.eq) goto loc_8224D6F4;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r10,-3828
	ctx.r9.s64 = ctx.r10.s64 + -3828;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,26668(r8)
	REX_STORE_U32(ctx.r8.u32 + 26668, ctx.r11.u32);
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// li r11,168
	ctx.r11.s64 = 168;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x8224d5f0
	ctx.lr = 0x8224D6C8;
	sub_8224D5F0(ctx, base);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-27120
	ctx.r9.s64 = ctx.r9.s64 + -27120;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// addi r11,r31,40
	ctx.r11.s64 = r31.s64 + 40;
	// std r8,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r8.u64);
loc_8224D6F4:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82250AD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82250AD8;
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
	// addi r31,r11,-7888
	r31.s64 = ctx.r11.s64 + -7888;
	// lwz r11,28572(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 28572);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82250d38
	if (!ctx.cr0.eq) goto loc_82250D38;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r10,-4096
	ctx.r9.s64 = ctx.r10.s64 + -4096;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r11,28572(r8)
	REX_STORE_U32(ctx.r8.u32 + 28572, ctx.r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r11,8
	ctx.r11.s64 = 8;
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
	ctx.lr = 0x82250B34;
	sub_8224DC30(ctx, base);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// addi r9,r9,-29784
	ctx.r9.s64 = ctx.r9.s64 + -29784;
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
	// addi r9,r11,-2444
	ctx.r9.s64 = ctx.r11.s64 + -2444;
	// std r30,40(r31)
	REX_STORE_U64(r31.u32 + 40, r30.u64);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// li r10,3
	ctx.r10.s64 = 3;
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
	// bl 0x8225a078
	ctx.lr = 0x82250B94;
	sub_8225A078(ctx, base);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// addi r9,r9,-29560
	ctx.r9.s64 = ctx.r9.s64 + -29560;
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
	// addi r9,r11,-2464
	ctx.r9.s64 = ctx.r11.s64 + -2464;
	// std r30,88(r31)
	REX_STORE_U64(r31.u32 + 88, r30.u64);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r10,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,3
	ctx.r10.s64 = 3;
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
	// bl 0x8225a078
	ctx.lr = 0x82250BF4;
	sub_8225A078(ctx, base);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r30,124(r31)
	REX_STORE_U32(r31.u32 + 124, r30.u32);
	// addi r10,r10,-29552
	ctx.r10.s64 = ctx.r10.s64 + -29552;
	// stw r3,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// stw r30,128(r31)
	REX_STORE_U32(r31.u32 + 128, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r10,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r10.u32);
	// addi r9,r9,-2488
	ctx.r9.s64 = ctx.r9.s64 + -2488;
	// std r30,136(r31)
	REX_STORE_U64(r31.u32 + 136, r30.u64);
	// addi r11,r31,136
	ctx.r11.s64 = r31.s64 + 136;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r9,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r9.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r10,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r30,156(r31)
	REX_STORE_U32(r31.u32 + 156, r30.u32);
	// stw r11,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r11.u32);
	// stw r10,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r10.u32);
	// bl 0x8225a078
	ctx.lr = 0x82250C50;
	sub_8225A078(ctx, base);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r30,172(r31)
	REX_STORE_U32(r31.u32 + 172, r30.u32);
	// addi r9,r9,-29544
	ctx.r9.s64 = ctx.r9.s64 + -29544;
	// stw r30,176(r31)
	REX_STORE_U32(r31.u32 + 176, r30.u32);
	// stw r3,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r9.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// std r30,184(r31)
	REX_STORE_U64(r31.u32 + 184, r30.u64);
	// stw r10,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r10.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r30,204(r31)
	REX_STORE_U32(r31.u32 + 204, r30.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// addi r8,r8,-2516
	ctx.r8.s64 = ctx.r8.s64 + -2516;
	// stw r11,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r11.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r9.u32);
	// stw r8,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r8.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r10,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r10.u32);
	// addi r11,r31,184
	ctx.r11.s64 = r31.s64 + 184;
	// bl 0x8225a078
	ctx.lr = 0x82250CB0;
	sub_8225A078(ctx, base);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,220(r31)
	REX_STORE_U32(r31.u32 + 220, r30.u32);
	// addi r9,r9,-29536
	ctx.r9.s64 = ctx.r9.s64 + -29536;
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
	// addi r9,r11,-2536
	ctx.r9.s64 = ctx.r11.s64 + -2536;
	// std r30,232(r31)
	REX_STORE_U64(r31.u32 + 232, r30.u64);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r9,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r9.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r10,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r10.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r11.u32);
	// stw r30,252(r31)
	REX_STORE_U32(r31.u32 + 252, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r9,248(r31)
	REX_STORE_U32(r31.u32 + 248, ctx.r9.u32);
	// addi r11,r31,232
	ctx.r11.s64 = r31.s64 + 232;
	// stw r10,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r10.u32);
	// bl 0x8224dca0
	ctx.lr = 0x82250D10;
	sub_8224DCA0(ctx, base);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r30,268(r31)
	REX_STORE_U32(r31.u32 + 268, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// addi r10,r10,-29528
	ctx.r10.s64 = ctx.r10.s64 + -29528;
	// stw r3,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r3.u32);
	// stw r30,272(r31)
	REX_STORE_U32(r31.u32 + 272, r30.u32);
	// addi r11,r31,280
	ctx.r11.s64 = r31.s64 + 280;
	// stw r10,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r10.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// std r30,280(r31)
	REX_STORE_U64(r31.u32 + 280, r30.u64);
loc_82250D38:
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82257C40) {
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
	// stw r3,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82257cc4
	if (!ctx.cr6.eq) goto loc_82257CC4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8225dcd8
	ctx.lr = 0x82257C6C;
	sub_8225DCD8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224da00
	ctx.lr = 0x82257C78;
	sub_8224DA00(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82257C7C:
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
loc_82257C90:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8225dcd8
	ctx.lr = 0x82257C9C;
	sub_8225DCD8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224da00
	ctx.lr = 0x82257CA8;
	sub_8224DA00(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82257cd4
	if (!ctx.cr6.eq) goto loc_82257CD4;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82256918
	ctx.lr = 0x82257CC0;
	sub_82256918(ctx, base);
	// lwz r31,164(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
loc_82257CC4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82257c90
	if (!ctx.cr6.eq) goto loc_82257C90;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82257c7c
	goto loc_82257C7C;
loc_82257CD4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82257c7c
	goto loc_82257C7C;
}

DEFINE_REX_FUNC(sub_8225BA10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8225BA18;
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
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8225ba80
	if (!ctx.cr6.eq) goto loc_8225BA80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225ba44
	if (!ctx.cr6.eq) goto loc_8225BA44;
	// li r30,1
	r30.s64 = 1;
	// b 0x8225ba5c
	goto loc_8225BA5C;
loc_8225BA44:
	// rlwinm. r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble 0x8225ba70
	if (!ctx.cr0.gt) goto loc_8225BA70;
	// lis r11,2730
	ctx.r11.s64 = 178913280;
	// ori r11,r11,43690
	ctx.r11.u64 = ctx.r11.u64 | 43690;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8225ba70
	if (!ctx.cr6.lt) goto loc_8225BA70;
loc_8225BA5C:
	// mulli r4,r30,12
	ctx.r4.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(12));
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82255b88
	ctx.lr = 0x8225BA68;
	sub_82255B88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225ba78
	if (!ctx.cr0.eq) goto loc_8225BA78;
loc_8225BA70:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8225babc
	goto loc_8225BABC;
loc_8225BA78:
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_8225BA80:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225baac
	if (ctx.cr0.eq) goto loc_8225BAAC;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8225BAAC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_8225BABC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8225DE80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8225DE88;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x8225ddf0
	ctx.lr = 0x8225DEA0;
	sub_8225DDF0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225de30
	ctx.lr = 0x8225DEB0;
	sub_8225DE30(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8225E430) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8225E438;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,2014
	ctx.r4.s64 = 2014;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x8225da70
	ctx.lr = 0x8225E454;
	sub_8225DA70(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x8225E460;
	sub_8227C2B8(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8225F068) {
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
	// bl 0x8225e018
	ctx.lr = 0x8225F088;
	sub_8225E018(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224da00
	ctx.lr = 0x8225F094;
	sub_8224DA00(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
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

DEFINE_REX_FUNC(sub_82260D70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82260D78;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// bl 0x82256918
	ctx.lr = 0x82260DA4;
	sub_82256918(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82260dc0
	if (!ctx.cr6.eq) goto loc_82260DC0;
	// lwz r3,156(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x822d7b58
	ctx.lr = 0x82260DB8;
	sub_822D7B58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82260dfc
	goto loc_82260DFC;
loc_82260DC0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822469c0
	ctx.lr = 0x82260DC8;
	sub_822469C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// bl 0x8225df88
	ctx.lr = 0x82260DE4;
	sub_8225DF88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8224db90
	ctx.lr = 0x82260DF0;
	sub_8224DB90(ctx, base);
	// lwz r3,156(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x822d7b58
	ctx.lr = 0x82260DF8;
	sub_822D7B58(ctx, base);
	// lwz r3,148(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
loc_82260DFC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822651E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822651E8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r29,r3,84
	r29.s64 = ctx.r3.s64 + 84;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r31,88
	r30.s64 = r31.s64 + 88;
	// stw r28,84(r31)
	REX_STORE_U32(r31.u32 + 84, r28.u32);
	// stw r28,88(r31)
	REX_STORE_U32(r31.u32 + 88, r28.u32);
	// bl 0x822586e0
	ctx.lr = 0x82265214;
	sub_822586E0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82265304
	if (ctx.cr6.eq) goto loc_82265304;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,628
	ctx.r4.s64 = ctx.r11.s64 + 628;
	// bl 0x82256ea0
	ctx.lr = 0x82265230;
	sub_82256EA0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,-3668
	ctx.r4.s64 = ctx.r11.s64 + -3668;
	// bl 0x82256ea0
	ctx.lr = 0x82265244;
	sub_82256EA0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,604
	ctx.r4.s64 = ctx.r11.s64 + 604;
	// bl 0x82256ea0
	ctx.lr = 0x82265258;
	sub_82256EA0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r31,20
	ctx.r5.s64 = r31.s64 + 20;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,580
	ctx.r4.s64 = ctx.r11.s64 + 580;
	// bl 0x82256ea0
	ctx.lr = 0x8226526C;
	sub_82256EA0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r31,36
	ctx.r5.s64 = r31.s64 + 36;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,560
	ctx.r4.s64 = ctx.r11.s64 + 560;
	// bl 0x82256ea0
	ctx.lr = 0x82265280;
	sub_82256EA0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r31,52
	ctx.r5.s64 = r31.s64 + 52;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82256ea0
	ctx.lr = 0x82265294;
	sub_82256EA0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82256440
	ctx.lr = 0x8226529C;
	sub_82256440(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x822652c4
	if (!ctx.cr6.eq) goto loc_822652C4;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r4,r11,13,26,27
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x30) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwimi r4,r11,13,18,18
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x2000) | (ctx.r4.u64 & 0xFFFFFFFFFFFFDFFF);
	// b 0x822652d0
	goto loc_822652D0;
loc_822652C4:
	// li r11,3
	ctx.r11.s64 = 3;
	// rlwimi r4,r11,4,26,27
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x30) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwimi r4,r11,4,18,18
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x2000) | (ctx.r4.u64 & 0xFFFFFFFFFFFFDFFF);
loc_822652D0:
	// bl 0x822563e8
	ctx.lr = 0x822652D4;
	sub_822563E8(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x822652f8
	if (ctx.cr6.eq) goto loc_822652F8;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8225ee88
	ctx.lr = 0x822652EC;
	sub_8225EE88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// bne 0x822652fc
	if (!ctx.cr0.eq) goto loc_822652FC;
loc_822652F8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_822652FC:
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x8225e9f8
	ctx.lr = 0x82265304;
	sub_8225E9F8(ctx, base);
loc_82265304:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8226C088) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8226C090;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226c118
	if (ctx.cr6.eq) goto loc_8226C118;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x8226c10c
	if (ctx.cr6.eq) goto loc_8226C10C;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x8226c100
	if (ctx.cr6.eq) goto loc_8226C100;
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// beq cr6,0x8226c0d8
	if (ctx.cr6.eq) goto loc_8226C0D8;
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// bne cr6,0x8226c1a0
	if (!ctx.cr6.eq) goto loc_8226C1A0;
	// bl 0x82265ad8
	ctx.lr = 0x8226C0CC;
	sub_82265AD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8226c1a0
	if (!ctx.cr0.lt) goto loc_8226C1A0;
	// b 0x8226c1b8
	goto loc_8226C1B8;
loc_8226C0D8:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8226c1a0
	if (!ctx.cr6.eq) goto loc_8226C1A0;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8226c1a0
	if (!ctx.cr6.eq) goto loc_8226C1A0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8225d438
	ctx.lr = 0x8226C100;
	sub_8225D438(ctx, base);
loc_8226C100:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,12(r31)
	REX_STORE_U8(r31.u32 + 12, ctx.r11.u8);
	// b 0x8226c1a0
	goto loc_8226C1A0;
loc_8226C10C:
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8225d438
	ctx.lr = 0x8226C114;
	sub_8225D438(ctx, base);
	// b 0x8226c1a0
	goto loc_8226C1A0;
loc_8226C118:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82265ad8
	ctx.lr = 0x8226C120;
	sub_82265AD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8226c1b8
	if (ctx.cr0.lt) goto loc_8226C1B8;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8226c1a8
	if (!ctx.cr6.eq) goto loc_8226C1A8;
	// lwz r29,16(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r28,0(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82257610
	ctx.lr = 0x8226C150;
	sub_82257610(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82265c80
	ctx.lr = 0x8226C15C;
	sub_82265C80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8226c190
	if (ctx.cr0.lt) goto loc_8226C190;
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8226c190
	if (ctx.cr6.eq) goto loc_8226C190;
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// addi r6,r31,152
	ctx.r6.s64 = r31.s64 + 152;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r5,r11,10
	ctx.r5.u64 = ctx.r11.u64 | 10;
	// bl 0x822893d8
	ctx.lr = 0x8226C184;
	sub_822893D8(ctx, base);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82288e08
	ctx.lr = 0x8226C190;
	sub_82288E08(ctx, base);
loc_8226C190:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82257670
	ctx.lr = 0x8226C1A0;
	sub_82257670(ctx, base);
loc_8226C1A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226c1b8
	goto loc_8226C1B8;
loc_8226C1A8:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8226bfd0
	ctx.lr = 0x8226C1B8;
	sub_8226BFD0(ctx, base);
loc_8226C1B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82270228) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82270230;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82270310
	if (ctx.cr6.eq) goto loc_82270310;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x822702f8
	if (ctx.cr6.eq) goto loc_822702F8;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x82270290
	if (ctx.cr6.eq) goto loc_82270290;
	// cmplwi cr6,r11,2012
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2012, ctx.xer);
	// beq cr6,0x822702dc
	if (ctx.cr6.eq) goto loc_822702DC;
	// cmplwi cr6,r11,2015
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2015, ctx.xer);
	// beq cr6,0x822702dc
	if (ctx.cr6.eq) goto loc_822702DC;
	// cmplwi cr6,r11,2017
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2017, ctx.xer);
	// beq cr6,0x822702dc
	if (ctx.cr6.eq) goto loc_822702DC;
	// cmplwi cr6,r11,2022
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2022, ctx.xer);
	// bne cr6,0x8227033c
	if (!ctx.cr6.eq) goto loc_8227033C;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x822702dc
	if (ctx.cr6.eq) goto loc_822702DC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// b 0x822702d8
	goto loc_822702D8;
loc_82270290:
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822702cc
	if (!ctx.cr6.eq) goto loc_822702CC;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227033c
	if (ctx.cr6.eq) goto loc_8227033C;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,23608(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23608);
	// bl 0x82246920
	ctx.lr = 0x822702BC;
	sub_82246920(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8227033c
	if (ctx.cr0.eq) goto loc_8227033C;
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// b 0x822702e8
	goto loc_822702E8;
loc_822702CC:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x822702dc
	if (ctx.cr6.eq) goto loc_822702DC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
loc_822702D8:
	// bne cr6,0x8227033c
	if (!ctx.cr6.eq) goto loc_8227033C;
loc_822702DC:
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227033c
	if (ctx.cr6.eq) goto loc_8227033C;
loc_822702E8:
	// bl 0x822469c0
	ctx.lr = 0x822702EC;
	sub_822469C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8224da00
	ctx.lr = 0x822702F4;
	sub_8224DA00(ctx, base);
	// b 0x8227033c
	goto loc_8227033C;
loc_822702F8:
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x82270300;
	sub_822469C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8226da90
	ctx.lr = 0x8227030C;
	sub_8226DA90(ctx, base);
	// b 0x8227033c
	goto loc_8227033C;
loc_82270310:
	// lwz r31,16(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8227033c
	if (!ctx.cr0.eq) goto loc_8227033C;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x82270328;
	sub_822469C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8226da90
	ctx.lr = 0x82270334;
	sub_8226DA90(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_8227033C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822774E0) {
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
	ctx.lr = 0x822774E8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r3,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8227750c
	if (!ctx.cr6.eq) goto loc_8227750C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x822776c0
	goto loc_822776C0;
loc_8227750C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82277520;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822776b8
	if (ctx.cr0.eq) goto loc_822776B8;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227753C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x822776b8
	if (ctx.cr0.eq) goto loc_822776B8;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822776b8
	if (ctx.cr0.eq) goto loc_822776B8;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82277568;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822776c0
	if (ctx.cr0.lt) goto loc_822776C0;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r26,r11,29924
	r26.s64 = ctx.r11.s64 + 29924;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824d438c
	ctx.lr = 0x82277580;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r30,-32163
	r30.s64 = -2107834368;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r31,29956(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 29956);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822555b8
	ctx.lr = 0x82277594;
	sub_822555B8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822775a4
	if (!ctx.cr6.eq) goto loc_822775A4;
	// li r31,0
	r31.s64 = 0;
	// b 0x822775b0
	goto loc_822775B0;
loc_822775A4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_822775B0:
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82277614
	if (ctx.cr6.eq) goto loc_82277614;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822775D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,29956(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 29956);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822555b8
	ctx.lr = 0x822775E0;
	sub_822555B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822775fc
	if (ctx.cr6.eq) goto loc_822775FC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82276d08
	ctx.lr = 0x822775F4;
	sub_82276D08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82277614
	if (!ctx.cr0.eq) goto loc_82277614;
loc_822775FC:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
loc_82277604:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824d437c
	ctx.lr = 0x8227760C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x822776c0
	goto loc_822776C0;
loc_82277614:
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// lwz r3,29956(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 29956);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822558b0
	ctx.lr = 0x82277624;
	sub_822558B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82277668
	if (!ctx.cr0.eq) goto loc_82277668;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8227765c
	if (ctx.cr6.eq) goto loc_8227765C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82277648;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,29956(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 29956);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822558b0
	ctx.lr = 0x8227765C;
	sub_822558B0(ctx, base);
loc_8227765C:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x82277604
	goto loc_82277604;
loc_82277668:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227767C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824d437c
	ctx.lr = 0x82277684;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82277694
	if (ctx.cr6.eq) goto loc_82277694;
	// stw r31,0(r25)
	REX_STORE_U32(r25.u32 + 0, r31.u32);
	// b 0x822776b0
	goto loc_822776B0;
loc_82277694:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822776b0
	if (ctx.cr6.eq) goto loc_822776B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822776B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822776B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822776c0
	goto loc_822776C0;
loc_822776B8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_822776C0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8227C7C0) {
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
	ctx.lr = 0x8227C7C8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x822462c8
	ctx.lr = 0x8227C7EC;
	sub_822462C8(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8227c814
	if (ctx.cr6.eq) goto loc_8227C814;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r30,-1
	ctx.r5.s64 = r30.s64 + -1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8227c7c0
	ctx.lr = 0x8227C80C;
	sub_8227C7C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8227c8bc
	if (ctx.cr0.lt) goto loc_8227C8BC;
loc_8227C814:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82246418
	ctx.lr = 0x8227C820;
	sub_82246418(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8227c8b8
	if (ctx.cr0.eq) goto loc_8227C8B8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r22,0
	r22.s64 = 0;
	// mr r28,r22
	r28.u64 = r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227c8b8
	if (ctx.cr6.eq) goto loc_8227C8B8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r23,r30,8,0,23
	r23.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// addi r25,r11,1436
	r25.s64 = ctx.r11.s64 + 1436;
loc_8227C848:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r30,8(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,16(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 16);
	// bl 0x822703f8
	ctx.lr = 0x8227C85C;
	sub_822703F8(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r4,r23,r28
	ctx.r4.u64 = r23.u64 + r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bctrl 
	ctx.lr = 0x8227C878;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8227c8c4
	if (ctx.cr0.lt) goto loc_8227C8C4;
	// blt cr6,0x8227c8a4
	if (ctx.cr6.lt) goto loc_8227C8A4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8227c8a4
	if (!ctx.cr6.lt) goto loc_8227C8A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, r22.u16);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
loc_8227C8A4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,48
	r29.s64 = r29.s64 + 48;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8227c848
	if (ctx.cr6.lt) goto loc_8227C848;
loc_8227C8B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227C8BC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
loc_8227C8C4:
	// blt cr6,0x8227c8bc
	if (ctx.cr6.lt) goto loc_8227C8BC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8227c8bc
	if (!ctx.cr6.lt) goto loc_8227C8BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, r22.u16);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x8227c8bc
	goto loc_8227C8BC;
}

DEFINE_REX_FUNC(sub_8227F7E8) {
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
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
loc_8227F7F8:
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
	// bne 0x8227f7f8
	if (!ctx.cr0.eq) goto loc_8227F7F8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8227f840
	if (!ctx.cr6.eq) goto loc_8227F840;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227f838
	if (ctx.cr6.eq) goto loc_8227F838;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,1628
	ctx.r11.s64 = ctx.r11.s64 + 1628;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82255b70
	ctx.lr = 0x8227F838;
	sub_82255B70(ctx, base);
loc_8227F838:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8227f844
	goto loc_8227F844;
loc_8227F840:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8227F844:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82281710) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82281718;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,40(r4)
	REX_STORE_U8(ctx.r4.u32 + 40, ctx.r11.u8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r5,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r5.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,212(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82281750
	if (!ctx.cr6.eq) goto loc_82281750;
	// stw r4,212(r3)
	REX_STORE_U32(ctx.r3.u32 + 212, ctx.r4.u32);
	// stw r5,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r5.u32);
	// stw r5,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r5.u32);
	// b 0x822818bc
	goto loc_822818BC;
loc_82281750:
	// lhz r4,68(r29)
	ctx.r4.u64 = REX_LOAD_U16(r29.u32 + 68);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi r4,0
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble 0x82281794
	if (!ctx.cr0.gt) goto loc_82281794;
	// lwz r7,64(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 64);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
loc_82281770:
	// lwzx r6,r10,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82281798
	if (ctx.cr6.eq) goto loc_82281798;
	// lhz r6,68(r29)
	ctx.r6.u64 = REX_LOAD_U16(r29.u32 + 68);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82281770
	if (ctx.cr6.lt) goto loc_82281770;
loc_82281794:
	// li r8,-1
	ctx.r8.s64 = -1;
loc_82281798:
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x822817d8
	if (!ctx.cr6.gt) goto loc_822817D8;
	// lwz r6,64(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 64);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
loc_822817B4:
	// lwzx r3,r10,r6
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822817dc
	if (ctx.cr6.eq) goto loc_822817DC;
	// lhz r3,68(r29)
	ctx.r3.u64 = REX_LOAD_U16(r29.u32 + 68);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r7,r3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x822817b4
	if (ctx.cr6.lt) goto loc_822817B4;
loc_822817D8:
	// li r7,-1
	ctx.r7.s64 = -1;
loc_822817DC:
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82281860
	if (!ctx.cr6.lt) goto loc_82281860;
loc_822817E4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82281858
	if (ctx.cr6.eq) goto loc_82281858;
	// lwz r6,24(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82281858
	if (ctx.cr6.eq) goto loc_82281858;
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228184c
	if (ctx.cr6.eq) goto loc_8228184C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82281848
	if (!ctx.cr6.gt) goto loc_82281848;
	// lwz r8,64(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 64);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
loc_82281824:
	// lwzx r3,r11,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82281894
	if (ctx.cr6.eq) goto loc_82281894;
	// lhz r3,68(r29)
	ctx.r3.u64 = REX_LOAD_U16(r29.u32 + 68);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82281824
	if (ctx.cr6.lt) goto loc_82281824;
loc_82281848:
	// li r8,-1
	ctx.r8.s64 = -1;
loc_8228184C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822817e4
	if (ctx.cr6.lt) goto loc_822817E4;
loc_82281858:
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x8228189c
	if (ctx.cr6.gt) goto loc_8228189C;
loc_82281860:
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r11,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r11.u32);
	// stw r10,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r10.u32);
	// stw r30,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r30.u32);
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82281880
	if (ctx.cr6.eq) goto loc_82281880;
	// stw r30,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r30.u32);
loc_82281880:
	// lwz r10,212(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 212);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822818bc
	if (!ctx.cr6.eq) goto loc_822818BC;
	// stw r30,212(r29)
	REX_STORE_U32(r29.u32 + 212, r30.u32);
	// b 0x822818bc
	goto loc_822818BC;
loc_82281894:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// b 0x8228184c
	goto loc_8228184C;
loc_8228189C:
	// stw r11,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r11.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r10.u32);
	// stw r30,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r30.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822818bc
	if (ctx.cr6.eq) goto loc_822818BC;
	// stw r30,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r30.u32);
loc_822818BC:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r30,8
	ctx.r11.s64 = r30.s64 + 8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822818f0
	if (ctx.cr6.eq) goto loc_822818F0;
loc_822818CC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 40);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822818f0
	if (ctx.cr0.eq) goto loc_822818F0;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822818cc
	if (!ctx.cr6.eq) goto loc_822818CC;
loc_822818F0:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228197c
	if (ctx.cr6.eq) goto loc_8228197C;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r31,r11,30560
	r31.s64 = ctx.r11.s64 + 30560;
loc_82281904:
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lbz r11,40(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 40);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8228197c
	if (ctx.cr0.eq) goto loc_8228197C;
	// lhz r11,36(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 36);
	// lhz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 36);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r11,36(r30)
	REX_STORE_U16(r30.u32 + 36, ctx.r11.u16);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82281938
	if (ctx.cr6.eq) goto loc_82281938;
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r30.u32);
loc_82281938:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82280b80
	ctx.lr = 0x82281940;
	sub_82280B80(ctx, base);
	// bl 0x82280bd0
	ctx.lr = 0x82281944;
	sub_82280BD0(ctx, base);
	// lwz r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 400);
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bge cr6,0x82281968
	if (!ctx.cr6.lt) goto loc_82281968;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r4.u32);
	// lwz r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,400(r31)
	REX_STORE_U32(r31.u32 + 400, ctx.r11.u32);
	// b 0x82281970
	goto loc_82281970;
loc_82281968:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82255b70
	ctx.lr = 0x82281970;
	sub_82255B70(ctx, base);
loc_82281970:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82281904
	if (!ctx.cr6.eq) goto loc_82281904;
loc_8228197C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8228B238) {
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
	// li r30,0
	r30.s64 = 0;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// bl 0x822d5870
	ctx.lr = 0x8228B270;
	sub_822D5870(ctx, base);
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
	// stw r30,68(r31)
	REX_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r30,72(r31)
	REX_STORE_U32(r31.u32 + 72, r30.u32);
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

DEFINE_REX_FUNC(sub_8228D128) {
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
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e70
	ctx.lr = 0x8228D130;
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwz r10,-2144(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -2144);
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r10,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r10.u32);
	// bctrl 
	ctx.lr = 0x8228D174;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,15
	ctx.r6.s64 = 15;
	// lfs f31,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82233848
	ctx.lr = 0x8228D1A0;
	sub_82233848(ctx, base);
loc_8228D1A0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228d1e0
	if (!ctx.cr0.eq) goto loc_8228D1E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228D1D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt 0x8228d418
	if (ctx.cr0.lt) goto loc_8228D418;
loc_8228D1E0:
	// lwz r31,24(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8228d210
	if (ctx.cr6.eq) goto loc_8228D210;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228d210
	if (!ctx.cr6.eq) goto loc_8228D210;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228d210
	if (!ctx.cr6.eq) goto loc_8228D210;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228d1a0
	if (ctx.cr6.eq) goto loc_8228D1A0;
loc_8228D210:
	// stw r31,0(r22)
	REX_STORE_U32(r22.u32 + 0, r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822108e8
	ctx.lr = 0x8228D220;
	sub_822108E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82210258
	ctx.lr = 0x8228D22C;
	sub_82210258(ctx, base);
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// vupkd3d128 v63,v63,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v63 = vTemp;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// vpermwi128 v62,v63,234
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x15));
	// vpermwi128 v61,v63,186
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x45));
	// vpermwi128 v60,v63,174
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x51));
	// vpermwi128 v63,v63,171
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x54));
	// stvx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82212580
	ctx.lr = 0x8228D270;
	sub_82212580(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// lfs f11,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// addi r30,r1,144
	r30.s64 = ctx.r1.s64 + 144;
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r31,r1,128
	r31.s64 = ctx.r1.s64 + 128;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2024(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2024);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lvx128 v61,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// lfs f13,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f12,2372(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2372);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r6,4
	ctx.r6.s64 = 4;
	// rldicr r7,r7,62,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 62) & 0xFFFFFFFFFFFFFFFF;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r26,172(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lfs f0,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// lwz r25,168(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// std r26,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, r26.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r25,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, r25.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 / ctx.f0.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f0,f11
	ctx.f0.f64 = double(float(ctx.f11.f64));
	// fdivs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lvx128 v62,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw128 v60,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vmrglw128 v61,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// lvx128 v63,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw128 v59,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vmrglw128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vmrghw128 v58,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// vmrglw128 v60,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// vmrghw128 v62,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vmrglw128 v63,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// stvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82226380
	ctx.lr = 0x8228D358;
	sub_82226380(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwa r10,0(r28)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(r28.u32 + 0));
	// stfs f31,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// lwa r11,4(r28)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r28.u32 + 4));
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stfs f0,232(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f0,244(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f0,248(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f0,252(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f0,260(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f0,268(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 268, temp.u32);
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
	// stfs f31,220(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f31,236(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f31,264(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f31,280(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f31,284(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stfs f13,208(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f13,256(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f13,272(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f0,228(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f0,276(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// bl 0x822276d0
	ctx.lr = 0x8228D400;
	sub_822276D0(ctx, base);
	// lwz r3,288(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x822d7b58
	ctx.lr = 0x8228D408;
	sub_822D7B58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228D40C:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822d4ec0
	return;
loc_8228D418:
	// lwz r3,288(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x822d7b58
	ctx.lr = 0x8228D420;
	sub_822D7B58(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x8228d40c
	goto loc_8228D40C;
}

DEFINE_REX_FUNC(sub_8229F4D0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,2956(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2956);
	// addi r5,r11,320
	ctx.r5.s64 = ctx.r11.s64 + 320;
	// b 0x822b9570
	sub_822B9570(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8229F6C0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// li r3,5
	ctx.r3.s64 = 5;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r11,2928
	ctx.r4.s64 = ctx.r11.s64 + 2928;
	// b 0x822b94f8
	sub_822B94F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8229F840) {
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
	ctx.lr = 0x8229F848;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// addze r30,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r30.s64 = temp.s64;
	// b 0x8229f8a8
	goto loc_8229F8A8;
loc_8229F870:
	// rlwinm r28,r30,2,0,29
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// lwzx r3,r28,r29
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + r29.u32);
	// bctrl 
	ctx.lr = 0x8229F884;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229f8b0
	if (ctx.cr0.eq) goto loc_8229F8B0;
	// lwzx r11,r28,r29
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + r29.u32);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r30,-1
	ctx.r9.s64 = r30.s64 + -1;
	// mr r31,r30
	r31.u64 = r30.u64;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// stwx r11,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r11.u32);
	// addze r30,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	r30.s64 = temp.s64;
loc_8229F8A8:
	// cmpw cr6,r27,r31
	ctx.cr6.compare<int32_t>(r27.s32, r31.s32, ctx.xer);
	// blt cr6,0x8229f870
	if (ctx.cr6.lt) goto loc_8229F870;
loc_8229F8B0:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_822A1CC8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,220(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 228);
	// stw r4,220(r3)
	REX_STORE_U32(ctx.r3.u32 + 220, ctx.r4.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x82211a30
	sub_82211A30(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822A3120) {
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
	ctx.lr = 0x822A3128;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// stb r4,145(r3)
	REX_STORE_U8(ctx.r3.u32 + 145, ctx.r4.u8);
	// stw r5,180(r3)
	REX_STORE_U32(ctx.r3.u32 + 180, ctx.r5.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r28,8(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r31,16(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82212808
	ctx.lr = 0x822A3158;
	sub_82212808(ctx, base);
	// stw r3,148(r30)
	REX_STORE_U32(r30.u32 + 148, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82212850
	ctx.lr = 0x822A3164;
	sub_82212850(ctx, base);
	// stw r3,152(r30)
	REX_STORE_U32(r30.u32 + 152, ctx.r3.u32);
	// lwz r4,180(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 180);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822a317c
	if (ctx.cr6.eq) goto loc_822A317C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822a1c08
	ctx.lr = 0x822A317C;
	sub_822A1C08(ctx, base);
loc_822A317C:
	// lwz r11,156(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a31cc
	if (ctx.cr6.eq) goto loc_822A31CC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8229e9f8
	ctx.lr = 0x822A3190;
	sub_8229E9F8(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x822a31bc
	if (ctx.cr6.eq) goto loc_822A31BC;
	// bl 0x82213578
	ctx.lr = 0x822A31A8;
	sub_82213578(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,156(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 156);
	// bl 0x82213578
	ctx.lr = 0x822A31B8;
	sub_82213578(ctx, base);
	// b 0x822a31cc
	goto loc_822A31CC;
loc_822A31BC:
	// bl 0x82213578
	ctx.lr = 0x822A31C0;
	sub_82213578(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,156(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 156);
	// bl 0x822132a0
	ctx.lr = 0x822A31CC;
	sub_822132A0(ctx, base);
loc_822A31CC:
	// lwz r4,160(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 160);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822a31e0
	if (ctx.cr6.eq) goto loc_822A31E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822132a0
	ctx.lr = 0x822A31E0;
	sub_822132A0(ctx, base);
loc_822A31E0:
	// lfs f0,288(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,292(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,296(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 296);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,300(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 300);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822a3228
	if (!ctx.cr6.eq) goto loc_822A3228;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822a12d0
	ctx.lr = 0x822A3228;
	sub_822A12D0(ctx, base);
loc_822A3228:
	// lwz r11,168(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a32a0
	if (ctx.cr6.eq) goto loc_822A32A0;
	// lwz r10,72(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 72);
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,304(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 304);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 & ctx.r8.u64;
	// bl 0x822204d8
	ctx.lr = 0x822A326C;
	sub_822204D8(ctx, base);
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822a328c
	if (!ctx.cr6.eq) goto loc_822A328C;
	// lis r4,5461
	ctx.r4.s64 = 357892096;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,21845
	ctx.r4.u64 = ctx.r4.u64 | 21845;
	// bl 0x82220368
	ctx.lr = 0x822A328C;
	sub_82220368(ctx, base);
loc_822A328C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82220848
	ctx.lr = 0x822A3298;
	sub_82220848(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82220ff8
	ctx.lr = 0x822A32A0;
	sub_82220FF8(ctx, base);
loc_822A32A0:
	// stw r30,184(r28)
	REX_STORE_U32(r28.u32 + 184, r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822a9958
	ctx.lr = 0x822A32B0;
	sub_822A9958(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r7,108(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x822a11e8
	ctx.lr = 0x822A32CC;
	sub_822A11E8(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// stb r29,176(r30)
	REX_STORE_U8(r30.u32 + 176, r29.u8);
	// beq cr6,0x822a33bc
	if (ctx.cr6.eq) goto loc_822A33BC;
	// lwz r31,156(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 156);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(r27.s32, 1, ctx.xer);
	// beq cr6,0x822a32f0
	if (ctx.cr6.eq) goto loc_822A32F0;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(r27.s32, 3, ctx.xer);
	// bne cr6,0x822a330c
	if (!ctx.cr6.eq) goto loc_822A330C;
loc_822A32F0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a3e58
	ctx.lr = 0x822A32FC;
	sub_822A3E58(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a3e78
	ctx.lr = 0x822A330C;
	sub_822A3E78(ctx, base);
loc_822A330C:
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(r27.s32, 2, ctx.xer);
	// beq cr6,0x822a331c
	if (ctx.cr6.eq) goto loc_822A331C;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(r27.s32, 3, ctx.xer);
	// bne cr6,0x822a33bc
	if (!ctx.cr6.eq) goto loc_822A33BC;
loc_822A331C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,172(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 172);
	// bl 0x822a3e58
	ctx.lr = 0x822A3328;
	sub_822A3E58(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r30,0
	r30.s64 = 0;
	// stb r29,101(r31)
	REX_STORE_U8(r31.u32 + 101, r29.u8);
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// stb r30,108(r31)
	REX_STORE_U8(r31.u32 + 108, r30.u8);
	// li r4,8704
	ctx.r4.s64 = 8704;
	// stb r30,109(r31)
	REX_STORE_U8(r31.u32 + 109, r30.u8);
	// addi r27,r31,128
	r27.s64 = r31.s64 + 128;
	// stb r30,110(r31)
	REX_STORE_U8(r31.u32 + 110, r30.u8);
	// stb r30,111(r31)
	REX_STORE_U8(r31.u32 + 111, r30.u8);
	// stb r29,102(r31)
	REX_STORE_U8(r31.u32 + 102, r29.u8);
	// lwz r3,31464(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 31464);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x8229ff40
	ctx.lr = 0x822A3364;
	sub_8229FF40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822a0800
	ctx.lr = 0x822A3378;
	sub_822A0800(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r28,168
	ctx.r4.s64 = r28.s64 + 168;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822a0800
	ctx.lr = 0x822A338C;
	sub_822A0800(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a3e78
	ctx.lr = 0x822A339C;
	sub_822A3E78(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r29,108(r31)
	REX_STORE_U8(r31.u32 + 108, r29.u8);
	// stb r29,109(r31)
	REX_STORE_U8(r31.u32 + 109, r29.u8);
	// stb r29,110(r31)
	REX_STORE_U8(r31.u32 + 110, r29.u8);
	// stb r29,111(r31)
	REX_STORE_U8(r31.u32 + 111, r29.u8);
	// stb r30,101(r31)
	REX_STORE_U8(r31.u32 + 101, r30.u8);
	// stb r30,102(r31)
	REX_STORE_U8(r31.u32 + 102, r30.u8);
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
loc_822A33BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822AD018) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x822a99c0
	ctx.lr = 0x822AD03C;
	sub_822A99C0(ctx, base);
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x822aceb0
	ctx.lr = 0x822AD050;
	sub_822ACEB0(ctx, base);
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

DEFINE_REX_FUNC(sub_822AE088) {
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
	ctx.lr = 0x822AE090;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,236
	ctx.r3.s64 = 236;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// bl 0x822c80d0
	ctx.lr = 0x822AE0BC;
	sub_822C80D0(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ae0d8
	if (ctx.cr0.eq) goto loc_822AE0D8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822b6d58
	ctx.lr = 0x822AE0D0;
	sub_822B6D58(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// b 0x822ae0dc
	goto loc_822AE0DC;
loc_822AE0D8:
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_822AE0DC:
	// addi r31,r29,16
	r31.s64 = r29.s64 + 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ad9c0
	ctx.lr = 0x822AE0EC;
	sub_822AD9C0(ctx, base);
loc_822AE0EC:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r28,r11,r29
	r28.u64 = ctx.r11.u64 + r29.u64;
	// subf r11,r9,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r3,r28,488
	ctx.r3.s64 = r28.s64 + 488;
	// srawi r4,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 2;
	// bl 0x822ad068
	ctx.lr = 0x822AE10C;
	sub_822AD068(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r3,r28,536
	ctx.r3.s64 = r28.s64 + 536;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r4,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 2;
	// bl 0x822ad068
	ctx.lr = 0x822AE124;
	sub_822AD068(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// clrlwi r30,r11,24
	r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// blt cr6,0x822ae0ec
	if (ctx.cr6.lt) goto loc_822AE0EC;
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x822b3a98
	ctx.lr = 0x822AE164;
	sub_822B3A98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_822B2530) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822B2538;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d7240
	ctx.lr = 0x822B2550;
	sub_822D7240(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822b2560
	if (ctx.cr0.eq) goto loc_822B2560;
	// subf r30,r31,r3
	r30.u64 = ctx.r3.u64 - r31.u64;
	// b 0x822b2580
	goto loc_822B2580;
loc_822B2560:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_822B2564:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822b2564
	if (!ctx.cr6.eq) goto loc_822B2564;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r30,r11,0
	r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_822B2580:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d6450
	ctx.lr = 0x822B2590;
	sub_822D6450(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r30,r29
	REX_STORE_U8(r30.u32 + r29.u32, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822B41B0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B54C8) {
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
	ctx.lr = 0x822B54D0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b564c
	if (ctx.cr6.eq) goto loc_822B564C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822b564c
	if (ctx.cr6.eq) goto loc_822B564C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x822b564c
	if (ctx.cr6.eq) goto loc_822B564C;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r28,8(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822a99c0
	ctx.lr = 0x822B5508;
	sub_822A99C0(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + r31.u64;
	// lbz r11,193(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 193);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822b564c
	if (ctx.cr0.eq) goto loc_822B564C;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r29,0
	r29.s64 = 0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// beq cr6,0x822b55c0
	if (ctx.cr6.eq) goto loc_822B55C0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x822b556c
	if (ctx.cr6.eq) goto loc_822B556C;
	// lwz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822b5560
	if (!ctx.cr0.eq) goto loc_822B5560;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// b 0x822b5564
	goto loc_822B5564;
loc_822B5560:
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
loc_822B5564:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b564c
	if (ctx.cr0.eq) goto loc_822B564C;
loc_822B556C:
	// lwz r30,40(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b5584
	if (ctx.cr6.eq) goto loc_822B5584;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b1b40
	ctx.lr = 0x822B5584;
	sub_822B1B40(ctx, base);
loc_822B5584:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bgt cr6,0x822b55a8
	if (ctx.cr6.gt) goto loc_822B55A8;
	// addi r5,r30,384
	ctx.r5.s64 = r30.s64 + 384;
	// addi r4,r11,192
	ctx.r4.s64 = ctx.r11.s64 + 192;
	// bl 0x8229f270
	ctx.lr = 0x822B55A4;
	sub_8229F270(ctx, base);
	// b 0x822b55b0
	goto loc_822B55B0;
loc_822B55A8:
	// addi r4,r30,384
	ctx.r4.s64 = r30.s64 + 384;
	// bl 0x821f3f40
	ctx.lr = 0x822B55B0;
	sub_821F3F40(ctx, base);
loc_822B55B0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822a99f0
	ctx.lr = 0x822B55C0;
	sub_822A99F0(ctx, base);
loc_822B55C0:
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x822b565c
	if (!ctx.cr6.eq) goto loc_822B565C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r29,136(r31)
	REX_STORE_U32(r31.u32 + 136, r29.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,24(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x822b55fc
	if (!ctx.cr6.eq) goto loc_822B55FC;
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822b564c
	if (ctx.cr6.eq) goto loc_822B564C;
loc_822B55FC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r8,228(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 228);
	// lwz r7,232(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 232);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r27,24(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,23120(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 23120);
	// lwz r10,23124(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 23124);
	// and r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 & ctx.r11.u64;
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// bctrl 
	ctx.lr = 0x822B5634;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822b5658
	if (!ctx.cr0.eq) goto loc_822B5658;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r29,56(r31)
	REX_STORE_U32(r31.u32 + 56, r29.u32);
	// stw r29,140(r31)
	REX_STORE_U32(r31.u32 + 140, r29.u32);
	// stw r11,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r11.u32);
loc_822B564C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B5650:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ed4
	return;
loc_822B5658:
	// stw r30,140(r31)
	REX_STORE_U32(r31.u32 + 140, r30.u32);
loc_822B565C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x822c5028
	ctx.lr = 0x822B5668;
	sub_822C5028(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r3,116(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822b5698
	if (!ctx.cr6.eq) goto loc_822B5698;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b5698
	if (ctx.cr6.eq) goto loc_822B5698;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b5698
	if (ctx.cr6.eq) goto loc_822B5698;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_822B5698:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b56a8
	if (ctx.cr6.eq) goto loc_822B56A8;
	// bl 0x822b9f38
	ctx.lr = 0x822B56A4;
	sub_822B9F38(ctx, base);
	// b 0x822b56ac
	goto loc_822B56AC;
loc_822B56A8:
	// bl 0x822ba098
	ctx.lr = 0x822B56AC;
	sub_822BA098(ctx, base);
loc_822B56AC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822a1098
	ctx.lr = 0x822B56BC;
	sub_822A1098(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822a1098
	ctx.lr = 0x822B56CC;
	sub_822A1098(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822a12d0
	ctx.lr = 0x822B56E4;
	sub_822A12D0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lbz r5,152(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 152);
	// bl 0x822a1098
	ctx.lr = 0x822B56F4;
	sub_822A1098(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lbz r4,153(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 153);
	// bl 0x822a1370
	ctx.lr = 0x822B5700;
	sub_822A1370(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822a1098
	ctx.lr = 0x822B5710;
	sub_822A1098(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lbz r5,164(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 164);
	// bl 0x822a1098
	ctx.lr = 0x822B5720;
	sub_822A1098(ctx, base);
	// lbz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 164);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822b5740
	if (ctx.cr0.eq) goto loc_822B5740;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f1,2392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822a14a8
	ctx.lr = 0x822B5740;
	sub_822A14A8(ctx, base);
loc_822B5740:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822a1528
	ctx.lr = 0x822B574C;
	sub_822A1528(ctx, base);
	// lbz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 144);
	// li r4,1
	ctx.r4.s64 = 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x822a1098
	ctx.lr = 0x822B5764;
	sub_822A1098(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822b5650
	goto loc_822B5650;
}

DEFINE_REX_FUNC(sub_822C25A0) {
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
	ctx.lr = 0x822C25A8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x822d6450
	ctx.lr = 0x822C25C4;
	sub_822D6450(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lis r8,16383
	ctx.r8.s64 = 1073676288;
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
	// li r24,-1
	r24.s64 = -1;
	// ori r25,r8,65535
	r25.u64 = ctx.r8.u64 | 65535;
	// add r26,r9,r30
	r26.u64 = ctx.r9.u64 + r30.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// add r29,r10,r26
	r29.u64 = ctx.r10.u64 + r26.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x822c25f8
	if (!ctx.cr6.gt) goto loc_822C25F8;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_822C25F8:
	// bl 0x822c80d0
	ctx.lr = 0x822C25FC;
	sub_822C80D0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r3,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822c2658
	if (!ctx.cr6.gt) goto loc_822C2658;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822C2614:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzx r8,r11,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822c2634
	goto loc_822C2634;
loc_822C2624:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// beq cr6,0x822c263c
	if (ctx.cr6.eq) goto loc_822C263C;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
loc_822C2634:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c2624
	if (!ctx.cr6.eq) goto loc_822C2624;
loc_822C263C:
	// lwz r8,40(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 40);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r10,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822c2614
	if (ctx.cr6.lt) goto loc_822C2614;
loc_822C2658:
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// lis r10,1820
	ctx.r10.s64 = 119275520;
	// add r28,r11,r26
	r28.u64 = ctx.r11.u64 + r26.u64;
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// ori r10,r10,29127
	ctx.r10.u64 = ctx.r10.u64 | 29127;
	// mulli r3,r11,36
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(36));
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822c2680
	if (!ctx.cr6.gt) goto loc_822C2680;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_822C2680:
	// bl 0x822c80d0
	ctx.lr = 0x822C2684;
	sub_822C80D0(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822c26f8
	if (!ctx.cr6.gt) goto loc_822C26F8;
	// li r29,0
	r29.s64 = 0;
loc_822C269C:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lfs f0,32(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// li r5,31
	ctx.r5.s64 = 31;
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + ctx.r11.u64;
	// bl 0x822d6450
	ctx.lr = 0x822C26C0;
	sub_822D6450(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// lwz r9,56(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 56);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r8,44(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 44);
	// divw r11,r11,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r11.s32 / ctx.r9.s32 : 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// andc r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// addi r29,r29,36
	r29.s64 = r29.s64 + 36;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r27,r8
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r8.u32, ctx.xer);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// blt cr6,0x822c269c
	if (ctx.cr6.lt) goto loc_822C269C;
loc_822C26F8:
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// lwz r10,72(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 72);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// add r30,r10,r26
	r30.u64 = ctx.r10.u64 + r26.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// ble cr6,0x822c2718
	if (!ctx.cr6.gt) goto loc_822C2718;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_822C2718:
	// bl 0x822c80d0
	ctx.lr = 0x822C271C;
	sub_822C80D0(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// stw r3,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822c2778
	if (!ctx.cr6.gt) goto loc_822C2778;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822C2734:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzx r8,r11,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822c2754
	goto loc_822C2754;
loc_822C2744:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// beq cr6,0x822c275c
	if (ctx.cr6.eq) goto loc_822C275C;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
loc_822C2754:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c2744
	if (!ctx.cr6.eq) goto loc_822C2744;
loc_822C275C:
	// lwz r8,56(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r10,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822c2734
	if (ctx.cr6.lt) goto loc_822C2734;
loc_822C2778:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_822C8BE0) {
	REX_FUNC_PROLOGUE();
	// b 0x822c8a00
	sub_822C8A00(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822C8E28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822C8E30;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822c8e4c
	if (!ctx.cr6.eq) goto loc_822C8E4C;
loc_822C8E44:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822c8f24
	goto loc_822C8F24;
loc_822C8E4C:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c8e44
	if (ctx.cr6.eq) goto loc_822C8E44;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822c8e44
	if (!ctx.cr6.eq) goto loc_822C8E44;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bne cr6,0x822c8e74
	if (!ctx.cr6.eq) goto loc_822C8E74;
	// lwz r29,40(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 40);
loc_822C8E74:
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq 0x822c8e44
	if (ctx.cr0.eq) goto loc_822C8E44;
	// clrlwi. r11,r28,30
	ctx.r11.u64 = r28.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c8e44
	if (!ctx.cr0.eq) goto loc_822C8E44;
	// clrlwi. r11,r29,21
	ctx.r11.u64 = r29.u32 & 0x7FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x822c8f24
	if (!ctx.cr0.eq) goto loc_822C8F24;
	// li r30,0
	r30.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822095c0
	ctx.lr = 0x822C8EAC;
	sub_822095C0(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82209bf0
	ctx.lr = 0x822C8ECC;
	sub_82209BF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822c8ee0
	if (!ctx.cr0.eq) goto loc_822C8EE0;
	// bl 0x822098c8
	ctx.lr = 0x822C8ED8;
	sub_822098C8(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x822c8e44
	if (!ctx.cr6.eq) goto loc_822C8E44;
loc_822C8EE0:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823cdf60
	ctx.lr = 0x822C8EF4;
	sub_823CDF60(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c8f1c
	if (ctx.cr6.eq) goto loc_822C8F1C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x823cd720
	ctx.lr = 0x822C8F1C;
	sub_823CD720(ctx, base);
loc_822C8F1C:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r3.u32);
loc_822C8F24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822CBBB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,14
	ctx.r11.s64 = ctx.r4.s64 + 14;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CC618) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	REX_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x822d4e88
	ctx.lr = 0x822CC628;
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32163
	r29.s64 = -2107834368;
	// lwz r11,31792(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 31792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822cc6e4
	if (!ctx.cr6.eq) goto loc_822CC6E4;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x822c80d0
	ctx.lr = 0x822CC64C;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822cc65c
	if (ctx.cr0.eq) goto loc_822CC65C;
	// bl 0x822cc518
	ctx.lr = 0x822CC658;
	sub_822CC518(ctx, base);
	// b 0x822cc660
	goto loc_822CC660;
loc_822CC65C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822CC660:
	// stw r3,31792(r29)
	REX_STORE_U32(r29.u32 + 31792, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// li r28,4
	r28.s64 = 4;
	// bl 0x822ad068
	ctx.lr = 0x822CC670;
	sub_822AD068(ctx, base);
	// li r30,0
	r30.s64 = 0;
loc_822CC674:
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// bge cr6,0x822cc6d8
	if (!ctx.cr6.lt) goto loc_822CC6D8;
	// li r3,408
	ctx.r3.s64 = 408;
	// bl 0x822c80d0
	ctx.lr = 0x822CC688;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822cc698
	if (ctx.cr0.eq) goto loc_822CC698;
	// bl 0x822cbbd8
	ctx.lr = 0x822CC694;
	sub_822CBBD8(ctx, base);
	// b 0x822cc69c
	goto loc_822CC69C;
loc_822CC698:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822CC69C:
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r3,31792(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 31792);
	// bl 0x822ad9c0
	ctx.lr = 0x822CC6AC;
	sub_822AD9C0(ctx, base);
	// lwz r11,31792(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 31792);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// stw r9,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r9.u32);
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r30.u32);
	// stb r10,12(r11)
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x822cc674
	goto loc_822CC674;
loc_822CC6D8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822cc6e8
	goto loc_822CC6E8;
loc_822CC6E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822CC6E8:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822CE7C8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822ce7d8
	if (!ctx.cr6.eq) goto loc_822CE7D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822CE7D8:
	// stw r4,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CF030) {
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
	ctx.lr = 0x822CF038;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822cf1a8
	if (ctx.cr6.eq) goto loc_822CF1A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x822d20d0
	ctx.lr = 0x822CF058;
	sub_822D20D0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x822d2298
	ctx.lr = 0x822CF06C;
	sub_822D2298(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// bl 0x822d2268
	ctx.lr = 0x822CF080;
	sub_822D2268(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 40);
	// bl 0x822d1580
	ctx.lr = 0x822CF08C;
	sub_822D1580(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 40);
	// bl 0x822d1648
	ctx.lr = 0x822CF098;
	sub_822D1648(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822cf1a8
	if (ctx.cr6.eq) goto loc_822CF1A8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x822cf1a8
	if (ctx.cr6.eq) goto loc_822CF1A8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cf1a8
	if (ctx.cr6.eq) goto loc_822CF1A8;
	// lbz r11,1(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 1);
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 40);
	// rlwinm r25,r11,31,31,31
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// clrlwi r24,r11,31
	r24.u64 = ctx.r11.u32 & 0x1;
	// bl 0x822d3730
	ctx.lr = 0x822CF0C8;
	sub_822D3730(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// bl 0x822d3258
	ctx.lr = 0x822CF0DC;
	sub_822D3258(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822cf1a8
	if (!ctx.cr6.eq) goto loc_822CF1A8;
	// lbz r11,1(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 1);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r30,28(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 28);
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lwz r25,0(r30)
	r25.u64 = REX_LOAD_U32(r30.u32 + 0);
	// subfe r24,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	r24.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x822d2688
	ctx.lr = 0x822CF108;
	sub_822D2688(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229a710
	ctx.lr = 0x822CF114;
	sub_8229A710(ctx, base);
	// lwz r10,32(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,16
	ctx.r9.s64 = 16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// and r6,r24,r9
	ctx.r6.u64 = r24.u64 & ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lfs f1,2008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bctrl 
	ctx.lr = 0x822CF148;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822cf1a8
	if (!ctx.cr0.eq) goto loc_822CF1A8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d2d58
	ctx.lr = 0x822CF15C;
	sub_822D2D58(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822d0910
	ctx.lr = 0x822CF168;
	sub_822D0910(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d1aa8
	ctx.lr = 0x822CF178;
	sub_822D1AA8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d1920
	ctx.lr = 0x822CF184;
	sub_822D1920(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d2ce8
	ctx.lr = 0x822CF190;
	sub_822D2CE8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d1d70
	ctx.lr = 0x822CF19C;
	sub_822D1D70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d1e28
	ctx.lr = 0x822CF1A8;
	sub_822D1E28(ctx, base);
loc_822CF1A8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_822D45C0) {
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
	ctx.lr = 0x822D45D8;
	sub_822D44A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,26408
	ctx.r11.s64 = ctx.r11.s64 + 26408;
	// addi r4,r10,16796
	ctx.r4.s64 = ctx.r10.s64 + 16796;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d8f10
	ctx.lr = 0x822D45F4;
	sub_822D8F10(ctx, base);
}

DEFINE_REX_FUNC(__savegprlr_19) {
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

DEFINE_REX_FUNC(__savefpr_17) {
	REX_FUNC_PROLOGUE();
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
	// stfd f17,-120(r12)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -120, f17.u64);
	// stfd f18,-112(r12)
	REX_STORE_U64(ctx.r12.u32 + -112, f18.u64);
	// stfd f19,-104(r12)
	REX_STORE_U64(ctx.r12.u32 + -104, f19.u64);
	// stfd f20,-96(r12)
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

DEFINE_REX_FUNC(sub_822D6228) {
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
	ctx.lr = 0x822D6230;
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// stw r4,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r4.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822dbd80
	ctx.lr = 0x822D624C;
	sub_822DBD80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,31840(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31840);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822d6364
	if (ctx.cr6.eq) goto loc_822D6364;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// lwz r11,31836(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 31836);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822d6278
	if (!ctx.cr6.eq) goto loc_822D6278;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824d45bc
	ctx.lr = 0x822D6278;
	__imp__KeBugCheck(ctx, base);
loc_822D6278:
	// lis r8,-32163
	ctx.r8.s64 = -2107834368;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,31836(r9)
	REX_STORE_U32(ctx.r9.u32 + 31836, ctx.r11.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stb r24,31832(r8)
	REX_STORE_U8(ctx.r8.u32 + 31832, r24.u8);
	// bne cr6,0x822d6350
	if (!ctx.cr6.eq) goto loc_822D6350;
	// lis r25,-32161
	r25.s64 = -2107703296;
	// lwz r28,-11312(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + -11312);
	// stw r28,88(r31)
	REX_STORE_U32(r31.u32 + 88, r28.u32);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq 0x822d633c
	if (ctx.cr0.eq) goto loc_822D633C;
	// lis r27,-32161
	r27.s64 = -2107703296;
	// mr r29,r28
	r29.u64 = r28.u64;
	// stw r28,84(r31)
	REX_STORE_U32(r31.u32 + 84, r28.u32);
	// lwz r30,-11316(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + -11316);
	// mr r26,r30
	r26.u64 = r30.u64;
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
loc_822D62C0:
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// blt cr6,0x822d633c
	if (ctx.cr6.lt) goto loc_822D633C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d62e4
	if (!ctx.cr6.eq) goto loc_822D62E4;
loc_822D62DC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x822d62c0
	goto loc_822D62C0;
loc_822D62E4:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// blt cr6,0x822d633c
	if (ctx.cr6.lt) goto loc_822D633C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822D6300;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-11312(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + -11312);
	// lwz r10,-11316(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + -11316);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822d6318
	if (!ctx.cr6.eq) goto loc_822D6318;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822d62dc
	if (ctx.cr6.eq) goto loc_822D62DC;
loc_822D6318:
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// b 0x822d62dc
	goto loc_822D62DC;
loc_822D633C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// addi r4,r11,584
	ctx.r4.s64 = ctx.r11.s64 + 584;
	// addi r3,r10,572
	ctx.r3.s64 = ctx.r10.s64 + 572;
	// bl 0x822d61c8
	ctx.lr = 0x822D6350;
	sub_822D61C8(ctx, base);
loc_822D6350:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// addi r4,r11,592
	ctx.r4.s64 = ctx.r11.s64 + 592;
	// addi r3,r10,588
	ctx.r3.s64 = ctx.r10.s64 + 588;
	// bl 0x822d61c8
	ctx.lr = 0x822D6364;
	sub_822D61C8(ctx, base);
loc_822D6364:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = r31.s64 + 176;
	// bl 0x822d63ac
	ctx.lr = 0x822D6370;
	ctx.r24 = r24;
	ctx.r25 = r25;
	ctx.r26 = r26;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_822D63AC(ctx, base);
	r24 = ctx.r24;
	r25 = ctx.r25;
	r26 = ctx.r26;
	r27 = ctx.r27;
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d6384
	if (!ctx.cr6.eq) goto loc_822D6384;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824d45bc
	ctx.lr = 0x822D6384;
	__imp__KeBugCheck(ctx, base);
loc_822D6384:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(__savevmx_101) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_72) {
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

DEFINE_REX_FUNC(sub_822E2A58) {
	REX_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x822e2930
	sub_822E2930(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822E4230) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, r31.u64);
	// mflr r31
	r31.u64 = ctx.lr;
	// stwu r1,-80(r1)
	ea = -80 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824d4a8c
	ctx.lr = 0x822E4248;
	__imp__RtlUnwind(ctx, base);
	// mtlr r31
	ctx.lr = r31.u64;
	// ld r31,8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 8);
	// addi r1,r1,80
	ctx.r1.s64 = ctx.r1.s64 + 80;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E5F90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822E5F98;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,-1
	r30.s64 = -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e5fc4
	if (!ctx.cr6.eq) goto loc_822E5FC4;
	// bl 0x822db6c0
	ctx.lr = 0x822E5FB0;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822E5FBC;
	sub_822D6910(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822e6024
	goto loc_822E6024;
loc_822E5FC4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e601c
	if (ctx.cr0.eq) goto loc_822E601C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e1da0
	ctx.lr = 0x822E5FE0;
	sub_822E1DA0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e6d90
	ctx.lr = 0x822E5FEC;
	sub_822E6D90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e15a8
	ctx.lr = 0x822E5FF4;
	sub_822E15A8(ctx, base);
	// bl 0x822e6c30
	ctx.lr = 0x822E5FF8;
	sub_822E6C30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822e6008
	if (!ctx.cr0.lt) goto loc_822E6008;
	// li r30,-1
	r30.s64 = -1;
	// b 0x822e601c
	goto loc_822E601C;
loc_822E6008:
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e601c
	if (ctx.cr6.eq) goto loc_822E601C;
	// bl 0x822d98f0
	ctx.lr = 0x822E6018;
	sub_822D98F0(ctx, base);
	// stw r29,28(r31)
	REX_STORE_U32(r31.u32 + 28, r29.u32);
loc_822E601C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
loc_822E6024:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822E8FA8) {
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
	// bl 0x822eeed0
	ctx.lr = 0x822E8FC4;
	sub_822EEED0(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r5,576
	ctx.r5.s64 = 576;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,640(r31)
	REX_STORE_U32(r31.u32 + 640, r30.u32);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r30,636(r31)
	REX_STORE_U32(r31.u32 + 636, r30.u32);
	// stw r30,644(r31)
	REX_STORE_U32(r31.u32 + 644, r30.u32);
	// stw r30,648(r31)
	REX_STORE_U32(r31.u32 + 648, r30.u32);
	// stw r30,652(r31)
	REX_STORE_U32(r31.u32 + 652, r30.u32);
	// bl 0x822d5870
	ctx.lr = 0x822E8FF0;
	sub_822D5870(ctx, base);
	// stw r30,656(r31)
	REX_STORE_U32(r31.u32 + 656, r30.u32);
	// stw r30,660(r31)
	REX_STORE_U32(r31.u32 + 660, r30.u32);
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

DEFINE_REX_FUNC(sub_822EA820) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EA850;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,80(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822EA864;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
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

DEFINE_REX_FUNC(sub_822EC798) {
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
	ctx.lr = 0x822EC7A0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ec7d8
	if (ctx.cr6.eq) goto loc_822EC7D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EC7D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
loc_822EC7D8:
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ec7f8
	if (ctx.cr6.eq) goto loc_822EC7F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EC7F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
loc_822EC7F8:
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ec818
	if (ctx.cr6.eq) goto loc_822EC818;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EC814;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
loc_822EC818:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822ec838
	if (ctx.cr6.eq) goto loc_822EC838;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EC834;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,56(r31)
	REX_STORE_U32(r31.u32 + 56, r29.u32);
loc_822EC838:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822ec858
	if (ctx.cr6.eq) goto loc_822EC858;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EC854;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,60(r31)
	REX_STORE_U32(r31.u32 + 60, r28.u32);
loc_822EC858:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x822ec878
	if (ctx.cr6.eq) goto loc_822EC878;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EC874;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,64(r31)
	REX_STORE_U32(r31.u32 + 64, r27.u32);
loc_822EC878:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822EEFF0) {
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
	// bl 0x822f2238
	ctx.lr = 0x822EF008;
	sub_822F2238(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EF01C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r11.u32);
	// stw r10,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r10.u32);
	// stw r11,508(r31)
	REX_STORE_U32(r31.u32 + 508, ctx.r11.u32);
	// stw r10,512(r31)
	REX_STORE_U32(r31.u32 + 512, ctx.r10.u32);
	// std r11,128(r31)
	REX_STORE_U64(r31.u32 + 128, ctx.r11.u64);
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

DEFINE_REX_FUNC(sub_822F2148) {
	REX_FUNC_PROLOGUE();
	// lwz r3,284(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F2238) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F2800) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f2820
	if (ctx.cr6.eq) goto loc_822F2820;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822f2820
	if (ctx.cr6.eq) goto loc_822F2820;
	// lhz r11,238(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 238);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r4)
	REX_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// blr 
	return;
loc_822F2820:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F3628) {
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
	ctx.lr = 0x822F3630;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	r21.s64 = 0;
	// lwz r27,0(r4)
	r27.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r29,0(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r16,r7
	r16.u64 = ctx.r7.u64;
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r20,r21
	r20.u64 = r21.u64;
	// mr r24,r21
	r24.u64 = r21.u64;
	// mr r28,r21
	r28.u64 = r21.u64;
	// mr r22,r21
	r22.u64 = r21.u64;
	// mr r26,r21
	r26.u64 = r21.u64;
	// mr r23,r21
	r23.u64 = r21.u64;
	// beq cr6,0x822f393c
	if (ctx.cr6.eq) goto loc_822F393C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822f393c
	if (ctx.cr6.eq) goto loc_822F393C;
	// lwz r11,584(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 584);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f393c
	if (ctx.cr6.eq) goto loc_822F393C;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// stw r21,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r21.u32);
	// beq cr6,0x822f36e0
	if (ctx.cr6.eq) goto loc_822F36E0;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r21
	r29.u64 = r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f36e0
	if (ctx.cr6.eq) goto loc_822F36E0;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x822f393c
	if (ctx.cr6.gt) goto loc_822F393C;
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// divwu. r24,r11,r10
	r24.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// beq 0x822f3784
	if (ctx.cr0.eq) goto loc_822F3784;
	// divwu r29,r27,r24
	r29.u64 = uint32_t(r24.u32 ? r27.u32 / r24.u32 : 0);
	// twllei r24,0
	if (r24.s32 == 0 || r24.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822f36e0
	if (ctx.cr6.eq) goto loc_822F36E0;
loc_822F36D0:
	// clrlwi r11,r29,28
	ctx.r11.u64 = r29.u32 & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f36e0
	if (!ctx.cr6.eq) goto loc_822F36E0;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_822F36E0:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822f36f0
	if (ctx.cr6.lt) goto loc_822F36F0;
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
loc_822F36F0:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mullw r10,r29,r10
	ctx.r10.s64 = int64_t(r29.s32) * int64_t(ctx.r10.s32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// bl 0x822fe818
	ctx.lr = 0x822F3710;
	sub_822FE818(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f38b8
	if (!ctx.cr6.eq) goto loc_822F38B8;
	// lwz r11,432(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f3730
	if (ctx.cr6.eq) goto loc_822F3730;
	// lwz r11,424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822f38b8
	if (!ctx.cr6.eq) goto loc_822F38B8;
loc_822F3730:
	// lwz r11,492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 492);
	// mr r30,r21
	r30.u64 = r21.u64;
	// stw r21,540(r31)
	REX_STORE_U32(r31.u32 + 540, r21.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822f37a0
	if (!ctx.cr6.gt) goto loc_822F37A0;
loc_822F3744:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822fee40
	ctx.lr = 0x822F374C;
	sub_822FEE40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f38b8
	if (!ctx.cr6.eq) goto loc_822F38B8;
	// lbz r11,500(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 500);
	// lhz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 228);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822f378c
	if (ctx.cr6.eq) goto loc_822F378C;
	// lwz r11,540(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 540);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,540(r31)
	REX_STORE_U32(r31.u32 + 540, ctx.r11.u32);
	// lwz r10,492(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 492);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822f3744
	if (ctx.cr6.lt) goto loc_822F3744;
	// b 0x822f37a0
	goto loc_822F37A0;
loc_822F3784:
	// li r29,1
	r29.s64 = 1;
	// b 0x822f36d0
	goto loc_822F36D0;
loc_822F378C:
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 512);
	// li r23,1
	r23.s64 = 1;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r9.u32);
loc_822F37A0:
	// clrlwi r11,r23,24
	ctx.r11.u64 = r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f3870
	if (ctx.cr6.eq) goto loc_822F3870;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(r19.s32, 1, ctx.xer);
	// beq cr6,0x822f38c4
	if (ctx.cr6.eq) goto loc_822F38C4;
	// clrlwi r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	// mr r23,r21
	r23.u64 = r21.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822f37d4
	if (!ctx.cr6.eq) goto loc_822F37D4;
	// clrlwi r11,r22,24
	ctx.r11.u64 = r22.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822f37d4
	if (!ctx.cr6.eq) goto loc_822F37D4;
	// li r20,1
	r20.s64 = 1;
loc_822F37D4:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// ble cr6,0x822f37f0
	if (!ctx.cr6.gt) goto loc_822F37F0;
	// subf r11,r27,r11
	ctx.r11.u64 = ctx.r11.u64 - r27.u64;
	// mr r28,r21
	r28.u64 = r21.u64;
	// li r22,1
	r22.s64 = 1;
	// b 0x822f37fc
	goto loc_822F37FC;
loc_822F37F0:
	// subf r11,r11,r27
	ctx.r11.u64 = r27.u64 - ctx.r11.u64;
	// li r28,1
	r28.s64 = 1;
	// li r26,1
	r26.s64 = 1;
loc_822F37FC:
	// cmpwi cr6,r16,1
	ctx.cr6.compare<int32_t>(r16.s32, 1, ctx.xer);
	// bne cr6,0x822f3824
	if (!ctx.cr6.eq) goto loc_822F3824;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f38e0
	if (ctx.cr6.eq) goto loc_822F38E0;
	// clrlwi r11,r20,24
	ctx.r11.u64 = r20.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x822f38e0
	if (ctx.cr6.eq) goto loc_822F38E0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822f38e0
	if (ctx.cr6.eq) goto loc_822F38E0;
	// b 0x822f385c
	goto loc_822F385C;
loc_822F3824:
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r24,r10
	ctx.r10.u64 = r24.u64 + ctx.r10.u64;
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822f383c
	if (!ctx.cr6.lt) goto loc_822F383C;
	// li r20,1
	r20.s64 = 1;
loc_822F383C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822f38e0
	if (ctx.cr6.eq) goto loc_822F38E0;
	// clrlwi r11,r20,24
	ctx.r11.u64 = r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f385c
	if (ctx.cr6.eq) goto loc_822F385C;
	// clrlwi r11,r29,28
	ctx.r11.u64 = r29.u32 & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f38e0
	if (!ctx.cr6.eq) goto loc_822F38E0;
loc_822F385C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f38a4
	if (!ctx.cr6.eq) goto loc_822F38A4;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// b 0x822f38a8
	goto loc_822F38A8;
loc_822F3870:
	// addi r11,r19,-1
	ctx.r11.s64 = r19.s64 + -1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r9,r28
	r28.u64 = ctx.r9.u64 & r28.u64;
	// clrlwi r8,r28,24
	ctx.r8.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822f38a4
	if (!ctx.cr6.eq) goto loc_822F38A4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822f389c
	if (ctx.cr6.eq) goto loc_822F389C;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// b 0x822f38a8
	goto loc_822F38A8;
loc_822F389C:
	// li r28,1
	r28.s64 = 1;
	// li r26,1
	r26.s64 = 1;
loc_822F38A4:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_822F38A8:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822f36f0
	if (ctx.cr6.lt) goto loc_822F36F0;
	// b 0x822f38c8
	goto loc_822F38C8;
loc_822F38B8:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ea8
	return;
loc_822F38C4:
	// li r20,1
	r20.s64 = 1;
loc_822F38C8:
	// clrlwi r11,r20,24
	ctx.r11.u64 = r20.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x822f38e0
	if (ctx.cr6.eq) goto loc_822F38E0;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r29,28(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
loc_822F38E0:
	// lwz r3,584(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 584);
	// bl 0x82445c40
	ctx.lr = 0x822F38E8;
	sub_82445C40(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,588(r31)
	REX_STORE_U32(r31.u32 + 588, ctx.r11.u32);
	// beq cr6,0x822f3904
	if (ctx.cr6.eq) goto loc_822F3904;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ea8
	return;
loc_822F3904:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// mullw r11,r29,r11
	ctx.r11.s64 = int64_t(r29.s32) * int64_t(ctx.r11.s32);
	// stw r9,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r9.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrldi r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r7,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r7.u64);
	// lwz r6,0(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 0);
	// stw r6,0(r18)
	REX_STORE_U32(r18.u32 + 0, ctx.r6.u32);
	// stw r29,0(r17)
	REX_STORE_U32(r17.u32 + 0, r29.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ea8
	return;
loc_822F393C:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ea8
	return;
}

DEFINE_REX_FUNC(sub_82305308) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82305310;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82305438
	if (ctx.cr6.eq) goto loc_82305438;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82305438
	if (ctx.cr6.lt) goto loc_82305438;
	// lwz r11,472(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82305438
	if (!ctx.cr6.eq) goto loc_82305438;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82320728
	ctx.lr = 0x82305348;
	sub_82320728(ctx, base);
	// lwz r10,488(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 488);
	// lwz r9,484(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 484);
	// li r29,3
	r29.s64 = 3;
	// li r28,1
	r28.s64 = 1;
	// lwz r11,336(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 336);
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r28,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r10,452(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 452);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// blt cr6,0x82305388
	if (ctx.cr6.lt) goto loc_82305388;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_82305388:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lhz r9,110(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 110);
	// stw r9,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// bl 0x82320670
	ctx.lr = 0x823053A8;
	sub_82320670(ctx, base);
	// lwz r8,624(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 624);
	// lwz r7,496(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 496);
	// lwz r6,492(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 492);
	// stw r28,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r28.u32);
	// stw r29,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// stw r8,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// stw r7,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// stw r6,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// stw r29,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r29.u32);
	// stw r28,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, r28.u32);
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823053f0
	if (ctx.cr6.eq) goto loc_823053F0;
	// bl 0x82320878
	ctx.lr = 0x823053E0;
	sub_82320878(ctx, base);
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// bl 0x823143d0
	ctx.lr = 0x823053E8;
	sub_823143D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,568(r31)
	REX_STORE_U32(r31.u32 + 568, ctx.r11.u32);
loc_823053F0:
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x823143c0
	ctx.lr = 0x823053F8;
	sub_823143C0(ctx, base);
	// stw r3,568(r31)
	REX_STORE_U32(r31.u32 + 568, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82305414
	if (!ctx.cr6.eq) goto loc_82305414;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822d4ed8
	return;
loc_82305414:
	// bl 0x82320770
	ctx.lr = 0x82305418;
	sub_82320770(ctx, base);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82320e10
	ctx.lr = 0x8230542C;
	sub_82320E10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82305438
	if (ctx.cr6.lt) goto loc_82305438;
	// stw r28,472(r30)
	REX_STORE_U32(r30.u32 + 472, r28.u32);
loc_82305438:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8230BC78) {
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
	ctx.lr = 0x8230BC80;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,28(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r29,0
	r29.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stb r29,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// lwz r9,48(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 48);
	// ld r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 8);
	// ld r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpld cr6,r8,r10
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x8230bd00
	if (!ctx.cr6.gt) goto loc_8230BD00;
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// subf r11,r7,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r7.u64;
	// lwz r5,20(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// add r31,r11,r9
	r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8230BCE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230bf50
	if (ctx.cr6.lt) goto loc_8230BF50;
	// ld r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 8);
	// clrldi r11,r31,32
	ctx.r11.u64 = r31.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r11.u64);
loc_8230BD00:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230BD18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230bf50
	if (ctx.cr6.lt) goto loc_8230BF50;
	// lwz r31,52(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 52);
	// li r28,2
	r28.s64 = 2;
	// lwz r27,48(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 48);
	// cmplwi cr6,r25,2
	ctx.cr6.compare<uint32_t>(r25.u32, 2, ctx.xer);
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// stw r29,80(r31)
	REX_STORE_U32(r31.u32 + 80, r29.u32);
	// stw r29,84(r31)
	REX_STORE_U32(r31.u32 + 84, r29.u32);
	// stw r29,88(r31)
	REX_STORE_U32(r31.u32 + 88, r29.u32);
	// stw r29,60(r31)
	REX_STORE_U32(r31.u32 + 60, r29.u32);
	// stw r29,64(r31)
	REX_STORE_U32(r31.u32 + 64, r29.u32);
	// stw r29,68(r31)
	REX_STORE_U32(r31.u32 + 68, r29.u32);
	// stw r29,72(r31)
	REX_STORE_U32(r31.u32 + 72, r29.u32);
	// bge cr6,0x8230bd64
	if (!ctx.cr6.lt) goto loc_8230BD64;
loc_8230BD54:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,24
	ctx.r3.u64 = ctx.r3.u64 | 24;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec8
	return;
loc_8230BD64:
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82307660
	ctx.lr = 0x8230BD7C;
	sub_82307660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230bf50
	if (ctx.cr6.lt) goto loc_8230BF50;
	// lwz r10,12(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 12);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// rlwinm r4,r11,25,7,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// clrlwi r8,r11,25
	ctx.r8.u64 = ctx.r11.u32 & 0x7F;
	// stw r4,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r10,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r10.u16);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r8,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r8.u8);
	// bl 0x82307660
	ctx.lr = 0x8230BDB8;
	sub_82307660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230bf50
	if (ctx.cr6.lt) goto loc_8230BF50;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 4);
	// stb r11,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r11.u8);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r3,128(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 128);
	// bl 0x82306810
	ctx.lr = 0x8230BDDC;
	sub_82306810(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230bf50
	if (ctx.cr6.lt) goto loc_8230BF50;
	// lbz r11,25(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 25);
	// li r24,1
	r24.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8230be84
	if (ctx.cr6.eq) goto loc_8230BE84;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8230be48
	if (ctx.cr6.eq) goto loc_8230BE48;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8230bebc
	if (!ctx.cr6.eq) goto loc_8230BEBC;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// cmplwi cr6,r25,6
	ctx.cr6.compare<uint32_t>(r25.u32, 6, ctx.xer);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// blt cr6,0x8230bd54
	if (ctx.cr6.lt) goto loc_8230BD54;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r28,6
	r28.s64 = 6;
	// bl 0x823078f0
	ctx.lr = 0x8230BE34;
	sub_823078F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230bf50
	if (ctx.cr6.lt) goto loc_8230BF50;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x8230bebc
	goto loc_8230BEBC;
loc_8230BE48:
	// sth r29,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, r29.u16);
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(r25.u32, 4, ctx.xer);
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// blt cr6,0x8230bd54
	if (ctx.cr6.lt) goto loc_8230BD54;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r28,4
	r28.s64 = 4;
	// bl 0x82307770
	ctx.lr = 0x8230BE74;
	sub_82307770(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230bf50
	if (ctx.cr6.lt) goto loc_8230BF50;
	// lhz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// b 0x8230beb8
	goto loc_8230BEB8;
loc_8230BE84:
	// cmplwi cr6,r25,3
	ctx.cr6.compare<uint32_t>(r25.u32, 3, ctx.xer);
	// stw r24,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// blt cr6,0x8230bd54
	if (ctx.cr6.lt) goto loc_8230BD54;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r28,3
	r28.s64 = 3;
	// bl 0x82307660
	ctx.lr = 0x8230BEAC;
	sub_82307660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230bf50
	if (ctx.cr6.lt) goto loc_8230BF50;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
loc_8230BEB8:
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_8230BEBC:
	// lbz r11,26(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 26);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8230bef0
	if (ctx.cr6.eq) goto loc_8230BEF0;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8230bee4
	if (ctx.cr6.eq) goto loc_8230BEE4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8230befc
	if (!ctx.cr6.eq) goto loc_8230BEFC;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8230bef8
	goto loc_8230BEF8;
loc_8230BEE4:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x8230bef8
	goto loc_8230BEF8;
loc_8230BEF0:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8230BEF8:
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
loc_8230BEFC:
	// lbz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 24);
	// addi r30,r28,1
	r30.s64 = r28.s64 + 1;
	// stw r24,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// bgt cr6,0x8230bd54
	if (ctx.cr6.gt) goto loc_8230BD54;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82307660
	ctx.lr = 0x8230BF30;
	sub_82307660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230bf50
	if (ctx.cr6.lt) goto loc_8230BF50;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r9,80(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stb r11,6(r31)
	REX_STORE_U8(r31.u32 + 6, ctx.r11.u8);
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
loc_8230BF50:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_823134B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823134B8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r29,0
	r29.s64 = 0;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823134e4
	if (!ctx.cr6.eq) goto loc_823134E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
loc_823134E4:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82313558
	if (ctx.cr6.eq) goto loc_82313558;
loc_823134F4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,31
	ctx.r4.s64 = 31;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r29,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, r29.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r8,44
	ctx.r5.s64 = ctx.r8.s64 + 44;
	// bl 0x822f94e8
	ctx.lr = 0x82313524;
	sub_822F94E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82313584
	if (ctx.cr6.lt) goto loc_82313584;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x822f94e8
	ctx.lr = 0x8231353C;
	sub_822F94E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82313584
	if (ctx.cr6.lt) goto loc_82313584;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823134f4
	if (!ctx.cr6.eq) goto loc_823134F4;
loc_82313558:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x822f94e8
	ctx.lr = 0x82313568;
	sub_822F94E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82313584
	if (ctx.cr6.lt) goto loc_82313584;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_82313584:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82315BF8) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82315CB0) {
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
	// bl 0x823143c0
	ctx.lr = 0x82315CC8;
	sub_823143C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82315ce8
	if (!ctx.cr6.eq) goto loc_82315CE8;
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
loc_82315CE8:
	// li r5,824
	ctx.r5.s64 = 824;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5870
	ctx.lr = 0x82315CF8;
	sub_822D5870(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,1996(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// li r6,9
	ctx.r6.s64 = 9;
	// li r5,511
	ctx.r5.s64 = 511;
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f13,16644(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16644);
	ctx.f13.f64 = double(temp.f32);
	// li r3,61
	ctx.r3.s64 = 61;
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f0,300(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 300, temp.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stfs f13,292(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 292, temp.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// li r7,64
	ctx.r7.s64 = 64;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
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
	// stw r6,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r6.u32);
	// stw r5,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r5.u32);
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
	// stw r4,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// stw r9,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r9.u32);
	// sth r9,110(r31)
	REX_STORE_U16(r31.u32 + 110, ctx.r9.u16);
	// stw r3,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// sth r8,108(r31)
	REX_STORE_U16(r31.u32 + 108, ctx.r8.u16);
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// stw r10,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r10.u32);
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
	// stw r7,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r7.u32);
	// stfs f0,396(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 396, temp.u32);
	// stw r11,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r11.u32);
	// lis r6,-32205
	ctx.r6.s64 = -2110586880;
	// stw r11,784(r31)
	REX_STORE_U32(r31.u32 + 784, ctx.r11.u32);
	// lis r5,-32186
	ctx.r5.s64 = -2109341696;
	// stw r11,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r11.u32);
	// addi r4,r6,-28040
	ctx.r4.s64 = ctx.r6.s64 + -28040;
	// stw r11,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r11.u32);
	// lis r3,-32205
	ctx.r3.s64 = -2110586880;
	// stw r11,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r11.u32);
	// addi r9,r5,9976
	ctx.r9.s64 = ctx.r5.s64 + 9976;
	// stw r11,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r11.u32);
	// lis r8,-32205
	ctx.r8.s64 = -2110586880;
	// stw r11,308(r31)
	REX_STORE_U32(r31.u32 + 308, ctx.r11.u32);
	// addi r7,r3,-21536
	ctx.r7.s64 = ctx.r3.s64 + -21536;
	// stw r11,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r11.u32);
	// addi r6,r8,-22728
	ctx.r6.s64 = ctx.r8.s64 + -22728;
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
	// stw r4,476(r31)
	REX_STORE_U32(r31.u32 + 476, ctx.r4.u32);
	// stw r11,480(r31)
	REX_STORE_U32(r31.u32 + 480, ctx.r11.u32);
	// stw r11,484(r31)
	REX_STORE_U32(r31.u32 + 484, ctx.r11.u32);
	// stw r9,488(r31)
	REX_STORE_U32(r31.u32 + 488, ctx.r9.u32);
	// stw r11,492(r31)
	REX_STORE_U32(r31.u32 + 492, ctx.r11.u32);
	// stw r7,496(r31)
	REX_STORE_U32(r31.u32 + 496, ctx.r7.u32);
	// stw r6,516(r31)
	REX_STORE_U32(r31.u32 + 516, ctx.r6.u32);
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

DEFINE_REX_FUNC(sub_82327B08) {
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
	ctx.lr = 0x82327B10;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// li r30,0
	r30.s64 = 0;
	// lwz r9,36(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r24,4(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r31,0
	r31.s64 = 0;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,-212(r1)
	REX_STORE_U32(ctx.r1.u32 + -212, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,-196(r1)
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r8.u32);
	// li r28,0
	r28.s64 = 0;
	// stw r31,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,-200(r1)
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r7.u32);
	// li r29,0
	r29.s64 = 0;
	// stw r4,-224(r1)
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r4.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r28,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, r28.u32);
	// li r27,0
	r27.s64 = 0;
	// stw r5,-228(r1)
	REX_STORE_U32(ctx.r1.u32 + -228, ctx.r5.u32);
	// li r26,0
	r26.s64 = 0;
	// stw r29,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, r29.u32);
	// li r25,0
	r25.s64 = 0;
	// stw r10,-232(r1)
	REX_STORE_U32(ctx.r1.u32 + -232, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r6,-188(r1)
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r6.u32);
	// stw r27,-184(r1)
	REX_STORE_U32(ctx.r1.u32 + -184, r27.u32);
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(r24.s32, 2, ctx.xer);
	// stw r26,-180(r1)
	REX_STORE_U32(ctx.r1.u32 + -180, r26.u32);
	// stw r25,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, r25.u32);
	// stw r9,-204(r1)
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r9.u32);
	// blt cr6,0x82327de0
	if (ctx.cr6.lt) goto loc_82327DE0;
	// addi r9,r24,-1
	ctx.r9.s64 = r24.s64 + -1;
	// stw r9,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r9.u32);
loc_82327BA8:
	// lhz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// lhz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// lhz r28,10(r10)
	r28.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// lhz r27,8(r10)
	r27.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// mullw r8,r7,r5
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// lhz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r26,14(r10)
	r26.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// stw r8,-236(r1)
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r8.u32);
	// lhz r25,12(r10)
	r25.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// lhz r14,26(r10)
	r14.u64 = REX_LOAD_U16(ctx.r10.u32 + 26);
	// lhz r4,6(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lhz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r8,22(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 22);
	// lhz r31,20(r10)
	r31.u64 = REX_LOAD_U16(ctx.r10.u32 + 20);
	// lhz r24,18(r10)
	r24.u64 = REX_LOAD_U16(ctx.r10.u32 + 18);
	// lhz r23,16(r10)
	r23.u64 = REX_LOAD_U16(ctx.r10.u32 + 16);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lhz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lwz r10,-228(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r22,r5
	r22.s64 = ctx.r5.s16;
	// lhz r29,20(r11)
	r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// mullw r5,r9,r7
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// lwz r9,-224(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// lhz r6,6(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r30,22(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 22);
	// stw r10,-224(r1)
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r10.u32);
	// lhz r21,10(r11)
	r21.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// stw r9,-228(r1)
	REX_STORE_U32(ctx.r1.u32 + -228, ctx.r9.u32);
	// lhz r19,14(r11)
	r19.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lhz r20,8(r11)
	r20.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lwz r7,-236(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// lhz r18,12(r11)
	r18.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r17,r29
	r17.s64 = r29.s16;
	// lwz r29,-232(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhz r16,18(r11)
	r16.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhz r15,16(r11)
	r15.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// mullw r6,r4,r6
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// sth r14,-240(r1)
	REX_STORE_U16(ctx.r1.u32 + -240, r14.u16);
	// lhz r14,26(r11)
	r14.u64 = REX_LOAD_U16(ctx.r11.u32 + 26);
	// lhz r4,24(r29)
	ctx.r4.u64 = REX_LOAD_U16(r29.u32 + 24);
	// std r11,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r11.u64);
	// lhz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 24);
	// sth r4,-236(r1)
	REX_STORE_U16(ctx.r1.u32 + -236, ctx.r4.u16);
	// extsh r30,r30
	r30.s64 = r30.s16;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// mullw r10,r8,r30
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// mullw r29,r3,r22
	r29.s64 = int64_t(ctx.r3.s32) * int64_t(r22.s32);
	// mullw r4,r31,r17
	ctx.r4.s64 = int64_t(r31.s32) * int64_t(r17.s32);
	// extsh r3,r28
	ctx.r3.s64 = r28.s16;
	// extsh r8,r21
	ctx.r8.s64 = r21.s16;
	// extsh r31,r27
	r31.s64 = r27.s16;
	// extsh r28,r26
	r28.s64 = r26.s16;
	// extsh r27,r19
	r27.s64 = r19.s16;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// mullw r7,r3,r8
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// mullw r8,r28,r27
	ctx.r8.s64 = int64_t(r28.s32) * int64_t(r27.s32);
	// lwz r28,-224(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// extsh r26,r25
	r26.s64 = r25.s16;
	// extsh r30,r20
	r30.s64 = r20.s16;
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + r28.u64;
	// lwz r28,-228(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// extsh r25,r18
	r25.s64 = r18.s16;
	// extsh r24,r24
	r24.s64 = r24.s16;
	// extsh r22,r16
	r22.s64 = r16.s16;
	// extsh r23,r23
	r23.s64 = r23.s16;
	// extsh r21,r15
	r21.s64 = r15.s16;
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + r29.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mullw r30,r31,r30
	r30.s64 = int64_t(r31.s32) * int64_t(r30.s32);
	// mullw r31,r26,r25
	r31.s64 = int64_t(r26.s32) * int64_t(r25.s32);
	// mullw r9,r24,r22
	ctx.r9.s64 = int64_t(r24.s32) * int64_t(r22.s32);
	// mullw r3,r23,r21
	ctx.r3.s64 = int64_t(r23.s32) * int64_t(r21.s32);
	// add r4,r6,r28
	ctx.r4.u64 = ctx.r6.u64 + r28.u64;
	// lhz r28,-240(r1)
	r28.u64 = REX_LOAD_U16(ctx.r1.u32 + -240);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// lwz r6,-220(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// extsh r3,r28
	ctx.r3.s64 = r28.s16;
	// lhz r28,-236(r1)
	r28.u64 = REX_LOAD_U16(ctx.r1.u32 + -236);
	// sth r11,-236(r1)
	REX_STORE_U16(ctx.r1.u32 + -236, ctx.r11.u16);
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + r30.u64;
	// extsh r31,r28
	r31.s64 = r28.s16;
	// ld r11,-168(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lhz r28,-236(r1)
	r28.u64 = REX_LOAD_U16(ctx.r1.u32 + -236);
	// extsh r29,r28
	r29.s64 = r28.s16;
	// add r28,r10,r6
	r28.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r10,-232(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// lhz r30,30(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// mullw r6,r31,r29
	ctx.r6.s64 = int64_t(r31.s32) * int64_t(r29.s32);
	// lhz r26,28(r11)
	r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// lwz r29,-212(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// lwz r24,-208(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// lhz r31,30(r10)
	r31.u64 = REX_LOAD_U16(ctx.r10.u32 + 30);
	// lhz r23,28(r10)
	r23.u64 = REX_LOAD_U16(ctx.r10.u32 + 28);
	// lwz r22,-204(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// lwz r21,-200(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// lwz r20,-196(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// lwz r19,-192(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// extsh r25,r30
	r25.s64 = r30.s16;
	// lwz r30,-216(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// extsh r18,r31
	r18.s64 = r31.s16;
	// stw r5,-228(r1)
	REX_STORE_U32(ctx.r1.u32 + -228, ctx.r5.u32);
	// add r31,r7,r30
	r31.u64 = ctx.r7.u64 + r30.u64;
	// stw r4,-224(r1)
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r4.u32);
	// extsh r27,r14
	r27.s64 = r14.s16;
	// stw r28,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, r28.u32);
	// extsh r23,r23
	r23.s64 = r23.s16;
	// stw r31,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, r31.u32);
	// extsh r26,r26
	r26.s64 = r26.s16;
	// add r30,r8,r29
	r30.u64 = ctx.r8.u64 + r29.u64;
	// add r29,r9,r24
	r29.u64 = ctx.r9.u64 + r24.u64;
	// mullw r9,r18,r25
	ctx.r9.s64 = int64_t(r18.s32) * int64_t(r25.s32);
	// stw r30,-212(r1)
	REX_STORE_U32(ctx.r1.u32 + -212, r30.u32);
	// stw r29,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, r29.u32);
	// mullw r7,r3,r27
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(r27.s32);
	// mullw r8,r23,r26
	ctx.r8.s64 = int64_t(r23.s32) * int64_t(r26.s32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r9,r22,2
	ctx.r9.s64 = r22.s64 + 2;
	// add r7,r7,r21
	ctx.r7.u64 = ctx.r7.u64 + r21.u64;
	// add r8,r8,r20
	ctx.r8.u64 = ctx.r8.u64 + r20.u64;
	// stw r9,-204(r1)
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r9.u32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stw r7,-200(r1)
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r7.u32);
	// stw r8,-196(r1)
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r8.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r10,-232(r1)
	REX_STORE_U32(ctx.r1.u32 + -232, ctx.r10.u32);
	// cmpw cr6,r9,r19
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r19.s32, ctx.xer);
	// blt cr6,0x82327ba8
	if (ctx.cr6.lt) goto loc_82327BA8;
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r6,-188(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// lwz r27,-184(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// lwz r26,-180(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// lwz r25,-176(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
loc_82327DE0:
	// lwz r24,4(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r9,r24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r24.s32, ctx.xer);
	// bge cr6,0x82327e9c
	if (!ctx.cr6.lt) goto loc_82327E9C;
	// lhz r25,2(r10)
	r25.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r27,4(r10)
	r27.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// extsh r22,r25
	r22.s64 = r25.s16;
	// lhz r25,0(r11)
	r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r26,4(r11)
	r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r27,r27
	r27.s64 = r27.s16;
	// extsh r19,r25
	r19.s64 = r25.s16;
	// lhz r25,8(r10)
	r25.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// lhz r9,6(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r26,r26
	r26.s64 = r26.s16;
	// lhz r6,6(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r16,r25
	r16.s64 = r25.s16;
	// lhz r23,0(r10)
	r23.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r21,10(r10)
	r21.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhz r17,14(r10)
	r17.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// extsh r23,r23
	r23.s64 = r23.s16;
	// lhz r25,14(r11)
	r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r21,r21
	r21.s64 = r21.s16;
	// lhz r24,2(r11)
	r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r17,r17
	r17.s64 = r17.s16;
	// lhz r20,10(r11)
	r20.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r15,r25
	r15.s64 = r25.s16;
	// lhz r18,8(r11)
	r18.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// extsh r24,r24
	r24.s64 = r24.s16;
	// lhz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// mullw r25,r27,r26
	r25.s64 = int64_t(r27.s32) * int64_t(r26.s32);
	// lhz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r14,r11
	r14.s64 = ctx.r11.s16;
	// extsh r20,r20
	r20.s64 = r20.s16;
	// extsh r18,r18
	r18.s64 = r18.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mullw r27,r9,r6
	r27.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// mullw r6,r22,r24
	ctx.r6.s64 = int64_t(r22.s32) * int64_t(r24.s32);
	// mullw r24,r23,r19
	r24.s64 = int64_t(r23.s32) * int64_t(r19.s32);
	// mullw r9,r21,r20
	ctx.r9.s64 = int64_t(r21.s32) * int64_t(r20.s32);
	// mullw r26,r16,r18
	r26.s64 = int64_t(r16.s32) * int64_t(r18.s32);
	// mullw r11,r17,r15
	ctx.r11.s64 = int64_t(r17.s32) * int64_t(r15.s32);
	// mullw r10,r10,r14
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r14.s32);
	// add r27,r27,r25
	r27.u64 = r27.u64 + r25.u64;
	// add r6,r6,r24
	ctx.r6.u64 = ctx.r6.u64 + r24.u64;
	// add r26,r9,r26
	r26.u64 = ctx.r9.u64 + r26.u64;
	// add r25,r11,r10
	r25.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82327E9C:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// sraw r3,r9,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r3.s64 = ctx.r9.s32 >> temp.u32;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8233EEE0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,32(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r6,r10,10
	ctx.r6.s64 = ctx.r10.s64 + 10;
	// mullw r10,r8,r7
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8233FAE8) {
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
	ctx.lr = 0x8233FAF0;
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x822d9828
	ctx.lr = 0x8233FB08;
	sub_822D9828(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233fbf0
	if (ctx.cr6.eq) goto loc_8233FBF0;
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
loc_8233FB28:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8233fb28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8233FB28;
	// addi r27,r29,4
	r27.s64 = r29.s64 + 4;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823a6710
	ctx.lr = 0x8233FB40;
	sub_823A6710(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233fbe8
	if (ctx.cr6.eq) goto loc_8233FBE8;
	// addi r26,r29,16
	r26.s64 = r29.s64 + 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823a6710
	ctx.lr = 0x8233FB58;
	sub_823A6710(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233fbe0
	if (ctx.cr6.eq) goto loc_8233FBE0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8233d448
	ctx.lr = 0x8233FB6C;
	sub_8233D448(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233fb84
	if (ctx.cr6.eq) goto loc_8233FB84;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x8233FB84;
	sub_822D5870(ctx, base);
loc_8233FB84:
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8233fbd8
	if (ctx.cr6.eq) goto loc_8233FBD8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d440c
	ctx.lr = 0x8233FB98;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233fbd8
	if (ctx.cr6.eq) goto loc_8233FBD8;
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
	ctx.lr = 0x8233FBBC;
	sub_8233FDB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233fbfc
	if (!ctx.cr6.eq) goto loc_8233FBFC;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233fbd8
	if (ctx.cr6.eq) goto loc_8233FBD8;
	// bl 0x8233d4c0
	ctx.lr = 0x8233FBD4;
	sub_8233D4C0(ctx, base);
	// stw r23,0(r29)
	REX_STORE_U32(r29.u32 + 0, r23.u32);
loc_8233FBD8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823a6718
	ctx.lr = 0x8233FBE0;
	sub_823A6718(ctx, base);
loc_8233FBE0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823a6718
	ctx.lr = 0x8233FBE8;
	sub_823A6718(ctx, base);
loc_8233FBE8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d98f0
	ctx.lr = 0x8233FBF0;
	sub_822D98F0(ctx, base);
loc_8233FBF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
loc_8233FBFC:
	// mr r24,r23
	r24.u64 = r23.u64;
	// stw r30,36(r29)
	REX_STORE_U32(r29.u32 + 36, r30.u32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// stw r28,32(r29)
	REX_STORE_U32(r29.u32 + 32, r28.u32);
	// ble cr6,0x8233fd18
	if (!ctx.cr6.gt) goto loc_8233FD18;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r25,r11,15387
	r25.s64 = ctx.r11.s64 + 15387;
loc_8233FC18:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8233ea50
	ctx.lr = 0x8233FC24;
	sub_8233EA50(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8233fd08
	if (ctx.cr6.lt) goto loc_8233FD08;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8233ea50
	ctx.lr = 0x8233FC3C;
	sub_8233EA50(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8233fce8
	if (ctx.cr6.lt) goto loc_8233FCE8;
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r4,32(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8233ff60
	ctx.lr = 0x8233FC5C;
	sub_8233FF60(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233fcc8
	if (ctx.cr6.eq) goto loc_8233FCC8;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8233fc78
	if (ctx.cr6.lt) goto loc_8233FC78;
	// bl 0x823ce368
	ctx.lr = 0x8233FC78;
	sub_823CE368(ctx, base);
loc_8233FC78:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8233fc90
	if (!ctx.cr6.lt) goto loc_8233FC90;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r31.u32);
loc_8233FC90:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8233fca0
	if (ctx.cr6.lt) goto loc_8233FCA0;
	// bl 0x823ce368
	ctx.lr = 0x8233FCA0;
	sub_823CE368(ctx, base);
loc_8233FCA0:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8233fcb8
	if (!ctx.cr6.lt) goto loc_8233FCB8;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r23,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r23.u32);
loc_8233FCB8:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// cmpw cr6,r24,r22
	ctx.cr6.compare<int32_t>(r24.s32, r22.s32, ctx.xer);
	// blt cr6,0x8233fc18
	if (ctx.cr6.lt) goto loc_8233FC18;
	// b 0x8233fd08
	goto loc_8233FD08;
loc_8233FCC8:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233fce8
	if (ctx.cr6.eq) goto loc_8233FCE8;
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
loc_8233FCE8:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233fd08
	if (ctx.cr6.eq) goto loc_8233FD08;
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
loc_8233FD08:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x8233fd18
	if (!ctx.cr6.gt) goto loc_8233FD18;
	// stw r23,28(r29)
	REX_STORE_U32(r29.u32 + 28, r23.u32);
	// b 0x8233fd20
	goto loc_8233FD20;
loc_8233FD18:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,28(r29)
	REX_STORE_U32(r29.u32 + 28, ctx.r11.u32);
loc_8233FD20:
	// cmpw cr6,r24,r22
	ctx.cr6.compare<int32_t>(r24.s32, r22.s32, ctx.xer);
	// bge cr6,0x8233fd34
	if (!ctx.cr6.lt) goto loc_8233FD34;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ec80
	ctx.lr = 0x8233FD30;
	sub_8233EC80(ctx, base);
	// mr r29,r23
	r29.u64 = r23.u64;
loc_8233FD34:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82353288) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e50
	ctx.lr = 0x82353290;
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -176, f29.u64);
	// stfd f30,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823532cc
	if (!ctx.cr6.eq) goto loc_823532CC;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f29,-176(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822d4ea0
	return;
loc_823532CC:
	// fneg f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = f29.u64 ^ 0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 20);
	// lwz r9,15408(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 15408);
	// lwz r8,15412(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 15412);
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// lwz r6,15392(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 15392);
	// lfd f31,31912(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 31912);
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// srawi r28,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	r28.s64 = ctx.r6.s32 >> 1;
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r28,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r28.u32);
	// fsel f1,f0,f0,f31
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : f31.f64;
	// bl 0x822d60f0
	ctx.lr = 0x82353308;
	sub_822D60F0(ctx, base);
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.f13.u64);
	// lwz r5,164(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// lwz r3,15392(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 15392);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r11.u64);
	// lfd f12,160(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f13,f12
	ctx.f13.f64 = double(ctx.f12.s64);
	// lfd f11,152(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f0,f11
	ctx.f0.f64 = double(ctx.f11.s64);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82353344
	if (!ctx.cr6.lt) goto loc_82353344;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82353344:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x822d6130
	ctx.lr = 0x8235334C;
	sub_822D6130(ctx, base);
	// lwz r11,15392(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 15392);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 20);
	// stfd f0,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.f0.u64);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r29,164(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r9.u64);
	// lfd f13,160(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// std r8,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r8.u64);
	// lfd f12,160(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f0,f13
	ctx.f0.f64 = double(ctx.f13.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fsub f13,f11,f29
	ctx.f13.f64 = ctx.f11.f64 - f29.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82353390
	if (ctx.cr6.lt) goto loc_82353390;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82353390:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x822d6130
	ctx.lr = 0x82353398;
	sub_822D6130(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.f0.u64);
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r10.u64);
	// lfd f13,160(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fsel f1,f12,f12,f31
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : f31.f64;
	// bl 0x822d60f0
	ctx.lr = 0x823533BC;
	sub_822D60F0(ctx, base);
	// fneg f11,f30
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = f30.u64 ^ 0x8000000000000000;
	// fctiwz f10,f1
	ctx.f10.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f10,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.f10.u64);
	// lwz r30,164(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// fsel f1,f11,f11,f31
	ctx.f1.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : f31.f64;
	// bl 0x822d60f0
	ctx.lr = 0x823533D4;
	sub_822D60F0(ctx, base);
	// fctiwz f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f9,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.f9.u64);
	// lwz r9,164(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// lwz r7,15396(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 15396);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// lfd f8,160(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f0,f8
	ctx.f0.f64 = double(ctx.f8.s64);
	// lfd f7,152(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f13,f7
	ctx.f13.f64 = double(ctx.f7.s64);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82353410
	if (ctx.cr6.lt) goto loc_82353410;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82353410:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x822d6130
	ctx.lr = 0x82353418;
	sub_822D6130(ctx, base);
	// lwz r11,15396(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 15396);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lwz r10,15388(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 15388);
	// stfd f0,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.f0.u64);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r31,164(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r9.u64);
	// lfd f13,160(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// std r8,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r8.u64);
	// lfd f12,160(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fsub f0,f11,f30
	ctx.f0.f64 = ctx.f11.f64 - f30.f64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8235345c
	if (!ctx.cr6.lt) goto loc_8235345C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8235345C:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x822d6130
	ctx.lr = 0x82353464;
	sub_822D6130(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.f0.u64);
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// addi r10,r31,1
	ctx.r10.s64 = r31.s64 + 1;
	// rlwinm r31,r11,0,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r14,r30,0,0,30
	r14.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// rlwinm r15,r10,0,0,30
	r15.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r14,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r14.u32);
	// lwz r9,164(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r8.u64);
	// lfd f13,160(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fsel f1,f12,f12,f31
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : f31.f64;
	// bl 0x822d60f0
	ctx.lr = 0x823534A4;
	sub_822D60F0(ctx, base);
	// fctiwz f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f11,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.f11.u64);
	// lwz r7,164(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// rlwinm r29,r7,0,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// bge cr6,0x823534c8
	if (!ctx.cr6.lt) goto loc_823534C8;
	// li r29,2
	r29.s64 = 2;
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r29.u32);
loc_823534C8:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r4,15420(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 15420);
	// addi r11,r14,-2
	ctx.r11.s64 = r14.s64 + -2;
	// lwz r5,15424(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 15424);
	// srawi r6,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	ctx.r6.s64 = r31.s32 >> 1;
	// lwz r18,15416(r26)
	r18.u64 = REX_LOAD_U32(r26.u32 + 15416);
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// srawi r7,r14,1
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x1) != 0);
	ctx.r7.s64 = r14.s32 >> 1;
	// stw r6,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// lfd f0,-28736(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -28736);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// fmul f13,f29,f0
	ctx.f13.f64 = f29.f64 * ctx.f0.f64;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// fmul f12,f30,f0
	ctx.f12.f64 = f30.f64 * ctx.f0.f64;
	// and r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 & ctx.r11.u64;
	// subf r9,r31,r14
	ctx.r9.u64 = r14.u64 - r31.u64;
	// stw r7,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// stw r3,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// subf r8,r6,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r6.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// rlwinm r30,r15,7,0,24
	r30.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r27,r31,7,0,24
	r27.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 7) & 0xFFFFFF80;
	// li r3,0
	ctx.r3.s64 = 0;
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.f11.u64);
	// fctiwz f10,f12
	ctx.f10.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// lwz r7,164(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// stfd f10,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.f10.u64);
	// subf r7,r7,r27
	ctx.r7.u64 = r27.u64 - ctx.r7.u64;
	// srawi r31,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	r31.s64 = ctx.r7.s32 >> 7;
	// clrlwi r19,r7,25
	r19.u64 = ctx.r7.u32 & 0x7F;
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// lwz r6,164(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// subf r6,r6,r30
	ctx.r6.u64 = r30.u64 - ctx.r6.u64;
	// rlwinm r11,r6,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 & ctx.r6.u64;
	// srawi r11,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 7;
	// srawi r31,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	r31.s64 = ctx.r6.s32 >> 8;
	// srawi r30,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	r30.s64 = ctx.r6.s32 >> 1;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// srawi r11,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 8;
	// stw r31,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r31.u32);
	// srawi r7,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// clrlwi r20,r6,25
	r20.u64 = ctx.r6.u32 & 0x7F;
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// clrlwi r24,r7,25
	r24.u64 = ctx.r7.u32 & 0x7F;
	// and r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 & ctx.r10.u64;
	// subfic r6,r24,128
	ctx.xer.ca = r24.u32 <= 128;
	ctx.r6.u64 = static_cast<uint64_t>(128) - r24.u64;
	// subfic r9,r20,128
	ctx.xer.ca = r20.u32 <= 128;
	ctx.r9.u64 = static_cast<uint64_t>(128) - r20.u64;
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// clrlwi r23,r30,25
	r23.u64 = r30.u32 & 0x7F;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// subf r22,r19,r9
	r22.u64 = ctx.r9.u64 - r19.u64;
	// li r30,128
	r30.s64 = 128;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mullw r17,r24,r23
	r17.s64 = int64_t(r24.s32) * int64_t(r23.s32);
	// subf r25,r23,r6
	r25.u64 = ctx.r6.u64 - r23.u64;
	// mullw r16,r20,r19
	r16.s64 = int64_t(r20.s32) * int64_t(r19.s32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// ble cr6,0x82353670
	if (!ctx.cr6.gt) goto loc_82353670;
loc_823535D4:
	// lwz r10,15392(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 15392);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823535fc
	if (!ctx.cr6.gt) goto loc_823535FC;
	// addi r10,r18,-1
	ctx.r10.s64 = r18.s64 + -1;
loc_823535E8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r3,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r3.u8);
	ctx.r10.u32 = ea;
	// lwz r8,15392(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 15392);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823535e8
	if (ctx.cr6.lt) goto loc_823535E8;
loc_823535FC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x82353620
	if (!ctx.cr6.gt) goto loc_82353620;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// subf r10,r5,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r5.u64;
loc_82353610:
	// stbx r30,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, r30.u8);
	// stb r30,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82353610
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82353610;
loc_82353620:
	// lwz r11,15392(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 15392);
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + r28.u64;
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + r28.u64;
	// add r8,r11,r18
	ctx.r8.u64 = ctx.r11.u64 + r18.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82353658
	if (!ctx.cr6.gt) goto loc_82353658;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
loc_82353644:
	// stbu r3,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r3.u8);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,15392(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 15392);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82353644
	if (ctx.cr6.lt) goto loc_82353644;
loc_82353658:
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// add r18,r11,r8
	r18.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r15
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r15.s32, ctx.xer);
	// blt cr6,0x823535d4
	if (ctx.cr6.lt) goto loc_823535D4;
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
loc_82353670:
	// addi r31,r29,-2
	r31.s64 = r29.s64 + -2;
	// mr r21,r15
	r21.u64 = r15.u64;
	// cmpw cr6,r15,r31
	ctx.cr6.compare<int32_t>(r15.s32, r31.s32, ctx.xer);
	// bge cr6,0x82353d54
	if (!ctx.cr6.lt) goto loc_82353D54;
loc_82353680:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// subf r29,r15,r21
	r29.u64 = r21.u64 - r15.u64;
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 20);
	// mr r31,r18
	r31.u64 = r18.u64;
	// add r9,r29,r11
	ctx.r9.u64 = r29.u64 + ctx.r11.u64;
	// lwz r11,15404(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 15404);
	// lwz r27,96(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// add r30,r11,r8
	r30.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ble cr6,0x823536d4
	if (!ctx.cr6.gt) goto loc_823536D4;
	// addi r11,r18,-1
	ctx.r11.s64 = r18.s64 + -1;
	// li r10,16
	ctx.r10.s64 = 16;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x823536d0
	if (ctx.cr6.eq) goto loc_823536D0;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_823536C8:
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x823536c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823536C8;
loc_823536D0:
	// add r31,r18,r27
	r31.u64 = r18.u64 + r27.u64;
loc_823536D4:
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 20);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// lwz r28,92(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x823537d4
	if (!ctx.cr6.gt) goto loc_823537D4;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x82353714
	if (!ctx.cr6.eq) goto loc_82353714;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x8235374c
	if (!ctx.cr6.eq) goto loc_8235374C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8235370C;
	sub_822D4FA0(ctx, base);
	// add r31,r31,r28
	r31.u64 = r31.u64 + r28.u64;
	// b 0x823537d4
	goto loc_823537D4;
loc_82353714:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// bne cr6,0x82353784
	if (!ctx.cr6.eq) goto loc_82353784;
loc_82353720:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mullw r10,r8,r22
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(r22.s32);
	// mullw r9,r7,r19
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(r19.s32);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r5,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 7;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// stb r4,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r4.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bdnz 0x82353720
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82353720;
	// b 0x823537d4
	goto loc_823537D4;
loc_8235374C:
	// subf r8,r31,r30
	ctx.r8.u64 = r30.u64 - r31.u64;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_82353758:
	// lbzx r9,r8,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + r31.u32);
	// lbzu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mullw r9,r9,r22
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r22.s32);
	// mullw r10,r7,r20
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(r20.s32);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r5,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 7;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// stb r4,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r4.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bdnz 0x82353758
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82353758;
	// b 0x823537d4
	goto loc_823537D4;
loc_82353784:
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzu r5,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// subf r3,r6,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r6.u64;
	// mullw r7,r9,r22
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(r22.s32);
	// subf r8,r4,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r4.u64;
	// mullw r6,r6,r20
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(r20.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r8,r4,r19
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(r19.s32);
	// mullw r5,r9,r16
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(r16.s32);
	// srawi r9,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 7;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r3,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 7;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// stb r9,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r9.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bdnz 0x82353784
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82353784;
loc_823537D4:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82353808
	if (ctx.cr6.gt) goto loc_82353808;
	// cmpw cr6,r11,r14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r14.s32, ctx.xer);
	// bge cr6,0x82353808
	if (!ctx.cr6.lt) goto loc_82353808;
	// subf r9,r11,r14
	ctx.r9.u64 = r14.u64 - ctx.r11.u64;
	// subf r10,r27,r30
	ctx.r10.u64 = r30.u64 - r27.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823537F4:
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r9.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bdnz 0x823537f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823537F4;
loc_82353808:
	// lwz r11,15392(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 15392);
	// cmpw cr6,r14,r11
	ctx.cr6.compare<int32_t>(r14.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82353834
	if (!ctx.cr6.lt) goto loc_82353834;
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
	// addi r10,r31,-1
	ctx.r10.s64 = r31.s64 + -1;
	// li r9,16
	ctx.r9.s64 = 16;
loc_82353820:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// lwz r8,15392(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 15392);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82353820
	if (ctx.cr6.lt) goto loc_82353820;
loc_82353834:
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// srawi r11,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r11.s64 = r29.s32 >> 1;
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,140(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r11,r8,r9
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwz r31,88(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// add r27,r11,r7
	r27.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82353880
	if (!ctx.cr6.gt) goto loc_82353880;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,128
	ctx.r11.s64 = 128;
loc_8235386C:
	// stb r11,0(r30)
	REX_STORE_U8(r30.u32 + 0, ctx.r11.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bdnz 0x8235386c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235386C;
loc_82353880:
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r29,r27,r10
	r29.u64 = r27.u64 + ctx.r10.u64;
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// bne cr6,0x823538e0
	if (!ctx.cr6.eq) goto loc_823538E0;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne cr6,0x8235394c
	if (!ctx.cr6.eq) goto loc_8235394C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82353aa4
	if (!ctx.cr6.gt) goto loc_82353AA4;
	// rotlwi r28,r10,0
	r28.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823538C4;
	sub_822D4FA0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823538D4;
	sub_822D4FA0(ctx, base);
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// add r31,r31,r28
	r31.u64 = r31.u64 + r28.u64;
	// b 0x82353aa4
	goto loc_82353AA4;
loc_823538E0:
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne cr6,0x823539d4
	if (!ctx.cr6.eq) goto loc_823539D4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82353aa4
	if (!ctx.cr6.gt) goto loc_82353AA4;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823538FC:
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mullw r9,r6,r25
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(r25.s32);
	// lbzu r3,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// mullw r8,r4,r24
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(r24.s32);
	// mullw r6,r5,r25
	ctx.r6.s64 = int64_t(ctx.r5.s32) * int64_t(r25.s32);
	// mullw r7,r3,r24
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(r24.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// srawi r7,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 7;
	// srawi r6,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 7;
	// clrlwi r5,r7,24
	ctx.r5.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// stb r5,0(r30)
	REX_STORE_U8(r30.u32 + 0, ctx.r5.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stb r4,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r4.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bdnz 0x823538fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823538FC;
	// b 0x82353aa4
	goto loc_82353AA4;
loc_8235394C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82353aa4
	if (!ctx.cr6.gt) goto loc_82353AA4;
	// lwz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// subf r4,r31,r11
	ctx.r4.u64 = ctx.r11.u64 - r31.u64;
	// lwz r7,108(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r8,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r8.u64;
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subf r5,r8,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r8.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82353980:
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r8,r31,r4
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + ctx.r4.u32);
	// lbzx r3,r5,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// mullw r11,r7,r23
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(r23.s32);
	// lbzu r6,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// mullw r8,r8,r25
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r25.s32);
	// mullw r7,r3,r23
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(r23.s32);
	// mullw r6,r6,r25
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(r25.s32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// srawi r7,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 7;
	// srawi r6,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 7;
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// stb r3,0(r30)
	REX_STORE_U8(r30.u32 + 0, ctx.r3.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bdnz 0x82353980
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82353980;
	// b 0x82353aa4
	goto loc_82353AA4;
loc_823539D4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82353aa4
	if (!ctx.cr6.gt) goto loc_82353AA4;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// subfic r5,r7,1
	ctx.xer.ca = ctx.r7.u32 <= 1;
	ctx.r5.u64 = static_cast<uint64_t>(1) - ctx.r7.u64;
loc_823539F8:
	// lbz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbzx r3,r6,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// mullw r28,r4,r23
	r28.s64 = int64_t(ctx.r4.s32) * int64_t(r23.s32);
	// lbzx r29,r5,r9
	r29.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r4,r4,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r4.u64;
	// mullw r3,r7,r25
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(r25.s32);
	// subf r4,r29,r4
	ctx.r4.u64 = ctx.r4.u64 - r29.u64;
	// mullw r29,r29,r24
	r29.s64 = int64_t(r29.s32) * int64_t(r24.s32);
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r4,r7,r17
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(r17.s32);
	// srawi r7,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 7;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + r29.u64;
	// add r3,r7,r28
	ctx.r3.u64 = ctx.r7.u64 + r28.u64;
	// srawi r7,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 7;
	// stb r7,0(r30)
	REX_STORE_U8(r30.u32 + 0, ctx.r7.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r3,r6,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r28,0(r8)
	r28.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// subf r4,r28,r3
	ctx.r4.u64 = ctx.r3.u64 - r28.u64;
	// lbzx r29,r5,r8
	r29.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// mullw r3,r7,r25
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(r25.s32);
	// subf r4,r29,r4
	ctx.r4.u64 = ctx.r4.u64 - r29.u64;
	// mullw r29,r29,r24
	r29.s64 = int64_t(r29.s32) * int64_t(r24.s32);
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// mullw r28,r28,r23
	r28.s64 = int64_t(r28.s32) * int64_t(r23.s32);
	// mullw r4,r7,r17
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(r17.s32);
	// srawi r7,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 7;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + r29.u64;
	// add r3,r7,r28
	ctx.r3.u64 = ctx.r7.u64 + r28.u64;
	// srawi r7,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 7;
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// stb r4,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r4.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bdnz 0x823539f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823539F8;
	// lwz r14,152(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
loc_82353AA4:
	// lwz r10,124(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82353b00
	if (ctx.cr6.gt) goto loc_82353B00;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82353b00
	if (!ctx.cr6.lt) goto loc_82353B00;
	// subf r6,r11,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r11.u64;
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// subf r10,r10,r27
	ctx.r10.u64 = r27.u64 - ctx.r10.u64;
	// add r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// lwz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
loc_82353ADC:
	// lbzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// stb r9,0(r30)
	REX_STORE_U8(r30.u32 + 0, ctx.r9.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lbzx r5,r11,r8
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r5,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r5.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bdnz 0x82353adc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82353ADC;
loc_82353B00:
	// lwz r8,144(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82353b34
	if (!ctx.cr6.lt) goto loc_82353B34;
	// subf r6,r7,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r7.u64;
	// subf r10,r7,r30
	ctx.r10.u64 = r30.u64 - ctx.r7.u64;
	// subf r9,r7,r31
	ctx.r9.u64 = r31.u64 - ctx.r7.u64;
	// li r7,128
	ctx.r7.s64 = 128;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82353B24:
	// stbx r7,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u8);
	// stbx r7,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82353b24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82353B24;
loc_82353B34:
	// addi r28,r21,1
	r28.s64 = r21.s64 + 1;
	// lwz r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,15392(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 15392);
	// subf r10,r15,r28
	ctx.r10.u64 = r28.u64 - r15.u64;
	// lwz r7,20(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 20);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r29,r11,r18
	r29.u64 = ctx.r11.u64 + r18.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,15404(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 15404);
	// add r3,r6,r8
	ctx.r3.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mullw r11,r5,r7
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r31,r29
	r31.u64 = r29.u64;
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82353bac
	if (!ctx.cr6.gt) goto loc_82353BAC;
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// li r10,16
	ctx.r10.s64 = 16;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82353ba8
	if (ctx.cr6.eq) goto loc_82353BA8;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82353BA0:
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82353ba0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82353BA0;
loc_82353BA8:
	// add r31,r29,r5
	r31.u64 = r29.u64 + ctx.r5.u64;
loc_82353BAC:
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 20);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// bne cr6,0x82353bf4
	if (!ctx.cr6.eq) goto loc_82353BF4;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x82353c38
	if (!ctx.cr6.eq) goto loc_82353C38;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82353cdc
	if (!ctx.cr6.gt) goto loc_82353CDC;
	// rotlwi r27,r11,0
	r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82353BE8;
	sub_822D4FA0(ctx, base);
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// b 0x82353cdc
	goto loc_82353CDC;
loc_82353BF4:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x82353c7c
	if (!ctx.cr6.eq) goto loc_82353C7C;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82353cdc
	if (ctx.cr6.eq) goto loc_82353CDC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82353C0C:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mullw r9,r8,r22
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(r22.s32);
	// mullw r10,r7,r19
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(r19.s32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r4,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 7;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// stb r3,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r3.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bdnz 0x82353c0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82353C0C;
	// b 0x82353cdc
	goto loc_82353CDC;
loc_82353C38:
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82353cdc
	if (ctx.cr6.eq) goto loc_82353CDC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82353C50:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// mullw r9,r9,r22
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r22.s32);
	// mullw r8,r8,r20
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r20.s32);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r6,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 7;
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// stb r4,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r4.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bdnz 0x82353c50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82353C50;
	// b 0x82353cdc
	goto loc_82353CDC;
loc_82353C7C:
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82353cdc
	if (ctx.cr6.eq) goto loc_82353CDC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82353C8C:
	// lbz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzu r3,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r7,r4,r20
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(r20.s32);
	// lbzu r27,1(r11)
	ea = 1 + ctx.r11.u32;
	r27.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// subf r8,r4,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r4.u64;
	// mullw r6,r9,r22
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(r22.s32);
	// subf r8,r27,r8
	ctx.r8.u64 = ctx.r8.u64 - r27.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r8,r27,r19
	ctx.r8.s64 = int64_t(r27.s32) * int64_t(r19.s32);
	// mullw r3,r4,r16
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(r16.s32);
	// srawi r9,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 7;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r8,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 7;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stb r7,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r7.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bdnz 0x82353c8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82353C8C;
loc_82353CDC:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82353d10
	if (ctx.cr6.gt) goto loc_82353D10;
	// cmpw cr6,r11,r14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r14.s32, ctx.xer);
	// bge cr6,0x82353d10
	if (!ctx.cr6.lt) goto loc_82353D10;
	// subf r9,r11,r14
	ctx.r9.u64 = r14.u64 - ctx.r11.u64;
	// subf r10,r5,r30
	ctx.r10.u64 = r30.u64 - ctx.r5.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82353CFC:
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r9.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bdnz 0x82353cfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82353CFC;
loc_82353D10:
	// lwz r11,15392(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 15392);
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// cmpw cr6,r14,r11
	ctx.cr6.compare<int32_t>(r14.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82353d3c
	if (!ctx.cr6.lt) goto loc_82353D3C;
	// addi r9,r31,-1
	ctx.r9.s64 = r31.s64 + -1;
	// li r8,16
	ctx.r8.s64 = 16;
loc_82353D28:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// lwz r11,15392(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 15392);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82353d28
	if (ctx.cr6.lt) goto loc_82353D28;
loc_82353D3C:
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r21,r28,1
	r21.s64 = r28.s64 + 1;
	// add r18,r11,r29
	r18.u64 = ctx.r11.u64 + r29.u64;
	// addi r31,r10,-2
	r31.s64 = ctx.r10.s64 + -2;
	// cmpw cr6,r21,r31
	ctx.cr6.compare<int32_t>(r21.s32, r31.s32, ctx.xer);
	// blt cr6,0x82353680
	if (ctx.cr6.lt) goto loc_82353680;
loc_82353D54:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r10,r15,2
	ctx.r10.s64 = r15.s64 + 2;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82353f7c
	if (ctx.cr6.lt) goto loc_82353F7C;
	// lwz r11,15396(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 15396);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82353f7c
	if (!ctx.cr6.lt) goto loc_82353F7C;
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// subf r11,r15,r31
	ctx.r11.u64 = r31.u64 - r15.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82353D80:
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// lwz r10,15404(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 15404);
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,15392(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 15392);
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ble cr6,0x82353e04
	if (!ctx.cr6.gt) goto loc_82353E04;
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// subf r9,r8,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r10,r18,-1
	ctx.r10.s64 = r18.s64 + -1;
	// subf r11,r7,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r7.u64;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// li r7,16
	ctx.r7.s64 = 16;
loc_82353DBC:
	// lwz r6,15388(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 15388);
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82353dec
	if (!ctx.cr6.lt) goto loc_82353DEC;
	// lwz r6,20(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 20);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82353dec
	if (!ctx.cr6.lt) goto loc_82353DEC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82353dec
	if (ctx.cr6.lt) goto loc_82353DEC;
	// lbzx r6,r9,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stb r6,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r6.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x82353df0
	goto loc_82353DF0;
loc_82353DEC:
	// stbu r7,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
loc_82353DF0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r6,15392(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 15392);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82353dbc
	if (ctx.cr6.lt) goto loc_82353DBC;
loc_82353E04:
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// lwz r24,100(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,140(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r30,144(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mullw r11,r5,r24
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(r24.s32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x82353eb4
	if (!ctx.cr6.gt) goto loc_82353EB4;
	// lwz r29,124(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r25,128
	r25.s64 = 128;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r6,r29,r10
	ctx.r6.u64 = ctx.r10.u64 - r29.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r28,104(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r27,108(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
loc_82353E58:
	// lwz r9,15388(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 15388);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82353ea4
	if (!ctx.cr6.lt) goto loc_82353EA4;
	// add r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r24.s32, ctx.xer);
	// bge cr6,0x82353ea4
	if (!ctx.cr6.lt) goto loc_82353EA4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82353ea4
	if (ctx.cr6.lt) goto loc_82353EA4;
	// subf r9,r29,r7
	ctx.r9.u64 = ctx.r7.u64 - r29.u64;
	// add r23,r9,r8
	r23.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r23,r23,r28
	r23.u64 = REX_LOAD_U8(r23.u32 + r28.u32);
	// stb r23,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, r23.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r9,r9,r27
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + r27.u32);
	// stb r9,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x82353eac
	goto loc_82353EAC;
loc_82353EA4:
	// stbu r25,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, r25.u8);
	ctx.r11.u32 = ea;
	// stbu r25,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, r25.u8);
	ctx.r10.u32 = ea;
loc_82353EAC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x82353e58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82353E58;
loc_82353EB4:
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// addi r8,r4,1
	ctx.r8.s64 = ctx.r4.s64 + 1;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
	// lwz r9,15404(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 15404);
	// mullw r10,r11,r8
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,15392(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 15392);
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + r30.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + r30.u64;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// add r7,r11,r18
	ctx.r7.u64 = ctx.r11.u64 + r18.u64;
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82353f60
	if (!ctx.cr6.gt) goto loc_82353F60;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// subf r5,r6,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r6.u64;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// subf r10,r11,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r11.u64;
	// subf r6,r6,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r6.u64;
	// li r31,16
	r31.s64 = 16;
loc_82353F18:
	// lwz r11,15388(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 15388);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82353f48
	if (!ctx.cr6.lt) goto loc_82353F48;
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82353f48
	if (!ctx.cr6.lt) goto loc_82353F48;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82353f48
	if (ctx.cr6.lt) goto loc_82353F48;
	// lbzx r11,r10,r5
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// stb r11,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r11.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x82353f4c
	goto loc_82353F4C;
loc_82353F48:
	// stbu r31,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, r31.u8);
	ctx.r9.u32 = ea;
loc_82353F4C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,15392(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 15392);
	// add r30,r10,r6
	r30.u64 = ctx.r10.u64 + ctx.r6.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82353f18
	if (ctx.cr6.lt) goto loc_82353F18;
loc_82353F60:
	// lwz r10,15396(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 15396);
	// addi r31,r4,1
	r31.s64 = ctx.r4.s64 + 1;
	// add r18,r11,r7
	r18.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82353d80
	if (ctx.cr6.lt) goto loc_82353D80;
loc_82353F7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_82389E38) {
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
	ctx.lr = 0x82389E40;
	// lwz r21,84(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// stw r6,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r6,r21,1
	ctx.r6.s64 = r21.s64 + 1;
	// stw r5,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// stw r10,76(r1)
	REX_STORE_U32(ctx.r1.u32 + 76, ctx.r10.u32);
	// srawi r20,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	r20.s64 = ctx.r6.s32 >> 1;
	// srawi. r19,r21,2
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x3) != 0);
	r19.s64 = r21.s32 >> 2;
	ctx.cr0.compare<int32_t>(r19.s32, 0, ctx.xer);
	// add r31,r20,r7
	r31.u64 = r20.u64 + ctx.r7.u64;
	// stw r20,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, r20.u32);
	// stw r19,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, r19.u32);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// ble 0x8238a054
	if (!ctx.cr0.gt) goto loc_8238A054;
	// lwz r4,136(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mtctr r19
	ctx.ctr.u64 = r19.u64;
	// rlwinm r29,r4,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r4,r29
	ctx.r10.u64 = ctx.r4.u64 + r29.u64;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_82389E8C:
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// lbz r26,4(r11)
	r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lbz r25,5(r11)
	r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwimi r6,r29,2,22,25
	ctx.r6.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0x3C0) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFC3F);
	// lbz r28,2(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwimi r27,r10,2,22,29
	r27.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC) | (r27.u64 & 0xFFFFFFFFFFFFFC03);
	// rlwimi r28,r5,2,22,25
	r28.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C0) | (r28.u64 & 0xFFFFFFFFFFFFFC3F);
	// rlwinm r10,r27,4,24,27
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xF0;
	// rlwinm r29,r28,0,24,27
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xF0;
	// lbz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r6,r6,0,24,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xF0;
	// lbz r28,0(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r5,r5,0,26,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x30;
	// lbz r27,3(r11)
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r28,r28,0,26,27
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x30;
	// lbz r24,1(r11)
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// srawi r5,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 2;
	// lbz r23,4(r11)
	r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r21,5(r11)
	r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r22,r27,0,26,27
	r22.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x30;
	// or r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 | r28.u64;
	// lbzux r20,r11,r4
	ea = ctx.r11.u32 + ctx.r4.u32;
	r20.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwinm r28,r24,0,26,27
	r28.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x30;
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// rlwimi r27,r24,2,28,29
	r27.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xC) | (r27.u64 & 0xFFFFFFFFFFFFFFF3);
	// srawi r5,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 2;
	// srawi r22,r22,2
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x3) != 0);
	r22.s64 = r22.s32 >> 2;
	// lbz r19,1(r11)
	r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r18,3(r11)
	r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// clrlwi r27,r27,28
	r27.u64 = r27.u32 & 0xF;
	// or r28,r22,r28
	r28.u64 = r22.u64 | r28.u64;
	// lbz r17,4(r11)
	r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r16,5(r11)
	r16.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// or r10,r27,r10
	ctx.r10.u64 = r27.u64 | ctx.r10.u64;
	// lbz r15,2(r11)
	r15.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// extsb r28,r28
	r28.s64 = r28.s8;
	// stb r10,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r10.u8);
	// rlwinm r27,r26,2,24,25
	r27.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xC0;
	// srawi r28,r28,2
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3) != 0);
	r28.s64 = r28.s32 >> 2;
	// rlwinm r26,r25,2,24,25
	r26.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xC0;
	// lbz r22,2(r11)
	r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// or r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 | r29.u64;
	// rlwinm r25,r23,0,26,27
	r25.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x30;
	// or r6,r28,r6
	ctx.r6.u64 = r28.u64 | ctx.r6.u64;
	// stb r5,0(r30)
	REX_STORE_U8(r30.u32 + 0, ctx.r5.u8);
	// rlwinm r24,r17,0,26,27
	r24.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0x30;
	// rlwinm r23,r21,0,26,27
	r23.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x30;
	// stb r6,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r6.u8);
	// rlwinm r17,r16,0,26,27
	r17.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 0) & 0x30;
	// lbz r16,0(r11)
	r16.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r10,r22,0,26,27
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x30;
	// lbz r22,4(r11)
	r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// srawi r24,r24,2
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x3) != 0);
	r24.s64 = r24.s32 >> 2;
	// or r29,r25,r27
	r29.u64 = r25.u64 | r27.u64;
	// or r5,r23,r26
	ctx.r5.u64 = r23.u64 | r26.u64;
	// srawi r6,r17,2
	ctx.xer.ca = (r17.s32 < 0) & ((r17.u32 & 0x3) != 0);
	ctx.r6.s64 = r17.s32 >> 2;
	// mr r14,r18
	r14.u64 = r18.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// rlwinm r25,r16,0,26,27
	r25.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 0) & 0x30;
	// or r29,r24,r29
	r29.u64 = r24.u64 | r29.u64;
	// lbz r24,1(r11)
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// lbz r5,3(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// or r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 | r25.u64;
	// lbz r25,5(r11)
	r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwimi r15,r20,2,22,25
	r15.u64 = (__builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0x3C0) | (r15.u64 & 0xFFFFFFFFFFFFFC3F);
	// rlwimi r14,r19,2,22,25
	r14.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0x3C0) | (r14.u64 & 0xFFFFFFFFFFFFFC3F);
	// rlwimi r18,r19,2,22,29
	r18.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0x3FC) | (r18.u64 & 0xFFFFFFFFFFFFFC03);
	// mr r21,r19
	r21.u64 = r19.u64;
	// rlwinm r28,r15,0,24,27
	r28.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0xF0;
	// rlwinm r27,r14,0,24,27
	r27.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 0) & 0xF0;
	// rlwinm r26,r18,4,24,27
	r26.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 4) & 0xF0;
	// rlwinm r23,r5,0,26,27
	r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x30;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r21,r24,0,26,27
	r21.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x30;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// srawi r23,r23,2
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x3) != 0);
	r23.s64 = r23.s32 >> 2;
	// rlwimi r5,r24,2,28,29
	ctx.r5.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xC) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFF3);
	// or r23,r23,r21
	r23.u64 = r23.u64 | r21.u64;
	// clrlwi r5,r5,28
	ctx.r5.u64 = ctx.r5.u32 & 0xF;
	// extsb r23,r23
	r23.s64 = r23.s8;
	// rlwinm r24,r22,0,26,27
	r24.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x30;
	// rlwinm r25,r25,0,26,27
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x30;
	// srawi r23,r23,2
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x3) != 0);
	r23.s64 = r23.s32 >> 2;
	// or r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 | r26.u64;
	// or r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 | r28.u64;
	// srawi r26,r24,4
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0xF) != 0);
	r26.s64 = r24.s32 >> 4;
	// srawi r25,r25,4
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0xF) != 0);
	r25.s64 = r25.s32 >> 4;
	// stbu r10,1(r30)
	ea = 1 + r30.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	r30.u32 = ea;
	// or r28,r23,r27
	r28.u64 = r23.u64 | r27.u64;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// or r10,r26,r29
	ctx.r10.u64 = r26.u64 | r29.u64;
	// stbu r28,1(r31)
	ea = 1 + r31.u32;
	REX_STORE_U8(ea, r28.u8);
	r31.u32 = ea;
	// or r6,r25,r6
	ctx.r6.u64 = r25.u64 | ctx.r6.u64;
	// stbu r5,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r7.u32 = ea;
	// stb r10,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stb r6,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r6.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82389e8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82389E8C;
	// lwz r20,-216(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// lwz r19,-220(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// lwz r21,84(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,76(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
loc_8238A054:
	// clrlwi r6,r21,30
	ctx.r6.u64 = r21.u32 & 0x3;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8238a1d4
	if (ctx.cr6.eq) goto loc_8238A1D4;
	// lwz r4,136(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// rlwinm r5,r21,0,30,30
	ctx.r5.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x2;
	// lbz r27,3(r11)
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r29,r4,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r28,1(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r26,0(r11)
	r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mr r22,r27
	r22.u64 = r27.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + r29.u64;
	// lbz r24,2(r11)
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// mr r29,r27
	r29.u64 = r27.u64;
	// lbz r23,4(r11)
	r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// mr r25,r28
	r25.u64 = r28.u64;
	// lbz r18,5(r11)
	r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwimi r29,r28,2,22,25
	r29.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x3C0) | (r29.u64 & 0xFFFFFFFFFFFFFC3F);
	// rlwimi r24,r26,2,22,25
	r24.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0x3C0) | (r24.u64 & 0xFFFFFFFFFFFFFC3F);
	// rlwimi r22,r28,2,22,29
	r22.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x3FC) | (r22.u64 & 0xFFFFFFFFFFFFFC03);
	// rlwinm r25,r4,1,0,30
	r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r29,0,24,27
	r27.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xF0;
	// rlwinm r28,r24,0,24,27
	r28.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xF0;
	// rlwinm r26,r22,4,24,27
	r26.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 4) & 0xF0;
	// rlwinm r4,r23,2,24,25
	ctx.r4.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xC0;
	// rlwinm r29,r18,2,24,25
	r29.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xC0;
	// add r11,r25,r11
	ctx.r11.u64 = r25.u64 + ctx.r11.u64;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x8238a144
	if (!ctx.cr6.eq) goto loc_8238A144;
	// lbz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// clrlwi r26,r26,24
	r26.u64 = r26.u32 & 0xFF;
	// lbz r24,0(r11)
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r5,r5,0,26,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x30;
	// lbz r23,3(r11)
	r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r24,r24,0,26,27
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x30;
	// lbz r22,1(r11)
	r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// srawi r5,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 2;
	// lbz r18,4(r11)
	r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r17,r23,0,26,27
	r17.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x30;
	// lbz r16,5(r11)
	r16.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// or r5,r5,r24
	ctx.r5.u64 = ctx.r5.u64 | r24.u64;
	// rlwinm r24,r22,0,26,27
	r24.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x30;
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// rlwimi r23,r22,2,28,29
	r23.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xC) | (r23.u64 & 0xFFFFFFFFFFFFFFF3);
	// srawi r5,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 2;
	// srawi r17,r17,2
	ctx.xer.ca = (r17.s32 < 0) & ((r17.u32 & 0x3) != 0);
	r17.s64 = r17.s32 >> 2;
	// clrlwi r23,r23,28
	r23.u64 = r23.u32 & 0xF;
	// or r24,r17,r24
	r24.u64 = r17.u64 | r24.u64;
	// or r26,r23,r26
	r26.u64 = r23.u64 | r26.u64;
	// extsb r24,r24
	r24.s64 = r24.s8;
	// rlwinm r23,r18,0,26,27
	r23.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0x30;
	// srawi r24,r24,2
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x3) != 0);
	r24.s64 = r24.s32 >> 2;
	// rlwinm r22,r16,0,26,27
	r22.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 0) & 0x30;
	// clrlwi r29,r29,24
	r29.u64 = r29.u32 & 0xFF;
	// or r28,r5,r28
	r28.u64 = ctx.r5.u64 | r28.u64;
	// or r27,r24,r27
	r27.u64 = r24.u64 | r27.u64;
	// clrlwi r26,r26,24
	r26.u64 = r26.u32 & 0xFF;
	// or r4,r23,r4
	ctx.r4.u64 = r23.u64 | ctx.r4.u64;
	// or r29,r22,r29
	r29.u64 = r22.u64 | r29.u64;
	// add r11,r25,r11
	ctx.r11.u64 = r25.u64 + ctx.r11.u64;
loc_8238A144:
	// stb r28,0(r30)
	REX_STORE_U8(r30.u32 + 0, r28.u8);
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// stb r27,0(r31)
	REX_STORE_U8(r31.u32 + 0, r27.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stb r26,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, r26.u8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bne cr6,0x8238a1c4
	if (!ctx.cr6.eq) goto loc_8238A1C4;
	// lbz r6,1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,3(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r28,4(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lbz r26,5(r11)
	r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lbz r24,0(r11)
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r28,r28,0,26,27
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x30;
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwimi r25,r6,2,22,25
	r25.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C0) | (r25.u64 & 0xFFFFFFFFFFFFFC3F);
	// rlwimi r5,r6,2,22,29
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFC03);
	// rlwimi r11,r24,2,22,25
	ctx.r11.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0x3C0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFC3F);
	// rlwinm r26,r26,0,26,27
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x30;
	// rlwinm r11,r11,0,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// srawi r28,r28,2
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3) != 0);
	r28.s64 = r28.s32 >> 2;
	// stb r11,1(r30)
	REX_STORE_U8(r30.u32 + 1, ctx.r11.u8);
	// rlwinm r27,r25,0,24,27
	r27.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xF0;
	// rlwinm r5,r5,4,24,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xF0;
	// srawi r11,r26,2
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x3) != 0);
	ctx.r11.s64 = r26.s32 >> 2;
	// stb r27,0(r31)
	REX_STORE_U8(r31.u32 + 0, r27.u8);
	// stb r5,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r5.u8);
	// or r4,r28,r4
	ctx.r4.u64 = r28.u64 | ctx.r4.u64;
	// or r29,r11,r29
	r29.u64 = ctx.r11.u64 | r29.u64;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_8238A1C4:
	// stb r4,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r4.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r29,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, r29.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8238A1D4:
	// lwz r26,136(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// addi r11,r10,6
	ctx.r11.s64 = ctx.r10.s64 + 6;
	// stw r31,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, r31.u32);
	// add r4,r20,r31
	ctx.r4.u64 = r20.u64 + r31.u64;
	// add r3,r20,r7
	ctx.r3.u64 = r20.u64 + ctx.r7.u64;
	// stw r11,76(r1)
	REX_STORE_U32(ctx.r1.u32 + 76, ctx.r11.u32);
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// stw r26,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, r26.u32);
	// ble cr6,0x8238a77c
	if (!ctx.cr6.gt) goto loc_8238A77C;
	// lwz r10,36(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// addi r6,r26,-1
	ctx.r6.s64 = r26.s64 + -1;
	// lwz r5,44(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// addi r23,r8,-1
	r23.s64 = ctx.r8.s64 + -1;
	// addi r25,r10,-1
	r25.s64 = ctx.r10.s64 + -1;
	// stw r6,-200(r1)
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r6.u32);
	// addi r24,r5,-1
	r24.s64 = ctx.r5.s64 + -1;
	// stw r23,60(r1)
	REX_STORE_U32(ctx.r1.u32 + 60, r23.u32);
	// addi r22,r9,-1
	r22.s64 = ctx.r9.s64 + -1;
	// stw r25,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, r25.u32);
	// stw r24,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, r24.u32);
	// stw r22,68(r1)
	REX_STORE_U32(ctx.r1.u32 + 68, r22.u32);
loc_8238A228:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// ble cr6,0x8238a4e8
	if (!ctx.cr6.gt) goto loc_8238A4E8;
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r19
	ctx.ctr.u64 = r19.u64;
	// add r10,r26,r10
	ctx.r10.u64 = r26.u64 + ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,-196(r1)
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
loc_8238A244:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r27,5(r11)
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lbz r30,3(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r28,4(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// mr r26,r30
	r26.u64 = r30.u64;
	// rlwimi r29,r9,2,22,29
	r29.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC) | (r29.u64 & 0xFFFFFFFFFFFFFC03);
	// rlwimi r26,r6,2,22,29
	r26.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC) | (r26.u64 & 0xFFFFFFFFFFFFFC03);
	// lbz r24,2(r11)
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwimi r8,r9,2,22,25
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFC3F);
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwimi r30,r25,2,22,25
	r30.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0x3C0) | (r30.u64 & 0xFFFFFFFFFFFFFC3F);
	// rlwinm r9,r24,0,26,27
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x30;
	// lbz r23,3(r11)
	r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r22,r6,0,26,27
	r22.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x30;
	// lbz r21,1(r11)
	r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// srawi r18,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	r18.s64 = ctx.r9.s32 >> 2;
	// lbz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r20,r23,0,26,27
	r20.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x30;
	// lbz r19,5(r11)
	r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// or r22,r18,r22
	r22.u64 = r18.u64 | r22.u64;
	// lbzux r9,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwinm r16,r21,0,26,27
	r16.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x30;
	// extsb r22,r22
	r22.s64 = r22.s8;
	// rlwimi r24,r6,2,28,29
	r24.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xC) | (r24.u64 & 0xFFFFFFFFFFFFFFF3);
	// srawi r22,r22,2
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x3) != 0);
	r22.s64 = r22.s32 >> 2;
	// srawi r20,r20,2
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x3) != 0);
	r20.s64 = r20.s32 >> 2;
	// lbz r18,2(r11)
	r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r29,r29,4,24,27
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xF0;
	// lbz r17,1(r11)
	r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// or r6,r20,r16
	ctx.r6.u64 = r20.u64 | r16.u64;
	// clrlwi r24,r24,28
	r24.u64 = r24.u32 & 0xF;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// rlwimi r23,r21,2,28,29
	r23.u64 = (__builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xC) | (r23.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r8,r8,0,24,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF0;
	// or r29,r24,r29
	r29.u64 = r24.u64 | r29.u64;
	// rlwinm r30,r30,0,24,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xF0;
	// srawi r6,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// stb r29,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, r29.u8);
	// clrlwi r25,r23,28
	r25.u64 = r23.u32 & 0xF;
	// rlwinm r24,r28,6,24,25
	r24.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 6) & 0xC0;
	// rlwinm r21,r5,4,26,27
	r21.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0x30;
	// rlwinm r26,r26,4,24,27
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0xF0;
	// or r8,r22,r8
	ctx.r8.u64 = r22.u64 | ctx.r8.u64;
	// or r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 | r30.u64;
	// or r26,r25,r26
	r26.u64 = r25.u64 | r26.u64;
	// stb r8,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r8.u8);
	// or r29,r21,r24
	r29.u64 = r21.u64 | r24.u64;
	// stb r6,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r6.u8);
	// rlwinm r28,r28,2,24,25
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xC0;
	// stb r26,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, r26.u8);
	// rlwinm r5,r5,0,26,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x30;
	// lbz r26,5(r11)
	r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// clrlwi r6,r29,24
	ctx.r6.u64 = r29.u32 & 0xFF;
	// lbz r29,3(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// or r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 | r28.u64;
	// lbz r28,4(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r23,r27,6,24,25
	r23.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 6) & 0xC0;
	// rlwinm r20,r19,4,26,27
	r20.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 4) & 0x30;
	// mr r16,r18
	r16.u64 = r18.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,-196(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// rlwinm r8,r27,2,24,25
	ctx.r8.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xC0;
	// rlwinm r31,r19,0,26,27
	r31.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0x30;
	// or r27,r20,r23
	r27.u64 = r20.u64 | r23.u64;
	// rlwimi r16,r9,2,22,25
	r16.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C0) | (r16.u64 & 0xFFFFFFFFFFFFFC3F);
	// or r8,r31,r8
	ctx.r8.u64 = r31.u64 | ctx.r8.u64;
	// lbz r23,2(r11)
	r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// clrlwi r31,r27,24
	r31.u64 = r27.u32 & 0xFF;
	// rlwimi r18,r9,2,22,29
	r18.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC) | (r18.u64 & 0xFFFFFFFFFFFFFC03);
	// lwz r9,-208(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// rlwinm r30,r16,0,24,27
	r30.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 0) & 0xF0;
	// mr r27,r17
	r27.u64 = r17.u64;
	// rlwinm r25,r28,0,26,27
	r25.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x30;
	// rlwinm r24,r26,0,26,27
	r24.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x30;
	// lbz r22,0(r11)
	r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r21,r23,0,26,27
	r21.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x30;
	// srawi r25,r25,2
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x3) != 0);
	r25.s64 = r25.s32 >> 2;
	// lbz r20,3(r11)
	r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// srawi r24,r24,2
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x3) != 0);
	r24.s64 = r24.s32 >> 2;
	// lbz r16,1(r11)
	r16.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r19,r22,0,26,27
	r19.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x30;
	// std r11,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r11.u64);
	// srawi r21,r21,2
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x3) != 0);
	r21.s64 = r21.s32 >> 2;
	// std r10,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r10.u64);
	// rlwinm r14,r20,0,26,27
	r14.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x30;
	// lbz r15,4(r11)
	r15.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// or r21,r21,r19
	r21.u64 = r21.u64 | r19.u64;
	// lbz r11,5(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwimi r23,r22,2,28,29
	r23.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xC) | (r23.u64 & 0xFFFFFFFFFFFFFFF3);
	// extsb r21,r21
	r21.s64 = r21.s8;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// srawi r21,r21,2
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x3) != 0);
	r21.s64 = r21.s32 >> 2;
	// srawi r19,r14,2
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x3) != 0);
	r19.s64 = r14.s32 >> 2;
	// rlwinm r14,r16,0,26,27
	r14.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 0) & 0x30;
	// rlwimi r29,r17,2,22,25
	r29.u64 = (__builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 2) & 0x3C0) | (r29.u64 & 0xFFFFFFFFFFFFFC3F);
	// or r22,r19,r14
	r22.u64 = r19.u64 | r14.u64;
	// or r30,r21,r30
	r30.u64 = r21.u64 | r30.u64;
	// extsb r27,r22
	r27.s64 = r22.s8;
	// rlwinm r28,r28,2,28,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xC;
	// stbu r30,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, r30.u8);
	ctx.r9.u32 = ea;
	// srawi r27,r27,2
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3) != 0);
	r27.s64 = r27.s32 >> 2;
	// rlwinm r29,r29,0,24,27
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xF0;
	// rlwinm r22,r11,0,26,27
	r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30;
	// rlwinm r26,r26,2,28,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xC;
	// or r30,r27,r29
	r30.u64 = r27.u64 | r29.u64;
	// or r6,r28,r6
	ctx.r6.u64 = r28.u64 | ctx.r6.u64;
	// rlwinm r19,r15,0,26,27
	r19.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0x30;
	// stbu r30,1(r4)
	ea = 1 + ctx.r4.u32;
	REX_STORE_U8(ea, r30.u8);
	ctx.r4.u32 = ea;
	// mr r28,r22
	r28.u64 = r22.u64;
	// or r31,r26,r31
	r31.u64 = r26.u64 | r31.u64;
	// srawi r22,r19,4
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0xF) != 0);
	r22.s64 = r19.s32 >> 4;
	// srawi r30,r28,4
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0xF) != 0);
	r30.s64 = r28.s32 >> 4;
	// clrlwi r29,r15,30
	r29.u64 = r15.u32 & 0x3;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r28,r11,30
	r28.u64 = ctx.r11.u32 & 0x3;
	// ld r11,-208(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// clrlwi r31,r31,24
	r31.u64 = r31.u32 & 0xFF;
	// or r6,r29,r6
	ctx.r6.u64 = r29.u64 | ctx.r6.u64;
	// rlwimi r10,r17,2,22,29
	ctx.r10.u64 = (__builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 2) & 0x3FC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFC03);
	// or r29,r28,r31
	r29.u64 = r28.u64 | r31.u64;
	// rlwimi r20,r16,2,28,29
	r20.u64 = (__builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xC) | (r20.u64 & 0xFFFFFFFFFFFFFFF3);
	// or r8,r24,r8
	ctx.r8.u64 = r24.u64 | ctx.r8.u64;
	// addi r31,r9,1
	r31.s64 = ctx.r9.s64 + 1;
	// lwz r9,36(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// rlwinm r17,r10,4,24,27
	r17.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF0;
	// ld r10,-184(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// clrlwi r20,r20,28
	r20.u64 = r20.u32 & 0xF;
	// stw r31,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, r31.u32);
	// or r30,r30,r8
	r30.u64 = r30.u64 | ctx.r8.u64;
	// lwz r8,44(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// clrlwi r23,r23,28
	r23.u64 = r23.u32 & 0xF;
	// rlwinm r18,r18,4,24,27
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 4) & 0xF0;
	// stb r6,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r6.u8);
	// or r26,r20,r17
	r26.u64 = r20.u64 | r17.u64;
	// or r5,r25,r5
	ctx.r5.u64 = r25.u64 | ctx.r5.u64;
	// or r23,r23,r18
	r23.u64 = r23.u64 | r18.u64;
	// stb r29,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, r29.u8);
	// addi r25,r9,1
	r25.s64 = ctx.r9.s64 + 1;
	// lwz r9,60(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 60);
	// clrlwi r27,r26,24
	r27.u64 = r26.u32 & 0xFF;
	// stbu r23,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, r23.u8);
	ctx.r7.u32 = ea;
	// addi r24,r8,1
	r24.s64 = ctx.r8.s64 + 1;
	// lwz r8,68(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// or r5,r22,r5
	ctx.r5.u64 = r22.u64 | ctx.r5.u64;
	// stbu r27,1(r3)
	ea = 1 + ctx.r3.u32;
	REX_STORE_U8(ea, r27.u8);
	ctx.r3.u32 = ea;
	// addi r23,r9,1
	r23.s64 = ctx.r9.s64 + 1;
	// stw r25,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, r25.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r24,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, r24.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r23,60(r1)
	REX_STORE_U32(ctx.r1.u32 + 60, r23.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stb r5,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r5.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r22,r8,1
	r22.s64 = ctx.r8.s64 + 1;
	// stb r30,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, r30.u8);
	// stw r22,68(r1)
	REX_STORE_U32(ctx.r1.u32 + 68, r22.u32);
	// bdnz 0x8238a244
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238A244;
	// lwz r21,84(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,-192(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// lwz r19,-220(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// lwz r20,-216(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
loc_8238A4E8:
	// clrlwi r10,r21,30
	ctx.r10.u64 = r21.u32 & 0x3;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8238a74c
	if (ctx.cr6.eq) goto loc_8238A74C;
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r18,r21,0,30,30
	r18.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x2;
	// add r5,r26,r10
	ctx.r5.u64 = r26.u64 + ctx.r10.u64;
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r6,1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// mr r15,r10
	r15.u64 = ctx.r10.u64;
	// lbz r17,4(r11)
	r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwimi r29,r9,2,22,25
	r29.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C0) | (r29.u64 & 0xFFFFFFFFFFFFFC3F);
	// lbz r16,5(r11)
	r16.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwimi r8,r9,2,22,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFC03);
	// rlwimi r10,r6,2,22,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFC03);
	// rlwimi r15,r6,2,22,25
	r15.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C0) | (r15.u64 & 0xFFFFFFFFFFFFFC3F);
	// rlwinm r27,r5,1,0,30
	r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// rlwinm r5,r29,0,24,27
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xF0;
	// rlwinm r30,r8,4,24,27
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xF0;
	// rlwinm r28,r10,4,24,27
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF0;
	// rlwinm r29,r15,0,24,27
	r29.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0xF0;
	// rlwinm r10,r17,2,24,25
	ctx.r10.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 2) & 0xC0;
	// rlwinm r9,r16,2,24,25
	ctx.r9.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xC0;
	// rlwinm r8,r17,6,24,25
	ctx.r8.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 6) & 0xC0;
	// rlwinm r6,r16,6,24,25
	ctx.r6.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 6) & 0xC0;
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// cmpwi cr6,r18,2
	ctx.cr6.compare<int32_t>(r18.s32, 2, ctx.xer);
	// bne cr6,0x8238a664
	if (!ctx.cr6.eq) goto loc_8238A664;
	// lbz r17,3(r11)
	r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// clrlwi r30,r30,24
	r30.u64 = r30.u32 & 0xFF;
	// lbz r20,0(r11)
	r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r28,r28,24
	r28.u64 = r28.u32 & 0xFF;
	// rlwinm r21,r17,0,26,27
	r21.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0x30;
	// std r4,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r4.u64);
	// std r31,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, r31.u64);
	// rlwinm r19,r20,0,26,27
	r19.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x30;
	// stb r21,-223(r1)
	REX_STORE_U8(ctx.r1.u32 + -223, r21.u8);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// lbz r4,-223(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + -223);
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// stw r20,-196(r1)
	REX_STORE_U32(ctx.r1.u32 + -196, r20.u32);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lwz r31,-196(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// lbz r18,2(r11)
	r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// std r7,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r7.u64);
	// rlwinm r22,r18,0,26,27
	r22.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0x30;
	// lbz r16,1(r11)
	r16.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r15,4(r11)
	r15.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// srawi r22,r22,2
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x3) != 0);
	r22.s64 = r22.s32 >> 2;
	// lbz r14,5(r11)
	r14.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwimi r17,r16,2,28,29
	r17.u64 = (__builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xC) | (r17.u64 & 0xFFFFFFFFFFFFFFF3);
	// lwz r21,84(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r22,-224(r1)
	REX_STORE_U8(ctx.r1.u32 + -224, r22.u8);
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// lwz r22,68(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// clrlwi r17,r17,28
	r17.u64 = r17.u32 & 0xF;
	// lbz r7,-224(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + -224);
	// or r7,r7,r19
	ctx.r7.u64 = ctx.r7.u64 | r19.u64;
	// std r3,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r3.u64);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// rlwinm r3,r16,0,26,27
	ctx.r3.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 0) & 0x30;
	// lwz r19,-220(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// srawi r7,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 2;
	// lwz r20,-216(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// srawi r4,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 2;
	// rlwimi r18,r31,2,28,29
	r18.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xC) | (r18.u64 & 0xFFFFFFFFFFFFFFF3);
	// ld r31,-168(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// clrlwi r18,r18,28
	r18.u64 = r18.u32 & 0xF;
	// extsb r16,r4
	r16.s64 = ctx.r4.s8;
	// rlwinm r4,r15,4,26,27
	ctx.r4.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 4) & 0x30;
	// rlwinm r3,r14,4,26,27
	ctx.r3.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 4) & 0x30;
	// or r30,r18,r30
	r30.u64 = r18.u64 | r30.u64;
	// srawi r18,r16,2
	ctx.xer.ca = (r16.s32 < 0) & ((r16.u32 & 0x3) != 0);
	r18.s64 = r16.s32 >> 2;
	// or r28,r17,r28
	r28.u64 = r17.u64 | r28.u64;
	// or r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 | ctx.r8.u64;
	// ld r4,-208(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// or r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 | ctx.r6.u64;
	// rlwinm r17,r15,0,26,27
	r17.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0x30;
	// rlwinm r16,r14,0,26,27
	r16.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 0) & 0x30;
	// or r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 | ctx.r5.u64;
	// ld r7,-184(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// clrlwi r30,r30,24
	r30.u64 = r30.u32 & 0xFF;
	// or r29,r18,r29
	r29.u64 = r18.u64 | r29.u64;
	// ld r3,-176(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// clrlwi r28,r28,24
	r28.u64 = r28.u32 & 0xFF;
	// or r10,r17,r10
	ctx.r10.u64 = r17.u64 | ctx.r10.u64;
	// or r9,r16,r9
	ctx.r9.u64 = r16.u64 | ctx.r9.u64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
loc_8238A664:
	// stb r5,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r5.u8);
	// clrlwi r5,r21,30
	ctx.r5.u64 = r21.u32 & 0x3;
	// stb r30,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, r30.u8);
	// stb r29,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, r29.u8);
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// stb r28,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, r28.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne cr6,0x8238a72c
	if (!ctx.cr6.eq) goto loc_8238A72C;
	// std r26,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, r26.u64);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// lbz r30,2(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r17,3(r11)
	r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// mr r18,r30
	r18.u64 = r30.u64;
	// rlwimi r30,r5,2,22,29
	r30.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3FC) | (r30.u64 & 0xFFFFFFFFFFFFFC03);
	// lbz r27,1(r11)
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// mr r14,r17
	r14.u64 = r17.u64;
	// lbz r29,4(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwimi r18,r5,2,22,25
	r18.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C0) | (r18.u64 & 0xFFFFFFFFFFFFFC3F);
	// lbz r11,5(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r30,r30,4,24,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xF0;
	// lwz r19,-220(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// rlwimi r17,r27,2,22,29
	r17.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0x3FC) | (r17.u64 & 0xFFFFFFFFFFFFFC03);
	// rlwimi r14,r27,2,22,25
	r14.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0x3C0) | (r14.u64 & 0xFFFFFFFFFFFFFC3F);
	// stb r30,1(r7)
	REX_STORE_U8(ctx.r7.u32 + 1, r30.u8);
	// mr r15,r27
	r15.u64 = r27.u64;
	// rlwinm r27,r18,0,24,27
	r27.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0xF0;
	// rlwinm r26,r11,0,26,27
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30;
	// rlwinm r16,r29,0,26,27
	r16.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x30;
	// stb r27,1(r31)
	REX_STORE_U8(r31.u32 + 1, r27.u8);
	// rlwinm r7,r17,4,24,27
	ctx.r7.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 4) & 0xF0;
	// rlwinm r29,r29,2,28,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xC;
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// stb r7,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// srawi r5,r16,2
	ctx.xer.ca = (r16.s32 < 0) & ((r16.u32 & 0x3) != 0);
	ctx.r5.s64 = r16.s32 >> 2;
	// rlwinm r31,r14,0,24,27
	r31.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 0) & 0xF0;
	// srawi r30,r26,2
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x3) != 0);
	r30.s64 = r26.s32 >> 2;
	// ld r26,-168(r1)
	r26.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// or r8,r29,r8
	ctx.r8.u64 = r29.u64 | ctx.r8.u64;
	// stb r31,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, r31.u8);
	// or r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 | ctx.r6.u64;
	// or r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 | ctx.r10.u64;
	// or r9,r30,r9
	ctx.r9.u64 = r30.u64 | ctx.r9.u64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8238A72C:
	// stbu r8,1(r25)
	ea = 1 + r25.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	r25.u32 = ea;
	// stbu r6,1(r24)
	ea = 1 + r24.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	r24.u32 = ea;
	// stbu r10,1(r23)
	ea = 1 + r23.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	r23.u32 = ea;
	// stbu r9,1(r22)
	ea = 1 + r22.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	r22.u32 = ea;
	// stw r25,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, r25.u32);
	// stw r24,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, r24.u32);
	// stw r23,60(r1)
	REX_STORE_U32(ctx.r1.u32 + 60, r23.u32);
	// stw r22,68(r1)
	REX_STORE_U32(ctx.r1.u32 + 68, r22.u32);
loc_8238A74C:
	// lwz r11,-200(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r9,76(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r4,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r4.u32);
	// addi r11,r9,6
	ctx.r11.s64 = ctx.r9.s64 + 6;
	// stw r10,-200(r1)
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r10.u32);
	// add r4,r20,r4
	ctx.r4.u64 = r20.u64 + ctx.r4.u64;
	// add r3,r20,r3
	ctx.r3.u64 = r20.u64 + ctx.r3.u64;
	// stw r11,76(r1)
	REX_STORE_U32(ctx.r1.u32 + 76, ctx.r11.u32);
	// bne 0x8238a228
	if (!ctx.cr0.eq) goto loc_8238A228;
loc_8238A77C:
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823B1EC8) {
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
	ctx.lr = 0x823B1ED0;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// li r25,0
	r25.s64 = 0;
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// lwz r8,48(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r7,36(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addze r26,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	r26.s64 = temp.s64;
	// srawi r6,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 1;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// addze r22,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	r22.s64 = temp.s64;
	// lwz r24,8(r8)
	r24.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// addi r10,r22,-1
	ctx.r10.s64 = r22.s64 + -1;
	// addze r21,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r21.s64 = temp.s64;
	// addi r28,r24,-1
	r28.s64 = r24.s64 + -1;
	// mullw r31,r10,r21
	r31.s64 = int64_t(ctx.r10.s32) * int64_t(r21.s32);
	// mullw r6,r28,r7
	ctx.r6.s64 = int64_t(r28.s32) * int64_t(ctx.r7.s32);
	// rlwinm r8,r24,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 8) & 0xFFFFFF00;
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// rotlwi r9,r31,1
	ctx.r9.u64 = __builtin_rotateleft32(r31.u32, 1);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// divw r29,r6,r24
	r29.u64 = uint32_t((r24.s32 && !(ctx.r6.s32 == INT32_MIN && r24.s32 == -1)) ? ctx.r6.s32 / r24.s32 : 0);
	// andc r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ~ctx.r11.u64;
	// andc r10,r24,r10
	ctx.r10.u64 = r24.u64 & ~ctx.r10.u64;
	// andc r9,r22,r9
	ctx.r9.u64 = r22.u64 & ~ctx.r9.u64;
	// srawi r6,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 1;
	// twllei r24,0
	if (r24.s32 == 0 || r24.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r23,r8,r7
	r23.u64 = uint32_t((ctx.r7.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r8.s32 / ctx.r7.s32 : 0);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// divw r19,r31,r22
	r19.u64 = uint32_t((r22.s32 && !(r31.s32 == INT32_MIN && r22.s32 == -1)) ? r31.s32 / r22.s32 : 0);
	// twllei r22,0
	if (r22.s32 == 0 || r22.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// addze r18,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	r18.s64 = temp.s64;
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x823b1f70
	if (!ctx.cr6.gt) goto loc_823B1F70;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
loc_823B1F70:
	// cmpw cr6,r19,r18
	ctx.cr6.compare<int32_t>(r19.s32, r18.s32, ctx.xer);
	// ble cr6,0x823b1f7c
	if (!ctx.cr6.gt) goto loc_823B1F7C;
	// mr r19,r18
	r19.u64 = r18.u64;
loc_823B1F7C:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x823b25d4
	if (!ctx.cr6.gt) goto loc_823B25D4;
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b1fa8
	if (ctx.cr6.eq) goto loc_823B1FA8;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b1fa8
	if (!ctx.cr6.eq) goto loc_823B1FA8;
	// lwz r6,80(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r27,92(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// b 0x823b1fbc
	goto loc_823B1FBC;
loc_823B1FA8:
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,56(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mullw r9,r11,r4
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_823B1FBC:
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b1fd8
	if (ctx.cr6.eq) goto loc_823B1FD8;
	// addi r11,r23,-256
	ctx.r11.s64 = r23.s64 + -256;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// b 0x823b1fdc
	goto loc_823B1FDC;
loc_823B1FD8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B1FDC:
	// mullw r20,r23,r4
	r20.s64 = int64_t(r23.s32) * int64_t(ctx.r4.s32);
	// add. r30,r20,r11
	r30.u64 = r20.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x823b2058
	if (!ctx.cr0.lt) goto loc_823B2058;
	// subf r10,r30,r23
	ctx.r10.u64 = r23.u64 - r30.u64;
	// twllei r23,0
	if (r23.s32 == 0 || r23.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r25,r10,r23
	r25.u64 = uint32_t((r23.s32 && !(ctx.r10.s32 == INT32_MIN && r23.s32 == -1)) ? ctx.r10.s32 / r23.s32 : 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// add r11,r25,r4
	ctx.r11.u64 = r25.u64 + ctx.r4.u64;
	// andc r8,r23,r9
	ctx.r8.u64 = r23.u64 & ~ctx.r9.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bge cr6,0x823b2050
	if (!ctx.cr6.lt) goto loc_823B2050;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823B201C:
	// lwz r9,64(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823b2048
	if (!ctx.cr6.gt) goto loc_823B2048;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_823B2030:
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// stbx r10,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823b2030
	if (ctx.cr6.lt) goto loc_823B2030;
loc_823B2048:
	// add r6,r27,r6
	ctx.r6.u64 = r27.u64 + ctx.r6.u64;
	// bdnz 0x823b201c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B201C;
loc_823B2050:
	// mullw r11,r25,r23
	ctx.r11.s64 = int64_t(r25.s32) * int64_t(r23.s32);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
loc_823B2058:
	// add r11,r25,r4
	ctx.r11.u64 = r25.u64 + ctx.r4.u64;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bge cr6,0x823b20d0
	if (!ctx.cr6.lt) goto loc_823B20D0;
	// subf r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823B2070:
	// clrlwi r8,r30,24
	ctx.r8.u64 = r30.u32 & 0xFF;
	// lwz r7,64(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// li r10,0
	ctx.r10.s64 = 0;
	// subfic r31,r8,256
	ctx.xer.ca = ctx.r8.u32 <= 256;
	r31.u64 = static_cast<uint64_t>(256) - ctx.r8.u64;
	// srawi r11,r30,8
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFF) != 0);
	ctx.r11.s64 = r30.s32 >> 8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// ble cr6,0x823b20c4
	if (!ctx.cr6.gt) goto loc_823B20C4;
loc_823B2094:
	// lbzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// mullw r7,r7,r31
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(r31.s32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// srawi r7,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 8;
	// stbx r7,r10,r6
	REX_STORE_U8(ctx.r10.u32 + ctx.r6.u32, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823b2094
	if (ctx.cr6.lt) goto loc_823B2094;
loc_823B20C4:
	// add r6,r27,r6
	ctx.r6.u64 = r27.u64 + ctx.r6.u64;
	// add r30,r30,r23
	r30.u64 = r30.u64 + r23.u64;
	// bdnz 0x823b2070
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B2070;
loc_823B20D0:
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x823b2174
	if (!ctx.cr6.lt) goto loc_823B2174;
	// subf r10,r29,r5
	ctx.r10.u64 = ctx.r5.u64 - r29.u64;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823B20E4:
	// clrlwi r7,r30,24
	ctx.r7.u64 = r30.u32 & 0xFF;
	// lwz r8,64(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// subfic r5,r7,256
	ctx.xer.ca = ctx.r7.u32 <= 256;
	ctx.r5.u64 = static_cast<uint64_t>(256) - ctx.r7.u64;
	// srawi r9,r30,8
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFF) != 0);
	ctx.r9.s64 = r30.s32 >> 8;
	// mullw r10,r9,r11
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r28.s32, ctx.xer);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// bge cr6,0x823b2144
	if (!ctx.cr6.lt) goto loc_823B2144;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823b2168
	if (!ctx.cr6.gt) goto loc_823B2168;
loc_823B2110:
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// mullw r8,r8,r5
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// srawi r8,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 8;
	// stbx r8,r9,r6
	REX_STORE_U8(ctx.r9.u32 + ctx.r6.u32, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823b2110
	if (ctx.cr6.lt) goto loc_823B2110;
	// b 0x823b2168
	goto loc_823B2168;
loc_823B2144:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823b2168
	if (!ctx.cr6.gt) goto loc_823B2168;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_823B2150:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbx r11,r9,r6
	REX_STORE_U8(ctx.r9.u32 + ctx.r6.u32, ctx.r11.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823b2150
	if (ctx.cr6.lt) goto loc_823B2150;
loc_823B2168:
	// add r6,r27,r6
	ctx.r6.u64 = r27.u64 + ctx.r6.u64;
	// add r30,r30,r23
	r30.u64 = r30.u64 + r23.u64;
	// bdnz 0x823b20e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B20E4;
loc_823B2174:
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b2198
	if (ctx.cr6.eq) goto loc_823B2198;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b2198
	if (!ctx.cr6.eq) goto loc_823B2198;
	// lwz r6,84(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r27,96(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// b 0x823b21c8
	goto loc_823B21C8;
loc_823B2198:
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r27,r26
	r27.u64 = r26.u64;
	// lwz r9,36(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mullw r8,r11,r4
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r7,32(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,56(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// srawi r6,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// mullw r11,r5,r26
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(r26.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_823B21C8:
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,40(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,64(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mullw r11,r11,r24
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r24.s32);
	// add r28,r11,r10
	r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823b21fc
	if (ctx.cr6.eq) goto loc_823B21FC;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mullw r11,r11,r23
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r23.s32);
	// addi r10,r11,-256
	ctx.r10.s64 = ctx.r11.s64 + -256;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// b 0x823b2200
	goto loc_823B2200;
loc_823B21FC:
	// li r9,0
	ctx.r9.s64 = 0;
loc_823B2200:
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mullw r10,r11,r23
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r23.s32);
	// mullw r8,r10,r4
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r10,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	// add. r30,r10,r9
	r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x823b22a8
	if (!ctx.cr0.lt) goto loc_823B22A8;
	// subf r8,r30,r23
	ctx.r8.u64 = r23.u64 - r30.u64;
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// rotlwi r9,r8,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// divw r25,r8,r23
	r25.u64 = uint32_t((r23.s32 && !(ctx.r8.s32 == INT32_MIN && r23.s32 == -1)) ? ctx.r8.s32 / r23.s32 : 0);
	// addze r10,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// add r9,r10,r25
	ctx.r9.u64 = ctx.r10.u64 + r25.u64;
	// andc r8,r23,r5
	ctx.r8.u64 = r23.u64 & ~ctx.r5.u64;
	// twllei r23,0
	if (r23.s32 == 0 || r23.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b22a0
	if (!ctx.cr6.lt) goto loc_823B22A0;
	// neg r7,r27
	ctx.r7.s64 = static_cast<int64_t>(-r27.u64);
	// subf r9,r6,r28
	ctx.r9.u64 = r28.u64 - ctx.r6.u64;
loc_823B2258:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x823b2278
	if (!ctx.cr6.gt) goto loc_823B2278;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
loc_823B2268:
	// lbzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823b2268
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B2268;
loc_823B2278:
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r6,r27,r6
	ctx.r6.u64 = r27.u64 + ctx.r6.u64;
	// mullw r8,r11,r4
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// srawi r5,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 1;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addze r8,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r8.s64 = temp.s64;
	// add r8,r8,r25
	ctx.r8.u64 = ctx.r8.u64 + r25.u64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823b2258
	if (ctx.cr6.lt) goto loc_823B2258;
loc_823B22A0:
	// mullw r10,r25,r23
	ctx.r10.s64 = int64_t(r25.s32) * int64_t(r23.s32);
	// add r30,r10,r30
	r30.u64 = ctx.r10.u64 + r30.u64;
loc_823B22A8:
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// mullw r8,r11,r19
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(r19.s32);
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// add r29,r11,r25
	r29.u64 = ctx.r11.u64 + r25.u64;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x823b2340
	if (!ctx.cr6.lt) goto loc_823B2340;
loc_823B22C4:
	// clrlwi r5,r30,24
	ctx.r5.u64 = r30.u32 & 0xFF;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// subfic r31,r5,256
	ctx.xer.ca = ctx.r5.u32 <= 256;
	r31.u64 = static_cast<uint64_t>(256) - ctx.r5.u64;
	// srawi r11,r30,8
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFF) != 0);
	ctx.r11.s64 = r30.s32 >> 8;
	// mullw r10,r11,r26
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r26.s32);
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + r28.u64;
	// ble cr6,0x823b2324
	if (!ctx.cr6.gt) goto loc_823B2324;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mullw r10,r10,r26
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r26.s32);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// subf r7,r6,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r6.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_823B22FC:
	// lbzx r8,r7,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// lbzu r17,1(r10)
	ea = 1 + ctx.r10.u32;
	r17.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// mullw r9,r8,r31
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(r31.s32);
	// mullw r8,r17,r5
	ctx.r8.s64 = int64_t(r17.s32) * int64_t(ctx.r5.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823b22fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B22FC;
loc_823B2324:
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r6,r27,r6
	ctx.r6.u64 = r27.u64 + ctx.r6.u64;
	// mullw r10,r11,r19
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r19.s32);
	// add r30,r30,r23
	r30.u64 = r30.u64 + r23.u64;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823b22c4
	if (ctx.cr6.lt) goto loc_823B22C4;
loc_823B2340:
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mullw r10,r11,r18
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r18.s32);
	// mullw r9,r11,r19
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(r19.s32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823b23a0
	if (!ctx.cr6.lt) goto loc_823B23A0;
	// cmpw cr6,r19,r18
	ctx.cr6.compare<int32_t>(r19.s32, r18.s32, ctx.xer);
	// bge cr6,0x823b23a0
	if (!ctx.cr6.lt) goto loc_823B23A0;
	// subf r9,r19,r18
	ctx.r9.u64 = r18.u64 - r19.u64;
loc_823B2360:
	// srawi r11,r30,8
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFF) != 0);
	ctx.r11.s64 = r30.s32 >> 8;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r26.s32);
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + r28.u64;
	// ble cr6,0x823b2390
	if (!ctx.cr6.gt) goto loc_823B2390;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
loc_823B2380:
	// lbzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823b2380
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B2380;
loc_823B2390:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r6,r27,r6
	ctx.r6.u64 = r27.u64 + ctx.r6.u64;
	// add r30,r30,r23
	r30.u64 = r30.u64 + r23.u64;
	// bne 0x823b2360
	if (!ctx.cr0.eq) goto loc_823B2360;
loc_823B23A0:
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b23c4
	if (ctx.cr6.eq) goto loc_823B23C4;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b23c4
	if (!ctx.cr6.eq) goto loc_823B23C4;
	// lwz r7,88(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r28,100(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// b 0x823b23fc
	goto loc_823B23FC;
loc_823B23C4:
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r28,r26
	r28.u64 = r26.u64;
	// lwz r7,32(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mullw r8,r11,r4
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,36(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,56(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// srawi r6,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// mullw r8,r11,r21
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(r21.s32);
	// addze r11,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r11.s64 = temp.s64;
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mullw r11,r5,r26
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(r26.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_823B23FC:
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r8,32(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mullw r6,r11,r22
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(r22.s32);
	// lwz r9,64(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r5,40(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mullw r10,r6,r26
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(r26.s32);
	// mullw r8,r8,r24
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r24.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r29,r10,r9
	r29.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq cr6,0x823b243c
	if (ctx.cr6.eq) goto loc_823B243C;
	// mullw r10,r11,r23
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r23.s32);
	// addi r10,r10,-256
	ctx.r10.s64 = ctx.r10.s64 + -256;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r10,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r10.s64 = temp.s64;
	// b 0x823b2440
	goto loc_823B2440;
loc_823B243C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823B2440:
	// srawi r9,r20,1
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x1) != 0);
	ctx.r9.s64 = r20.s32 >> 1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// add. r31,r9,r10
	r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x823b24dc
	if (!ctx.cr0.lt) goto loc_823B24DC;
	// subf r8,r31,r23
	ctx.r8.u64 = r23.u64 - r31.u64;
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// rotlwi r9,r8,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// srawi r6,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 1;
	// divw r25,r8,r23
	r25.u64 = uint32_t((r23.s32 && !(ctx.r8.s32 == INT32_MIN && r23.s32 == -1)) ? ctx.r8.s32 / r23.s32 : 0);
	// addze r10,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r10.s64 = temp.s64;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// add r9,r10,r25
	ctx.r9.u64 = ctx.r10.u64 + r25.u64;
	// andc r8,r23,r5
	ctx.r8.u64 = r23.u64 & ~ctx.r5.u64;
	// twllei r23,0
	if (r23.s32 == 0 || r23.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b24d4
	if (!ctx.cr6.lt) goto loc_823B24D4;
	// neg r6,r28
	ctx.r6.s64 = static_cast<int64_t>(-r28.u64);
	// subf r9,r7,r29
	ctx.r9.u64 = r29.u64 - ctx.r7.u64;
loc_823B248C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x823b24ac
	if (!ctx.cr6.gt) goto loc_823B24AC;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
loc_823B249C:
	// lbzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823b249c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B249C;
loc_823B24AC:
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r7,r28,r7
	ctx.r7.u64 = r28.u64 + ctx.r7.u64;
	// mullw r8,r11,r4
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// srawi r5,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 1;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addze r8,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r8.s64 = temp.s64;
	// add r8,r8,r25
	ctx.r8.u64 = ctx.r8.u64 + r25.u64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823b248c
	if (ctx.cr6.lt) goto loc_823B248C;
loc_823B24D4:
	// mullw r10,r25,r23
	ctx.r10.s64 = int64_t(r25.s32) * int64_t(r23.s32);
	// add r31,r10,r31
	r31.u64 = ctx.r10.u64 + r31.u64;
loc_823B24DC:
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// mullw r8,r11,r19
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(r19.s32);
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// add r30,r11,r25
	r30.u64 = ctx.r11.u64 + r25.u64;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x823b2574
	if (!ctx.cr6.lt) goto loc_823B2574;
loc_823B24F8:
	// clrlwi r5,r31,24
	ctx.r5.u64 = r31.u32 & 0xFF;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// subfic r4,r5,256
	ctx.xer.ca = ctx.r5.u32 <= 256;
	ctx.r4.u64 = static_cast<uint64_t>(256) - ctx.r5.u64;
	// srawi r11,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	ctx.r11.s64 = r31.s32 >> 8;
	// mullw r10,r11,r26
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r26.s32);
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + r29.u64;
	// ble cr6,0x823b2558
	if (!ctx.cr6.gt) goto loc_823B2558;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mullw r10,r10,r26
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r26.s32);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// subf r6,r7,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r7.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_823B2530:
	// lbzx r8,r11,r6
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// lbzu r27,1(r10)
	ea = 1 + ctx.r10.u32;
	r27.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// mullw r9,r8,r4
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// mullw r8,r27,r5
	ctx.r8.s64 = int64_t(r27.s32) * int64_t(ctx.r5.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823b2530
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B2530;
loc_823B2558:
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r7,r28,r7
	ctx.r7.u64 = r28.u64 + ctx.r7.u64;
	// mullw r10,r11,r19
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r19.s32);
	// add r31,r31,r23
	r31.u64 = r31.u64 + r23.u64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823b24f8
	if (ctx.cr6.lt) goto loc_823B24F8;
loc_823B2574:
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mullw r10,r11,r18
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r18.s32);
	// mullw r9,r11,r19
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(r19.s32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823b25d4
	if (!ctx.cr6.lt) goto loc_823B25D4;
	// cmpw cr6,r19,r18
	ctx.cr6.compare<int32_t>(r19.s32, r18.s32, ctx.xer);
	// bge cr6,0x823b25d4
	if (!ctx.cr6.lt) goto loc_823B25D4;
	// subf r9,r19,r18
	ctx.r9.u64 = r18.u64 - r19.u64;
loc_823B2594:
	// srawi r11,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	ctx.r11.s64 = r31.s32 >> 8;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r26.s32);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + r29.u64;
	// ble cr6,0x823b25c4
	if (!ctx.cr6.gt) goto loc_823B25C4;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
loc_823B25B4:
	// lbzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823b25b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B25B4;
loc_823B25C4:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r7,r28,r7
	ctx.r7.u64 = r28.u64 + ctx.r7.u64;
	// add r31,r31,r23
	r31.u64 = r31.u64 + r23.u64;
	// bne 0x823b2594
	if (!ctx.cr0.eq) goto loc_823B2594;
loc_823B25D4:
	// b 0x822d4eac
	return;
}

DEFINE_REX_FUNC(sub_823CF0F0) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,11960(r3)
	REX_STORE_U32(ctx.r3.u32 + 11960, ctx.r11.u32);
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,11024(r3)
	REX_STORE_U32(ctx.r3.u32 + 11024, ctx.r11.u32);
	// stw r10,11988(r3)
	REX_STORE_U32(ctx.r3.u32 + 11988, ctx.r10.u32);
	// stw r11,11980(r3)
	REX_STORE_U32(ctx.r3.u32 + 11980, ctx.r11.u32);
	// stw r11,11984(r3)
	REX_STORE_U32(ctx.r3.u32 + 11984, ctx.r11.u32);
	// stb r10,11958(r3)
	REX_STORE_U8(ctx.r3.u32 + 11958, ctx.r10.u8);
	// stw r11,11964(r3)
	REX_STORE_U32(ctx.r3.u32 + 11964, ctx.r11.u32);
	// stb r11,11959(r3)
	REX_STORE_U8(ctx.r3.u32 + 11959, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D0878) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823D0880;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,257
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 257, ctx.xer);
	// bge cr6,0x823d08d0
	if (!ctx.cr6.lt) goto loc_823D08D0;
	// subfic r5,r4,257
	ctx.xer.ca = ctx.r4.u32 <= 257;
	ctx.r5.u64 = static_cast<uint64_t>(257) - ctx.r4.u64;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r31.s32, ctx.xer);
	// blt cr6,0x823d08a8
	if (ctx.cr6.lt) goto loc_823D08A8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_823D08A8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823d00d0
	ctx.lr = 0x823D08B4;
	sub_823D00D0(ctx, base);
	// subf r11,r3,r30
	ctx.r11.u64 = r30.u64 - ctx.r3.u64;
	// stw r3,11960(r29)
	REX_STORE_U32(r29.u32 + 11960, ctx.r3.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// add. r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bgt 0x823d08d0
	if (ctx.cr0.gt) goto loc_823D08D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x823d08e0
	goto loc_823D08E0;
loc_823D08D0:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823d0448
	ctx.lr = 0x823D08E0;
	sub_823D0448(ctx, base);
loc_823D08E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823D3808) {
	REX_FUNC_PROLOGUE();
	// b 0x823d3720
	sub_823D3720(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823D3810) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823d3820
	if (ctx.cr6.eq) goto loc_823D3820;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_823D3820:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823d382c
	if (ctx.cr6.eq) goto loc_823D382C;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_823D382C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823d3840
	if (!ctx.cr6.eq) goto loc_823D3840;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// blr 
	return;
loc_823D3840:
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
	// bne cr6,0x823d3860
	if (!ctx.cr6.eq) goto loc_823D3860;
loc_823D3858:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_823D3860:
	// rlwinm r11,r8,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF0000;
	// lis r10,18008
	ctx.r10.s64 = 1180172288;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823d38b8
	if (ctx.cr6.eq) goto loc_823D38B8;
	// lis r10,21592
	ctx.r10.s64 = 1415053312;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823d38b8
	if (ctx.cr6.eq) goto loc_823D38B8;
	// lis r10,32766
	ctx.r10.s64 = 2147352576;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823d38b8
	if (ctx.cr6.eq) goto loc_823D38B8;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823d38b8
	if (ctx.cr6.eq) goto loc_823D38B8;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823d38b8
	if (ctx.cr6.eq) goto loc_823D38B8;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823d38b8
	if (ctx.cr6.eq) goto loc_823D38B8;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// blr 
	return;
loc_823D38B8:
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_823D38BC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823d3920
	if (!ctx.cr0.eq) goto loc_823D3920;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x823d3858
	if (ctx.cr6.eq) goto loc_823D3858;
	// cmplwi cr6,r9,65534
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65534, ctx.xer);
	// bne cr6,0x823d3900
	if (!ctx.cr6.eq) goto loc_823D3900;
	// rlwinm r10,r10,16,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x7FFF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x823d38f4
	if (!ctx.cr6.gt) goto loc_823D38F4;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823d3928
	if (ctx.cr6.eq) goto loc_823D3928;
loc_823D38F4:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_823D38F8:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823d3920
	goto loc_823D3920;
loc_823D3900:
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r7,512
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 512, ctx.xer);
	// blt cr6,0x823d3914
	if (ctx.cr6.lt) goto loc_823D3914;
	// rlwinm r10,r10,10,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3C;
	// b 0x823d38f8
	goto loc_823D38F8;
loc_823D3914:
	// cmplwi cr6,r9,81
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 81, ctx.xer);
	// bne cr6,0x823d3920
	if (!ctx.cr6.eq) goto loc_823D3920;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
loc_823D3920:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x823d38bc
	goto loc_823D38BC;
loc_823D3928:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823d3938
	if (ctx.cr6.eq) goto loc_823D3938;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_823D3938:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823d394c
	if (ctx.cr6.eq) goto loc_823D394C;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_823D394C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D7AD8) {
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
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// lis r11,-32195
	ctx.r11.s64 = -2109931520;
	// lis r10,-32195
	ctx.r10.s64 = -2109931520;
	// lis r31,-32172
	r31.s64 = -2108424192;
	// addi r11,r11,30976
	ctx.r11.s64 = ctx.r11.s64 + 30976;
	// addi r10,r10,31224
	ctx.r10.s64 = ctx.r10.s64 + 31224;
	// stw r11,11328(r9)
	REX_STORE_U32(ctx.r9.u32 + 11328, ctx.r11.u32);
	// stw r10,11332(r31)
	REX_STORE_U32(r31.u32 + 11332, ctx.r10.u32);
	// bl 0x823d7900
	ctx.lr = 0x823D7B0C;
	sub_823D7900(ctx, base);
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

DEFINE_REX_FUNC(sub_823D7E70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,108(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r7,96(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r31,32(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r9,r8,r7
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r30,r9,r10
	r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x823d7f20
	goto loc_823D7F20;
loc_823D7E9C:
	// lwz r9,104(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r8,96(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823d7f04
	if (!ctx.cr6.lt) goto loc_823D7F04;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r31,-1
	ctx.r8.s64 = r31.s64 + -1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823D7ED4:
	// lbz r6,1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbzu r5,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbz r4,1(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbzu r7,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// add r7,r5,r4
	ctx.r7.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// rlwinm r7,r7,30,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0xFF;
	// stbu r7,1(r8)
	ea = 1 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x823d7ed4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D7ED4;
loc_823D7F04:
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,96(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 96);
	// lwz r8,96(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// add r31,r9,r31
	r31.u64 = ctx.r9.u64 + r31.u64;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823D7F20:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// blt cr6,0x823d7e9c
	if (ctx.cr6.lt) goto loc_823D7E9C;
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D91E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823D91F0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r31,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x823cd118
	ctx.lr = 0x823D920C;
	sub_823CD118(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823d92f4
	if (ctx.cr0.eq) goto loc_823D92F4;
	// clrldi r11,r31,32
	ctx.r11.u64 = r31.u64 & 0xFFFFFFFF;
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
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
	// li r8,0
	ctx.r8.s64 = 0;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// beq cr6,0x823d92f4
	if (ctx.cr6.eq) goto loc_823D92F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// lfs f12,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
loc_823D9264:
	// clrldi r11,r8,32
	ctx.r11.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmadds f0,f0,f11,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f13.f64)));
	// fctiwz f10,f0
	ctx.f10.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// addic. r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fadds f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// bge 0x823d92c0
	if (!ctx.cr0.lt) goto loc_823D92C0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r9,r30,-1
	ctx.r9.s64 = r30.s64 + -1;
	// bne cr6,0x823d92c0
	if (!ctx.cr6.eq) goto loc_823D92C0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_823D92C0:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// blt cr6,0x823d92d8
	if (ctx.cr6.lt) goto loc_823D92D8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x823d92d8
	if (!ctx.cr6.eq) goto loc_823D92D8;
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
loc_823D92D8:
	// stfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x823d9264
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D9264;
loc_823D92F4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823DCF30) {
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
	ctx.lr = 0x823DCF38;
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
	// beq cr6,0x823dcf70
	if (ctx.cr6.eq) goto loc_823DCF70;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x823DCF6C;
	sub_82413040(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_823DCF70:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823dcf8c
	if (ctx.cr6.eq) goto loc_823DCF8C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc0b0
	ctx.lr = 0x823DCF88;
	sub_823DC0B0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_823DCF8C:
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
	// bne 0x823dcff8
	if (!ctx.cr0.eq) goto loc_823DCFF8;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x823dd000
	goto loc_823DD000;
loc_823DCFF8:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_823DD000:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823dd018
	if (ctx.cr6.eq) goto loc_823DD018;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x823DD018;
	sub_823DC658(ctx, base);
loc_823DD018:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823dd2f0
	if (!ctx.cr6.gt) goto loc_823DD2F0;
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
loc_823DD08C:
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
	// beq cr6,0x823dd23c
	if (ctx.cr6.eq) goto loc_823DD23C;
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
loc_823DD23C:
	// cmpwi cr6,r4,31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 31, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x823dd24c
	if (ctx.cr6.lt) goto loc_823DD24C;
	// li r11,31
	ctx.r11.s64 = 31;
loc_823DD24C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823dd264
	if (!ctx.cr6.gt) goto loc_823DD264;
	// cmpwi cr6,r4,31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 31, ctx.xer);
	// blt cr6,0x823dd268
	if (ctx.cr6.lt) goto loc_823DD268;
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x823dd268
	goto loc_823DD268;
loc_823DD264:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823DD268:
	// cmpwi cr6,r5,63
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 63, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x823dd278
	if (ctx.cr6.lt) goto loc_823DD278;
	// li r11,63
	ctx.r11.s64 = 63;
loc_823DD278:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823dd290
	if (!ctx.cr6.gt) goto loc_823DD290;
	// cmpwi cr6,r5,63
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 63, ctx.xer);
	// blt cr6,0x823dd294
	if (ctx.cr6.lt) goto loc_823DD294;
	// li r5,63
	ctx.r5.s64 = 63;
	// b 0x823dd294
	goto loc_823DD294;
loc_823DD290:
	// li r5,0
	ctx.r5.s64 = 0;
loc_823DD294:
	// cmpwi cr6,r6,31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 31, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x823dd2a4
	if (ctx.cr6.lt) goto loc_823DD2A4;
	// li r11,31
	ctx.r11.s64 = 31;
loc_823DD2A4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823dd2bc
	if (!ctx.cr6.gt) goto loc_823DD2BC;
	// cmpwi cr6,r6,31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 31, ctx.xer);
	// blt cr6,0x823dd2c0
	if (ctx.cr6.lt) goto loc_823DD2C0;
	// li r6,31
	ctx.r6.s64 = 31;
	// b 0x823dd2c0
	goto loc_823DD2C0;
loc_823DD2BC:
	// li r6,0
	ctx.r6.s64 = 0;
loc_823DD2C0:
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
	// blt cr6,0x823dd08c
	if (ctx.cr6.lt) goto loc_823DD08C;
loc_823DD2F0:
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

DEFINE_REX_FUNC(sub_823E4E20) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823E4E28;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E4E40;
	sub_823DBAC8(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// li r30,0
	r30.s64 = 0;
	// addi r10,r10,-6624
	ctx.r10.s64 = ctx.r10.s64 + -6624;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,136(r31)
	REX_STORE_U32(r31.u32 + 136, r30.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r30,148(r31)
	REX_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r30,144(r31)
	REX_STORE_U32(r31.u32 + 144, r30.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r11,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r11.u32);
	// stw r30,152(r31)
	REX_STORE_U32(r31.u32 + 152, r30.u32);
	// stw r30,160(r31)
	REX_STORE_U32(r31.u32 + 160, r30.u32);
	// stw r9,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r9.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r10,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r10.u32);
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x823cd118
	ctx.lr = 0x823E4E9C;
	sub_823CD118(ctx, base);
	// stw r3,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x823e4eac
	if (!ctx.cr0.eq) goto loc_823E4EAC;
	// stw r30,164(r31)
	REX_STORE_U32(r31.u32 + 164, r30.u32);
loc_823E4EAC:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// addis r11,r11,-6184
	ctx.r11.s64 = ctx.r11.s64 + -405274624;
	// addic. r11,r11,-75
	ctx.xer.ca = ctx.r11.u32 > 74;
	ctx.r11.s64 = ctx.r11.s64 + -75;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e4eec
	if (ctx.cr0.eq) goto loc_823E4EEC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x823e4edc
	if (ctx.cr6.eq) goto loc_823E4EDC;
	// addis r11,r11,-504
	ctx.r11.s64 = ctx.r11.s64 + -33030144;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823e4eec
	if (ctx.cr0.eq) goto loc_823E4EEC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823e4ef8
	if (!ctx.cr6.eq) goto loc_823E4EF8;
loc_823E4EDC:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r30,172(r31)
	REX_STORE_U32(r31.u32 + 172, r30.u32);
	// stw r11,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r11.u32);
	// b 0x823e4ef8
	goto loc_823E4EF8;
loc_823E4EEC:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r30,168(r31)
	REX_STORE_U32(r31.u32 + 168, r30.u32);
	// stw r11,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r11.u32);
loc_823E4EF8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823E7B38) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823e7b64
	if (!ctx.cr6.eq) goto loc_823E7B64;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823e7b54
	if (ctx.cr6.lt) goto loc_823E7B54;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823E7B54:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x823e7b98
	goto loc_823E7B98;
loc_823E7B64:
	// not r11,r4
	ctx.r11.u64 = ~ctx.r4.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lhz r10,10(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823e7b80
	if (ctx.cr6.lt) goto loc_823E7B80;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823e7b8c
	goto loc_823E7B8C;
loc_823E7B80:
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_823E7B8C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_823E7B98:
	// not r3,r11
	ctx.r3.u64 = ~ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E9108) {
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
	ctx.lr = 0x823E9110;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,24(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r6,32(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lhz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x823e93d0
	if (ctx.cr6.lt) goto loc_823E93D0;
	// beq cr6,0x823e9350
	if (ctx.cr6.eq) goto loc_823E9350;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x823e92a0
	if (ctx.cr6.lt) goto loc_823E92A0;
	// beq cr6,0x823e91fc
	if (ctx.cr6.eq) goto loc_823E91FC;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x823e9160
	if (ctx.cr6.eq) goto loc_823E9160;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x823e95a4
	goto loc_823E95A4;
loc_823E9160:
	// lwz r10,52(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 52);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 8);
	// divwu r28,r9,r10
	r28.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823e9180
	if (!ctx.cr6.gt) goto loc_823E9180;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_823E9180:
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x823e91f4
	if (ctx.cr6.eq) goto loc_823E91F4;
loc_823E918C:
	// lhz r11,10(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 10);
	// li r29,0
	r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823e91e8
	if (ctx.cr0.eq) goto loc_823E91E8;
	// li r30,0
	r30.s64 = 0;
loc_823E91A0:
	// lwz r11,56(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 56);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwzx r31,r30,r11
	r31.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,48(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x823e8d70
	ctx.lr = 0x823E91C0;
	sub_823E8D70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823e95a4
	if (ctx.cr0.lt) goto loc_823E95A4;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lhz r10,10(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 10);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// blt cr6,0x823e91a0
	if (ctx.cr6.lt) goto loc_823E91A0;
loc_823E91E8:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(r27.u32, r28.u32, ctx.xer);
	// blt cr6,0x823e918c
	if (ctx.cr6.lt) goto loc_823E918C;
loc_823E91F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823e95a4
	goto loc_823E95A4;
loc_823E91FC:
	// lhz r9,6(r26)
	ctx.r9.u64 = REX_LOAD_U16(r26.u32 + 6);
	// lhz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 8);
	// divwu r3,r11,r9
	ctx.r3.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823e9218
	if (!ctx.cr6.gt) goto loc_823E9218;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_823E9218:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e93c8
	if (ctx.cr6.eq) goto loc_823E93C8;
	// addi r4,r6,-4
	ctx.r4.s64 = ctx.r6.s64 + -4;
loc_823E9228:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823e9290
	if (ctx.cr6.eq) goto loc_823E9290;
	// lhz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 4);
loc_823E9238:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823e9280
	if (ctx.cr6.eq) goto loc_823E9280;
loc_823E9244:
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// ble cr6,0x823e9254
	if (!ctx.cr6.gt) goto loc_823E9254;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x823e926c
	goto loc_823E926C;
loc_823E9254:
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
loc_823E926C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
	// lhz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823e9244
	if (ctx.cr6.lt) goto loc_823E9244;
loc_823E9280:
	// lhz r9,6(r26)
	ctx.r9.u64 = REX_LOAD_U16(r26.u32 + 6);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823e9238
	if (ctx.cr6.lt) goto loc_823E9238;
loc_823E9290:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x823e9228
	if (ctx.cr6.lt) goto loc_823E9228;
	// b 0x823e93c8
	goto loc_823E93C8;
loc_823E92A0:
	// lhz r8,4(r26)
	ctx.r8.u64 = REX_LOAD_U16(r26.u32 + 4);
	// lhz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 8);
	// divwu r3,r11,r8
	ctx.r3.u64 = uint32_t(ctx.r8.u32 ? ctx.r11.u32 / ctx.r8.u32 : 0);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823e92bc
	if (!ctx.cr6.gt) goto loc_823E92BC;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_823E92BC:
	// lhz r10,6(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 6);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x823e93e4
	if (ctx.cr6.eq) goto loc_823E93E4;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e93c8
	if (ctx.cr6.eq) goto loc_823E93C8;
	// addi r4,r6,-4
	ctx.r4.s64 = ctx.r6.s64 + -4;
loc_823E92D8:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823e9340
	if (ctx.cr6.eq) goto loc_823E9340;
loc_823E92E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823e9330
	if (ctx.cr6.eq) goto loc_823E9330;
loc_823E92F0:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x823e9300
	if (!ctx.cr6.gt) goto loc_823E9300;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x823e931c
	goto loc_823E931C;
loc_823E9300:
	// lhz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 4);
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
loc_823E931C:
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r10,6(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 6);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823e92f0
	if (ctx.cr6.lt) goto loc_823E92F0;
loc_823E9330:
	// lhz r8,4(r26)
	ctx.r8.u64 = REX_LOAD_U16(r26.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823e92e4
	if (ctx.cr6.lt) goto loc_823E92E4;
loc_823E9340:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x823e92d8
	if (ctx.cr6.lt) goto loc_823E92D8;
	// b 0x823e93c8
	goto loc_823E93C8;
loc_823E9350:
	// lhz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823e9364
	if (!ctx.cr6.gt) goto loc_823E9364;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_823E9364:
	// lhz r10,6(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 6);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x823e93e4
	if (ctx.cr6.eq) goto loc_823E93E4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e93c8
	if (ctx.cr6.eq) goto loc_823E93C8;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
loc_823E9384:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823e93c0
	if (ctx.cr6.eq) goto loc_823E93C0;
loc_823E9390:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x823e93a0
	if (!ctx.cr6.gt) goto loc_823E93A0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x823e93ac
	goto loc_823E93AC;
loc_823E93A0:
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
loc_823E93AC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// lhz r10,6(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 6);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823e9390
	if (ctx.cr6.lt) goto loc_823E9390;
loc_823E93C0:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x823e9384
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E9384;
loc_823E93C8:
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// b 0x823e93e4
	goto loc_823E93E4;
loc_823E93D0:
	// lhz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 8);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823e93e4
	if (!ctx.cr6.gt) goto loc_823E93E4;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_823E93E4:
	// lhz r10,2(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 2);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x823e9474
	if (ctx.cr6.eq) goto loc_823E9474;
	// lwz r11,52(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 52);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// beq cr6,0x823e9434
	if (ctx.cr6.eq) goto loc_823E9434;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x823e9470
	if (!ctx.cr6.eq) goto loc_823E9470;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e9470
	if (ctx.cr6.eq) goto loc_823E9470;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// subf r11,r6,r25
	ctx.r11.u64 = r25.u64 - ctx.r6.u64;
loc_823E941C:
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	REX_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823e941c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E941C;
	// b 0x823e9470
	goto loc_823E9470;
loc_823E9434:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e9470
	if (ctx.cr6.eq) goto loc_823E9470;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// subf r9,r6,r25
	ctx.r9.u64 = r25.u64 - ctx.r6.u64;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
loc_823E9450:
	// lfsx f13,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x823e9464
	if (!ctx.cr6.eq) goto loc_823E9464;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823E9464:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823e9450
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E9450;
loc_823E9470:
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
loc_823E9474:
	// lhz r9,8(r24)
	ctx.r9.u64 = REX_LOAD_U16(r24.u32 + 8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x823e9554
	if (ctx.cr0.eq) goto loc_823E9554;
	// lhz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x823e9498
	if (ctx.cr6.eq) goto loc_823E9498;
	// lhz r11,6(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 6);
	// lhz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 4);
	// b 0x823e94a0
	goto loc_823E94A0;
loc_823E9498:
	// lhz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 4);
	// lhz r10,6(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 6);
loc_823E94A0:
	// clrlwi. r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x823e9554
	if (ctx.cr0.eq) goto loc_823E9554;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x823e94bc
	if (!ctx.cr6.eq) goto loc_823E94BC;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r4,r9,9268
	ctx.r4.s64 = ctx.r9.s64 + 9268;
	// b 0x823e94c4
	goto loc_823E94C4;
loc_823E94BC:
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r4,r9,9252
	ctx.r4.s64 = ctx.r9.s64 + 9252;
loc_823E94C4:
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// mullw. r8,r10,r3
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r7,r9,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// beq 0x823e9550
	if (ctx.cr0.eq) goto loc_823E9550;
	// mullw r9,r8,r7
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// mullw r5,r8,r11
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
loc_823E94DC:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subf r5,r11,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r11.u64;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823e9518
	if (!ctx.cr6.gt) goto loc_823E9518;
	// subf r31,r11,r7
	r31.u64 = ctx.r7.u64 - ctx.r11.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_823E94FC:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r31,r10,2,28,29
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// add r30,r9,r10
	r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r31,r4
	r31.u64 = REX_LOAD_U32(r31.u32 + ctx.r4.u32);
	// stwx r31,r30,r6
	REX_STORE_U32(r30.u32 + ctx.r6.u32, r31.u32);
	// bdnz 0x823e94fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E94FC;
loc_823E9518:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e9548
	if (ctx.cr6.eq) goto loc_823E9548;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823E9528:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r31,r5,r10
	r31.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r30,r9,r10
	r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r31,r25
	r31.u64 = REX_LOAD_U32(r31.u32 + r25.u32);
	// stwx r31,r30,r6
	REX_STORE_U32(r30.u32 + ctx.r6.u32, r31.u32);
	// bdnz 0x823e9528
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E9528;
loc_823E9548:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823e94dc
	if (!ctx.cr6.eq) goto loc_823E94DC;
loc_823E9550:
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
loc_823E9554:
	// lwz r10,44(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 44);
	// lhz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 12);
	// mullw r7,r10,r3
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823e956c
	if (!ctx.cr6.gt) goto loc_823E956C;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_823E956C:
	// lwz r10,28(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823e9584
	if (!ctx.cr6.eq) goto loc_823E9584;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x823e95a4
	goto loc_823E95A4;
loc_823E9584:
	// lhz r11,10(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 10);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + r22.u64;
	// bctrl 
	ctx.lr = 0x823E959C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_823E95A4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_823FA9E0) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,152(r3)
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// b 0x823fa970
	sub_823FA970(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823FAC90) {
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
	ctx.lr = 0x823FAC98;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,332(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 332);
	// li r25,0
	r25.s64 = 0;
	// lwz r27,432(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 432);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823fad14
	if (!ctx.cr6.gt) goto loc_823FAD14;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r30,r3,332
	r30.s64 = ctx.r3.s64 + 332;
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
loc_823FACC4:
	// lwzu r11,4(r30)
	ea = 4 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r8,152(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 152);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,32(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// addi r10,r10,18
	ctx.r10.s64 = ctx.r10.s64 + 18;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mullw r5,r8,r9
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// lwzx r4,r11,r27
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// bctrl 
	ctx.lr = 0x823FAD00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,332(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 332);
	// stwu r3,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r29.u32 = ea;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823facc4
	if (ctx.cr6.lt) goto loc_823FACC4;
loc_823FAD14:
	// lwz r23,24(r27)
	r23.u64 = REX_LOAD_U32(r27.u32 + 24);
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 28);
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823fae30
	if (!ctx.cr6.lt) goto loc_823FAE30;
	// rlwinm r24,r23,2,0,29
	r24.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
loc_823FAD28:
	// lwz r26,20(r27)
	r26.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwz r11,352(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 352);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823fae18
	if (!ctx.cr6.lt) goto loc_823FAE18;
	// addi r22,r27,32
	r22.s64 = r27.s64 + 32;
loc_823FAD3C:
	// lwz r11,332(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 332);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823fade8
	if (!ctx.cr6.gt) goto loc_823FADE8;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// addi r31,r28,336
	r31.s64 = r28.s64 + 336;
loc_823FAD58:
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r9,52(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 52);
	// lwz r10,56(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 56);
	// mullw r11,r9,r26
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r26.s32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823fadd0
	if (!ctx.cr6.gt) goto loc_823FADD0;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r4,r11,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r5,r10,r24
	ctx.r5.u64 = ctx.r10.u64 + r24.u64;
loc_823FAD80:
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// ble cr6,0x823fadbc
	if (!ctx.cr6.gt) goto loc_823FADBC;
	// addi r9,r6,7
	ctx.r9.s64 = ctx.r6.s64 + 7;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r27
	ctx.r8.u64 = ctx.r9.u64 + r27.u64;
loc_823FADA0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// lwz r9,52(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 52);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823fada0
	if (ctx.cr6.lt) goto loc_823FADA0;
loc_823FADBC:
	// lwz r11,56(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 56);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823fad80
	if (ctx.cr6.lt) goto loc_823FAD80;
loc_823FADD0:
	// lwz r11,332(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 332);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823fad58
	if (ctx.cr6.lt) goto loc_823FAD58;
loc_823FADE8:
	// lwz r11,448(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 448);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FAE00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823fae74
	if (ctx.cr6.eq) goto loc_823FAE74;
	// lwz r11,352(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 352);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823fad3c
	if (ctx.cr6.lt) goto loc_823FAD3C;
loc_823FAE18:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// stw r25,20(r27)
	REX_STORE_U32(r27.u32 + 20, r25.u32);
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 28);
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823fad28
	if (ctx.cr6.lt) goto loc_823FAD28;
loc_823FAE30:
	// lwz r11,152(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 152);
	// lwz r9,324(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 324);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,152(r28)
	REX_STORE_U32(r28.u32 + 152, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823faed0
	if (!ctx.cr6.lt) goto loc_823FAED0;
	// lwz r8,332(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 332);
	// lwz r10,432(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 432);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x823fae88
	if (!ctx.cr6.gt) goto loc_823FAE88;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r25,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, r25.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r25,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r25.u32);
	// stw r11,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec0
	return;
loc_823FAE74:
	// stw r23,24(r27)
	REX_STORE_U32(r27.u32 + 24, r23.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r26,20(r27)
	REX_STORE_U32(r27.u32 + 20, r26.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec0
	return;
loc_823FAE88:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lwz r11,336(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 336);
	// bge cr6,0x823faeb4
	if (!ctx.cr6.lt) goto loc_823FAEB4;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r25,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, r25.u32);
	// stw r25,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r25.u32);
	// stw r9,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec0
	return;
loc_823FAEB4:
	// lwz r9,72(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r25,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, r25.u32);
	// stw r25,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r25.u32);
	// stw r9,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec0
	return;
loc_823FAED0:
	// lwz r11,440(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 440);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FAEE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82404FC8) {
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
	ctx.lr = 0x82404FD0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82405050
	if (!ctx.cr6.eq) goto loc_82405050;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// bl 0x82221320
	ctx.lr = 0x82405008;
	sub_82221320(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r3,8
	ctx.r3.s64 = 524288;
	// clrlwi r6,r11,26
	ctx.r6.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x8240acb0
	ctx.lr = 0x82405020;
	sub_8240ACB0(ctx, base);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x823cd118
	ctx.lr = 0x8240502C;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82405040
	if (!ctx.cr0.eq) goto loc_82405040;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82405084
	goto loc_82405084;
loc_82405040:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lis r3,8
	ctx.r3.s64 = 524288;
	// bl 0x8240ac10
	ctx.lr = 0x82405050;
	sub_8240AC10(ctx, base);
loc_82405050:
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8240d768
	ctx.lr = 0x82405068;
	sub_8240D768(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82405080
	if (ctx.cr6.eq) goto loc_82405080;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cd250
	ctx.lr = 0x82405080;
	sub_823CD250(ctx, base);
loc_82405080:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82405084:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82406250) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r4,28
	ctx.r11.s64 = ctx.r4.s64 + 28;
	// lfs f0,1996(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lfs f13,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
loc_82406288:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// srw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x824062a8
	if (!ctx.cr6.eq) goto loc_824062A8;
	// fsubs f12,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_824062A8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82406288
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82406288;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lvrx128 v63,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v1,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824092C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// clrlwi. r9,r4,30
	ctx.r9.u64 = ctx.r4.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// b 0x824092f8
	goto loc_824092F8;
loc_824092D8:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x82409300
	if (ctx.cr6.lt) goto loc_82409300;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// clrlwi. r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_824092F8:
	// stw r10,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// bne 0x824092d8
	if (!ctx.cr0.eq) goto loc_824092D8;
loc_82409300:
	// clrlwi. r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82409330
	if (ctx.cr0.eq) goto loc_82409330;
loc_82409308:
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// blt cr6,0x82409330
	if (ctx.cr6.lt) goto loc_82409330;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// clrlwi. r8,r11,29
	ctx.r8.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// bne 0x82409308
	if (!ctx.cr0.eq) goto loc_82409308;
loc_82409330:
	// clrlwi. r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82409360
	if (ctx.cr0.eq) goto loc_82409360;
loc_82409338:
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// blt cr6,0x82409360
	if (ctx.cr6.lt) goto loc_82409360;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r5,r5,-8
	ctx.r5.s64 = ctx.r5.s64 + -8;
	// clrlwi. r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r10,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// bne 0x82409338
	if (!ctx.cr0.eq) goto loc_82409338;
loc_82409360:
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x8240938c
	goto loc_8240938C;
loc_82409368:
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// blt cr6,0x82409438
	if (ctx.cr6.lt) goto loc_82409438;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvlx128 v63,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// addi r5,r5,-16
	ctx.r5.s64 = ctx.r5.s64 + -16;
	// stvrx128 v63,r10,r9
	ea = ctx.r10.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r10,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
loc_8240938C:
	// addi r8,r10,15
	ctx.r8.s64 = ctx.r10.s64 + 15;
	// clrlwi r8,r8,25
	ctx.r8.u64 = ctx.r8.u32 & 0x7F;
	// cmplwi cr6,r8,16
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16, ctx.xer);
	// bge cr6,0x82409368
	if (!ctx.cr6.lt) goto loc_82409368;
	// b 0x82409438
	goto loc_82409438;
loc_824093A0:
	// li r8,15
	ctx.r8.s64 = 15;
	// dcbzl r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r10,-16(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// addi r7,r10,32
	ctx.r7.s64 = ctx.r10.s64 + 32;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_824093BC:
	// lvrx128 v62,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r6,r8,-16
	ctx.r6.s64 = ctx.r8.s64 + -16;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// vor128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lvrx128 v61,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r7,-16
	ctx.r3.s64 = ctx.r7.s64 + -16;
	// vor128 v62,v62,v61
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// lvlx128 v60,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// lvrx128 v61,r9,r6
	temp.u32 = ctx.r9.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r6,r7,16
	ctx.r6.s64 = ctx.r7.s64 + 16;
	// vor128 v61,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvlx128 v60,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v59,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r5,r5,-64
	ctx.r5.s64 = ctx.r5.s64 + -64;
	// stvlx128 v63,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// vor128 v60,v60,v59
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// stvrx128 v63,r10,r9
	ea = ctx.r10.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// stvlx128 v61,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvrx128 v61,r3,r9
	ea = ctx.r3.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// stvlx128 v62,r0,r7
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvrx128 v62,r7,r9
	ea = ctx.r7.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// addi r7,r7,64
	ctx.r7.s64 = ctx.r7.s64 + 64;
	// stvlx128 v60,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvrx128 v60,r6,r9
	ea = ctx.r6.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// bdnz 0x824093bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824093BC;
	// stw r10,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
loc_82409438:
	// cmplwi cr6,r5,143
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 143, ctx.xer);
	// bge cr6,0x824093a0
	if (!ctx.cr6.lt) goto loc_824093A0;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// blt cr6,0x8240946c
	if (ctx.cr6.lt) goto loc_8240946C;
	// rlwinm r8,r5,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82409450:
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvlx128 v63,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// addi r5,r5,-16
	ctx.r5.s64 = ctx.r5.s64 + -16;
	// stvrx128 v63,r10,r9
	ea = ctx.r10.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82409450
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82409450;
loc_8240946C:
	// clrlwi. r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82409498
	if (ctx.cr0.eq) goto loc_82409498;
loc_82409474:
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// blt cr6,0x82409498
	if (ctx.cr6.lt) goto loc_82409498;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r5,r5,-8
	ctx.r5.s64 = ctx.r5.s64 + -8;
	// clrlwi. r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bne 0x82409474
	if (!ctx.cr0.eq) goto loc_82409474;
loc_82409498:
	// clrlwi. r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824094c4
	if (ctx.cr0.eq) goto loc_824094C4;
loc_824094A0:
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// blt cr6,0x824094c4
	if (ctx.cr6.lt) goto loc_824094C4;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// clrlwi. r8,r11,29
	ctx.r8.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x824094a0
	if (!ctx.cr0.eq) goto loc_824094A0;
loc_824094C4:
	// clrlwi. r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_824094D0:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824094d0
	if (!ctx.cr0.eq) goto loc_824094D0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82418410) {
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
	ctx.lr = 0x82418418;
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
	// beq cr6,0x82418450
	if (ctx.cr6.eq) goto loc_82418450;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x8241844C;
	sub_82413040(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82418450:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241846c
	if (ctx.cr6.eq) goto loc_8241846C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413dd0
	ctx.lr = 0x82418468;
	sub_82413DD0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8241846C:
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
	// bne 0x824184d8
	if (!ctx.cr0.eq) goto loc_824184D8;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x824184e0
	goto loc_824184E0;
loc_824184D8:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_824184E0:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824184f8
	if (ctx.cr6.eq) goto loc_824184F8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x824184F8;
	sub_823DC658(ctx, base);
loc_824184F8:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824187c8
	if (!ctx.cr6.gt) goto loc_824187C8;
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
	// lfs f7,-30112(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + -30112);
	ctx.f7.f64 = double(temp.f32);
	// addi r29,r27,12
	r29.s64 = r27.s64 + 12;
	// lfs f4,25732(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 25732);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,29356(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 29356);
	ctx.f6.f64 = double(temp.f32);
loc_8241856C:
	// add r11,r29,r10
	ctx.r11.u64 = r29.u64 + ctx.r10.u64;
	// lfsx f10,r29,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f10,f29,f10
	ctx.f10.f64 = double(float(f29.f64 + ctx.f10.f64));
	// rlwinm r7,r26,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xC;
	// lwz r6,92(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f9,-12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 + f31.f64));
	// fadds f8,f8,f30
	ctx.f8.f64 = double(float(ctx.f8.f64 + f30.f64));
	// lfsx f3,r7,r24
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f10,f10,f4
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fmuls f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
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
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f2,f1
	ctx.f2.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f2,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// fctiwz f3,f3
	ctx.f3.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f3.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// beq cr6,0x8241871c
	if (ctx.cr6.eq) goto loc_8241871C;
	// extsw r28,r4
	r28.s64 = ctx.r4.s32;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r7,r5
	ctx.r7.s64 = ctx.r5.s32;
	// std r28,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r28.u64);
	// extsw r28,r6
	r28.s64 = ctx.r6.s32;
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
	// fmuls f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
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
	// fmuls f10,f10,f5
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
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
	// lfs f9,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f10,f0,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfs f9,28(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f9,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// frsp f31,f3
	f31.f64 = double(float(ctx.f3.f64));
	// fmadds f9,f10,f13,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfs f9,28(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fmul f3,f10,f11
	ctx.f3.f64 = ctx.f10.f64 * ctx.f11.f64;
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f9,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f10,f10,f12,f9
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f9.f64)));
	// stfs f10,28(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// frsp f29,f3
	f29.f64 = double(float(ctx.f3.f64));
loc_8241871C:
	// cmpwi cr6,r5,15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 15, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x8241872c
	if (ctx.cr6.lt) goto loc_8241872C;
	// li r11,15
	ctx.r11.s64 = 15;
loc_8241872C:
	// cmpwi cr6,r11,-15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -15, ctx.xer);
	// ble cr6,0x82418744
	if (!ctx.cr6.gt) goto loc_82418744;
	// cmpwi cr6,r5,15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 15, ctx.xer);
	// blt cr6,0x82418748
	if (ctx.cr6.lt) goto loc_82418748;
	// li r5,15
	ctx.r5.s64 = 15;
	// b 0x82418748
	goto loc_82418748;
loc_82418744:
	// li r5,-15
	ctx.r5.s64 = -15;
loc_82418748:
	// cmpwi cr6,r6,15
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 15, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x82418758
	if (ctx.cr6.lt) goto loc_82418758;
	// li r11,15
	ctx.r11.s64 = 15;
loc_82418758:
	// cmpwi cr6,r11,-15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -15, ctx.xer);
	// ble cr6,0x82418770
	if (!ctx.cr6.gt) goto loc_82418770;
	// cmpwi cr6,r6,15
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 15, ctx.xer);
	// blt cr6,0x82418774
	if (ctx.cr6.lt) goto loc_82418774;
	// li r6,15
	ctx.r6.s64 = 15;
	// b 0x82418774
	goto loc_82418774;
loc_82418770:
	// li r6,-15
	ctx.r6.s64 = -15;
loc_82418774:
	// cmpwi cr6,r4,63
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 63, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x82418784
	if (ctx.cr6.lt) goto loc_82418784;
	// li r11,63
	ctx.r11.s64 = 63;
loc_82418784:
	// cmpwi cr6,r11,-63
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -63, ctx.xer);
	// ble cr6,0x8241879c
	if (!ctx.cr6.gt) goto loc_8241879C;
	// cmpwi cr6,r4,63
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 63, ctx.xer);
	// blt cr6,0x824187a0
	if (ctx.cr6.lt) goto loc_824187A0;
	// li r4,63
	ctx.r4.s64 = 63;
	// b 0x824187a0
	goto loc_824187A0;
loc_8241879C:
	// li r4,-63
	ctx.r4.s64 = -63;
loc_824187A0:
	// rlwimi r6,r4,5,0,26
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0) | (ctx.r6.u64 & 0xFFFFFFFF0000001F);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// rlwimi r5,r6,5,0,26
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0) | (ctx.r5.u64 & 0xFFFFFFFF0000001F);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// sthux r5,r30,r25
	ea = r30.u32 + r25.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	r30.u32 = ea;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8241856c
	if (ctx.cr6.lt) goto loc_8241856C;
loc_824187C8:
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

DEFINE_REX_FUNC(sub_82421888) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-7172(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -7172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82421E08) {
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
	ctx.lr = 0x82421E10;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// bne cr6,0x82421e50
	if (!ctx.cr6.eq) goto loc_82421E50;
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
	// li r7,4363
	ctx.r7.s64 = 4363;
	// bl 0x8240e308
	ctx.lr = 0x82421E50;
	sub_8240E308(ctx, base);
loc_82421E50:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,89
	ctx.r4.s64 = 89;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e880
	ctx.lr = 0x82421E60;
	sub_8240E880(ctx, base);
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// rlwimi r11,r3,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82421eb4
	if (ctx.cr6.eq) goto loc_82421EB4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82421eb4
	if (ctx.cr6.eq) goto loc_82421EB4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8241e418
	ctx.lr = 0x82421E88;
	sub_8241E418(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18724
	ctx.r4.s64 = ctx.r10.s64 + -18724;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,62
	ctx.r6.s64 = 62;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,248(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// bctrl 
	ctx.lr = 0x82421EB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82421EB4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82426E98) {
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
	ctx.lr = 0x82426EA0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82426EBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82426f74
	if (ctx.cr6.eq) goto loc_82426F74;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82426f74
	if (!ctx.cr6.gt) goto loc_82426F74;
	// li r29,0
	r29.s64 = 0;
loc_82426EF0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82426f08
	if (!ctx.cr6.lt) goto loc_82426F08;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// b 0x82426f14
	goto loc_82426F14;
loc_82426F08:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82426a60
	ctx.lr = 0x82426F14;
	sub_82426A60(ctx, base);
loc_82426F14:
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82426F28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82426f48
	if (ctx.cr0.eq) goto loc_82426F48;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82426ef0
	if (ctx.cr6.lt) goto loc_82426EF0;
	// b 0x82426f74
	goto loc_82426F74;
loc_82426F48:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82426f74
	if (!ctx.cr6.lt) goto loc_82426F74;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// bl 0x822d4fa0
	ctx.lr = 0x82426F74;
	sub_822D4FA0(ctx, base);
loc_82426F74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82429428) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82429430;
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
	ctx.lr = 0x8242944C;
	sub_82412D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// beq 0x8242946c
	if (ctx.cr0.eq) goto loc_8242946C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82428bf8
	ctx.lr = 0x82429468;
	sub_82428BF8(ctx, base);
	// b 0x82429470
	goto loc_82429470;
loc_8242946C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82429470:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82429C40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82429C48;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,1452(r5)
	r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 1452);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x82412d18
	ctx.lr = 0x82429C68;
	sub_82412D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// beq 0x82429c8c
	if (ctx.cr0.eq) goto loc_82429C8C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82427798
	ctx.lr = 0x82429C88;
	sub_82427798(ctx, base);
	// b 0x82429c90
	goto loc_82429C90;
loc_82429C8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82429C90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8242C030) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242c0b0
	if (ctx.cr6.eq) goto loc_8242C0B0;
	// b 0x8242c088
	goto loc_8242C088;
loc_8242C05C:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8242be08
	ctx.lr = 0x8242C070;
	sub_8242BE08(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x823cd250
	ctx.lr = 0x8242C088;
	sub_823CD250(ctx, base);
loc_8242C088:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x8242c05c
	if (!ctx.cr6.eq) goto loc_8242C05C;
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x823cd250
	ctx.lr = 0x8242C0A8;
	sub_823CD250(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8242C0B0:
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

DEFINE_REX_FUNC(sub_8242DFD8) {
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
	ctx.lr = 0x8242DFE0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r24,r3,44
	r24.s64 = ctx.r3.s64 + 44;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242E018;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r23,r31,80
	r23.s64 = r31.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242E030;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242d328
	ctx.lr = 0x8242E038;
	sub_8242D328(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// blt 0x8242e214
	if (ctx.cr0.lt) goto loc_8242E214;
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242e05c
	if (!ctx.cr6.eq) goto loc_8242E05C;
	// lis r30,-30570
	r30.s64 = -2003435520;
	// ori r30,r30,1
	r30.u64 = r30.u64 | 1;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_8242E05C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8242e214
	if (ctx.cr6.lt) goto loc_8242E214;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8242e078
	if (ctx.cr6.lt) goto loc_8242E078;
	// lis r30,-30570
	r30.s64 = -2003435520;
	// ori r30,r30,1
	r30.u64 = r30.u64 | 1;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_8242E078:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8242e214
	if (ctx.cr6.lt) goto loc_8242E214;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x8242e098
	if (!ctx.cr6.eq) goto loc_8242E098;
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// mulli r10,r28,1068
	ctx.r10.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(1068));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r27,1030(r11)
	r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 1030);
loc_8242E098:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8242e0b0
	if (!ctx.cr6.eq) goto loc_8242E0B0;
	// lwz r10,156(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 156);
	// mulli r11,r28,1068
	ctx.r11.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(1068));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r29,1032(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 1032);
loc_8242E0B0:
	// li r11,375
	ctx.r11.s64 = 375;
	// divwu r11,r29,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? r29.u32 / ctx.r11.u32 : 0);
	// mulli r11,r11,375
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(375));
	// subf. r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8242e0e0
	if (ctx.cr0.eq) goto loc_8242E0E0;
	// subf r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// cmplwi cr6,r11,32000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32000, ctx.xer);
	// bge cr6,0x8242e0d4
	if (!ctx.cr6.lt) goto loc_8242E0D4;
	// addi r11,r11,375
	ctx.r11.s64 = ctx.r11.s64 + 375;
loc_8242E0D4:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x8242e0e0
	if (ctx.cr6.eq) goto loc_8242E0E0;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_8242E0E0:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// li r4,192
	ctx.r4.s64 = 192;
	// bl 0x8242c3b0
	ctx.lr = 0x8242E0FC;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8242e11c
	if (ctx.cr0.eq) goto loc_8242E11C;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8243b490
	ctx.lr = 0x8242E114;
	sub_8243B490(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8242e120
	goto loc_8242E120;
loc_8242E11C:
	// li r29,0
	r29.s64 = 0;
loc_8242E120:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8242e138
	if (!ctx.cr6.eq) goto loc_8242E138;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// b 0x8242e214
	goto loc_8242E214;
loc_8242E138:
	// lwz r10,156(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 156);
	// mulli r11,r28,1068
	ctx.r11.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(1068));
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8243adf0
	ctx.lr = 0x8242E154;
	sub_8243ADF0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// blt 0x8242e1d4
	if (ctx.cr0.lt) goto loc_8242E1D4;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8242e1a0
	if (ctx.cr6.eq) goto loc_8242E1A0;
	// lwz r3,180(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 180);
	// lwz r6,176(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 176);
	// lwz r5,172(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lwz r4,544(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 544);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242E18C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// blt 0x8242e1d4
	if (ctx.cr0.lt) goto loc_8242E1D4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r11.u32);
loc_8242E1A0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,412
	ctx.r3.s64 = r31.s64 + 412;
	// bl 0x82438e18
	ctx.lr = 0x8242E1AC;
	sub_82438E18(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8242e1c8
	if (ctx.cr0.eq) goto loc_8242E1C8;
	// li r30,0
	r30.s64 = 0;
	// stw r29,0(r22)
	REX_STORE_U32(r22.u32 + 0, r29.u32);
	// stw r29,592(r31)
	REX_STORE_U32(r31.u32 + 592, r29.u32);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// b 0x8242e214
	goto loc_8242E214;
loc_8242E1C8:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_8242E1D4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242cb40
	ctx.lr = 0x8242E1E0;
	sub_8242CB40(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r28,r29,4
	r28.s64 = r29.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242E1F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242E210;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82473600
	ctx.lr = 0x8242E214;
	sub_82473600(ctx, base);
loc_8242E214:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242E228;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242E23C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x8242e24c
	if (!ctx.cr6.lt) goto loc_8242E24C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242c890
	ctx.lr = 0x8242E24C;
	sub_8242C890(ctx, base);
loc_8242E24C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82443000
	ctx.lr = 0x8242E254;
	sub_82443000(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_824385B0) {
	REX_FUNC_PROLOGUE();
	// li r10,8
	ctx.r10.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r10,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r11,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_824385DC:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// bdnz 0x824385dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824385DC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82439258) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82439260;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x824392ec
	if (ctx.cr6.eq) goto loc_824392EC;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// beq cr6,0x824392b8
	if (ctx.cr6.eq) goto loc_824392B8;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bne cr6,0x82439298
	if (!ctx.cr6.eq) goto loc_82439298;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82439298:
	// addi r3,r3,-180
	ctx.r3.s64 = ctx.r3.s64 + -180;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82438bb0
	ctx.lr = 0x824392A4;
	sub_82438BB0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824392f8
	if (!ctx.cr6.eq) goto loc_824392F8;
	// li r29,4096
	r29.s64 = 4096;
	// b 0x824392f8
	goto loc_824392F8;
loc_824392B8:
	// lwz r11,396(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824392f8
	if (ctx.cr6.eq) goto loc_824392F8;
	// lwz r11,392(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 392);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824392d8
	if (ctx.cr6.eq) goto loc_824392D8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x824392dc
	goto loc_824392DC;
loc_824392D8:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_824392DC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x824392f8
	goto loc_824392F8;
loc_824392EC:
	// addi r3,r3,-180
	ctx.r3.s64 = ctx.r3.s64 + -180;
	// bl 0x824391d8
	ctx.lr = 0x824392F4;
	sub_824391D8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_824392F8:
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8243B770) {
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
	ctx.lr = 0x8243B778;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r23,0
	r23.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8243b868
	if (!ctx.cr6.gt) goto loc_8243B868;
	// li r28,0
	r28.s64 = 0;
	// li r26,16
	r26.s64 = 16;
	// li r27,32
	r27.s64 = 32;
	// lis r24,-32162
	r24.s64 = -2107768832;
loc_8243B7A4:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// add r31,r28,r11
	r31.u64 = r28.u64 + ctx.r11.u64;
	// addi r30,r31,64
	r30.s64 = r31.s64 + 64;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8243b854
	if (!ctx.cr6.eq) goto loc_8243B854;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d4bbc
	ctx.lr = 0x8243B7C4;
	__imp__XMACreateContext(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// blt 0x8243b874
	if (ctx.cr0.lt) goto loc_8243B874;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8243b814
	if (ctx.cr0.eq) goto loc_8243B814;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lvx128 v63,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r31,r26
	ea = (r31.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r31,r27
	ea = (r31.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r26
	ea = (ctx.r11.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r11,r27
	ea = (ctx.r11.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x824d44cc
	ctx.lr = 0x8243B7FC;
	__imp__MmGetPhysicalAddress(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1028
	ctx.r6.s64 = 1028;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x824d4bac
	ctx.lr = 0x8243B810;
	__imp__MmMapIoSpace(ctx, base);
	// stw r3,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r3.u32);
loc_8243B814:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x824d44cc
	ctx.lr = 0x8243B81C;
	__imp__MmGetPhysicalAddress(ctx, base);
	// lwz r11,7832(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 7832);
	// li r10,1
	ctx.r10.s64 = 1;
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r11,27,21,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FF;
	// sth r11,80(r31)
	REX_STORE_U16(r31.u32 + 80, ctx.r11.u16);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addis r9,r9,8187
	ctx.r9.s64 = ctx.r9.s64 + 536543232;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r9,r9,-31072
	ctx.r9.s64 = ctx.r9.s64 + -31072;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwbrx r11,0,r10
	REX_MM_STORE_U32(ctx.r10.u32, __builtin_bswap32(ctx.r11.u32));
	// eieio 
loc_8243B854:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r28,r28,96
	r28.s64 = r28.s64 + 96;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8243b7a4
	if (ctx.cr6.lt) goto loc_8243B7A4;
loc_8243B868:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
loc_8243B874:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82441028) {
	REX_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82441108) {
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
	ctx.lr = 0x82441110;
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244113C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8245c750
	ctx.lr = 0x82441150;
	sub_8245C750(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82441168;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_824422F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82442300;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82442324;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// addi r29,r30,28
	r29.s64 = r30.s64 + 28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244233C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r3,76(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 76);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8245fc40
	ctx.lr = 0x8244234C;
	sub_8245FC40(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82441f60
	ctx.lr = 0x82442358;
	sub_82441F60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244236C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,72(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 72);
	// bl 0x8245d2e0
	ctx.lr = 0x82442378;
	sub_8245D2E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244238C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8244239c
	if (!ctx.cr6.eq) goto loc_8244239C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,384(r30)
	REX_STORE_U32(r30.u32 + 384, ctx.r11.u32);
loc_8244239C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824423B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82473600
	ctx.lr = 0x824423B8;
	sub_82473600(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824423CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824423E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82445DA0) {
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
	ctx.lr = 0x82445DA8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r25,r26
	r25.u64 = r26.u64;
	// bne cr6,0x82445dd0
	if (!ctx.cr6.eq) goto loc_82445DD0;
loc_82445DC0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_82445DD0:
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82445dc0
	if (ctx.cr6.eq) goto loc_82445DC0;
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82445dec
	if (ctx.cr6.gt) goto loc_82445DEC;
	// li r25,4
	r25.s64 = 4;
loc_82445DEC:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r27,1
	r27.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8244606c
	if (ctx.cr6.eq) goto loc_8244606C;
	// lwz r11,704(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 704);
	// stw r26,32(r31)
	REX_STORE_U32(r31.u32 + 32, r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r27,16(r31)
	REX_STORE_U16(r31.u32 + 16, r27.u16);
	// bne cr6,0x82446108
	if (!ctx.cr6.eq) goto loc_82446108;
	// lwz r11,212(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82445e88
	if (!ctx.cr6.eq) goto loc_82445E88;
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82445e88
	if (ctx.cr6.gt) goto loc_82445E88;
	// stw r26,12(r31)
	REX_STORE_U32(r31.u32 + 12, r26.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82445e40
	if (!ctx.cr6.lt) goto loc_82445E40;
	// stw r26,4(r29)
	REX_STORE_U32(r29.u32 + 4, r26.u32);
	// stw r27,12(r31)
	REX_STORE_U32(r31.u32 + 12, r27.u32);
loc_82445E40:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r10,236(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 236);
	// subf. r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82445e58
	if (ctx.cr0.eq) goto loc_82445E58;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x823192e8
	ctx.lr = 0x82445E58;
	sub_823192E8(ctx, base);
loc_82445E58:
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82445e80
	if (!ctx.cr6.eq) goto loc_82445E80;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82465558
	ctx.lr = 0x82445E70;
	sub_82465558(ctx, base);
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_82445E80:
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// b 0x82446018
	goto loc_82446018;
loc_82445E88:
	// li r28,-2
	r28.s64 = -2;
loc_82445E8C:
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82445eec
	if (!ctx.cr6.eq) goto loc_82445EEC;
	// addi r30,r31,224
	r30.s64 = r31.s64 + 224;
loc_82445E9C:
	// lwz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82445ed4
	if (!ctx.cr6.eq) goto loc_82445ED4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82465558
	ctx.lr = 0x82445EB0;
	sub_82465558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ff460
	ctx.lr = 0x82445EB8;
	sub_822FF460(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823195f0
	ctx.lr = 0x82445EC8;
	sub_823195F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8244610c
	if (ctx.cr6.lt) goto loc_8244610C;
	// b 0x82445ee0
	goto loc_82445EE0;
loc_82445ED4:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r26,16(r30)
	REX_STORE_U32(r30.u32 + 16, r26.u32);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
loc_82445EE0:
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82445e9c
	if (ctx.cr6.eq) goto loc_82445E9C;
loc_82445EEC:
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// ble cr6,0x82445fd8
	if (!ctx.cr6.gt) goto loc_82445FD8;
	// rlwinm r10,r11,5,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	// rlwinm r9,r11,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// sth r10,18(r31)
	REX_STORE_U16(r31.u32 + 18, ctx.r10.u16);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwz r7,8(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 8);
	// subfic r6,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r6.u64 = static_cast<uint64_t>(32) - ctx.r7.u64;
	// srw r11,r9,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x82445f54
	if (!ctx.cr6.eq) goto loc_82445F54;
	// sth r27,16(r31)
	REX_STORE_U16(r31.u32 + 16, r27.u16);
	// lwz r9,12(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82445f70
	if (ctx.cr6.lt) goto loc_82445F70;
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_82445F54:
	// lwz r9,12(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 12);
	// subfc r7,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// eqv r6,r9,r10
	ctx.r6.u64 = ~(ctx.r9.u64 ^ ctx.r10.u64);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// sth r3,16(r31)
	REX_STORE_U16(r31.u32 + 16, ctx.r3.u16);
loc_82445F70:
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82445f90
	if (!ctx.cr6.eq) goto loc_82445F90;
	// lhz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82445fb8
	if (!ctx.cr6.eq) goto loc_82445FB8;
	// stw r26,236(r31)
	REX_STORE_U32(r31.u32 + 236, r26.u32);
	// b 0x82445e8c
	goto loc_82445E8C;
loc_82445F90:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82445fb8
	if (!ctx.cr6.eq) goto loc_82445FB8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82445fb8
	if (!ctx.cr6.eq) goto loc_82445FB8;
	// stw r28,276(r31)
	REX_STORE_U32(r31.u32 + 276, r28.u32);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// stw r26,236(r31)
	REX_STORE_U32(r31.u32 + 236, r26.u32);
	// bl 0x82465558
	ctx.lr = 0x82445FB0;
	sub_82465558(ctx, base);
	// stw r27,284(r31)
	REX_STORE_U32(r31.u32 + 284, r27.u32);
	// b 0x82445e8c
	goto loc_82445E8C;
loc_82445FB8:
	// lwz r8,12(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82446004
	if (ctx.cr6.lt) goto loc_82446004;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82445fd0
	if (!ctx.cr6.eq) goto loc_82445FD0;
	// stw r28,276(r31)
	REX_STORE_U32(r31.u32 + 276, r28.u32);
loc_82445FD0:
	// stw r26,236(r31)
	REX_STORE_U32(r31.u32 + 236, r26.u32);
	// b 0x82445e8c
	goto loc_82445E8C;
loc_82445FD8:
	// subfic r10,r25,32
	ctx.xer.ca = r25.u32 <= 32;
	ctx.r10.u64 = static_cast<uint64_t>(32) - r25.u64;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r25,4
	ctx.r9.s64 = r25.s64 + 4;
	// srw r6,r8,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// sth r6,16(r31)
	REX_STORE_U16(r31.u32 + 16, ctx.r6.u16);
	// slw r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 8);
	// subfic r3,r4,29
	ctx.xer.ca = ctx.r4.u32 <= 29;
	ctx.r3.u64 = static_cast<uint64_t>(29) - ctx.r4.u64;
	// srw r11,r7,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r3.u8 & 0x3F));
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
loc_82446004:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82446014
	if (!ctx.cr6.eq) goto loc_82446014;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x823192e8
	ctx.lr = 0x82446014;
	sub_823192E8(ctx, base);
loc_82446014:
	// stw r26,236(r31)
	REX_STORE_U32(r31.u32 + 236, r26.u32);
loc_82446018:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82446060
	if (!ctx.cr6.eq) goto loc_82446060;
	// lhz r11,154(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 154);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82446114
	if (!ctx.cr6.eq) goto loc_82446114;
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 336);
	// lis r10,152
	ctx.r10.s64 = 9961472;
	// ld r9,168(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 168);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// ori r7,r10,38528
	ctx.r7.u64 = ctx.r10.u64 | 38528;
	// mulld r6,r8,r9
	ctx.r6.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r9.u64);
	// divd r5,r6,r7
	ctx.r5.s64 = (ctx.r7.s64 && !(ctx.r6.s64 == INT64_MIN && ctx.r7.s64 == -1)) ? ctx.r6.s64 / ctx.r7.s64 : 0;
	// std r5,184(r31)
	REX_STORE_U64(r31.u32 + 184, ctx.r5.u64);
loc_82446054:
	// sth r26,154(r31)
	REX_STORE_U16(r31.u32 + 154, r26.u16);
	// stw r26,156(r31)
	REX_STORE_U32(r31.u32 + 156, r26.u32);
loc_8244605C:
	// stw r27,160(r31)
	REX_STORE_U32(r31.u32 + 160, r27.u32);
loc_82446060:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82446108
	if (ctx.cr6.eq) goto loc_82446108;
loc_8244606C:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// stw r27,32(r31)
	REX_STORE_U32(r31.u32 + 32, r27.u32);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// ble cr6,0x824460ac
	if (!ctx.cr6.gt) goto loc_824460AC;
	// addi r30,r31,224
	r30.s64 = r31.s64 + 224;
loc_82446080:
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82319a70
	ctx.lr = 0x8244608C;
	sub_82319A70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8244610c
	if (ctx.cr6.lt) goto loc_8244610C;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// cmpwi cr6,r10,24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24, ctx.xer);
	// bgt cr6,0x82446080
	if (ctx.cr6.gt) goto loc_82446080;
loc_824460AC:
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 64);
	// bl 0x82319a70
	ctx.lr = 0x824460B8;
	sub_82319A70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8244610c
	if (ctx.cr6.lt) goto loc_8244610C;
	// lhz r11,34(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824460fc
	if (ctx.cr6.eq) goto loc_824460FC;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// li r8,32767
	ctx.r8.s64 = 32767;
loc_824460D4:
	// lwz r10,320(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 320);
	// mulli r9,r11,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// sth r8,112(r10)
	REX_STORE_U16(ctx.r10.u32 + 112, ctx.r8.u16);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lhz r7,34(r29)
	ctx.r7.u64 = REX_LOAD_U16(r29.u32 + 34);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x824460d4
	if (ctx.cr6.lt) goto loc_824460D4;
loc_824460FC:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,72(r29)
	REX_STORE_U32(r29.u32 + 72, ctx.r11.u32);
	// stw r26,32(r31)
	REX_STORE_U32(r31.u32 + 32, r26.u32);
loc_82446108:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8244610C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_82446114:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82446054
	if (!ctx.cr6.eq) goto loc_82446054;
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 336);
	// lis r10,152
	ctx.r10.s64 = 9961472;
	// ld r9,168(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 168);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// ld r7,176(r31)
	ctx.r7.u64 = REX_LOAD_U64(r31.u32 + 176);
	// ori r6,r10,38528
	ctx.r6.u64 = ctx.r10.u64 | 38528;
	// sth r27,154(r31)
	REX_STORE_U16(r31.u32 + 154, r27.u16);
	// mulld r5,r8,r9
	ctx.r5.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r9.u64);
	// std r7,168(r31)
	REX_STORE_U64(r31.u32 + 168, ctx.r7.u64);
	// divd r4,r5,r6
	ctx.r4.s64 = (ctx.r6.s64 && !(ctx.r5.s64 == INT64_MIN && ctx.r6.s64 == -1)) ? ctx.r5.s64 / ctx.r6.s64 : 0;
	// std r4,184(r31)
	REX_STORE_U64(r31.u32 + 184, ctx.r4.u64);
	// b 0x8244605c
	goto loc_8244605C;
}

DEFINE_REX_FUNC(sub_8245CEF8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,204(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8245cf18
	if (!ctx.cr6.eq) goto loc_8245CF18;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,204(r11)
	REX_STORE_U32(ctx.r11.u32 + 204, ctx.r10.u32);
	// b 0x8245cf24
	goto loc_8245CF24;
loc_8245CF18:
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_8245CF24:
	// lwz r10,208(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8245cf3c
	if (!ctx.cr6.eq) goto loc_8245CF3C;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,208(r11)
	REX_STORE_U32(ctx.r11.u32 + 208, ctx.r10.u32);
	// b 0x8245cf48
	goto loc_8245CF48;
loc_8245CF3C:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
loc_8245CF48:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r10,212(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r10,212(r11)
	REX_STORE_U32(ctx.r11.u32 + 212, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245DB00) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8245db28
	if (!ctx.cr6.eq) goto loc_8245DB28;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,168
	ctx.r3.s64 = ctx.r3.s64 + 168;
	// bl 0x8245d4c8
	ctx.lr = 0x8245DB24;
	sub_8245D4C8(ctx, base);
	// b 0x8245db54
	goto loc_8245DB54;
loc_8245DB28:
	// lwz r11,372(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 372);
	// b 0x8245db40
	goto loc_8245DB40;
loc_8245DB30:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8245db48
	if (ctx.cr6.eq) goto loc_8245DB48;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8245DB40:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8245db30
	if (!ctx.cr6.eq) goto loc_8245DB30;
loc_8245DB48:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r3,168
	ctx.r3.s64 = ctx.r3.s64 + 168;
	// bl 0x8245d548
	ctx.lr = 0x8245DB54;
	sub_8245D548(ctx, base);
loc_8245DB54:
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r10,r10,14
	ctx.r10.u64 = ctx.r10.u64 | 14;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245E7A8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8245e508
	sub_8245E508(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8245E7C0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8245e5e0
	sub_8245E5E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8245E7E8) {
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
	// beq cr6,0x8245e804
	if (ctx.cr6.eq) goto loc_8245E804;
	// cmpwi cr6,r4,-2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2, ctx.xer);
	// bne cr6,0x8245e81c
	if (!ctx.cr6.eq) goto loc_8245E81C;
loc_8245E804:
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8245e824
	if (ctx.cr6.eq) goto loc_8245E824;
	// bl 0x824412c0
	ctx.lr = 0x8245E814;
	sub_824412C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8245e824
	if (!ctx.cr0.eq) goto loc_8245E824;
loc_8245E81C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8245e828
	goto loc_8245E828;
loc_8245E824:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8245E828:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245F8D0) {
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
	ctx.lr = 0x8245F8D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// bl 0x8245e7e8
	ctx.lr = 0x8245F8F4;
	sub_8245E7E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8245f90c
	if (ctx.cr0.eq) goto loc_8245F90C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// bl 0x82475dc8
	ctx.lr = 0x8245F908;
	sub_82475DC8(ctx, base);
	// b 0x8245f978
	goto loc_8245F978;
loc_8245F90C:
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
	ctx.lr = 0x8245F928;
	sub_8242C3B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8245f93c
	if (!ctx.cr0.eq) goto loc_8245F93C;
	// lis r28,-32761
	r28.s64 = -2147024896;
	// ori r28,r28,14
	r28.u64 = r28.u64 | 14;
	// b 0x8245f978
	goto loc_8245F978;
loc_8245F93C:
	// addic r11,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r11.s64 = r30.s64 + -1;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// subfe r11,r11,r30
	temp.u8 = (~ctx.r11.u32 + r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r27,16(r31)
	REX_STORE_U32(r31.u32 + 16, r27.u32);
	// lwz r3,16(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 16);
	// bl 0x8245f9d8
	ctx.lr = 0x8245F968;
	sub_8245F9D8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bge 0x8245f978
	if (!ctx.cr0.lt) goto loc_8245F978;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x8245F978;
	sub_82473600(ctx, base);
loc_8245F978:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82460EE8) {
	REX_FUNC_PROLOGUE();
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// b 0x823cd250
	sub_823CD250(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82461560) {
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
	ctx.lr = 0x82461568;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// li r24,0
	r24.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8246160c
	if (ctx.cr6.eq) goto loc_8246160C;
	// mr r28,r24
	r28.u64 = r24.u64;
	// li r25,2
	r25.s64 = 2;
loc_82461590:
	// mulli r11,r28,1776
	ctx.r11.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(1776));
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// add r29,r11,r26
	r29.u64 = ctx.r11.u64 + r26.u64;
	// mr r30,r24
	r30.u64 = r24.u64;
	// sth r25,182(r29)
	REX_STORE_U16(r29.u32 + 182, r25.u16);
loc_824615A4:
	// mulli r11,r30,56
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(56));
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r31,r11,200
	r31.s64 = ctx.r11.s64 + 200;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82246ca8
	ctx.lr = 0x824615C8;
	sub_82246CA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246160c
	if (ctx.cr6.lt) goto loc_8246160C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82246ca8
	ctx.lr = 0x824615DC;
	sub_82246CA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246160c
	if (ctx.cr6.lt) goto loc_8246160C;
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// clrlwi r30,r11,16
	r30.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// blt cr6,0x824615a4
	if (ctx.cr6.lt) goto loc_824615A4;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// lhz r10,34(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82461590
	if (ctx.cr6.lt) goto loc_82461590;
loc_8246160C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82464F10) {
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
	ctx.lr = 0x82464F18;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mulli r30,r4,152
	r30.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(152));
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r25,r29
	r25.u64 = r29.u64;
	// bl 0x82460ed8
	ctx.lr = 0x82464F3C;
	sub_82460ED8(ctx, base);
	// stw r3,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82464ff8
	if (ctx.cr6.eq) goto loc_82464FF8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82464F54;
	sub_822D5870(ctx, base);
	// mr r28,r29
	r28.u64 = r29.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x82464fec
	if (!ctx.cr6.gt) goto loc_82464FEC;
	// rlwinm r26,r31,2,0,29
	r26.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_82464F64:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// add r30,r11,r29
	r30.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x82460ed8
	ctx.lr = 0x82464F74;
	sub_82460ED8(ctx, base);
	// stw r3,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82464ff8
	if (ctx.cr6.eq) goto loc_82464FF8;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// ble cr6,0x82464fbc
	if (!ctx.cr6.gt) goto loc_82464FBC;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// mullw r10,r11,r31
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r3,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r3.s64 = temp.s64;
	// bl 0x82460ed8
	ctx.lr = 0x82464F9C;
	sub_82460ED8(ctx, base);
	// stw r3,136(r30)
	REX_STORE_U32(r30.u32 + 136, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82464ff8
	if (ctx.cr6.eq) goto loc_82464FF8;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r10,r11,r31
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// rlwinm r5,r10,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x822d5870
	ctx.lr = 0x82464FBC;
	sub_822D5870(ctx, base);
loc_82464FBC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82460ed8
	ctx.lr = 0x82464FC4;
	sub_82460ED8(ctx, base);
	// stw r3,140(r30)
	REX_STORE_U32(r30.u32 + 140, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82464ff8
	if (ctx.cr6.eq) goto loc_82464FF8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82464FDC;
	sub_822D5870(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,152
	r29.s64 = r29.s64 + 152;
	// cmpw cr6,r28,r31
	ctx.cr6.compare<int32_t>(r28.s32, r31.s32, ctx.xer);
	// blt cr6,0x82464f64
	if (ctx.cr6.lt) goto loc_82464F64;
loc_82464FEC:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_82464FF8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8246A2E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r8,-32162
	ctx.r8.s64 = -2107768832;
	// lwz r11,16528(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8246a338
	if (!ctx.cr6.eq) goto loc_8246A338;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// li r9,256
	ctx.r9.s64 = 256;
	// addi r10,r11,15504
	ctx.r10.s64 = ctx.r11.s64 + 15504;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8246A308:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// addi r5,r9,32
	ctx.r5.s64 = ctx.r9.s64 + 32;
	// srawi r9,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 5;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r9,15
	ctx.r4.s64 = ctx.r9.s64 + 15;
	// slw r3,r5,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r4.u8 & 0x3F));
	// stwu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8246a308
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8246A308;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16528(r8)
	REX_STORE_U32(ctx.r8.u32 + 16528, ctx.r11.u32);
loc_8246A338:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8246C5B0) {
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
	ctx.lr = 0x8246C5B8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r26,24
	r26.s64 = 24;
	// lwz r9,304(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 304);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bgt cr6,0x8246c5e8
	if (ctx.cr6.gt) goto loc_8246C5E8;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
loc_8246C5E8:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mulli r11,r11,152
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(152));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8246c7d0
	if (!ctx.cr6.gt) goto loc_8246C7D0;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8246c61c
	if (!ctx.cr6.eq) goto loc_8246C61C;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8246c624
	if (!ctx.cr6.eq) goto loc_8246C624;
loc_8246C61C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8246c7d0
	if (!ctx.cr6.eq) goto loc_8246C7D0;
loc_8246C624:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8246c6bc
	if (ctx.cr6.eq) goto loc_8246C6BC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8246c80c
	if (!ctx.cr6.eq) goto loc_8246C80C;
	// subf r11,r26,r9
	ctx.r11.u64 = ctx.r9.u64 - r26.u64;
	// addi r29,r31,224
	r29.s64 = r31.s64 + 224;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8246e538
	ctx.lr = 0x8246C64C;
	sub_8246E538(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246c814
	if (ctx.cr6.lt) goto loc_8246C814;
	// lwz r11,304(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 304);
	// addi r30,r26,-1
	r30.s64 = r26.s64 + -1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8246c80c
	if (!ctx.cr6.lt) goto loc_8246C80C;
loc_8246C664:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824658f8
	ctx.lr = 0x8246C674;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246c814
	if (ctx.cr6.lt) goto loc_8246C814;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mulli r11,r11,38
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(38));
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r6,304(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 304);
	// cmpw cr6,r30,r6
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8246c664
	if (ctx.cr6.lt) goto loc_8246C664;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_8246C6BC:
	// addi r27,r31,224
	r27.s64 = r31.s64 + 224;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8246e538
	ctx.lr = 0x8246C6CC;
	sub_8246E538(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246c814
	if (ctx.cr6.lt) goto loc_8246C814;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824658f8
	ctx.lr = 0x8246C6E4;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246c814
	if (ctx.cr6.lt) goto loc_8246C814;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mulli r11,r11,152
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(152));
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r9.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x8246c760
	if (!ctx.cr6.eq) goto loc_8246C760;
	// lwz r10,304(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 304);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8246c80c
	if (!ctx.cr6.gt) goto loc_8246C80C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8246C724:
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r8,120(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mulli r10,r10,38
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(38));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,6
	ctx.r7.s64 = ctx.r10.s64 + 6;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r6,r8
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r5,304(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 304);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8246c724
	if (ctx.cr6.lt) goto loc_8246C724;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_8246C760:
	// addic. r29,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r29.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble 0x8246c7ac
	if (!ctx.cr0.gt) goto loc_8246C7AC;
loc_8246C768:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824658f8
	ctx.lr = 0x8246C778;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246c814
	if (ctx.cr6.lt) goto loc_8246C814;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mulli r11,r11,38
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(38));
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r9.u32);
	// blt cr6,0x8246c768
	if (ctx.cr6.lt) goto loc_8246C768;
loc_8246C7AC:
	// lwz r11,304(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 304);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r10,r26,r11
	ctx.r10.u64 = ctx.r11.u64 - r26.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// stw r8,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_8246C7D0:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8246c80c
	if (!ctx.cr6.gt) goto loc_8246C80C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8246C7E0:
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r8,120(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mulli r10,r10,38
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(38));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,6
	ctx.r7.s64 = ctx.r10.s64 + 6;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r6,r8
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r5,304(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 304);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8246c7e0
	if (ctx.cr6.lt) goto loc_8246C7E0;
loc_8246C80C:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
loc_8246C814:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82474268) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82474290
	if (!ctx.cr6.eq) goto loc_82474290;
	// lwz r3,260(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82474290:
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stw r11,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82474838) {
	REX_FUNC_PROLOGUE();
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8247488c
	if (ctx.cr6.eq) goto loc_8247488C;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// beq cr6,0x82474868
	if (ctx.cr6.eq) goto loc_82474868;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// b 0x82474870
	goto loc_82474870;
loc_82474868:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
loc_82474870:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,44(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// blr 
	return;
loc_8247488C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82475598) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x824755A0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r28,r31,56
	r28.s64 = r31.s64 + 56;
	// bl 0x8245c3e0
	ctx.lr = 0x824755B4;
	sub_8245C3E0(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r29,44(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8247560c
	if (ctx.cr6.eq) goto loc_8247560C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8243a6c0
	ctx.lr = 0x824755D8;
	sub_8243A6C0(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r7,128
	ctx.r7.s64 = 128;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// sth r7,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r7.u16);
	// li r8,16
	ctx.r8.s64 = 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,40
	ctx.r4.s64 = 40;
	// lhz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8243aaa0
	ctx.lr = 0x82475608;
	sub_8243AAA0(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_8247560C:
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 52);
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lhz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r10,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82475644;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82475668;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8247569c
	if (ctx.cr0.lt) goto loc_8247569C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824344e8
	ctx.lr = 0x82475678;
	sub_824344E8(ctx, base);
	// bl 0x824732b0
	ctx.lr = 0x8247567C;
	sub_824732B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8245c5a8
	ctx.lr = 0x82475688;
	sub_8245C5A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824756a8
	if (ctx.cr0.eq) goto loc_824756A8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r31,0
	r31.s64 = 0;
	// bl 0x82472fd0
	ctx.lr = 0x8247569C;
	sub_82472FD0(ctx, base);
loc_8247569C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ed8
	return;
loc_824756A8:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8247569c
	goto loc_8247569C;
}

DEFINE_REX_FUNC(sub_8247C528) {
	REX_FUNC_PROLOGUE();
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823ce370
	sub_823CE370(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8247C8B8) {
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
	ctx.lr = 0x8247C8C0;
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stw r6,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r6.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8247c908
	if (ctx.cr6.eq) goto loc_8247C908;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8247c908
	if (ctx.cr6.eq) goto loc_8247C908;
	// addic r11,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// subfe. r11,r11,r6
	temp.u8 = (~ctx.r11.u32 + ctx.r6.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8247c914
	if (!ctx.cr0.eq) goto loc_8247C914;
	// bl 0x822db6c0
	ctx.lr = 0x8247C8FC;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x8247C908;
	sub_822D6910(ctx, base);
loc_8247C908:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247C90C:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x822d4ed4
	return;
loc_8247C914:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822dcc80
	ctx.lr = 0x8247C91C;
	sub_822DCC80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8247c648
	ctx.lr = 0x8247C934;
	sub_8247C648(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = r31.s64 + 144;
	// bl 0x8247c96c
	ctx.lr = 0x8247C944;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_8247C96C(ctx, base);
	r27 = ctx.r27;
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// b 0x8247c90c
	goto loc_8247C90C;
}

DEFINE_REX_FUNC(sub_8247DBE8) {
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
	ctx.lr = 0x8247DBF0;
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r26,r25
	r26.u64 = r25.u64;
	// stw r25,80(r31)
	REX_STORE_U32(r31.u32 + 80, r25.u32);
	// bl 0x822dbd80
	ctx.lr = 0x8247DC0C;
	sub_822DBD80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r28,r25
	r28.u64 = r25.u64;
	// lis r29,-32161
	r29.s64 = -2107703296;
	// lis r24,-32161
	r24.s64 = -2107703296;
loc_8247DC1C:
	// stw r28,84(r31)
	REX_STORE_U32(r31.u32 + 84, r28.u32);
	// lwz r11,-11324(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + -11324);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8247dd30
	if (!ctx.cr6.lt) goto loc_8247DD30;
	// lwz r27,-11328(r29)
	r27.u64 = REX_LOAD_U32(r29.u32 + -11328);
	// rlwinm r30,r28,2,0,29
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r27
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247dccc
	if (ctx.cr6.eq) goto loc_8247DCCC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// andi. r10,r11,131
	ctx.r10.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8247dc5c
	if (!ctx.cr0.eq) goto loc_8247DC5C;
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247dc64
	if (ctx.cr0.eq) goto loc_8247DC64;
loc_8247DC5C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8247dcb8
	goto loc_8247DCB8;
loc_8247DC64:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// ble cr6,0x8247dc84
	if (!ctx.cr6.gt) goto loc_8247DC84;
	// cmpwi cr6,r28,20
	ctx.cr6.compare<int32_t>(r28.s32, 20, ctx.xer);
	// bge cr6,0x8247dc84
	if (!ctx.cr6.lt) goto loc_8247DC84;
	// addi r3,r28,16
	ctx.r3.s64 = r28.s64 + 16;
	// bl 0x822dbc40
	ctx.lr = 0x8247DC7C;
	sub_822DBC40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8247dd30
	if (ctx.cr0.eq) goto loc_8247DD30;
loc_8247DC84:
	// lwz r11,-11328(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -11328);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x822dccf0
	ctx.lr = 0x8247DC94;
	sub_822DCCF0(ctx, base);
	// lwz r11,-11328(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -11328);
	// lwzx r4,r30,r11
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247dcc0
	if (ctx.cr0.eq) goto loc_8247DCC0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822dcd80
	ctx.lr = 0x8247DCB4;
	sub_822DCD80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8247DCB8:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x8247dc1c
	goto loc_8247DC1C;
loc_8247DCC0:
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r4,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// b 0x8247dd30
	goto loc_8247DD30;
loc_8247DCCC:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x822d9828
	ctx.lr = 0x8247DCD4;
	sub_822D9828(ctx, base);
	// stwx r3,r30,r27
	REX_STORE_U32(r30.u32 + r27.u32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8247dd30
	if (ctx.cr0.eq) goto loc_8247DD30;
	// lwz r11,-11328(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -11328);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x822dbb20
	ctx.lr = 0x8247DCF4;
	sub_822DBB20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,-11328(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -11328);
	// bne 0x8247dd14
	if (!ctx.cr0.eq) goto loc_8247DD14;
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x822d98f0
	ctx.lr = 0x8247DD08;
	sub_822D98F0(ctx, base);
	// lwz r11,-11328(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -11328);
	// stwx r25,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r25.u32);
	// b 0x8247dd30
	goto loc_8247DD30;
loc_8247DD14:
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x824d438c
	ctx.lr = 0x8247DD20;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,-11328(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -11328);
	// lwzx r26,r30,r11
	r26.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// stw r26,80(r31)
	REX_STORE_U32(r31.u32 + 80, r26.u32);
	// stw r25,12(r26)
	REX_STORE_U32(r26.u32 + 12, r25.u32);
loc_8247DD30:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8247dd5c
	if (ctx.cr6.eq) goto loc_8247DD5C;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// stw r11,12(r26)
	REX_STORE_U32(r26.u32 + 12, ctx.r11.u32);
	// stw r25,4(r26)
	REX_STORE_U32(r26.u32 + 4, r25.u32);
	// stw r25,8(r26)
	REX_STORE_U32(r26.u32 + 8, r25.u32);
	// stw r25,0(r26)
	REX_STORE_U32(r26.u32 + 0, r25.u32);
	// stw r25,28(r26)
	REX_STORE_U32(r26.u32 + 28, r25.u32);
	// stw r10,16(r26)
	REX_STORE_U32(r26.u32 + 16, ctx.r10.u32);
loc_8247DD5C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = r31.s64 + 160;
	// bl 0x8247dd74
	ctx.lr = 0x8247DD68;
	ctx.r24 = r24;
	ctx.r25 = r25;
	ctx.r26 = r26;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_8247DD74(ctx, base);
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
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_824907F0) {
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
	// lwz r11,2964(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2964);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,2092(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2092);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r8,r11,735
	ctx.r8.s64 = ctx.r11.s64 + 735;
	// lwz r4,248(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// addi r7,r11,738
	ctx.r7.s64 = ctx.r11.s64 + 738;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r10,263
	ctx.r5.s64 = ctx.r10.s64 + 263;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r5,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r6,r6,r3
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r6,2916(r3)
	REX_STORE_U32(ctx.r3.u32 + 2916, ctx.r6.u32);
	// lwzx r11,r8,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// stw r11,2928(r3)
	REX_STORE_U32(ctx.r3.u32 + 2928, ctx.r11.u32);
	// lwzx r10,r7,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// stw r10,2096(r3)
	REX_STORE_U32(ctx.r3.u32 + 2096, ctx.r10.u32);
	// lwz r8,2108(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 2108);
	// stw r8,2100(r3)
	REX_STORE_U32(ctx.r3.u32 + 2100, ctx.r8.u32);
	// stw r9,460(r3)
	REX_STORE_U32(ctx.r3.u32 + 460, ctx.r9.u32);
	// bl 0x8237d2c0
	ctx.lr = 0x82490864;
	sub_8237D2C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82375748
	ctx.lr = 0x8249086C;
	sub_82375748(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82362b28
	ctx.lr = 0x82490878;
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

DEFINE_REX_FUNC(sub_8249FF10) {
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
	ctx.lr = 0x8249FF18;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r16,4(r4)
	r16.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r6,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r6.u32);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,1304(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1304);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rotlwi r11,r16,2
	ctx.r11.u64 = __builtin_rotateleft32(r16.u32, 2);
	// lbz r26,5(r4)
	r26.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// stw r4,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r4.u32);
	// clrlwi r4,r29,31
	ctx.r4.u64 = r29.u32 & 0x1;
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r3,r16,r11
	ctx.r3.u64 = r16.u64 + ctx.r11.u64;
	// lwzx r8,r6,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// rlwinm r31,r10,0,27,28
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	// stw r5,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r5.u32);
	// neg r25,r4
	r25.s64 = static_cast<int64_t>(-ctx.r4.u64);
	// stw r7,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r7.u32);
	// mr r15,r5
	r15.u64 = ctx.r5.u64;
	// lwz r7,388(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 388);
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,1312(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 1312);
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r11,50(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 50);
	// cntlzw r23,r31
	r23.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// lwz r28,0(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// add r24,r6,r7
	r24.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lbz r22,28(r30)
	r22.u64 = REX_LOAD_U8(r30.u32 + 28);
	// li r14,0
	r14.s64 = 0;
	// lwz r3,348(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 348);
	// rlwinm r26,r23,27,31,31
	r26.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 27) & 0x1;
	// lwz r31,352(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 352);
	// and r7,r25,r11
	ctx.r7.u64 = r25.u64 & ctx.r11.u64;
	// stw r28,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// mullw r4,r11,r29
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r24.u32);
	// std r14,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, r14.u64);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stb r26,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r26.u8);
	// stw r7,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r4,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// and r17,r8,r29
	r17.u64 = ctx.r8.u64 & r29.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// stw r17,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r17.u32);
	// beq cr6,0x824a0008
	if (ctx.cr6.eq) goto loc_824A0008;
	// rlwinm r11,r10,12,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xC;
	// lwz r8,396(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 396);
	// lwz r10,400(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 400);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// b 0x824a0018
	goto loc_824A0018;
loc_824A0008:
	// addi r11,r30,404
	ctx.r11.s64 = r30.s64 + 404;
	// addi r10,r30,416
	ctx.r10.s64 = r30.s64 + 416;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_824A0018:
	// add r10,r28,r6
	ctx.r10.u64 = r28.u64 + ctx.r6.u64;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// li r8,16384
	ctx.r8.s64 = 16384;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r22,2
	r22.s64 = 131072;
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stwx r8,r9,r31
	REX_STORE_U32(ctx.r9.u32 + r31.u32, ctx.r8.u32);
	// ori r25,r10,32768
	r25.u64 = ctx.r10.u64 | 32768;
	// addi r9,r11,-22200
	ctx.r9.s64 = ctx.r11.s64 + -22200;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
loc_824A0060:
	// srawi. r11,r14,2
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x3) != 0);
	ctx.r11.s64 = r14.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r26,119
	r26.s64 = 119;
	// bne 0x824a00dc
	if (!ctx.cr0.eq) goto loc_824A00DC;
	// addi r8,r14,18
	ctx.r8.s64 = r14.s64 + 18;
	// lwz r6,348(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 348);
	// rlwinm r3,r29,1,30,30
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0x2;
	// lwz r5,432(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 432);
	// srawi r11,r14,1
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x1) != 0);
	ctx.r11.s64 = r14.s32 >> 1;
	// lwz r9,1224(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 1224);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r21,92(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// or r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 | ctx.r11.u64;
	// add r4,r4,r15
	ctx.r4.u64 = ctx.r4.u64 + r15.u64;
	// addi r3,r10,184
	ctx.r3.s64 = ctx.r10.s64 + 184;
	// add r7,r7,r15
	ctx.r7.u64 = ctx.r7.u64 + r15.u64;
	// lhzx r10,r8,r30
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + r30.u32);
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r3,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// clrlwi r7,r14,31
	ctx.r7.u64 = r14.u32 & 0x1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r3,r4,r30
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + r30.u32);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r15,r7,r15
	r15.u64 = ctx.r7.u64 + r15.u64;
	// add r17,r11,r17
	r17.u64 = ctx.r11.u64 + r17.u64;
	// add r18,r8,r6
	r18.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r29,r5,r10
	r29.u64 = ctx.r5.u64 + ctx.r10.u64;
	// extsh r19,r3
	r19.s64 = ctx.r3.s16;
	// b 0x824a0128
	goto loc_824A0128;
loc_824A00DC:
	// clrlwi r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	// lwz r8,352(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 352);
	// addi r6,r14,105
	ctx.r6.s64 = r14.s64 + 105;
	// lwz r9,1228(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 1228);
	// addi r5,r11,182
	ctx.r5.s64 = ctx.r11.s64 + 182;
	// lwz r21,96(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// srawi r10,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 1;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + r15.u64;
	// add r10,r10,r15
	ctx.r10.u64 = ctx.r10.u64 + r15.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r4,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + r30.u32);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lhzx r6,r3,r30
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + r30.u32);
	// add r18,r11,r8
	r18.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r29,r7,r10
	r29.u64 = ctx.r7.u64 + ctx.r10.u64;
	// extsh r19,r6
	r19.s64 = ctx.r6.s16;
loc_824A0128:
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 28);
	// lwz r23,16(r24)
	r23.u64 = REX_LOAD_U32(r24.u32 + 16);
	// addi r20,r11,-128
	r20.s64 = ctx.r11.s64 + -128;
	// stw r20,28(r27)
	REX_STORE_U32(r27.u32 + 28, r20.u32);
	// dcbzl r0,r20
	ea = (r20.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// li r24,0
	r24.s64 = 0;
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824a015c
	if (!ctx.cr6.eq) goto loc_824A015C;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r28,0
	r28.s64 = 0;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// b 0x824a0280
	goto loc_824A0280;
loc_824A015C:
	// lbz r4,8(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 8);
	// lwz r27,0(r9)
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r27
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + r27.u32);
	// extsh r28,r6
	r28.s64 = ctx.r6.s16;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt cr6,0x824a0248
	if (ctx.cr6.lt) goto loc_824A0248;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r28,28
	ctx.r9.u64 = r28.u32 & 0xF;
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
	// bge cr6,0x824a0240
	if (!ctx.cr6.lt) goto loc_824A0240;
loc_824A01A8:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824a01d4
	if (ctx.cr6.lt) goto loc_824A01D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x824A01C4;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x824a01a8
	if (ctx.cr6.eq) goto loc_824A01A8;
	// srawi r28,r28,4
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0xF) != 0);
	r28.s64 = r28.s32 >> 4;
	// b 0x824a0280
	goto loc_824A0280;
loc_824A01D4:
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
	// lbz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r7,3(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
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
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sld r11,r11,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r3.u8 & 0x7F));
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
loc_824A0240:
	// srawi r28,r28,4
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0xF) != 0);
	r28.s64 = r28.s32 >> 4;
	// b 0x824a0280
	goto loc_824A0280;
loc_824A0248:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x824A0250;
	sub_82337F50(ctx, base);
loc_824A0250:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x82337f50
	ctx.lr = 0x824A0268;
	sub_82337F50(ctx, base);
	// add r10,r28,r25
	ctx.r10.u64 = r28.u64 + r25.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r27
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r27.u32);
	// extsh r28,r8
	r28.s64 = ctx.r8.s16;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt cr6,0x824a0250
	if (ctx.cr6.lt) goto loc_824A0250;
loc_824A0280:
	// clrlwi r28,r28,16
	r28.u64 = r28.u32 & 0xFFFF;
	// mr r25,r28
	r25.u64 = r28.u64;
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(r28.s32, r26.s32, ctx.xer);
	// beq cr6,0x824a03a8
	if (ctx.cr6.eq) goto loc_824A03A8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824a04cc
	if (ctx.cr6.eq) goto loc_824A04CC;
	// cmpwi cr6,r23,4
	ctx.cr6.compare<int32_t>(r23.s32, 4, ctx.xer);
	// bne cr6,0x824a02e0
	if (!ctx.cr6.eq) goto loc_824A02E0;
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
	// rldicl r28,r10,1,63
	r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bge 0x824a02c8
	if (!ctx.cr0.lt) goto loc_824A02C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x824A02C8;
	sub_823380C8(ctx, base);
loc_824A02C8:
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r28,r10,16
	r28.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x824a0490
	goto loc_824A0490;
loc_824A02E0:
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(r23.s32, 2, ctx.xer);
	// bne cr6,0x824a0490
	if (!ctx.cr6.eq) goto loc_824A0490;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r28,2
	r28.s64 = 2;
	// li r27,0
	r27.s64 = 0;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x824a0358
	if (!ctx.cr6.lt) goto loc_824A0358;
loc_824A0300:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a0358
	if (ctx.cr6.eq) goto loc_824A0358;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r28,r11,r28
	r28.u64 = r28.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r28
	ctx.r11.u64 = r28.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r28.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x824a0348
	if (!ctx.cr0.lt) goto loc_824A0348;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x824A0348;
	sub_823380C8(ctx, base);
loc_824A0348:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x824a0300
	if (ctx.cr6.gt) goto loc_824A0300;
loc_824A0358:
	// subfic r11,r28,64
	ctx.xer.ca = r28.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r28.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r8,r28,32
	ctx.r8.u64 = r28.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r28,r10
	ctx.r6.u64 = ctx.r10.u64 - r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r28,r11,r27
	r28.u64 = ctx.r11.u64 + r27.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x824a0390
	if (!ctx.cr0.lt) goto loc_824A0390;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x824A0390;
	sub_823380C8(ctx, base);
loc_824A0390:
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// clrlwi r28,r10,16
	r28.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x824a0490
	goto loc_824A0490;
loc_824A03A8:
	// cmpwi cr6,r23,4
	ctx.cr6.compare<int32_t>(r23.s32, 4, ctx.xer);
	// bgt cr6,0x824a03bc
	if (ctx.cr6.gt) goto loc_824A03BC;
	// srawi r11,r23,1
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x1) != 0);
	ctx.r11.s64 = r23.s32 >> 1;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.u64 = static_cast<uint64_t>(3) - ctx.r11.u64;
	// b 0x824a03c0
	goto loc_824A03C0;
loc_824A03BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A03C0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r28,r11,8
	r28.s64 = ctx.r11.s64 + 8;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(r28.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x824a03e0
	if (!ctx.cr6.gt) goto loc_824A03E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x824a048c
	goto loc_824A048C;
loc_824A03E0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x824a03f0
	if (!ctx.cr6.eq) goto loc_824A03F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x824a048c
	goto loc_824A048C;
loc_824A03F0:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824a0450
	if (!ctx.cr6.gt) goto loc_824A0450;
loc_824A03F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a0450
	if (ctx.cr6.eq) goto loc_824A0450;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r28,r11,r28
	r28.u64 = r28.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r28
	ctx.r11.u64 = r28.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r28.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x824a0440
	if (!ctx.cr0.lt) goto loc_824A0440;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x824A0440;
	sub_823380C8(ctx, base);
loc_824A0440:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x824a03f8
	if (ctx.cr6.gt) goto loc_824A03F8;
loc_824A0450:
	// subfic r11,r28,64
	ctx.xer.ca = r28.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r28.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r8,r28,32
	ctx.r8.u64 = r28.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r28,r10
	ctx.r6.u64 = ctx.r10.u64 - r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r28,r11,r27
	r28.u64 = ctx.r11.u64 + r27.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x824a0488
	if (!ctx.cr0.lt) goto loc_824A0488;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x824A0488;
	sub_823380C8(ctx, base);
loc_824A0488:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_824A048C:
	// clrlwi r28,r11,16
	r28.u64 = ctx.r11.u32 & 0xFFFF;
loc_824A0490:
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
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// rldicl r27,r10,1,63
	r27.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bge 0x824a04b8
	if (!ctx.cr0.lt) goto loc_824A04B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x824A04B8;
	sub_823380C8(ctx, base);
loc_824A04B8:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r10,r28
	ctx.r10.s64 = r28.s16;
	// subfic r9,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r9.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// extsh r24,r8
	r24.s64 = ctx.r8.s16;
loc_824A04CC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// sth r24,0(r20)
	REX_STORE_U16(r20.u32 + 0, r24.u16);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x824a0dd0
	if (!ctx.cr6.eq) goto loc_824A0DD0;
	// lwz r24,100(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r11,r24,31
	ctx.r11.u64 = r24.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824a050c
	if (ctx.cr6.eq) goto loc_824A050C;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// lwz r4,0(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,444(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 444);
	// bl 0x824a32f8
	ctx.lr = 0x824A0504;
	sub_824A32F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824a0dd0
	if (ctx.cr6.lt) goto loc_824A0DD0;
loc_824A050C:
	// srawi r11,r14,2
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x3) != 0);
	ctx.r11.s64 = r14.s32 >> 2;
	// lhz r31,50(r30)
	r31.u64 = REX_LOAD_U16(r30.u32 + 50);
	// li r26,1
	r26.s64 = 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// li r28,0
	r28.s64 = 0;
	// srw r11,r31,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r11.u8 & 0x3F));
	// li r27,0
	r27.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq cr6,0x824a0558
	if (ctx.cr6.eq) goto loc_824A0558;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r9,r18
	ctx.r8.u64 = r18.u64 - ctx.r9.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r7,16384
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16384, ctx.xer);
	// bne cr6,0x824a0558
	if (!ctx.cr6.eq) goto loc_824A0558;
	// rlwinm r10,r19,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 5) & 0xFFFFFFE0;
	// li r26,8
	r26.s64 = 8;
	// subf r28,r10,r29
	r28.u64 = r29.u64 - ctx.r10.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_824A0558:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// beq cr6,0x824a07b4
	if (ctx.cr6.eq) goto loc_824A07B4;
	// lwz r9,-4(r18)
	ctx.r9.u64 = REX_LOAD_U32(r18.u32 + -4);
	// cmpwi cr6,r9,16384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16384, ctx.xer);
	// bne cr6,0x824a07b4
	if (!ctx.cr6.eq) goto loc_824A07B4;
	// addic. r27,r29,-32
	ctx.xer.ca = r29.u32 > 31;
	r27.s64 = r29.s64 + -32;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// li r26,1
	r26.s64 = 1;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// beq 0x824a0b04
	if (ctx.cr0.eq) goto loc_824A0B04;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824a07b4
	if (ctx.cr6.eq) goto loc_824A07B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r9,r18
	ctx.r8.u64 = r18.u64 - ctx.r9.u64;
	// lwz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r6,16384
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16384, ctx.xer);
	// bne cr6,0x824a05a8
	if (!ctx.cr6.eq) goto loc_824A05A8;
	// lhz r11,-16(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + -16);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
loc_824A05A8:
	// lhz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 16);
	// lhz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U16(r27.u32 + 0);
	// lbz r8,27(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 27);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824a0778
	if (ctx.cr6.eq) goto loc_824A0778;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq cr6,0x824a06c0
	if (ctx.cr6.eq) goto loc_824A06C0;
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(r14.s32, 4, ctx.xer);
	// beq cr6,0x824a06c0
	if (ctx.cr6.eq) goto loc_824A06C0;
	// cmpwi cr6,r14,5
	ctx.cr6.compare<int32_t>(r14.s32, 5, ctx.xer);
	// beq cr6,0x824a06c0
	if (ctx.cr6.eq) goto loc_824A06C0;
	// lwz r25,84(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(r14.s32, 1, ctx.xer);
	// bne cr6,0x824a0654
	if (!ctx.cr6.eq) goto loc_824A0654;
	// rlwinm r8,r31,2,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFF8;
	// lwz r11,388(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 388);
	// rlwinm r9,r16,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// subf r3,r8,r25
	ctx.r3.u64 = r25.u64 - ctx.r8.u64;
	// add r9,r16,r9
	ctx.r9.u64 = r16.u64 + ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// clrlwi r9,r8,26
	ctx.r9.u64 = ctx.r8.u32 & 0x3F;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r3,2,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r11,r8,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r6,r9,r6
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// mullw r3,r8,r7
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// mullw r11,r6,r11
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// add r9,r3,r22
	ctx.r9.u64 = ctx.r3.u64 + r22.u64;
	// add r8,r11,r22
	ctx.r8.u64 = ctx.r11.u64 + r22.u64;
	// srawi r7,r9,18
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 18;
	// srawi r6,r8,18
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 18;
	// b 0x824a0780
	goto loc_824A0780;
loc_824A0654:
	// cmpwi cr6,r14,2
	ctx.cr6.compare<int32_t>(r14.s32, 2, ctx.xer);
	// bne cr6,0x824a077c
	if (!ctx.cr6.eq) goto loc_824A077C;
	// rlwinm r9,r16,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r4,-8(r25)
	ctx.r4.u64 = REX_LOAD_U8(r25.u32 + -8);
	// lwz r11,388(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 388);
	// add r9,r16,r9
	ctx.r9.u64 = r16.u64 + ctx.r9.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r4,26
	ctx.r9.u64 = ctx.r4.u32 & 0x3F;
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r8,2,24,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r9,r3,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mullw r3,r9,r8
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// mullw r8,r3,r7
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r5,r8,r22
	ctx.r5.u64 = ctx.r8.u64 + r22.u64;
	// add r3,r7,r22
	ctx.r3.u64 = ctx.r7.u64 + r22.u64;
	// srawi r7,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 18;
	// srawi r5,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 18;
	// b 0x824a0780
	goto loc_824A0780;
loc_824A06C0:
	// lwz r25,84(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r8,r31,2,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFF8;
	// rlwinm r9,r16,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,388(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 388);
	// subf r4,r8,r25
	ctx.r4.u64 = r25.u64 - ctx.r8.u64;
	// add r3,r16,r9
	ctx.r3.u64 = r16.u64 + ctx.r9.u64;
	// lbz r9,-8(r25)
	ctx.r9.u64 = REX_LOAD_U8(r25.u32 + -8);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// lbz r3,-8(r4)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + -8);
	// lbz r23,0(r4)
	r23.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// add r21,r8,r11
	r21.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r23,26
	ctx.r8.u64 = r23.u32 & 0x3F;
	// add r23,r9,r4
	r23.u64 = ctx.r9.u64 + ctx.r4.u64;
	// clrlwi r9,r3,26
	ctx.r9.u64 = ctx.r3.u32 & 0x3F;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r21,16(r21)
	r21.u64 = REX_LOAD_U32(r21.u32 + 16);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r3,r9,r4
	ctx.r3.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r4,r23,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r4,r11
	ctx.r3.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r23,r21,2,24,29
	r23.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// mullw r5,r3,r5
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// lwzx r9,r23,r4
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + ctx.r4.u32);
	// lwz r3,16(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r8,r9,r3
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// mullw r7,r11,r7
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// mullw r6,r8,r6
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// mullw r5,r9,r5
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r3,r7,r22
	ctx.r3.u64 = ctx.r7.u64 + r22.u64;
	// add r11,r6,r22
	ctx.r11.u64 = ctx.r6.u64 + r22.u64;
	// add r9,r5,r22
	ctx.r9.u64 = ctx.r5.u64 + r22.u64;
	// srawi r7,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 18;
	// srawi r6,r11,18
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 18;
	// srawi r5,r9,18
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 18;
	// b 0x824a0780
	goto loc_824A0780;
loc_824A0778:
	// lwz r25,84(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_824A077C:
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_824A0780:
	// subf r11,r6,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r6.u64;
	// subf r9,r5,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r5.u64;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// xor r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// xor r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// subf r3,r8,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r11,r7,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r7.u64;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x824a07bc
	if (!ctx.cr6.lt) goto loc_824A07BC;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// li r26,8
	r26.s64 = 8;
	// b 0x824a07bc
	goto loc_824A07BC;
loc_824A07B4:
	// lwz r25,84(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_824A07BC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a0b04
	if (ctx.cr6.eq) goto loc_824A0B04;
	// lbz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,27(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 27);
	// neg r7,r8
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// or r26,r7,r26
	r26.u64 = ctx.r7.u64 | r26.u64;
	// beq cr6,0x824a0af8
	if (ctx.cr6.eq) goto loc_824A0AF8;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, ctx.xer);
	// bne cr6,0x824a0968
	if (!ctx.cr6.eq) goto loc_824A0968;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq cr6,0x824a082c
	if (ctx.cr6.eq) goto loc_824A082C;
	// cmpwi cr6,r14,2
	ctx.cr6.compare<int32_t>(r14.s32, 2, ctx.xer);
	// beq cr6,0x824a082c
	if (ctx.cr6.eq) goto loc_824A082C;
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(r14.s32, 4, ctx.xer);
	// beq cr6,0x824a082c
	if (ctx.cr6.eq) goto loc_824A082C;
	// cmpwi cr6,r14,5
	ctx.cr6.compare<int32_t>(r14.s32, 5, ctx.xer);
	// beq cr6,0x824a082c
	if (ctx.cr6.eq) goto loc_824A082C;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// addi r10,r8,-2
	ctx.r10.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824A0818:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x824a0818
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824A0818;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// b 0x824a0b04
	goto loc_824A0B04;
loc_824A082C:
	// lbz r9,-8(r25)
	ctx.r9.u64 = REX_LOAD_U8(r25.u32 + -8);
	// rlwinm r8,r16,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,388(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 388);
	// rlwinm r6,r16,2,24,29
	ctx.r6.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFC;
	// add r5,r16,r8
	ctx.r5.u64 = r16.u64 + ctx.r8.u64;
	// lhz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r7,16(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// add r31,r8,r11
	r31.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwzx r8,r6,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// rlwinm r6,r7,2,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFC;
	// addi r28,r1,146
	r28.s64 = ctx.r1.s64 + 146;
	// addi r7,r1,138
	ctx.r7.s64 = ctx.r1.s64 + 138;
	// lwz r31,16(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r27,r1,148
	r27.s64 = ctx.r1.s64 + 148;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,6
	ctx.r11.s64 = ctx.r10.s64 + 6;
	// lwzx r4,r6,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// mullw r3,r31,r3
	ctx.r3.s64 = int64_t(r31.s32) * int64_t(ctx.r3.s32);
	// mullw r6,r4,r3
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// add r4,r6,r22
	ctx.r4.u64 = ctx.r6.u64 + r22.u64;
	// subf r6,r10,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r10.u64;
	// srawi r3,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 18;
	// subf r5,r10,r28
	ctx.r5.u64 = r28.u64 - ctx.r10.u64;
	// sth r3,144(r1)
	REX_STORE_U16(ctx.r1.u32 + 144, ctx.r3.u16);
	// subf r10,r10,r27
	ctx.r10.u64 = r27.u64 - ctx.r10.u64;
loc_824A08B4:
	// lhz r4,-4(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// lhz r3,-2(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r31,0(r11)
	r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r28,2(r11)
	r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhz r27,4(r11)
	r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r31,r31
	r31.s64 = r31.s16;
	// extsh r28,r28
	r28.s64 = r28.s16;
	// mullw r4,r4,r8
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// mullw r3,r3,r8
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// extsh r27,r27
	r27.s64 = r27.s16;
	// mullw r31,r31,r8
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r8.s32);
	// mullw r28,r28,r8
	r28.s64 = int64_t(r28.s32) * int64_t(ctx.r8.s32);
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// mullw r3,r3,r9
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// mullw r27,r27,r9
	r27.s64 = int64_t(r27.s32) * int64_t(ctx.r9.s32);
	// mullw r31,r31,r9
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// mullw r28,r28,r9
	r28.s64 = int64_t(r28.s32) * int64_t(ctx.r9.s32);
	// add r4,r4,r22
	ctx.r4.u64 = ctx.r4.u64 + r22.u64;
	// add r3,r3,r22
	ctx.r3.u64 = ctx.r3.u64 + r22.u64;
	// mullw r27,r8,r27
	r27.s64 = int64_t(ctx.r8.s32) * int64_t(r27.s32);
	// add r31,r31,r22
	r31.u64 = r31.u64 + r22.u64;
	// srawi r4,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 18;
	// add r28,r28,r22
	r28.u64 = r28.u64 + r22.u64;
	// srawi r3,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 18;
	// sth r4,8(r7)
	REX_STORE_U16(ctx.r7.u32 + 8, ctx.r4.u16);
	// add r27,r27,r22
	r27.u64 = r27.u64 + r22.u64;
	// srawi r31,r31,18
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3FFFF) != 0);
	r31.s64 = r31.s32 >> 18;
	// srawi r28,r28,18
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3FFFF) != 0);
	r28.s64 = r28.s32 >> 18;
	// srawi r27,r27,18
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3FFFF) != 0);
	r27.s64 = r27.s32 >> 18;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// extsh r28,r28
	r28.s64 = r28.s16;
	// extsh r4,r27
	ctx.r4.s64 = r27.s16;
	// sthx r31,r6,r11
	REX_STORE_U16(ctx.r6.u32 + ctx.r11.u32, r31.u16);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// sthx r28,r5,r11
	REX_STORE_U16(ctx.r5.u32 + ctx.r11.u32, r28.u16);
	// sthx r4,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u16);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// sthu r3,10(r7)
	ea = 10 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x824a08b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824A08B4;
	// lhz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 144);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// sth r11,160(r1)
	REX_STORE_U16(ctx.r1.u32 + 160, ctx.r11.u16);
	// b 0x824a0b04
	goto loc_824A0B04;
loc_824A0968:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq cr6,0x824a09b0
	if (ctx.cr6.eq) goto loc_824A09B0;
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(r14.s32, 1, ctx.xer);
	// beq cr6,0x824a09b0
	if (ctx.cr6.eq) goto loc_824A09B0;
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(r14.s32, 4, ctx.xer);
	// beq cr6,0x824a09b0
	if (ctx.cr6.eq) goto loc_824A09B0;
	// cmpwi cr6,r14,5
	ctx.cr6.compare<int32_t>(r14.s32, 5, ctx.xer);
	// beq cr6,0x824a09b0
	if (ctx.cr6.eq) goto loc_824A09B0;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// addi r10,r8,-2
	ctx.r10.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824A099C:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x824a099c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824A099C;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// b 0x824a0b04
	goto loc_824A0B04;
loc_824A09B0:
	// rlwinm r8,r31,2,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFF8;
	// lhz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r9,r16,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,388(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 388);
	// subf r6,r8,r25
	ctx.r6.u64 = r25.u64 - ctx.r8.u64;
	// add r5,r16,r9
	ctx.r5.u64 = r16.u64 + ctx.r9.u64;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,3
	ctx.r7.s64 = 3;
	// lbz r8,0(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r31,r16,2,24,29
	r31.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFC;
	// clrlwi r9,r8,26
	ctx.r9.u64 = ctx.r8.u32 & 0x3F;
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lwz r7,16(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// addi r28,r1,144
	r28.s64 = ctx.r1.s64 + 144;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r8,r31,r4
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + ctx.r4.u32);
	// rlwinm r7,r7,2,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r1,146
	r31.s64 = ctx.r1.s64 + 146;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r27,r1,148
	r27.s64 = ctx.r1.s64 + 148;
	// lwzx r4,r7,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// addi r7,r6,-10
	ctx.r7.s64 = ctx.r6.s64 + -10;
	// subf r6,r10,r28
	ctx.r6.u64 = r28.u64 - ctx.r10.u64;
	// addi r11,r10,6
	ctx.r11.s64 = ctx.r10.s64 + 6;
	// lwz r28,16(r5)
	r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// subf r5,r10,r31
	ctx.r5.u64 = r31.u64 - ctx.r10.u64;
	// subf r10,r10,r27
	ctx.r10.u64 = r27.u64 - ctx.r10.u64;
	// mullw r3,r28,r3
	ctx.r3.s64 = int64_t(r28.s32) * int64_t(ctx.r3.s32);
	// mullw r4,r4,r3
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// add r3,r4,r22
	ctx.r3.u64 = ctx.r4.u64 + r22.u64;
	// srawi r4,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 18;
	// sth r4,144(r1)
	REX_STORE_U16(ctx.r1.u32 + 144, ctx.r4.u16);
loc_824A0A44:
	// lhz r4,-4(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// lhz r3,-2(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r31,0(r11)
	r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r28,2(r11)
	r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhz r27,4(r11)
	r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r31,r31
	r31.s64 = r31.s16;
	// extsh r28,r28
	r28.s64 = r28.s16;
	// mullw r4,r4,r8
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// mullw r3,r3,r8
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// extsh r27,r27
	r27.s64 = r27.s16;
	// mullw r31,r31,r8
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r8.s32);
	// mullw r28,r28,r8
	r28.s64 = int64_t(r28.s32) * int64_t(ctx.r8.s32);
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// mullw r3,r3,r9
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// mullw r27,r27,r9
	r27.s64 = int64_t(r27.s32) * int64_t(ctx.r9.s32);
	// mullw r31,r31,r9
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// mullw r28,r28,r9
	r28.s64 = int64_t(r28.s32) * int64_t(ctx.r9.s32);
	// add r4,r4,r22
	ctx.r4.u64 = ctx.r4.u64 + r22.u64;
	// add r3,r3,r22
	ctx.r3.u64 = ctx.r3.u64 + r22.u64;
	// mullw r27,r8,r27
	r27.s64 = int64_t(ctx.r8.s32) * int64_t(r27.s32);
	// add r31,r31,r22
	r31.u64 = r31.u64 + r22.u64;
	// srawi r4,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 18;
	// add r28,r28,r22
	r28.u64 = r28.u64 + r22.u64;
	// srawi r3,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 18;
	// sth r4,8(r7)
	REX_STORE_U16(ctx.r7.u32 + 8, ctx.r4.u16);
	// add r27,r27,r22
	r27.u64 = r27.u64 + r22.u64;
	// srawi r31,r31,18
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3FFFF) != 0);
	r31.s64 = r31.s32 >> 18;
	// srawi r28,r28,18
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3FFFF) != 0);
	r28.s64 = r28.s32 >> 18;
	// srawi r27,r27,18
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3FFFF) != 0);
	r27.s64 = r27.s32 >> 18;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// extsh r28,r28
	r28.s64 = r28.s16;
	// extsh r4,r27
	ctx.r4.s64 = r27.s16;
	// sthx r31,r11,r6
	REX_STORE_U16(ctx.r11.u32 + ctx.r6.u32, r31.u16);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// sthx r28,r11,r5
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, r28.u16);
	// sthx r4,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u16);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// sthu r3,10(r7)
	ea = 10 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x824a0a44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824A0A44;
	// lhz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 144);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// sth r11,160(r1)
	REX_STORE_U16(ctx.r1.u32 + 160, ctx.r11.u16);
	// b 0x824a0b04
	goto loc_824A0B04;
loc_824A0AF8:
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, ctx.xer);
	// bne cr6,0x824a0b04
	if (!ctx.cr6.eq) goto loc_824A0B04;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_824A0B04:
	// lwz r6,388(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,28(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 28);
	// beq cr6,0x824a0ce8
	if (ctx.cr6.eq) goto loc_824A0CE8;
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// lhz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// sth r5,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// sth r5,0(r29)
	REX_STORE_U16(r29.u32 + 0, ctx.r5.u16);
	// sth r5,16(r29)
	REX_STORE_U16(r29.u32 + 16, ctx.r5.u16);
	// bne cr6,0x824a0c1c
	if (!ctx.cr6.eq) goto loc_824A0C1C;
	// lhz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// sth r5,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r5.u16);
	// sth r5,2(r29)
	REX_STORE_U16(r29.u32 + 2, ctx.r5.u16);
	// lhz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sth r8,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// sth r8,4(r29)
	REX_STORE_U16(r29.u32 + 4, ctx.r8.u16);
	// lhz r9,6(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lhz r8,6(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// sth r3,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r3.u16);
	// sth r3,6(r29)
	REX_STORE_U16(r29.u32 + 6, ctx.r3.u16);
	// lhz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// lhz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sth r4,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r4.u16);
	// sth r4,8(r29)
	REX_STORE_U16(r29.u32 + 8, ctx.r4.u16);
	// lhz r9,10(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// lhz r8,10(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// sth r7,10(r29)
	REX_STORE_U16(r29.u32 + 10, ctx.r7.u16);
	// lhz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// lhz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// sth r9,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r9.u16);
	// sth r9,12(r29)
	REX_STORE_U16(r29.u32 + 12, ctx.r9.u16);
	// lhz r9,14(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lhz r10,14(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sth r4,14(r11)
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r4.u16);
	// sth r4,14(r29)
	REX_STORE_U16(r29.u32 + 14, ctx.r4.u16);
	// lhz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// sth r3,18(r29)
	REX_STORE_U16(r29.u32 + 18, ctx.r3.u16);
	// lhz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 32);
	// sth r10,20(r29)
	REX_STORE_U16(r29.u32 + 20, ctx.r10.u16);
	// lhz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 48);
	// sth r9,22(r29)
	REX_STORE_U16(r29.u32 + 22, ctx.r9.u16);
	// lhz r8,64(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 64);
	// sth r8,24(r29)
	REX_STORE_U16(r29.u32 + 24, ctx.r8.u16);
	// lhz r7,80(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 80);
	// sth r7,26(r29)
	REX_STORE_U16(r29.u32 + 26, ctx.r7.u16);
	// lhz r5,96(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 96);
	// sth r5,28(r29)
	REX_STORE_U16(r29.u32 + 28, ctx.r5.u16);
	// lhz r4,112(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 112);
	// sth r4,30(r29)
	REX_STORE_U16(r29.u32 + 30, ctx.r4.u16);
	// b 0x824a0d44
	goto loc_824A0D44;
loc_824A0C1C:
	// cmpwi cr6,r26,8
	ctx.cr6.compare<int32_t>(r26.s32, 8, ctx.xer);
	// bne cr6,0x824a0cf4
	if (!ctx.cr6.eq) goto loc_824A0CF4;
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// sth r9,2(r29)
	REX_STORE_U16(r29.u32 + 2, ctx.r9.u16);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r8.u32);
	// ld r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.r7.u64);
	// lhz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// sth r9,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r9.u16);
	// sth r9,18(r29)
	REX_STORE_U16(r29.u32 + 18, ctx.r9.u16);
	// lhz r8,32(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 32);
	// lhz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sth r4,32(r11)
	REX_STORE_U16(ctx.r11.u32 + 32, ctx.r4.u16);
	// sth r4,20(r29)
	REX_STORE_U16(r29.u32 + 20, ctx.r4.u16);
	// lhz r9,6(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lhz r8,48(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 48);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,48(r11)
	REX_STORE_U16(ctx.r11.u32 + 48, ctx.r7.u16);
	// sth r7,22(r29)
	REX_STORE_U16(r29.u32 + 22, ctx.r7.u16);
	// lhz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// lhz r8,64(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 64);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// sth r9,64(r11)
	REX_STORE_U16(ctx.r11.u32 + 64, ctx.r9.u16);
	// sth r9,24(r29)
	REX_STORE_U16(r29.u32 + 24, ctx.r9.u16);
	// lhz r9,10(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// lhz r8,80(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 80);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sth r4,80(r11)
	REX_STORE_U16(ctx.r11.u32 + 80, ctx.r4.u16);
	// sth r4,26(r29)
	REX_STORE_U16(r29.u32 + 26, ctx.r4.u16);
	// lhz r8,96(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 96);
	// lhz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,96(r11)
	REX_STORE_U16(ctx.r11.u32 + 96, ctx.r7.u16);
	// sth r7,28(r29)
	REX_STORE_U16(r29.u32 + 28, ctx.r7.u16);
	// lhz r9,112(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 112);
	// lhz r10,14(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// sth r10,112(r11)
	REX_STORE_U16(ctx.r11.u32 + 112, ctx.r10.u16);
	// sth r10,30(r29)
	REX_STORE_U16(r29.u32 + 30, ctx.r10.u16);
	// b 0x824a0d44
	goto loc_824A0D44;
loc_824A0CE8:
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// sth r10,0(r29)
	REX_STORE_U16(r29.u32 + 0, ctx.r10.u16);
	// sth r10,16(r29)
	REX_STORE_U16(r29.u32 + 16, ctx.r10.u16);
loc_824A0CF4:
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// sth r10,2(r29)
	REX_STORE_U16(r29.u32 + 2, ctx.r10.u16);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r9.u32);
	// ld r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.r8.u64);
	// lhz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// sth r7,18(r29)
	REX_STORE_U16(r29.u32 + 18, ctx.r7.u16);
	// lhz r5,32(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 32);
	// sth r5,20(r29)
	REX_STORE_U16(r29.u32 + 20, ctx.r5.u16);
	// lhz r4,48(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 48);
	// sth r4,22(r29)
	REX_STORE_U16(r29.u32 + 22, ctx.r4.u16);
	// lhz r3,64(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 64);
	// sth r3,24(r29)
	REX_STORE_U16(r29.u32 + 24, ctx.r3.u16);
	// lhz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 80);
	// sth r10,26(r29)
	REX_STORE_U16(r29.u32 + 26, ctx.r10.u16);
	// lhz r9,96(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 96);
	// sth r9,28(r29)
	REX_STORE_U16(r29.u32 + 28, ctx.r9.u16);
	// lhz r8,112(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 112);
	// sth r8,30(r29)
	REX_STORE_U16(r29.u32 + 30, ctx.r8.u16);
loc_824A0D44:
	// clrlwi r11,r24,31
	ctx.r11.u64 = r24.u32 & 0x1;
	// lwz r5,372(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// srawi r8,r24,1
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1) != 0);
	ctx.r8.s64 = r24.s32 >> 1;
	// ld r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,380(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// or r11,r7,r14
	ctx.r11.u64 = ctx.r7.u64 | r14.u64;
	// lwz r9,32(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 32);
	// ori r8,r4,128
	ctx.r8.u64 = ctx.r4.u64 | 128;
	// rlwinm r7,r11,12,0,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// or r4,r8,r3
	ctx.r4.u64 = ctx.r8.u64 | ctx.r3.u64;
	// or r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 | ctx.r10.u64;
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// rlwinm r11,r3,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// rldicr r7,r4,8,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 | ctx.r5.u64;
	// std r7,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
	// cmpwi cr6,r14,6
	ctx.cr6.compare<int32_t>(r14.s32, 6, ctx.xer);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r11,32(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r9,32(r6)
	REX_STORE_U32(ctx.r6.u32 + 32, ctx.r9.u32);
	// bge cr6,0x824a0ddc
	if (!ctx.cr6.lt) goto loc_824A0DDC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r7,104(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r24,108(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r15,372(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// ori r25,r11,32768
	r25.u64 = ctx.r11.u64 | 32768;
	// lwz r29,380(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r27,388(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r17,116(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x824a0060
	goto loc_824A0060;
loc_824A0DD0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x822d4ea0
	return;
loc_824A0DDC:
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// rldicl r29,r7,56,8
	r29.u64 = __builtin_rotateleft64(ctx.r7.u64, 56) & 0xFFFFFFFFFFFFFF;
	// lwz r4,4(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// li r31,16384
	r31.s64 = 16384;
	// lbz r7,1324(r30)
	ctx.r7.u64 = REX_LOAD_U8(r30.u32 + 1324);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r5,124(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lbz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r6,r9,24,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x7;
	// lbz r28,5(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r26,r5,8,63
	r26.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lwz r9,1708(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 1708);
	// subf r7,r7,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r7.u64;
	// lwz r11,1716(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1716);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r27,1312(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 1312);
	// neg r6,r7
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// xor r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// rlwinm r30,r4,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r7,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 31;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r25,r7,6,0,25
	r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// or r28,r25,r28
	r28.u64 = r25.u64 | r28.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r28,r28,24
	r28.u64 = r28.u32 & 0xFF;
	// or r28,r26,r28
	r28.u64 = r26.u64 | r28.u64;
	// rldicr r28,r28,48,15
	r28.u64 = __builtin_rotateleft64(r28.u64, 48) & 0xFFFF000000000000;
	// or r29,r28,r29
	r29.u64 = r28.u64 | r29.u64;
	// stdx r29,r30,r27
	REX_STORE_U64(r30.u32 + r27.u32, r29.u64);
	// sth r31,2(r6)
	REX_STORE_U16(ctx.r6.u32 + 2, r31.u16);
	// sthx r31,r9,r8
	REX_STORE_U16(ctx.r9.u32 + ctx.r8.u32, r31.u16);
	// sth r31,2(r5)
	REX_STORE_U16(ctx.r5.u32 + 2, r31.u16);
	// sthx r31,r10,r9
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, r31.u16);
	// sth r31,2(r7)
	REX_STORE_U16(ctx.r7.u32 + 2, r31.u16);
	// sthx r31,r11,r8
	REX_STORE_U16(ctx.r11.u32 + ctx.r8.u32, r31.u16);
	// sth r31,2(r4)
	REX_STORE_U16(ctx.r4.u32 + 2, r31.u16);
	// sthx r31,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, r31.u16);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_824D4210) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100bd
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4390) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010125
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4510) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101b4
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4690) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101c5
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4810) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000005
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4990) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010357
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4B10) {
	REX_FUNC_PROLOGUE();
	// .long 0x201000d
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

