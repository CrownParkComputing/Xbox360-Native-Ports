#include "soulcalibur2_funcs.66.h"

DEFINE_REX_FUNC(sub_820E48C0) {
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
	// bne 0x820e494c
	if (!ctx.cr0.eq) goto loc_820E494C;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x820e4924
	if (!ctx.cr6.gt) goto loc_820E4924;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e494c
	if (ctx.cr6.eq) goto loc_820E494C;
	// lwz r10,-16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -16);
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820e491c
	if (ctx.cr6.eq) goto loc_820E491C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x820e493c
	goto loc_820E493C;
loc_820E491C:
	// bl 0x822c80a8
	ctx.lr = 0x820E4920;
	sub_822C80A8(ctx, base);
	// b 0x820e4944
	goto loc_820E4944;
loc_820E4924:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e494c
	if (ctx.cr6.eq) goto loc_820E494C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_820E493C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820E4944;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820E4944:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_820E494C:
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

DEFINE_REX_FUNC(sub_820E80C0) {
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
	// lwz r30,396(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 396);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x820e8158
	if (ctx.cr6.eq) goto loc_820E8158;
	// lwz r11,508(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 508);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820e812c
	if (ctx.cr6.eq) goto loc_820E812C;
	// lwz r10,10140(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 10140);
	// lwz r11,392(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 392);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r9,68(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 68);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r10,r11,20028
	ctx.r10.s64 = ctx.r11.s64 + 20028;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lfs f3,20084(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20084);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,20080(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20080);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20076(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20076);
	ctx.f1.f64 = double(temp.f32);
	// bctrl 
	ctx.lr = 0x820E812C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820E812C:
	// lwz r11,508(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 508);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820e8158
	if (!ctx.cr6.eq) goto loc_820E8158;
	// lfs f0,10252(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 10252);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x82200760
	ctx.lr = 0x820E8148;
	sub_82200760(ctx, base);
	// lfs f0,10256(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 10256);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x82200780
	ctx.lr = 0x820E8158;
	sub_82200780(ctx, base);
loc_820E8158:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// bl 0x821d6398
	ctx.lr = 0x820E8168;
	sub_821D6398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820e817c
	if (!ctx.cr0.eq) goto loc_820E817C;
	// lwz r11,500(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 500);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r11.u32);
loc_820E817C:
	// lwz r10,504(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 504);
	// lwz r11,500(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 500);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x820e8190
	if (!ctx.cr6.gt) goto loc_820E8190;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_820E8190:
	// stw r11,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820e8204
	if (!ctx.cr6.eq) goto loc_820E8204;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82200940
	ctx.lr = 0x820E81B0;
	sub_82200940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200948
	ctx.lr = 0x820E81BC;
	sub_82200948(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200950
	ctx.lr = 0x820E81C8;
	sub_82200950(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200980
	ctx.lr = 0x820E81D4;
	sub_82200980(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200988
	ctx.lr = 0x820E81E0;
	sub_82200988(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200990
	ctx.lr = 0x820E81EC;
	sub_82200990(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822007f8
	ctx.lr = 0x820E81F8;
	sub_822007F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200810
	ctx.lr = 0x820E8204;
	sub_82200810(ctx, base);
loc_820E8204:
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

DEFINE_REX_FUNC(sub_820F284C) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F2D20) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// lfs f13,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stw r11,148(r3)
	REX_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stw r11,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stw r11,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stfs f13,84(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f13,100(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,140(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f13,144(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F5E30) {
	REX_FUNC_PROLOGUE();
	// stw r4,9324(r3)
	REX_STORE_U32(ctx.r3.u32 + 9324, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F5EC0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f62b4
	if (ctx.cr6.eq) goto loc_820F62B4;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// addi r5,r10,20460
	ctx.r5.s64 = ctx.r10.s64 + 20460;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,324(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// bl 0x821af9d8
	ctx.lr = 0x820F5F04;
	sub_821AF9D8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20444
	ctx.r5.s64 = ctx.r11.s64 + 20444;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821af9d8
	ctx.lr = 0x820F5F1C;
	sub_821AF9D8(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_820F5F28:
	// stwu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bdnz 0x820f5f28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F5F28;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20432
	ctx.r5.s64 = ctx.r11.s64 + 20432;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af9d8
	ctx.lr = 0x820F5F4C;
	sub_821AF9D8(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r30,24
	ctx.r10.s64 = r30.s64 + 24;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_820F5F58:
	// stwu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bdnz 0x820f5f58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F5F58;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20416
	ctx.r5.s64 = ctx.r11.s64 + 20416;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af9d8
	ctx.lr = 0x820F5F7C;
	sub_821AF9D8(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r30,48
	ctx.r10.s64 = r30.s64 + 48;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_820F5F88:
	// stwu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bdnz 0x820f5f88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F5F88;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20400
	ctx.r5.s64 = ctx.r11.s64 + 20400;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af9d8
	ctx.lr = 0x820F5FAC;
	sub_821AF9D8(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r30,72
	ctx.r10.s64 = r30.s64 + 72;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_820F5FB8:
	// stwu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bdnz 0x820f5fb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F5FB8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20372
	ctx.r5.s64 = ctx.r11.s64 + 20372;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af9d8
	ctx.lr = 0x820F5FDC;
	sub_821AF9D8(ctx, base);
	// stw r3,100(r30)
	REX_STORE_U32(r30.u32 + 100, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20344
	ctx.r5.s64 = ctx.r11.s64 + 20344;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af9d8
	ctx.lr = 0x820F5FF8;
	sub_821AF9D8(ctx, base);
	// stw r3,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20312
	ctx.r5.s64 = ctx.r11.s64 + 20312;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af9d8
	ctx.lr = 0x820F6014;
	sub_821AF9D8(ctx, base);
	// stw r3,108(r30)
	REX_STORE_U32(r30.u32 + 108, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20284
	ctx.r5.s64 = ctx.r11.s64 + 20284;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af9d8
	ctx.lr = 0x820F6030;
	sub_821AF9D8(ctx, base);
	// stw r3,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20256
	ctx.r5.s64 = ctx.r11.s64 + 20256;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af9d8
	ctx.lr = 0x820F604C;
	sub_821AF9D8(ctx, base);
	// stw r3,116(r30)
	REX_STORE_U32(r30.u32 + 116, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20232
	ctx.r5.s64 = ctx.r11.s64 + 20232;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af9d8
	ctx.lr = 0x820F6068;
	sub_821AF9D8(ctx, base);
	// stw r3,120(r30)
	REX_STORE_U32(r30.u32 + 120, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20200
	ctx.r5.s64 = ctx.r11.s64 + 20200;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af9d8
	ctx.lr = 0x820F6084;
	sub_821AF9D8(ctx, base);
	// stw r3,124(r30)
	REX_STORE_U32(r30.u32 + 124, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20172
	ctx.r5.s64 = ctx.r11.s64 + 20172;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af9d8
	ctx.lr = 0x820F60A0;
	sub_821AF9D8(ctx, base);
	// stw r3,128(r30)
	REX_STORE_U32(r30.u32 + 128, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20140
	ctx.r5.s64 = ctx.r11.s64 + 20140;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af9d8
	ctx.lr = 0x820F60BC;
	sub_821AF9D8(ctx, base);
	// stw r3,132(r30)
	REX_STORE_U32(r30.u32 + 132, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20108
	ctx.r5.s64 = ctx.r11.s64 + 20108;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af9d8
	ctx.lr = 0x820F60D8;
	sub_821AF9D8(ctx, base);
	// stw r3,136(r30)
	REX_STORE_U32(r30.u32 + 136, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20080
	ctx.r5.s64 = ctx.r11.s64 + 20080;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af9d8
	ctx.lr = 0x820F60F4;
	sub_821AF9D8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,140(r30)
	REX_STORE_U32(r30.u32 + 140, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20052
	ctx.r5.s64 = ctx.r11.s64 + 20052;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af9d8
	ctx.lr = 0x820F6110;
	sub_821AF9D8(ctx, base);
	// stw r3,144(r30)
	REX_STORE_U32(r30.u32 + 144, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20036
	ctx.r5.s64 = ctx.r11.s64 + 20036;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af9d8
	ctx.lr = 0x820F612C;
	sub_821AF9D8(ctx, base);
	// stw r3,148(r30)
	REX_STORE_U32(r30.u32 + 148, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20020
	ctx.r5.s64 = ctx.r11.s64 + 20020;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af9d8
	ctx.lr = 0x820F6148;
	sub_821AF9D8(ctx, base);
	// stw r3,152(r30)
	REX_STORE_U32(r30.u32 + 152, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20000
	ctx.r5.s64 = ctx.r11.s64 + 20000;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af9d8
	ctx.lr = 0x820F6164;
	sub_821AF9D8(ctx, base);
	// stw r3,156(r30)
	REX_STORE_U32(r30.u32 + 156, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,19980
	ctx.r5.s64 = ctx.r11.s64 + 19980;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af9d8
	ctx.lr = 0x820F6180;
	sub_821AF9D8(ctx, base);
	// stw r3,160(r30)
	REX_STORE_U32(r30.u32 + 160, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,19956
	ctx.r5.s64 = ctx.r11.s64 + 19956;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af9d8
	ctx.lr = 0x820F619C;
	sub_821AF9D8(ctx, base);
	// stw r3,164(r30)
	REX_STORE_U32(r30.u32 + 164, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,19932
	ctx.r5.s64 = ctx.r11.s64 + 19932;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af9d8
	ctx.lr = 0x820F61B8;
	sub_821AF9D8(ctx, base);
	// stw r3,168(r30)
	REX_STORE_U32(r30.u32 + 168, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,19904
	ctx.r5.s64 = ctx.r11.s64 + 19904;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af9d8
	ctx.lr = 0x820F61D4;
	sub_821AF9D8(ctx, base);
	// stw r3,172(r30)
	REX_STORE_U32(r30.u32 + 172, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,19876
	ctx.r5.s64 = ctx.r11.s64 + 19876;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af9d8
	ctx.lr = 0x820F61F0;
	sub_821AF9D8(ctx, base);
	// stw r3,176(r30)
	REX_STORE_U32(r30.u32 + 176, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,19856
	ctx.r5.s64 = ctx.r11.s64 + 19856;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af9d8
	ctx.lr = 0x820F620C;
	sub_821AF9D8(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r30,176
	ctx.r10.s64 = r30.s64 + 176;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_820F6218:
	// stwu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bdnz 0x820f6218
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F6218;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,19840
	ctx.r5.s64 = ctx.r11.s64 + 19840;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af9d8
	ctx.lr = 0x820F623C;
	sub_821AF9D8(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r30,200
	ctx.r10.s64 = r30.s64 + 200;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_820F6248:
	// stwu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bdnz 0x820f6248
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F6248;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,19820
	ctx.r5.s64 = ctx.r11.s64 + 19820;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af9d8
	ctx.lr = 0x820F626C;
	sub_821AF9D8(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r30,224
	ctx.r10.s64 = r30.s64 + 224;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_820F6278:
	// stwu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bdnz 0x820f6278
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F6278;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,19800
	ctx.r5.s64 = ctx.r11.s64 + 19800;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af9d8
	ctx.lr = 0x820F629C;
	sub_821AF9D8(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r30,248
	ctx.r10.s64 = r30.s64 + 248;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_820F62A8:
	// stwu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bdnz 0x820f62a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F62A8;
loc_820F62B4:
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

DEFINE_REX_FUNC(sub_821078A8) {
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
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r11,121(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 121);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82107920
	if (!ctx.cr6.eq) goto loc_82107920;
	// bl 0x82106650
	ctx.lr = 0x821078D0;
	sub_82106650(ctx, base);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,27
	ctx.r11.s64 = 27;
	// addi r31,r10,22960
	r31.s64 = ctx.r10.s64 + 22960;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x82106c48
	ctx.lr = 0x821078EC;
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
	ctx.lr = 0x82107900;
	sub_82100C80(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,432
	ctx.r9.s64 = ctx.r11.s64 + 432;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,216(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 216);
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// lwz r11,216(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 216);
	// stb r8,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
loc_82107920:
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

DEFINE_REX_FUNC(sub_8210BCD0) {
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
	// bl 0x8210b298
	ctx.lr = 0x8210BCE8;
	sub_8210B298(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,224(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r6,9
	ctx.r6.s64 = 9;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x8210b058
	ctx.lr = 0x8210BCFC;
	sub_8210B058(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8210a360
	ctx.lr = 0x8210BD04;
	sub_8210A360(ctx, base);
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

DEFINE_REX_FUNC(sub_8210E480) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8210e4b8
	if (ctx.cr0.eq) goto loc_8210E4B8;
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mulli r10,r10,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_8210E4B8:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// rlwinm. r10,r8,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r7,r11,-19896
	ctx.r7.s64 = ctx.r11.s64 + -19896;
	// beq 0x8210e514
	if (ctx.cr0.eq) goto loc_8210E514;
	// lbz r11,126(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 126);
	// mulli r9,r6,45
	ctx.r9.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(45));
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_8210E4D4:
	// rotlwi r10,r4,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// divw r31,r4,r11
	r31.u64 = uint32_t((ctx.r11.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r4.s32 / ctx.r11.s32 : 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r31,r31,r11
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r11.s32);
	// andc r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// subf. r31,r31,r4
	r31.u64 = ctx.r4.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bne 0x8210e4fc
	if (!ctx.cr0.eq) goto loc_8210E4FC;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_8210E4FC:
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// add r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8210e4d4
	if (ctx.cr6.eq) goto loc_8210E4D4;
loc_8210E514:
	// rlwinm. r11,r8,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8210e568
	if (ctx.cr0.eq) goto loc_8210E568;
	// lbz r11,126(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 126);
	// mulli r9,r6,45
	ctx.r9.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(45));
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_8210E528:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r10,r4,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// divw r31,r4,r11
	r31.u64 = uint32_t((ctx.r11.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r4.s32 / ctx.r11.s32 : 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r31,r31,r11
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r11.s32);
	// andc r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// subf. r31,r31,r4
	r31.u64 = ctx.r4.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bne 0x8210e554
	if (!ctx.cr0.eq) goto loc_8210E554;
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
loc_8210E554:
	// add r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8210e528
	if (ctx.cr6.eq) goto loc_8210E528;
loc_8210E568:
	// rlwinm. r11,r8,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8210e59c
	if (ctx.cr0.eq) goto loc_8210E59C;
	// lbz r10,126(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 126);
	// mulli r11,r6,45
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(45));
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
loc_8210E57C:
	// subf. r4,r10,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x8210e588
	if (!ctx.cr0.lt) goto loc_8210E588;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
loc_8210E588:
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8210e57c
	if (ctx.cr6.eq) goto loc_8210E57C;
loc_8210E59C:
	// rlwinm. r11,r8,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8210e5d4
	if (ctx.cr0.eq) goto loc_8210E5D4;
	// lbz r10,126(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 126);
	// mulli r11,r6,45
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(45));
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
loc_8210E5B0:
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8210e5c0
	if (ctx.cr6.lt) goto loc_8210E5C0;
	// subf r4,r5,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r5.u64;
loc_8210E5C0:
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8210e5b0
	if (ctx.cr6.eq) goto loc_8210E5B0;
loc_8210E5D4:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82113C68) {
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
	ctx.lr = 0x82113C70;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lwz r9,184(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r26,r3,184
	r26.s64 = ctx.r3.s64 + 184;
	// li r25,2
	r25.s64 = 2;
	// lwz r29,-32480(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// lis r24,-32170
	r24.s64 = -2108293120;
	// addi r28,r11,15387
	r28.s64 = ctx.r11.s64 + 15387;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82113e90
	if (!ctx.cr6.eq) goto loc_82113E90;
	// lbz r11,180(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 180);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r27,0
	r27.s64 = 0;
	// sth r25,182(r3)
	REX_STORE_U16(ctx.r3.u32 + 182, r25.u16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// bne 0x82113cc0
	if (!ctx.cr0.eq) goto loc_82113CC0;
	// stw r27,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, r27.u32);
loc_82113CC0:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,156(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 156);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821af9d8
	ctx.lr = 0x82113CD4;
	sub_821AF9D8(ctx, base);
	// li r5,400
	ctx.r5.s64 = 400;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r3.u32);
	// lwz r3,196(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 196);
	// bl 0x822d5870
	ctx.lr = 0x82113CE8;
	sub_822D5870(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r4,168(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 168);
	// addi r30,r11,432
	r30.s64 = ctx.r11.s64 + 432;
	// lwz r5,344(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 344);
	// bl 0x821103c0
	ctx.lr = 0x82113D00;
	sub_821103C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,196(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 196);
	// bl 0x82112330
	ctx.lr = 0x82113D0C;
	sub_82112330(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r4,168(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lwz r5,344(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 344);
	// bl 0x821103c0
	ctx.lr = 0x82113D1C;
	sub_821103C0(ctx, base);
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82112330
	ctx.lr = 0x82113D2C;
	sub_82112330(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// lwz r4,168(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lwz r5,344(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 344);
	// bl 0x821103c0
	ctx.lr = 0x82113D3C;
	sub_821103C0(ctx, base);
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x82112330
	ctx.lr = 0x82113D4C;
	sub_82112330(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r4,168(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lwz r5,344(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 344);
	// bl 0x821103c0
	ctx.lr = 0x82113D5C;
	sub_821103C0(ctx, base);
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// bl 0x82112330
	ctx.lr = 0x82113D6C;
	sub_82112330(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// lwz r4,168(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lwz r5,344(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 344);
	// bl 0x821103c0
	ctx.lr = 0x82113D7C;
	sub_821103C0(ctx, base);
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 192;
	// bl 0x82112330
	ctx.lr = 0x82113D8C;
	sub_82112330(ctx, base);
	// li r3,6
	ctx.r3.s64 = 6;
	// lwz r4,168(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lwz r5,344(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 344);
	// bl 0x821103c0
	ctx.lr = 0x82113D9C;
	sub_821103C0(ctx, base);
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,240
	ctx.r3.s64 = ctx.r11.s64 + 240;
	// bl 0x82112330
	ctx.lr = 0x82113DAC;
	sub_82112330(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x8212eb40
	ctx.lr = 0x82113DC0;
	sub_8212EB40(ctx, base);
	// lwz r3,144(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 144);
	// addi r30,r31,200
	r30.s64 = r31.s64 + 200;
	// bl 0x820e4bb0
	ctx.lr = 0x82113DCC;
	sub_820E4BB0(ctx, base);
	// stw r3,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,28908
	ctx.r6.s64 = ctx.r11.s64 + 28908;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821f7d50
	ctx.lr = 0x82113DF4;
	sub_821F7D50(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f3,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f3.f64 = double(temp.f32);
	// beq 0x82113e6c
	if (ctx.cr0.eq) goto loc_82113E6C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,196(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,172(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f3,100(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lis r6,-32176
	ctx.r6.s64 = -2108686336;
	// stfs f3,108(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// addi r7,r7,29656
	ctx.r7.s64 = ctx.r7.s64 + 29656;
	// stw r26,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, r26.u32);
	// addi r6,r6,-16928
	ctx.r6.s64 = ctx.r6.s64 + -16928;
	// lfs f0,16036(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16036);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16032(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16032);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stw r6,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r6.u32);
	// stfs f13,112(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r8,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r8.u32);
	// stw r10,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// stw r30,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, r30.u32);
	// stw r27,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, r27.u32);
	// stw r27,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, r27.u32);
	// stw r27,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, r27.u32);
	// stw r27,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, r27.u32);
	// b 0x82113e70
	goto loc_82113E70;
loc_82113E6C:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_82113E70:
	// stw r11,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r11.u32);
	// li r4,60
	ctx.r4.s64 = 60;
	// li r3,2
	ctx.r3.s64 = 2;
	// fmr f2,f3
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x821afa50
	ctx.lr = 0x82113E88;
	sub_821AFA50(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,23956(r24)
	REX_STORE_U8(r24.u32 + 23956, ctx.r11.u8);
loc_82113E90:
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82113ecc
	if (!ctx.cr6.eq) goto loc_82113ECC;
	// sth r25,182(r31)
	REX_STORE_U16(r31.u32 + 182, r25.u16);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r25,188(r31)
	REX_STORE_U32(r31.u32 + 188, r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,160(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 160);
	// bl 0x821af9d8
	ctx.lr = 0x82113EB8;
	sub_821AF9D8(ctx, base);
	// stw r3,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// bl 0x820e4bb0
	ctx.lr = 0x82113EC0;
	sub_820E4BB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r3.u32);
	// stb r11,23956(r24)
	REX_STORE_U8(r24.u32 + 23956, ctx.r11.u8);
loc_82113ECC:
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82113f08
	if (!ctx.cr6.eq) goto loc_82113F08;
	// sth r25,182(r31)
	REX_STORE_U16(r31.u32 + 182, r25.u16);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r25,192(r31)
	REX_STORE_U32(r31.u32 + 192, r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,164(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 164);
	// bl 0x821af9d8
	ctx.lr = 0x82113EF4;
	sub_821AF9D8(ctx, base);
	// stw r3,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r3.u32);
	// bl 0x820e4bb0
	ctx.lr = 0x82113EFC;
	sub_820E4BB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r3.u32);
	// stb r11,23956(r24)
	REX_STORE_U8(r24.u32 + 23956, ctx.r11.u8);
loc_82113F08:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8211C518) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e88
	ctx.lr = 0x8211C520;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f24
	ctx.lr = 0x8211C528;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// fmr f30,f3
	f30.f64 = ctx.f3.f64;
	// addi r30,r3,136
	r30.s64 = ctx.r3.s64 + 136;
	// lfs f29,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f29.f64 = double(temp.f32);
	// fcmpu cr6,f2,f29
	ctx.cr6.compare(ctx.f2.f64, f29.f64);
	// ble cr6,0x8211c564
	if (!ctx.cr6.gt) goto loc_8211C564;
	// bl 0x821fee88
	ctx.lr = 0x8211C54C;
	sub_821FEE88(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16260);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,96(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 96, temp.u32);
	// b 0x8211c568
	goto loc_8211C568;
loc_8211C564:
	// stfs f2,96(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r30.u32 + 96, temp.u32);
loc_8211C568:
	// fcmpu cr6,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f30.f64, f29.f64);
	// ble cr6,0x8211c57c
	if (!ctx.cr6.gt) goto loc_8211C57C;
	// bl 0x821fee88
	ctx.lr = 0x8211C574;
	sub_821FEE88(ctx, base);
	// stfs f1,100(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 100, temp.u32);
	// b 0x8211c580
	goto loc_8211C580;
loc_8211C57C:
	// stfs f30,100(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 100, temp.u32);
loc_8211C580:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f23,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f23.f64 = double(temp.f32);
	// fcmpu cr6,f31,f23
	ctx.cr6.compare(f31.f64, f23.f64);
	// bge cr6,0x8211c5a0
	if (!ctx.cr6.lt) goto loc_8211C5A0;
	// bl 0x821feec8
	ctx.lr = 0x8211C594;
	sub_821FEEC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16780(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16780);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f31,f1,f0,f29
	f31.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, f29.f64)));
loc_8211C5A0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,104(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 104, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f29,80(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,16228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16228);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f13,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f28,f31,f0
	f28.f64 = double(float(f31.f64 * ctx.f0.f64));
	// fmuls f27,f31,f13
	f27.f64 = double(float(f31.f64 * ctx.f13.f64));
	// lfs f13,-30700(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -30700);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16188(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16188);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f12,29356(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 29356);
	ctx.f12.f64 = double(temp.f32);
	// addi r28,r11,-4
	r28.s64 = ctx.r11.s64 + -4;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r30,-4
	r31.s64 = r30.s64 + -4;
	// lfs f31,2392(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2392);
	f31.f64 = double(temp.f32);
	// li r29,2
	r29.s64 = 2;
	// lfs f24,-30704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30704);
	f24.f64 = double(temp.f32);
	// fadds f0,f28,f13
	ctx.f0.f64 = double(float(f28.f64 + ctx.f13.f64));
	// lfs f25,26528(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26528);
	f25.f64 = double(temp.f32);
	// fadds f13,f27,f12
	ctx.f13.f64 = double(float(f27.f64 + ctx.f12.f64));
	// fmuls f30,f0,f31
	f30.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f26,f13,f31
	f26.f64 = double(float(ctx.f13.f64 * f31.f64));
loc_8211C614:
	// bl 0x821fef70
	ctx.lr = 0x8211C618;
	sub_821FEF70(ctx, base);
	// lfsu f0,4(r28)
	ctx.fpscr.disableFlushMode();
	ea = 4 + r28.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	r28.u32 = ea;
	// fmuls f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 * f25.f64));
	// stfs f1,4(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// stfs f30,12(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// fmr f2,f23
	ctx.f2.f64 = f23.f64;
	// stfsu f26,16(r31)
	ea = 16 + r31.u32;
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ea, temp.u32);
	r31.u32 = ea;
	// fmuls f1,f30,f24
	ctx.f1.f64 = double(float(f30.f64 * f24.f64));
	// bl 0x82204ae0
	ctx.lr = 0x8211C640;
	sub_82204AE0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bne 0x8211c614
	if (!ctx.cr0.eq) goto loc_8211C614;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r31,r30,28
	r31.s64 = r30.s64 + 28;
	// addi r28,r11,-4
	r28.s64 = ctx.r11.s64 + -4;
	// lfs f0,32280(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32280);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,28292(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28292);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f28,f0
	ctx.f0.f64 = double(float(f28.f64 + ctx.f0.f64));
	// fadds f13,f27,f13
	ctx.f13.f64 = double(float(f27.f64 + ctx.f13.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r29,2
	r29.s64 = 2;
	// lfs f27,-30708(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30708);
	f27.f64 = double(temp.f32);
	// lfs f28,28428(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28428);
	f28.f64 = double(temp.f32);
	// fmuls f30,f0,f31
	f30.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f31,f13,f31
	f31.f64 = double(float(ctx.f13.f64 * f31.f64));
loc_8211C68C:
	// bl 0x821feec8
	ctx.lr = 0x8211C690;
	sub_821FEEC8(ctx, base);
	// lfsu f0,4(r28)
	ctx.fpscr.disableFlushMode();
	ea = 4 + r28.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	r28.u32 = ea;
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * f28.f64));
	// stfs f1,4(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// stfs f30,12(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// fmr f2,f23
	ctx.f2.f64 = f23.f64;
	// stfsu f31,16(r31)
	ea = 16 + r31.u32;
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ea, temp.u32);
	r31.u32 = ea;
	// fmuls f1,f30,f27
	ctx.f1.f64 = double(float(f30.f64 * f27.f64));
	// bl 0x82204ae0
	ctx.lr = 0x8211C6B8;
	sub_82204AE0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bne 0x8211c68c
	if (!ctx.cr0.eq) goto loc_8211C68C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r31,r30,60
	r31.s64 = r30.s64 + 60;
	// addi r28,r11,-4
	r28.s64 = ctx.r11.s64 + -4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,-30684(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30684);
	f31.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r29,2
	r29.s64 = 2;
	// lfs f28,-30688(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30688);
	f28.f64 = double(temp.f32);
	// lfs f30,-30692(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30692);
	f30.f64 = double(temp.f32);
loc_8211C6EC:
	// bl 0x821fee08
	ctx.lr = 0x8211C6F0;
	sub_821FEE08(ctx, base);
	// lfsu f0,4(r28)
	ctx.fpscr.disableFlushMode();
	ea = 4 + r28.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	r28.u32 = ea;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// stfs f1,4(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// stfs f31,12(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// fmr f2,f23
	ctx.f2.f64 = f23.f64;
	// stfsu f28,16(r31)
	ea = 16 + r31.u32;
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ea, temp.u32);
	r31.u32 = ea;
	// fmuls f1,f31,f24
	ctx.f1.f64 = double(float(f31.f64 * f24.f64));
	// bl 0x82204ae0
	ctx.lr = 0x8211C718;
	sub_82204AE0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bne 0x8211c6ec
	if (!ctx.cr0.eq) goto loc_8211C6EC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-30696(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30696);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 108, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f70
	ctx.lr = 0x8211C73C;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82125300) {
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
	ctx.lr = 0x82125308;
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// addi r30,r11,-27136
	r30.s64 = ctx.r11.s64 + -27136;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r30,1728
	ctx.r11.s64 = r30.s64 + 1728;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r30,1568
	ctx.r11.s64 = r30.s64 + 1568;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add. r29,r9,r11
	r29.u64 = ctx.r9.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// li r28,0
	r28.s64 = 0;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r9,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r7,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// stw r10,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// beq 0x821253f8
	if (ctx.cr0.eq) goto loc_821253F8;
	// lfs f2,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0130
	ctx.lr = 0x82125378;
	sub_820E0130(ctx, base);
	// lfs f0,10312(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 10312);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// bl 0x821cd0a0
	ctx.lr = 0x82125388;
	sub_821CD0A0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1c28
	ctx.lr = 0x82125394;
	sub_820E1C28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x821253bc
	if (ctx.cr6.lt) goto loc_821253BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,2
	r28.s64 = 2;
	// lfs f31,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	f31.f64 = double(temp.f32);
	// b 0x821253d4
	goto loc_821253D4;
loc_821253BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r28,3
	r28.s64 = 3;
	// lfs f1,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821cd0a0
	ctx.lr = 0x821253D0;
	sub_821CD0A0(ctx, base);
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
loc_821253D4:
	// lfs f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fnmsubs f0,f1,f1,f30
	ctx.f0.f64 = double(float(-std::fma(ctx.f1.f64, ctx.f1.f64, -f30.f64)));
	// fsqrts f2,f0
	ctx.f2.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x820e0130
	ctx.lr = 0x821253E4;
	sub_820E0130(ctx, base);
	// addi r3,r31,9940
	ctx.r3.s64 = r31.s64 + 9940;
	// fmuls f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f31.f64));
	// bl 0x820e06e0
	ctx.lr = 0x821253F0;
	sub_820E06E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,10004(r31)
	REX_STORE_U32(r31.u32 + 10004, ctx.r11.u32);
loc_821253F8:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r10,r30,2976
	ctx.r10.s64 = r30.s64 + 2976;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8212A0F8) {
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
	ctx.lr = 0x8212A11C;
	sub_821FF870(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// rlwinm r6,r11,30,2,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// addi r10,r10,-22936
	ctx.r10.s64 = ctx.r10.s64 + -22936;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lis r8,-32169
	ctx.r8.s64 = -2108227584;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stwx r11,r6,r10
	REX_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r9,r9,-22944
	ctx.r9.s64 = ctx.r9.s64 + -22944;
	// addi r8,r8,-22952
	ctx.r8.s64 = ctx.r8.s64 + -22952;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lfs f0,2388(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2388);
	ctx.f0.f64 = double(temp.f32);
	// lha r11,82(r1)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 82));
	// lbz r10,81(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stwx r10,r6,r9
	REX_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r10.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f0,r6,r8
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, temp.u32);
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

DEFINE_REX_FUNC(sub_8212B520) {
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
	ctx.lr = 0x8212B528;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// blt cr6,0x8212b5d8
	if (ctx.cr6.lt) goto loc_8212B5D8;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// bgt cr6,0x8212b5d8
	if (ctx.cr6.gt) goto loc_8212B5D8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8212b5dc
	if (!ctx.cr6.gt) goto loc_8212B5DC;
	// addi r31,r11,-16
	r31.s64 = ctx.r11.s64 + -16;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r26,r11,15284
	r26.s64 = ctx.r11.s64 + 15284;
loc_8212B56C:
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(r25.s32, 2, ctx.xer);
	// bne cr6,0x8212b59c
	if (!ctx.cr6.eq) goto loc_8212B59C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r4,1
	ctx.r4.s64 = 1;
	// add r27,r11,r28
	r27.u64 = ctx.r11.u64 + r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82203148
	ctx.lr = 0x8212B588;
	sub_82203148(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8212b59c
	if (!ctx.cr6.gt) goto loc_8212B59C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82203180
	ctx.lr = 0x8212B59C;
	sub_82203180(ctx, base);
loc_8212B59C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + r28.u64;
	// lwzu r11,16(r31)
	ea = 16 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x82204910
	ctx.lr = 0x8212B5C8;
	sub_82204910(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bne 0x8212b56c
	if (!ctx.cr0.eq) goto loc_8212B56C;
	// b 0x8212b5dc
	goto loc_8212B5DC;
loc_8212B5D8:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8212B5DC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8212D410) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212aea0
	ctx.lr = 0x8212D42C;
	sub_8212AEA0(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r9,-29140
	ctx.r8.s64 = ctx.r9.s64 + -29140;
	// lis r6,-32237
	ctx.r6.s64 = -2112684032;
	// stw r10,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// addi r7,r11,31432
	ctx.r7.s64 = ctx.r11.s64 + 31432;
	// stb r10,314(r1)
	REX_STORE_U8(ctx.r1.u32 + 314, ctx.r10.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r6,-13040
	ctx.r10.s64 = ctx.r6.s64 + -13040;
	// stw r11,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r11,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// stw r11,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r11.u32);
	// stw r11,344(r1)
	REX_STORE_U32(ctx.r1.u32 + 344, ctx.r11.u32);
	// stw r10,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r10.u32);
	// stw r5,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r5.u32);
	// lhz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + 4);
	// lwz r9,-29140(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -29140);
	// lwz r11,96(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 96);
	// lwz r10,100(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 100);
	// lbz r8,6(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 6);
	// sth r6,356(r1)
	REX_STORE_U16(ctx.r1.u32 + 356, ctx.r6.u16);
	// stw r9,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r9.u32);
	// stw r11,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// stw r10,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// stb r8,358(r1)
	REX_STORE_U8(ctx.r1.u32 + 358, ctx.r8.u8);
	// beq cr6,0x8212d4bc
	if (ctx.cr6.eq) goto loc_8212D4BC;
	// addi r11,r31,63
	ctx.r11.s64 = r31.s64 + 63;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8212cc18
	ctx.lr = 0x8212D4BC;
	sub_8212CC18(ctx, base);
loc_8212D4BC:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82130818) {
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
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r10,31432
	r30.s64 = ctx.r10.s64 + 31432;
	// stw r11,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r3,160(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 160);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r31,164(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 164);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// bl 0x821f7aa0
	ctx.lr = 0x82130870;
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

DEFINE_REX_FUNC(sub_821323A8) {
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r31,r11,23912
	r31.s64 = ctx.r11.s64 + 23912;
	// lwz r3,160(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 160);
	// bl 0x82101d68
	ctx.lr = 0x821323C8;
	sub_82101D68(ctx, base);
	// lwz r3,164(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 164);
	// bl 0x82101d68
	ctx.lr = 0x821323D0;
	sub_82101D68(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// li r7,12
	ctx.r7.s64 = 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821323ec
	if (ctx.cr6.eq) goto loc_821323EC;
	// stb r7,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r7.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r11.u32);
loc_821323EC:
	// li r11,48
	ctx.r11.s64 = 48;
	// lis r9,85
	ctx.r9.s64 = 5570560;
	// ori r9,r9,9016
	ctx.r9.u64 = ctx.r9.u64 | 9016;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r8,r11,-8304
	ctx.r8.s64 = ctx.r11.s64 + -8304;
loc_82132404:
	// lwz r11,48(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8213241c
	if (ctx.cr6.eq) goto loc_8213241C;
	// stb r7,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r7.u8);
	// lwz r11,48(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
loc_8213241C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82132404
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82132404;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// addi r8,r11,25520
	ctx.r8.s64 = ctx.r11.s64 + 25520;
	// addi r7,r10,25328
	ctx.r7.s64 = ctx.r10.s64 + 25328;
	// addi r6,r9,25136
	ctx.r6.s64 = ctx.r9.s64 + 25136;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,120(r8)
	REX_STORE_U32(ctx.r8.u32 + 120, ctx.r11.u32);
	// stw r10,120(r7)
	REX_STORE_U32(ctx.r7.u32 + 120, ctx.r10.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r9,120(r6)
	REX_STORE_U32(ctx.r6.u32 + 120, ctx.r9.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f2,16200(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16200);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2340(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2340);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ff668
	ctx.lr = 0x82132470;
	sub_821FF668(ctx, base);
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

DEFINE_REX_FUNC(sub_82134AC0) {
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
	ctx.lr = 0x82134AC8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x821343f0
	ctx.lr = 0x82134AE0;
	sub_821343F0(ctx, base);
	// lwz r11,488(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 488);
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lhax r3,r11,r30
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + r30.u32));
	// bl 0x821dce30
	ctx.lr = 0x82134AF8;
	sub_821DCE30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82134b44
	if (!ctx.cr0.eq) goto loc_82134B44;
	// lwz r11,488(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 488);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82134b44
	if (ctx.cr6.lt) goto loc_82134B44;
	// lwz r11,488(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 488);
	// li r3,1
	ctx.r3.s64 = 1;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lhax r11,r11,r30
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + r30.u32));
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// lwz r11,488(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 488);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// b 0x82134b54
	goto loc_82134B54;
loc_82134B44:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_82134B54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82136518) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,432
	ctx.r9.s64 = ctx.r10.s64 + 432;
	// addi r10,r11,23912
	ctx.r10.s64 = ctx.r11.s64 + 23912;
	// lwz r11,220(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 220);
	// lwz r9,48(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lha r11,5452(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 5452));
	// beq cr6,0x82136568
	if (ctx.cr6.eq) goto loc_82136568;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// ble cr6,0x8213659c
	if (!ctx.cr6.gt) goto loc_8213659C;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x8213659c
	if (!ctx.cr6.lt) goto loc_8213659C;
	// lwz r10,76(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// mulli r10,r10,81
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(81));
	// addi r9,r9,22000
	ctx.r9.s64 = ctx.r9.s64 + 22000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r9,52
	ctx.r10.s64 = ctx.r9.s64 + 52;
	// b 0x82136590
	goto loc_82136590;
loc_82136568:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// ble cr6,0x8213659c
	if (!ctx.cr6.gt) goto loc_8213659C;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x8213659c
	if (!ctx.cr6.lt) goto loc_8213659C;
	// lwz r10,76(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// lis r8,-32169
	ctx.r8.s64 = -2108227584;
	// mulli r9,r10,22
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(22));
	// addi r10,r8,21824
	ctx.r10.s64 = ctx.r8.s64 + 21824;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 + 56;
loc_82136590:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x821365a0
	goto loc_821365A0;
loc_8213659C:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_821365A0:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213E490) {
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
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// blt cr6,0x8213e504
	if (ctx.cr6.lt) goto loc_8213E504;
	// bne cr6,0x8213e544
	if (!ctx.cr6.eq) goto loc_8213E544;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82132ca8
	ctx.lr = 0x8213E4B8;
	sub_82132CA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lbzx r10,r11,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8213e4d0
	if (!ctx.cr0.eq) goto loc_8213E4D0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stbx r10,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
loc_8213E4D0:
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// bne cr6,0x8213e4e0
	if (!ctx.cr6.eq) goto loc_8213E4E0;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8213e4f4
	goto loc_8213E4F4;
loc_8213E4E0:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// mulli r10,r4,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(24));
	// addi r11,r11,14448
	ctx.r11.s64 = ctx.r11.s64 + 14448;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8213E4F4:
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8213e544
	if (!ctx.cr6.eq) goto loc_8213E544;
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x8213e53c
	goto loc_8213E53C;
loc_8213E504:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82132d10
	ctx.lr = 0x8213E50C;
	sub_82132D10(ctx, base);
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// bne cr6,0x8213e51c
	if (!ctx.cr6.eq) goto loc_8213E51C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8213e530
	goto loc_8213E530;
loc_8213E51C:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// mulli r10,r4,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(24));
	// addi r11,r11,14448
	ctx.r11.s64 = ctx.r11.s64 + 14448;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8213E530:
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8213e544
	if (!ctx.cr6.eq) goto loc_8213E544;
	// li r10,3
	ctx.r10.s64 = 3;
loc_8213E53C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stbx r10,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
loc_8213E544:
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

DEFINE_REX_FUNC(sub_82142190) {
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
	ctx.lr = 0x82142198;
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f29.u64);
	// stfd f30,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f31,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f12,-23276(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -23276);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,16032(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16032);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfsx f29,r8,r6
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	f29.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// lfs f0,-24020(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24020);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16036(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16036);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfsx f30,r8,r9
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82141e38
	ctx.lr = 0x82142220;
	sub_82141E38(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,85
	ctx.r10.s64 = 5570560;
	// addi r9,r11,-8304
	ctx.r9.s64 = ctx.r11.s64 + -8304;
	// ori r10,r10,8436
	ctx.r10.u64 = ctx.r10.u64 | 8436;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// lwz r11,48(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// stwx r3,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// bne cr6,0x821422c4
	if (!ctx.cr6.eq) goto loc_821422C4;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// mulli r8,r31,24
	ctx.r8.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(24));
	// addi r11,r11,14448
	ctx.r11.s64 = ctx.r11.s64 + 14448;
	// mulli r10,r30,28
	ctx.r10.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(28));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r4,r6,21008
	ctx.r4.s64 = ctx.r6.s64 + 21008;
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lfs f0,15968(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15968);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,21008(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 21008);
	// lfs f3,1992(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1992);
	ctx.f3.f64 = double(temp.f32);
	// lha r10,2(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 2));
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// lha r11,0(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fadds f13,f30,f13
	ctx.f13.f64 = double(float(f30.f64 + ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f13,f29,f12
	ctx.f13.f64 = double(float(f29.f64 + ctx.f12.f64));
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmr f2,f12
	ctx.f2.f64 = ctx.f12.f64;
	// bl 0x82130ec0
	ctx.lr = 0x821422BC;
	sub_82130EC0(ctx, base);
	// lwz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x82130ec0
	ctx.lr = 0x821422C4;
	sub_82130EC0(ctx, base);
loc_821422C4:
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lwz r11,48(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// lis r9,85
	ctx.r9.s64 = 5570560;
	// fneg f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = f30.u64 ^ 0x8000000000000000;
	// addi r10,r10,13128
	ctx.r10.s64 = ctx.r10.s64 + 13128;
	// fneg f13,f29
	ctx.f13.u64 = f29.u64 ^ 0x8000000000000000;
	// lis r8,85
	ctx.r8.s64 = 5570560;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lis r7,85
	ctx.r7.s64 = 5570560;
	// lis r6,85
	ctx.r6.s64 = 5570560;
	// lis r5,85
	ctx.r5.s64 = 5570560;
	// lwz r10,1856(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 1856);
	// ori r9,r9,29696
	ctx.r9.u64 = ctx.r9.u64 | 29696;
	// ori r8,r8,29700
	ctx.r8.u64 = ctx.r8.u64 | 29700;
	// ori r7,r7,29704
	ctx.r7.u64 = ctx.r7.u64 | 29704;
	// ori r6,r6,29708
	ctx.r6.u64 = ctx.r6.u64 | 29708;
	// ori r5,r5,29712
	ctx.r5.u64 = ctx.r5.u64 | 29712;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r31,0
	r31.s64 = 0;
	// stwx r10,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// stwx r3,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r3.u32);
	// stfsx f0,r11,r7
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// stfsx f13,r11,r6
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// stwx r31,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, r31.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8212bc38
	ctx.lr = 0x82142330;
	sub_8212BC38(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

DEFINE_REX_FUNC(sub_8214CC40) {
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
	// lwz r31,316(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8214cc7c
	if (ctx.cr6.eq) goto loc_8214CC7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e48c0
	ctx.lr = 0x8214CC6C;
	sub_820E48C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x8214CC74;
	sub_822C80A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,316(r30)
	REX_STORE_U32(r30.u32 + 316, ctx.r11.u32);
loc_8214CC7C:
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

DEFINE_REX_FUNC(sub_8214D350) {
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
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-7072
	ctx.r9.s64 = ctx.r11.s64 + -7072;
	// ori r8,r10,23116
	ctx.r8.u64 = ctx.r10.u64 | 23116;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,19420(r9)
	REX_STORE_U32(ctx.r9.u32 + 19420, ctx.r10.u32);
	// stwx r11,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// lhz r11,308(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 308);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8214d3c4
	if (!ctx.cr0.eq) goto loc_8214D3C4;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-7176
	ctx.r11.s64 = ctx.r11.s64 + -7176;
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// addi r4,r11,88
	ctx.r4.s64 = ctx.r11.s64 + 88;
	// addi r3,r9,-4224
	ctx.r3.s64 = ctx.r9.s64 + -4224;
	// stw r10,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// bl 0x82115ef8
	ctx.lr = 0x8214D3B4;
	sub_82115EF8(ctx, base);
	// bl 0x8212c6a0
	ctx.lr = 0x8214D3B8;
	sub_8212C6A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,308(r31)
	REX_STORE_U16(r31.u32 + 308, ctx.r11.u16);
	// b 0x8214d45c
	goto loc_8214D45C;
loc_8214D3C4:
	// bl 0x821159c8
	ctx.lr = 0x8214D3C8;
	sub_821159C8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8214d45c
	if (!ctx.cr6.eq) goto loc_8214D45C;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r30,1
	r30.s64 = 1;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// stw r30,68(r10)
	REX_STORE_U32(ctx.r10.u32 + 68, r30.u32);
	// lhz r11,30(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 30);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x8214d404
	if (!ctx.cr6.eq) goto loc_8214D404;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lha r3,88(r11)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 88));
	// bl 0x821de0c0
	ctx.lr = 0x8214D400;
	sub_821DE0C0(ctx, base);
	// lhz r11,30(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 30);
loc_8214D404:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8214d43c
	if (ctx.cr6.eq) goto loc_8214D43C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8214d43c
	if (ctx.cr6.eq) goto loc_8214D43C;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x8214d448
	if (ctx.cr6.eq) goto loc_8214D448;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x8214d448
	if (ctx.cr6.eq) goto loc_8214D448;
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214d448
	if (ctx.cr6.eq) goto loc_8214D448;
	// stw r30,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, r30.u32);
	// b 0x8214d448
	goto loc_8214D448;
loc_8214D43C:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821d9620
	ctx.lr = 0x8214D448;
	sub_821D9620(ctx, base);
loc_8214D448:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821f8230
	ctx.lr = 0x8214D450;
	sub_821F8230(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// sth r30,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, r30.u16);
loc_8214D45C:
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

DEFINE_REX_FUNC(sub_82152228) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82152238
	if (!ctx.cr6.eq) goto loc_82152238;
	// li r3,73
	ctx.r3.s64 = 73;
	// blr 
	return;
loc_82152238:
	// blt cr6,0x8215228c
	if (ctx.cr6.lt) goto loc_8215228C;
	// cmpwi cr6,r3,33
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 33, ctx.xer);
	// bge cr6,0x8215228c
	if (!ctx.cr6.lt) goto loc_8215228C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8215228c
	if (ctx.cr6.lt) goto loc_8215228C;
	// cmpwi cr6,r3,19
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 19, ctx.xer);
	// bne cr6,0x8215225c
	if (!ctx.cr6.eq) goto loc_8215225C;
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
loc_8215225C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-21624
	ctx.r11.s64 = ctx.r11.s64 + -21624;
	// addi r10,r11,-1080
	ctx.r10.s64 = ctx.r11.s64 + -1080;
	// lbzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// mulli r11,r11,36
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(36));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lha r10,2(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 2));
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8215228c
	if (!ctx.cr6.lt) goto loc_8215228C;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// blr 
	return;
loc_8215228C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82157198) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e74
	ctx.lr = 0x821571A0;
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,320(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,1
	r30.s64 = 1;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lfs f30,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f30.f64 = double(temp.f32);
	// blt cr6,0x82157300
	if (ctx.cr6.lt) goto loc_82157300;
	// beq cr6,0x821572ec
	if (ctx.cr6.eq) goto loc_821572EC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x821573a0
	if (!ctx.cr6.lt) goto loc_821573A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,324(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821571f0
	if (ctx.cr6.gt) goto loc_821571F0;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_821571F0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820e0028
	ctx.lr = 0x82157200;
	sub_820E0028(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lhz r10,308(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 308);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,-23600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23600);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bne 0x82157228
	if (!ctx.cr0.eq) goto loc_82157228;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16200(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16200);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82157240
	goto loc_82157240;
loc_82157228:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,16036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16036);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,16200(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16200);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_82157240:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lfs f12,324(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 324);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lfs f13,31840(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 31840);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1840(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f0,f0,f13,f12
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f13.f64, -ctx.f12.f64)));
	// stfs f0,324(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 324, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bgt cr6,0x8215727c
	if (ctx.cr6.gt) goto loc_8215727C;
	// stfs f30,324(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 324, temp.u32);
	// stw r30,320(r31)
	REX_STORE_U32(r31.u32 + 320, r30.u32);
	// stb r28,188(r31)
	REX_STORE_U8(r31.u32 + 188, r28.u8);
	// b 0x82157280
	goto loc_82157280;
loc_8215727C:
	// stb r30,188(r31)
	REX_STORE_U8(r31.u32 + 188, r30.u8);
loc_82157280:
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821572a0
	if (ctx.cr6.eq) goto loc_821572A0;
	// lbz r11,285(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 285);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821572a0
	if (ctx.cr0.eq) goto loc_821572A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82151590
	ctx.lr = 0x821572A0;
	sub_82151590(ctx, base);
loc_821572A0:
	// li r11,8
	ctx.r11.s64 = 8;
	// sth r28,288(r31)
	REX_STORE_U16(r31.u32 + 288, r28.u16);
	// li r9,-1
	ctx.r9.s64 = -1;
	// sth r28,286(r31)
	REX_STORE_U16(r31.u32 + 286, r28.u16);
	// addi r10,r31,252
	ctx.r10.s64 = r31.s64 + 252;
	// sth r9,290(r31)
	REX_STORE_U16(r31.u32 + 290, ctx.r9.u16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821572BC:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821572cc
	if (ctx.cr6.eq) goto loc_821572CC;
	// stb r28,188(r11)
	REX_STORE_U8(ctx.r11.u32 + 188, r28.u8);
loc_821572CC:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x821572bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821572BC;
	// lwz r3,240(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821573a0
	if (ctx.cr6.eq) goto loc_821573A0;
	// bl 0x821c5800
	ctx.lr = 0x821572E4;
	sub_821C5800(ctx, base);
	// stw r28,240(r31)
	REX_STORE_U32(r31.u32 + 240, r28.u32);
	// b 0x821573a0
	goto loc_821573A0;
loc_821572EC:
	// lfs f0,324(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bgt cr6,0x8215739c
	if (ctx.cr6.gt) goto loc_8215739C;
	// stb r28,188(r31)
	REX_STORE_U8(r31.u32 + 188, r28.u8);
	// b 0x821573a0
	goto loc_821573A0;
loc_82157300:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,324(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 324);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// ble cr6,0x82157318
	if (!ctx.cr6.gt) goto loc_82157318;
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
loc_82157318:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820e0028
	ctx.lr = 0x82157328;
	sub_820E0028(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lhz r10,308(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 308);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,-23600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23600);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bne 0x82157350
	if (!ctx.cr0.eq) goto loc_82157350;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16200(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16200);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82157368
	goto loc_82157368;
loc_82157350:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,16036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16036);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,16200(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16200);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_82157368:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lfs f12,324(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 324);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lfs f13,31840(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 31840);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1840(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfs f0,324(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 324, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8215739c
	if (!ctx.cr6.gt) goto loc_8215739C;
	// stfs f31,324(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 324, temp.u32);
	// stw r30,320(r31)
	REX_STORE_U32(r31.u32 + 320, r30.u32);
loc_8215739C:
	// stb r30,188(r31)
	REX_STORE_U8(r31.u32 + 188, r30.u8);
loc_821573A0:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r23,r11,432
	r23.s64 = ctx.r11.s64 + 432;
	// lha r11,30(r23)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r23.u32 + 30));
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821574cc
	if (ctx.cr6.eq) goto loc_821574CC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821574cc
	if (ctx.cr6.eq) goto loc_821574CC;
	// lbz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 188);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82157430
	if (ctx.cr0.eq) goto loc_82157430;
	// lhz r10,332(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 332);
	// lhz r9,310(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 310);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82157430
	if (ctx.cr6.eq) goto loc_82157430;
	// lwz r3,240(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821573e8
	if (ctx.cr6.eq) goto loc_821573E8;
	// bl 0x821c5800
	ctx.lr = 0x821573E8;
	sub_821C5800(ctx, base);
loc_821573E8:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lha r11,310(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 310));
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lha r5,330(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 330));
	// lha r4,328(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 328));
	// lwz r3,12(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x821ca270
	ctx.lr = 0x82157404;
	sub_821CA270(ctx, base);
	// stw r3,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82157420
	if (ctx.cr0.eq) goto loc_82157420;
	// lha r11,308(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 308));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r11.u8 & 0x3F));
	// sth r11,18(r3)
	REX_STORE_U16(ctx.r3.u32 + 18, ctx.r11.u16);
loc_82157420:
	// lhz r11,310(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 310);
	// sth r28,334(r31)
	REX_STORE_U16(r31.u32 + 334, r28.u16);
	// sth r11,332(r31)
	REX_STORE_U16(r31.u32 + 332, ctx.r11.u16);
	// b 0x8215744c
	goto loc_8215744C;
loc_82157430:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215744c
	if (!ctx.cr6.eq) goto loc_8215744C;
	// lwz r3,240(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215744c
	if (ctx.cr6.eq) goto loc_8215744C;
	// bl 0x821c5800
	ctx.lr = 0x82157448;
	sub_821C5800(ctx, base);
	// stw r28,240(r31)
	REX_STORE_U32(r31.u32 + 240, r28.u32);
loc_8215744C:
	// lwz r3,240(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821574cc
	if (ctx.cr6.eq) goto loc_821574CC;
	// bl 0x821c5838
	ctx.lr = 0x8215745C;
	sub_821C5838(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821574cc
	if (ctx.cr0.eq) goto loc_821574CC;
	// lha r11,308(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 308));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,240(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 240);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f3,2000(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f3.f64 = double(temp.f32);
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r11.u8 & 0x3F));
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// sth r11,18(r9)
	REX_STORE_U16(ctx.r9.u32 + 18, ctx.r11.u16);
	// lfs f2,2380(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2380);
	ctx.f2.f64 = double(temp.f32);
	// lwz r3,240(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 240);
	// bl 0x821c5840
	ctx.lr = 0x82157494;
	sub_821C5840(ctx, base);
	// lhz r11,334(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 334);
	// addi r11,r11,364
	ctx.r11.s64 = ctx.r11.s64 + 364;
	// lwz r10,240(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 240);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// sth r11,334(r31)
	REX_STORE_U16(r31.u32 + 334, ctx.r11.u16);
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,22368(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 22368);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,132(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 132, temp.u32);
loc_821574CC:
	// lha r11,310(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 310));
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lha r3,328(r31)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r31.u32 + 328));
	// bl 0x821358d8
	ctx.lr = 0x821574DC;
	sub_821358D8(ctx, base);
	// addi r29,r31,252
	r29.s64 = r31.s64 + 252;
	// stb r28,284(r31)
	REX_STORE_U8(r31.u32 + 284, r28.u8);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_821574F0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82157534
	if (ctx.cr6.eq) goto loc_82157534;
	// clrlwi. r8,r3,31
	ctx.r8.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82157524
	if (ctx.cr0.eq) goto loc_82157524;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82157524
	if (ctx.cr6.eq) goto loc_82157524;
	// stb r9,104(r8)
	REX_STORE_U8(ctx.r8.u32 + 104, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r8,284(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 284);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stb r8,284(r31)
	REX_STORE_U8(r31.u32 + 284, ctx.r8.u8);
loc_82157524:
	// rlwinm r3,r3,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x821574f0
	if (ctx.cr6.lt) goto loc_821574F0;
loc_82157534:
	// lwz r11,248(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 248);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8215766c
	if (!ctx.cr6.eq) goto loc_8215766C;
	// lbz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 284);
	// extsb. r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8215766c
	if (!ctx.cr0.gt) goto loc_8215766C;
	// lhz r11,290(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 290);
	// lwz r26,12(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x8215766c
	if (ctx.cr6.lt) goto loc_8215766C;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lha r9,308(r31)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r31.u32 + 308));
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,116(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 116);
	// ori r10,r8,16384
	ctx.r10.u64 = ctx.r8.u64 | 16384;
	// sth r28,290(r31)
	REX_STORE_U16(r31.u32 + 290, r28.u16);
	// sth r28,288(r31)
	REX_STORE_U16(r31.u32 + 288, r28.u16);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,5744
	r30.s64 = ctx.r11.s64 + 5744;
	// ble cr6,0x8215766c
	if (!ctx.cr6.gt) goto loc_8215766C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r25,r31,290
	r25.s64 = r31.s64 + 290;
	// addi r24,r11,-17388
	r24.s64 = ctx.r11.s64 + -17388;
loc_82157594:
	// lha r9,308(r31)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r31.u32 + 308));
	// lha r11,288(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 288));
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,116(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 116);
	// addi r11,r11,103
	ctx.r11.s64 = ctx.r11.s64 + 103;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r24,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, r24.u32);
	// lhz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 288);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,288(r31)
	REX_STORE_U16(r31.u32 + 288, ctx.r11.u16);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r4,344(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 344);
	// lbz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 104);
	// addis r3,r11,768
	ctx.r3.s64 = ctx.r11.s64 + 50331648;
	// addi r3,r3,535
	ctx.r3.s64 = ctx.r3.s64 + 535;
	// bl 0x820e68b8
	ctx.lr = 0x821575D8;
	sub_820E68B8(ctx, base);
	// subf r11,r3,r30
	ctx.r11.u64 = r30.u64 - ctx.r3.u64;
loc_821575DC:
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stbx r10,r3,r11
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x821575dc
	if (!ctx.cr0.eq) goto loc_821575DC;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_821575F4:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821575f4
	if (!ctx.cr6.eq) goto loc_821575F4;
	// lha r7,308(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 308));
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// lha r10,288(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 288));
	// rlwinm r9,r7,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// lwz r8,116(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 116);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,103
	ctx.r11.s64 = ctx.r11.s64 + 103;
	// rotlwi r27,r7,0
	r27.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bl 0x820e6998
	ctx.lr = 0x82157638;
	sub_820E6998(ctx, base);
	// lha r10,288(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 288));
	// add r11,r27,r30
	ctx.r11.u64 = r27.u64 + r30.u64;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// sth r11,288(r31)
	REX_STORE_U16(r31.u32 + 288, ctx.r11.u16);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// sthu r11,2(r25)
	ea = 2 + r25.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	r25.u32 = ea;
	// lbz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 284);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82157594
	if (ctx.cr6.lt) goto loc_82157594;
loc_8215766C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_8216FF70) {
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
	ctx.lr = 0x8216FF78;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f38
	ctx.lr = 0x8216FF80;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,216(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// lwz r8,80(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r10,r4,47
	ctx.r10.s64 = ctx.r4.s64 + 47;
	// subf r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
	// lfs f13,212(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,116(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f12,120(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f30,f0,f9
	f30.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lfs f8,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fadds f29,f8,f12
	f29.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r7,-7480
	ctx.r4.s64 = ctx.r7.s64 + -7480;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,33
	ctx.r5.s64 = 33;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// fmadds f13,f10,f31,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, f31.f64, ctx.f13.f64)));
	// fsubs f28,f13,f0
	f28.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bl 0x822d4fa0
	ctx.lr = 0x82170014;
	sub_822D4FA0(ctx, base);
	// li r5,223
	ctx.r5.s64 = 223;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,129
	ctx.r3.s64 = ctx.r1.s64 + 129;
	// bl 0x822d5870
	ctx.lr = 0x82170024;
	sub_822D5870(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi r27,r27,24
	r27.u64 = r27.u32 & 0xFF;
	// clrlwi r28,r28,24
	r28.u64 = r28.u32 & 0xFF;
	// clrlwi r29,r29,24
	r29.u64 = r29.u32 & 0xFF;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r5,r11,26656
	ctx.r5.s64 = ctx.r11.s64 + 26656;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eb1a0
	ctx.lr = 0x82170054;
	sub_821EB1A0(ctx, base);
	// addi r11,r31,41
	ctx.r11.s64 = r31.s64 + 41;
	// addi r10,r31,35
	ctx.r10.s64 = r31.s64 + 35;
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,212(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// addi r3,r8,-7568
	ctx.r3.s64 = ctx.r8.s64 + -7568;
	// lfsx f13,r11,r30
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// lfsx f11,r10,r30
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	ctx.f11.f64 = double(temp.f32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
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
	ctx.lr = 0x821700BC;
	sub_821EACB0(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f84
	ctx.lr = 0x821700C8;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82174B80) {
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
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82173f70
	ctx.lr = 0x82174B9C;
	sub_82173F70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,1180
	ctx.r5.s64 = r31.s64 + 1180;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82173f70
	ctx.lr = 0x82174BAC;
	sub_82173F70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,1768
	ctx.r5.s64 = r31.s64 + 1768;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82173f70
	ctx.lr = 0x82174BBC;
	sub_82173F70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,2356
	ctx.r5.s64 = r31.s64 + 2356;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82173f70
	ctx.lr = 0x82174BCC;
	sub_82173F70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,4708
	ctx.r5.s64 = r31.s64 + 4708;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821740b8
	ctx.lr = 0x82174BDC;
	sub_821740B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,7060
	ctx.r5.s64 = r31.s64 + 7060;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82174178
	ctx.lr = 0x82174BEC;
	sub_82174178(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,592
	ctx.r5.s64 = r31.s64 + 592;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82173f70
	ctx.lr = 0x82174BFC;
	sub_82173F70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,2944
	ctx.r5.s64 = r31.s64 + 2944;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82173f70
	ctx.lr = 0x82174C0C;
	sub_82173F70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,3532
	ctx.r5.s64 = r31.s64 + 3532;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82173f70
	ctx.lr = 0x82174C1C;
	sub_82173F70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,4120
	ctx.r5.s64 = r31.s64 + 4120;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82173f70
	ctx.lr = 0x82174C2C;
	sub_82173F70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,5296
	ctx.r5.s64 = r31.s64 + 5296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821740b8
	ctx.lr = 0x82174C3C;
	sub_821740B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,5884
	ctx.r5.s64 = r31.s64 + 5884;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821740b8
	ctx.lr = 0x82174C4C;
	sub_821740B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,6472
	ctx.r5.s64 = r31.s64 + 6472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821740b8
	ctx.lr = 0x82174C5C;
	sub_821740B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,7648
	ctx.r5.s64 = r31.s64 + 7648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82174178
	ctx.lr = 0x82174C6C;
	sub_82174178(ctx, base);
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

DEFINE_REX_FUNC(sub_82177E98) {
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
	// addi r6,r11,-5356
	ctx.r6.s64 = ctx.r11.s64 + -5356;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,768
	ctx.r4.s64 = 768;
	// bl 0x821f7d50
	ctx.lr = 0x82177ED0;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82177ee8
	if (ctx.cr0.eq) goto loc_82177EE8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r31.u32);
	// addi r11,r11,-5384
	ctx.r11.s64 = ctx.r11.s64 + -5384;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82177EE8:
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

DEFINE_REX_FUNC(sub_82178B14) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82178B18) {
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
	ctx.lr = 0x82178B20;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f34
	ctx.lr = 0x82178B28;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r5,136(r3)
	REX_STORE_U32(ctx.r3.u32 + 136, ctx.r5.u32);
	// stfs f3,144(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stw r10,140(r3)
	REX_STORE_U32(ctx.r3.u32 + 140, ctx.r10.u32);
	// addi r11,r11,-5288
	ctx.r11.s64 = ctx.r11.s64 + -5288;
	// fmr f28,f1
	f28.f64 = ctx.f1.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f27,f2
	f27.f64 = ctx.f2.f64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x821e7888
	ctx.lr = 0x82178B60;
	sub_821E7888(ctx, base);
	// bl 0x821fecf0
	ctx.lr = 0x82178B64;
	sub_821FECF0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi. r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f31,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lfs f30,2024(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2024);
	f30.f64 = double(temp.f32);
	// beq 0x82178b84
	if (ctx.cr0.eq) goto loc_82178B84;
	// fmr f29,f31
	f29.f64 = f31.f64;
	// b 0x82178b88
	goto loc_82178B88;
loc_82178B84:
	// fmr f29,f30
	ctx.fpscr.disableFlushMode();
	f29.f64 = f30.f64;
loc_82178B88:
	// bl 0x821fecf0
	ctx.lr = 0x82178B8C;
	sub_821FECF0(ctx, base);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82178b98
	if (ctx.cr0.eq) goto loc_82178B98;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	f30.f64 = f31.f64;
loc_82178B98:
	// addi r30,r31,148
	r30.s64 = r31.s64 + 148;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e01b0
	ctx.lr = 0x82178BA4;
	sub_820E01B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// fmuls f2,f30,f27
	ctx.f2.f64 = double(float(f30.f64 * f27.f64));
	// fmuls f1,f29,f28
	ctx.f1.f64 = double(float(f29.f64 * f28.f64));
	// bl 0x820e0d78
	ctx.lr = 0x82178BBC;
	sub_820E0D78(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e0590
	ctx.lr = 0x82178BCC;
	sub_820E0590(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
	// lfs f0,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,204(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 204, temp.u32);
	// stfs f31,208(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 208, temp.u32);
	// stb r11,61(r31)
	REX_STORE_U8(r31.u32 + 61, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f80
	ctx.lr = 0x82178C00;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8217B528) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e80
	ctx.lr = 0x8217B530;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f38
	ctx.lr = 0x8217B538;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-4980
	ctx.r10.s64 = ctx.r10.s64 + -4980;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stw r6,396(r3)
	REX_STORE_U32(ctx.r3.u32 + 396, ctx.r6.u32);
	// stfs f0,364(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 364, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821e7888
	ctx.lr = 0x8217B56C;
	sub_821E7888(ctx, base);
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217b588
	if (!ctx.cr6.eq) goto loc_8217B588;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x8217b58c
	goto loc_8217B58C;
loc_8217B588:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_8217B58C:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217b5a0
	if (!ctx.cr6.eq) goto loc_8217B5A0;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// b 0x8217b5a4
	goto loc_8217B5A4;
loc_8217B5A0:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_8217B5A4:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f0,368(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 368, temp.u32);
	// lfs f29,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f29.f64 = double(temp.f32);
	// lfs f28,16308(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16308);
	f28.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bne cr6,0x8217b5c8
	if (!ctx.cr6.eq) goto loc_8217B5C8;
	// stfs f28,368(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 368, temp.u32);
loc_8217B5C8:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// lfs f31,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f31.f64 = double(temp.f32);
	// bne cr6,0x8217b5e0
	if (!ctx.cr6.eq) goto loc_8217B5E0;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_8217B5E0:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r10,2
	ctx.r10.s64 = 2;
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,352(r31)
	REX_STORE_U8(r31.u32 + 352, ctx.r11.u8);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x8217b608
	if (!ctx.cr6.gt) goto loc_8217B608;
	// stb r10,352(r31)
	REX_STORE_U8(r31.u32 + 352, ctx.r10.u8);
loc_8217B608:
	// std r10,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r10.u64);
	// li r27,1
	r27.s64 = 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// addic. r11,r31,112
	ctx.xer.ca = r31.u32 > 4294967183;
	ctx.r11.s64 = r31.s64 + 112;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r27,90(r31)
	REX_STORE_U8(r31.u32 + 90, r27.u8);
	// sth r10,88(r31)
	REX_STORE_U16(r31.u32 + 88, ctx.r10.u16);
	// beq 0x8217b62c
	if (ctx.cr0.eq) goto loc_8217B62C;
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// b 0x8217b630
	goto loc_8217B630;
loc_8217B62C:
	// stw r28,92(r31)
	REX_STORE_U32(r31.u32 + 92, r28.u32);
loc_8217B630:
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// lbz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 352);
	// stb r28,105(r31)
	REX_STORE_U8(r31.u32 + 105, r28.u8);
	// mr r30,r28
	r30.u64 = r28.u64;
	// addi r10,r10,-28368
	ctx.r10.s64 = ctx.r10.s64 + -28368;
	// stb r28,106(r31)
	REX_STORE_U8(r31.u32 + 106, r28.u8);
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r28,107(r31)
	REX_STORE_U8(r31.u32 + 107, r28.u8);
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// stb r28,109(r31)
	REX_STORE_U8(r31.u32 + 109, r28.u8);
	// ble 0x8217b6b8
	if (!ctx.cr0.gt) goto loc_8217B6B8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// fmuls f30,f0,f13
	f30.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// addi r29,r11,-4224
	r29.s64 = ctx.r11.s64 + -4224;
loc_8217B670:
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f5,f31
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = f31.f64;
	// li r9,1
	ctx.r9.s64 = 1;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// addi r8,r29,112
	ctx.r8.s64 = r29.s64 + 112;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stw r28,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x8210ded0
	ctx.lr = 0x8217B6A4;
	sub_8210DED0(ctx, base);
	// lbz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 352);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8217b670
	if (ctx.cr6.lt) goto loc_8217B670;
loc_8217B6B8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,354
	ctx.r3.s64 = r31.s64 + 354;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// lfs f1,15968(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15968);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8217b018
	ctx.lr = 0x8217B6D0;
	sub_8217B018(ctx, base);
	// lbz r10,356(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 356);
	// lbz r9,355(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 355);
	// lbz r11,354(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 354);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r11,353(r31)
	REX_STORE_U8(r31.u32 + 353, ctx.r11.u8);
	// bl 0x821fee88
	ctx.lr = 0x8217B6EC;
	sub_821FEE88(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f29,380(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 380, temp.u32);
	// stfs f29,388(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 388, temp.u32);
	// lfs f31,2384(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	f31.f64 = double(temp.f32);
	// fmsubs f13,f1,f28,f31
	ctx.f13.f64 = double(float(std::fma(ctx.f1.f64, f28.f64, -f31.f64)));
	// lfs f0,16688(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16688);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,376(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 376, temp.u32);
	// bl 0x821fee88
	ctx.lr = 0x8217B714;
	sub_821FEE88(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,2392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	f30.f64 = double(temp.f32);
	// fmadds f0,f1,f30,f31
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f30.f64, f31.f64)));
	// stfs f0,384(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 384, temp.u32);
	// bl 0x821fee88
	ctx.lr = 0x8217B728;
	sub_821FEE88(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f29,372(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 372, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r27,61(r31)
	REX_STORE_U8(r31.u32 + 61, r27.u8);
	// lfs f0,2360(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2360);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f1,f30,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f30.f64, ctx.f0.f64)));
	// stfs f0,392(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 392, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f84
	ctx.lr = 0x8217B750;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_821825C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,2(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82182624
	if (ctx.cr6.eq) goto loc_82182624;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82182604
	if (ctx.cr6.eq) goto loc_82182604;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8218260c
	if (ctx.cr6.eq) goto loc_8218260C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82182604
	if (ctx.cr6.eq) goto loc_82182604;
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// li r10,4
	ctx.r10.s64 = 4;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// blr 
	return;
loc_82182604:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_8218260C:
	// lhz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 28);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// addi r3,r11,27
	ctx.r3.s64 = ctx.r11.s64 + 27;
	// blr 
	return;
loc_82182624:
	// li r3,20
	ctx.r3.s64 = 20;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821836A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821836A8;
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4240(r1)
	ea = -4240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addis r30,r3,4
	r30.s64 = ctx.r3.s64 + 262144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r30,4440
	r30.s64 = r30.s64 + 4440;
	// lwz r3,40(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821836D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// divwu r8,r3,r11
	ctx.r8.u64 = uint32_t(ctx.r11.u32 ? ctx.r3.u32 / ctx.r11.u32 : 0);
	// addi r29,r10,31656
	r29.s64 = ctx.r10.s64 + 31656;
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lbz r11,31648(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 31648);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8218370c
	if (!ctx.cr0.eq) goto loc_8218370C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82208828
	ctx.lr = 0x8218370C;
	sub_82208828(ctx, base);
loc_8218370C:
	// lfd f0,0(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r29.u32 + 0);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r10,r10,4444
	ctx.r10.u64 = ctx.r10.u64 | 4444;
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stb r8,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfd f0,31632(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 31632);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// fdiv f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 / ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,72(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82183270
	ctx.lr = 0x82183760;
	sub_82183270(ctx, base);
	// addi r1,r1,4240
	ctx.r1.s64 = ctx.r1.s64 + 4240;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82186880) {
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
	// li r30,0
	r30.s64 = 0;
	// li r3,88
	ctx.r3.s64 = 88;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
	// stw r30,68(r31)
	REX_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// bl 0x822c80d0
	ctx.lr = 0x821868C0;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821868d0
	if (ctx.cr0.eq) goto loc_821868D0;
	// bl 0x822cb7d0
	ctx.lr = 0x821868CC;
	sub_822CB7D0(ctx, base);
	// b 0x821868d4
	goto loc_821868D4;
loc_821868D0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_821868D4:
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x822c80d0
	ctx.lr = 0x821868E0;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821868f0
	if (ctx.cr0.eq) goto loc_821868F0;
	// bl 0x822cb7d0
	ctx.lr = 0x821868EC;
	sub_822CB7D0(ctx, base);
	// b 0x821868f4
	goto loc_821868F4;
loc_821868F0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_821868F4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// addi r10,r31,439
	ctx.r10.s64 = r31.s64 + 439;
	// std r30,88(r31)
	REX_STORE_U64(r31.u32 + 88, r30.u64);
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// li r3,872
	ctx.r3.s64 = 872;
	// stb r30,100(r31)
	REX_STORE_U8(r31.u32 + 100, r30.u8);
	// stb r30,101(r31)
	REX_STORE_U8(r31.u32 + 101, r30.u8);
	// stw r30,176(r31)
	REX_STORE_U32(r31.u32 + 176, r30.u32);
	// stw r30,180(r31)
	REX_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r30,376(r31)
	REX_STORE_U32(r31.u32 + 376, r30.u32);
	// stb r30,436(r31)
	REX_STORE_U8(r31.u32 + 436, r30.u8);
	// stb r30,437(r31)
	REX_STORE_U8(r31.u32 + 437, r30.u8);
	// stb r30,438(r31)
	REX_STORE_U8(r31.u32 + 438, r30.u8);
	// stw r10,472(r31)
	REX_STORE_U32(r31.u32 + 472, ctx.r10.u32);
	// stw r30,476(r31)
	REX_STORE_U32(r31.u32 + 476, r30.u32);
	// stw r30,484(r31)
	REX_STORE_U32(r31.u32 + 484, r30.u32);
	// stw r30,488(r31)
	REX_STORE_U32(r31.u32 + 488, r30.u32);
	// bl 0x822c80d0
	ctx.lr = 0x82186940;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82186954
	if (ctx.cr0.eq) goto loc_82186954;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82189a18
	ctx.lr = 0x82186950;
	sub_82189A18(ctx, base);
	// b 0x82186958
	goto loc_82186958;
loc_82186954:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82186958:
	// stw r3,492(r31)
	REX_STORE_U32(r31.u32 + 492, ctx.r3.u32);
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x822d5870
	ctx.lr = 0x8218696C;
	sub_822D5870(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,380
	ctx.r3.s64 = r31.s64 + 380;
	// bl 0x822d5870
	ctx.lr = 0x8218697C;
	sub_822D5870(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,404
	ctx.r3.s64 = r31.s64 + 404;
	// bl 0x822d5870
	ctx.lr = 0x8218698C;
	sub_822D5870(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822095c0
	ctx.lr = 0x821869A0;
	sub_822095C0(ctx, base);
	// stw r3,432(r31)
	REX_STORE_U32(r31.u32 + 432, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_82189DD0) {
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
	ctx.lr = 0x82189DD8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stb r27,869(r3)
	REX_STORE_U8(ctx.r3.u32 + 869, r27.u8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82188300
	ctx.lr = 0x82189DF8;
	sub_82188300(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r28,r27
	r28.u64 = r27.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82189e80
	if (ctx.cr0.eq) goto loc_82189E80;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_82189E1C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82189e60
	if (!ctx.cr0.eq) goto loc_82189E60;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// ld r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82234ee0
	ctx.lr = 0x82189E44;
	sub_82234EE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82189e60
	if (!ctx.cr0.eq) goto loc_82189E60;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82189e60
	if (ctx.cr6.eq) goto loc_82189E60;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,869(r30)
	REX_STORE_U8(r30.u32 + 869, ctx.r11.u8);
loc_82189E60:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82189e1c
	if (ctx.cr6.lt) goto loc_82189E1C;
loc_82189E80:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8218DF68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// li r10,33
	ctx.r10.s64 = 33;
	// addi r11,r11,30376
	ctx.r11.s64 = ctx.r11.s64 + 30376;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8218DF80:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8218df80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218DF80;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218E8C0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,30792(r10)
	REX_STORE_U32(ctx.r10.u32 + 30792, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218E8E0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r3,30792(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 30792);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218ED60) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-16536
	ctx.r11.s64 = ctx.r11.s64 + -16536;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stfs f1,16460(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 16460, temp.u32);
	// stw r11,16456(r3)
	REX_STORE_U32(ctx.r3.u32 + 16456, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218F708) {
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
	ctx.lr = 0x8218F710;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x821feec8
	ctx.lr = 0x8218F72C;
	sub_821FEEC8(ctx, base);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// bl 0x821feec8
	ctx.lr = 0x8218F73C;
	sub_821FEEC8(ctx, base);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// bl 0x821feec8
	ctx.lr = 0x8218F74C;
	sub_821FEEC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r30,24
	ctx.r5.s64 = r30.s64 + 24;
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// bl 0x820e1bf0
	ctx.lr = 0x8218F774;
	sub_820E1BF0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x820e1b70
	ctx.lr = 0x8218F784;
	sub_820E1B70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821a6ae8
	ctx.lr = 0x8218F78C;
	sub_821A6AE8(ctx, base);
	// rlwinm. r11,r27,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8218f7b4
	if (ctx.cr0.eq) goto loc_8218F7B4;
	// bl 0x821fecf8
	ctx.lr = 0x8218F798;
	sub_821FECF8(ctx, base);
	// clrlwi. r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8218f7b4
	if (!ctx.cr0.eq) goto loc_8218F7B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1cf8
	ctx.lr = 0x8218F7B4;
	sub_820E1CF8(ctx, base);
loc_8218F7B4:
	// bl 0x821feec8
	ctx.lr = 0x8218F7B8;
	sub_821FEEC8(ctx, base);
	// lfs f0,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmadds f1,f1,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// bl 0x820e1cf8
	ctx.lr = 0x8218F7D0;
	sub_820E1CF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821940E8) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,4
	ctx.r11.s64 = 4;
	// sth r11,30856(r10)
	REX_STORE_U16(ctx.r10.u32 + 30856, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821941A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821941A8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82194234
	if (ctx.cr6.eq) goto loc_82194234;
	// lwz r11,148(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82194234
	if (ctx.cr6.eq) goto loc_82194234;
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
	ctx.lr = 0x821941F0;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82194200
	if (ctx.cr0.eq) goto loc_82194200;
	// bl 0x82199868
	ctx.lr = 0x821941FC;
	sub_82199868(ctx, base);
	// b 0x82194204
	goto loc_82194204;
loc_82194200:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82194204:
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r3,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lwz r4,84(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821885c8
	ctx.lr = 0x82194230;
	sub_821885C8(ctx, base);
	// b 0x821942ac
	goto loc_821942AC;
loc_82194234:
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
	ctx.lr = 0x82194258;
	sub_821F7D50(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8219426c
	if (ctx.cr0.eq) goto loc_8219426C;
	// bl 0x82199820
	ctx.lr = 0x82194268;
	sub_82199820(ctx, base);
	// b 0x82194270
	goto loc_82194270;
loc_8219426C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82194270:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// stw r3,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r4,84(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r11,r11,31868
	ctx.r11.s64 = ctx.r11.s64 + 31868;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// std r30,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, r30.u64);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// std r30,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, r30.u64);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// stb r11,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, ctx.r11.u8);
	// bl 0x82188548
	ctx.lr = 0x821942AC;
	sub_82188548(ctx, base);
loc_821942AC:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821942c0
	if (!ctx.cr0.eq) goto loc_821942C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82187d00
	ctx.lr = 0x821942C0;
	sub_82187D00(ctx, base);
loc_821942C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8219A068) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r3,32032(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 32032);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219A198) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8219A1A0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// beq cr6,0x8219a1cc
	if (ctx.cr6.eq) goto loc_8219A1CC;
	// mulli r11,r5,3
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(3));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mulli r10,r11,14
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(14));
	// addi r11,r9,-9860
	ctx.r11.s64 = ctx.r9.s64 + -9860;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// b 0x8219a1ec
	goto loc_8219A1EC;
loc_8219A1CC:
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// addi r8,r10,32056
	ctx.r8.s64 = ctx.r10.s64 + 32056;
	// addi r9,r9,-9860
	ctx.r9.s64 = ctx.r9.s64 + -9860;
	// mulli r11,r11,14
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(14));
	// mulli r10,r5,42
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(42));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r30,r10,r9
	r30.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8219A1EC:
	// subf r28,r30,r11
	r28.u64 = ctx.r11.u64 - r30.u64;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r11,-9752
	r29.s64 = ctx.r11.s64 + -9752;
loc_8219A1FC:
	// add r11,r31,r30
	ctx.r11.u64 = r31.u64 + r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lbzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + ctx.r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8219a000
	ctx.lr = 0x8219A214;
	sub_8219A000(ctx, base);
	// lbzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8219a028
	ctx.lr = 0x8219A228;
	sub_8219A028(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,12
	ctx.cr6.compare<int32_t>(r31.s32, 12, ctx.xer);
	// blt cr6,0x8219a1fc
	if (ctx.cr6.lt) goto loc_8219A1FC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8219BE48) {
	REX_FUNC_PROLOGUE();
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r5,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r6,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// bne cr6,0x8219be78
	if (!ctx.cr6.eq) goto loc_8219BE78;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8219be94
	if (!ctx.cr6.eq) goto loc_8219BE94;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-19424
	ctx.r11.s64 = ctx.r11.s64 + -19424;
	// addi r10,r10,-19424
	ctx.r10.s64 = ctx.r10.s64 + -19424;
	// b 0x8219beb8
	goto loc_8219BEB8;
loc_8219BE78:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8219bea8
	if (!ctx.cr6.eq) goto loc_8219BEA8;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-19328
	ctx.r11.s64 = ctx.r11.s64 + -19328;
	// addi r10,r10,-19184
	ctx.r10.s64 = ctx.r10.s64 + -19184;
	// b 0x8219beb8
	goto loc_8219BEB8;
loc_8219BE94:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-19024
	ctx.r11.s64 = ctx.r11.s64 + -19024;
	// addi r10,r10,-18856
	ctx.r10.s64 = ctx.r10.s64 + -18856;
	// b 0x8219beb8
	goto loc_8219BEB8;
loc_8219BEA8:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-18696
	ctx.r11.s64 = ctx.r11.s64 + -18696;
	// addi r10,r10,-18568
	ctx.r10.s64 = ctx.r10.s64 + -18568;
loc_8219BEB8:
	// stw r10,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219D8F0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// stw r10,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219DE60) {
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
	ctx.lr = 0x8219DE68;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f00
	ctx.lr = 0x8219DE70;
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r31,r11,-32480
	r31.s64 = ctx.r11.s64 + -32480;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8218cb30
	ctx.lr = 0x8219DE88;
	sub_8218CB30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8219e544
	if (!ctx.cr0.eq) goto loc_8219E544;
	// lwz r28,12(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r3,56(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 56);
	// bl 0x821b16a0
	ctx.lr = 0x8219DEA4;
	sub_821B16A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f13,f31,f1
	ctx.f13.f64 = double(float(f31.f64 - ctx.f1.f64));
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f0,-24284(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24284);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// stw r11,-28720(r10)
	REX_STORE_U32(ctx.r10.u32 + -28720, ctx.r11.u32);
	// bne cr6,0x8219defc
	if (!ctx.cr6.eq) goto loc_8219DEFC;
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219e544
	if (!ctx.cr6.eq) goto loc_8219E544;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// b 0x8219e544
	goto loc_8219E544;
loc_8219DEFC:
	// lwz r11,56(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 56);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,10148(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 10148);
	// lfs f1,2000(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,944(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 944);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,948(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 948);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,952(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 952);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r11,56(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 56);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,10148(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 10148);
	// lfs f0,944(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 944);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f0,948(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 948);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f0,952(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 952);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x820e20b0
	ctx.lr = 0x8219DF60;
	sub_820E20B0(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,30520
	ctx.r11.s64 = ctx.r11.s64 + 30520;
	// lwz r29,28(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 28);
	// lfs f30,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	f30.f64 = double(temp.f32);
	// lwz r18,24(r28)
	r18.u64 = REX_LOAD_U32(r28.u32 + 24);
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// stw r29,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r29.u32);
	// bl 0x82191228
	ctx.lr = 0x8219DF8C;
	sub_82191228(ctx, base);
	// lwz r26,20(r28)
	r26.u64 = REX_LOAD_U32(r28.u32 + 20);
	// stfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r11,r26,-1
	ctx.r11.s64 = r26.s64 + -1;
	// clrlwi r20,r11,29
	r20.u64 = ctx.r11.u32 & 0x7;
	// stw r20,20(r28)
	REX_STORE_U32(r28.u32 + 20, r20.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8219e544
	if (ctx.cr6.eq) goto loc_8219E544;
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
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,16360(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16360);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16264(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16264);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f19,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f19.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f14,16284(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16284);
	f14.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f16,2384(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2384);
	f16.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f15,16908(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16908);
	f15.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f21,16308(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16308);
	f21.f64 = double(temp.f32);
	// lfs f27,16232(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16232);
	f27.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f22,16272(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16272);
	f22.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f23,2344(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2344);
	f23.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f28,16352(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16352);
	f28.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f24,2360(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2360);
	f24.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f29,-30972(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30972);
	f29.f64 = double(temp.f32);
	// lis r7,-32174
	ctx.r7.s64 = -2108555264;
	// lfs f25,16356(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16356);
	f25.f64 = double(temp.f32);
	// lfs f26,31976(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 31976);
	f26.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f20,2008(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2008);
	f20.f64 = double(temp.f32);
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// lfs f17,17124(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17124);
	f17.f64 = double(temp.f32);
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// lfs f18,6400(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 6400);
	f18.f64 = double(temp.f32);
	// lis r8,-32174
	ctx.r8.s64 = -2108555264;
	// lis r6,-32174
	ctx.r6.s64 = -2108555264;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lis r4,-32174
	ctx.r4.s64 = -2108555264;
	// addi r30,r7,11804
	r30.s64 = ctx.r7.s64 + 11804;
	// lis r14,-32168
	r14.s64 = -2108162048;
	// lis r27,-32168
	r27.s64 = -2108162048;
	// stw r30,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// lis r22,-32168
	r22.s64 = -2108162048;
	// lis r19,-32174
	r19.s64 = -2108555264;
	// addi r16,r11,6372
	r16.s64 = ctx.r11.s64 + 6372;
	// addi r15,r10,28576
	r15.s64 = ctx.r10.s64 + 28576;
	// addi r24,r9,23880
	r24.s64 = ctx.r9.s64 + 23880;
	// addi r23,r8,14984
	r23.s64 = ctx.r8.s64 + 14984;
	// addi r17,r6,6268
	r17.s64 = ctx.r6.s64 + 6268;
	// addi r25,r5,6392
	r25.s64 = ctx.r5.s64 + 6392;
	// addi r21,r4,-16472
	r21.s64 = ctx.r4.s64 + -16472;
loc_8219E098:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,16(r3)
	REX_STORE_U16(ctx.r3.u32 + 16, ctx.r11.u16);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r11,270(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 270);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8219e104
	if (ctx.cr6.lt) goto loc_8219E104;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8219e198
	if (!ctx.cr6.lt) goto loc_8219E198;
	// lwz r11,-28732(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + -28732);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8219e198
	if (!ctx.cr6.eq) goto loc_8219E198;
	// lwz r31,32(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 32);
	// bl 0x821feec8
	ctx.lr = 0x8219E0CC;
	sub_821FEEC8(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// fmadds f1,f1,f18,f17
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, f18.f64, f17.f64)));
	// bl 0x8219de08
	ctx.lr = 0x8219E0E0;
	sub_8219DE08(ctx, base);
	// lwz r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 44);
	// lwz r3,116(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// bl 0x8219cef8
	ctx.lr = 0x8219E0EC;
	sub_8219CEF8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,3
	ctx.r10.s64 = 3;
	// sth r3,268(r11)
	REX_STORE_U16(ctx.r11.u32 + 268, ctx.r3.u16);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// sth r10,270(r11)
	REX_STORE_U16(ctx.r11.u32 + 270, ctx.r10.u16);
	// b 0x8219e194
	goto loc_8219E194;
loc_8219E104:
	// lha r9,18(r10)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 18));
	// lwz r11,6264(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 6264);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8219e120
	if (ctx.cr6.eq) goto loc_8219E120;
	// lwz r11,-28732(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + -28732);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8219e198
	if (!ctx.cr6.eq) goto loc_8219E198;
loc_8219E120:
	// bl 0x821feec8
	ctx.lr = 0x8219E124;
	sub_821FEEC8(ctx, base);
	// fmsubs f0,f1,f20,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f20.f64, -f31.f64)));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bl 0x821feec8
	ctx.lr = 0x8219E130;
	sub_821FEEC8(ctx, base);
	// fmsubs f0,f1,f20,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f20.f64, -f31.f64)));
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// bl 0x821feec8
	ctx.lr = 0x8219E13C;
	sub_821FEEC8(ctx, base);
	// fmsubs f0,f1,f20,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f20.f64, -f31.f64)));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,212
	ctx.r4.s64 = ctx.r11.s64 + 212;
	// addi r3,r21,192
	ctx.r3.s64 = r21.s64 + 192;
	// bl 0x8218f708
	ctx.lr = 0x8219E160;
	sub_8218F708(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,270(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 270);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,270(r11)
	REX_STORE_U16(ctx.r11.u32 + 270, ctx.r10.u16);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r10,-28720(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -28720);
	// lwz r11,-28724(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -28724);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-28724(r27)
	REX_STORE_U32(r27.u32 + -28724, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8219e194
	if (ctx.cr6.lt) goto loc_8219E194;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,6264(r19)
	REX_STORE_U32(r19.u32 + 6264, ctx.r11.u32);
loc_8219E194:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8219E198:
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 32);
	// li r9,65
	ctx.r9.s64 = 65;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// rlwinm r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	// addi r3,r10,20
	ctx.r3.s64 = ctx.r10.s64 + 20;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 & ctx.r9.u64;
	// bl 0x8218a390
	ctx.lr = 0x8219E1C0;
	sub_8218A390(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8219e32c
	if (!ctx.cr0.lt) goto loc_8219E32C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,270(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 270);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8219e3a8
	if (ctx.cr6.lt) goto loc_8219E3A8;
	// beq cr6,0x8219e374
	if (ctx.cr6.eq) goto loc_8219E374;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x8219e218
	if (ctx.cr6.lt) goto loc_8219E218;
	// bne cr6,0x8219e330
	if (!ctx.cr6.eq) goto loc_8219E330;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8218f9d8
	ctx.lr = 0x8219E1F4;
	sub_8218F9D8(ctx, base);
	// lwz r11,-28724(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -28724);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,-28724(r27)
	REX_STORE_U32(r27.u32 + -28724, ctx.r11.u32);
	// bgt 0x8219e538
	if (ctx.cr0.gt) goto loc_8219E538;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-28724(r27)
	REX_STORE_U32(r27.u32 + -28724, ctx.r11.u32);
	// stw r10,-28732(r22)
	REX_STORE_U32(r22.u32 + -28732, ctx.r10.u32);
	// b 0x8219e538
	goto loc_8219E538;
loc_8219E218:
	// bl 0x821feec8
	ctx.lr = 0x8219E21C;
	sub_821FEEC8(ctx, base);
	// fmadds f30,f1,f26,f25
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(std::fma(ctx.f1.f64, f26.f64, f25.f64)));
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r6,32(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x8219de08
	ctx.lr = 0x8219E238;
	sub_8219DE08(ctx, base);
	// lwz r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 44);
	// lwz r3,116(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// bl 0x8219cef8
	ctx.lr = 0x8219E244;
	sub_8219CEF8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r26,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0xFFFFFFF0;
	// sth r3,268(r11)
	REX_STORE_U16(ctx.r11.u32 + 268, ctx.r3.u16);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r11,84
	r31.s64 = ctx.r11.s64 + 84;
	// bl 0x821feec8
	ctx.lr = 0x8219E260;
	sub_821FEEC8(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f1,f29,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f29.f64, ctx.f0.f64)));
	// fsubs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 - f28.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// bl 0x821feec8
	ctx.lr = 0x8219E274;
	sub_821FEEC8(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f1,f29,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f29.f64, ctx.f0.f64)));
	// stfs f24,4(r31)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// fsubs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 - f28.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821f7d50
	ctx.lr = 0x8219E2AC;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8219e2e8
	if (ctx.cr0.eq) goto loc_8219E2E8;
	// stw r16,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r16.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f30,f23
	ctx.f13.f64 = double(float(f30.f64 * f23.f64));
	// fmadds f12,f31,f22,f27
	ctx.f12.f64 = double(float(std::fma(f31.f64, f22.f64, f27.f64)));
	// lfs f11,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,176(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// lfs f11,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,180(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// lfs f11,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,184(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// stfs f13,192(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// stfs f12,196(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 196, temp.u32);
loc_8219E2E8:
	// bl 0x821feec8
	ctx.lr = 0x8219E2EC;
	sub_821FEEC8(ctx, base);
	// fmsubs f0,f1,f27,f21
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f27.f64, -f21.f64)));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lwz r11,-28728(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + -28728);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x8219e324
	if (!ctx.cr6.lt) goto loc_8219E324;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r8,56(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 56);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f1,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8218fe60
	ctx.lr = 0x8219E324;
	sub_8218FE60(ctx, base);
loc_8219E324:
	// lfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	f30.f64 = double(temp.f32);
	// lfs f31,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f31.f64 = double(temp.f32);
loc_8219E32C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8219E330:
	// lhz r10,270(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 270);
	// rlwinm r8,r26,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x8219e468
	if (!ctx.cr6.eq) goto loc_8219E468;
	// lha r9,18(r11)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 18));
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r10,56(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 56);
	// addi r29,r11,84
	r29.s64 = ctx.r11.s64 + 84;
	// cmpwi cr6,r9,23
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 23, ctx.xer);
	// blt cr6,0x8219e3ec
	if (ctx.cr6.lt) goto loc_8219E3EC;
	// lha r8,92(r10)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 92));
	// addi r11,r9,-23
	ctx.r11.s64 = ctx.r9.s64 + -23;
	// cmpwi cr6,r8,27
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 27, ctx.xer);
	// bne cr6,0x8219e3b8
	if (!ctx.cr6.eq) goto loc_8219E3B8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// b 0x8219e3c4
	goto loc_8219E3C4;
loc_8219E374:
	// lwz r31,32(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 32);
	// bl 0x821feec8
	ctx.lr = 0x8219E37C;
	sub_821FEEC8(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// fmadds f1,f1,f16,f15
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, f16.f64, f15.f64)));
	// bl 0x8219de08
	ctx.lr = 0x8219E390;
	sub_8219DE08(ctx, base);
	// lwz r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 44);
	// lwz r3,116(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// bl 0x8219cef8
	ctx.lr = 0x8219E39C;
	sub_8219CEF8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// sth r3,268(r11)
	REX_STORE_U16(ctx.r11.u32 + 268, ctx.r3.u16);
	// b 0x8219e32c
	goto loc_8219E32C;
loc_8219E3A8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8218f9d8
	ctx.lr = 0x8219E3B4;
	sub_8218F9D8(ctx, base);
	// b 0x8219e538
	goto loc_8219E538;
loc_8219E3B8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8219e3c4
	if (ctx.cr6.lt) goto loc_8219E3C4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8219E3C4:
	// mulli r8,r8,5
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(5));
	// lha r7,142(r10)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 142));
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mulli r8,r8,12
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(12));
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r11,r24
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + r24.u32));
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r31,r11,r23
	r31.u64 = ctx.r11.u64 + r23.u64;
	// b 0x8219e3f8
	goto loc_8219E3F8;
loc_8219E3EC:
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r15
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
loc_8219E3F8:
	// lwz r10,10148(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 10148);
	// rlwinm r11,r9,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x820e1df8
	ctx.lr = 0x8219E414;
	sub_820E1DF8(ctx, base);
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x820e1df8
	ctx.lr = 0x8219E424;
	sub_820E1DF8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f1,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e20b0
	ctx.lr = 0x8219E43C;
	sub_820E20B0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r20,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
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
	ctx.lr = 0x8219E45C;
	sub_820E20B0(ctx, base);
	// lwz r30,132(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r29,128(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x8219e52c
	goto loc_8219E52C;
loc_8219E468:
	// addi r10,r11,84
	ctx.r10.s64 = ctx.r11.s64 + 84;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// rlwinm r9,r20,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r31,r9,r10
	r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r11,212
	ctx.r6.s64 = ctx.r11.s64 + 212;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821911b0
	ctx.lr = 0x8219E490;
	sub_821911B0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r11,270(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 270);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8219e514
	if (!ctx.cr6.eq) goto loc_8219E514;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f14
	ctx.f0.f64 = double(float(ctx.f0.f64 - f14.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fcmpu cr6,f0,f21
	ctx.cr6.compare(ctx.f0.f64, f21.f64);
	// bgt cr6,0x8219e4fc
	if (ctx.cr6.gt) goto loc_8219E4FC;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r10,228
	ctx.r11.s64 = ctx.r10.s64 + 228;
	// stfs f21,232(r10)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r10.u32 + 232, temp.u32);
	// stfs f0,228(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 228, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,236(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 236, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r10,212
	ctx.r11.s64 = ctx.r10.s64 + 212;
	// stfs f19,4(r11)
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f19,8(r11)
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f19,0(r11)
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,270(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 270);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,270(r11)
	REX_STORE_U16(ctx.r11.u32 + 270, ctx.r10.u16);
	// b 0x8219e52c
	goto loc_8219E52C;
loc_8219E4FC:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r11,212
	ctx.r5.s64 = ctx.r11.s64 + 212;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x820e1cf8
	ctx.lr = 0x8219E510;
	sub_820E1CF8(ctx, base);
	// b 0x8219e52c
	goto loc_8219E52C;
loc_8219E514:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8219e52c
	if (!ctx.cr6.eq) goto loc_8219E52C;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
loc_8219E52C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8219E538:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8219e098
	if (!ctx.cr6.eq) goto loc_8219E098;
loc_8219E544:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f4c
	ctx.lr = 0x8219E550;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_821C25F8) {
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
	// addi r8,r3,24
	ctx.r8.s64 = ctx.r3.s64 + 24;
	// stw r30,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r30.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// sth r30,4(r3)
	REX_STORE_U16(ctx.r3.u32 + 4, r30.u16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sth r30,6(r3)
	REX_STORE_U16(ctx.r3.u32 + 6, r30.u16);
	// bl 0x8214b2d8
	ctx.lr = 0x821C2634;
	sub_8214B2D8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821C3258) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x821c3268
	if (!ctx.cr6.eq) goto loc_821C3268;
loc_821C3260:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821C3268:
	// rlwinm r11,r5,0,16,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xF000;
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// beq cr6,0x821c32e0
	if (ctx.cr6.eq) goto loc_821C32E0;
	// cmpwi cr6,r11,8192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8192, ctx.xer);
	// beq cr6,0x821c32b4
	if (ctx.cr6.eq) goto loc_821C32B4;
	// cmpwi cr6,r11,12288
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12288, ctx.xer);
	// beq cr6,0x821c32ac
	if (ctx.cr6.eq) goto loc_821C32AC;
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x821c3298
	if (ctx.cr6.eq) goto loc_821C3298;
	// lhz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// clrlwi r3,r5,16
	ctx.r3.u64 = ctx.r5.u32 & 0xFFFF;
	// b 0x820e50d8
	sub_820E50D8(ctx, base);
	return;
loc_821C3298:
	// lhz r11,10(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 10);
loc_821C329C:
	// and r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
loc_821C32A0:
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_821C32AC:
	// lhz r11,6(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 6);
	// b 0x821c329c
	goto loc_821C329C;
loc_821C32B4:
	// lhz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 8);
loc_821C32B8:
	// clrlwi. r11,r5,20
	ctx.r11.u64 = ctx.r5.u32 & 0xFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// beq 0x821c32e8
	if (ctx.cr0.eq) goto loc_821C32E8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821c3260
	if (ctx.cr6.eq) goto loc_821C3260;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// beq cr6,0x821c32a0
	if (ctx.cr6.eq) goto loc_821C32A0;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// b 0x821c32ec
	goto loc_821C32EC;
loc_821C32E0:
	// lhz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 4);
	// b 0x821c32b8
	goto loc_821C32B8;
loc_821C32E8:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
loc_821C32EC:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C54E0) {
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
	// lwz r11,19676(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 19676);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821c5598
	if (!ctx.cr6.eq) goto loc_821C5598;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821c5510
	if (!ctx.cr6.eq) goto loc_821C5510;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_821C5510:
	// lwz r11,19432(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 19432);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r10,12244
	ctx.r5.s64 = ctx.r10.s64 + 12244;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x821af9d8
	ctx.lr = 0x821C552C;
	sub_821AF9D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821be7c8
	ctx.lr = 0x821C5538;
	sub_821BE7C8(ctx, base);
	// addi r3,r31,7224
	ctx.r3.s64 = r31.s64 + 7224;
	// bl 0x821be4f8
	ctx.lr = 0x821C5540;
	sub_821BE4F8(ctx, base);
	// addi r3,r31,8120
	ctx.r3.s64 = r31.s64 + 8120;
	// bl 0x821be4f8
	ctx.lr = 0x821C5548;
	sub_821BE4F8(ctx, base);
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
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c1760
	ctx.lr = 0x821C5574;
	sub_821C1760(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c1760
	ctx.lr = 0x821C5598;
	sub_821C1760(ctx, base);
loc_821C5598:
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

DEFINE_REX_FUNC(sub_821C7248) {
	REX_FUNC_PROLOGUE();
	// addi r4,r3,19312
	ctx.r4.s64 = ctx.r3.s64 + 19312;
	// b 0x821c71a8
	sub_821C71A8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821C73A8) {
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
	ctx.lr = 0x821C73B0;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f38
	ctx.lr = 0x821C73B8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r3,10484
	r30.s64 = ctx.r3.s64 + 10484;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,8(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r28,r29,10484
	r28.s64 = r29.s64 + 10484;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x820e2358
	ctx.lr = 0x821C73D8;
	sub_820E2358(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// lfs f29,-12468(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12468);
	f29.f64 = double(temp.f32);
	// bl 0x821b0d38
	ctx.lr = 0x821C73E8;
	sub_821B0D38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821c740c
	if (ctx.cr0.eq) goto loc_821C740C;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821c740c
	if (!ctx.cr6.eq) goto loc_821C740C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f29,16264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16264);
	f29.f64 = double(temp.f32);
loc_821C740C:
	// lbz r11,210(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 210);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c74c4
	if (!ctx.cr0.eq) goto loc_821C74C4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lbz r11,210(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 210);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c74c4
	if (!ctx.cr0.eq) goto loc_821C74C4;
	// fcmpu cr6,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f28.f64, f29.f64);
	// ble cr6,0x821c74c4
	if (!ctx.cr6.gt) goto loc_821C74C4;
	// addi r3,r31,10628
	ctx.r3.s64 = r31.s64 + 10628;
	// bl 0x820e2308
	ctx.lr = 0x821C7438;
	sub_820E2308(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,16620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16620);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// blt cr6,0x821c7450
	if (ctx.cr6.lt) goto loc_821C7450;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// b 0x821c7454
	goto loc_821C7454;
loc_821C7450:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	f30.f64 = f31.f64;
loc_821C7454:
	// addi r3,r29,10628
	ctx.r3.s64 = r29.s64 + 10628;
	// bl 0x820e2308
	ctx.lr = 0x821C745C;
	sub_820E2308(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// blt cr6,0x821c7468
	if (ctx.cr6.lt) goto loc_821C7468;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
loc_821C7468:
	// lfs f0,10492(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 10492);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f30,f30
	f30.f64 = double(float(f30.f64 * f30.f64));
	// lfs f13,10492(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 10492);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// bl 0x820e0130
	ctx.lr = 0x821C7488;
	sub_820E0130(ctx, base);
	// fmadds f0,f31,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(f31.f64, f31.f64, f30.f64)));
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// fsubs f13,f28,f29
	ctx.f13.f64 = double(float(f28.f64 - f29.f64));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fdivs f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 / ctx.f0.f64));
	// fmuls f31,f0,f13
	f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x820e00c0
	ctx.lr = 0x821C74A4;
	sub_820E00C0(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,10492(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10492);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fnmsubs f0,f12,f31,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f12.f64, f31.f64, -ctx.f0.f64)));
	// fnmsubs f13,f11,f31,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f11.f64, f31.f64, -ctx.f13.f64)));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f13,10492(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 10492, temp.u32);
loc_821C74C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f84
	ctx.lr = 0x821C74D0;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821CBE28) {
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
	ctx.lr = 0x821CBE30;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821c2f08
	ctx.lr = 0x821CBE40;
	sub_821C2F08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821cc5bc
	if (ctx.cr0.eq) goto loc_821CC5BC;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821cc5bc
	if (ctx.cr0.eq) goto loc_821CC5BC;
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821cc5bc
	if (!ctx.cr0.eq) goto loc_821CC5BC;
	// lfs f0,5740(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5740);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// li r19,0
	r19.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x821cbe8c
	if (ctx.cr6.lt) goto loc_821CBE8C;
	// mr r30,r19
	r30.u64 = r19.u64;
loc_821CBE8C:
	// lbz r11,161(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 161);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821cbea4
	if (!ctx.cr0.eq) goto loc_821CBEA4;
	// lbz r11,214(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 214);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821cbec0
	if (ctx.cr0.eq) goto loc_821CBEC0;
loc_821CBEA4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x821cbec0
	if (ctx.cr6.eq) goto loc_821CBEC0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,5572(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 5572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821cbec4
	if (ctx.cr6.eq) goto loc_821CBEC4;
loc_821CBEC0:
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
loc_821CBEC4:
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bf940
	ctx.lr = 0x821CBED4;
	sub_821BF940(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bf940
	ctx.lr = 0x821CBEE8;
	sub_821BF940(ctx, base);
	// lwz r11,6796(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6796);
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821cbf0c
	if (!ctx.cr6.gt) goto loc_821CBF0C;
	// addi r9,r31,5856
	ctx.r9.s64 = r31.s64 + 5856;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821CBF00:
	// stbx r19,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, r19.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x821cbf00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821CBF00;
loc_821CBF0C:
	// li r17,-1
	r17.s64 = -1;
	// lwz r29,5768(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 5768);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r20,8(r31)
	r20.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r17,5808(r31)
	REX_STORE_U32(r31.u32 + 5808, r17.u32);
	// mr r23,r19
	r23.u64 = r19.u64;
	// mr r18,r19
	r18.u64 = r19.u64;
	// mr r15,r19
	r15.u64 = r19.u64;
	// bl 0x821cb490
	ctx.lr = 0x821CBF30;
	sub_821CB490(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// li r14,2
	r14.s64 = 2;
	// li r16,5
	r16.s64 = 5;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x821cc104
	if (ctx.cr6.eq) goto loc_821CC104;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821cc518
	if (!ctx.cr6.eq) goto loc_821CC518;
	// lha r10,5826(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 5826));
	// ld r9,6424(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 6424);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r15,r9,0,12,12
	r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000;
	// ble 0x821cbfa4
	if (!ctx.cr0.gt) goto loc_821CBFA4;
	// lha r11,5828(r20)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r20.u32 + 5828));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821cbfa4
	if (!ctx.cr0.gt) goto loc_821CBFA4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821cbfa4
	if (ctx.cr6.lt) goto loc_821CBFA4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,5736(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5736);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,-24832(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24832);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821cbfa4
	if (!ctx.cr6.lt) goto loc_821CBFA4;
	// lhz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 604);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x821cbfa4
	if (ctx.cr6.eq) goto loc_821CBFA4;
	// li r18,1
	r18.s64 = 1;
	// b 0x821cc10c
	goto loc_821CC10C;
loc_821CBFA4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,5600(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 5600);
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// bne cr6,0x821cbfbc
	if (!ctx.cr6.eq) goto loc_821CBFBC;
	// stw r19,5600(r11)
	REX_STORE_U32(ctx.r11.u32 + 5600, r19.u32);
	// b 0x821cc0f8
	goto loc_821CC0F8;
loc_821CBFBC:
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821cc10c
	if (!ctx.cr0.eq) goto loc_821CC10C;
	// cmpldi cr6,r15,0
	ctx.cr6.compare<uint64_t>(r15.u64, 0, ctx.xer);
	// beq cr6,0x821cc10c
	if (ctx.cr6.eq) goto loc_821CC10C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x821cc10c
	if (ctx.cr6.eq) goto loc_821CC10C;
	// lwz r9,5780(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 5780);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821cc10c
	if (ctx.cr6.eq) goto loc_821CC10C;
	// lwz r10,5792(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5792);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x821cc000
	if (ctx.cr6.eq) goto loc_821CC000;
	// lwz r11,5792(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 5792);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821cc004
	if (!ctx.cr6.eq) goto loc_821CC004;
loc_821CC000:
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
loc_821CC004:
	// lha r11,5834(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 5834));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821cc01c
	if (!ctx.cr0.gt) goto loc_821CC01C;
	// lha r11,5834(r20)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r20.u32 + 5834));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x821cc034
	if (ctx.cr0.gt) goto loc_821CC034;
loc_821CC01C:
	// lha r11,5836(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 5836));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821cc03c
	if (!ctx.cr0.gt) goto loc_821CC03C;
	// lha r11,5836(r20)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r20.u32 + 5836));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821cc03c
	if (!ctx.cr0.gt) goto loc_821CC03C;
loc_821CC034:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821cc040
	goto loc_821CC040;
loc_821CC03C:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_821CC040:
	// lbz r8,193(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 193);
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x821cc060
	if (ctx.cr0.eq) goto loc_821CC060;
	// lbz r11,193(r20)
	ctx.r11.u64 = REX_LOAD_U8(r20.u32 + 193);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x821cc064
	if (!ctx.cr0.eq) goto loc_821CC064;
loc_821CC060:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_821CC064:
	// lhz r8,50(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 50);
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// rlwinm. r11,r8,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cc084
	if (ctx.cr0.eq) goto loc_821CC084;
	// lhz r11,50(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 50);
	// rlwinm. r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x821cc088
	if (!ctx.cr0.eq) goto loc_821CC088;
loc_821CC084:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_821CC088:
	// and. r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821cc10c
	if (ctx.cr0.eq) goto loc_821CC10C;
	// lha r11,52(r9)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + 52));
	// lha r9,52(r29)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r29.u32 + 52));
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821cc0d8
	if (ctx.cr6.eq) goto loc_821CC0D8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821cc0c8
	if (ctx.cr6.eq) goto loc_821CC0C8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821cc0c0
	if (ctx.cr6.eq) goto loc_821CC0C0;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x821cc10c
	if (!ctx.cr6.eq) goto loc_821CC10C;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// b 0x821cc0cc
	goto loc_821CC0CC;
loc_821CC0C0:
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// b 0x821cc0cc
	goto loc_821CC0CC;
loc_821CC0C8:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
loc_821CC0CC:
	// beq cr6,0x821cc0e8
	if (ctx.cr6.eq) goto loc_821CC0E8;
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// b 0x821cc0e8
	goto loc_821CC0E8;
loc_821CC0D8:
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_821CC0E8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821cc10c
	if (ctx.cr6.eq) goto loc_821CC10C;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,5600(r31)
	REX_STORE_U32(r31.u32 + 5600, ctx.r11.u32);
loc_821CC0F8:
	// li r21,10
	r21.s64 = 10;
	// stb r14,5858(r31)
	REX_STORE_U8(r31.u32 + 5858, r14.u8);
	// stb r16,5860(r31)
	REX_STORE_U8(r31.u32 + 5860, r16.u8);
loc_821CC104:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x821cc518
	if (!ctx.cr6.eq) goto loc_821CC518;
loc_821CC10C:
	// lbz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 202);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821cc15c
	if (ctx.cr0.eq) goto loc_821CC15C;
	// lwz r11,872(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 872);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821cc15c
	if (!ctx.cr0.eq) goto loc_821CC15C;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// li r22,1
	r22.s64 = 1;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// addi r10,r9,23240
	ctx.r10.s64 = ctx.r9.s64 + 23240;
	// mulli r7,r8,284
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(284));
	// lwz r11,23240(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 23240);
	// addi r10,r10,216
	ctx.r10.s64 = ctx.r10.s64 + 216;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// lwzx r10,r7,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cc160
	if (ctx.cr0.eq) goto loc_821CC160;
loc_821CC15C:
	// mr r22,r19
	r22.u64 = r19.u64;
loc_821CC160:
	// lbz r10,192(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 192);
	// lbz r9,164(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 164);
	// lbz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 220);
	// lbz r30,163(r31)
	r30.u64 = REX_LOAD_U8(r31.u32 + 163);
	// or r27,r10,r9
	r27.u64 = ctx.r10.u64 | ctx.r9.u64;
	// std r19,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, r19.u64);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821cc188
	if (ctx.cr0.eq) goto loc_821CC188;
	// lbz r25,213(r31)
	r25.u64 = REX_LOAD_U8(r31.u32 + 213);
	// b 0x821cc18c
	goto loc_821CC18C;
loc_821CC188:
	// lbz r25,162(r31)
	r25.u64 = REX_LOAD_U8(r31.u32 + 162);
loc_821CC18C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821cc19c
	if (ctx.cr6.eq) goto loc_821CC19C;
	// lbz r26,213(r31)
	r26.u64 = REX_LOAD_U8(r31.u32 + 213);
	// b 0x821cc1a0
	goto loc_821CC1A0;
loc_821CC19C:
	// lbz r26,162(r31)
	r26.u64 = REX_LOAD_U8(r31.u32 + 162);
loc_821CC1A0:
	// lbz r11,187(r20)
	ctx.r11.u64 = REX_LOAD_U8(r20.u32 + 187);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821cc518
	if (ctx.cr0.eq) goto loc_821CC518;
	// lbz r11,194(r20)
	ctx.r11.u64 = REX_LOAD_U8(r20.u32 + 194);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821cc518
	if (!ctx.cr0.eq) goto loc_821CC518;
	// lbz r11,217(r20)
	ctx.r11.u64 = REX_LOAD_U8(r20.u32 + 217);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821cc518
	if (!ctx.cr0.eq) goto loc_821CC518;
	// lbz r11,193(r20)
	ctx.r11.u64 = REX_LOAD_U8(r20.u32 + 193);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821cc518
	if (ctx.cr0.eq) goto loc_821CC518;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ff870
	ctx.lr = 0x821CC1E0;
	sub_821FF870(ctx, base);
	// ld r24,80(r1)
	r24.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// cmpldi cr6,r24,0
	ctx.cr6.compare<uint64_t>(r24.u64, 0, ctx.xer);
	// beq cr6,0x821cc518
	if (ctx.cr6.eq) goto loc_821CC518;
	// lhz r11,50(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 50);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// lhz r5,52(r29)
	ctx.r5.u64 = REX_LOAD_U16(r29.u32 + 52);
	// lbz r10,214(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 214);
	// bne cr6,0x821cc210
	if (!ctx.cr6.eq) goto loc_821CC210;
	// rlwinm. r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cc210
	if (ctx.cr0.eq) goto loc_821CC210;
	// li r28,1
	r28.s64 = 1;
	// b 0x821cc228
	goto loc_821CC228;
loc_821CC210:
	// mr r28,r19
	r28.u64 = r19.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x821cc228
	if (ctx.cr6.eq) goto loc_821CC228;
	// rlwinm. r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r29,1
	r29.s64 = 1;
	// bne 0x821cc22c
	if (!ctx.cr0.eq) goto loc_821CC22C;
loc_821CC228:
	// mr r29,r19
	r29.u64 = r19.u64;
loc_821CC22C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x821cc25c
	if (ctx.cr6.eq) goto loc_821CC25C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821cc24c
	if (ctx.cr6.eq) goto loc_821CC24C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x821cc2c4
	if (!ctx.cr6.eq) goto loc_821CC2C4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x821cc2c4
	if (!ctx.cr6.eq) goto loc_821CC2C4;
loc_821CC24C:
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cc2ec
	if (ctx.cr0.eq) goto loc_821CC2EC;
	// li r23,7
	r23.s64 = 7;
	// b 0x821cc2ec
	goto loc_821CC2EC;
loc_821CC25C:
	// clrlwi r30,r11,16
	r30.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// beq cr6,0x821cc2a0
	if (ctx.cr6.eq) goto loc_821CC2A0;
	// bl 0x821c37b8
	ctx.lr = 0x821CC274;
	sub_821C37B8(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne 0x821cc2ec
	if (!ctx.cr0.eq) goto loc_821CC2EC;
	// cmplwi cr6,r30,129
	ctx.cr6.compare<uint32_t>(r30.u32, 129, ctx.xer);
	// beq cr6,0x821cc2ec
	if (ctx.cr6.eq) goto loc_821CC2EC;
	// rlwinm. r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821cc298
	if (!ctx.cr0.eq) goto loc_821CC298;
	// lbz r11,178(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 178);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821cc2ec
	if (ctx.cr0.eq) goto loc_821CC2EC;
loc_821CC298:
	// li r23,6
	r23.s64 = 6;
	// b 0x821cc2ec
	goto loc_821CC2EC;
loc_821CC2A0:
	// bl 0x821c37b8
	ctx.lr = 0x821CC2A4;
	sub_821C37B8(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne 0x821cc2ec
	if (!ctx.cr0.eq) goto loc_821CC2EC;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x821cc2cc
	if (ctx.cr6.eq) goto loc_821CC2CC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x821cc2c4
	if (!ctx.cr6.eq) goto loc_821CC2C4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x821cc2cc
	if (ctx.cr6.eq) goto loc_821CC2CC;
loc_821CC2C4:
	// li r23,1
	r23.s64 = 1;
	// b 0x821cc2ec
	goto loc_821CC2EC;
loc_821CC2CC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x821cc2e0
	if (ctx.cr6.eq) goto loc_821CC2E0;
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821cc2e8
	if (!ctx.cr0.eq) goto loc_821CC2E8;
	// b 0x821cc2ec
	goto loc_821CC2EC;
loc_821CC2E0:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cc2ec
	if (ctx.cr0.eq) goto loc_821CC2EC;
loc_821CC2E8:
	// li r23,4
	r23.s64 = 4;
loc_821CC2EC:
	// lha r11,5842(r20)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r20.u32 + 5842));
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// ble cr6,0x821cc370
	if (!ctx.cr6.gt) goto loc_821CC370;
	// lbz r11,218(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 218);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821cc370
	if (ctx.cr0.eq) goto loc_821CC370;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5732(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5732);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,2352(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2352);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x821cc31c
	if (!ctx.cr6.lt) goto loc_821CC31C;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_821CC31C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16172(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16172);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821cc330
	if (!ctx.cr6.gt) goto loc_821CC330;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821CC330:
	// fsubs f10,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5736(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 5736);
	ctx.f0.f64 = double(temp.f32);
	// fabs f9,f0
	ctx.f9.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,12412(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12412);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,21808(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 21808);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,32124(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 32124);
	ctx.f11.f64 = double(temp.f32);
	// fnmsubs f0,f10,f0,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f0.f64, -ctx.f13.f64)));
	// fmadds f0,f0,f12,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f11.f64)));
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// ble cr6,0x821cc370
	if (!ctx.cr6.gt) goto loc_821CC370;
	// mr r23,r14
	r23.u64 = r14.u64;
loc_821CC370:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x821cc518
	if (ctx.cr6.eq) goto loc_821CC518;
	// rlwinm r8,r24,0,5,6
	ctx.r8.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x6000000;
	// lwz r9,6796(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 6796);
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// beq cr6,0x821cc3fc
	if (ctx.cr6.eq) goto loc_821CC3FC;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x821cc39c
	if (ctx.cr6.eq) goto loc_821CC39C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x821cc3fc
	if (ctx.cr6.eq) goto loc_821CC3FC;
loc_821CC39C:
	// cmpwi cr6,r23,4
	ctx.cr6.compare<int32_t>(r23.s32, 4, ctx.xer);
	// blt cr6,0x821cc3fc
	if (ctx.cr6.lt) goto loc_821CC3FC;
	// cmpwi cr6,r23,5
	ctx.cr6.compare<int32_t>(r23.s32, 5, ctx.xer);
	// ble cr6,0x821cc3b4
	if (!ctx.cr6.gt) goto loc_821CC3B4;
	// cmpwi cr6,r23,7
	ctx.cr6.compare<int32_t>(r23.s32, 7, ctx.xer);
	// bne cr6,0x821cc3fc
	if (!ctx.cr6.eq) goto loc_821CC3FC;
loc_821CC3B4:
	// cmpwi cr6,r9,18
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 18, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// ble cr6,0x821cc3c4
	if (!ctx.cr6.gt) goto loc_821CC3C4;
	// li r11,18
	ctx.r11.s64 = 18;
loc_821CC3C4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821cc3fc
	if (ctx.cr6.lt) goto loc_821CC3FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r31,6272
	ctx.r10.s64 = r31.s64 + 6272;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821CC3D8:
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x821cc3f4
	if (ctx.cr6.eq) goto loc_821CC3F4;
	// lwz r11,5804(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 5804);
	// mr r21,r23
	r21.u64 = r23.u64;
	// stw r11,5808(r31)
	REX_STORE_U32(r31.u32 + 5808, ctx.r11.u32);
loc_821CC3F4:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x821cc3d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821CC3D8;
loc_821CC3FC:
	// lis r12,-1537
	ctx.r12.s64 = -100728832;
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// and r6,r24,r12
	ctx.r6.u64 = r24.u64 & ctx.r12.u64;
	// ble cr6,0x821cc518
	if (!ctx.cr6.gt) goto loc_821CC518;
	// addi r8,r31,6272
	ctx.r8.s64 = r31.s64 + 6272;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821CC41C:
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// and r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 & ctx.r6.u64;
	// bgt cr6,0x821cc4c0
	if (ctx.cr6.gt) goto loc_821CC4C0;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x821cc50c
	if (ctx.cr6.eq) goto loc_821CC50C;
	// mr r21,r23
	r21.u64 = r23.u64;
	// stw r17,5808(r31)
	REX_STORE_U32(r31.u32 + 5808, r17.u32);
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(r23.s32, 1, ctx.xer);
	// beq cr6,0x821cc480
	if (ctx.cr6.eq) goto loc_821CC480;
	// cmpwi cr6,r23,3
	ctx.cr6.compare<int32_t>(r23.s32, 3, ctx.xer);
	// ble cr6,0x821cc50c
	if (!ctx.cr6.gt) goto loc_821CC50C;
	// cmpwi cr6,r23,7
	ctx.cr6.compare<int32_t>(r23.s32, 7, ctx.xer);
	// ble cr6,0x821cc470
	if (!ctx.cr6.gt) goto loc_821CC470;
	// cmpwi cr6,r23,11
	ctx.cr6.compare<int32_t>(r23.s32, 11, ctx.xer);
	// bne cr6,0x821cc50c
	if (!ctx.cr6.eq) goto loc_821CC50C;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x821cc50c
	if (!ctx.cr6.eq) goto loc_821CC50C;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x821cc474
	goto loc_821CC474;
loc_821CC470:
	// li r9,1
	ctx.r9.s64 = 1;
loc_821CC474:
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// stb r9,5856(r10)
	REX_STORE_U8(ctx.r10.u32 + 5856, ctx.r9.u8);
	// b 0x821cc50c
	goto loc_821CC50C;
loc_821CC480:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x821cc50c
	if (!ctx.cr6.eq) goto loc_821CC50C;
	// lha r10,5822(r20)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r20.u32 + 5822));
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bge cr6,0x821cc4ac
	if (!ctx.cr6.lt) goto loc_821CC4AC;
	// lha r10,5824(r20)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r20.u32 + 5824));
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bge cr6,0x821cc4ac
	if (!ctx.cr6.lt) goto loc_821CC4AC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// stb r14,5856(r10)
	REX_STORE_U8(ctx.r10.u32 + 5856, r14.u8);
	// b 0x821cc4b8
	goto loc_821CC4B8;
loc_821CC4AC:
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// li r9,3
	ctx.r9.s64 = 3;
	// stb r9,5856(r10)
	REX_STORE_U8(ctx.r10.u32 + 5856, ctx.r9.u8);
loc_821CC4B8:
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x821cc50c
	goto loc_821CC50C;
loc_821CC4C0:
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x821cc4f8
	if (ctx.cr6.eq) goto loc_821CC4F8;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bne cr6,0x821cc4f8
	if (!ctx.cr6.eq) goto loc_821CC4F8;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x821cc4f8
	if (!ctx.cr6.eq) goto loc_821CC4F8;
	// andis. r10,r10,80
	ctx.r10.u64 = ctx.r10.u64 & 5242880;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x821cc4f8
	if (ctx.cr6.eq) goto loc_821CC4F8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x821cc4f8
	if (!ctx.cr6.eq) goto loc_821CC4F8;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r16,5856(r10)
	REX_STORE_U8(ctx.r10.u32 + 5856, r16.u8);
loc_821CC4F8:
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x821cc50c
	if (ctx.cr6.eq) goto loc_821CC50C;
	// cmpwi cr6,r18,1
	ctx.cr6.compare<int32_t>(r18.s32, 1, ctx.xer);
	// bne cr6,0x821cc50c
	if (!ctx.cr6.eq) goto loc_821CC50C;
	// mr r18,r14
	r18.u64 = r14.u64;
loc_821CC50C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// bdnz 0x821cc41c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821CC41C;
loc_821CC518:
	// lwz r11,5808(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5808);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821cc52c
	if (ctx.cr6.eq) goto loc_821CC52C;
	// li r18,3
	r18.s64 = 3;
	// stw r19,5556(r31)
	REX_STORE_U32(r31.u32 + 5556, r19.u32);
loc_821CC52C:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x821cc548
	if (!ctx.cr6.eq) goto loc_821CC548;
	// cmpldi cr6,r15,0
	ctx.cr6.compare<uint64_t>(r15.u64, 0, ctx.xer);
	// beq cr6,0x821cc548
	if (ctx.cr6.eq) goto loc_821CC548;
	// cmpwi cr6,r18,1
	ctx.cr6.compare<int32_t>(r18.s32, 1, ctx.xer);
	// bne cr6,0x821cc548
	if (!ctx.cr6.eq) goto loc_821CC548;
	// mr r18,r14
	r18.u64 = r14.u64;
loc_821CC548:
	// cmplwi cr6,r18,1
	ctx.cr6.compare<uint32_t>(r18.u32, 1, ctx.xer);
	// blt cr6,0x821cc580
	if (ctx.cr6.lt) goto loc_821CC580;
	// beq cr6,0x821cc56c
	if (ctx.cr6.eq) goto loc_821CC56C;
	// cmplwi cr6,r18,3
	ctx.cr6.compare<uint32_t>(r18.u32, 3, ctx.xer);
	// bge cr6,0x821cc5a0
	if (!ctx.cr6.lt) goto loc_821CC5A0;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r21,8
	r21.s64 = 8;
	// stb r11,5876(r31)
	REX_STORE_U8(r31.u32 + 5876, ctx.r11.u8);
	// b 0x821cc5b8
	goto loc_821CC5B8;
loc_821CC56C:
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(r21.s32, 4, ctx.xer);
	// bne cr6,0x821cc5a0
	if (!ctx.cr6.eq) goto loc_821CC5A0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r11,5876(r31)
	REX_STORE_U8(r31.u32 + 5876, ctx.r11.u8);
	// b 0x821cc598
	goto loc_821CC598;
loc_821CC580:
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(r21.s32, 4, ctx.xer);
	// bne cr6,0x821cc5a0
	if (!ctx.cr6.eq) goto loc_821CC5A0;
	// lhz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 604);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x821cc5b8
	if (!ctx.cr6.eq) goto loc_821CC5B8;
	// li r11,4
	ctx.r11.s64 = 4;
loc_821CC598:
	// stw r11,5556(r31)
	REX_STORE_U32(r31.u32 + 5556, ctx.r11.u32);
	// li r21,9
	r21.s64 = 9;
loc_821CC5A0:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x821cc5b8
	if (!ctx.cr6.eq) goto loc_821CC5B8;
	// lhz r11,8252(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 8252);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x821cc5b8
	if (ctx.cr6.eq) goto loc_821CC5B8;
	// li r21,15
	r21.s64 = 15;
loc_821CC5B8:
	// stw r21,5628(r31)
	REX_STORE_U32(r31.u32 + 5628, r21.u32);
loc_821CC5BC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_821EC9F8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,-32032
	r31.s64 = ctx.r11.s64 + -32032;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f28a0
	ctx.lr = 0x821ECA1C;
	sub_821F28A0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,7792(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7792);
	// lwz r4,1684(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1684);
	// bl 0x821f2908
	ctx.lr = 0x821ECA30;
	sub_821F2908(ctx, base);
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

DEFINE_REX_FUNC(sub_821EE998) {
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
	// bl 0x821ec9f8
	ctx.lr = 0x821EE9B4;
	sub_821EC9F8(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r30,r11,-32032
	r30.s64 = ctx.r11.s64 + -32032;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f2bf0
	ctx.lr = 0x821EE9CC;
	sub_821F2BF0(ctx, base);
	// lfs f11,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lfs f1,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ed290
	ctx.lr = 0x821EE9E0;
	sub_821ED290(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f11
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fadds f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f12,80(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// addi r8,r31,64
	ctx.r8.s64 = r31.s64 + 64;
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// stfs f9,124(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// lfs f0,-13044(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -13044);
	ctx.f0.f64 = double(temp.f32);
	// stfs f9,84(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f1,128(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stfs f1,88(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f1,48(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f1,8(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_821EEA44:
	// lbzx r9,r10,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,124(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// stfs f13,84(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stfs f13,44(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfsu f13,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821eea44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821EEA44;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r11,32(r7)
	REX_STORE_U32(ctx.r7.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r11,36(r7)
	REX_STORE_U32(ctx.r7.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r11,72(r7)
	REX_STORE_U32(ctx.r7.u32 + 72, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r11,76(r7)
	REX_STORE_U32(ctx.r7.u32 + 76, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// stw r11,112(r7)
	REX_STORE_U32(ctx.r7.u32 + 112, ctx.r11.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// stw r11,116(r7)
	REX_STORE_U32(ctx.r7.u32 + 116, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// stw r11,152(r7)
	REX_STORE_U32(ctx.r7.u32 + 152, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// stw r11,156(r7)
	REX_STORE_U32(ctx.r7.u32 + 156, ctx.r11.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r5,72(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lbz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 76);
	// mulli r10,r10,144
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(144));
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821f2c50
	ctx.lr = 0x821EEAE4;
	sub_821F2C50(ctx, base);
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

DEFINE_REX_FUNC(sub_821F4BB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821f4bd8
	if (ctx.cr6.gt) goto loc_821F4BD8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_821F4BD8:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821f4be8
	if (ctx.cr0.eq) goto loc_821F4BE8;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_821F4BE8:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821f4c08
	if (ctx.cr6.gt) goto loc_821F4C08;
	// li r9,0
	ctx.r9.s64 = 0;
loc_821F4C08:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821f4c18
	if (ctx.cr0.eq) goto loc_821F4C18;
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_821F4C18:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821f4c38
	if (ctx.cr6.gt) goto loc_821F4C38;
	// li r9,0
	ctx.r9.s64 = 0;
loc_821F4C38:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F8450) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r10,r11,-32480
	ctx.r10.s64 = ctx.r11.s64 + -32480;
	// lbz r11,25(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 25);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821f84dc
	if (ctx.cr0.lt) goto loc_821F84DC;
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mulli r11,r11,36
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(36));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f84dc
	if (ctx.cr6.eq) goto loc_821F84DC;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r9,4
	ctx.r3.s64 = ctx.r9.s64 + 4;
	// lha r11,38(r10)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 38));
	// lwz r9,44(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// ble 0x821f84dc
	if (!ctx.cr0.gt) goto loc_821F84DC;
loc_821F84A0:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x821f84c8
	if (!ctx.cr0.eq) goto loc_821F84C8;
	// lha r11,4(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 4));
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f84d4
	if (ctx.cr6.lt) goto loc_821F84D4;
	// lha r11,6(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 6));
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x821f84d4
	goto loc_821F84D4;
loc_821F84C8:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_821F84D4:
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bdnz 0x821f84a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F84A0;
loc_821F84DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FA860) {
	REX_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// clrlwi. r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// bne 0x821fa894
	if (!ctx.cr0.eq) goto loc_821FA894;
loc_821FA878:
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821fa878
	if (ctx.cr0.eq) goto loc_821FA878;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821fa894
	if (ctx.cr6.lt) goto loc_821FA894;
	// li r10,1
	ctx.r10.s64 = 1;
loc_821FA894:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FB088) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x821fb0c0
	if (!ctx.cr6.lt) goto loc_821FB0C0;
	// clrlwi. r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// bne 0x821fb0c4
	if (!ctx.cr0.eq) goto loc_821FB0C4;
loc_821FB0A0:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821fb0a0
	if (ctx.cr0.eq) goto loc_821FB0A0;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821fb0c4
	if (ctx.cr6.lt) goto loc_821FB0C4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821fb0c4
	goto loc_821FB0C4;
loc_821FB0C0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_821FB0C4:
	// addi r11,r11,95
	ctx.r11.s64 = ctx.r11.s64 + 95;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f0,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821fb118
	if (!ctx.cr6.gt) goto loc_821FB118;
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r3,1776
	ctx.r10.s64 = ctx.r3.s64 + 1776;
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,1776(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 1776, temp.u32);
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,1780(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 1780, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f13,1784(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 1784, temp.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stfs f0,1788(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 1788, temp.u32);
loc_821FB118:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FF600) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// rlwinm r10,r3,23,27,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 23) & 0x1E;
	// addi r11,r11,3332
	ctx.r11.s64 = ctx.r11.s64 + 3332;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FFC88) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x820e01b0
	ctx.lr = 0x821FFCAC;
	sub_820E01B0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,240(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 240);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// lfs f3,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x821ff9d0
	ctx.lr = 0x821FFCD0;
	sub_821FF9D0(ctx, base);
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,48(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 48, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
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
	ctx.lr = 0x821FFD00;
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

DEFINE_REX_FUNC(sub_82202268) {
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
	// bl 0x82202200
	ctx.lr = 0x8220227C;
	sub_82202200(ctx, base);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bge cr6,0x82202294
	if (!ctx.cr6.lt) goto loc_82202294;
	// addi r11,r3,61
	ctx.r11.s64 = ctx.r3.s64 + 61;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r7
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// b 0x82202298
	goto loc_82202298;
loc_82202294:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82202298:
	// bl 0x82200b20
	ctx.lr = 0x8220229C;
	sub_82200B20(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82203370) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822033e4
	if (ctx.cr6.lt) goto loc_822033E4;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822033e4
	if (!ctx.cr6.lt) goto loc_822033E4;
	// lwz r11,180(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf. r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x822033a8
	if (!ctx.cr0.lt) goto loc_822033A8;
	// lha r11,14(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 14));
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
	// blr 
	return;
loc_822033A8:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf. r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x822033c4
	if (!ctx.cr0.lt) goto loc_822033C4;
	// lha r11,14(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 14));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r3,r11,16384
	ctx.r3.s64 = ctx.r11.s64 + 16384;
	// blr 
	return;
loc_822033C4:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// subf. r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x822033e4
	if (!ctx.cr0.lt) goto loc_822033E4;
	// lha r11,14(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 14));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,-32768
	ctx.r3.s64 = ctx.r3.s64 + -32768;
	// blr 
	return;
loc_822033E4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822051A8) {
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
	// addi r30,r11,30472
	r30.s64 = ctx.r11.s64 + 30472;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_822051C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822051f4
	if (!ctx.cr6.eq) goto loc_822051F4;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x822c80d0
	ctx.lr = 0x822051DC;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822051ec
	if (ctx.cr0.eq) goto loc_822051EC;
	// bl 0x822c8970
	ctx.lr = 0x822051E8;
	sub_822C8970(ctx, base);
	// b 0x822051f0
	goto loc_822051F0;
loc_822051EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822051F0:
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_822051F4:
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822c80d0
	ctx.lr = 0x822051FC;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82205210
	if (ctx.cr0.eq) goto loc_82205210;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822c9898
	ctx.lr = 0x8220520C;
	sub_822C9898(ctx, base);
	// b 0x82205214
	goto loc_82205214;
loc_82205210:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82205214:
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
	// addi r11,r30,256
	ctx.r11.s64 = r30.s64 + 256;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822051c8
	if (ctx.cr6.lt) goto loc_822051C8;
	// bl 0x822ca120
	ctx.lr = 0x8220522C;
	sub_822CA120(ctx, base);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r3,r10,23424
	ctx.r3.s64 = ctx.r10.s64 + 23424;
	// addi r10,r11,3512
	ctx.r10.s64 = ctx.r11.s64 + 3512;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r7,-32165
	ctx.r7.s64 = -2107965440;
	// stw r11,4628(r3)
	REX_STORE_U32(ctx.r3.u32 + 4628, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,4888(r3)
	REX_STORE_U32(ctx.r3.u32 + 4888, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r9,4624(r3)
	REX_STORE_U32(ctx.r3.u32 + 4624, ctx.r9.u32);
	// stw r11,6980(r3)
	REX_STORE_U32(ctx.r3.u32 + 6980, ctx.r11.u32);
	// li r5,72
	ctx.r5.s64 = 72;
	// stw r9,6996(r3)
	REX_STORE_U32(ctx.r3.u32 + 6996, ctx.r9.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// stw r8,6976(r3)
	REX_STORE_U32(ctx.r3.u32 + 6976, ctx.r8.u32);
	// stw r10,30464(r7)
	REX_STORE_U32(ctx.r7.u32 + 30464, ctx.r10.u32);
	// bl 0x82205da8
	ctx.lr = 0x8220527C;
	sub_82205DA8(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r3,r11,18752
	ctx.r3.s64 = ctx.r11.s64 + 18752;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x82205da8
	ctx.lr = 0x82205290;
	sub_82205DA8(ctx, base);
	// bl 0x82204f80
	ctx.lr = 0x82205294;
	sub_82204F80(ctx, base);
	// bl 0x8218a820
	ctx.lr = 0x82205298;
	sub_8218A820(ctx, base);
	// bl 0x8218def8
	ctx.lr = 0x8220529C;
	sub_8218DEF8(ctx, base);
	// bl 0x8218df68
	ctx.lr = 0x822052A0;
	sub_8218DF68(ctx, base);
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

DEFINE_REX_FUNC(sub_82208FE0) {
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
	ctx.lr = 0x82208FE8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// neg r11,r3
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// clrlwi r30,r11,25
	r30.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r5,256
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 256, ctx.xer);
	// bge cr6,0x82209018
	if (!ctx.cr6.lt) goto loc_82209018;
	// bl 0x822d4fa0
	ctx.lr = 0x82209010;
	sub_822D4FA0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_82209018:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8220903c
	if (ctx.cr6.eq) goto loc_8220903C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82209030;
	sub_822D4FA0(ctx, base);
	// add r28,r30,r27
	r28.u64 = r30.u64 + r27.u64;
	// add r29,r30,r29
	r29.u64 = r30.u64 + r29.u64;
	// subf r31,r30,r31
	r31.u64 = r31.u64 - r30.u64;
loc_8220903C:
	// rlwinm r30,r31,0,0,24
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFF80;
	// clrlwi r11,r29,28
	ctx.r11.u64 = r29.u32 & 0xF;
	// clrlwi r31,r31,25
	r31.u64 = r31.u32 & 0x7F;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// beq cr6,0x82209064
	if (ctx.cr6.eq) goto loc_82209064;
	// bl 0x8220ad34
	ctx.lr = 0x82209060;
	sub_8220AD34(ctx, base);
	// b 0x82209068
	goto loc_82209068;
loc_82209064:
	// bl 0x8220aa10
	ctx.lr = 0x82209068;
	sub_8220AA10(ctx, base);
loc_82209068:
	// add r3,r30,r28
	ctx.r3.u64 = r30.u64 + r28.u64;
	// add r4,r30,r29
	ctx.r4.u64 = r30.u64 + r29.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82209080
	if (ctx.cr6.eq) goto loc_82209080;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82209080;
	sub_822D4FA0(ctx, base);
loc_82209080:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8220BF88) {
	REX_FUNC_PROLOGUE();
	// lbz r3,268(r13)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r13.u32 + 268);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220C188) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8220C190;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r29,r11,4400
	r29.s64 = ctx.r11.s64 + 4400;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824d438c
	ctx.lr = 0x8220C1A8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r31,r11,4428
	r31.s64 = ctx.r11.s64 + 4428;
	// lwz r11,4428(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4428);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// beq cr6,0x8220c1e0
	if (ctx.cr6.eq) goto loc_8220C1E0;
loc_8220C1C0:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220C1D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// bne cr6,0x8220c1c0
	if (!ctx.cr6.eq) goto loc_8220C1C0;
loc_8220C1E0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824d437c
	ctx.lr = 0x8220C1E8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8220F900) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x8220f910
	if (!ctx.cr6.eq) goto loc_8220F910;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8220F910:
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// mulli r11,r11,-10000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(-10000));
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822101E0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10568);
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210220) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwimi r11,r4,3,28,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r11,10556(r3)
	REX_STORE_U32(ctx.r3.u32 + 10556, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210710) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r4,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// rlwinm r10,r4,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFF;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// std r10,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// lfd f12,-8(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// std r11,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r11.u64);
	// lfd f11,-8(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// lfs f0,-13044(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -13044);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// li r12,15
	ctx.r12.s64 = 15;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// rldicr r12,r12,33,30
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 33) & 0xFFFFFFFE00000000;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,10472(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 10472, temp.u32);
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,10468(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 10468, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,10464(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 10464, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,10476(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 10476, temp.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211340) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,12,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822114D8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12820(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12820);
	// stw r4,12412(r3)
	REX_STORE_U32(ctx.r3.u32 + 12412, ctx.r4.u32);
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
	// beq cr6,0x82211510
	if (ctx.cr6.eq) goto loc_82211510;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82211510
	if (ctx.cr6.eq) goto loc_82211510;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82211510
	if (ctx.cr6.eq) goto loc_82211510;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82211510:
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

DEFINE_REX_FUNC(sub_82214368) {
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
	ctx.lr = 0x82214370;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// ld r10,12248(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 12248);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// addi r28,r3,12248
	r28.s64 = ctx.r3.s64 + 12248;
	// li r27,0
	r27.s64 = 0;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// li r30,1
	r30.s64 = 1;
	// bne cr6,0x822143a4
	if (!ctx.cr6.eq) goto loc_822143A4;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_822143A4:
	// lbz r11,11070(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11070);
	// lwz r29,12256(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 12256);
	// rlwinm r26,r11,30,31,31
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82214418
	if (ctx.cr6.eq) goto loc_82214418;
	// li r25,6
	r25.s64 = 6;
loc_822143BC:
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82213e40
	ctx.lr = 0x822143CC;
	sub_82213E40(ctx, base);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82214428
	if (ctx.cr0.eq) goto loc_82214428;
	// addi r7,r6,-4
	ctx.r7.s64 = ctx.r6.s64 + -4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82214430
	if (ctx.cr6.eq) goto loc_82214430;
	// li r11,1480
	ctx.r11.s64 = 1480;
	// stw r27,12256(r31)
	REX_STORE_U32(r31.u32 + 12256, r27.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// li r11,3584
	ctx.r11.s64 = 3584;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,3648
	ctx.r8.s64 = 3648;
	// li r5,1
	ctx.r5.s64 = 1;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// stwu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r7.u32 = ea;
	// stwu r8,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r7.u32 = ea;
	// stwu r5,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r7.u32 = ea;
	// b 0x82214554
	goto loc_82214554;
loc_82214418:
	// add r11,r26,r30
	ctx.r11.u64 = r26.u64 + r30.u64;
	// mulli r25,r11,11
	r25.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(11));
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x822143bc
	if (!ctx.cr6.eq) goto loc_822143BC;
loc_82214428:
	// stw r27,0(r24)
	REX_STORE_U32(r24.u32 + 0, r27.u32);
	// b 0x82214570
	goto loc_82214570;
loc_82214430:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x822144b8
	if (ctx.cr6.eq) goto loc_822144B8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82213908
	ctx.lr = 0x82214448;
	sub_82213908(ctx, base);
	// li r11,2609
	ctx.r11.s64 = 2609;
	// lis r10,768
	ctx.r10.s64 = 50331648;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,-16380
	ctx.r8.s64 = -1073479680;
	// ori r11,r9,2607
	ctx.r11.u64 = ctx.r9.u64 | 2607;
	// ori r9,r8,15360
	ctx.r9.u64 = ctx.r8.u64 | 15360;
	// li r8,3
	ctx.r8.s64 = 3;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// li r5,2609
	ctx.r5.s64 = 2609;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r30,r30,0,0,19
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// stwu r30,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r7.u32 = ea;
	// stwu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r7.u32 = ea;
	// stwu r8,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r7.u32 = ea;
	// stwu r5,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r7.u32 = ea;
	// stwu r27,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r7.u32 = ea;
	// stwu r3,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r7.u32 = ea;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
loc_822144B8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x82214554
	if (ctx.cr6.eq) goto loc_82214554;
	// li r11,2609
	ctx.r11.s64 = 2609;
	// lwz r9,15312(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15312);
	// lwz r5,15308(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 15308);
	// lis r8,256
	ctx.r8.s64 = 16777216;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// rlwinm r11,r9,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// rlwinm r10,r5,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// addi r4,r10,512
	ctx.r4.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// clrlwi r11,r9,3
	ctx.r11.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// stwu r8,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r7.u32 = ea;
	// clrlwi r9,r5,3
	ctx.r9.u64 = ctx.r5.u32 & 0x1FFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r8,r4,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x1000;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// ori r5,r3,2607
	ctx.r5.u64 = ctx.r3.u64 | 2607;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// stwu r5,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r7.u32 = ea;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// lis r9,-16380
	ctx.r9.s64 = -1073479680;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// ori r9,r9,15360
	ctx.r9.u64 = ctx.r9.u64 | 15360;
	// li r8,2609
	ctx.r8.s64 = 2609;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// li r4,8
	ctx.r4.s64 = 8;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// stwu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r7.u32 = ea;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// stwu r8,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r7.u32 = ea;
	// stwu r27,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r7.u32 = ea;
	// stwu r5,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r7.u32 = ea;
	// stwu r4,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r7.u32 = ea;
loc_82214554:
	// rlwinm r11,r6,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r6,3
	ctx.r10.u64 = ctx.r6.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// stw r25,0(r24)
	REX_STORE_U32(r24.u32 + 0, r25.u32);
loc_82214570:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_8221E3A8) {
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
	ctx.lr = 0x8221E3B0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,56(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8221e3d8
	if (!ctx.cr6.gt) goto loc_8221E3D8;
	// bl 0x82215008
	ctx.lr = 0x8221E3D4;
	sub_82215008(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8221E3D8:
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r9,r26,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x100;
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// lis r6,-16383
	ctx.r6.s64 = -1073676288;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// ori r21,r8,24832
	r21.u64 = ctx.r8.u64 | 24832;
	// ori r27,r7,24576
	r27.u64 = ctx.r7.u64 | 24576;
	// ori r25,r6,21761
	r25.u64 = ctx.r6.u64 | 21761;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x8221e614
	if (ctx.cr6.eq) goto loc_8221E614;
	// lbz r10,11071(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 11071);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8221e5d4
	if (ctx.cr0.eq) goto loc_8221E5D4;
	// lbz r10,11068(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8221e42c
	if (ctx.cr0.eq) goto loc_8221E42C;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8221e4bc
	goto loc_8221E4BC;
loc_8221E42C:
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8221e4b4
	if (ctx.cr0.eq) goto loc_8221E4B4;
	// lwz r10,12816(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12816);
	// lwz r9,13104(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 13104);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8221e44c
	if (ctx.cr6.eq) goto loc_8221E44C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221e4b4
	if (!ctx.cr6.eq) goto loc_8221E4B4;
loc_8221E44C:
	// lwz r10,12820(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12820);
	// lwz r9,13108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 13108);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8221e464
	if (ctx.cr6.eq) goto loc_8221E464;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221e4b4
	if (!ctx.cr6.eq) goto loc_8221E4B4;
loc_8221E464:
	// lwz r10,12824(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12824);
	// lwz r9,13112(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 13112);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8221e47c
	if (ctx.cr6.eq) goto loc_8221E47C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221e4b4
	if (!ctx.cr6.eq) goto loc_8221E4B4;
loc_8221E47C:
	// lwz r10,12828(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12828);
	// lwz r9,13116(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 13116);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8221e494
	if (ctx.cr6.eq) goto loc_8221E494;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221e4b4
	if (!ctx.cr6.eq) goto loc_8221E4B4;
loc_8221E494:
	// lwz r10,12832(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12832);
	// lwz r9,13120(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 13120);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8221e4ac
	if (ctx.cr6.eq) goto loc_8221E4AC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221e4b4
	if (!ctx.cr6.eq) goto loc_8221E4B4;
loc_8221E4AC:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8221e4b8
	goto loc_8221E4B8;
loc_8221E4B4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8221E4B8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_8221E4BC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8221e5d4
	if (ctx.cr0.eq) goto loc_8221E5D4;
	// stwu r21,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r21.u32);
	ctx.r11.u32 = ea;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lwz r10,13124(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13124);
	// addic. r30,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	r30.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8221e574
	if (ctx.cr0.lt) goto loc_8221E574;
loc_8221E4E0:
	// addi r10,r30,3372
	ctx.r10.s64 = r30.s64 + 3372;
	// lwz r9,12284(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12284);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm. r10,r9,15,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r9,r8,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// rlwimi r28,r9,17,0,14
	r28.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0xFFFE0000) | (r28.u64 & 0xFFFFFFFF0001FFFF);
	// mr r29,r28
	r29.u64 = r28.u64;
	// beq 0x8221e51c
	if (ctx.cr0.eq) goto loc_8221E51C;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8221e520
	if (!ctx.cr6.eq) goto loc_8221E520;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8221e51c
	if (!ctx.cr6.eq) goto loc_8221E51C;
	// lbz r10,11071(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 11071);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8221e520
	if (!ctx.cr0.eq) goto loc_8221E520;
loc_8221E51C:
	// rlwinm r29,r28,0,0,30
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
loc_8221E520:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r11.u32 = ea;
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,8707
	ctx.r10.s64 = 8707;
	// stwu r25,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// ble cr6,0x8221e568
	if (!ctx.cr6.gt) goto loc_8221E568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x8221E564;
	sub_82215008(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8221E568:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x8221e4e0
	if (!ctx.cr0.lt) goto loc_8221E4E0;
	// b 0x8221e578
	goto loc_8221E578;
loc_8221E574:
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8221E578:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// beq cr6,0x8221e5b0
	if (ctx.cr6.eq) goto loc_8221E5B0;
	// lbz r10,11068(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8221e5b0
	if (ctx.cr0.eq) goto loc_8221E5B0;
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r11.u32 = ea;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r7,8707
	ctx.r7.s64 = 8707;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r25,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r11.u32 = ea;
loc_8221E5B0:
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r11.u32 = ea;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// lwz r10,13084(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13084);
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r21,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r21.u32);
	ctx.r11.u32 = ea;
	// lwz r10,13088(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13088);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// b 0x8221e60c
	goto loc_8221E60C;
loc_8221E5D4:
	// lwz r9,12284(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12284);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// rlwinm. r9,r9,0,12,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE0000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8221e5e8
	if (!ctx.cr0.eq) goto loc_8221E5E8;
	// rlwinm r10,r28,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
loc_8221E5E8:
	// li r9,8707
	ctx.r9.s64 = 8707;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, ctx.xer);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// beq cr6,0x8221e60c
	if (ctx.cr6.eq) goto loc_8221E60C;
	// lbz r10,11068(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8221e60c
	if (ctx.cr0.eq) goto loc_8221E60C;
	// mr r23,r28
	r23.u64 = r28.u64;
loc_8221E60C:
	// li r12,-257
	ctx.r12.s64 = -257;
	// and r26,r26,r12
	r26.u64 = r26.u64 & ctx.r12.u64;
loc_8221E614:
	// ld r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 40);
	// li r12,1
	ctx.r12.s64 = 1;
	// and r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 & r26.u64;
	// rldicr r12,r12,57,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x8221e654
	if (ctx.cr6.eq) goto loc_8221E654;
	// li r8,8192
	ctx.r8.s64 = 8192;
	// lwz r9,10368(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 10368);
	// li r12,-2
	ctx.r12.s64 = -2;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// rldicr r12,r12,57,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// and r26,r26,r12
	r26.u64 = r26.u64 & ctx.r12.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lwz r24,13552(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 13552);
	// rlwimi r24,r9,0,0,17
	r24.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFC000) | (r24.u64 & 0xFFFFFFFF00003FFF);
loc_8221E654:
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8221e688
	if (ctx.cr6.eq) goto loc_8221E688;
	// li r10,8452
	ctx.r10.s64 = 8452;
	// li r12,-2
	ctx.r12.s64 = -2;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r22,0
	r22.s64 = 0;
	// lwz r10,10460(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10460);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// and r26,r26,r12
	r26.u64 = r26.u64 & ctx.r12.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
loc_8221E688:
	// and r10,r22,r24
	ctx.r10.u64 = r22.u64 & r24.u64;
	// and r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 & r23.u64;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8221e724
	if (ctx.cr6.eq) goto loc_8221E724;
	// stwu r21,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r21.u32);
	ctx.r11.u32 = ea;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,5461
	ctx.r8.s64 = 357892096;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// ori r8,r8,21845
	ctx.r8.u64 = ctx.r8.u64 | 21845;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(r23.s32, -1, ctx.xer);
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// beq cr6,0x8221e6d8
	if (ctx.cr6.eq) goto loc_8221E6D8;
	// stwu r25,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r11.u32 = ea;
	// li r9,8707
	ctx.r9.s64 = 8707;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
loc_8221E6D8:
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(r24.s32, -1, ctx.xer);
	// beq cr6,0x8221e6f4
	if (ctx.cr6.eq) goto loc_8221E6F4;
	// stwu r25,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r11.u32 = ea;
	// li r9,8192
	ctx.r9.s64 = 8192;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r24,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r11.u32 = ea;
loc_8221E6F4:
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(r22.s32, -1, ctx.xer);
	// beq cr6,0x8221e70c
	if (ctx.cr6.eq) goto loc_8221E70C;
	// stwu r25,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r11.u32 = ea;
	// li r10,8452
	ctx.r10.s64 = 8452;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r22,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r22.u32);
	ctx.r11.u32 = ea;
loc_8221E70C:
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r11.u32 = ea;
	// lwz r10,13084(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13084);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r21,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r21.u32);
	ctx.r11.u32 = ea;
	// lwz r10,13088(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13088);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
loc_8221E724:
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_8222F7D0) {
	REX_FUNC_PROLOGUE();
	// lhz r11,14(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 14);
	// lwz r8,596(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 596);
	// addi r10,r11,172
	ctx.r10.s64 = ctx.r11.s64 + 172;
	// lwz r11,380(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 380);
	// rlwinm r9,r8,18,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x3F;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r10,r10,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// rlwinm r8,r8,12,26,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0x3F;
	// stw r11,380(r3)
	REX_STORE_U32(ctx.r3.u32 + 380, ctx.r11.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8222f80c
	if (!ctx.cr6.eq) goto loc_8222F80C;
	// lwz r9,384(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 384);
	// b 0x8222f810
	goto loc_8222F810;
loc_8222F80C:
	// lis r9,-16
	ctx.r9.s64 = -1048576;
loc_8222F810:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8222f828
	if (ctx.cr6.lt) goto loc_8222F828;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8222F828:
	// addi r10,r8,46
	ctx.r10.s64 = ctx.r8.s64 + 46;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// lwz r10,596(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 596);
	// rlwinm r11,r10,12,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3F;
	// rlwinm r9,r10,18,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r8,r11,r9
	ctx.r8.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwimi r10,r11,20,6,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F00000) | (ctx.r10.u64 & 0xFFFFFFFFFC0FFFFF);
	// rlwinm. r11,r10,0,6,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,596(r3)
	REX_STORE_U32(ctx.r3.u32 + 596, ctx.r10.u32);
	// bne 0x8222f87c
	if (!ctx.cr0.eq) goto loc_8222F87C;
	// lbz r11,608(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 608);
	// li r10,2048
	ctx.r10.s64 = 2048;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r10,380(r3)
	REX_STORE_U32(ctx.r3.u32 + 380, ctx.r10.u32);
	// stb r11,608(r3)
	REX_STORE_U8(ctx.r3.u32 + 608, ctx.r11.u8);
	// blr 
	return;
loc_8222F87C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,380(r3)
	REX_STORE_U32(ctx.r3.u32 + 380, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82234368) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r3,r11,-23900
	ctx.r3.s64 = ctx.r11.s64 + -23900;
	// b 0x822342e0
	sub_822342E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822344D8) {
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
	ctx.lr = 0x822344E0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// rlwinm. r11,r5,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r29,76
	r29.s64 = 76;
	// beq 0x82234510
	if (ctx.cr0.eq) goto loc_82234510;
	// li r29,80
	r29.s64 = 80;
loc_82234510:
	// addi r30,r6,7712
	r30.s64 = ctx.r6.s64 + 7712;
	// lis r4,5
	ctx.r4.s64 = 327680;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// ori r4,r4,32772
	ctx.r4.u64 = ctx.r4.u64 | 32772;
	// li r3,252
	ctx.r3.s64 = 252;
	// addi r31,r11,4096
	r31.s64 = ctx.r11.s64 + 4096;
	// bl 0x824d479c
	ctx.lr = 0x82234534;
	__imp__XMsgInProcessCall(ctx, base);
	// lwz r7,324(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// subf r31,r31,r24
	r31.u64 = r24.u64 - r31.u64;
	// lwz r6,144(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// add r8,r29,r28
	ctx.r8.u64 = r29.u64 + r28.u64;
	// lwz r10,348(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// subfic r11,r31,0
	ctx.xer.ca = r31.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r31.u64;
	// stw r22,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r22.u32);
	// rlwinm r9,r3,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// stw r23,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r23.u32);
	// stw r7,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// subfe r7,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r11,r30,r8
	ctx.r11.u64 = r30.u64 + ctx.r8.u64;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r29,r7,r11
	r29.u64 = ctx.r7.u64 & ctx.r11.u64;
	// and r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ctx.r6.u64;
	// li r7,4096
	ctx.r7.s64 = 4096;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// lis r5,-32163
	ctx.r5.s64 = -2107834368;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// addi r5,r5,-5864
	ctx.r5.s64 = ctx.r5.s64 + -5864;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82235790
	ctx.lr = 0x822345AC;
	sub_82235790(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822345cc
	if (ctx.cr0.lt) goto loc_822345CC;
	// lwz r11,332(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r10,340(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r9,356(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// stw r31,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r31.u32);
	// stw r28,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r28.u32);
loc_822345CC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82236C98) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,22432
	ctx.r3.s64 = ctx.r10.s64 + 22432;
	// bl 0x824d492c
	ctx.lr = 0x82236CCC;
	__imp__XexGetModuleHandle(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82236ce4
	if (ctx.cr0.lt) goto loc_82236CE4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824d42ec
	ctx.lr = 0x82236CE4;
	__imp__XexGetProcedureAddress(ctx, base);
loc_82236CE4:
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

DEFINE_REX_FUNC(sub_82237D58) {
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
	ctx.lr = 0x82237D60;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,244
	r27.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x824d438c
	ctx.lr = 0x82237D80;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r30,21
	ctx.r11.s64 = r30.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82237da0
	if (!ctx.cr6.eq) goto loc_82237DA0;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,87
	r31.u64 = r31.u64 | 87;
	// b 0x82237db0
	goto loc_82237DB0;
loc_82237DA0:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8223a2d0
	ctx.lr = 0x82237DAC;
	sub_8223A2D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82237DB0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824d437c
	ctx.lr = 0x82237DB8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82239018) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82239020;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,244
	r29.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x824d438c
	ctx.lr = 0x8223903C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82238300
	ctx.lr = 0x82239048;
	sub_82238300(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8223905c
	if (!ctx.cr0.eq) goto loc_8223905C;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,87
	r31.u64 = r31.u64 | 87;
	// b 0x82239068
	goto loc_82239068;
loc_8223905C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8223d2b0
	ctx.lr = 0x82239064;
	sub_8223D2B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82239068:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824d437c
	ctx.lr = 0x82239070;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8223A660) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8223A668;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// ori r31,r31,87
	r31.u64 = r31.u64 | 87;
	// bl 0x822399c0
	ctx.lr = 0x8223A684;
	sub_822399C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8223a6ac
	if (ctx.cr0.eq) goto loc_8223A6AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223A6A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8223A6AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8223B808) {
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
	ctx.lr = 0x8223B810;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// ori r4,r4,32773
	ctx.r4.u64 = ctx.r4.u64 | 32773;
	// li r28,0
	r28.s64 = 0;
	// bl 0x823cd118
	ctx.lr = 0x8223B830;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8223b85c
	if (!ctx.cr0.eq) goto loc_8223B85C;
loc_8223B838:
	// lis r28,-32761
	r28.s64 = -2147024896;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r28,r28,14
	r28.u64 = r28.u64 | 14;
	// bl 0x8223b720
	ctx.lr = 0x8223B848;
	sub_8223B720(ctx, base);
	// li r31,0
	r31.s64 = 0;
loc_8223B84C:
	// stw r31,0(r27)
	REX_STORE_U32(r27.u32 + 0, r31.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_8223B85C:
	// rlwinm r29,r30,3,0,28
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823cd118
	ctx.lr = 0x8223B870;
	sub_823CD118(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// beq 0x8223b838
	if (ctx.cr0.eq) goto loc_8223B838;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8223b84c
	if (ctx.cr6.eq) goto loc_8223B84C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8223B88C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223b8b4
	if (ctx.cr6.eq) goto loc_8223B8B4;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// b 0x8223b8b8
	goto loc_8223B8B8;
loc_8223B8B4:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8223B8B8:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bdnz 0x8223b88c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223B88C;
	// b 0x8223b84c
	goto loc_8223B84C;
}

DEFINE_REX_FUNC(sub_8223E3B8) {
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
	ctx.lr = 0x8223E3C0;
	// li r14,0
	r14.s64 = 0;
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// stw r5,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// stw r6,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stb r14,-160(r1)
	REX_STORE_U8(ctx.r1.u32 + -160, r14.u8);
	// ble cr6,0x8223f754
	if (!ctx.cr6.gt) goto loc_8223F754;
	// xori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 ^ 1;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// not r5,r6
	ctx.r5.u64 = ~ctx.r6.u64;
	// addi r19,r11,-22036
	r19.s64 = ctx.r11.s64 + -22036;
	// addi r15,r10,-22020
	r15.s64 = ctx.r10.s64 + -22020;
	// addi r18,r9,-22068
	r18.s64 = ctx.r9.s64 + -22068;
	// li r17,-1024
	r17.s64 = -1024;
	// li r16,128
	r16.s64 = 128;
	// li r4,512
	ctx.r4.s64 = 512;
	// b 0x8223e418
	goto loc_8223E418;
loc_8223E414:
	// lwz r8,28(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
loc_8223E418:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8223e440
	if (ctx.cr6.eq) goto loc_8223E440;
	// rlwinm r11,r14,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r14,2,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 2) & 0x4;
	// lbzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// sraw r9,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r9.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r24,r9,28
	r24.u64 = ctx.r9.u32 & 0xF;
	// b 0x8223e484
	goto loc_8223E484;
loc_8223E440:
	// rlwinm r11,r14,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 1) & 0xFFFFFFFE;
	// li r12,7880
	ctx.r12.s64 = 7880;
	// lhzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r9,r10,-7880
	ctx.r9.s64 = ctx.r10.s64 + -7880;
	// srawi r11,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 16;
	// not r8,r11
	ctx.r8.u64 = ~ctx.r11.u64;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// and r10,r8,r12
	ctx.r10.u64 = ctx.r8.u64 & ctx.r12.u64;
	// li r12,-7880
	ctx.r12.s64 = -7880;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r9,r10,7880
	ctx.r9.s64 = ctx.r10.s64 + 7880;
	// srawi r11,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 16;
	// and r8,r11,r12
	ctx.r8.u64 = ctx.r11.u64 & ctx.r12.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// or r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 | ctx.r8.u64;
	// extsh r24,r10
	r24.s64 = ctx.r10.s16;
loc_8223E484:
	// lhz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 8);
	// lhz r9,26(r7)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + 26);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// srawi r8,r10,15
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 15;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8223e4b0
	if (ctx.cr6.eq) goto loc_8223E4B0;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_8223E4B0:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.u64 = static_cast<uint64_t>(32) - ctx.r9.u64;
	// bne cr6,0x8223e4c8
	if (!ctx.cr6.eq) goto loc_8223E4C8;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x8223e4d0
	goto loc_8223E4D0;
loc_8223E4C8:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_8223E4D0:
	// srawi r31,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	r31.s64 = ctx.r11.s32 >> 10;
	// clrlwi r30,r11,26
	r30.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(r30.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r31,r31,31
	r31.u64 = r31.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// xor r9,r31,r8
	ctx.r9.u64 = r31.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x8223e50c
	if (ctx.cr6.gt) goto loc_8223E50C;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.u64 = static_cast<uint64_t>(26) - ctx.r11.u64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x8223e518
	goto loc_8223E518;
loc_8223E50C:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_8223E518:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r8,10(r7)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 10);
	// neg r31,r10
	r31.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lhz r30,28(r7)
	r30.u64 = REX_LOAD_U16(ctx.r7.u32 + 28);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// and r8,r31,r11
	ctx.r8.u64 = r31.u64 & ctx.r11.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// srawi r10,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 15;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// extsh r25,r11
	r25.s64 = ctx.r11.s16;
	// extsh r11,r30
	ctx.r11.s64 = r30.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// beq cr6,0x8223e560
	if (ctx.cr6.eq) goto loc_8223E560;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_8223E560:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.u64 = static_cast<uint64_t>(32) - ctx.r9.u64;
	// bne cr6,0x8223e578
	if (!ctx.cr6.eq) goto loc_8223E578;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x8223e580
	goto loc_8223E580;
loc_8223E578:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_8223E580:
	// srawi r31,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	r31.s64 = ctx.r11.s32 >> 10;
	// clrlwi r30,r11,26
	r30.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(r30.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r31,r31,31
	r31.u64 = r31.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// xor r9,r31,r8
	ctx.r9.u64 = r31.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x8223e5bc
	if (ctx.cr6.gt) goto loc_8223E5BC;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.u64 = static_cast<uint64_t>(26) - ctx.r11.u64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x8223e5c8
	goto loc_8223E5C8;
loc_8223E5BC:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_8223E5C8:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r8,12(r7)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 12);
	// neg r31,r10
	r31.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lhz r30,30(r7)
	r30.u64 = REX_LOAD_U16(ctx.r7.u32 + 30);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// and r8,r31,r11
	ctx.r8.u64 = r31.u64 & ctx.r11.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// srawi r10,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 15;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// extsh r27,r11
	r27.s64 = ctx.r11.s16;
	// extsh r11,r30
	ctx.r11.s64 = r30.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// beq cr6,0x8223e610
	if (ctx.cr6.eq) goto loc_8223E610;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_8223E610:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.u64 = static_cast<uint64_t>(32) - ctx.r9.u64;
	// bne cr6,0x8223e628
	if (!ctx.cr6.eq) goto loc_8223E628;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x8223e630
	goto loc_8223E630;
loc_8223E628:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_8223E630:
	// srawi r31,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	r31.s64 = ctx.r11.s32 >> 10;
	// clrlwi r30,r11,26
	r30.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(r30.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r31,r31,31
	r31.u64 = r31.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// xor r9,r31,r8
	ctx.r9.u64 = r31.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x8223e66c
	if (ctx.cr6.gt) goto loc_8223E66C;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.u64 = static_cast<uint64_t>(26) - ctx.r11.u64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x8223e678
	goto loc_8223E678;
loc_8223E66C:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_8223E678:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r8,14(r7)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 14);
	// neg r31,r10
	r31.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lhz r30,32(r7)
	r30.u64 = REX_LOAD_U16(ctx.r7.u32 + 32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// and r8,r31,r11
	ctx.r8.u64 = r31.u64 & ctx.r11.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// srawi r10,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 15;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// extsh r28,r11
	r28.s64 = ctx.r11.s16;
	// extsh r11,r30
	ctx.r11.s64 = r30.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// beq cr6,0x8223e6c0
	if (ctx.cr6.eq) goto loc_8223E6C0;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_8223E6C0:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.u64 = static_cast<uint64_t>(32) - ctx.r9.u64;
	// bne cr6,0x8223e6d8
	if (!ctx.cr6.eq) goto loc_8223E6D8;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x8223e6e0
	goto loc_8223E6E0;
loc_8223E6D8:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_8223E6E0:
	// srawi r31,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	r31.s64 = ctx.r11.s32 >> 10;
	// clrlwi r30,r11,26
	r30.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(r30.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r31,r31,31
	r31.u64 = r31.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// xor r9,r31,r8
	ctx.r9.u64 = r31.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x8223e71c
	if (ctx.cr6.gt) goto loc_8223E71C;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.u64 = static_cast<uint64_t>(26) - ctx.r11.u64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x8223e728
	goto loc_8223E728;
loc_8223E71C:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_8223E728:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r8,16(r7)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 16);
	// neg r31,r10
	r31.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lhz r30,34(r7)
	r30.u64 = REX_LOAD_U16(ctx.r7.u32 + 34);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// and r8,r31,r11
	ctx.r8.u64 = r31.u64 & ctx.r11.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// srawi r10,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 15;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// extsh r29,r11
	r29.s64 = ctx.r11.s16;
	// extsh r11,r30
	ctx.r11.s64 = r30.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// beq cr6,0x8223e770
	if (ctx.cr6.eq) goto loc_8223E770;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_8223E770:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.u64 = static_cast<uint64_t>(32) - ctx.r9.u64;
	// bne cr6,0x8223e788
	if (!ctx.cr6.eq) goto loc_8223E788;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x8223e790
	goto loc_8223E790;
loc_8223E788:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_8223E790:
	// srawi r31,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	r31.s64 = ctx.r11.s32 >> 10;
	// clrlwi r30,r11,26
	r30.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(r30.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r31,r31,31
	r31.u64 = r31.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// xor r9,r31,r8
	ctx.r9.u64 = r31.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x8223e7cc
	if (ctx.cr6.gt) goto loc_8223E7CC;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.u64 = static_cast<uint64_t>(26) - ctx.r11.u64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x8223e7d8
	goto loc_8223E7D8;
loc_8223E7CC:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_8223E7D8:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r8,18(r7)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 18);
	// neg r31,r10
	r31.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lhz r26,36(r7)
	r26.u64 = REX_LOAD_U16(ctx.r7.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// and r8,r31,r11
	ctx.r8.u64 = r31.u64 & ctx.r11.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// srawi r10,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 15;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// extsh r30,r11
	r30.s64 = ctx.r11.s16;
	// extsh r11,r26
	ctx.r11.s64 = r26.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// beq cr6,0x8223e820
	if (ctx.cr6.eq) goto loc_8223E820;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_8223E820:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r31,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	r31.u64 = static_cast<uint64_t>(32) - ctx.r9.u64;
	// bne cr6,0x8223e838
	if (!ctx.cr6.eq) goto loc_8223E838;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x8223e840
	goto loc_8223E840;
loc_8223E838:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r31
	temp.u32 = r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_8223E840:
	// srawi r26,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	r26.s64 = ctx.r11.s32 >> 10;
	// clrlwi r9,r11,26
	ctx.r9.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r26,r26,31
	r26.u64 = r26.u32 & 0x1;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// xor r11,r26,r8
	ctx.r11.u64 = r26.u64 ^ ctx.r8.u64;
	// rlwinm r9,r9,3,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r10,26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 26, ctx.xer);
	// bgt cr6,0x8223e87c
	if (ctx.cr6.gt) goto loc_8223E87C;
	// subfic r10,r10,26
	ctx.xer.ca = ctx.r10.u32 <= 26;
	ctx.r10.u64 = static_cast<uint64_t>(26) - ctx.r10.u64;
	// sraw r10,r9,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r10.s64 = ctx.r9.s32 >> temp.u32;
	// b 0x8223e888
	goto loc_8223E888;
loc_8223E87C:
	// addi r10,r10,-26
	ctx.r10.s64 = ctx.r10.s64 + -26;
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// clrlwi r10,r9,17
	ctx.r10.u64 = ctx.r9.u32 & 0x7FFF;
loc_8223E888:
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// lhz r23,0(r7)
	r23.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lhz r26,42(r7)
	r26.u64 = REX_LOAD_U16(ctx.r7.u32 + 42);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r30
	ctx.r9.s64 = r30.s16;
	// andc r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// extsh r8,r29
	ctx.r8.s64 = r29.s16;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// extsh r31,r28
	r31.s64 = r28.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r30,r27
	r30.s64 = r27.s16;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r11,r23
	ctx.r11.s64 = r23.s16;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// srawi r9,r11,15
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 15;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// clrlwi r28,r9,31
	r28.u64 = ctx.r9.u32 & 0x1;
	// add r8,r10,r25
	ctx.r8.u64 = ctx.r10.u64 + r25.u64;
	// extsh r27,r26
	r27.s64 = r26.s16;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// beq cr6,0x8223e8f4
	if (ctx.cr6.eq) goto loc_8223E8F4;
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// clrlwi r11,r10,19
	ctx.r11.u64 = ctx.r10.u32 & 0x1FFF;
loc_8223E8F4:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subfic r9,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r9.u64 = static_cast<uint64_t>(32) - ctx.r10.u64;
	// bne cr6,0x8223e90c
	if (!ctx.cr6.eq) goto loc_8223E90C;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x8223e914
	goto loc_8223E914;
loc_8223E90C:
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r11,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r10.s64 = ctx.r11.s32 >> temp.u32;
loc_8223E914:
	// srawi r8,r27,10
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3FF) != 0);
	ctx.r8.s64 = r27.s32 >> 10;
	// srawi r11,r27,6
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3F) != 0);
	ctx.r11.s64 = r27.s32 >> 6;
	// clrlwi r31,r27,26
	r31.u64 = r27.u32 & 0x3F;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// mullw r10,r31,r10
	ctx.r10.s64 = int64_t(r31.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// addi r8,r10,48
	ctx.r8.s64 = ctx.r10.s64 + 48;
	// xor r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 ^ r28.u64;
	// rlwinm r10,r8,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x8223e950
	if (ctx.cr6.gt) goto loc_8223E950;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.u64 = static_cast<uint64_t>(26) - ctx.r11.u64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x8223e95c
	goto loc_8223E95C;
loc_8223E950:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_8223E95C:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r8,2(r7)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// neg r31,r10
	r31.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lhz r29,44(r7)
	r29.u64 = REX_LOAD_U16(ctx.r7.u32 + 44);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// and r8,r31,r11
	ctx.r8.u64 = r31.u64 & ctx.r11.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// srawi r10,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 15;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// extsh r31,r11
	r31.s64 = ctx.r11.s16;
	// extsh r11,r29
	ctx.r11.s64 = r29.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// beq cr6,0x8223e9a4
	if (ctx.cr6.eq) goto loc_8223E9A4;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_8223E9A4:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.u64 = static_cast<uint64_t>(32) - ctx.r9.u64;
	// bne cr6,0x8223e9bc
	if (!ctx.cr6.eq) goto loc_8223E9BC;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x8223e9c4
	goto loc_8223E9C4;
loc_8223E9BC:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_8223E9C4:
	// srawi r29,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	r29.s64 = ctx.r11.s32 >> 10;
	// clrlwi r28,r11,26
	r28.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r10,r28,r10
	ctx.r10.s64 = int64_t(r28.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r29,r29,31
	r29.u64 = r29.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// xor r9,r29,r8
	ctx.r9.u64 = r29.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x8223ea00
	if (ctx.cr6.gt) goto loc_8223EA00;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.u64 = static_cast<uint64_t>(26) - ctx.r11.u64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x8223ea0c
	goto loc_8223EA0C;
loc_8223EA00:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_8223EA0C:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// neg r29,r10
	r29.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// sth r26,44(r7)
	REX_STORE_U16(ctx.r7.u32 + 44, r26.u16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r8,r31
	ctx.r8.s64 = r31.s16;
	// andc r31,r10,r11
	r31.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// and r11,r29,r11
	ctx.r11.u64 = r29.u64 & ctx.r11.u64;
	// or r11,r31,r11
	ctx.r11.u64 = r31.u64 | ctx.r11.u64;
	// extsh r31,r30
	r31.s64 = r30.s16;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// srawi r22,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r22.s64 = r31.s32 >> 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r8,256
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 256, ctx.xer);
	// srawi r23,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r23.s64 = ctx.r10.s32 >> 1;
	// bge cr6,0x8223ea60
	if (!ctx.cr6.lt) goto loc_8223EA60;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// b 0x8223ea64
	goto loc_8223EA64;
loc_8223EA60:
	// li r11,64
	ctx.r11.s64 = 64;
loc_8223EA64:
	// lhz r10,52(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 52);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lhz r27,50(r7)
	r27.u64 = REX_LOAD_U16(ctx.r7.u32 + 50);
	// subf r8,r27,r10
	ctx.r8.u64 = ctx.r10.u64 - r27.u64;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// srawi r11,r11,15
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 15;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// mullw r11,r8,r9
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// bge cr6,0x8223eaac
	if (!ctx.cr6.lt) goto loc_8223EAAC;
	// subf r9,r11,r27
	ctx.r9.u64 = r27.u64 - ctx.r11.u64;
	// extsh r29,r9
	r29.s64 = ctx.r9.s16;
	// b 0x8223eab4
	goto loc_8223EAB4;
loc_8223EAAC:
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// extsh r29,r11
	r29.s64 = ctx.r11.s16;
loc_8223EAB4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8223eac4
	if (ctx.cr6.eq) goto loc_8223EAC4;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// b 0x8223ed3c
	goto loc_8223ED3C;
loc_8223EAC4:
	// subf r9,r23,r24
	ctx.r9.u64 = r24.u64 - r23.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// srawi r11,r8,15
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 15;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// ori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 | 1;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r11,r10,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1;
	// rlwinm r9,r10,18,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223eb0c
	if (ctx.cr6.eq) goto loc_8223EB0C;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x8223ec54
	goto loc_8223EC54;
loc_8223EB0C:
	// rlwinm r9,r10,19,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223eb24
	if (ctx.cr6.eq) goto loc_8223EB24;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x8223ec54
	goto loc_8223EC54;
loc_8223EB24:
	// rlwinm r9,r10,20,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223eb3c
	if (ctx.cr6.eq) goto loc_8223EB3C;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x8223ec54
	goto loc_8223EC54;
loc_8223EB3C:
	// rlwinm r9,r10,21,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223eb54
	if (ctx.cr6.eq) goto loc_8223EB54;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x8223ec54
	goto loc_8223EC54;
loc_8223EB54:
	// rlwinm r9,r10,22,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223eb6c
	if (ctx.cr6.eq) goto loc_8223EB6C;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x8223ec54
	goto loc_8223EC54;
loc_8223EB6C:
	// rlwinm r9,r10,23,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223eb84
	if (ctx.cr6.eq) goto loc_8223EB84;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x8223ec54
	goto loc_8223EC54;
loc_8223EB84:
	// rlwinm r9,r10,24,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223eb9c
	if (ctx.cr6.eq) goto loc_8223EB9C;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x8223ec54
	goto loc_8223EC54;
loc_8223EB9C:
	// rlwinm r9,r10,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223ebb4
	if (ctx.cr6.eq) goto loc_8223EBB4;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8223ec54
	goto loc_8223EC54;
loc_8223EBB4:
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223ebcc
	if (ctx.cr6.eq) goto loc_8223EBCC;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8223ec54
	goto loc_8223EC54;
loc_8223EBCC:
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223ebe4
	if (ctx.cr6.eq) goto loc_8223EBE4;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8223ec54
	goto loc_8223EC54;
loc_8223EBE4:
	// rlwinm r9,r10,28,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223ebfc
	if (ctx.cr6.eq) goto loc_8223EBFC;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8223ec54
	goto loc_8223EC54;
loc_8223EBFC:
	// rlwinm r9,r10,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223ec14
	if (ctx.cr6.eq) goto loc_8223EC14;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8223ec54
	goto loc_8223EC54;
loc_8223EC14:
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223ec2c
	if (ctx.cr6.eq) goto loc_8223EC2C;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8223ec54
	goto loc_8223EC54;
loc_8223EC2C:
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223ec44
	if (ctx.cr6.eq) goto loc_8223EC44;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8223ec54
	goto loc_8223EC54;
loc_8223EC44:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// addic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r11,r11,r9
	temp.u8 = (~ctx.r11.u32 + ctx.r9.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8223EC54:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// subfic r11,r9,7
	ctx.xer.ca = ctx.r9.u32 <= 7;
	ctx.r11.u64 = static_cast<uint64_t>(7) - ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8223ec80
	if (!ctx.cr6.lt) goto loc_8223EC80;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r11,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x8223ec88
	goto loc_8223EC88;
loc_8223EC80:
	// slw r11,r31,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_8223EC88:
	// rlwinm r10,r9,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// extsh r9,r29
	ctx.r9.s64 = r29.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,-124
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -124, ctx.xer);
	// bge cr6,0x8223ecb8
	if (!ctx.cr6.lt) goto loc_8223ECB8;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x8223ed20
	goto loc_8223ED20;
loc_8223ECB8:
	// cmpwi cr6,r11,80
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 80, ctx.xer);
	// blt cr6,0x8223ed1c
	if (ctx.cr6.lt) goto loc_8223ED1C;
	// cmpwi cr6,r11,178
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 178, ctx.xer);
	// bge cr6,0x8223ecd0
	if (!ctx.cr6.lt) goto loc_8223ECD0;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8223ed20
	goto loc_8223ED20;
loc_8223ECD0:
	// cmpwi cr6,r11,246
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 246, ctx.xer);
	// bge cr6,0x8223ece0
	if (!ctx.cr6.lt) goto loc_8223ECE0;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8223ed20
	goto loc_8223ED20;
loc_8223ECE0:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x8223ecf0
	if (!ctx.cr6.lt) goto loc_8223ECF0;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8223ed20
	goto loc_8223ED20;
loc_8223ECF0:
	// cmpwi cr6,r11,349
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 349, ctx.xer);
	// bge cr6,0x8223ed00
	if (!ctx.cr6.lt) goto loc_8223ED00;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8223ed20
	goto loc_8223ED20;
loc_8223ED00:
	// cmpwi cr6,r11,400
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 400, ctx.xer);
	// bge cr6,0x8223ed10
	if (!ctx.cr6.lt) goto loc_8223ED10;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8223ed20
	goto loc_8223ED20;
loc_8223ED10:
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// li r11,7
	ctx.r11.s64 = 7;
	// blt cr6,0x8223ed20
	if (ctx.cr6.lt) goto loc_8223ED20;
loc_8223ED1C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8223ED20:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x8223ed3c
	if (!ctx.cr6.lt) goto loc_8223ED3C;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// beq cr6,0x8223ed3c
	if (ctx.cr6.eq) goto loc_8223ED3C;
	// not r11,r10
	ctx.r11.u64 = ~ctx.r10.u64;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
loc_8223ED3C:
	// extsh r26,r11
	r26.s64 = ctx.r11.s16;
	// srawi. r25,r26,3
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x7) != 0);
	r25.s64 = r26.s32 >> 3;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq 0x8223ed50
	if (ctx.cr0.eq) goto loc_8223ED50;
	// xori r11,r26,15
	ctx.r11.u64 = r26.u64 ^ 15;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_8223ED50:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r29
	ctx.r10.s64 = r29.s16;
	// rlwinm r21,r11,1,0,30
	r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// lhzx r11,r21,r18
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + r18.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r11,0,21,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x780;
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srawi r11,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 7;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8223eda4
	if (!ctx.cr6.lt) goto loc_8223EDA4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r8,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r8.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x8223edb0
	goto loc_8223EDB0;
loc_8223EDA4:
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// slw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
loc_8223EDB0:
	// rlwinm r31,r27,0,23,27
	r31.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x1F0;
	// extsh r11,r27
	ctx.r11.s64 = r27.s16;
	// rlwinm r10,r9,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// srawi r11,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 9;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// addi r31,r10,-1
	r31.s64 = ctx.r10.s64 + -1;
	// srawi r10,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 4;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// and r30,r31,r8
	r30.u64 = r31.u64 & ctx.r8.u64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8223edf4
	if (!ctx.cr6.lt) goto loc_8223EDF4;
	// neg r9,r11
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// sraw r10,r8,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r10.s64 = ctx.r8.s32 >> temp.u32;
	// b 0x8223ee00
	goto loc_8223EE00;
loc_8223EDF4:
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
loc_8223EE00:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// li r11,15872
	ctx.r11.s64 = 15872;
	// bgt cr6,0x8223ee10
	if (ctx.cr6.gt) goto loc_8223EE10;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8223EE10:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r28,r30
	r28.s64 = r30.s16;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x8223ee40
	if (!ctx.cr6.gt) goto loc_8223EE40;
	// lhz r11,46(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 46);
	// li r24,-1
	r24.s64 = -1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8223ee44
	if (ctx.cr6.eq) goto loc_8223EE44;
loc_8223EE40:
	// li r24,0
	r24.s64 = 0;
loc_8223EE44:
	// lhzx r11,r21,r15
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + r15.u32);
	// extsh r20,r29
	r20.s64 = r29.s16;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r8,r20,r9
	ctx.r8.u64 = ctx.r9.u64 - r20.u64;
	// srawi r11,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 5;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + r20.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,544
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 544, ctx.xer);
	// bge cr6,0x8223ee78
	if (!ctx.cr6.lt) goto loc_8223EE78;
	// li r11,544
	ctx.r11.s64 = 544;
	// b 0x8223ee84
	goto loc_8223EE84;
loc_8223EE78:
	// cmpwi cr6,r10,5120
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5120, ctx.xer);
	// blt cr6,0x8223ee84
	if (ctx.cr6.lt) goto loc_8223EE84;
	// li r11,5120
	ctx.r11.s64 = 5120;
loc_8223EE84:
	// lhz r10,48(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 48);
	// extsh r9,r27
	ctx.r9.s64 = r27.s16;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// sth r11,52(r7)
	REX_STORE_U16(ctx.r7.u32 + 52, ctx.r11.u16);
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rlwinm r11,r30,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 17) & 0x1;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r29,r28,18,31,31
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 18) & 0x1;
	// neg r8,r8
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// xor r29,r29,r11
	r29.u64 = r29.u64 ^ ctx.r11.u64;
	// srawi r8,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 6;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r9,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 6;
	// clrlwi r8,r10,26
	ctx.r8.u64 = ctx.r10.u32 & 0x3F;
	// sth r9,50(r7)
	REX_STORE_U16(ctx.r7.u32 + 50, ctx.r9.u16);
	// sth r8,48(r7)
	REX_STORE_U16(ctx.r7.u32 + 48, ctx.r8.u16);
	// beq cr6,0x8223eee4
	if (ctx.cr6.eq) goto loc_8223EEE4;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x8223f02c
	goto loc_8223F02C;
loc_8223EEE4:
	// rlwinm r10,r28,19,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 19) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223eefc
	if (ctx.cr6.eq) goto loc_8223EEFC;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x8223f02c
	goto loc_8223F02C;
loc_8223EEFC:
	// rlwinm r10,r28,20,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 20) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223ef14
	if (ctx.cr6.eq) goto loc_8223EF14;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x8223f02c
	goto loc_8223F02C;
loc_8223EF14:
	// rlwinm r10,r28,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 21) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223ef2c
	if (ctx.cr6.eq) goto loc_8223EF2C;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x8223f02c
	goto loc_8223F02C;
loc_8223EF2C:
	// rlwinm r10,r28,22,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 22) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223ef44
	if (ctx.cr6.eq) goto loc_8223EF44;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x8223f02c
	goto loc_8223F02C;
loc_8223EF44:
	// rlwinm r10,r28,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 23) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223ef5c
	if (ctx.cr6.eq) goto loc_8223EF5C;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x8223f02c
	goto loc_8223F02C;
loc_8223EF5C:
	// rlwinm r10,r28,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 24) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223ef74
	if (ctx.cr6.eq) goto loc_8223EF74;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x8223f02c
	goto loc_8223F02C;
loc_8223EF74:
	// rlwinm r10,r28,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 25) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223ef8c
	if (ctx.cr6.eq) goto loc_8223EF8C;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8223f02c
	goto loc_8223F02C;
loc_8223EF8C:
	// rlwinm r10,r28,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 26) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223efa4
	if (ctx.cr6.eq) goto loc_8223EFA4;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8223f02c
	goto loc_8223F02C;
loc_8223EFA4:
	// rlwinm r10,r28,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 27) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223efbc
	if (ctx.cr6.eq) goto loc_8223EFBC;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8223f02c
	goto loc_8223F02C;
loc_8223EFBC:
	// rlwinm r10,r28,28,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 28) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223efd4
	if (ctx.cr6.eq) goto loc_8223EFD4;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8223f02c
	goto loc_8223F02C;
loc_8223EFD4:
	// rlwinm r10,r28,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 29) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223efec
	if (ctx.cr6.eq) goto loc_8223EFEC;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8223f02c
	goto loc_8223F02C;
loc_8223EFEC:
	// rlwinm r10,r28,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 30) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223f004
	if (ctx.cr6.eq) goto loc_8223F004;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8223f02c
	goto loc_8223F02C;
loc_8223F004:
	// rlwinm r10,r28,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223f01c
	if (ctx.cr6.eq) goto loc_8223F01C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8223f02c
	goto loc_8223F02C;
loc_8223F01C:
	// clrlwi r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r11,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8223F02C:
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// subfic r11,r8,6
	ctx.xer.ca = ctx.r8.u32 <= 6;
	ctx.r11.u64 = static_cast<uint64_t>(6) - ctx.r8.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8223f054
	if (!ctx.cr6.lt) goto loc_8223F054;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// extsh r10,r30
	ctx.r10.s64 = r30.s16;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// sraw r11,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x8223f05c
	goto loc_8223F05C;
loc_8223F054:
	// slw r11,r28,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_8223F05C:
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// beq cr6,0x8223f084
	if (ctx.cr6.eq) goto loc_8223F084;
	// subf r11,r28,r22
	ctx.r11.u64 = r22.u64 - r28.u64;
	// subf r31,r28,r23
	r31.u64 = r23.u64 - r28.u64;
	// extsh r27,r11
	r27.s64 = ctx.r11.s16;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// extsh r11,r31
	ctx.r11.s64 = r31.s16;
	// b 0x8223f098
	goto loc_8223F098;
loc_8223F084:
	// add r31,r22,r28
	r31.u64 = r22.u64 + r28.u64;
	// add r11,r23,r28
	ctx.r11.u64 = r23.u64 + r28.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// extsh r27,r31
	r27.s64 = r31.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_8223F098:
	// extsh r30,r11
	r30.s64 = ctx.r11.s16;
	// extsh r25,r11
	r25.s64 = ctx.r11.s16;
	// addi r11,r30,-8191
	ctx.r11.s64 = r30.s64 + -8191;
	// extsh r29,r10
	r29.s64 = ctx.r10.s16;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// extsh r31,r9
	r31.s64 = ctx.r9.s16;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// and r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 & r30.u64;
	// clrlwi r11,r10,19
	ctx.r11.u64 = ctx.r10.u32 & 0x1FFF;
	// rlwinm r8,r8,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// or r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 | ctx.r11.u64;
	// and r26,r5,r26
	r26.u64 = ctx.r5.u64 & r26.u64;
	// addi r9,r10,8192
	ctx.r9.s64 = ctx.r10.s64 + 8192;
	// srawi r11,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 16;
	// srawi r9,r25,15
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = r25.s32 >> 15;
	// andc r25,r10,r11
	r25.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// rlwinm r11,r11,0,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFE000;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + r30.u64;
	// or r11,r25,r11
	ctx.r11.u64 = r25.u64 | ctx.r11.u64;
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// add r10,r8,r31
	ctx.r10.u64 = ctx.r8.u64 + r31.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// and r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 & ctx.r6.u64;
	// rlwinm r31,r9,18,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x1;
	// rlwinm r11,r9,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1;
	// add r25,r10,r29
	r25.u64 = ctx.r10.u64 + r29.u64;
	// xor r23,r31,r11
	r23.u64 = r31.u64 ^ ctx.r11.u64;
	// or r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 | r26.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// extsh r31,r25
	r31.s64 = r25.s16;
	// extsh r26,r8
	r26.s64 = ctx.r8.s16;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8223f128
	if (ctx.cr6.eq) goto loc_8223F128;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x8223f270
	goto loc_8223F270;
loc_8223F128:
	// rlwinm r8,r10,19,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8223f140
	if (ctx.cr6.eq) goto loc_8223F140;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x8223f270
	goto loc_8223F270;
loc_8223F140:
	// rlwinm r8,r10,20,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8223f158
	if (ctx.cr6.eq) goto loc_8223F158;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x8223f270
	goto loc_8223F270;
loc_8223F158:
	// rlwinm r8,r10,21,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8223f170
	if (ctx.cr6.eq) goto loc_8223F170;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x8223f270
	goto loc_8223F270;
loc_8223F170:
	// rlwinm r8,r10,22,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8223f188
	if (ctx.cr6.eq) goto loc_8223F188;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x8223f270
	goto loc_8223F270;
loc_8223F188:
	// rlwinm r8,r10,23,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8223f1a0
	if (ctx.cr6.eq) goto loc_8223F1A0;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x8223f270
	goto loc_8223F270;
loc_8223F1A0:
	// rlwinm r8,r10,24,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8223f1b8
	if (ctx.cr6.eq) goto loc_8223F1B8;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x8223f270
	goto loc_8223F270;
loc_8223F1B8:
	// rlwinm r8,r10,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8223f1d0
	if (ctx.cr6.eq) goto loc_8223F1D0;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8223f270
	goto loc_8223F270;
loc_8223F1D0:
	// rlwinm r8,r10,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8223f1e8
	if (ctx.cr6.eq) goto loc_8223F1E8;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8223f270
	goto loc_8223F270;
loc_8223F1E8:
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8223f200
	if (ctx.cr6.eq) goto loc_8223F200;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8223f270
	goto loc_8223F270;
loc_8223F200:
	// rlwinm r8,r10,28,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8223f218
	if (ctx.cr6.eq) goto loc_8223F218;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8223f270
	goto loc_8223F270;
loc_8223F218:
	// rlwinm r8,r10,29,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8223f230
	if (ctx.cr6.eq) goto loc_8223F230;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8223f270
	goto loc_8223F270;
loc_8223F230:
	// rlwinm r8,r10,30,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8223f248
	if (ctx.cr6.eq) goto loc_8223F248;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8223f270
	goto loc_8223F270;
loc_8223F248:
	// rlwinm r8,r10,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8223f260
	if (ctx.cr6.eq) goto loc_8223F260;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8223f270
	goto loc_8223F270;
loc_8223F260:
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// xor r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8223F270:
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// subfic r11,r8,6
	ctx.xer.ca = ctx.r8.u32 <= 6;
	ctx.r11.u64 = static_cast<uint64_t>(6) - ctx.r8.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8223f298
	if (!ctx.cr6.lt) goto loc_8223F298;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// sraw r11,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x8223f2a0
	goto loc_8223F2A0;
loc_8223F298:
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_8223F2A0:
	// ori r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 | 32;
	// rlwinm r10,r8,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// srawi r8,r30,31
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = r30.s32 >> 31;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// and r10,r8,r17
	ctx.r10.u64 = ctx.r8.u64 & r17.u64;
	// subfic r9,r28,0
	ctx.xer.ca = r28.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - r28.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r10,r24
	ctx.r10.s64 = r24.s16;
	// sth r11,42(r7)
	REX_STORE_U16(ctx.r7.u32 + 42, ctx.r11.u16);
	// subfe r9,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lhz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 8);
	// not r8,r10
	ctx.r8.u64 = ~ctx.r10.u64;
	// lhz r10,26(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 26);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// xor r25,r10,r29
	r25.u64 = ctx.r10.u64 ^ r29.u64;
	// and r10,r9,r16
	ctx.r10.u64 = ctx.r9.u64 & r16.u64;
	// extsh r30,r11
	r30.s64 = ctx.r11.s16;
	// extsh r28,r8
	r28.s64 = ctx.r8.s16;
	// srawi r9,r30,8
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFF) != 0);
	ctx.r9.s64 = r30.s32 >> 8;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// bge cr6,0x8223f30c
	if (!ctx.cr6.lt) goto loc_8223F30C;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// b 0x8223f314
	goto loc_8223F314;
loc_8223F30C:
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
loc_8223F314:
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r25,28(r7)
	r25.u64 = REX_LOAD_U16(ctx.r7.u32 + 28);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r11,10(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 10);
	// extsh r30,r28
	r30.s64 = r28.s16;
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// extsh r9,r25
	ctx.r9.s64 = r25.s16;
	// and r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 & r30.u64;
	// xor r24,r9,r29
	r24.u64 = ctx.r9.u64 ^ r29.u64;
	// extsh r25,r11
	r25.s64 = ctx.r11.s16;
	// sth r8,8(r7)
	REX_STORE_U16(ctx.r7.u32 + 8, ctx.r8.u16);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// srawi r9,r25,8
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0xFF) != 0);
	ctx.r9.s64 = r25.s32 >> 8;
	// bge cr6,0x8223f358
	if (!ctx.cr6.lt) goto loc_8223F358;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// b 0x8223f360
	goto loc_8223F360;
loc_8223F358:
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
loc_8223F360:
	// lhz r8,30(r7)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 30);
	// extsh r25,r9
	r25.s64 = ctx.r9.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhz r9,12(r7)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + 12);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - r25.u64;
	// extsh r25,r9
	r25.s64 = ctx.r9.s16;
	// and r24,r11,r30
	r24.u64 = ctx.r11.u64 & r30.u64;
	// xor r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 ^ r29.u64;
	// srawi r11,r25,8
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0xFF) != 0);
	ctx.r11.s64 = r25.s32 >> 8;
	// sth r24,10(r7)
	REX_STORE_U16(ctx.r7.u32 + 10, r24.u16);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x8223f3a0
	if (!ctx.cr6.lt) goto loc_8223F3A0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x8223f3a8
	goto loc_8223F3A8;
loc_8223F3A0:
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
loc_8223F3A8:
	// lhz r25,32(r7)
	r25.u64 = REX_LOAD_U16(ctx.r7.u32 + 32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lhz r9,14(r7)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + 14);
	// extsh r25,r25
	r25.s64 = r25.s16;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// and r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 & r30.u64;
	// xor r25,r25,r29
	r25.u64 = r25.u64 ^ r29.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// sth r8,12(r7)
	REX_STORE_U16(ctx.r7.u32 + 12, ctx.r8.u16);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bge cr6,0x8223f3e8
	if (!ctx.cr6.lt) goto loc_8223F3E8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x8223f3f0
	goto loc_8223F3F0;
loc_8223F3E8:
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
loc_8223F3F0:
	// lhz r25,34(r7)
	r25.u64 = REX_LOAD_U16(ctx.r7.u32 + 34);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lhz r9,16(r7)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + 16);
	// extsh r25,r25
	r25.s64 = r25.s16;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// and r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 & r30.u64;
	// xor r25,r25,r29
	r25.u64 = r25.u64 ^ r29.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// sth r8,14(r7)
	REX_STORE_U16(ctx.r7.u32 + 14, ctx.r8.u16);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bge cr6,0x8223f430
	if (!ctx.cr6.lt) goto loc_8223F430;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x8223f438
	goto loc_8223F438;
loc_8223F430:
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
loc_8223F438:
	// lhz r25,36(r7)
	r25.u64 = REX_LOAD_U16(ctx.r7.u32 + 36);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lhz r9,18(r7)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + 18);
	// extsh r25,r25
	r25.s64 = r25.s16;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// and r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 & r30.u64;
	// xor r29,r25,r29
	r29.u64 = r25.u64 ^ r29.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// sth r8,16(r7)
	REX_STORE_U16(ctx.r7.u32 + 16, ctx.r8.u16);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge cr6,0x8223f478
	if (!ctx.cr6.lt) goto loc_8223F478;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x8223f480
	goto loc_8223F480;
loc_8223F478:
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
loc_8223F480:
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r27
	ctx.r8.s64 = r27.s16;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// and r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 & r30.u64;
	// sth r9,18(r7)
	REX_STORE_U16(ctx.r7.u32 + 18, ctx.r9.u16);
	// lhz r9,26(r7)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + 26);
	// lhz r10,38(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 38);
	// lhz r29,28(r7)
	r29.u64 = REX_LOAD_U16(ctx.r7.u32 + 28);
	// lhz r25,30(r7)
	r25.u64 = REX_LOAD_U16(ctx.r7.u32 + 30);
	// lhz r24,32(r7)
	r24.u64 = REX_LOAD_U16(ctx.r7.u32 + 32);
	// lhz r23,34(r7)
	r23.u64 = REX_LOAD_U16(ctx.r7.u32 + 34);
	// lhz r22,40(r7)
	r22.u64 = REX_LOAD_U16(ctx.r7.u32 + 40);
	// xor r11,r22,r27
	ctx.r11.u64 = r22.u64 ^ r27.u64;
	// sth r9,28(r7)
	REX_STORE_U16(ctx.r7.u32 + 28, ctx.r9.u16);
	// xor r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r10,40(r7)
	REX_STORE_U16(ctx.r7.u32 + 40, ctx.r10.u16);
	// sth r29,30(r7)
	REX_STORE_U16(ctx.r7.u32 + 30, r29.u16);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// sth r25,32(r7)
	REX_STORE_U16(ctx.r7.u32 + 32, r25.u16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r24,34(r7)
	REX_STORE_U16(ctx.r7.u32 + 34, r24.u16);
	// li r10,-4096
	ctx.r10.s64 = -4096;
	// sth r23,36(r7)
	REX_STORE_U16(ctx.r7.u32 + 36, r23.u16);
	// sth r31,26(r7)
	REX_STORE_U16(ctx.r7.u32 + 26, r31.u16);
	// sth r27,38(r7)
	REX_STORE_U16(ctx.r7.u32 + 38, r27.u16);
	// blt cr6,0x8223f4f4
	if (ctx.cr6.lt) goto loc_8223F4F4;
	// li r10,4096
	ctx.r10.s64 = 4096;
loc_8223F4F4:
	// lhz r29,0(r7)
	r29.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// extsh r11,r29
	ctx.r11.s64 = r29.s16;
	// cmpwi cr6,r11,-8191
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8191, ctx.xer);
	// li r11,-8191
	ctx.r11.s64 = -8191;
	// blt cr6,0x8223f50c
	if (ctx.cr6.lt) goto loc_8223F50C;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8223F50C:
	// extsh r31,r11
	r31.s64 = ctx.r11.s16;
	// cmpwi cr6,r31,8191
	ctx.cr6.compare<int32_t>(r31.s32, 8191, ctx.xer);
	// blt cr6,0x8223f51c
	if (ctx.cr6.lt) goto loc_8223F51C;
	// li r11,8191
	ctx.r11.s64 = 8191;
loc_8223F51C:
	// extsh r31,r9
	r31.s64 = ctx.r9.s16;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge cr6,0x8223f534
	if (!ctx.cr6.lt) goto loc_8223F534;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x8223f53c
	goto loc_8223F53C;
loc_8223F534:
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
loc_8223F53C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8223f550
	if (!ctx.cr6.eq) goto loc_8223F550;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8223f55c
	goto loc_8223F55C;
loc_8223F550:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// li r9,192
	ctx.r9.s64 = 192;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
loc_8223F55C:
	// lhz r10,2(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// srawi r8,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 7;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,-12288
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -12288, ctx.xer);
	// bge cr6,0x8223f580
	if (!ctx.cr6.lt) goto loc_8223F580;
	// li r11,-12288
	ctx.r11.s64 = -12288;
loc_8223F580:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,12288
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12288, ctx.xer);
	// blt cr6,0x8223f590
	if (ctx.cr6.lt) goto loc_8223F590;
	// li r11,12288
	ctx.r11.s64 = 12288;
loc_8223F590:
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// extsh r11,r29
	ctx.r11.s64 = r29.s16;
	// and r10,r30,r8
	ctx.r10.u64 = r30.u64 & ctx.r8.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// sth r10,2(r7)
	REX_STORE_U16(ctx.r7.u32 + 2, ctx.r10.u16);
	// bge cr6,0x8223f5b8
	if (!ctx.cr6.lt) goto loc_8223F5B8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x8223f5c0
	goto loc_8223F5C0;
loc_8223F5B8:
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
loc_8223F5C0:
	// subfic r10,r8,15360
	ctx.xer.ca = ctx.r8.u32 <= 15360;
	ctx.r10.u64 = static_cast<uint64_t>(15360) - ctx.r8.u64;
	// subf r9,r11,r29
	ctx.r9.u64 = r29.u64 - ctx.r11.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// neg r29,r10
	r29.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// extsh r9,r29
	ctx.r9.s64 = r29.s16;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8223f5f0
	if (!ctx.cr6.lt) goto loc_8223F5F0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8223F5F0:
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r31.s32, ctx.xer);
	// bge cr6,0x8223f600
	if (!ctx.cr6.lt) goto loc_8223F600;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8223F600:
	// li r11,-11776
	ctx.r11.s64 = -11776;
	// lhz r9,22(r7)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + 22);
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// lhz r10,20(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 20);
	// subfc r29,r11,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r11.u32;
	r29.u64 = ctx.r8.u64 - ctx.r11.u64;
	// eqv r11,r11,r8
	ctx.r11.u64 = ~(ctx.r11.u64 ^ ctx.r8.u64);
	// and r8,r31,r30
	ctx.r8.u64 = r31.u64 & r30.u64;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// sth r8,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r8.u16);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// and r29,r8,r30
	r29.u64 = ctx.r8.u64 & r30.u64;
	// sth r29,46(r7)
	REX_STORE_U16(ctx.r7.u32 + 46, r29.u16);
	// lhzx r29,r21,r19
	r29.u64 = REX_LOAD_U16(r21.u32 + r19.u32);
	// extsh r29,r29
	r29.s64 = r29.s16;
	// subf r31,r9,r29
	r31.u64 = r29.u64 - ctx.r9.u64;
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// subf r29,r10,r29
	r29.u64 = r29.u64 - ctx.r10.u64;
	// srawi r11,r31,5
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	ctx.r11.s64 = r31.s32 >> 5;
	// extsh r31,r29
	r31.s64 = r29.s16;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r9,r31,7
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7F) != 0);
	ctx.r9.s64 = r31.s32 >> 7;
	// extsh r31,r11
	r31.s64 = ctx.r11.s16;
	// sth r11,22(r7)
	REX_STORE_U16(ctx.r7.u32 + 22, ctx.r11.u16);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// sth r11,20(r7)
	REX_STORE_U16(ctx.r7.u32 + 20, ctx.r11.u16);
	// rlwinm r11,r11,29,19,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFF;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// srawi r11,r11,15
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 15;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8223f6ac
	if (ctx.cr6.lt) goto loc_8223F6AC;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x8223f6c8
	goto loc_8223F6C8;
loc_8223F6AC:
	// cmpwi cr6,r20,1536
	ctx.cr6.compare<int32_t>(r20.s32, 1536, ctx.xer);
	// bge cr6,0x8223f6bc
	if (!ctx.cr6.lt) goto loc_8223F6BC;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x8223f6c8
	goto loc_8223F6C8;
loc_8223F6BC:
	// subfic r11,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r8.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 & ctx.r4.u64;
loc_8223F6C8:
	// lhz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// not r9,r30
	ctx.r9.u64 = ~r30.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm r9,r9,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// and r11,r8,r28
	ctx.r11.u64 = ctx.r8.u64 & r28.u64;
	// or r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 | ctx.r9.u64;
	// sth r10,4(r7)
	REX_STORE_U16(ctx.r7.u32 + 4, ctx.r10.u16);
	// beq cr6,0x8223f710
	if (ctx.cr6.eq) goto loc_8223F710;
	// lwz r10,36(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// extsh r11,r26
	ctx.r11.s64 = r26.s16;
	// rlwinm r9,r14,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// sthx r8,r9,r10
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u16);
	// b 0x8223f744
	goto loc_8223F744;
loc_8223F710:
	// clrlwi r11,r14,31
	ctx.r11.u64 = r14.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223f728
	if (!ctx.cr6.eq) goto loc_8223F728;
	// clrlwi r11,r26,28
	ctx.r11.u64 = r26.u32 & 0xF;
	// stb r11,-160(r1)
	REX_STORE_U8(ctx.r1.u32 + -160, ctx.r11.u8);
	// b 0x8223f744
	goto loc_8223F744;
loc_8223F728:
	// extsh r10,r26
	ctx.r10.s64 = r26.s16;
	// lbz r11,-160(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + -160);
	// lwz r9,36(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// rlwinm r8,r14,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stbx r11,r8,r9
	REX_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u8);
loc_8223F744:
	// lwz r11,44(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// cmpw cr6,r14,r11
	ctx.cr6.compare<int32_t>(r14.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8223e414
	if (ctx.cr6.lt) goto loc_8223E414;
loc_8223F754:
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_822979C0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82297a48
	if (!ctx.cr6.gt) goto loc_82297A48;
	// cmpwi cr6,r4,64
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 64, ctx.xer);
	// li r30,64
	r30.s64 = 64;
	// blt cr6,0x822979fc
	if (ctx.cr6.lt) goto loc_822979FC;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_822979FC:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82255b88
	ctx.lr = 0x82297A0C;
	sub_82255B88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82297a1c
	if (!ctx.cr0.eq) goto loc_82297A1C;
loc_82297A14:
	// li r3,-8
	ctx.r3.s64 = -8;
	// b 0x82297a4c
	goto loc_82297A4C;
loc_82297A1C:
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x82255b88
	ctx.lr = 0x82297A30;
	sub_82255B88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82297a14
	if (ctx.cr0.eq) goto loc_82297A14;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_82297A48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82297A4C:
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

DEFINE_REX_FUNC(sub_8229CA18) {
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
	ctx.lr = 0x8229CA20;
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r10,540(r1)
	REX_STORE_U32(ctx.r1.u32 + 540, ctx.r10.u32);
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// li r27,0
	r27.s64 = 0;
	// stw r5,500(r1)
	REX_STORE_U32(ctx.r1.u32 + 500, ctx.r5.u32);
	// stw r6,508(r1)
	REX_STORE_U32(ctx.r1.u32 + 508, ctx.r6.u32);
	// addi r31,r3,-4
	r31.s64 = ctx.r3.s64 + -4;
	// stw r7,516(r1)
	REX_STORE_U32(ctx.r1.u32 + 516, ctx.r7.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r8,524(r1)
	REX_STORE_U32(ctx.r1.u32 + 524, ctx.r8.u32);
	// lwz r10,-2144(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -2144);
	// stw r27,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r27.u32);
	// stw r27,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r27.u32);
	// stw r27,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, r27.u32);
	// stw r27,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, r27.u32);
	// stw r27,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r27.u32);
	// stw r10,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r10.u32);
	// stw r27,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, r27.u32);
	// stw r27,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, r27.u32);
	// stw r27,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, r27.u32);
	// stw r27,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, r27.u32);
	// stw r27,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, r27.u32);
	// stw r27,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, r27.u32);
	// stw r27,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, r27.u32);
	// stw r27,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r27.u32);
	// stw r27,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, r27.u32);
	// stw r27,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, r27.u32);
	// stw r27,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, r27.u32);
loc_8229CA90:
	// lwzu r29,4(r31)
	ea = 4 + r31.u32;
	r29.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// addi r30,r1,176
	r30.s64 = ctx.r1.s64 + 176;
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
	// bne 0x8229ca90
	if (!ctx.cr0.eq) goto loc_8229CA90;
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8229cad4
	if (!ctx.cr6.eq) goto loc_8229CAD4;
	// stw r27,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, r27.u32);
	// lwz r3,304(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// stw r27,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r27.u32);
	// bl 0x822d7b58
	ctx.lr = 0x8229CACC;
	sub_822D7B58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8229cef0
	goto loc_8229CEF0;
loc_8229CAD4:
	// li r14,1
	r14.s64 = 1;
	// lwz r22,0(r9)
	r22.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r31,r1,180
	r31.s64 = ctx.r1.s64 + 180;
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
loc_8229CAE4:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8229cb00
	if (!ctx.cr6.eq) goto loc_8229CB00;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// ble cr6,0x8229cae4
	if (!ctx.cr6.gt) goto loc_8229CAE4;
loc_8229CB00:
	// mr r18,r11
	r18.u64 = ctx.r11.u64;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8229cb10
	if (!ctx.cr6.lt) goto loc_8229CB10;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
loc_8229CB10:
	// li r31,15
	r31.s64 = 15;
	// addi r30,r1,236
	r30.s64 = ctx.r1.s64 + 236;
loc_8229CB18:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8229cb30
	if (!ctx.cr6.eq) goto loc_8229CB30;
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// bne 0x8229cb18
	if (!ctx.cr0.eq) goto loc_8229CB18;
loc_8229CB30:
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// cmplw cr6,r22,r31
	ctx.cr6.compare<uint32_t>(r22.u32, r31.u32, ctx.xer);
	// ble cr6,0x8229cb40
	if (!ctx.cr6.gt) goto loc_8229CB40;
	// mr r22,r31
	r22.u64 = r31.u64;
loc_8229CB40:
	// stw r22,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r22.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// slw r30,r14,r11
	r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (r14.u32 << (ctx.r11.u8 & 0x3F));
	// bge cr6,0x8229cb7c
	if (!ctx.cr6.lt) goto loc_8229CB7C;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// add r9,r29,r9
	ctx.r9.u64 = r29.u64 + ctx.r9.u64;
loc_8229CB5C:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subf. r30,r10,r30
	r30.u64 = r30.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8229cc54
	if (ctx.cr0.lt) goto loc_8229CC54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r30,r30,1,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// blt cr6,0x8229cb5c
	if (ctx.cr6.lt) goto loc_8229CB5C;
loc_8229CB7C:
	// rlwinm r29,r31,2,0,29
	r29.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// lwzx r11,r29,r9
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r9.u32);
	// subf. r10,r11,r30
	ctx.r10.u64 = r30.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x8229cc54
	if (ctx.cr0.lt) goto loc_8229CC54;
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, r27.u32);
	// addic. r11,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	ctx.r11.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r30,r29,r9
	REX_STORE_U32(r29.u32 + ctx.r9.u32, r30.u32);
	// mr r31,r27
	r31.u64 = r27.u64;
	// beq 0x8229cbcc
	if (ctx.cr0.eq) goto loc_8229CBCC;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8229CBB0:
	// addi r11,r1,180
	ctx.r11.s64 = ctx.r1.s64 + 180;
	// addi r30,r1,248
	r30.s64 = ctx.r1.s64 + 248;
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// stwx r31,r9,r30
	REX_STORE_U32(ctx.r9.u32 + r30.u32, r31.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8229cbb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229CBB0;
loc_8229CBCC:
	// lwz r16,556(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 556);
	// addi r30,r3,-4
	r30.s64 = ctx.r3.s64 + -4;
	// mr r31,r27
	r31.u64 = r27.u64;
loc_8229CBD8:
	// lwzu r11,4(r30)
	ea = 4 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229cc00
	if (ctx.cr6.eq) goto loc_8229CC00;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// lwzx r3,r9,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r28,r3,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stwx r3,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r3.u32);
	// stwx r31,r28,r16
	REX_STORE_U32(r28.u32 + r16.u32, r31.u32);
loc_8229CC00:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8229cbd8
	if (ctx.cr6.lt) goto loc_8229CBD8;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// stw r27,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r27.u32);
	// mr r23,r27
	r23.u64 = r27.u64;
	// mr r20,r16
	r20.u64 = r16.u64;
	// li r26,-1
	r26.s64 = -1;
	// mr r31,r27
	r31.u64 = r27.u64;
	// lwzx r15,r29,r11
	r15.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// neg r29,r22
	r29.s64 = static_cast<int64_t>(-r22.u64);
	// stw r27,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, r27.u32);
	// mr r24,r27
	r24.u64 = r27.u64;
	// cmpw cr6,r18,r8
	ctx.cr6.compare<int32_t>(r18.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x8229cecc
	if (ctx.cr6.gt) goto loc_8229CECC;
	// rlwinm r9,r18,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r17,548(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 548);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// add r19,r9,r11
	r19.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8229CC4C:
	// lwz r21,0(r19)
	r21.u64 = REX_LOAD_U32(r19.u32 + 0);
	// b 0x8229ceb4
	goto loc_8229CEB4;
loc_8229CC54:
	// lwz r3,304(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x822d7b58
	ctx.lr = 0x8229CC5C;
	sub_822D7B58(ctx, base);
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x8229cef0
	goto loc_8229CEF0;
loc_8229CC64:
	// add r11,r29,r22
	ctx.r11.u64 = r29.u64 + r22.u64;
	// addi r21,r21,-1
	r21.s64 = r21.s64 + -1;
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(r18.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8229cdb0
	if (!ctx.cr6.gt) goto loc_8229CDB0;
	// rlwinm r9,r26,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r21,1
	r25.s64 = r21.s64 + 1;
	// subf r28,r22,r29
	r28.u64 = r29.u64 - r22.u64;
	// addi r30,r9,-4
	r30.s64 = ctx.r9.s64 + -4;
loc_8229CC84:
	// subf r9,r11,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r11.u64;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// add r28,r28,r22
	r28.u64 = r28.u64 + r22.u64;
	// cmplw cr6,r9,r22
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r22.u32, ctx.xer);
	// ble cr6,0x8229cca4
	if (!ctx.cr6.gt) goto loc_8229CCA4;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
loc_8229CCA4:
	// subf r11,r29,r18
	ctx.r11.u64 = r18.u64 - r29.u64;
	// slw r4,r14,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (r14.u32 << (ctx.r11.u8 & 0x3F));
	// cmplw cr6,r4,r25
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r25.u32, ctx.xer);
	// ble cr6,0x8229ccec
	if (!ctx.cr6.gt) goto loc_8229CCEC;
	// subf r4,r21,r4
	ctx.r4.u64 = ctx.r4.u64 - r21.u64;
	// mr r31,r19
	r31.u64 = r19.u64;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8229ccec
	if (!ctx.cr6.lt) goto loc_8229CCEC;
	// b 0x8229cce0
	goto loc_8229CCE0;
loc_8229CCCC:
	// lwzu r3,4(r31)
	ea = 4 + r31.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x8229ccec
	if (!ctx.cr6.gt) goto loc_8229CCEC;
	// subf r4,r3,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r3.u64;
loc_8229CCE0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8229cccc
	if (ctx.cr6.lt) goto loc_8229CCCC;
loc_8229CCEC:
	// lwz r9,0(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 0);
	// slw r24,r14,r11
	r24.u64 = ctx.r11.u8 & 0x20 ? 0 : (r14.u32 << (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1440
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1440, ctx.xer);
	// bgt cr6,0x8229cc54
	if (ctx.cr6.gt) goto loc_8229CC54;
	// cmplwi cr6,r24,1440
	ctx.cr6.compare<uint32_t>(r24.u32, 1440, ctx.xer);
	// bgt cr6,0x8229cc54
	if (ctx.cr6.gt) goto loc_8229CC54;
	// add r4,r9,r24
	ctx.r4.u64 = ctx.r9.u64 + r24.u64;
	// cmplwi cr6,r4,1440
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1440, ctx.xer);
	// bgt cr6,0x8229cc54
	if (ctx.cr6.gt) goto loc_8229CC54;
	// cmpwi cr6,r30,56
	ctx.cr6.compare<int32_t>(r30.s32, 56, ctx.xer);
	// bgt cr6,0x8229cc54
	if (ctx.cr6.gt) goto loc_8229CC54;
	// addi r31,r1,116
	r31.s64 = ctx.r1.s64 + 116;
	// lwz r3,540(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r4,0(r17)
	REX_STORE_U32(r17.u32 + 0, ctx.r4.u32);
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// add r31,r9,r3
	r31.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stwx r31,r30,r3
	REX_STORE_U32(r30.u32 + ctx.r3.u32, r31.u32);
	// ble cr6,0x8229cd9c
	if (!ctx.cr6.gt) goto loc_8229CD9C;
	// lwz r6,508(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// srw r4,r23,r28
	ctx.r4.u64 = r28.u8 & 0x20 ? 0 : (r23.u32 >> (r28.u8 & 0x3F));
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + ctx.r9.u32);
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r9,r31
	ctx.r10.u64 = r31.u64 - ctx.r9.u64;
	// stb r22,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r22.u8);
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// lwz r5,500(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r7,516(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// subf r11,r4,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r4.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// ld r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// stwx r23,r30,r3
	REX_STORE_U32(r30.u32 + ctx.r3.u32, r23.u32);
	// stdx r11,r4,r9
	REX_STORE_U64(ctx.r4.u32 + ctx.r9.u32, ctx.r11.u64);
	// b 0x8229cda4
	goto loc_8229CDA4;
loc_8229CD9C:
	// lwz r11,524(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
loc_8229CDA4:
	// add r11,r29,r22
	ctx.r11.u64 = r29.u64 + r22.u64;
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(r18.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8229cc84
	if (ctx.cr6.gt) goto loc_8229CC84;
loc_8229CDB0:
	// rlwinm r11,r15,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r29,r18
	ctx.r9.u64 = r18.u64 - r29.u64;
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + r16.u64;
	// stb r9,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8229cdd0
	if (ctx.cr6.lt) goto loc_8229CDD0;
	// li r11,192
	ctx.r11.s64 = 192;
	// b 0x8229ce18
	goto loc_8229CE18;
loc_8229CDD0:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8229ce00
	if (!ctx.cr6.lt) goto loc_8229CE00;
	// li r9,256
	ctx.r9.s64 = 256;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
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
	// b 0x8229ce18
	goto loc_8229CE18;
loc_8229CE00:
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
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_8229CE18:
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// subf r9,r29,r18
	ctx.r9.u64 = r18.u64 - r29.u64;
	// srw r11,r23,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (r23.u32 >> (r29.u8 & 0x3F));
	// slw r9,r14,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r14.u32 << (ctx.r9.u8 & 0x3F));
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// bge cr6,0x8229ce54
	if (!ctx.cr6.lt) goto loc_8229CE54;
	// rlwinm r3,r9,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r3,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r3.u64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + r31.u64;
loc_8229CE40:
	// ld r30,80(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// stdux r30,r4,r3
	ea = ctx.r4.u32 + ctx.r3.u32;
	REX_STORE_U64(ea, r30.u64);
	ctx.r4.u32 = ea;
	// blt cr6,0x8229ce40
	if (ctx.cr6.lt) goto loc_8229CE40;
loc_8229CE54:
	// addi r11,r18,-1
	ctx.r11.s64 = r18.s64 + -1;
	// slw r11,r14,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r14.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x8229ce64
	goto loc_8229CE64;
loc_8229CE60:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
loc_8229CE64:
	// and. r9,r11,r23
	ctx.r9.u64 = ctx.r11.u64 & r23.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// xor r23,r11,r23
	r23.u64 = ctx.r11.u64 ^ r23.u64;
	// bne 0x8229ce60
	if (!ctx.cr0.eq) goto loc_8229CE60;
	// slw r11,r14,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (r14.u32 << (r29.u8 & 0x3F));
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt cr6,0x8229ceb4
	if (ctx.cr6.lt) goto loc_8229CEB4;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_8229CE8C:
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// and r9,r9,r23
	ctx.r9.u64 = ctx.r9.u64 & r23.u64;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8229ceb4
	if (ctx.cr6.eq) goto loc_8229CEB4;
	// subf r29,r22,r29
	r29.u64 = r29.u64 - r22.u64;
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// slw r9,r14,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (r14.u32 << (r29.u8 & 0x3F));
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// bge 0x8229ce8c
	if (!ctx.cr0.lt) goto loc_8229CE8C;
loc_8229CEB4:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// bne cr6,0x8229cc64
	if (!ctx.cr6.eq) goto loc_8229CC64;
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r19,r19,4
	r19.s64 = r19.s64 + 4;
	// cmpw cr6,r18,r8
	ctx.cr6.compare<int32_t>(r18.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x8229cc4c
	if (!ctx.cr6.gt) goto loc_8229CC4C;
loc_8229CECC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8229cee0
	if (ctx.cr6.eq) goto loc_8229CEE0;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// li r31,-5
	r31.s64 = -5;
	// bne cr6,0x8229cee4
	if (!ctx.cr6.eq) goto loc_8229CEE4;
loc_8229CEE0:
	// mr r31,r27
	r31.u64 = r27.u64;
loc_8229CEE4:
	// lwz r3,304(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x822d7b58
	ctx.lr = 0x8229CEEC;
	sub_822D7B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8229CEF0:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_822B0E48) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,672(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 672, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,676(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 676, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,680(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 680, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,684(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 684, temp.u32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,672(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 672);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822b0ea0
	if (!ctx.cr6.eq) goto loc_822B0EA0;
	// lfs f13,676(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 676);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822b0ea0
	if (!ctx.cr6.eq) goto loc_822B0EA0;
	// lfs f13,680(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 680);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822b0ea0
	if (!ctx.cr6.eq) goto loc_822B0EA0;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r11,r11,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// b 0x822b0ea8
	goto loc_822B0EA8;
loc_822B0EA0:
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
loc_822B0EA8:
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B3A98) {
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
	ctx.lr = 0x822B3AA0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r3,272
	ctx.r3.s64 = 272;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// bl 0x822c80d0
	ctx.lr = 0x822B3AC8;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822b3af8
	if (ctx.cr0.eq) goto loc_822B3AF8;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// lwz r10,228(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822c5928
	ctx.lr = 0x822B3AF0;
	sub_822C5928(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822b3afc
	goto loc_822B3AFC;
loc_822B3AF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822B3AFC:
	// stw r11,112(r25)
	REX_STORE_U32(r25.u32 + 112, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// andi. r11,r11,31104
	ctx.r11.u64 = ctx.r11.u64 & 31104;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,196(r25)
	REX_STORE_U8(r25.u32 + 196, ctx.r11.u8);
	// bl 0x822b39d0
	ctx.lr = 0x822B3B1C;
	sub_822B39D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_822B7550) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822B7558;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,120(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r3,120
	r29.s64 = ctx.r3.s64 + 120;
	// b 0x822b7580
	goto loc_822B7580;
loc_822B756C:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b757c
	if (ctx.cr6.eq) goto loc_822B757C;
	// bl 0x822c80a8
	ctx.lr = 0x822B757C;
	sub_822C80A8(ctx, base);
loc_822B757C:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_822B7580:
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 124);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822b756c
	if (!ctx.cr6.eq) goto loc_822B756C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x822ba200
	ctx.lr = 0x822B75A0;
	sub_822BA200(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822B8D20) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,73(r3)
	REX_STORE_U8(ctx.r3.u32 + 73, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B9080) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822B9088;
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
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// beq cr6,0x822b90a8
	if (ctx.cr6.eq) goto loc_822B90A8;
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// bge cr6,0x822b90b0
	if (!ctx.cr6.lt) goto loc_822B90B0;
loc_822B90A8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823d3958
	ctx.lr = 0x822B90B0;
	sub_823D3958(ctx, base);
loc_822B90B0:
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne cr6,0x822b90c8
	if (!ctx.cr6.eq) goto loc_822B90C8;
	// bl 0x822270c0
	ctx.lr = 0x822B90C4;
	sub_822270C0(ctx, base);
	// b 0x822b90cc
	goto loc_822B90CC;
loc_822B90C8:
	// bl 0x82226ed8
	ctx.lr = 0x822B90CC;
	sub_82226ED8(ctx, base);
loc_822B90CC:
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823d3808
	ctx.lr = 0x822B90DC;
	sub_823D3808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b8d38
	ctx.lr = 0x822B90E4;
	sub_822B8D38(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822B9C20) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x822c5ac0
	ctx.lr = 0x822B9C44;
	sub_822C5AC0(ctx, base);
	// lhz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 80);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r4,3
	ctx.r10.s64 = ctx.r4.s64 + 3;
	// rlwinm r9,r4,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// srad r10,r8,r10
	temp.u64 = ctx.r10.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r8.s64 < 0) & (((ctx.r8.s64 >> temp.u64) << temp.u64) != ctx.r8.s64);
	ctx.r10.s64 = ctx.r8.s64 >> temp.u64;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// srd r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82226458
	ctx.lr = 0x822B9C88;
	sub_82226458(ctx, base);
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

DEFINE_REX_FUNC(sub_822BB668) {
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
	// lwz r3,52(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bb698
	if (ctx.cr6.eq) goto loc_822BB698;
	// bl 0x822c80a8
	ctx.lr = 0x822BB694;
	sub_822C80A8(ctx, base);
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
loc_822BB698:
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bb6ac
	if (ctx.cr6.eq) goto loc_822BB6AC;
	// bl 0x822c80a8
	ctx.lr = 0x822BB6A8;
	sub_822C80A8(ctx, base);
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
loc_822BB6AC:
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

DEFINE_REX_FUNC(sub_822BDFF8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,60
	ctx.r9.s64 = ctx.r3.s64 + 60;
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stb r11,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
loc_822BE02C:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822be02c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822BE02C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C0A38) {
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
	ctx.lr = 0x822C0A40;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c0a78
	if (ctx.cr6.eq) goto loc_822C0A78;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x822c0a7c
	if (ctx.cr0.eq) goto loc_822C0A7C;
loc_822C0A78:
	// li r10,1
	ctx.r10.s64 = 1;
loc_822C0A7C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822c0a8c
	if (!ctx.cr0.eq) goto loc_822C0A8C;
loc_822C0A84:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822c0bac
	goto loc_822C0BAC;
loc_822C0A8C:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822c0a9c
	if (ctx.cr6.eq) goto loc_822C0A9C;
	// addi r31,r7,48
	r31.s64 = ctx.r7.s64 + 48;
	// b 0x822c0ab8
	goto loc_822C0AB8;
loc_822C0A9C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c0aac
	if (ctx.cr6.eq) goto loc_822C0AAC;
	// addi r11,r11,384
	ctx.r11.s64 = ctx.r11.s64 + 384;
	// b 0x822c0ab4
	goto loc_822C0AB4;
loc_822C0AAC:
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r11,r11,-3168
	ctx.r11.s64 = ctx.r11.s64 + -3168;
loc_822C0AB4:
	// addi r31,r11,48
	r31.s64 = ctx.r11.s64 + 48;
loc_822C0AB8:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f12,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x821f4c50
	ctx.lr = 0x822C0AE4;
	sub_821F4C50(ctx, base);
	// lfs f11,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f8,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f5,f9,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f4,128(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 128);
	ctx.f4.f64 = double(temp.f32);
	// lfs f7,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,23044(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 23044);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f3,f0,f0
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f2,f13,f8
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmadds f13,f13,f13,f3
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f3.f64)));
	// fmadds f0,f0,f7,f2
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f7.f64, ctx.f2.f64)));
	// fmadds f13,f5,f5,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f5.f64, ctx.f5.f64, ctx.f13.f64)));
	// fmadds f0,f5,f6,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f5.f64, ctx.f6.f64, ctx.f0.f64)));
	// fnmsubs f13,f4,f4,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f4.f64, ctx.f4.f64, -ctx.f13.f64)));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x822c0b4c
	if (!ctx.cr6.gt) goto loc_822C0B4C;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x822c0a84
	if (ctx.cr6.gt) goto loc_822C0A84;
loc_822C0B4C:
	// fmsubs f13,f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, -ctx.f13.f64)));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f12,24124(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24124);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x822c0a84
	if (ctx.cr6.lt) goto loc_822C0A84;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x822c0b7c
	if (!ctx.cr6.lt) goto loc_822C0B7C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
loc_822C0B7C:
	// fmuls f13,f6,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f12,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f12,12(r28)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r28.u32 + 12, temp.u32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fadds f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f13,0(r28)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// fadds f13,f11,f7
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f13,4(r28)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r28.u32 + 4, temp.u32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f0,8(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
loc_822C0BAC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822C6F08) {
	REX_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,31464(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31464);
	// lwz r10,52(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r4,1092(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1092);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822C8068) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-4204
	ctx.r11.s64 = ctx.r11.s64 + -4204;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C8618) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r4,12(r3)
	REX_STORE_U8(ctx.r3.u32 + 12, ctx.r4.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,25760
	ctx.r11.s64 = ctx.r11.s64 + 25760;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C8908) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,25772
	ctx.r11.s64 = ctx.r11.s64 + 25772;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C8B90) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822c8bb4
	if (ctx.cr6.lt) goto loc_822C8BB4;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bge cr6,0x822c8bb4
	if (!ctx.cr6.lt) goto loc_822C8BB4;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,31672(r10)
	REX_STORE_U32(ctx.r10.u32 + 31672, ctx.r11.u32);
	// blr 
	return;
loc_822C8BB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C9218) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822C9224:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r9,r10,24,16,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r9,r10,8,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r9,r10,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822c9224
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C9224;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C9B50) {
	REX_FUNC_PROLOGUE();
	// lis r11,16493
	ctx.r11.s64 = 1080885248;
	// ori r11,r11,5000
	ctx.r11.u64 = ctx.r11.u64 | 5000;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// beq cr6,0x822c9b70
	if (ctx.cr6.eq) goto loc_822C9B70;
	// li r3,1
	ctx.r3.s64 = 1;
loc_822C9B70:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C9EB8) {
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
	// lwz r3,72(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// bl 0x823cdb60
	ctx.lr = 0x822C9ED4;
	sub_823CDB60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822c9ee8
	if (!ctx.cr0.eq) goto loc_822C9EE8;
	// bl 0x822098c8
	ctx.lr = 0x822C9EE0;
	sub_822098C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822c9ef8
	goto loc_822C9EF8;
loc_822C9EE8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c9b78
	ctx.lr = 0x822C9EF4;
	sub_822C9B78(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_822C9EF8:
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

DEFINE_REX_FUNC(sub_822CB520) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
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
	// beq 0x822cb5d8
	if (ctx.cr0.eq) goto loc_822CB5D8;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// bl 0x822d5870
	ctx.lr = 0x822CB558;
	sub_822D5870(ctx, base);
	// lwz r4,160(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lbz r11,200(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 200);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822cb5ac
	if (ctx.cr0.eq) goto loc_822CB5AC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a9980
	ctx.lr = 0x822CB570;
	sub_822A9980(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// b 0x822cb5d0
	goto loc_822CB5D0;
loc_822CB5AC:
	// li r11,160
	ctx.r11.s64 = 160;
	// li r10,90
	ctx.r10.s64 = 90;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r9,1120
	ctx.r9.s64 = 1120;
	// li r11,630
	ctx.r11.s64 = 630;
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_822CB5D0:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822e75e0
	ctx.lr = 0x822CB5D8;
	sub_822E75E0(ctx, base);
loc_822CB5D8:
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

DEFINE_REX_FUNC(sub_822CE390) {
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
	// bl 0x822ce220
	ctx.lr = 0x822CE3A8;
	sub_822CE220(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x822c8908
	ctx.lr = 0x822CE3B0;
	sub_822C8908(ctx, base);
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

DEFINE_REX_FUNC(sub_822CE868) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822ce878
	if (!ctx.cr6.eq) goto loc_822CE878;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822CE878:
	// stw r4,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CF808) {
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
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CF82C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ce5c0
	ctx.lr = 0x822CF834;
	sub_822CE5C0(ctx, base);
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

DEFINE_REX_FUNC(sub_822D0AD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822D0AD8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,220(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// addi r29,r3,220
	r29.s64 = ctx.r3.s64 + 220;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D0AF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 260);
	// bl 0x822cd840
	ctx.lr = 0x822D0B00;
	sub_822CD840(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// stb r30,29(r31)
	REX_STORE_U8(r31.u32 + 29, r30.u8);
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// stb r30,40(r31)
	REX_STORE_U8(r31.u32 + 40, r30.u8);
	// stb r30,256(r31)
	REX_STORE_U8(r31.u32 + 256, r30.u8);
	// stb r30,257(r31)
	REX_STORE_U8(r31.u32 + 257, r30.u8);
	// beq cr6,0x822d0b44
	if (ctx.cr6.eq) goto loc_822D0B44;
	// bl 0x8220a088
	ctx.lr = 0x822D0B40;
	sub_8220A088(ctx, base);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
loc_822D0B44:
	// lwz r3,216(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d0b58
	if (ctx.cr6.eq) goto loc_822D0B58;
	// bl 0x822c80a8
	ctx.lr = 0x822D0B54;
	sub_822C80A8(ctx, base);
	// stw r30,216(r31)
	REX_STORE_U32(r31.u32 + 216, r30.u32);
loc_822D0B58:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D0B6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822D24A8) {
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
	ctx.lr = 0x822D24B0;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r29,r4,24
	r29.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(r29.u32, 4, ctx.xer);
	// blt cr6,0x822d24d4
	if (ctx.cr6.lt) goto loc_822D24D4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// b 0x822d2510
	goto loc_822D2510;
loc_822D24D4:
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
	ctx.lr = 0x822D24EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r29,19
	ctx.r11.s64 = r29.s64 + 19;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f31,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	f31.f64 = double(temp.f32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D250C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_822D2510:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822D4730) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r8,-32172
	ctx.r8.s64 = -2108424192;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r30,r8,-2112
	r30.s64 = ctx.r8.s64 + -2112;
	// addi r11,r11,-22808
	ctx.r11.s64 = ctx.r11.s64 + -22808;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// stw r11,-2112(r8)
	REX_STORE_U32(ctx.r8.u32 + -2112, ctx.r11.u32);
	// lis r31,-32210
	r31.s64 = -2110914560;
	// addi r10,r10,-25720
	ctx.r10.s64 = ctx.r10.s64 + -25720;
	// addi r9,r9,-25736
	ctx.r9.s64 = ctx.r9.s64 + -25736;
	// addi r11,r31,-25728
	ctx.r11.s64 = r31.s64 + -25728;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lis r3,-32210
	ctx.r3.s64 = -2110914560;
	// stw r9,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// lis r4,-32210
	ctx.r4.s64 = -2110914560;
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// addi r10,r3,-25864
	ctx.r10.s64 = ctx.r3.s64 + -25864;
	// addi r9,r4,-22808
	ctx.r9.s64 = ctx.r4.s64 + -22808;
	// addi r11,r5,-22888
	ctx.r11.s64 = ctx.r5.s64 + -22888;
	// stw r10,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// stw r9,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r9.u32);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// stw r11,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r11.u32);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// addi r10,r6,-25832
	ctx.r10.s64 = ctx.r6.s64 + -25832;
	// addi r9,r7,-26040
	ctx.r9.s64 = ctx.r7.s64 + -26040;
	// addi r11,r8,-26200
	ctx.r11.s64 = ctx.r8.s64 + -26200;
	// stw r10,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r10.u32);
	// stw r9,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r9.u32);
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restfpr_16) {
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
	// lfd f16,-128(r12)
	ctx.fpscr.disableFlushMode();
	f16.u64 = REX_LOAD_U64(ctx.r12.u32 + -128);
	// lfd f17,-120(r12)
	f17.u64 = REX_LOAD_U64(ctx.r12.u32 + -120);
	// lfd f18,-112(r12)
	f18.u64 = REX_LOAD_U64(ctx.r12.u32 + -112);
	// lfd f19,-104(r12)
	f19.u64 = REX_LOAD_U64(ctx.r12.u32 + -104);
	// lfd f20,-96(r12)
	f20.u64 = REX_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	f21.u64 = REX_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	f22.u64 = REX_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	f23.u64 = REX_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	f24.u64 = REX_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	f25.u64 = REX_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	f26.u64 = REX_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	f27.u64 = REX_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = REX_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = REX_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = REX_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = REX_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D6B60) {
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
	// beq cr6,0x822d6b80
	if (ctx.cr6.eq) goto loc_822D6B80;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822d6b98
	if (!ctx.cr6.eq) goto loc_822D6B98;
loc_822D6B80:
	// bl 0x822db6c0
	ctx.lr = 0x822D6B84;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822D6B90;
	sub_822D6910(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x822d6c00
	goto loc_822D6C00;
loc_822D6B98:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822d6bc0
	if (!ctx.cr6.eq) goto loc_822D6BC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// bl 0x822db6c0
	ctx.lr = 0x822D6BAC;
	sub_822DB6C0(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_822D6BB0:
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x822d6910
	ctx.lr = 0x822D6BB8;
	sub_822D6910(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x822d6c00
	goto loc_822D6C00;
loc_822D6BC0:
	// subf r11,r5,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r5.u64;
loc_822D6BC4:
	// lbz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// beq 0x822d6be0
	if (ctx.cr0.eq) goto loc_822D6BE0;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x822d6bc4
	if (!ctx.cr0.eq) goto loc_822D6BC4;
loc_822D6BE0:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822d6bfc
	if (!ctx.cr6.eq) goto loc_822D6BFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// bl 0x822db6c0
	ctx.lr = 0x822D6BF4;
	sub_822DB6C0(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x822d6bb0
	goto loc_822D6BB0;
loc_822D6BFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D6C00:
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

DEFINE_REX_FUNC(__savevmx_70) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_122) {
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

DEFINE_REX_FUNC(sub_822D91E0) {
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
	ctx.lr = 0x822D91F8;
	sub_822D6FF8(ctx, base);
	// stw r31,144(r3)
	REX_STORE_U32(ctx.r3.u32 + 144, r31.u32);
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

DEFINE_REX_FUNC(sub_822D9670) {
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
	// lis r11,-8083
	ctx.r11.s64 = -529727488;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,29539
	ctx.r11.u64 = ctx.r11.u64 | 29539;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822d96ec
	if (!ctx.cr6.eq) goto loc_822D96EC;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x822d96ec
	if (!ctx.cr6.eq) goto loc_822D96EC;
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// ori r10,r10,1312
	ctx.r10.u64 = ctx.r10.u64 | 1312;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822d96d8
	if (ctx.cr6.eq) goto loc_822D96D8;
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// ori r10,r10,1313
	ctx.r10.u64 = ctx.r10.u64 | 1313;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822d96d8
	if (ctx.cr6.eq) goto loc_822D96D8;
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// ori r10,r10,1314
	ctx.r10.u64 = ctx.r10.u64 | 1314;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822d96ec
	if (!ctx.cr6.eq) goto loc_822D96EC;
loc_822D96D8:
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x822d96f4
	goto loc_822D96F4;
loc_822D96EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_822D96F4:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bl 0x822d6ff8
	ctx.lr = 0x822D96FC;
	sub_822D6FF8(ctx, base);
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x822d6ff8
	ctx.lr = 0x822D9708;
	sub_822D6FF8(ctx, base);
	// stw r31,148(r3)
	REX_STORE_U32(ctx.r3.u32 + 148, r31.u32);
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

DEFINE_REX_FUNC(sub_822DC5F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister f31{};
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// stfd f1,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.f1.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfd f2,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.f2.u64);
	// addi r11,r11,-1368
	ctx.r11.s64 = ctx.r11.s64 + -1368;
	// stfd f3,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.f3.u64);
	// fmr f31,f3
	f31.f64 = ctx.f3.f64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822DC634:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822dc6c4
	if (ctx.cr6.eq) goto loc_822DC6C4;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r8,r11,232
	ctx.r8.s64 = ctx.r11.s64 + 232;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822dc634
	if (ctx.cr6.lt) goto loc_822DC634;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822DC658:
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// beq cr6,0x822dc6d4
	if (ctx.cr6.eq) goto loc_822DC6D4;
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r10,180(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r9,184(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r8,188(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r7,192(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r6,196(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// bl 0x822dc9d0
	ctx.lr = 0x822DC6A4;
	sub_822DC9D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82246ca8
	ctx.lr = 0x822DC6AC;
	sub_82246CA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822dc6bc
	if (!ctx.cr0.eq) goto loc_822DC6BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822dc568
	ctx.lr = 0x822DC6BC;
	sub_822DC568(ctx, base);
loc_822DC6BC:
	// lfd f1,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// b 0x822dc6e4
	goto loc_822DC6E4;
loc_822DC6C4:
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x822dc658
	goto loc_822DC658;
loc_822DC6D4:
	// bl 0x822dc9d0
	ctx.lr = 0x822DC6D8;
	sub_822DC9D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822dc568
	ctx.lr = 0x822DC6E0;
	sub_822DC568(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_822DC6E4:
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

DEFINE_REX_FUNC(sub_822E3890) {
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
	ctx.lr = 0x822E3898;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	r22.s64 = 0;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r19,r22
	r19.u64 = r22.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r30,r22
	r30.u64 = r22.u64;
	// mr r26,r22
	r26.u64 = r22.u64;
	// mr r28,r22
	r28.u64 = r22.u64;
	// mr r29,r22
	r29.u64 = r22.u64;
	// mr r31,r22
	r31.u64 = r22.u64;
	// li r27,1
	r27.s64 = 1;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822e38f8
	if (!ctx.cr6.eq) goto loc_822E38F8;
	// bl 0x822db6c0
	ctx.lr = 0x822E38E4;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822E38F0;
	sub_822D6910(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822e41d4
	goto loc_822E41D4;
loc_822E38F8:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_822E38FC:
	// lhz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// cmplwi cr6,r8,32
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 32, ctx.xer);
	// beq cr6,0x822e3920
	if (ctx.cr6.eq) goto loc_822E3920;
	// cmplwi cr6,r8,9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 9, ctx.xer);
	// beq cr6,0x822e3920
	if (ctx.cr6.eq) goto loc_822E3920;
	// cmplwi cr6,r8,10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 10, ctx.xer);
	// beq cr6,0x822e3920
	if (ctx.cr6.eq) goto loc_822E3920;
	// cmplwi cr6,r8,13
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 13, ctx.xer);
	// bne cr6,0x822e3928
	if (!ctx.cr6.eq) goto loc_822E3928;
loc_822E3920:
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// b 0x822e38fc
	goto loc_822E38FC;
loc_822E3928:
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r21,r8,32768
	r21.u64 = ctx.r8.u64 | 32768;
loc_822E3930:
	// lhz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x822e3cbc
	if (ctx.cr6.gt) goto loc_822E3CBC;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// addi r12,r12,-31864
	ctx.r12.s64 = ctx.r12.s64 + -31864;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32210
	ctx.r12.s64 = -2110914560;
	// nop 
	// addi r12,r12,14696
	ctx.r12.s64 = ctx.r12.s64 + 14696;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822E3968;
	case 1:
		goto loc_822E39E4;
	case 2:
		goto loc_822E3A6C;
	case 3:
		goto loc_822E3AF0;
	case 4:
		goto loc_822E3B64;
	case 5:
		goto loc_822E3BD4;
	case 6:
		goto loc_822E3BF4;
	case 7:
		goto loc_822E3C70;
	case 8:
		goto loc_822E3C3C;
	case 9:
		goto loc_822E3CC8;
	case 10:
		goto loc_822E3CBC;
	case 11:
		goto loc_822E3C88;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_822E3968:
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r11,49
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49, ctx.xer);
	// blt cr6,0x822e3988
	if (ctx.cr6.lt) goto loc_822E3988;
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// bgt cr6,0x822e3988
	if (ctx.cr6.gt) goto loc_822E3988;
loc_822E397C:
	// li r11,3
	ctx.r11.s64 = 3;
loc_822E3980:
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// b 0x822e3930
	goto loc_822E3930;
loc_822E3988:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,188(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822e39ac
	if (!ctx.cr6.eq) goto loc_822E39AC;
loc_822E39A4:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x822e3930
	goto loc_822E3930;
loc_822E39AC:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x822e39d8
	if (ctx.cr6.eq) goto loc_822E39D8;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x822e39cc
	if (ctx.cr6.eq) goto loc_822E39CC;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x822e3c68
	if (!ctx.cr6.eq) goto loc_822E3C68;
loc_822E39C4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822e3930
	goto loc_822E3930;
loc_822E39CC:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r19,r21
	r19.u64 = r21.u64;
	// b 0x822e3930
	goto loc_822E3930;
loc_822E39D8:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r19,r22
	r19.u64 = r22.u64;
	// b 0x822e3930
	goto loc_822E3930;
loc_822E39E4:
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r11,49
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49, ctx.xer);
	// blt cr6,0x822e39fc
	if (ctx.cr6.lt) goto loc_822E39FC;
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// ble cr6,0x822e397c
	if (!ctx.cr6.gt) goto loc_822E397C;
loc_822E39FC:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,188(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822e3a20
	if (!ctx.cr6.eq) goto loc_822E3A20;
loc_822E3A18:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x822e3930
	goto loc_822E3930;
loc_822E3A20:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x822e3a60
	if (ctx.cr6.eq) goto loc_822E3A60;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x822e3a60
	if (ctx.cr6.eq) goto loc_822E3A60;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x822e39c4
	if (ctx.cr6.eq) goto loc_822E39C4;
loc_822E3A38:
	// cmpwi cr6,r11,67
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 67, ctx.xer);
	// ble cr6,0x822e3c68
	if (!ctx.cr6.gt) goto loc_822E3C68;
	// cmpwi cr6,r11,69
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 69, ctx.xer);
	// ble cr6,0x822e3a58
	if (!ctx.cr6.gt) goto loc_822E3A58;
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// ble cr6,0x822e3c68
	if (!ctx.cr6.gt) goto loc_822E3C68;
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// bgt cr6,0x822e3c68
	if (ctx.cr6.gt) goto loc_822E3C68;
loc_822E3A58:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x822e3930
	goto loc_822E3930;
loc_822E3A60:
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x822e3930
	goto loc_822E3930;
loc_822E3A6C:
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r11,49
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49, ctx.xer);
	// blt cr6,0x822e3a80
	if (ctx.cr6.lt) goto loc_822E3A80;
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// ble cr6,0x822e397c
	if (!ctx.cr6.gt) goto loc_822E397C;
loc_822E3A80:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,188(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x822e39a4
	if (ctx.cr6.eq) goto loc_822E39A4;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x822e39c4
	if (ctx.cr6.eq) goto loc_822E39C4;
loc_822E3AA4:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_822E3AA8:
	// stw r7,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x822e4170
	if (ctx.cr6.eq) goto loc_822E4170;
	// cmplwi cr6,r6,24
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 24, ctx.xer);
	// ble cr6,0x822e3ae0
	if (!ctx.cr6.gt) goto loc_822E3AE0;
	// lbz r11,151(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 151);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x822e3ad4
	if (ctx.cr6.lt) goto loc_822E3AD4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,151(r1)
	REX_STORE_U8(ctx.r1.u32 + 151, ctx.r11.u8);
loc_822E3AD4:
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_822E3AE0:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822e415c
	if (ctx.cr6.eq) goto loc_822E415C;
	// lbzu r11,-1(r3)
	ea = -1 + ctx.r3.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// b 0x822e3d3c
	goto loc_822E3D3C;
loc_822E3AF0:
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// li r30,1
	r30.s64 = 1;
	// b 0x822e3b2c
	goto loc_822E3B2C;
loc_822E3AFC:
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// bgt cr6,0x822e3b34
	if (ctx.cr6.gt) goto loc_822E3B34;
	// cmplwi cr6,r6,25
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 25, ctx.xer);
	// bge cr6,0x822e3b20
	if (!ctx.cr6.lt) goto loc_822E3B20;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x822e3b24
	goto loc_822E3B24;
loc_822E3B20:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_822E3B24:
	// lhz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
loc_822E3B2C:
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bge cr6,0x822e3afc
	if (!ctx.cr6.lt) goto loc_822E3AFC;
loc_822E3B34:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,188(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x822e3a18
	if (ctx.cr6.eq) goto loc_822E3A18;
loc_822E3B50:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x822e3a60
	if (ctx.cr6.eq) goto loc_822E3A60;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x822e3a60
	if (ctx.cr6.eq) goto loc_822E3A60;
	// b 0x822e3a38
	goto loc_822E3A38;
loc_822E3B64:
	// li r30,1
	r30.s64 = 1;
	// li r26,1
	r26.s64 = 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822e3b94
	if (!ctx.cr6.eq) goto loc_822E3B94;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// b 0x822e3b8c
	goto loc_822E3B8C;
loc_822E3B7C:
	// lhz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_822E3B8C:
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x822e3b7c
	if (ctx.cr6.eq) goto loc_822E3B7C;
loc_822E3B94:
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// b 0x822e3bc8
	goto loc_822E3BC8;
loc_822E3B9C:
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// bgt cr6,0x822e3b50
	if (ctx.cr6.gt) goto loc_822E3B50;
	// cmplwi cr6,r6,25
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 25, ctx.xer);
	// bge cr6,0x822e3bc0
	if (!ctx.cr6.lt) goto loc_822E3BC0;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_822E3BC0:
	// lhz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
loc_822E3BC8:
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bge cr6,0x822e3b9c
	if (!ctx.cr6.lt) goto loc_822E3B9C;
	// b 0x822e3b50
	goto loc_822E3B50;
loc_822E3BD4:
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// li r26,1
	r26.s64 = 1;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// blt cr6,0x822e3aa4
	if (ctx.cr6.lt) goto loc_822E3AA4;
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// bgt cr6,0x822e3aa4
	if (ctx.cr6.gt) goto loc_822E3AA4;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x822e3980
	goto loc_822E3980;
loc_822E3BF4:
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r5,r7,-4
	ctx.r5.s64 = ctx.r7.s64 + -4;
	// cmplwi cr6,r11,49
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49, ctx.xer);
	// blt cr6,0x822e3c14
	if (ctx.cr6.lt) goto loc_822E3C14;
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// bgt cr6,0x822e3c14
	if (ctx.cr6.gt) goto loc_822E3C14;
loc_822E3C0C:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x822e3980
	goto loc_822E3980;
loc_822E3C14:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x822e3c34
	if (ctx.cr6.eq) goto loc_822E3C34;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x822e3ca8
	if (ctx.cr6.eq) goto loc_822E3CA8;
loc_822E3C24:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x822e3aa4
	if (!ctx.cr6.eq) goto loc_822E3AA4;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x822e3930
	goto loc_822E3930;
loc_822E3C34:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x822e3930
	goto loc_822E3930;
loc_822E3C3C:
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// li r28,1
	r28.s64 = 1;
	// b 0x822e3c50
	goto loc_822E3C50;
loc_822E3C48:
	// lhz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
loc_822E3C50:
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x822e3c48
	if (ctx.cr6.eq) goto loc_822E3C48;
	// cmplwi cr6,r11,49
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49, ctx.xer);
	// blt cr6,0x822e3c68
	if (ctx.cr6.lt) goto loc_822E3C68;
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// ble cr6,0x822e3c0c
	if (!ctx.cr6.gt) goto loc_822E3C0C;
loc_822E3C68:
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// b 0x822e3aa8
	goto loc_822E3AA8;
loc_822E3C70:
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r11,49
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49, ctx.xer);
	// blt cr6,0x822e3c24
	if (ctx.cr6.lt) goto loc_822E3C24;
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// ble cr6,0x822e3c0c
	if (!ctx.cr6.gt) goto loc_822E3C0C;
	// b 0x822e3c24
	goto loc_822E3C24;
loc_822E3C88:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e3cb4
	if (ctx.cr6.eq) goto loc_822E3CB4;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r5,r7,-2
	ctx.r5.s64 = ctx.r7.s64 + -2;
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x822e3c34
	if (ctx.cr6.eq) goto loc_822E3C34;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x822e3aa4
	if (!ctx.cr6.eq) goto loc_822E3AA4;
loc_822E3CA8:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r27,-1
	r27.s64 = -1;
	// b 0x822e3930
	goto loc_822E3930;
loc_822E3CB4:
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
loc_822E3CBC:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x822e3930
	if (!ctx.cr6.eq) goto loc_822E3930;
	// b 0x822e3aa8
	goto loc_822E3AA8;
loc_822E3CC8:
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// li r28,1
	r28.s64 = 1;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// b 0x822e3cfc
	goto loc_822E3CFC;
loc_822E3CD8:
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// bgt cr6,0x822e3d0c
	if (ctx.cr6.gt) goto loc_822E3D0C;
	// mulli r10,r10,10
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(10));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// cmpwi cr6,r10,5200
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5200, ctx.xer);
	// bgt cr6,0x822e3d08
	if (ctx.cr6.gt) goto loc_822E3D08;
	// lhz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
loc_822E3CFC:
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bge cr6,0x822e3cd8
	if (!ctx.cr6.lt) goto loc_822E3CD8;
	// b 0x822e3d0c
	goto loc_822E3D0C;
loc_822E3D08:
	// li r10,5201
	ctx.r10.s64 = 5201;
loc_822E3D0C:
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// b 0x822e3d24
	goto loc_822E3D24;
loc_822E3D14:
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// bgt cr6,0x822e3c68
	if (ctx.cr6.gt) goto loc_822E3C68;
	// lhz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
loc_822E3D24:
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bge cr6,0x822e3d14
	if (!ctx.cr6.lt) goto loc_822E3D14;
	// b 0x822e3c68
	goto loc_822E3C68;
loc_822E3D30:
	// lbzu r11,-1(r3)
	ea = -1 + ctx.r3.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_822E3D3C:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822e3d30
	if (ctx.cr0.eq) goto loc_822E3D30;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e6898
	ctx.lr = 0x822E3D54;
	sub_822E6898(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bge cr6,0x822e3d60
	if (!ctx.cr6.lt) goto loc_822E3D60;
	// neg r29,r29
	r29.s64 = static_cast<int64_t>(-r29.u64);
loc_822E3D60:
	// add r11,r31,r29
	ctx.r11.u64 = r31.u64 + r29.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x822e3d70
	if (!ctx.cr6.eq) goto loc_822E3D70;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
loc_822E3D70:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x822e3d7c
	if (!ctx.cr6.eq) goto loc_822E3D7C;
	// subf r11,r24,r11
	ctx.r11.u64 = ctx.r11.u64 - r24.u64;
loc_822E3D7C:
	// cmpwi cr6,r11,5200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5200, ctx.xer);
	// bgt cr6,0x822e4188
	if (ctx.cr6.gt) goto loc_822E4188;
	// cmpwi cr6,r11,-5200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -5200, ctx.xer);
	// blt cr6,0x822e41a0
	if (ctx.cr6.lt) goto loc_822E41A0;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// addi r10,r10,864
	ctx.r10.s64 = ctx.r10.s64 + 864;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r25,r10,-96
	r25.s64 = ctx.r10.s64 + -96;
	// beq cr6,0x822e4148
	if (ctx.cr6.eq) goto loc_822E4148;
	// bge cr6,0x822e3db8
	if (!ctx.cr6.lt) goto loc_822E3DB8;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// neg r26,r11
	r26.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// addi r11,r10,1216
	ctx.r11.s64 = ctx.r10.s64 + 1216;
	// addi r25,r11,-96
	r25.s64 = ctx.r11.s64 + -96;
loc_822E3DB8:
	// subfic r11,r23,0
	ctx.xer.ca = r23.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r23.u64;
	// lhz r10,106(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// sth r11,106(r1)
	REX_STORE_U16(ctx.r1.u32 + 106, ctx.r11.u16);
	// beq cr6,0x822e4148
	if (ctx.cr6.eq) goto loc_822E4148;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r27,r11,65535
	r27.u64 = ctx.r11.u64 | 65535;
	// li r24,-32768
	r24.s64 = -32768;
	// ori r23,r10,32768
	r23.u64 = ctx.r10.u64 | 32768;
loc_822E3DE8:
	// clrlwi. r11,r26,29
	ctx.r11.u64 = r26.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r25,r25,84
	r25.s64 = r25.s64 + 84;
	// srawi r26,r26,3
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x7) != 0);
	r26.s64 = r26.s32 >> 3;
	// beq 0x822e4140
	if (ctx.cr0.eq) goto loc_822E4140;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + r25.u64;
	// lhz r11,10(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 10);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x822e3e28
	if (ctx.cr6.lt) goto loc_822E3E28;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x822d4fa0
	ctx.lr = 0x822E3E18;
	sub_822D4FA0(ctx, base);
	// lwz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 118);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,118(r1)
	REX_STORE_U32(ctx.r1.u32 + 118, ctx.r11.u32);
loc_822E3E28:
	// lhz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// mr r29,r22
	r29.u64 = r22.u64;
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r22.u32);
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// clrlwi r11,r10,17
	ctx.r11.u64 = ctx.r10.u32 & 0x7FFF;
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r22.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lhz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// clrlwi r10,r8,17
	ctx.r10.u64 = ctx.r8.u32 & 0x7FFF;
	// xor r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// rlwinm r28,r8,0,16,16
	r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000;
	// clrlwi r30,r7,16
	r30.u64 = ctx.r7.u32 & 0xFFFF;
	// bge cr6,0x822e4128
	if (!ctx.cr6.lt) goto loc_822E4128;
	// cmplwi cr6,r10,32767
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32767, ctx.xer);
	// bge cr6,0x822e4128
	if (!ctx.cr6.lt) goto loc_822E4128;
	// clrlwi r11,r30,16
	ctx.r11.u64 = r30.u32 & 0xFFFF;
	// cmplwi cr6,r11,49149
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49149, ctx.xer);
	// bgt cr6,0x822e4128
	if (ctx.cr6.gt) goto loc_822E4128;
	// cmplwi cr6,r11,16319
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16319, ctx.xer);
	// bgt cr6,0x822e3e8c
	if (ctx.cr6.gt) goto loc_822E3E8C;
loc_822E3E84:
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// b 0x822e4138
	goto loc_822E4138;
loc_822E3E8C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822e3ec8
	if (!ctx.cr6.eq) goto loc_822E3EC8;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r30,r11,16
	r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x822e3ec8
	if (!ctx.cr0.eq) goto loc_822E3EC8;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e3ec8
	if (!ctx.cr6.eq) goto loc_822E3EC8;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e3ec8
	if (!ctx.cr6.eq) goto loc_822E3EC8;
	// sth r22,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, r22.u16);
	// b 0x822e4140
	goto loc_822E4140;
loc_822E3EC8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822e3f00
	if (!ctx.cr6.eq) goto loc_822E3F00;
	// clrlwi r11,r30,16
	ctx.r11.u64 = r30.u32 & 0xFFFF;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r30,r11,16
	r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x822e3f00
	if (!ctx.cr0.eq) goto loc_822E3F00;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e3f00
	if (!ctx.cr6.eq) goto loc_822E3F00;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e3e84
	if (ctx.cr6.eq) goto loc_822E3E84;
loc_822E3F00:
	// mr r31,r22
	r31.u64 = r22.u64;
	// addi r8,r1,86
	ctx.r8.s64 = ctx.r1.s64 + 86;
	// li r3,5
	ctx.r3.s64 = 5;
loc_822E3F0C:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822e3f78
	if (!ctx.cr6.gt) goto loc_822E3F78;
	// addi r10,r1,106
	ctx.r10.s64 = ctx.r1.s64 + 106;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r5,r4,2
	ctx.r5.s64 = ctx.r4.s64 + 2;
	// subf r6,r11,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_822E3F28:
	// lhz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// lhz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// lwz r11,2(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 2);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822e3f50
	if (ctx.cr6.lt) goto loc_822E3F50;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822e3f54
	if (!ctx.cr6.lt) goto loc_822E3F54;
loc_822E3F50:
	// li r7,1
	ctx.r7.s64 = 1;
loc_822E3F54:
	// stw r10,2(r8)
	REX_STORE_U32(ctx.r8.u32 + 2, ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822e3f6c
	if (ctx.cr6.eq) goto loc_822E3F6C;
	// lhz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r11.u16);
loc_822E3F6C:
	// addi r6,r6,-2
	ctx.r6.s64 = ctx.r6.s64 + -2;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// bdnz 0x822e3f28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E3F28;
loc_822E3F78:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bgt 0x822e3f0c
	if (ctx.cr0.gt) goto loc_822E3F0C;
	// clrlwi r11,r30,16
	ctx.r11.u64 = r30.u32 & 0xFFFF;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-16382
	ctx.r11.s64 = ctx.r11.s64 + -16382;
loc_822E3F98:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x822e3fe8
	if (!ctx.cr0.gt) goto loc_822E3FE8;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm. r7,r8,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x822e3fe8
	if (!ctx.cr0.eq) goto loc_822E3FE8;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 | ctx.r7.u64;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// b 0x822e3f98
	goto loc_822E3F98;
loc_822E3FE8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x822e4070
	if (ctx.cr6.gt) goto loc_822E4070;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x822e4070
	if (!ctx.cr0.lt) goto loc_822E4070;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_822E400C:
	// lhz r7,90(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// clrlwi. r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x822e401c
	if (ctx.cr0.eq) goto loc_822E401C;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_822E401C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r7,r9,31,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x80000000;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r8,31,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x80000000;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// extsh. r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// blt 0x822e400c
	if (ctx.cr0.lt) goto loc_822E400C;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// beq cr6,0x822e4070
	if (ctx.cr6.eq) goto loc_822E4070;
	// lhz r10,90(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// sth r10,90(r1)
	REX_STORE_U16(ctx.r1.u32 + 90, ctx.r10.u16);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_822E4070:
	// lhz r9,90(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// cmplwi cr6,r9,32768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32768, ctx.xer);
	// bgt cr6,0x822e4090
	if (ctx.cr6.gt) goto loc_822E4090;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// clrlwi r10,r10,15
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFF;
	// ori r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 32768;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822e40f0
	if (!ctx.cr6.eq) goto loc_822E40F0;
loc_822E4090:
	// lwz r10,86(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 86);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x822e40e8
	if (!ctx.cr6.eq) goto loc_822E40E8;
	// lwz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 82);
	// stw r22,86(r1)
	REX_STORE_U32(ctx.r1.u32 + 86, r22.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x822e40dc
	if (!ctx.cr6.eq) goto loc_822E40DC;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// stw r22,82(r1)
	REX_STORE_U32(ctx.r1.u32 + 82, r22.u32);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x822e40d0
	if (!ctx.cr6.eq) goto loc_822E40D0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r21,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r21.u16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x822e40f0
	goto loc_822E40F0;
loc_822E40D0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// b 0x822e40f0
	goto loc_822E40F0;
loc_822E40DC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,82(r1)
	REX_STORE_U32(ctx.r1.u32 + 82, ctx.r10.u32);
	// b 0x822e40f0
	goto loc_822E40F0;
loc_822E40E8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,86(r1)
	REX_STORE_U32(ctx.r1.u32 + 86, ctx.r10.u32);
loc_822E40F0:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// bge cr6,0x822e4128
	if (!ctx.cr6.lt) goto loc_822E4128;
	// clrlwi r10,r28,16
	ctx.r10.u64 = r28.u32 & 0xFFFF;
	// lhz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r9,106(r1)
	REX_STORE_U16(ctx.r1.u32 + 106, ctx.r9.u16);
	// stw r8,102(r1)
	REX_STORE_U32(ctx.r1.u32 + 102, ctx.r8.u32);
	// stw r7,98(r1)
	REX_STORE_U32(ctx.r1.u32 + 98, ctx.r7.u32);
	// sth r11,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// b 0x822e4140
	goto loc_822E4140;
loc_822E4128:
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// clrlwi. r11,r28,16
	ctx.r11.u64 = r28.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e4138
	if (!ctx.cr0.eq) goto loc_822E4138;
	// stw r23,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r23.u32);
loc_822E4138:
	// stw r22,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r22.u32);
	// stw r22,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r22.u32);
loc_822E4140:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x822e3de8
	if (!ctx.cr6.eq) goto loc_822E3DE8;
loc_822E4148:
	// lhz r11,106(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// lwz r8,102(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 102);
	// lwz r9,98(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 98);
	// lhz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// b 0x822e41b4
	goto loc_822E41B4;
loc_822E415C:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// b 0x822e41b4
	goto loc_822E41B4;
loc_822E4170:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// li r22,4
	r22.s64 = 4;
	// b 0x822e41b4
	goto loc_822E41B4;
loc_822E4188:
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// li r22,2
	r22.s64 = 2;
	// b 0x822e41b4
	goto loc_822E41B4;
loc_822E41A0:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// li r22,1
	r22.s64 = 1;
loc_822E41B4:
	// sth r11,10(r20)
	REX_STORE_U16(r20.u32 + 10, ctx.r11.u16);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r11,r19,16
	ctx.r11.u64 = r19.u32 & 0xFFFF;
	// stw r8,6(r20)
	REX_STORE_U32(r20.u32 + 6, ctx.r8.u32);
	// stw r9,2(r20)
	REX_STORE_U32(r20.u32 + 2, ctx.r9.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,0(r20)
	REX_STORE_U16(r20.u32 + 0, ctx.r11.u16);
loc_822E41D4:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_82311638) {
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
	ctx.lr = 0x82311640;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// lwz r27,44(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// bl 0x82311f78
	ctx.lr = 0x82311670;
	sub_82311F78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82311840
	if (ctx.cr6.lt) goto loc_82311840;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82311694
	if (!ctx.cr6.eq) goto loc_82311694;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed4
	return;
loc_82311694:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823116cc
	if (!ctx.cr6.gt) goto loc_823116CC;
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// ori r29,r11,1
	r29.u64 = ctx.r11.u64 | 1;
loc_823116A8:
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823113e8
	ctx.lr = 0x823116BC;
	sub_823113E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82311840
	if (ctx.cr6.lt) goto loc_82311840;
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r29.s32, ctx.xer);
	// bne cr6,0x823116a8
	if (!ctx.cr6.eq) goto loc_823116A8;
loc_823116CC:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// ld r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U64(r30.u32 + 16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82310ec8
	ctx.lr = 0x823116E0;
	sub_82310EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82311840
	if (ctx.cr6.lt) goto loc_82311840;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82311714
	if (!ctx.cr6.eq) goto loc_82311714;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82312638
	ctx.lr = 0x8231170C;
	sub_82312638(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82311840
	if (ctx.cr6.lt) goto loc_82311840;
loc_82311714:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82311740
	if (!ctx.cr6.eq) goto loc_82311740;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed4
	return;
loc_82311740:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823106d8
	ctx.lr = 0x8231174C;
	sub_823106D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82311840
	if (ctx.cr6.lt) goto loc_82311840;
	// lwz r31,44(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231177c
	if (!ctx.cr6.eq) goto loc_8231177C;
	// std r28,48(r27)
	REX_STORE_U64(r27.u32 + 48, r28.u64);
	// stw r28,56(r27)
	REX_STORE_U32(r27.u32 + 56, r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed4
	return;
loc_8231177C:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82311830
	if (ctx.cr6.eq) goto loc_82311830;
loc_82311788:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82311820
	if (!ctx.cr6.eq) goto loc_82311820;
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823117B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82311840
	if (ctx.cr6.lt) goto loc_82311840;
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823117d4
	if (!ctx.cr6.eq) goto loc_823117D4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823117D4:
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823117f0
	if (ctx.cr6.eq) goto loc_823117F0;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823117F0:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82311808
	if (ctx.cr6.eq) goto loc_82311808;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
loc_82311808:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x822f94e8
	ctx.lr = 0x82311818;
	sub_822F94E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82311840
	if (ctx.cr6.lt) goto loc_82311840;
loc_82311820:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82311788
	if (!ctx.cr6.eq) goto loc_82311788;
loc_82311830:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82311840
	if (ctx.cr6.lt) goto loc_82311840;
	// std r28,48(r27)
	REX_STORE_U64(r27.u32 + 48, r28.u64);
	// stw r28,56(r27)
	REX_STORE_U32(r27.u32 + 56, r28.u32);
loc_82311840:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82318120) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82318128;
	// lhz r11,580(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82318454
	if (!ctx.cr6.gt) goto loc_82318454;
	// li r30,0
	r30.s64 = 0;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
loc_82318140:
	// lwz r9,584(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 584);
	// lwz r11,320(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// lwz r6,648(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// lhzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,424(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 424);
	// lhz r10,118(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 118);
	// lwz r11,56(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// extsh r31,r10
	r31.s64 = ctx.r10.s16;
	// lwz r9,12(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lhz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x823183c4
	if (ctx.cr6.eq) goto loc_823183C4;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x823182e8
	if (ctx.cr6.eq) goto loc_823182E8;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8231822c
	if (!ctx.cr6.gt) goto loc_8231822C;
	// addi r5,r7,-4
	ctx.r5.s64 = ctx.r7.s64 + -4;
loc_823181A0:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82318204
	if (!ctx.cr6.gt) goto loc_82318204;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823181B0:
	// addi r29,r11,158
	r29.s64 = ctx.r11.s64 + 158;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r29,r3
	r29.u64 = REX_LOAD_U32(r29.u32 + ctx.r3.u32);
	// ble cr6,0x823181d8
	if (!ctx.cr6.gt) goto loc_823181D8;
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// b 0x823181e8
	goto loc_823181E8;
loc_823181D8:
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// addi r8,r8,117
	ctx.r8.s64 = ctx.r8.s64 + 117;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
loc_823181E8:
	// mullw r8,r8,r29
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r29.s32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x823181b0
	if (ctx.cr6.lt) goto loc_823181B0;
loc_82318204:
	// lhz r11,582(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 582);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// sraw r11,r10,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stwu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r5.u32 = ea;
	// lwz r6,648(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x823181a0
	if (ctx.cr6.lt) goto loc_823181A0;
loc_8231822C:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r31.s32, ctx.xer);
	// bge cr6,0x823182b0
	if (!ctx.cr6.lt) goto loc_823182B0;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r5,r11,-4
	ctx.r5.s64 = ctx.r11.s64 + -4;
loc_82318244:
	// lwz r6,648(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8231828c
	if (!ctx.cr6.gt) goto loc_8231828C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82318258:
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r29,r11,158
	r29.s64 = ctx.r11.s64 + 158;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwzx r29,r29,r3
	r29.u64 = REX_LOAD_U32(r29.u32 + ctx.r3.u32);
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// mullw r8,r8,r29
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r29.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// blt cr6,0x82318258
	if (ctx.cr6.lt) goto loc_82318258;
loc_8231828C:
	// lhz r11,582(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 582);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r31.s32, ctx.xer);
	// sraw r11,r10,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stwu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r5.u32 = ea;
	// blt cr6,0x82318244
	if (ctx.cr6.lt) goto loc_82318244;
loc_823182B0:
	// lwz r10,648(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82318434
	if (!ctx.cr6.gt) goto loc_82318434;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r4,464
	ctx.r9.s64 = ctx.r4.s64 + 464;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_823182CC:
	// lwzu r8,-4(r10)
	ea = -4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// lwz r8,648(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823182cc
	if (ctx.cr6.lt) goto loc_823182CC;
	// b 0x82318434
	goto loc_82318434;
loc_823182E8:
	// lwz r10,632(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(r31.s32, 2, ctx.xer);
	// lwz r9,468(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 468);
	// lwz r6,472(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 472);
	// lwz r11,636(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 636);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lhz r5,582(r3)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + 582);
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// sraw r11,r11,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r11.s64 = ctx.r11.s32 >> temp.u32;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r6,636(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 636);
	// lwz r9,468(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 468);
	// lhz r8,582(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 582);
	// lwz r5,632(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// sraw r11,r6,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r11.s64 = ctx.r6.s32 >> temp.u32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// ble cr6,0x823183a0
	if (!ctx.cr6.gt) goto loc_823183A0;
	// addi r10,r31,-2
	ctx.r10.s64 = r31.s64 + -2;
	// addi r11,r7,8
	ctx.r11.s64 = ctx.r7.s64 + 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82318364:
	// lwz r9,636(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 636);
	// lwz r6,-4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,-8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r8,632(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lhz r5,582(r3)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + 582);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r8,r8,r6
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// sraw r10,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82318364
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82318364;
loc_823183A0:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,-2
	ctx.r10.s64 = r31.s64 + -2;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,-4(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// stw r6,468(r4)
	REX_STORE_U32(ctx.r4.u32 + 468, ctx.r6.u32);
	// lwzx r5,r8,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r5,472(r4)
	REX_STORE_U32(ctx.r4.u32 + 472, ctx.r5.u32);
	// b 0x82318434
	goto loc_82318434;
loc_823183C4:
	// lwz r11,632(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// lwz r10,468(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 468);
	// lhz r9,582(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 582);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// sraw r11,r8,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r11.s64 = ctx.r8.s32 >> temp.u32;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// ble cr6,0x82318424
	if (!ctx.cr6.gt) goto loc_82318424;
	// addi r10,r31,-1
	ctx.r10.s64 = r31.s64 + -1;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823183FC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,632(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// lhz r8,582(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 582);
	// mullw r6,r10,r9
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// sraw r10,r6,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r10.s64 = ctx.r6.s32 >> temp.u32;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823183fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823183FC;
loc_82318424:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r10,468(r4)
	REX_STORE_U32(ctx.r4.u32 + 468, ctx.r10.u32);
loc_82318434:
	// lhz r10,580(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 580);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x82318140
	if (ctx.cr6.lt) goto loc_82318140;
loc_82318454:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8232B928) {
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
	ctx.lr = 0x8232B930;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r9,r7,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// lwz r6,12(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r31,4(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// lwz r30,16(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// lwz r29,20(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// mulld r11,r5,r10
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * ctx.r10.u64);
	// mulld r28,r9,r6
	r28.s64 = static_cast<int64_t>(ctx.r9.u64 * ctx.r6.u64);
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// mulld r10,r10,r9
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r9.u64);
	// mulld r9,r5,r6
	ctx.r9.s64 = static_cast<int64_t>(ctx.r5.u64 * ctx.r6.u64);
	// sradi r27,r11,30
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x3FFFFFFF) != 0);
	r27.s64 = ctx.r11.s64 >> 30;
	// mulld r5,r8,r7
	ctx.r5.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r7.u64);
	// sradi r6,r28,30
	ctx.xer.ca = (r28.s64 < 0) & ((r28.u64 & 0x3FFFFFFF) != 0);
	ctx.r6.s64 = r28.s64 >> 30;
	// sradi r28,r10,30
	ctx.xer.ca = (ctx.r10.s64 < 0) & ((ctx.r10.u64 & 0x3FFFFFFF) != 0);
	r28.s64 = ctx.r10.s64 >> 30;
	// mulld r11,r7,r7
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r7.u64);
	// sradi r26,r9,30
	ctx.xer.ca = (ctx.r9.s64 < 0) & ((ctx.r9.u64 & 0x3FFFFFFF) != 0);
	r26.s64 = ctx.r9.s64 >> 30;
	// sradi r10,r5,30
	ctx.xer.ca = (ctx.r5.s64 < 0) & ((ctx.r5.u64 & 0x3FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s64 >> 30;
	// sradi r9,r11,30
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x3FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s64 >> 30;
	// lis r5,16383
	ctx.r5.s64 = 1073676288;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r9,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r9.u64;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// extsw r31,r31
	r31.s64 = r31.s32;
	// mulld r25,r3,r5
	r25.s64 = static_cast<int64_t>(ctx.r3.u64 * ctx.r5.u64);
	// mulld r24,r31,r9
	r24.s64 = static_cast<int64_t>(r31.u64 * ctx.r9.u64);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// mulld r5,r31,r5
	ctx.r5.s64 = static_cast<int64_t>(r31.u64 * ctx.r5.u64);
	// mulld r3,r3,r9
	ctx.r3.s64 = static_cast<int64_t>(ctx.r3.u64 * ctx.r9.u64);
	// sradi r31,r25,30
	ctx.xer.ca = (r25.s64 < 0) & ((r25.u64 & 0x3FFFFFFF) != 0);
	r31.s64 = r25.s64 >> 30;
	// mulld r9,r11,r8
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r8.u64);
	// sradi r25,r24,30
	ctx.xer.ca = (r24.s64 < 0) & ((r24.u64 & 0x3FFFFFFF) != 0);
	r25.s64 = r24.s64 >> 30;
	// mulld r24,r10,r7
	r24.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r7.u64);
	// sradi r5,r5,30
	ctx.xer.ca = (ctx.r5.s64 < 0) & ((ctx.r5.u64 & 0x3FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r5.s64 >> 30;
	// mulld r11,r11,r7
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r7.u64);
	// sradi r3,r3,30
	ctx.xer.ca = (ctx.r3.s64 < 0) & ((ctx.r3.u64 & 0x3FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s64 >> 30;
	// sradi r9,r9,30
	ctx.xer.ca = (ctx.r9.s64 < 0) & ((ctx.r9.u64 & 0x3FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s64 >> 30;
	// mulld r8,r10,r8
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r8.u64);
	// sradi r7,r24,30
	ctx.xer.ca = (r24.s64 < 0) & ((r24.u64 & 0x3FFFFFFF) != 0);
	ctx.r7.s64 = r24.s64 >> 30;
	// sradi r24,r11,30
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x3FFFFFFF) != 0);
	r24.s64 = ctx.r11.s64 >> 30;
	// sradi r8,r8,30
	ctx.xer.ca = (ctx.r8.s64 < 0) & ((ctx.r8.u64 & 0x3FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s64 >> 30;
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// extsw r7,r24
	ctx.r7.s64 = r24.s32;
	// extsw r9,r8
	ctx.r9.s64 = ctx.r8.s32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r7,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r7.u64;
	// extsw r8,r27
	ctx.r8.s64 = r27.s32;
	// subf r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	// extsw r20,r30
	r20.s64 = r30.s32;
	// extsw r27,r7
	r27.s64 = ctx.r7.s32;
	// extsw r9,r6
	ctx.r9.s64 = ctx.r6.s32;
	// mulld r30,r20,r27
	r30.s64 = static_cast<int64_t>(r20.u64 * r27.u64);
	// extsw r6,r31
	ctx.r6.s64 = r31.s32;
	// extsw r28,r28
	r28.s64 = r28.s32;
	// extsw r26,r26
	r26.s64 = r26.s32;
	// extsw r7,r25
	ctx.r7.s64 = r25.s32;
	// sradi r19,r30,30
	ctx.xer.ca = (r30.s64 < 0) & ((r30.u64 & 0x3FFFFFFF) != 0);
	r19.s64 = r30.s64 >> 30;
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r31,r8,r9
	r31.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r24,r26,r28
	r24.u64 = r28.u64 - r26.u64;
	// add r30,r6,r7
	r30.u64 = ctx.r6.u64 + ctx.r7.u64;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// extsw r9,r29
	ctx.r9.s64 = r29.s32;
	// lwz r10,24(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// subf r25,r5,r3
	r25.u64 = ctx.r3.u64 - ctx.r5.u64;
	// mulld r7,r9,r8
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * ctx.r8.u64);
	// mulld r6,r9,r27
	ctx.r6.s64 = static_cast<int64_t>(ctx.r9.u64 * r27.u64);
	// mulld r5,r20,r8
	ctx.r5.s64 = static_cast<int64_t>(r20.u64 * ctx.r8.u64);
	// sradi r4,r7,30
	ctx.xer.ca = (ctx.r7.s64 < 0) & ((ctx.r7.u64 & 0x3FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r7.s64 >> 30;
	// sradi r3,r6,30
	ctx.xer.ca = (ctx.r6.s64 < 0) & ((ctx.r6.u64 & 0x3FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r6.s64 >> 30;
	// sradi r9,r5,30
	ctx.xer.ca = (ctx.r5.s64 < 0) & ((ctx.r5.u64 & 0x3FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r5.s64 >> 30;
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// extsw r8,r19
	ctx.r8.s64 = r19.s32;
	// subf r26,r11,r10
	r26.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r27,r7,r6
	r27.u64 = ctx.r6.u64 - ctx.r7.u64;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r29,r8,r9
	r29.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r26,r27
	ctx.r11.u64 = r26.u64 + r27.u64;
	// add r10,r28,r29
	ctx.r10.u64 = r28.u64 + r29.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + r24.u64;
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + r31.u64;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// bl 0x8232b820
	ctx.lr = 0x8232BAE8;
	sub_8232B820(ctx, base);
	// rlwinm r9,r23,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r26,r25
	ctx.r8.u64 = r25.u64 - r26.u64;
	// subf r7,r27,r28
	ctx.r7.u64 = r28.u64 - r27.u64;
	// subf r11,r29,r8
	ctx.r11.u64 = ctx.r8.u64 - r29.u64;
	// subf r10,r30,r7
	ctx.r10.u64 = ctx.r7.u64 - r30.u64;
	// stwx r3,r9,r21
	REX_STORE_U32(ctx.r9.u32 + r21.u32, ctx.r3.u32);
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + r31.u64;
	// add r5,r10,r24
	ctx.r5.u64 = ctx.r10.u64 + r24.u64;
	// srawi r4,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 1;
	// srawi r3,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 1;
	// bl 0x8232b820
	ctx.lr = 0x8232BB14;
	sub_8232B820(ctx, base);
	// subf r4,r23,r22
	ctx.r4.u64 = r22.u64 - r23.u64;
	// subf r11,r29,r26
	ctx.r11.u64 = r26.u64 - r29.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r30,r28
	ctx.r8.u64 = r28.u64 - r30.u64;
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - r25.u64;
	// subf r10,r24,r8
	ctx.r10.u64 = ctx.r8.u64 - r24.u64;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + r31.u64;
	// stwx r3,r9,r21
	REX_STORE_U32(ctx.r9.u32 + r21.u32, ctx.r3.u32);
	// add r6,r10,r27
	ctx.r6.u64 = ctx.r10.u64 + r27.u64;
	// srawi r4,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 1;
	// srawi r3,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 1;
	// bl 0x8232b820
	ctx.lr = 0x8232BB44;
	sub_8232B820(ctx, base);
	// add r5,r23,r22
	ctx.r5.u64 = r23.u64 + r22.u64;
	// subf r4,r29,r28
	ctx.r4.u64 = r28.u64 - r29.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r26,r27
	ctx.r8.u64 = r27.u64 - r26.u64;
	// subf r11,r31,r4
	ctx.r11.u64 = ctx.r4.u64 - r31.u64;
	// subf r10,r25,r8
	ctx.r10.u64 = ctx.r8.u64 - r25.u64;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + r30.u64;
	// stwx r3,r9,r21
	REX_STORE_U32(ctx.r9.u32 + r21.u32, ctx.r3.u32);
	// add r6,r10,r24
	ctx.r6.u64 = ctx.r10.u64 + r24.u64;
	// srawi r4,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 1;
	// srawi r3,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 1;
	// bl 0x8232b820
	ctx.lr = 0x8232BB74;
	sub_8232B820(ctx, base);
	// rlwinm r5,r22,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r4,r23,r5
	ctx.r4.u64 = ctx.r5.u64 - r23.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r21
	REX_STORE_U32(ctx.r11.u32 + r21.u32, ctx.r3.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_8233EC80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8233EC88;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233eda4
	if (ctx.cr6.eq) goto loc_8233EDA4;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8233ed68
	if (ctx.cr6.eq) goto loc_8233ED68;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233ecc0
	if (!ctx.cr6.eq) goto loc_8233ECC0;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// b 0x8233ecd8
	goto loc_8233ECD8;
loc_8233ECC0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stwx r30,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r30.u32);
loc_8233ECD8:
	// lwz r10,24(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 24);
	// addi r29,r28,16
	r29.s64 = r28.s64 + 16;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233ecfc
	if (ctx.cr6.eq) goto loc_8233ECFC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r10.u32);
	// stwx r30,r8,r9
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, r30.u32);
loc_8233ECFC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233ed68
	if (ctx.cr6.eq) goto loc_8233ED68;
loc_8233ED04:
	// lwz r10,36(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 36);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// bl 0x8233ff80
	ctx.lr = 0x8233ED14;
	sub_8233FF80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233ed28
	if (!ctx.cr6.eq) goto loc_8233ED28;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// b 0x8233ed40
	goto loc_8233ED40;
loc_8233ED28:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stwx r30,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r30.u32);
loc_8233ED40:
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233ed60
	if (ctx.cr6.eq) goto loc_8233ED60;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r10.u32);
	// stwx r30,r8,r9
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, r30.u32);
loc_8233ED60:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233ed04
	if (!ctx.cr6.eq) goto loc_8233ED04;
loc_8233ED68:
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// bl 0x823a6718
	ctx.lr = 0x8233ED70;
	sub_823A6718(ctx, base);
	// addi r3,r28,16
	ctx.r3.s64 = r28.s64 + 16;
	// bl 0x823a6718
	ctx.lr = 0x8233ED78;
	sub_823A6718(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ed8c
	if (ctx.cr6.eq) goto loc_8233ED8C;
	// bl 0x8233d4c0
	ctx.lr = 0x8233ED88;
	sub_8233D4C0(ctx, base);
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
loc_8233ED8C:
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8229a710
	ctx.lr = 0x8233ED9C;
	sub_8229A710(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822d98f0
	ctx.lr = 0x8233EDA4;
	sub_822D98F0(ctx, base);
loc_8233EDA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82348098) {
	REX_FUNC_PROLOGUE();
	// lwz r10,15364(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15364);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-3
	ctx.r9.s64 = -3;
	// stw r11,288(r3)
	REX_STORE_U32(ctx.r3.u32 + 288, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,3412(r3)
	REX_STORE_U32(ctx.r3.u32 + 3412, ctx.r9.u32);
	// stw r11,3416(r3)
	REX_STORE_U32(ctx.r3.u32 + 3416, ctx.r11.u32);
	// stw r11,3432(r3)
	REX_STORE_U32(ctx.r3.u32 + 3432, ctx.r11.u32);
	// beq cr6,0x823480d0
	if (ctx.cr6.eq) goto loc_823480D0;
	// stw r11,14852(r3)
	REX_STORE_U32(ctx.r3.u32 + 14852, ctx.r11.u32);
	// stw r11,3420(r3)
	REX_STORE_U32(ctx.r3.u32 + 3420, ctx.r11.u32);
	// stw r11,3436(r3)
	REX_STORE_U32(ctx.r3.u32 + 3436, ctx.r11.u32);
	// stw r11,22136(r3)
	REX_STORE_U32(ctx.r3.u32 + 22136, ctx.r11.u32);
	// blr 
	return;
loc_823480D0:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,3420(r3)
	REX_STORE_U32(ctx.r3.u32 + 3420, ctx.r11.u32);
	// stw r11,3436(r3)
	REX_STORE_U32(ctx.r3.u32 + 3436, ctx.r11.u32);
	// stw r10,14852(r3)
	REX_STORE_U32(ctx.r3.u32 + 14852, ctx.r10.u32);
	// stw r11,22136(r3)
	REX_STORE_U32(ctx.r3.u32 + 22136, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8234EFD8) {
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
	ctx.lr = 0x8234EFE0;
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
	// addi r27,r11,24256
	r27.s64 = ctx.r11.s64 + 24256;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// ld r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 0);
	// rldicl r9,r10,9,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 9) & 0x1FF;
	// rlwinm r26,r9,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r26,r27
	ctx.r4.u64 = REX_LOAD_U8(r26.u32 + r27.u32);
	// bl 0x82337f50
	ctx.lr = 0x8234F010;
	sub_82337F50(ctx, base);
	// addi r8,r27,1
	ctx.r8.s64 = r27.s64 + 1;
	// li r31,3
	r31.s64 = 3;
	// lbzx r11,r26,r8
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8234f028
	if (!ctx.cr6.eq) goto loc_8234F028;
	// stw r31,20(r30)
	REX_STORE_U32(r30.u32 + 20, r31.u32);
loc_8234F028:
	// lwz r3,84(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 84);
	// clrlwi r26,r11,24
	r26.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234f138
	if (!ctx.cr6.eq) goto loc_8234F138;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt cr6,0x8234f138
	if (ctx.cr6.lt) goto loc_8234F138;
	// cmpwi cr6,r26,20
	ctx.cr6.compare<int32_t>(r26.s32, 20, ctx.xer);
	// bgt cr6,0x8234f138
	if (ctx.cr6.gt) goto loc_8234F138;
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
	// bge 0x8234f070
	if (!ctx.cr0.lt) goto loc_8234F070;
	// bl 0x823380c8
	ctx.lr = 0x8234F070;
	sub_823380C8(ctx, base);
loc_8234F070:
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
	// bne cr6,0x8234f138
	if (!ctx.cr6.eq) goto loc_8234F138;
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
	ctx.lr = 0x8234F0C0;
	sub_82337F50(ctx, base);
	// addi r7,r27,1
	ctx.r7.s64 = r27.s64 + 1;
	// lbzx r11,r25,r7
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8234f0d4
	if (!ctx.cr6.eq) goto loc_8234F0D4;
	// stw r31,20(r30)
	REX_STORE_U32(r30.u32 + 20, r31.u32);
loc_8234F0D4:
	// lwz r10,84(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 84);
	// clrlwi r28,r11,24
	r28.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8234f138
	if (!ctx.cr6.eq) goto loc_8234F138;
	// srawi r5,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	ctx.r5.s64 = r26.s32 >> 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8238ecb0
	ctx.lr = 0x8234F0F8;
	sub_8238ECB0(ctx, base);
	// clrlwi r5,r26,31
	ctx.r5.u64 = r26.u32 & 0x1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8238ecb0
	ctx.lr = 0x8234F108;
	sub_8238ECB0(ctx, base);
	// li r30,1
	r30.s64 = 1;
loc_8234F10C:
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
	ctx.lr = 0x8234F120;
	sub_8238ECB0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bge 0x8234f10c
	if (!ctx.cr0.lt) goto loc_8234F10C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_8234F138:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82358070) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r9,15396(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 15396);
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// lwz r7,15392(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 15392);
	// addi r5,r1,-16
	ctx.r5.s64 = ctx.r1.s64 + -16;
	// lwz r11,3832(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3832);
	// ori r4,r8,128
	ctx.r4.u64 = ctx.r8.u64 | 128;
	// lwz r10,3844(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3844);
	// mullw r6,r9,r7
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// vspltisb v0,-1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0xFF)));
	// stw r4,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// vspltisw v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_set1_epi32(int(0x0)));
	// lvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v13,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// srawi r9,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 4;
	// vmrghb v0,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// or r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r4,r8,28
	ctx.r4.u64 = ctx.r8.u32 & 0xF;
	// li r5,16
	ctx.r5.s64 = 16;
	// subf r7,r7,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r7.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82358110
	if (ctx.cr6.eq) goto loc_82358110;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82358138
	if (!ctx.cr6.gt) goto loc_82358138;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_823580DC:
	// lvrx128 v62,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lvrx128 v60,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v12,v61,v62
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lvlx128 v59,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v11,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vaddubs v10,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_adds_epu8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// stvlx v10,0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// stvrx v10,r11,r5
	ea = ctx.r11.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v10.u8[i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x823580dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823580DC;
	// b 0x82358138
	goto loc_82358138;
loc_82358110:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82358138
	if (!ctx.cr6.gt) goto loc_82358138;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8235811C:
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vaddubs v10,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_adds_epu8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// stvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x8235811c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235811C;
loc_82358138:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82358170
	if (!ctx.cr6.gt) goto loc_82358170;
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82358148:
	// lbzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x82358160
	if (!ctx.cr6.gt) goto loc_82358160;
	// li r10,255
	ctx.r10.s64 = 255;
loc_82358160:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82358148
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82358148;
loc_82358170:
	// srawi r9,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 2;
	// lwz r11,3836(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3836);
	// lwz r10,3848(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3848);
	// addze r6,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r6.s64 = temp.s64;
	// or r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 | ctx.r11.u64;
	// srawi r9,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 4;
	// clrlwi r7,r8,28
	ctx.r7.u64 = ctx.r8.u32 & 0xF;
	// rlwinm r4,r9,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// subf r7,r4,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r4.u64;
	// beq cr6,0x82358214
	if (ctx.cr6.eq) goto loc_82358214;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8235826c
	if (!ctx.cr6.gt) goto loc_8235826C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_823581B0:
	// lvrx128 v58,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v57,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v56,r8,r10
	temp.u32 = ctx.r8.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v55,v57,v58
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvlx128 v54,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vor128 v53,v54,v56
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vupklsb128 v52,v55,v0
	simde_mm_store_si128((simde__m128i*)ctx.v52.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v55.s16)));
	// vupkhsb128 v51,v55,v0
	simde_mm_store_si128((simde__m128i*)ctx.v51.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v55.s8), simde_mm_load_si128((simde__m128i*)ctx.v55.s8))));
	// vupklsb128 v50,v53,v0
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v53.s16)));
	// vupkhsb128 v49,v53,v0
	simde_mm_store_si128((simde__m128i*)ctx.v49.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v53.s8), simde_mm_load_si128((simde__m128i*)ctx.v53.s8))));
	// vand128 v12,v52,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v11,v51,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v10,v50,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v9,v49,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v8,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v7,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsubshs v6,v8,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v5,v7,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vpkshus128 v48,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvlx128 v48,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// stvrx128 v48,r11,r5
	ea = ctx.r11.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v48.u8[i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x823581b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823581B0;
	// b 0x8235826c
	goto loc_8235826C;
loc_82358214:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8235826c
	if (!ctx.cr6.gt) goto loc_8235826C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82358220:
	// lvx128 v47,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vupklsb128 v45,v47,v0
	simde_mm_store_si128((simde__m128i*)ctx.v45.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v47.s16)));
	// vupklsb128 v44,v46,v0
	simde_mm_store_si128((simde__m128i*)ctx.v44.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v46.s16)));
	// vupkhsb128 v43,v46,v0
	simde_mm_store_si128((simde__m128i*)ctx.v43.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v46.s8), simde_mm_load_si128((simde__m128i*)ctx.v46.s8))));
	// vupkhsb128 v42,v47,v0
	simde_mm_store_si128((simde__m128i*)ctx.v42.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v47.s8), simde_mm_load_si128((simde__m128i*)ctx.v47.s8))));
	// vand128 v12,v45,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v11,v44,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v10,v43,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v9,v42,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v8,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v7,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v6,v8,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v5,v7,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vpkshus128 v41,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvx128 v41,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82358220
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82358220;
loc_8235826C:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x823582b8
	if (!ctx.cr6.gt) goto loc_823582B8;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
loc_8235827C:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,1(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// add r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x8235829c
	if (!ctx.cr6.gt) goto loc_8235829C;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x823582a8
	goto loc_823582A8;
loc_8235829C:
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
loc_823582A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r11,1(r8)
	ea = 1 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x8235827c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235827C;
loc_823582B8:
	// lwz r11,3840(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3840);
	// srawi r9,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 4;
	// lwz r10,3852(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3852);
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// or r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 | ctx.r11.u64;
	// subf r7,r8,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r8.u64;
	// clrlwi r3,r4,28
	ctx.r3.u64 = ctx.r4.u32 & 0xF;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82358354
	if (ctx.cr6.eq) goto loc_82358354;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823583ac
	if (!ctx.cr6.gt) goto loc_823583AC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_823582F0:
	// lvrx128 v40,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v39,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v38,r8,r10
	temp.u32 = ctx.r8.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v37,v39,v40
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// lvlx128 v36,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vor128 v35,v36,v38
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// vupklsb128 v34,v37,v0
	simde_mm_store_si128((simde__m128i*)ctx.v34.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v37.s16)));
	// vupkhsb128 v33,v37,v0
	simde_mm_store_si128((simde__m128i*)ctx.v33.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v37.s8), simde_mm_load_si128((simde__m128i*)ctx.v37.s8))));
	// vupklsb128 v32,v35,v0
	simde_mm_store_si128((simde__m128i*)ctx.v32.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v35.s16)));
	// vupkhsb128 v63,v35,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v35.s8), simde_mm_load_si128((simde__m128i*)ctx.v35.s8))));
	// vand128 v12,v34,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v11,v33,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v10,v32,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v9,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v8,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v7,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsubshs v6,v8,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v5,v7,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vpkshus128 v62,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvlx128 v62,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvrx128 v62,r11,r5
	ea = ctx.r11.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x823582f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823582F0;
	// b 0x823583ac
	goto loc_823583AC;
loc_82358354:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823583ac
	if (!ctx.cr6.gt) goto loc_823583AC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82358360:
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vupklsb128 v59,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v59.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v61.s16)));
	// vupklsb128 v58,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v58.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v60.s16)));
	// vupkhsb128 v57,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v57.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v60.s8), simde_mm_load_si128((simde__m128i*)ctx.v60.s8))));
	// vupkhsb128 v56,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v56.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v61.s8), simde_mm_load_si128((simde__m128i*)ctx.v61.s8))));
	// vand128 v12,v59,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v11,v58,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v10,v57,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v9,v56,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v8,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v7,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v6,v8,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v5,v7,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vpkshus128 v55,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvx128 v55,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82358360
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82358360;
loc_823583AC:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
loc_823583BC:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,1(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// add r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x823583dc
	if (!ctx.cr6.gt) goto loc_823583DC;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x823583e8
	goto loc_823583E8;
loc_823583DC:
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
loc_823583E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r11,1(r8)
	ea = 1 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x823583bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823583BC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8236BA80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236BA90:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8236ba90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236BA90;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r10,r3,r6
	ctx.r10.u64 = ctx.r3.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236BAB4:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8236bab4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236BAB4;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236BAD8:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8236bad8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236BAD8;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236BAFC:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8236bafc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236BAFC;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236BB20:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8236bb20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236BB20;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236BB44:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8236bb44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236BB44;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236BB68:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8236bb68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236BB68;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236BB8C:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8236bb8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236BB8C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823746B0) {
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
	ctx.lr = 0x823746B8;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r17,348(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// stw r10,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r10.u32);
	// li r30,0
	r30.s64 = 0;
	// cntlzw r11,r17
	ctx.r11.u64 = r17.u32 == 0 ? 32 : __builtin_clz(r17.u32);
	// lwz r21,380(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r7,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r7.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r9,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r9.u32);
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r16,r8
	r16.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// beq cr6,0x8237472c
	if (ctx.cr6.eq) goto loc_8237472C;
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// srawi r10,r25,1
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x1) != 0);
	ctx.r10.s64 = r25.s32 >> 1;
	// stw r11,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r11.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// lwz r26,324(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// rotlwi r25,r10,0
	r25.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r10.u32);
loc_8237472C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r22,388(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwzx r4,r11,r20
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// bl 0x82397528
	ctx.lr = 0x82374748;
	sub_82397528(ctx, base);
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823748a8
	if (!ctx.cr6.eq) goto loc_823748A8;
	// not r11,r3
	ctx.r11.u64 = ~ctx.r3.u64;
	// srawi r18,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r18.s64 = ctx.r3.s32 >> 1;
	// clrlwi r14,r11,31
	r14.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq cr6,0x823748b4
	if (ctx.cr6.eq) goto loc_823748B4;
	// lwz r26,1964(r24)
	r26.u64 = REX_LOAD_U32(r24.u32 + 1964);
	// li r31,1
	r31.s64 = 1;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// li r15,1
	r15.s64 = 1;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq cr6,0x8237478c
	if (ctx.cr6.eq) goto loc_8237478C;
	// li r21,1
	r21.s64 = 1;
	// li r25,1
	r25.s64 = 1;
	// b 0x823747c4
	goto loc_823747C4;
loc_8237478C:
	// lwz r10,356(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// ble cr6,0x823747a4
	if (!ctx.cr6.gt) goto loc_823747A4;
	// mr r21,r30
	r21.u64 = r30.u64;
	// mr r17,r30
	r17.u64 = r30.u64;
	// b 0x823747a8
	goto loc_823747A8;
loc_823747A4:
	// li r21,3
	r21.s64 = 3;
loc_823747A8:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r25,2
	r25.s64 = 2;
	// xoris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 ^ 2147483648;
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addc r7,r8,r9
	ctx.xer.ca = ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32;
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r26,r5,r26
	r26.u64 = ctx.r5.u64 & r26.u64;
loc_823747C4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r10,364(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lis r9,-32162
	ctx.r9.s64 = -2107768832;
	// lwz r30,320(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + 320);
	// addi r8,r11,12804
	ctx.r8.s64 = ctx.r11.s64 + 12804;
	// lwz r29,316(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 316);
	// addi r7,r9,-28636
	ctx.r7.s64 = ctx.r9.s64 + -28636;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r27,r11,-23584
	r27.s64 = ctx.r11.s64 + -23584;
	// lbzx r6,r10,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// rotlwi r5,r6,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lwzx r28,r5,r7
	r28.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
loc_823747F4:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r17.s32, ctx.xer);
	// blt cr6,0x8237480c
	if (ctx.cr6.lt) goto loc_8237480C;
	// mr r25,r21
	r25.u64 = r21.u64;
loc_8237480C:
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// lwzx r4,r11,r20
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82396da0
	ctx.lr = 0x82374830;
	sub_82396DA0(ctx, base);
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823748a8
	if (!ctx.cr6.eq) goto loc_823748A8;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mullw r8,r10,r29
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// and r7,r11,r26
	ctx.r7.u64 = ctx.r11.u64 & r26.u64;
	// srawi r6,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 6;
	// srawi r10,r10,15
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 15;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// xor r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 ^ r30.u64;
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// add r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 + ctx.r8.u64;
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// lhzx r8,r5,r27
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + r27.u32);
	// subf r7,r10,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r10.u64;
	// addi r31,r11,1
	r31.s64 = ctx.r11.s64 + 1;
	// lbzx r5,r4,r28
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + r28.u32);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r4,r7,r6
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// rotlwi r3,r5,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// sthx r11,r3,r23
	REX_STORE_U16(ctx.r3.u32 + r23.u32, ctx.r11.u16);
	// beq cr6,0x823747f4
	if (ctx.cr6.eq) goto loc_823747F4;
	// cmpwi cr6,r31,64
	ctx.cr6.compare<int32_t>(r31.s32, 64, ctx.xer);
	// ble cr6,0x82374a1c
	if (!ctx.cr6.gt) goto loc_82374A1C;
loc_823748A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ea0
	return;
loc_823748B4:
	// lwz r11,1968(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1968);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82374994
	if (ctx.cr6.eq) goto loc_82374994;
	// addi r10,r18,1
	ctx.r10.s64 = r18.s64 + 1;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x82374994
	if (!ctx.cr6.lt) goto loc_82374994;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,372(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// addis r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 65536;
	// addi r7,r7,-32768
	ctx.r7.s64 = ctx.r7.s64 + -32768;
	// srawi r11,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 16;
	// add r6,r11,r18
	ctx.r6.u64 = ctx.r11.u64 + r18.u64;
	// mullw r11,r6,r16
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(r16.s32);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// srawi. r10,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x82374908
	if (!ctx.cr0.lt) goto loc_82374908;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// b 0x82374914
	goto loc_82374914;
loc_82374908:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x82374914
	if (!ctx.cr6.gt) goto loc_82374914;
	// li r10,255
	ctx.r10.s64 = 255;
loc_82374914:
	// lis r11,257
	ctx.r11.s64 = 16842752;
	// lwz r31,340(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// srawi r9,r27,2
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3) != 0);
	ctx.r9.s64 = r27.s32 >> 2;
	// lwz r28,364(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// ori r8,r11,257
	ctx.r8.u64 = ctx.r11.u64 | 257;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r7,r10,r8
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// stw r7,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stw r7,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// li r15,1
	r15.s64 = 1;
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r7,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r7.u32);
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// b 0x823749c4
	goto loc_823749C4;
loc_82374994:
	// mr r15,r18
	r15.u64 = r18.u64;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bne cr6,0x82374a2c
	if (!ctx.cr6.eq) goto loc_82374A2C;
	// lwz r28,364(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
loc_823749A4:
	// lwz r31,340(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r3,1968(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 1968);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x823733c8
	ctx.lr = 0x823749C4;
	sub_823733C8(ctx, base);
loc_823749C4:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x823749e4
	if (!ctx.cr6.eq) goto loc_823749E4;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r3,1972(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 1972);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x823966b8
	ctx.lr = 0x823749E4;
	sub_823966B8(ctx, base);
loc_823749E4:
	// lwz r11,3948(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82374a10
	if (ctx.cr6.eq) goto loc_82374A10;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// lwz r5,248(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 248);
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82396360
	ctx.lr = 0x82374A10;
	sub_82396360(ctx, base);
loc_82374A10:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ea0
	return;
loc_82374A1C:
	// lwz r25,332(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r21,380(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r26,324(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r27,308(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
loc_82374A2C:
	// lwz r28,364(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// mullw r10,r18,r16
	ctx.r10.s64 = int64_t(r18.s32) * int64_t(r16.s32);
	// sth r10,0(r23)
	REX_STORE_U16(r23.u32 + 0, ctx.r10.u16);
	// or r9,r26,r25
	ctx.r9.u64 = r26.u64 | r25.u64;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82374a54
	if (ctx.cr6.eq) goto loc_82374A54;
	// addi r10,r18,1
	ctx.r10.s64 = r18.s64 + 1;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x82374a58
	if (!ctx.cr6.lt) goto loc_82374A58;
loc_82374A54:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82374A58:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r3,1772(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 1772);
	// lwz r29,1968(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 1968);
	// addi r10,r10,-23456
	ctx.r10.s64 = ctx.r10.s64 + -23456;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lhz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// extsh r31,r8
	r31.s64 = ctx.r8.s16;
	// lbzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// extsb r30,r7
	r30.s64 = ctx.r7.s8;
	// beq cr6,0x82374a98
	if (ctx.cr6.eq) goto loc_82374A98;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82374a98
	if (ctx.cr6.lt) goto loc_82374A98;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82372670
	ctx.lr = 0x82374A98;
	sub_82372670(ctx, base);
loc_82374A98:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bne cr6,0x82374adc
	if (!ctx.cr6.eq) goto loc_82374ADC;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x82374ab0
	if (ctx.cr6.eq) goto loc_82374AB0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x82374adc
	if (!ctx.cr6.lt) goto loc_82374ADC;
loc_82374AB0:
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// li r9,32
	ctx.r9.s64 = 32;
	// srawi r8,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 3;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwinm r8,r11,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_82374AD0:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82374ad0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82374AD0;
	// b 0x823749a4
	goto loc_823749A4;
loc_82374ADC:
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 52);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,8
	ctx.r5.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82374AF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823749a4
	goto loc_823749A4;
}

DEFINE_REX_FUNC(sub_82385710) {
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
	ctx.lr = 0x82385718;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3792(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3792);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r29,3812(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 3812);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82385744
	if (ctx.cr6.eq) goto loc_82385744;
	// lwz r10,224(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82385748
	goto loc_82385748;
loc_82385744:
	// mr r28,r23
	r28.u64 = r23.u64;
loc_82385748:
	// lwz r11,3796(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3796);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82385760
	if (ctx.cr6.eq) goto loc_82385760;
	// lwz r10,224(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 224);
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82385764
	goto loc_82385764;
loc_82385760:
	// mr r27,r23
	r27.u64 = r23.u64;
loc_82385764:
	// lwz r11,3820(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3820);
	// lwz r26,3828(r30)
	r26.u64 = REX_LOAD_U32(r30.u32 + 3828);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82385780
	if (ctx.cr6.eq) goto loc_82385780;
	// lwz r10,224(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 224);
	// add r25,r10,r11
	r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82385784
	goto loc_82385784;
loc_82385780:
	// mr r25,r23
	r25.u64 = r23.u64;
loc_82385784:
	// lwz r11,3824(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3824);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238579c
	if (ctx.cr6.eq) goto loc_8238579C;
	// lwz r10,224(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 224);
	// add r24,r10,r11
	r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823857a0
	goto loc_823857A0;
loc_8238579C:
	// mr r24,r23
	r24.u64 = r23.u64;
loc_823857A0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82385040
	ctx.lr = 0x823857AC;
	sub_82385040(ctx, base);
	// lwz r11,20688(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// lwz r9,368(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 368);
	// addi r8,r30,2940
	ctx.r8.s64 = r30.s64 + 2940;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r30,2952
	ctx.r7.s64 = r30.s64 + 2952;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r5,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r5.u32);
	// lwz r9,372(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 372);
	// lwz r11,20688(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// lwz r11,376(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 376);
	// lwz r10,20688(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// mulli r10,r10,504
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(504));
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// lwz r6,364(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 364);
	// stw r6,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// lwz r11,252(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 252);
	// lwz r5,248(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 248);
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,255
	ctx.r4.s64 = ctx.r11.s64 + 255;
	// stb r4,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r4.u8);
	// lwz r11,352(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 352);
	// stb r11,25(r31)
	REX_STORE_U8(r31.u32 + 25, ctx.r11.u8);
	// lwz r9,348(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 348);
	// stb r9,26(r31)
	REX_STORE_U8(r31.u32 + 26, ctx.r9.u8);
	// lwz r5,2380(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 2380);
	// stw r5,336(r31)
	REX_STORE_U32(r31.u32 + 336, ctx.r5.u32);
	// lwz r4,284(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 284);
	// stb r4,27(r31)
	REX_STORE_U8(r31.u32 + 27, ctx.r4.u8);
	// lwz r11,396(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 396);
	// stb r11,28(r31)
	REX_STORE_U8(r31.u32 + 28, ctx.r11.u8);
	// lwz r9,332(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 332);
	// stb r9,29(r31)
	REX_STORE_U8(r31.u32 + 29, ctx.r9.u8);
	// lwz r11,4016(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4016);
	// addi r5,r11,-3
	ctx.r5.s64 = ctx.r11.s64 + -3;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// cntlzw r3,r5
	ctx.r3.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r10,r3,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// or r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r6,30(r31)
	REX_STORE_U8(r31.u32 + 30, ctx.r6.u8);
	// lwz r5,2144(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 2144);
	// stw r5,356(r31)
	REX_STORE_U32(r31.u32 + 356, ctx.r5.u32);
	// lwz r4,2520(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 2520);
	// stw r4,360(r31)
	REX_STORE_U32(r31.u32 + 360, ctx.r4.u32);
	// lwz r3,20968(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20968);
	// stw r3,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r3.u32);
	// lwz r11,20988(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20988);
	// stw r11,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r11.u32);
	// sth r23,46(r31)
	REX_STORE_U16(r31.u32 + 46, r23.u16);
	// sth r23,44(r31)
	REX_STORE_U16(r31.u32 + 44, r23.u16);
	// lwz r10,420(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 420);
	// sth r10,62(r31)
	REX_STORE_U16(r31.u32 + 62, ctx.r10.u16);
	// lwz r6,424(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 424);
	// sth r6,64(r31)
	REX_STORE_U16(r31.u32 + 64, ctx.r6.u16);
	// lwz r4,428(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 428);
	// sth r4,66(r31)
	REX_STORE_U16(r31.u32 + 66, ctx.r4.u16);
	// lwz r11,432(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 432);
	// sth r11,68(r31)
	REX_STORE_U16(r31.u32 + 68, ctx.r11.u16);
	// lwz r9,412(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 412);
	// sth r9,70(r31)
	REX_STORE_U16(r31.u32 + 70, ctx.r9.u16);
	// lwz r5,416(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 416);
	// sth r5,72(r31)
	REX_STORE_U16(r31.u32 + 72, ctx.r5.u16);
	// lwz r3,14836(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 14836);
	// stb r3,32(r31)
	REX_STORE_U8(r31.u32 + 32, ctx.r3.u8);
	// lwz r10,1796(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1796);
	// stb r10,31(r31)
	REX_STORE_U8(r31.u32 + 31, ctx.r10.u8);
	// lwz r6,340(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 340);
	// stb r6,34(r31)
	REX_STORE_U8(r31.u32 + 34, ctx.r6.u8);
	// lwz r4,6608(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 6608);
	// stw r4,388(r31)
	REX_STORE_U32(r31.u32 + 388, ctx.r4.u32);
	// lwz r3,14816(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 14816);
	// stw r8,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r8.u32);
	// stw r3,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r3.u32);
	// stw r7,400(r31)
	REX_STORE_U32(r31.u32 + 400, ctx.r7.u32);
	// lwz r11,2916(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 2916);
	// stw r11,404(r31)
	REX_STORE_U32(r31.u32 + 404, ctx.r11.u32);
	// lwz r10,2920(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 2920);
	// stw r10,408(r31)
	REX_STORE_U32(r31.u32 + 408, ctx.r10.u32);
	// lwz r9,2924(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 2924);
	// stw r9,412(r31)
	REX_STORE_U32(r31.u32 + 412, ctx.r9.u32);
	// lwz r8,2928(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 2928);
	// stw r8,416(r31)
	REX_STORE_U32(r31.u32 + 416, ctx.r8.u32);
	// lwz r7,2932(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 2932);
	// stw r7,420(r31)
	REX_STORE_U32(r31.u32 + 420, ctx.r7.u32);
	// lwz r6,2936(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 2936);
	// stw r6,424(r31)
	REX_STORE_U32(r31.u32 + 424, ctx.r6.u32);
	// lwz r5,1944(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 1944);
	// stw r5,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r5.u32);
	// lwz r4,3004(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 3004);
	// stb r4,33(r31)
	REX_STORE_U8(r31.u32 + 33, ctx.r4.u8);
	// lwz r11,1836(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1836);
	// stw r11,444(r31)
	REX_STORE_U32(r31.u32 + 444, ctx.r11.u32);
	// lwz r10,460(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 460);
	// stb r10,48(r31)
	REX_STORE_U8(r31.u32 + 48, ctx.r10.u8);
	// stb r23,49(r31)
	REX_STORE_U8(r31.u32 + 49, r23.u8);
	// lwz r8,3960(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 3960);
	// stb r8,35(r31)
	REX_STORE_U8(r31.u32 + 35, ctx.r8.u8);
	// lwz r6,136(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 136);
	// mulli r5,r6,-6
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(-6));
	// sth r5,368(r31)
	REX_STORE_U16(r31.u32 + 368, ctx.r5.u16);
	// lwz r3,136(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 136);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r11,370(r31)
	REX_STORE_U16(r31.u32 + 370, ctx.r11.u16);
	// lwz r9,136(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 136);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r8,372(r31)
	REX_STORE_U16(r31.u32 + 372, ctx.r8.u16);
	// lwz r6,136(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 136);
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r5,374(r31)
	REX_STORE_U16(r31.u32 + 374, ctx.r5.u16);
	// lwz r3,136(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 136);
	// neg r11,r3
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// sth r11,364(r31)
	REX_STORE_U16(r31.u32 + 364, ctx.r11.u16);
	// lwz r9,136(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 136);
	// sth r9,366(r31)
	REX_STORE_U16(r31.u32 + 366, ctx.r9.u16);
	// stw r24,484(r31)
	REX_STORE_U32(r31.u32 + 484, r24.u32);
	// stw r29,464(r31)
	REX_STORE_U32(r31.u32 + 464, r29.u32);
	// stw r26,468(r31)
	REX_STORE_U32(r31.u32 + 468, r26.u32);
	// stw r28,472(r31)
	REX_STORE_U32(r31.u32 + 472, r28.u32);
	// stw r25,476(r31)
	REX_STORE_U32(r31.u32 + 476, r25.u32);
	// stw r27,480(r31)
	REX_STORE_U32(r31.u32 + 480, r27.u32);
	// lwz r7,22140(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 22140);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82385b04
	if (!ctx.cr6.eq) goto loc_82385B04;
	// lwz r11,15964(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15964);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82385a54
	if (ctx.cr6.eq) goto loc_82385A54;
	// lwz r11,15968(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15968);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82385a54
	if (ctx.cr6.eq) goto loc_82385A54;
	// lwz r11,15972(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15972);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82385a54
	if (!ctx.cr6.eq) goto loc_82385A54;
	// lwz r11,15976(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15976);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82385a04
	if (ctx.cr6.eq) goto loc_82385A04;
	// lwz r10,220(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 220);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82385a08
	goto loc_82385A08;
loc_82385A04:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82385A08:
	// stw r11,464(r31)
	REX_STORE_U32(r31.u32 + 464, ctx.r11.u32);
	// lwz r11,15976(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15976);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82385a28
	if (ctx.cr6.eq) goto loc_82385A28;
	// lwz r10,224(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 224);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82385a2c
	goto loc_82385A2C;
loc_82385A28:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82385A2C:
	// stw r11,472(r31)
	REX_STORE_U32(r31.u32 + 472, ctx.r11.u32);
	// lwz r11,15976(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15976);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82385a4c
	if (ctx.cr6.eq) goto loc_82385A4C;
	// lwz r10,224(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 224);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82385a50
	goto loc_82385A50;
loc_82385A4C:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82385A50:
	// stw r11,480(r31)
	REX_STORE_U32(r31.u32 + 480, ctx.r11.u32);
loc_82385A54:
	// lwz r11,3776(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3776);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82385a6c
	if (ctx.cr6.eq) goto loc_82385A6C;
	// lwz r10,220(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 220);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82385a70
	goto loc_82385A70;
loc_82385A6C:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82385A70:
	// stw r11,560(r31)
	REX_STORE_U32(r31.u32 + 560, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82385a84
	if (!ctx.cr6.eq) goto loc_82385A84;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_82385A84:
	// stw r10,564(r31)
	REX_STORE_U32(r31.u32 + 564, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82385aa0
	if (ctx.cr6.eq) goto loc_82385AA0;
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82385aa4
	goto loc_82385AA4;
loc_82385AA0:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_82385AA4:
	// stw r10,568(r31)
	REX_STORE_U32(r31.u32 + 568, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82385ac4
	if (ctx.cr6.eq) goto loc_82385AC4;
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82385ac8
	goto loc_82385AC8;
loc_82385AC4:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82385AC8:
	// stw r11,572(r31)
	REX_STORE_U32(r31.u32 + 572, ctx.r11.u32);
	// lwz r11,3780(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82385ae4
	if (ctx.cr6.eq) goto loc_82385AE4;
	// lwz r10,224(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 224);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82385ae8
	goto loc_82385AE8;
loc_82385AE4:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82385AE8:
	// stw r11,576(r31)
	REX_STORE_U32(r31.u32 + 576, ctx.r11.u32);
	// lwz r11,3784(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823860a4
	if (ctx.cr6.eq) goto loc_823860A4;
	// lwz r10,224(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 224);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823860a8
	goto loc_823860A8;
loc_82385B04:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82385b24
	if (ctx.cr6.eq) goto loc_82385B24;
	// lwz r11,204(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 204);
	// lwz r10,20688(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// b 0x82385b28
	goto loc_82385B28;
loc_82385B24:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82385B28:
	// stw r11,464(r31)
	REX_STORE_U32(r31.u32 + 464, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82385b3c
	if (!ctx.cr6.eq) goto loc_82385B3C;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_82385B3C:
	// stw r10,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82385b58
	if (ctx.cr6.eq) goto loc_82385B58;
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82385b5c
	goto loc_82385B5C;
loc_82385B58:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_82385B5C:
	// stw r10,472(r31)
	REX_STORE_U32(r31.u32 + 472, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82385b7c
	if (ctx.cr6.eq) goto loc_82385B7C;
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82385b80
	goto loc_82385B80;
loc_82385B7C:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82385B80:
	// stw r11,476(r31)
	REX_STORE_U32(r31.u32 + 476, ctx.r11.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82385ba4
	if (ctx.cr6.eq) goto loc_82385BA4;
	// lwz r11,208(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 208);
	// lwz r10,20688(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// b 0x82385ba8
	goto loc_82385BA8;
loc_82385BA4:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82385BA8:
	// stw r11,480(r31)
	REX_STORE_U32(r31.u32 + 480, ctx.r11.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82385bcc
	if (ctx.cr6.eq) goto loc_82385BCC;
	// lwz r11,208(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 208);
	// lwz r10,20688(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// b 0x82385bd0
	goto loc_82385BD0;
loc_82385BCC:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82385BD0:
	// stw r11,484(r31)
	REX_STORE_U32(r31.u32 + 484, ctx.r11.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82385bf4
	if (ctx.cr6.eq) goto loc_82385BF4;
	// lwz r11,204(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 204);
	// lwz r10,20688(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// b 0x82385bf8
	goto loc_82385BF8;
loc_82385BF4:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82385BF8:
	// stw r11,512(r31)
	REX_STORE_U32(r31.u32 + 512, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82385c0c
	if (!ctx.cr6.eq) goto loc_82385C0C;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_82385C0C:
	// stw r10,516(r31)
	REX_STORE_U32(r31.u32 + 516, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82385c28
	if (ctx.cr6.eq) goto loc_82385C28;
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82385c2c
	goto loc_82385C2C;
loc_82385C28:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_82385C2C:
	// stw r10,520(r31)
	REX_STORE_U32(r31.u32 + 520, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82385c4c
	if (ctx.cr6.eq) goto loc_82385C4C;
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82385c50
	goto loc_82385C50;
loc_82385C4C:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82385C50:
	// stw r11,524(r31)
	REX_STORE_U32(r31.u32 + 524, ctx.r11.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82385c74
	if (ctx.cr6.eq) goto loc_82385C74;
	// lwz r11,208(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 208);
	// lwz r10,20688(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// b 0x82385c78
	goto loc_82385C78;
loc_82385C74:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82385C78:
	// stw r11,528(r31)
	REX_STORE_U32(r31.u32 + 528, ctx.r11.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82385c9c
	if (ctx.cr6.eq) goto loc_82385C9C;
	// lwz r11,208(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 208);
	// lwz r10,20688(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// b 0x82385ca0
	goto loc_82385CA0;
loc_82385C9C:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82385CA0:
	// stw r11,532(r31)
	REX_STORE_U32(r31.u32 + 532, ctx.r11.u32);
	// lwz r11,21704(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 21704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82385d80
	if (!ctx.cr6.eq) goto loc_82385D80;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82385cd0
	if (ctx.cr6.eq) goto loc_82385CD0;
	// lwz r11,204(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 204);
	// lwz r10,20688(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// b 0x82385cd4
	goto loc_82385CD4;
loc_82385CD0:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82385CD4:
	// stw r11,488(r31)
	REX_STORE_U32(r31.u32 + 488, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82385ce8
	if (!ctx.cr6.eq) goto loc_82385CE8;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_82385CE8:
	// stw r10,492(r31)
	REX_STORE_U32(r31.u32 + 492, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82385d04
	if (ctx.cr6.eq) goto loc_82385D04;
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82385d08
	goto loc_82385D08;
loc_82385D04:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_82385D08:
	// stw r10,496(r31)
	REX_STORE_U32(r31.u32 + 496, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82385d28
	if (ctx.cr6.eq) goto loc_82385D28;
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82385d2c
	goto loc_82385D2C;
loc_82385D28:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82385D2C:
	// stw r11,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r11.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82385d54
	if (ctx.cr6.eq) goto loc_82385D54;
	// lwz r11,208(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 208);
	// lwz r10,20688(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// xori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 ^ 1;
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// b 0x82385d58
	goto loc_82385D58;
loc_82385D54:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82385D58:
	// stw r11,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r11.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82385ed8
	if (ctx.cr6.eq) goto loc_82385ED8;
	// lwz r11,208(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 208);
	// lwz r10,20688(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// xori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 ^ 1;
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// b 0x82385edc
	goto loc_82385EDC;
loc_82385D80:
	// lwz r11,288(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82385de4
	if (!ctx.cr6.eq) goto loc_82385DE4;
	// lwz r11,20728(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82385de4
	if (ctx.cr6.eq) goto loc_82385DE4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82385db0
	if (ctx.cr6.eq) goto loc_82385DB0;
	// lwz r11,204(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 204);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// b 0x82385db4
	goto loc_82385DB4;
loc_82385DB0:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82385DB4:
	// stw r11,488(r31)
	REX_STORE_U32(r31.u32 + 488, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82385dc8
	if (!ctx.cr6.eq) goto loc_82385DC8;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_82385DC8:
	// stw r10,492(r31)
	REX_STORE_U32(r31.u32 + 492, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82385d04
	if (ctx.cr6.eq) goto loc_82385D04;
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82385d08
	goto loc_82385D08;
loc_82385DE4:
	// lwz r9,3776(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 3776);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82385e10
	if (ctx.cr6.eq) goto loc_82385E10;
	// lwz r11,204(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 204);
	// lwz r10,20688(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// lwz r11,220(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 220);
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82385e14
	goto loc_82385E14;
loc_82385E10:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82385E14:
	// stw r11,488(r31)
	REX_STORE_U32(r31.u32 + 488, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82385e28
	if (!ctx.cr6.eq) goto loc_82385E28;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_82385E28:
	// stw r10,492(r31)
	REX_STORE_U32(r31.u32 + 492, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82385e44
	if (ctx.cr6.eq) goto loc_82385E44;
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82385e48
	goto loc_82385E48;
loc_82385E44:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_82385E48:
	// stw r10,496(r31)
	REX_STORE_U32(r31.u32 + 496, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82385e68
	if (ctx.cr6.eq) goto loc_82385E68;
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82385e6c
	goto loc_82385E6C;
loc_82385E68:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82385E6C:
	// stw r11,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r11.u32);
	// lwz r11,3780(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82385ea0
	if (ctx.cr6.eq) goto loc_82385EA0;
	// lwz r10,208(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 208);
	// lwz r9,20688(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// lwz r10,224(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 224);
	// xori r7,r9,1
	ctx.r7.u64 = ctx.r9.u64 ^ 1;
	// mullw r9,r8,r7
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82385ea4
	goto loc_82385EA4;
loc_82385EA0:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82385EA4:
	// stw r11,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r11.u32);
	// lwz r11,3784(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82385ed8
	if (ctx.cr6.eq) goto loc_82385ED8;
	// lwz r10,208(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 208);
	// lwz r9,20688(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// lwz r10,224(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 224);
	// xori r7,r9,1
	ctx.r7.u64 = ctx.r9.u64 ^ 1;
	// mullw r9,r8,r7
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82385edc
	goto loc_82385EDC;
loc_82385ED8:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82385EDC:
	// stw r11,508(r31)
	REX_STORE_U32(r31.u32 + 508, ctx.r11.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82385f00
	if (ctx.cr6.eq) goto loc_82385F00;
	// lwz r11,204(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 204);
	// lwz r10,20688(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// b 0x82385f04
	goto loc_82385F04;
loc_82385F00:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82385F04:
	// stw r11,536(r31)
	REX_STORE_U32(r31.u32 + 536, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82385f18
	if (!ctx.cr6.eq) goto loc_82385F18;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_82385F18:
	// stw r10,540(r31)
	REX_STORE_U32(r31.u32 + 540, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82385f34
	if (ctx.cr6.eq) goto loc_82385F34;
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82385f38
	goto loc_82385F38;
loc_82385F34:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_82385F38:
	// stw r10,544(r31)
	REX_STORE_U32(r31.u32 + 544, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82385f58
	if (ctx.cr6.eq) goto loc_82385F58;
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82385f5c
	goto loc_82385F5C;
loc_82385F58:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82385F5C:
	// stw r11,548(r31)
	REX_STORE_U32(r31.u32 + 548, ctx.r11.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82385f84
	if (ctx.cr6.eq) goto loc_82385F84;
	// lwz r11,208(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 208);
	// lwz r10,20688(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// xori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 ^ 1;
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// b 0x82385f88
	goto loc_82385F88;
loc_82385F84:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82385F88:
	// stw r11,552(r31)
	REX_STORE_U32(r31.u32 + 552, ctx.r11.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82385fb0
	if (ctx.cr6.eq) goto loc_82385FB0;
	// lwz r11,208(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 208);
	// lwz r10,20688(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// xori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 ^ 1;
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// b 0x82385fb4
	goto loc_82385FB4;
loc_82385FB0:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82385FB4:
	// stw r11,556(r31)
	REX_STORE_U32(r31.u32 + 556, ctx.r11.u32);
	// lwz r11,3776(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3776);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82385fe4
	if (ctx.cr6.eq) goto loc_82385FE4;
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// lwz r9,20688(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// lwz r10,220(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 220);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82385fe8
	goto loc_82385FE8;
loc_82385FE4:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82385FE8:
	// stw r11,560(r31)
	REX_STORE_U32(r31.u32 + 560, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82385ffc
	if (!ctx.cr6.eq) goto loc_82385FFC;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_82385FFC:
	// stw r10,564(r31)
	REX_STORE_U32(r31.u32 + 564, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82386018
	if (ctx.cr6.eq) goto loc_82386018;
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8238601c
	goto loc_8238601C;
loc_82386018:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_8238601C:
	// stw r10,568(r31)
	REX_STORE_U32(r31.u32 + 568, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238603c
	if (ctx.cr6.eq) goto loc_8238603C;
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82386040
	goto loc_82386040;
loc_8238603C:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82386040:
	// stw r11,572(r31)
	REX_STORE_U32(r31.u32 + 572, ctx.r11.u32);
	// lwz r11,3780(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82386070
	if (ctx.cr6.eq) goto loc_82386070;
	// lwz r10,208(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 208);
	// lwz r9,20688(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// lwz r10,224(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 224);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82386074
	goto loc_82386074;
loc_82386070:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82386074:
	// stw r11,576(r31)
	REX_STORE_U32(r31.u32 + 576, ctx.r11.u32);
	// lwz r11,3784(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823860a4
	if (ctx.cr6.eq) goto loc_823860A4;
	// lwz r10,208(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 208);
	// lwz r8,20688(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// lwz r9,224(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 224);
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823860a8
	goto loc_823860A8;
loc_823860A4:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_823860A8:
	// stw r11,580(r31)
	REX_STORE_U32(r31.u32 + 580, ctx.r11.u32);
	// lwz r11,20900(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20900);
	// stw r11,1404(r31)
	REX_STORE_U32(r31.u32 + 1404, ctx.r11.u32);
	// lwz r11,4016(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4016);
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,2188(r31)
	REX_STORE_U32(r31.u32 + 2188, ctx.r8.u32);
	// lwz r7,14868(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 14868);
	// stw r7,1696(r31)
	REX_STORE_U32(r31.u32 + 1696, ctx.r7.u32);
	// lwz r6,14844(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 14844);
	// stw r6,1700(r31)
	REX_STORE_U32(r31.u32 + 1700, ctx.r6.u32);
	// lwz r5,14848(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 14848);
	// stw r5,1704(r31)
	REX_STORE_U32(r31.u32 + 1704, ctx.r5.u32);
	// lwz r4,14840(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 14840);
	// lwz r3,3428(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 3428);
	// mullw r11,r4,r3
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// stw r11,1596(r31)
	REX_STORE_U32(r31.u32 + 1596, ctx.r11.u32);
	// lwz r10,15340(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15340);
	// stw r10,1708(r31)
	REX_STORE_U32(r31.u32 + 1708, ctx.r10.u32);
	// lwz r9,15344(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 15344);
	// stw r9,1712(r31)
	REX_STORE_U32(r31.u32 + 1712, ctx.r9.u32);
	// lwz r8,15348(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 15348);
	// stw r8,1716(r31)
	REX_STORE_U32(r31.u32 + 1716, ctx.r8.u32);
	// lwz r7,15352(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 15352);
	// stw r7,1720(r31)
	REX_STORE_U32(r31.u32 + 1720, ctx.r7.u32);
	// lwz r6,21700(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 21700);
	// stw r6,1396(r31)
	REX_STORE_U32(r31.u32 + 1396, ctx.r6.u32);
	// lwz r5,21696(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 21696);
	// stw r5,1400(r31)
	REX_STORE_U32(r31.u32 + 1400, ctx.r5.u32);
	// lwz r4,20688(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// stw r4,1368(r31)
	REX_STORE_U32(r31.u32 + 1368, ctx.r4.u32);
	// lwz r3,21704(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 21704);
	// stw r3,1372(r31)
	REX_STORE_U32(r31.u32 + 1372, ctx.r3.u32);
	// lwz r11,4020(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4020);
	// stw r11,1560(r31)
	REX_STORE_U32(r31.u32 + 1560, ctx.r11.u32);
	// lwz r10,20728(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20728);
	// stw r10,1564(r31)
	REX_STORE_U32(r31.u32 + 1564, ctx.r10.u32);
	// lwz r9,20732(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20732);
	// stw r9,1568(r31)
	REX_STORE_U32(r31.u32 + 1568, ctx.r9.u32);
	// lwz r8,20736(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20736);
	// stw r8,1572(r31)
	REX_STORE_U32(r31.u32 + 1572, ctx.r8.u32);
	// lwz r7,20740(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 20740);
	// stw r7,1576(r31)
	REX_STORE_U32(r31.u32 + 1576, ctx.r7.u32);
	// lwz r6,20744(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 20744);
	// stw r6,1580(r31)
	REX_STORE_U32(r31.u32 + 1580, ctx.r6.u32);
	// lwz r5,20748(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 20748);
	// stw r5,1584(r31)
	REX_STORE_U32(r31.u32 + 1584, ctx.r5.u32);
	// lwz r4,22140(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 22140);
	// stw r4,1588(r31)
	REX_STORE_U32(r31.u32 + 1588, ctx.r4.u32);
	// lwz r3,22140(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 22140);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823861f8
	if (!ctx.cr6.eq) goto loc_823861F8;
	// lwz r11,21816(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 21816);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,45788
	ctx.r8.u64 = ctx.r10.u64 | 45788;
	// ori r7,r9,45792
	ctx.r7.u64 = ctx.r9.u64 | 45792;
	// lis r6,0
	ctx.r6.s64 = 0;
	// stw r11,1456(r31)
	REX_STORE_U32(r31.u32 + 1456, ctx.r11.u32);
	// addis r5,r30,1
	ctx.r5.s64 = r30.s64 + 65536;
	// ori r4,r6,45780
	ctx.r4.u64 = ctx.r6.u64 | 45780;
	// addi r5,r5,-19752
	ctx.r5.s64 = ctx.r5.s64 + -19752;
	// lwz r3,22172(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 22172);
	// stw r3,1460(r31)
	REX_STORE_U32(r31.u32 + 1460, ctx.r3.u32);
	// lwz r11,21844(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 21844);
	// stw r11,1464(r31)
	REX_STORE_U32(r31.u32 + 1464, ctx.r11.u32);
	// lwzx r10,r30,r8
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r8.u32);
	// stw r10,1484(r31)
	REX_STORE_U32(r31.u32 + 1484, ctx.r10.u32);
	// lwzx r9,r30,r7
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + ctx.r7.u32);
	// stw r9,1480(r31)
	REX_STORE_U32(r31.u32 + 1480, ctx.r9.u32);
	// lwzx r8,r30,r4
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + ctx.r4.u32);
	// stw r8,1476(r31)
	REX_STORE_U32(r31.u32 + 1476, ctx.r8.u32);
	// lwz r7,0(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r7,1468(r31)
	REX_STORE_U32(r31.u32 + 1468, ctx.r7.u32);
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r6,20688(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// subfic r5,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.u64 = static_cast<uint64_t>(0) - ctx.r6.u64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r4,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,1472(r31)
	REX_STORE_U32(r31.u32 + 1472, ctx.r11.u32);
loc_823861F8:
	// lwz r10,3016(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 3016);
	// li r11,7
	ctx.r11.s64 = 7;
	// lis r9,32
	ctx.r9.s64 = 2097152;
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// ori r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 | 32;
	// lis r5,64
	ctx.r5.s64 = 4194304;
	// stw r10,588(r31)
	REX_STORE_U32(r31.u32 + 588, ctx.r10.u32);
	// lis r4,8
	ctx.r4.s64 = 524288;
	// stw r10,584(r31)
	REX_STORE_U32(r31.u32 + 584, ctx.r10.u32);
	// ori r3,r5,64
	ctx.r3.u64 = ctx.r5.u64 | 64;
	// ori r9,r4,8
	ctx.r9.u64 = ctx.r4.u64 | 8;
	// addi r10,r31,1120
	ctx.r10.s64 = r31.s64 + 1120;
	// li r5,1104
	ctx.r5.s64 = 1104;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r8,r31,1190
	ctx.r8.s64 = r31.s64 + 1190;
	// lwz r29,3024(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 3024);
	// stw r29,596(r31)
	REX_STORE_U32(r31.u32 + 596, r29.u32);
	// stw r29,592(r31)
	REX_STORE_U32(r31.u32 + 592, r29.u32);
	// lwz r29,3028(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 3028);
	// stw r29,600(r31)
	REX_STORE_U32(r31.u32 + 600, r29.u32);
	// lwz r29,3036(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 3036);
	// stw r29,604(r31)
	REX_STORE_U32(r31.u32 + 604, r29.u32);
	// lwz r29,2560(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 2560);
	// stw r29,608(r31)
	REX_STORE_U32(r31.u32 + 608, r29.u32);
	// lwz r29,2480(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 2480);
	// stw r29,612(r31)
	REX_STORE_U32(r31.u32 + 612, r29.u32);
	// lwz r29,15536(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 15536);
	// stw r29,1168(r31)
	REX_STORE_U32(r31.u32 + 1168, r29.u32);
	// lwz r29,15536(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 15536);
	// srawi r28,r29,31
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7FFFFFFF) != 0);
	r28.s64 = r29.s32 >> 31;
	// subfc r11,r11,r29
	ctx.xer.ca = r29.u32 >= ctx.r11.u32;
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// adde r11,r7,r28
	temp.u8 = (ctx.r7.u32 + r28.u32 < ctx.r7.u32) | (ctx.r7.u32 + r28.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r7.u64 + r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,2192(r31)
	REX_STORE_U32(r31.u32 + 2192, ctx.r11.u32);
	// lwz r7,22184(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 22184);
	// stw r7,1172(r31)
	REX_STORE_U32(r31.u32 + 1172, ctx.r7.u32);
	// lwz r11,1856(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1856);
	// stw r11,620(r31)
	REX_STORE_U32(r31.u32 + 620, ctx.r11.u32);
	// lwz r7,1860(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 1860);
	// stw r7,624(r31)
	REX_STORE_U32(r31.u32 + 624, ctx.r7.u32);
	// lwz r11,1864(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1864);
	// stw r11,632(r31)
	REX_STORE_U32(r31.u32 + 632, ctx.r11.u32);
	// lbz r7,35(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 35);
	// addis r11,r7,31
	ctx.r11.s64 = ctx.r7.s64 + 2031616;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// stw r11,1136(r31)
	REX_STORE_U32(r31.u32 + 1136, ctx.r11.u32);
	// lbz r7,35(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 35);
	// addis r11,r7,15
	ctx.r11.s64 = ctx.r7.s64 + 983040;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// stw r11,1140(r31)
	REX_STORE_U32(r31.u32 + 1140, ctx.r11.u32);
	// lbz r7,35(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 35);
	// addis r11,r7,7
	ctx.r11.s64 = ctx.r7.s64 + 458752;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// stw r11,1144(r31)
	REX_STORE_U32(r31.u32 + 1144, ctx.r11.u32);
	// lbz r7,35(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 35);
	// addis r11,r7,3
	ctx.r11.s64 = ctx.r7.s64 + 196608;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stw r11,1148(r31)
	REX_STORE_U32(r31.u32 + 1148, ctx.r11.u32);
	// lbz r7,35(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 35);
	// subf r6,r7,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r7.u64;
	// stw r6,1152(r31)
	REX_STORE_U32(r31.u32 + 1152, ctx.r6.u32);
	// lbz r11,35(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 35);
	// subf r7,r11,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r11.u64;
	// stw r7,1156(r31)
	REX_STORE_U32(r31.u32 + 1156, ctx.r7.u32);
	// lbz r6,35(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 35);
	// subf r3,r6,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r6.u64;
	// stw r3,1160(r31)
	REX_STORE_U32(r31.u32 + 1160, ctx.r3.u32);
	// lbz r11,35(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 35);
	// sth r11,1134(r31)
	REX_STORE_U16(r31.u32 + 1134, ctx.r11.u16);
	// lvx128 v12,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v0,v12,7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_set1_epi16(short(0x100))));
	// vsubshs v11,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// stvx128 v11,r31,r5
	ea = (r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// sth r4,1176(r31)
	REX_STORE_U16(r31.u32 + 1176, ctx.r4.u16);
	// lwz r11,204(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,16
	ctx.r11.s64 = 16;
	// srawi r6,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 6;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// sth r6,1178(r31)
	REX_STORE_U16(r31.u32 + 1178, ctx.r6.u16);
	// lwz r11,204(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r11,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 6;
	// sth r11,1180(r31)
	REX_STORE_U16(r31.u32 + 1180, ctx.r11.u16);
	// lwz r11,204(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,128
	ctx.r6.s64 = ctx.r11.s64 + 128;
	// srawi r5,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 6;
	// sth r5,1182(r31)
	REX_STORE_U16(r31.u32 + 1182, ctx.r5.u16);
	// lwz r11,204(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r9,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 6;
	// sth r9,1184(r31)
	REX_STORE_U16(r31.u32 + 1184, ctx.r9.u16);
	// lwz r11,204(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r11,128
	ctx.r5.s64 = ctx.r11.s64 + 128;
	// srawi r4,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 6;
	// sth r4,1186(r31)
	REX_STORE_U16(r31.u32 + 1186, ctx.r4.u16);
	// lwz r11,204(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// srawi r7,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 6;
	// sth r7,1188(r31)
	REX_STORE_U16(r31.u32 + 1188, ctx.r7.u16);
	// lwz r5,204(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 204);
	// mulli r11,r5,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(28));
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// srawi r3,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 6;
	// sth r3,1190(r31)
	REX_STORE_U16(r31.u32 + 1190, ctx.r3.u16);
loc_823863D4:
	// lwz r11,208(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 208);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r7,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 6;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sthu r6,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r6.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x823863d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823863D4;
	// lwz r11,2096(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 2096);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r30,23984
	ctx.r9.s64 = r30.s64 + 23984;
	// addi r8,r30,2120
	ctx.r8.s64 = r30.s64 + 2120;
	// addi r7,r30,24240
	ctx.r7.s64 = r30.s64 + 24240;
	// stw r11,1224(r31)
	REX_STORE_U32(r31.u32 + 1224, ctx.r11.u32);
	// lwz r6,2100(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 2100);
	// stw r6,1228(r31)
	REX_STORE_U32(r31.u32 + 1228, ctx.r6.u32);
	// lwz r5,21712(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 21712);
	// stw r5,1236(r31)
	REX_STORE_U32(r31.u32 + 1236, ctx.r5.u32);
	// lwz r4,21716(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 21716);
	// stw r4,1240(r31)
	REX_STORE_U32(r31.u32 + 1240, ctx.r4.u32);
	// lwz r3,20692(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20692);
	// stw r3,1380(r31)
	REX_STORE_U32(r31.u32 + 1380, ctx.r3.u32);
	// lwz r11,15284(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15284);
	// stw r11,1384(r31)
	REX_STORE_U32(r31.u32 + 1384, ctx.r11.u32);
	// lwz r11,15536(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15536);
	// addi r6,r11,-7
	ctx.r6.s64 = ctx.r11.s64 + -7;
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 & ctx.r10.u64;
	// stb r11,1324(r31)
	REX_STORE_U8(r31.u32 + 1324, ctx.r11.u8);
	// lwz r10,20768(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20768);
	// stw r10,1388(r31)
	REX_STORE_U32(r31.u32 + 1388, ctx.r10.u32);
	// lwz r6,4016(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 4016);
	// stw r6,1392(r31)
	REX_STORE_U32(r31.u32 + 1392, ctx.r6.u32);
	// lwz r5,248(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 248);
	// stb r5,1244(r31)
	REX_STORE_U8(r31.u32 + 1244, ctx.r5.u8);
	// lwz r3,4036(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4036);
	// stb r3,1245(r31)
	REX_STORE_U8(r31.u32 + 1245, ctx.r3.u8);
	// lwz r10,4044(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4044);
	// stb r10,1246(r31)
	REX_STORE_U8(r31.u32 + 1246, ctx.r10.u8);
	// lwz r5,252(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 252);
	// stb r5,1249(r31)
	REX_STORE_U8(r31.u32 + 1249, ctx.r5.u8);
	// lwz r3,476(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 476);
	// stb r3,1250(r31)
	REX_STORE_U8(r31.u32 + 1250, ctx.r3.u8);
	// lwz r10,21968(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 21968);
	// stw r10,1304(r31)
	REX_STORE_U32(r31.u32 + 1304, ctx.r10.u32);
	// lwz r6,288(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 288);
	// stw r6,1308(r31)
	REX_STORE_U32(r31.u32 + 1308, ctx.r6.u32);
	// lwz r5,1952(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 1952);
	// stb r5,1247(r31)
	REX_STORE_U8(r31.u32 + 1247, ctx.r5.u8);
	// lwz r3,1956(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 1956);
	// stb r3,1248(r31)
	REX_STORE_U8(r31.u32 + 1248, ctx.r3.u8);
	// lwz r10,1948(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1948);
	// stb r10,1251(r31)
	REX_STORE_U8(r31.u32 + 1251, ctx.r10.u8);
	// lwz r5,22284(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 22284);
	// stw r5,1312(r31)
	REX_STORE_U32(r31.u32 + 1312, ctx.r5.u32);
	// lwz r4,3972(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 3972);
	// stw r4,1316(r31)
	REX_STORE_U32(r31.u32 + 1316, ctx.r4.u32);
	// stw r9,1260(r31)
	REX_STORE_U32(r31.u32 + 1260, ctx.r9.u32);
	// stw r8,1232(r31)
	REX_STORE_U32(r31.u32 + 1232, ctx.r8.u32);
	// lwz r3,20708(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20708);
	// stb r3,1254(r31)
	REX_STORE_U8(r31.u32 + 1254, ctx.r3.u8);
	// lwz r10,21644(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 21644);
	// stb r10,1255(r31)
	REX_STORE_U8(r31.u32 + 1255, ctx.r10.u8);
	// stw r7,1264(r31)
	REX_STORE_U32(r31.u32 + 1264, ctx.r7.u32);
	// lwz r8,20680(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20680);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8238650c
	if (ctx.cr6.eq) goto loc_8238650C;
	// lwz r11,20684(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238650c
	if (!ctx.cr6.eq) goto loc_8238650C;
	// lwz r11,1836(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1836);
	// stw r11,1268(r31)
	REX_STORE_U32(r31.u32 + 1268, ctx.r11.u32);
	// lwz r10,20752(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20752);
	// stw r10,1272(r31)
	REX_STORE_U32(r31.u32 + 1272, ctx.r10.u32);
	// lwz r9,20756(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20756);
	// stw r9,1300(r31)
	REX_STORE_U32(r31.u32 + 1300, ctx.r9.u32);
	// b 0x8238658c
	goto loc_8238658C;
loc_8238650C:
	// lwz r11,15536(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15536);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8238655c
	if (!ctx.cr6.eq) goto loc_8238655C;
	// lwz r11,1816(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1816);
	// stw r11,1268(r31)
	REX_STORE_U32(r31.u32 + 1268, ctx.r11.u32);
	// lwz r10,1816(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1816);
	// stw r10,1272(r31)
	REX_STORE_U32(r31.u32 + 1272, ctx.r10.u32);
	// lwz r9,1824(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 1824);
	// stw r9,1276(r31)
	REX_STORE_U32(r31.u32 + 1276, ctx.r9.u32);
	// lwz r8,1820(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 1820);
	// stw r8,1280(r31)
	REX_STORE_U32(r31.u32 + 1280, ctx.r8.u32);
	// lwz r7,1824(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 1824);
	// stw r7,1284(r31)
	REX_STORE_U32(r31.u32 + 1284, ctx.r7.u32);
	// lwz r6,1820(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 1820);
	// stw r6,1288(r31)
	REX_STORE_U32(r31.u32 + 1288, ctx.r6.u32);
	// lwz r5,1824(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 1824);
	// stw r5,1292(r31)
	REX_STORE_U32(r31.u32 + 1292, ctx.r5.u32);
	// lwz r4,1820(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 1820);
	// stw r4,1296(r31)
	REX_STORE_U32(r31.u32 + 1296, ctx.r4.u32);
	// b 0x8238658c
	goto loc_8238658C;
loc_8238655C:
	// lwz r11,1812(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1812);
	// stw r11,1268(r31)
	REX_STORE_U32(r31.u32 + 1268, ctx.r11.u32);
	// lwz r10,1824(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1824);
	// stw r10,1272(r31)
	REX_STORE_U32(r31.u32 + 1272, ctx.r10.u32);
	// lwz r9,1808(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 1808);
	// stw r9,1276(r31)
	REX_STORE_U32(r31.u32 + 1276, ctx.r9.u32);
	// lwz r8,1820(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 1820);
	// stw r8,1280(r31)
	REX_STORE_U32(r31.u32 + 1280, ctx.r8.u32);
	// lwz r7,1804(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 1804);
	// stw r7,1284(r31)
	REX_STORE_U32(r31.u32 + 1284, ctx.r7.u32);
	// lwz r6,1816(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 1816);
	// stw r6,1288(r31)
	REX_STORE_U32(r31.u32 + 1288, ctx.r6.u32);
loc_8238658C:
	// sth r23,1256(r31)
	REX_STORE_U16(r31.u32 + 1256, r23.u16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,1800(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1800);
	// stb r11,1252(r31)
	REX_STORE_U8(r31.u32 + 1252, ctx.r11.u8);
	// lwz r9,1940(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 1940);
	// stb r9,1253(r31)
	REX_STORE_U8(r31.u32 + 1253, ctx.r9.u8);
	// lwz r7,22284(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 22284);
	// stw r7,1312(r31)
	REX_STORE_U32(r31.u32 + 1312, ctx.r7.u32);
	// lwz r6,3972(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 3972);
	// stw r6,1316(r31)
	REX_STORE_U32(r31.u32 + 1316, ctx.r6.u32);
	// lwz r5,3976(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 3976);
	// stw r5,1320(r31)
	REX_STORE_U32(r31.u32 + 1320, ctx.r5.u32);
	// bl 0x82353158
	ctx.lr = 0x823865C0;
	sub_82353158(ctx, base);
	// stw r3,380(r31)
	REX_STORE_U32(r31.u32 + 380, ctx.r3.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r4,r30,24304
	ctx.r4.s64 = r30.s64 + 24304;
	// addi r6,r10,-22264
	ctx.r6.s64 = ctx.r10.s64 + -22264;
	// addi r9,r30,24496
	ctx.r9.s64 = r30.s64 + 24496;
	// li r11,4
	ctx.r11.s64 = 4;
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r8,r6,4
	ctx.r8.s64 = ctx.r6.s64 + 4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lhz r7,52(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 52);
	// rlwinm r5,r7,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// divw r10,r5,r3
	ctx.r10.u64 = uint32_t((ctx.r3.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? ctx.r5.s32 / ctx.r3.s32 : 0);
	// rotlwi r11,r5,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// stw r10,384(r31)
	REX_STORE_U32(r31.u32 + 384, ctx.r10.u32);
	// stw r4,1356(r31)
	REX_STORE_U32(r31.u32 + 1356, ctx.r4.u32);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r9,1360(r31)
	REX_STORE_U32(r31.u32 + 1360, ctx.r9.u32);
	// andc r5,r3,r7
	ctx.r5.u64 = ctx.r3.u64 & ~ctx.r7.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// twlgei r5,-1
	if (ctx.r5.s32 == -1 || ctx.r5.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// lwz r4,1768(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 1768);
	// stw r4,616(r31)
	REX_STORE_U32(r31.u32 + 616, ctx.r4.u32);
	// lwz r3,15904(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 15904);
	// stw r3,960(r31)
	REX_STORE_U32(r31.u32 + 960, ctx.r3.u32);
	// lwz r11,1356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1356);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
loc_8238662C:
	// lwz r9,-4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// stb r7,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,-1(r11)
	REX_STORE_U8(ctx.r11.u32 + -1, ctx.r4.u8);
	// stw r3,3(r11)
	REX_STORE_U32(ctx.r11.u32 + 3, ctx.r3.u32);
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8238666c
	if (ctx.cr6.eq) goto loc_8238666C;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// stw r3,7(r11)
	REX_STORE_U32(ctx.r11.u32 + 7, ctx.r3.u32);
loc_8238666C:
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stb r7,12(r11)
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,11(r11)
	REX_STORE_U8(ctx.r11.u32 + 11, ctx.r4.u8);
	// stw r3,15(r11)
	REX_STORE_U32(ctx.r11.u32 + 15, ctx.r3.u32);
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823866ac
	if (ctx.cr6.eq) goto loc_823866AC;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,12(r11)
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r4.u8);
	// stw r3,19(r11)
	REX_STORE_U32(ctx.r11.u32 + 19, ctx.r3.u32);
loc_823866AC:
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stb r7,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, ctx.r7.u8);
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,23(r11)
	REX_STORE_U8(ctx.r11.u32 + 23, ctx.r4.u8);
	// stw r3,27(r11)
	REX_STORE_U32(ctx.r11.u32 + 27, ctx.r3.u32);
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823866ec
	if (ctx.cr6.eq) goto loc_823866EC;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, ctx.r4.u8);
	// stw r3,31(r11)
	REX_STORE_U32(ctx.r11.u32 + 31, ctx.r3.u32);
loc_823866EC:
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stb r7,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r7.u8);
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,35(r11)
	REX_STORE_U8(ctx.r11.u32 + 35, ctx.r4.u8);
	// stw r3,39(r11)
	REX_STORE_U32(ctx.r11.u32 + 39, ctx.r3.u32);
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8238672c
	if (ctx.cr6.eq) goto loc_8238672C;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r4.u8);
	// stw r3,43(r11)
	REX_STORE_U32(ctx.r11.u32 + 43, ctx.r3.u32);
loc_8238672C:
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bdnz 0x8238662c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238662C;
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r11,1360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1360);
	// lwz r10,208(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 208);
	// addi r8,r6,4
	ctx.r8.s64 = ctx.r6.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82386750:
	// lwz r9,-4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// stb r7,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,-1(r11)
	REX_STORE_U8(ctx.r11.u32 + -1, ctx.r5.u8);
	// stw r4,3(r11)
	REX_STORE_U32(ctx.r11.u32 + 3, ctx.r4.u32);
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82386790
	if (ctx.cr6.eq) goto loc_82386790;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// stw r4,7(r11)
	REX_STORE_U32(ctx.r11.u32 + 7, ctx.r4.u32);
loc_82386790:
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stb r7,12(r11)
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,11(r11)
	REX_STORE_U8(ctx.r11.u32 + 11, ctx.r5.u8);
	// stw r4,15(r11)
	REX_STORE_U32(ctx.r11.u32 + 15, ctx.r4.u32);
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823867d0
	if (ctx.cr6.eq) goto loc_823867D0;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,12(r11)
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r5.u8);
	// stw r4,19(r11)
	REX_STORE_U32(ctx.r11.u32 + 19, ctx.r4.u32);
loc_823867D0:
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stb r7,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, ctx.r7.u8);
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,23(r11)
	REX_STORE_U8(ctx.r11.u32 + 23, ctx.r5.u8);
	// stw r4,27(r11)
	REX_STORE_U32(ctx.r11.u32 + 27, ctx.r4.u32);
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82386810
	if (ctx.cr6.eq) goto loc_82386810;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, ctx.r5.u8);
	// stw r4,31(r11)
	REX_STORE_U32(ctx.r11.u32 + 31, ctx.r4.u32);
loc_82386810:
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stb r7,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r7.u8);
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,35(r11)
	REX_STORE_U8(ctx.r11.u32 + 35, ctx.r5.u8);
	// stw r4,39(r11)
	REX_STORE_U32(ctx.r11.u32 + 39, ctx.r4.u32);
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82386850
	if (ctx.cr6.eq) goto loc_82386850;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r5.u8);
	// stw r4,43(r11)
	REX_STORE_U32(ctx.r11.u32 + 43, ctx.r4.u32);
loc_82386850:
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bdnz 0x82386750
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82386750;
	// lwz r11,1600(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1600);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82386af4
	if (ctx.cr6.eq) goto loc_82386AF4;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82386af4
	if (!ctx.cr6.eq) goto loc_82386AF4;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r10,620(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 620);
	// addis r9,r30,1
	ctx.r9.s64 = r30.s64 + 65536;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// addi r9,r9,-19972
	ctx.r9.s64 = ctx.r9.s64 + -19972;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// stw r9,1604(r31)
	REX_STORE_U32(r31.u32 + 1604, ctx.r9.u32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// subf r29,r10,r9
	r29.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_823868AC:
	// lbzx r28,r11,r10
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r27,r28,4,26,27
	r27.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0x30;
	// rlwinm r28,r28,31,1,31
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
	// or r28,r27,r28
	r28.u64 = r27.u64 | r28.u64;
	// rlwinm r28,r28,0,25,30
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x7E;
	// stbx r28,r29,r9
	REX_STORE_U8(r29.u32 + ctx.r9.u32, r28.u8);
	// lbzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r28,r9,4,26,27
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x30;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,25,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7E;
	// stbx r9,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r9,r6,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// rlwinm r28,r9,4,26,27
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x30;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,25,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7E;
	// stbx r9,r5,r11
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r9,r4,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r28,r9,4,26,27
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x30;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,25,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7E;
	// stbx r9,r3,r11
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823868ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823868AC;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r10,624(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 624);
	// addis r9,r30,1
	ctx.r9.s64 = r30.s64 + 65536;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// addi r9,r9,-19940
	ctx.r9.s64 = ctx.r9.s64 + -19940;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// stw r9,1608(r31)
	REX_STORE_U32(r31.u32 + 1608, ctx.r9.u32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// subf r29,r10,r9
	r29.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_82386950:
	// lbzx r28,r11,r10
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r27,r28,3,24,28
	r27.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xF8;
	// rlwinm r28,r28,30,2,31
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 30) & 0x3FFFFFFF;
	// or r28,r27,r28
	r28.u64 = r27.u64 | r28.u64;
	// rlwinm r28,r28,0,26,30
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x3E;
	// stbx r28,r29,r9
	REX_STORE_U8(r29.u32 + ctx.r9.u32, r28.u8);
	// lbzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r28,r9,3,24,28
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xF8;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,26,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3E;
	// stbx r9,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r9,r6,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// rlwinm r28,r9,3,24,28
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xF8;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,26,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3E;
	// stbx r9,r5,r11
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r9,r4,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r28,r9,3,24,28
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xF8;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,26,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3E;
	// stbx r9,r3,r11
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82386950
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82386950;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r10,632(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 632);
	// addis r9,r30,1
	ctx.r9.s64 = r30.s64 + 65536;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// addi r9,r9,-19908
	ctx.r9.s64 = ctx.r9.s64 + -19908;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// stw r9,1616(r31)
	REX_STORE_U32(r31.u32 + 1616, ctx.r9.u32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// subf r29,r10,r9
	r29.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_823869F4:
	// lbzx r28,r11,r10
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r27,r28,3,27,28
	r27.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0x18;
	// rlwinm r28,r28,31,1,31
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
	// or r28,r27,r28
	r28.u64 = r27.u64 | r28.u64;
	// rlwinm r28,r28,0,25,30
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x7E;
	// stbx r28,r29,r9
	REX_STORE_U8(r29.u32 + ctx.r9.u32, r28.u8);
	// lbzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r28,r9,3,27,28
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x18;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,25,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7E;
	// stbx r9,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r9,r6,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// rlwinm r28,r9,3,27,28
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x18;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,25,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7E;
	// stbx r9,r5,r11
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r9,r4,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r28,r9,3,27,28
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x18;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,25,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7E;
	// stbx r9,r3,r11
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823869f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823869F4;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r10,444(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 444);
	// addis r9,r30,1
	ctx.r9.s64 = r30.s64 + 65536;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// addi r9,r9,-20036
	ctx.r9.s64 = ctx.r9.s64 + -20036;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r9,1620(r31)
	REX_STORE_U32(r31.u32 + 1620, ctx.r9.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// subf r31,r10,r9
	r31.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_82386A98:
	// lbzx r30,r11,r10
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r29,r30,30,2,30
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r30,r30,4,25,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0x70;
	// or r30,r29,r30
	r30.u64 = r29.u64 | r30.u64;
	// stbx r30,r31,r9
	REX_STORE_U8(r31.u32 + ctx.r9.u32, r30.u8);
	// lbzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r30,r9,30,2,30
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r9,r9,4,25,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x70;
	// or r9,r30,r9
	ctx.r9.u64 = r30.u64 | ctx.r9.u64;
	// stbx r9,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r9,r6,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// rlwinm r30,r9,30,2,30
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r9,r9,4,25,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x70;
	// or r9,r30,r9
	ctx.r9.u64 = r30.u64 | ctx.r9.u64;
	// stbx r9,r5,r11
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r9,r4,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r30,r9,30,2,30
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r9,r9,4,25,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x70;
	// or r9,r30,r9
	ctx.r9.u64 = r30.u64 | ctx.r9.u64;
	// stbx r9,r3,r11
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82386a98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82386A98;
loc_82386AF4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_823D5B60) {
	REX_FUNC_PROLOGUE();
	// lhz r11,3(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 3);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,3(r3)
	REX_STORE_U16(ctx.r3.u32 + 3, ctx.r11.u16);
	// lhz r11,5(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 5);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,5(r3)
	REX_STORE_U16(ctx.r3.u32 + 5, ctx.r11.u16);
	// lhz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 8);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,8(r3)
	REX_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// lhz r11,10(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 10);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,10(r3)
	REX_STORE_U16(ctx.r3.u32 + 10, ctx.r11.u16);
	// lhz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 12);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,12(r3)
	REX_STORE_U16(ctx.r3.u32 + 12, ctx.r11.u16);
	// lhz r11,14(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 14);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,14(r3)
	REX_STORE_U16(ctx.r3.u32 + 14, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D7B20) {
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
	// bl 0x823d79f8
	ctx.lr = 0x823D7B54;
	sub_823D79F8(ctx, base);
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

DEFINE_REX_FUNC(sub_823D7F38) {
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
	ctx.lr = 0x823D7F40;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,108(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r8,96(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r28,32(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r6,32(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r10,r9,r8
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r27,r10,r6
	r27.u64 = ctx.r10.u64 + ctx.r6.u64;
	// b 0x823d8024
	goto loc_823D8024;
loc_823D7F64:
	// lwz r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 + ctx.r6.u64;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823d8008
	if (!ctx.cr6.lt) goto loc_823D8008;
	// subf r10,r6,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r6.u64;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r7,r28,-2
	ctx.r7.s64 = r28.s64 + -2;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823D7FA0:
	// lhz r26,6(r11)
	r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r25,6(r10)
	r25.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lhzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// rlwinm r4,r26,0,24,27
	ctx.r4.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xF0;
	// lhzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// rlwinm r31,r25,0,24,27
	r31.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xF0;
	// rlwinm r29,r9,0,24,27
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF0;
	// andi. r5,r8,3855
	ctx.r5.u64 = ctx.r8.u64 & 3855;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// andi. r9,r9,3855
	ctx.r9.u64 = ctx.r9.u64 & 3855;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// andi. r5,r25,3855
	ctx.r5.u64 = r25.u64 & 3855;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwinm r30,r8,0,24,27
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF0;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r8,r30,r29
	ctx.r8.u64 = r30.u64 + r29.u64;
	// andi. r5,r26,3855
	ctx.r5.u64 = r26.u64 & 3855;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// addi r9,r9,514
	ctx.r9.s64 = ctx.r9.s64 + 514;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r9,r9,30,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0xFFF;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// rlwinm r9,r9,0,28,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// rlwinm r8,r8,30,24,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0xF0;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// sthu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x823d7fa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D7FA0;
loc_823D8008:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r9,96(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// add r28,r10,r28
	r28.u64 = ctx.r10.u64 + r28.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
loc_823D8024:
	// cmplw cr6,r6,r27
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r27.u32, ctx.xer);
	// blt cr6,0x823d7f64
	if (ctx.cr6.lt) goto loc_823D7F64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_823DB238) {
	REX_FUNC_PROLOGUE();
	// b 0x823db0e0
	sub_823DB0E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823DB240) {
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
	ctx.lr = 0x823DB248;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// stw r6,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r6.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r8,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r8.u32);
	// mr r16,r5
	r16.u64 = ctx.r5.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r15,r9
	r15.u64 = ctx.r9.u64;
	// bl 0x823db0e0
	ctx.lr = 0x823DB26C;
	sub_823DB0E0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82223270
	ctx.lr = 0x823DB278;
	sub_82223270(ctx, base);
	// li r14,1
	r14.s64 = 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823db348
	if (ctx.cr6.eq) goto loc_823DB348;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// lwz r18,112(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// blt cr6,0x823db33c
	if (ctx.cr6.lt) goto loc_823DB33C;
	// lwz r19,120(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r30,152(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// cmplw cr6,r19,r30
	ctx.cr6.compare<uint32_t>(r19.u32, r30.u32, ctx.xer);
	// bgt cr6,0x823db33c
	if (ctx.cr6.gt) goto loc_823DB33C;
	// cmpw cr6,r18,r19
	ctx.cr6.compare<int32_t>(r18.s32, r19.s32, ctx.xer);
	// bgt cr6,0x823db33c
	if (ctx.cr6.gt) goto loc_823DB33C;
	// lwz r20,116(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// blt cr6,0x823db33c
	if (ctx.cr6.lt) goto loc_823DB33C;
	// lwz r21,124(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r28,156(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// cmplw cr6,r21,r28
	ctx.cr6.compare<uint32_t>(r21.u32, r28.u32, ctx.xer);
	// bgt cr6,0x823db33c
	if (ctx.cr6.gt) goto loc_823DB33C;
	// cmpw cr6,r20,r21
	ctx.cr6.compare<int32_t>(r20.s32, r21.s32, ctx.xer);
	// bgt cr6,0x823db33c
	if (ctx.cr6.gt) goto loc_823DB33C;
	// li r22,0
	r22.s64 = 0;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bne cr6,0x823db318
	if (!ctx.cr6.eq) goto loc_823DB318;
	// cmplw cr6,r19,r30
	ctx.cr6.compare<uint32_t>(r19.u32, r30.u32, ctx.xer);
	// bne cr6,0x823db318
	if (!ctx.cr6.eq) goto loc_823DB318;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x823db318
	if (!ctx.cr6.eq) goto loc_823DB318;
	// cmplw cr6,r21,r28
	ctx.cr6.compare<uint32_t>(r21.u32, r28.u32, ctx.xer);
	// mr r25,r22
	r25.u64 = r22.u64;
	// beq cr6,0x823db31c
	if (ctx.cr6.eq) goto loc_823DB31C;
loc_823DB318:
	// mr r25,r14
	r25.u64 = r14.u64;
loc_823DB31C:
	// clrlwi. r11,r15,31
	ctx.r11.u64 = r15.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823db334
	if (!ctx.cr0.eq) goto loc_823DB334;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x823db334
	if (!ctx.cr6.eq) goto loc_823DB334;
	// mr r26,r14
	r26.u64 = r14.u64;
	// b 0x823db380
	goto loc_823DB380;
loc_823DB334:
	// mr r26,r22
	r26.u64 = r22.u64;
	// b 0x823db380
	goto loc_823DB380;
loc_823DB33C:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x823db754
	goto loc_823DB754;
loc_823DB348:
	// lwz r30,152(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// li r22,0
	r22.s64 = 0;
	// lwz r28,156(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// not r11,r15
	ctx.r11.u64 = ~r15.u64;
	// mr r18,r22
	r18.u64 = r22.u64;
	// stw r22,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r22.u32);
	// mr r20,r22
	r20.u64 = r22.u64;
	// stw r22,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r22.u32);
	// mr r19,r30
	r19.u64 = r30.u64;
	// mr r21,r28
	r21.u64 = r28.u64;
	// stw r30,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// mr r25,r22
	r25.u64 = r22.u64;
	// stw r28,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// clrlwi r26,r11,31
	r26.u64 = ctx.r11.u32 & 0x1;
loc_823DB380:
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// rlwinm. r17,r15,0,15,15
	r17.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(r17.s32, 0, ctx.xer);
	// ori r24,r11,20
	r24.u64 = ctx.r11.u64 | 20;
	// beq 0x823db4e0
	if (ctx.cr0.eq) goto loc_823DB4E0;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// mr r31,r22
	r31.u64 = r22.u64;
	// ori r10,r10,18
	ctx.r10.u64 = ctx.r10.u64 | 18;
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823db3d0
	if (ctx.cr6.lt) goto loc_823DB3D0;
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r24.s32, ctx.xer);
	// bgt cr6,0x823db3d0
	if (ctx.cr6.gt) goto loc_823DB3D0;
	// or r11,r28,r30
	ctx.r11.u64 = r28.u64 | r30.u64;
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823db3d0
	if (ctx.cr0.eq) goto loc_823DB3D0;
loc_823DB3C0:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// slw r10,r11,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r31.u8 & 0x3F));
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823db3c0
	if (!ctx.cr0.eq) goto loc_823DB3C0;
loc_823DB3D0:
	// addi r27,r23,16
	r27.s64 = r23.s64 + 16;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82215ef0
	ctx.lr = 0x823DB3E0;
	sub_82215EF0(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r8,128(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// li r7,0
	ctx.r7.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r6,r31,1
	ctx.r6.s64 = r31.s64 + 1;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r5,1
	ctx.r5.s64 = 1;
	// slw r4,r28,r31
	ctx.r4.u64 = r31.u8 & 0x20 ? 0 : (r28.u32 << (r31.u8 & 0x3F));
	// slw r3,r30,r31
	ctx.r3.u64 = r31.u8 & 0x20 ? 0 : (r30.u32 << (r31.u8 & 0x3F));
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// bl 0x82223018
	ctx.lr = 0x823DB414;
	sub_82223018(ctx, base);
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// stw r3,12(r23)
	REX_STORE_U32(r23.u32 + 12, ctx.r3.u32);
	// ori r30,r11,14
	r30.u64 = ctx.r11.u64 | 14;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r28,r11,r30
	r28.u64 = ctx.r11.u64 & r30.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x823db49c
	if (ctx.cr0.lt) goto loc_823DB49C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// bl 0x82222dc8
	ctx.lr = 0x823DB43C;
	sub_82222DC8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r3,8(r23)
	REX_STORE_U32(r23.u32 + 8, ctx.r3.u32);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r28,r11,r30
	r28.u64 = ctx.r11.u64 & r30.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x823db49c
	if (ctx.cr0.lt) goto loc_823DB49C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x823db48c
	if (!ctx.cr6.eq) goto loc_823DB48C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8229a710
	ctx.lr = 0x823DB460;
	sub_8229A710(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r4,8(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 8);
	// bl 0x823dafe8
	ctx.lr = 0x823DB46C;
	sub_823DAFE8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8229a710
	ctx.lr = 0x823DB478;
	sub_8229A710(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge cr6,0x823db48c
	if (!ctx.cr6.lt) goto loc_823DB48C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x823db754
	goto loc_823DB754;
loc_823DB48C:
	// lwz r26,8(r23)
	r26.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lwz r28,156(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r30,152(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// b 0x823db4e4
	goto loc_823DB4E4;
loc_823DB49C:
	// lwz r3,8(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823db4b0
	if (ctx.cr6.eq) goto loc_823DB4B0;
	// bl 0x82216cc8
	ctx.lr = 0x823DB4AC;
	sub_82216CC8(ctx, base);
	// stw r22,8(r23)
	REX_STORE_U32(r23.u32 + 8, r22.u32);
loc_823DB4B0:
	// lwz r3,12(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823db4c4
	if (ctx.cr6.eq) goto loc_823DB4C4;
	// bl 0x82216cc8
	ctx.lr = 0x823DB4C0;
	sub_82216CC8(ctx, base);
	// stw r22,12(r23)
	REX_STORE_U32(r23.u32 + 12, r22.u32);
loc_823DB4C4:
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823db4d8
	if (ctx.cr6.eq) goto loc_823DB4D8;
	// bl 0x8221a848
	ctx.lr = 0x823DB4D4;
	sub_8221A848(ctx, base);
	// stw r22,0(r27)
	REX_STORE_U32(r27.u32 + 0, r22.u32);
loc_823DB4D8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x823db754
	goto loc_823DB754;
loc_823DB4E0:
	// mr r26,r16
	r26.u64 = r16.u64;
loc_823DB4E4:
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r27,r15,4,27,27
	r27.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 4) & 0x10;
	// rlwinm r11,r10,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	// addi r11,r11,-256
	ctx.r11.s64 = ctx.r11.s64 + -256;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r25
	r31.u64 = ctx.r11.u64 & r25.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x823db630
	if (ctx.cr6.eq) goto loc_823DB630;
	// lis r9,6688
	ctx.r9.s64 = 438304768;
	// rlwinm r11,r10,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// ori r10,r9,11
	ctx.r10.u64 = ctx.r9.u64 | 11;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823db608
	if (ctx.cr6.lt) goto loc_823DB608;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823db5b4
	if (!ctx.cr6.gt) goto loc_823DB5B4;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,17
	ctx.r10.u64 = ctx.r10.u64 | 17;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823db608
	if (!ctx.cr6.gt) goto loc_823DB608;
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r24.s32, ctx.xer);
	// bgt cr6,0x823db608
	if (ctx.cr6.gt) goto loc_823DB608;
	// addi r11,r19,3
	ctx.r11.s64 = r19.s64 + 3;
	// addi r10,r21,3
	ctx.r10.s64 = r21.s64 + 3;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r9,r18,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r8,r20,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// ble cr6,0x823db57c
	if (!ctx.cr6.gt) goto loc_823DB57C;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r30.u32);
loc_823DB57C:
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, ctx.xer);
	// ble cr6,0x823db58c
	if (!ctx.cr6.gt) goto loc_823DB58C;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// stw r28,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r28.u32);
loc_823DB58C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823db600
	if (!ctx.cr6.eq) goto loc_823DB600;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x823db600
	if (!ctx.cr6.eq) goto loc_823DB600;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823db600
	if (!ctx.cr6.eq) goto loc_823DB600;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, ctx.xer);
loc_823DB5A8:
	// bne cr6,0x823db600
	if (!ctx.cr6.eq) goto loc_823DB600;
	// mr r31,r22
	r31.u64 = r22.u64;
	// b 0x823db630
	goto loc_823DB630;
loc_823DB5B4:
	// addi r11,r19,1
	ctx.r11.s64 = r19.s64 + 1;
	// stw r20,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r20.u32);
	// rlwinm r10,r18,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r21,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r21.u32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// ble cr6,0x823db5e0
	if (!ctx.cr6.gt) goto loc_823DB5E0;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r30.u32);
loc_823DB5E0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823db600
	if (!ctx.cr6.eq) goto loc_823DB600;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x823db600
	if (!ctx.cr6.eq) goto loc_823DB600;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x823db600
	if (!ctx.cr6.eq) goto loc_823DB600;
	// cmplw cr6,r21,r28
	ctx.cr6.compare<uint32_t>(r21.u32, r28.u32, ctx.xer);
	// b 0x823db5a8
	goto loc_823DB5A8;
loc_823DB600:
	// mr r31,r14
	r31.u64 = r14.u64;
	// b 0x823db630
	goto loc_823DB630;
loc_823DB608:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
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
loc_823DB630:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// bne cr6,0x823db66c
	if (!ctx.cr6.eq) goto loc_823DB66C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8229a710
	ctx.lr = 0x823DB640;
	sub_8229A710(ctx, base);
	// subfic r11,r31,0
	ctx.xer.ca = r31.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r31.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r6,r27,0,28,26
	ctx.r6.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// and r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82223308
	ctx.lr = 0x823DB660;
	sub_82223308(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8229a710
	ctx.lr = 0x823DB668;
	sub_8229A710(ctx, base);
	// b 0x823db68c
	goto loc_823DB68C;
loc_823DB66C:
	// subfic r11,r31,0
	ctx.xer.ca = r31.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r31.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r6,r27,0,28,26
	ctx.r6.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// and r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82223308
	ctx.lr = 0x823DB68C;
	sub_82223308(ctx, base);
loc_823DB68C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x823db6bc
	if (ctx.cr6.eq) goto loc_823DB6BC;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subf r9,r11,r18
	ctx.r9.u64 = r18.u64 - ctx.r11.u64;
	// subf r8,r10,r20
	ctx.r8.u64 = r20.u64 - ctx.r10.u64;
	// subf r11,r11,r19
	ctx.r11.u64 = r19.u64 - ctx.r11.u64;
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// subf r10,r10,r21
	ctx.r10.u64 = r21.u64 - ctx.r10.u64;
	// stw r8,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
loc_823DB6BC:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,152(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r6,156(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,8(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,380(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r28,364(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// stw r9,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r9.u32);
	// stw r8,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r8.u32);
	// stw r7,24(r29)
	REX_STORE_U32(r29.u32 + 24, ctx.r7.u32);
	// stw r22,12(r29)
	REX_STORE_U32(r29.u32 + 12, r22.u32);
	// stw r22,16(r29)
	REX_STORE_U32(r29.u32 + 16, r22.u32);
	// stw r22,20(r29)
	REX_STORE_U32(r29.u32 + 20, r22.u32);
	// stw r6,28(r29)
	REX_STORE_U32(r29.u32 + 28, ctx.r6.u32);
	// stw r22,32(r29)
	REX_STORE_U32(r29.u32 + 32, r22.u32);
	// stw r14,36(r29)
	REX_STORE_U32(r29.u32 + 36, r14.u32);
	// stw r5,40(r29)
	REX_STORE_U32(r29.u32 + 40, ctx.r5.u32);
	// stw r4,44(r29)
	REX_STORE_U32(r29.u32 + 44, ctx.r4.u32);
	// stw r31,48(r29)
	REX_STORE_U32(r29.u32 + 48, r31.u32);
	// stw r11,52(r29)
	REX_STORE_U32(r29.u32 + 52, ctx.r11.u32);
	// stw r22,56(r29)
	REX_STORE_U32(r29.u32 + 56, r22.u32);
	// stw r14,60(r29)
	REX_STORE_U32(r29.u32 + 60, r14.u32);
	// stw r14,64(r29)
	REX_STORE_U32(r29.u32 + 64, r14.u32);
	// stw r22,68(r29)
	REX_STORE_U32(r29.u32 + 68, r22.u32);
	// stw r22,72(r29)
	REX_STORE_U32(r29.u32 + 72, r22.u32);
	// stw r30,76(r29)
	REX_STORE_U32(r29.u32 + 76, r30.u32);
	// stw r28,80(r29)
	REX_STORE_U32(r29.u32 + 80, r28.u32);
	// stw r16,4(r23)
	REX_STORE_U32(r23.u32 + 4, r16.u32);
	// stw r15,0(r23)
	REX_STORE_U32(r23.u32 + 0, r15.u32);
	// bl 0x82215e78
	ctx.lr = 0x823DB750;
	sub_82215E78(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823DB754:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823E63F0) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-6624
	ctx.r11.s64 = ctx.r11.s64 + -6624;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x823e4f08
	ctx.lr = 0x823E6414;
	sub_823E4F08(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e6428
	if (ctx.cr6.eq) goto loc_823E6428;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x823cd250
	ctx.lr = 0x823E6428;
	sub_823CD250(ctx, base);
loc_823E6428:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbd38
	ctx.lr = 0x823E6430;
	sub_823DBD38(ctx, base);
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

DEFINE_REX_FUNC(sub_823E71D0) {
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,22588
	ctx.r10.s64 = ctx.r10.s64 + 22588;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
loc_823E71F4:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x823e7214
	if (!ctx.cr0.eq) goto loc_823E7214;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x823e71f4
	if (!ctx.cr6.eq) goto loc_823E71F4;
loc_823E7214:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x823e7254
	if (ctx.cr0.eq) goto loc_823E7254;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,22556
	ctx.r10.s64 = ctx.r10.s64 + 22556;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
loc_823E722C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823e724c
	if (!ctx.cr0.eq) goto loc_823E724C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823e722c
	if (!ctx.cr6.eq) goto loc_823E722C;
loc_823E724C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823e7270
	if (!ctx.cr0.eq) goto loc_823E7270;
loc_823E7254:
	// stw r3,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E7268;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823e7278
	goto loc_823E7278;
loc_823E7270:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16386
	ctx.r3.u64 = ctx.r3.u64 | 16386;
loc_823E7278:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EAC08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x823EAC10;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// not r31,r5
	r31.u64 = ~ctx.r5.u64;
	// rlwinm r28,r7,30,2,31
	r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x823eac34
	goto loc_823EAC34;
loc_823EAC28:
	// lwz r31,36(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823eac58
	if (ctx.cr6.eq) goto loc_823EAC58;
loc_823EAC34:
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
	// bl 0x823e8330
	ctx.lr = 0x823EAC4C;
	sub_823E8330(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823eac28
	if (!ctx.cr0.lt) goto loc_823EAC28;
	// b 0x823eac5c
	goto loc_823EAC5C;
loc_823EAC58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EAC5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823EBC78) {
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
	ctx.lr = 0x823EBC80;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
loc_823EBC8C:
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// b 0x823ebc9c
	goto loc_823EBC9C;
loc_823EBC98:
	// lbzu r11,1(r30)
	ea = 1 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r30.u32 = ea;
loc_823EBC9C:
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x822dcab8
	ctx.lr = 0x823EBCA4;
	sub_822DCAB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823ebc98
	if (!ctx.cr0.eq) goto loc_823EBC98;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823ebe90
	if (ctx.cr0.eq) goto loc_823EBE90;
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// bne cr6,0x823ebd6c
	if (!ctx.cr6.eq) goto loc_823EBD6C;
loc_823EBCC0:
	// lbzu r11,1(r30)
	ea = 1 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r30.u32 = ea;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x822dcab8
	ctx.lr = 0x823EBCCC;
	sub_822DCAB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823ebcc0
	if (!ctx.cr0.eq) goto loc_823EBCC0;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x822dca78
	ctx.lr = 0x823EBCE0;
	sub_822DCA78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823ebe98
	if (ctx.cr0.eq) goto loc_823EBE98;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// b 0x823ebd14
	goto loc_823EBD14;
loc_823EBCF8:
	// lbz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 0);
	// mulli r11,r31,10
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(10));
	// lbzu r9,1(r30)
	ea = 1 + r30.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	r30.u32 = ea;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r3,r9
	ctx.r3.s64 = ctx.r9.s8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,-48
	r31.s64 = ctx.r11.s64 + -48;
loc_823EBD14:
	// bl 0x822dca78
	ctx.lr = 0x823EBD18;
	sub_822DCA78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823ebcf8
	if (!ctx.cr0.eq) goto loc_823EBCF8;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// b 0x823ebd2c
	goto loc_823EBD2C;
loc_823EBD28:
	// lbzu r11,1(r30)
	ea = 1 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r30.u32 = ea;
loc_823EBD2C:
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x822dcab8
	ctx.lr = 0x823EBD34;
	sub_822DCAB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823ebd28
	if (!ctx.cr0.eq) goto loc_823EBD28;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bne cr6,0x823ebe98
	if (!ctx.cr6.eq) goto loc_823EBE98;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823eb758
	ctx.lr = 0x823EBD54;
	sub_823EB758(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ebe98
	if (ctx.cr0.eq) goto loc_823EBE98;
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_823EBD64:
	// li r31,0
	r31.s64 = 0;
	// b 0x823ebc8c
	goto loc_823EBC8C;
loc_823EBD6C:
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// beq cr6,0x823ebd84
	if (ctx.cr6.eq) goto loc_823EBD84;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x823ebe98
	if (ctx.cr6.eq) goto loc_823EBE98;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// bne cr6,0x823ebd88
	if (!ctx.cr6.eq) goto loc_823EBD88;
loc_823EBD84:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_823EBD88:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// b 0x823ebd94
	goto loc_823EBD94;
loc_823EBD90:
	// lbzu r11,1(r30)
	ea = 1 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r30.u32 = ea;
loc_823EBD94:
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x822dcab8
	ctx.lr = 0x823EBD9C;
	sub_822DCAB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823ebd90
	if (!ctx.cr0.eq) goto loc_823EBD90;
	// li r31,0
	r31.s64 = 0;
loc_823EBDA8:
	// lbzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + r30.u32);
	// add r27,r31,r30
	r27.u64 = r31.u64 + r30.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x822dcad8
	ctx.lr = 0x823EBDB8;
	sub_822DCAD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823ebdcc
	if (!ctx.cr0.eq) goto loc_823EBDCC;
	// lbz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 0);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// bne cr6,0x823ebdd4
	if (!ctx.cr6.eq) goto loc_823EBDD4;
loc_823EBDCC:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x823ebda8
	goto loc_823EBDA8;
loc_823EBDD4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823ebe98
	if (ctx.cr6.eq) goto loc_823EBE98;
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r28,10(r11)
	r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
loc_823EBDEC:
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, ctx.xer);
	// bge cr6,0x823ebe98
	if (!ctx.cr6.lt) goto loc_823EBE98;
	// lwz r4,56(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 56);
	// lwzx r11,r5,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ebe68
	if (ctx.cr6.eq) goto loc_823EBE68;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x823ebe54
	if (ctx.cr6.eq) goto loc_823EBE54;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// subf r7,r30,r6
	ctx.r7.u64 = ctx.r6.u64 - r30.u64;
loc_823EBE28:
	// lbzx r10,r7,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823ebe68
	if (ctx.cr6.lt) goto loc_823EBE68;
	// bgt cr6,0x823ebe68
	if (ctx.cr6.gt) goto loc_823EBE68;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, ctx.xer);
	// blt cr6,0x823ebe28
	if (ctx.cr6.lt) goto loc_823EBE28;
loc_823EBE54:
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, ctx.xer);
	// bne cr6,0x823ebe74
	if (!ctx.cr6.eq) goto loc_823EBE74;
	// lbzx r11,r9,r6
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823ebe74
	if (ctx.cr0.eq) goto loc_823EBE74;
loc_823EBE68:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// b 0x823ebdec
	goto loc_823EBDEC;
loc_823EBE74:
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ebe98
	if (ctx.cr6.eq) goto loc_823EBE98;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// b 0x823ebd64
	goto loc_823EBD64;
loc_823EBE90:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x823ebe9c
	goto loc_823EBE9C;
loc_823EBE98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EBE9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823F4548) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r11,9632(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 9632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f455c
	if (ctx.cr6.eq) goto loc_823F455C;
	// b 0x823f43f0
	sub_823F43F0(ctx, base);
	return;
loc_823F455C:
	// b 0x823f3db8
	sub_823F3DB8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823F45F0) {
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
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823f4644
	if (ctx.cr6.eq) goto loc_823F4644;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823f4644
	if (ctx.cr6.eq) goto loc_823F4644;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x823cd118
	ctx.lr = 0x823F4624;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823f463c
	if (!ctx.cr0.eq) goto loc_823F463C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,712
	ctx.r4.s64 = ctx.r11.s64 + 712;
	// bl 0x823ec3e0
	ctx.lr = 0x823F463C;
	sub_823EC3E0(ctx, base);
loc_823F463C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x823f4648
	goto loc_823F4648;
loc_823F4644:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F4648:
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

DEFINE_REX_FUNC(sub_823F54A8) {
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
	ctx.lr = 0x823F54B0;
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
	// beq cr6,0x823f54fc
	if (ctx.cr6.eq) goto loc_823F54FC;
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
	ctx.lr = 0x823F54FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F54FC:
	// li r5,584
	ctx.r5.s64 = 584;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x823F550C;
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
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r3,68(r30)
	REX_STORE_U32(r30.u32 + 68, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_823F6210) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f6264
	if (ctx.cr6.eq) goto loc_823F6264;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F6240;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823f625c
	if (ctx.cr6.eq) goto loc_823F625C;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,200
	ctx.r11.s64 = 200;
	// stw r10,308(r31)
	REX_STORE_U32(r31.u32 + 308, ctx.r10.u32);
	// b 0x823f6260
	goto loc_823F6260;
loc_823F625C:
	// li r11,100
	ctx.r11.s64 = 100;
loc_823F6260:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_823F6264:
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

DEFINE_REX_FUNC(sub_823F7E50) {
	REX_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x823f7cf8
	sub_823F7CF8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823F84B0) {
	REX_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// blt cr6,0x823f8540
	if (ctx.cr6.lt) goto loc_823F8540;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// bgt cr6,0x823f8540
	if (ctx.cr6.gt) goto loc_823F8540;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// ble cr6,0x823f84d4
	if (!ctx.cr6.gt) goto loc_823F84D4;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x823f8540
	if (ctx.cr6.lt) goto loc_823F8540;
loc_823F84D4:
	// lbz r11,1(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// blt cr6,0x823f8540
	if (ctx.cr6.lt) goto loc_823F8540;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// bgt cr6,0x823f8540
	if (ctx.cr6.gt) goto loc_823F8540;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// ble cr6,0x823f84f8
	if (!ctx.cr6.gt) goto loc_823F84F8;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x823f8540
	if (ctx.cr6.lt) goto loc_823F8540;
loc_823F84F8:
	// lbz r11,2(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// blt cr6,0x823f8540
	if (ctx.cr6.lt) goto loc_823F8540;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// bgt cr6,0x823f8540
	if (ctx.cr6.gt) goto loc_823F8540;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// ble cr6,0x823f851c
	if (!ctx.cr6.gt) goto loc_823F851C;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x823f8540
	if (ctx.cr6.lt) goto loc_823F8540;
loc_823F851C:
	// lbz r11,3(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// blt cr6,0x823f8540
	if (ctx.cr6.lt) goto loc_823F8540;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// bgt cr6,0x823f8540
	if (ctx.cr6.gt) goto loc_823F8540;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_823F8540:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,2508
	ctx.r4.s64 = ctx.r11.s64 + 2508;
	// b 0x823ec430
	sub_823EC430(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823FA138) {
	REX_FUNC_PROLOGUE();
	// lis r3,15
	ctx.r3.s64 = 983040;
	// ori r3,r3,16960
	ctx.r3.u64 = ctx.r3.u64 | 16960;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823FA238) {
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
	ctx.lr = 0x823FA240;
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r26,0
	r26.s64 = 0;
	// lwz r30,428(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 428);
	// lwz r11,220(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r27,320(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// ble cr6,0x823fa358
	if (!ctx.cr6.gt) goto loc_823FA358;
	// addi r29,r27,2
	r29.s64 = r27.s64 + 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,12
	r31.s64 = ctx.r11.s64 + 12;
	// addi r28,r30,8
	r28.s64 = r30.s64 + 8;
loc_823FA26C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r7,56(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 56);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// lwz r6,320(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// lwzx r8,r28,r5
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + ctx.r5.u32);
	// lwzx r4,r5,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lwzx r10,r5,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r7,r9,r6
	ctx.r7.u64 = uint32_t((ctx.r6.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r9.s32 / ctx.r6.s32 : 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r11.u64;
	// mullw. r9,r29,r7
	ctx.r9.s64 = int64_t(r29.s32) * int64_t(ctx.r7.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble 0x823fa2d4
	if (!ctx.cr0.gt) goto loc_823FA2D4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// subf r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r10.u64;
	// subf r6,r10,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r10.u64;
loc_823FA2C0:
	// lwzx r25,r9,r11
	r25.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r25.u32);
	// stwx r25,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, r25.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823fa2c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FA2C0;
loc_823FA2D4:
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823fa31c
	if (!ctx.cr6.gt) goto loc_823FA31C;
	// addi r6,r27,-2
	ctx.r6.s64 = r27.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mullw r9,r7,r27
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(r27.s32);
	// mullw r6,r6,r7
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
loc_823FA2F4:
	// add r25,r9,r11
	r25.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r24,r6,r11
	r24.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r25,r25,2,0,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r24,2,0,29
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r23,r25,r8
	r23.u64 = REX_LOAD_U32(r25.u32 + ctx.r8.u32);
	// stwx r23,r24,r10
	REX_STORE_U32(r24.u32 + ctx.r10.u32, r23.u32);
	// lwzx r24,r24,r8
	r24.u64 = REX_LOAD_U32(r24.u32 + ctx.r8.u32);
	// stwx r24,r25,r10
	REX_STORE_U32(r25.u32 + ctx.r10.u32, r24.u32);
	// bdnz 0x823fa2f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FA2F4;
loc_823FA31C:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x823fa340
	if (!ctx.cr6.gt) goto loc_823FA340;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r10,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r10.u64;
loc_823FA334:
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823fa334
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FA334;
loc_823FA340:
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r31,r31,84
	r31.s64 = r31.s64 + 84;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823fa26c
	if (ctx.cr6.lt) goto loc_823FA26C;
loc_823FA358:
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_823FE808) {
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
	ctx.lr = 0x823FE810;
	// lwz r11,460(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 460);
	// addic. r24,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	r24.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// lwz r26,112(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r8,328(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 328);
	// lwz r31,8(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,12(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r29,16(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r28,20(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// blt 0x823fe8d4
	if (ctx.cr0.lt) goto loc_823FE8D4;
	// rlwinm r27,r5,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r6,-4
	r25.s64 = ctx.r6.s64 + -4;
loc_823FE83C:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// lwz r7,4(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r6,8(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwzu r10,4(r25)
	ea = 4 + r25.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	r25.u32 = ea;
	// lwzx r9,r11,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// lwzx r11,r27,r7
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + ctx.r7.u32);
	// lwzx r7,r6,r27
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + r27.u32);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// beq cr6,0x823fe8cc
	if (ctx.cr6.eq) goto loc_823FE8CC;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r5,r11,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r3,r11,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r11.u64;
loc_823FE874:
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// lbzx r9,r5,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// rotlwi r6,r7,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r23,r7,2
	r23.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwzx r7,r6,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lbzx r7,r7,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// stb r7,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// lwzx r7,r6,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + r29.u32);
	// lwzx r6,r23,r28
	ctx.r6.u64 = REX_LOAD_U32(r23.u32 + r28.u32);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// srawi r7,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 16;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lbzx r6,r7,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// stb r6,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// lwzx r7,r23,r30
	ctx.r7.u64 = REX_LOAD_U32(r23.u32 + r30.u32);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lbzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// stbu r7,3(r10)
	ea = 3 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x823fe874
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FE874;
loc_823FE8CC:
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bge 0x823fe83c
	if (!ctx.cr0.lt) goto loc_823FE83C;
loc_823FE8D4:
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82404050) {
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
	ctx.lr = 0x82404058;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,292(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,288
	ctx.r4.s64 = 288;
	// lwz r11,32(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,40(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 40);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824040A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x824040b0
	if (!ctx.cr0.eq) goto loc_824040B0;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x82404208
	goto loc_82404208;
loc_824040B0:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,7504
	r31.s64 = ctx.r11.s64 + 7504;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// addi r7,r31,128
	ctx.r7.s64 = r31.s64 + 128;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// li r5,257
	ctx.r5.s64 = 257;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82403ad0
	ctx.lr = 0x824040E8;
	sub_82403AD0(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne 0x824041c4
	if (!ctx.cr0.eq) goto loc_824041C4;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824041e0
	if (ctx.cr6.eq) goto loc_824041E0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r7,r31,376
	ctx.r7.s64 = r31.s64 + 376;
	// addi r6,r31,256
	ctx.r6.s64 = r31.s64 + 256;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x82403ad0
	ctx.lr = 0x82404130;
	sub_82403AD0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82404168
	if (!ctx.cr0.eq) goto loc_82404168;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8240414c
	if (!ctx.cr6.eq) goto loc_8240414C;
	// cmplwi cr6,r29,257
	ctx.cr6.compare<uint32_t>(r29.u32, 257, ctx.xer);
	// bgt cr6,0x82404198
	if (ctx.cr6.gt) goto loc_82404198;
loc_8240414C:
	// lwz r11,36(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,40(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82404160;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82404208
	goto loc_82404208;
loc_82404168:
	// cmpwi cr6,r31,-3
	ctx.cr6.compare<int32_t>(r31.s32, -3, ctx.xer);
	// bne cr6,0x8240417c
	if (!ctx.cr6.eq) goto loc_8240417C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,22504
	ctx.r11.s64 = ctx.r11.s64 + 22504;
	// b 0x824041a4
	goto loc_824041A4;
loc_8240417C:
	// cmpwi cr6,r31,-5
	ctx.cr6.compare<int32_t>(r31.s32, -5, ctx.xer);
	// bne cr6,0x82404190
	if (!ctx.cr6.eq) goto loc_82404190;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,22476
	ctx.r11.s64 = ctx.r11.s64 + 22476;
	// b 0x824041a0
	goto loc_824041A0;
loc_82404190:
	// cmpwi cr6,r31,-4
	ctx.cr6.compare<int32_t>(r31.s32, -4, ctx.xer);
	// beq cr6,0x824041a8
	if (ctx.cr6.eq) goto loc_824041A8;
loc_82404198:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,22440
	ctx.r11.s64 = ctx.r11.s64 + 22440;
loc_824041A0:
	// li r31,-3
	r31.s64 = -3;
loc_824041A4:
	// stw r11,24(r24)
	REX_STORE_U32(r24.u32 + 24, ctx.r11.u32);
loc_824041A8:
	// lwz r11,36(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,40(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824041BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82404208
	goto loc_82404208;
loc_824041C4:
	// cmpwi cr6,r26,-3
	ctx.cr6.compare<int32_t>(r26.s32, -3, ctx.xer);
	// bne cr6,0x824041d8
	if (!ctx.cr6.eq) goto loc_824041D8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,22404
	ctx.r11.s64 = ctx.r11.s64 + 22404;
	// b 0x824041ec
	goto loc_824041EC;
loc_824041D8:
	// cmpwi cr6,r26,-4
	ctx.cr6.compare<int32_t>(r26.s32, -4, ctx.xer);
	// beq cr6,0x824041f0
	if (ctx.cr6.eq) goto loc_824041F0;
loc_824041E0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r26,-3
	r26.s64 = -3;
	// addi r11,r11,22372
	ctx.r11.s64 = ctx.r11.s64 + 22372;
loc_824041EC:
	// stw r11,24(r24)
	REX_STORE_U32(r24.u32 + 24, ctx.r11.u32);
loc_824041F0:
	// lwz r11,36(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,40(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82404204;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82404208:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_824081F8) {
	REX_FUNC_PROLOGUE();
	// b 0x82407dc8
	sub_82407DC8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82408508) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// xori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 ^ 1;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r10,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r10.u64;
	// subf r10,r10,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8240854c
	if (ctx.cr6.lt) goto loc_8240854C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8240854C:
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
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8240A9D0) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e74
	ctx.lr = 0x8240A9D8;
	// lwz r31,0(r5)
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r30,r10,-2
	r30.s64 = ctx.r10.s64 + -2;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// srw r31,r31,r4
	r31.u64 = ctx.r4.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r4.u8 & 0x3F));
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// addic r31,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r31.s64 = r30.s64 + -1;
	// lwz r30,4(r5)
	r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// srw r30,r30,r4
	r30.u64 = ctx.r4.u8 & 0x20 ? 0 : (r30.u32 >> (ctx.r4.u8 & 0x3F));
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// subfe r31,r31,r31
	temp.u8 = (~r31.u32 + r31.u32 < ~r31.u32) | (~r31.u32 + r31.u32 + ctx.xer.ca < ctx.xer.ca);
	r31.u64 = ~r31.u64 + r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r30,16(r5)
	r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// srw r30,r30,r4
	r30.u64 = ctx.r4.u8 & 0x20 ? 0 : (r30.u32 >> (ctx.r4.u8 & 0x3F));
	// stw r30,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// and r31,r31,r11
	r31.u64 = r31.u64 & ctx.r11.u64;
	// lwz r30,0(r7)
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r29,8(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// srw r29,r29,r4
	r29.u64 = ctx.r4.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r4.u8 & 0x3F));
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// mr r26,r29
	r26.u64 = r29.u64;
	// bgt cr6,0x8240aa2c
	if (ctx.cr6.gt) goto loc_8240AA2C;
	// mr r26,r30
	r26.u64 = r30.u64;
loc_8240AA2C:
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// lwz r27,4(r7)
	r27.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r30,12(r5)
	r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// srw r30,r30,r4
	r30.u64 = ctx.r4.u8 & 0x20 ? 0 : (r30.u32 >> (ctx.r4.u8 & 0x3F));
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// ble cr6,0x8240aa48
	if (!ctx.cr6.gt) goto loc_8240AA48;
	// mr r27,r30
	r27.u64 = r30.u64;
loc_8240AA48:
	// stw r27,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r27.u32);
	// lwz r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r5,20(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// srw r30,r5,r4
	r30.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r4.u8 & 0x3F));
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x8240aa64
	if (ctx.cr6.gt) goto loc_8240AA64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
loc_8240AA64:
	// lwz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// cmplw cr6,r26,r5
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8240ac04
	if (ctx.cr6.eq) goto loc_8240AC04;
	// lwz r28,4(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(r27.u32, r28.u32, ctx.xer);
	// beq cr6,0x8240ac04
	if (ctx.cr6.eq) goto loc_8240AC04;
	// lwz r29,16(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// beq cr6,0x8240ac04
	if (ctx.cr6.eq) goto loc_8240AC04;
	// lwz r7,92(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// subfic r10,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r7.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r10,0,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7C;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x8240aab4
	if (!ctx.cr6.eq) goto loc_8240AAB4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// li r7,4
	ctx.r7.s64 = 4;
	// bne cr6,0x8240aab8
	if (!ctx.cr6.eq) goto loc_8240AAB8;
loc_8240AAB4:
	// li r7,1
	ctx.r7.s64 = 1;
loc_8240AAB8:
	// lwz r25,0(r8)
	r25.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r24,r10,-1
	r24.s64 = ctx.r10.s64 + -1;
	// addi r23,r7,-1
	r23.s64 = ctx.r7.s64 + -1;
	// subf r5,r25,r5
	ctx.r5.u64 = ctx.r5.u64 - r25.u64;
	// not r25,r24
	r25.u64 = ~r24.u64;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// not r24,r23
	r24.u64 = ~r23.u64;
	// and r5,r5,r25
	ctx.r5.u64 = ctx.r5.u64 & r25.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// lwz r5,4(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// subf r5,r5,r28
	ctx.r5.u64 = r28.u64 - ctx.r5.u64;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// and r5,r5,r25
	ctx.r5.u64 = ctx.r5.u64 & r25.u64;
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// lwz r5,8(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// subf r5,r5,r29
	ctx.r5.u64 = r29.u64 - ctx.r5.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// and r5,r5,r24
	ctx.r5.u64 = ctx.r5.u64 & r24.u64;
	// stw r5,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// lwz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + r26.u64;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// and r5,r5,r25
	ctx.r5.u64 = ctx.r5.u64 & r25.u64;
	// stw r5,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// lwz r5,4(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 + r27.u64;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// and r5,r5,r25
	ctx.r5.u64 = ctx.r5.u64 & r25.u64;
	// stw r5,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 & r24.u64;
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// beq cr6,0x8240abfc
	if (ctx.cr6.eq) goto loc_8240ABFC;
	// lwz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// lwz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// lwz r6,8(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// sraw r9,r9,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	// lwz r30,0(r8)
	r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// sraw r29,r10,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	r29.s64 = ctx.r10.s32 >> temp.u32;
	// lwz r28,8(r8)
	r28.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// sraw r6,r6,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r6.s64 = ctx.r6.s32 >> temp.u32;
	// subf r10,r30,r9
	ctx.r10.u64 = ctx.r9.u64 - r30.u64;
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// subf r9,r28,r6
	ctx.r9.u64 = ctx.r6.u64 - r28.u64;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r28,12(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// subf r10,r8,r29
	ctx.r10.u64 = r29.u64 - ctx.r8.u64;
	// lwz r27,4(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// lwz r29,16(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// not r5,r5
	ctx.r5.u64 = ~ctx.r5.u64;
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// andc r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// and r31,r30,r5
	r31.u64 = r30.u64 & ctx.r5.u64;
	// stw r9,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// and r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	// subf r10,r27,r28
	ctx.r10.u64 = r28.u64 - r27.u64;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// subf r7,r4,r31
	ctx.r7.u64 = r31.u64 - ctx.r4.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// subf r9,r29,r9
	ctx.r9.u64 = ctx.r9.u64 - r29.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_8240ABFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8240ac08
	goto loc_8240AC08;
loc_8240AC04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240AC08:
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82415C58) {
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
	ctx.lr = 0x82415C60;
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
	// beq cr6,0x82415c90
	if (ctx.cr6.eq) goto loc_82415C90;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x82415C8C;
	sub_82413040(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82415C90:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82415cac
	if (ctx.cr6.eq) goto loc_82415CAC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413dd0
	ctx.lr = 0x82415CA8;
	sub_82413DD0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82415CAC:
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
	// bne 0x82415d0c
	if (!ctx.cr0.eq) goto loc_82415D0C;
	// li r30,0
	r30.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// b 0x82415d14
	goto loc_82415D14;
loc_82415D0C:
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
	// li r29,-1
	r29.s64 = -1;
loc_82415D14:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82415d2c
	if (ctx.cr6.eq) goto loc_82415D2C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x82415D2C;
	sub_823DC658(ctx, base);
loc_82415D2C:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82415e74
	if (!ctx.cr6.gt) goto loc_82415E74;
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
loc_82415D8C:
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
	// beq cr6,0x82415e28
	if (ctx.cr6.eq) goto loc_82415E28;
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
loc_82415E28:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt cr6,0x82415e38
	if (ctx.cr6.lt) goto loc_82415E38;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82415E38:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82415e50
	if (!ctx.cr6.gt) goto loc_82415E50;
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// blt cr6,0x82415e54
	if (ctx.cr6.lt) goto loc_82415E54;
	// li r9,255
	ctx.r9.s64 = 255;
	// b 0x82415e54
	goto loc_82415E54;
loc_82415E50:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82415E54:
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
	// blt cr6,0x82415d8c
	if (ctx.cr6.lt) goto loc_82415D8C;
loc_82415E74:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8241B6C0) {
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
	// bge cr6,0x8241b7fc
	if (!ctx.cr6.lt) goto loc_8241B7FC;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r7,r11,-4
	ctx.r7.s64 = ctx.r11.s64 + -4;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
loc_8241B720:
	// lwzu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// rlwinm r8,r11,16,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// addi r5,r5,128
	ctx.r5.s64 = ctx.r5.s64 + 128;
	// rlwinm r11,r11,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// rlwinm r5,r5,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// extsb r31,r8
	r31.s64 = ctx.r8.s8;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cntlzw r4,r4
	ctx.r4.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r4,r4,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// addi r11,r31,128
	ctx.r11.s64 = r31.s64 + 128;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r31,r11,27,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// add r11,r31,r8
	ctx.r11.u64 = r31.u64 + ctx.r8.u64;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,8(r6)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
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
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x8241b720
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241B720;
loc_8241B7FC:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241b818
	if (ctx.cr6.eq) goto loc_8241B818;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x8241B818;
	sub_82413D40(ctx, base);
loc_8241B818:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241b834
	if (ctx.cr6.eq) goto loc_8241B834;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82414110
	ctx.lr = 0x8241B834;
	sub_82414110(ctx, base);
loc_8241B834:
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

DEFINE_REX_FUNC(sub_82420010) {
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
	ctx.lr = 0x82420018;
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
	// bne cr6,0x82420058
	if (!ctx.cr6.eq) goto loc_82420058;
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
	// li r7,2155
	ctx.r7.s64 = 2155;
	// bl 0x8240e308
	ctx.lr = 0x82420058;
	sub_8240E308(ctx, base);
loc_82420058:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e880
	ctx.lr = 0x82420068;
	sub_8240E880(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x824200d0
	if (!ctx.cr6.eq) goto loc_824200D0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8242008c
	if (ctx.cr6.eq) goto loc_8242008C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8240e930
	ctx.lr = 0x8242008C;
	sub_8240E930(ctx, base);
loc_8242008C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824200c8
	if (ctx.cr6.eq) goto loc_824200C8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824200c8
	if (ctx.cr6.eq) goto loc_824200C8;
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
	// li r6,48
	ctx.r6.s64 = 48;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,192(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// bctrl 
	ctx.lr = 0x824200C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824200C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8242012c
	goto loc_8242012C;
loc_824200D0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824200ec
	if (ctx.cr6.eq) goto loc_824200EC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8240e930
	ctx.lr = 0x824200EC;
	sub_8240E930(ctx, base);
loc_824200EC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82420128
	if (ctx.cr6.eq) goto loc_82420128;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82420128
	if (ctx.cr6.eq) goto loc_82420128;
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
	// li r6,48
	ctx.r6.s64 = 48;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,192(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// bctrl 
	ctx.lr = 0x82420128;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82420128:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8242012C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_824240F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x824240F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r11,52(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// divw r10,r10,r9
	ctx.r10.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82424134
	if (!ctx.cr6.eq) goto loc_82424134;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// b 0x82424138
	goto loc_82424138;
loc_82424134:
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
loc_82424138:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lis r9,-32171
	ctx.r9.s64 = -2108358656;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r9,r9,13408
	ctx.r9.s64 = ctx.r9.s64 + 13408;
	// mulli r10,r10,52
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(52));
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r29,r11,16880
	r29.s64 = ctx.r11.s64 + 16880;
	// rlwinm. r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r28,r10,-17024
	r28.s64 = ctx.r10.s64 + -17024;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-7072
	ctx.r11.s64 = ctx.r11.s64 + -7072;
	// beq 0x82424238
	if (ctx.cr0.eq) goto loc_82424238;
	// lwz r11,240(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 240);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwimi r10,r11,26,0,5
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFC000000) | (ctx.r10.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82424190;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x824242d0
	if (ctx.cr6.lt) goto loc_824242D0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82422ed8
	ctx.lr = 0x824241AC;
	sub_82422ED8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,7(r30)
	REX_STORE_U8(r30.u32 + 7, ctx.r11.u8);
	// lbz r10,133(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 133);
	// lbz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824241dc
	if (!ctx.cr6.eq) goto loc_824241DC;
	// lbz r10,134(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 134);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824241dc
	if (!ctx.cr6.eq) goto loc_824241DC;
	// lbz r10,135(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 135);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824241f8
	if (ctx.cr6.eq) goto loc_824241F8;
loc_824241DC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-15928
	ctx.r5.s64 = ctx.r11.s64 + -15928;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,2621
	ctx.r7.s64 = 2621;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x824241F8;
	sub_8240E308(ctx, base);
loc_824241F8:
	// lbz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 132);
	// addic. r11,r11,-3
	ctx.xer.ca = ctx.r11.u32 > 2;
	ctx.r11.s64 = ctx.r11.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82424208
	if (!ctx.cr0.lt) goto loc_82424208;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82424208:
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r11,7(r30)
	REX_STORE_U8(r30.u32 + 7, ctx.r11.u8);
	// lbz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 132);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82424228
	if (!ctx.cr0.lt) goto loc_82424228;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82424228:
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r11,7(r30)
	REX_STORE_U8(r30.u32 + 7, ctx.r11.u8);
	// b 0x824242d0
	goto loc_824242D0;
loc_82424238:
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwimi r10,r11,24,3,7
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F000000) | (ctx.r10.u64 & 0xFFFFFFFFE0FFFFFF);
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82424258;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x824242d0
	if (ctx.cr6.lt) goto loc_824242D0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82422ed8
	ctx.lr = 0x82424274;
	sub_82422ED8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82422ed8
	ctx.lr = 0x82424288;
	sub_82422ED8(ctx, base);
	// lwz r10,132(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 132);
	// rlwinm r11,r10,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r11,r10,24,16,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r11,r10,8,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r11,r10,24,0,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// addis r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 16777216;
	// addi r9,r11,-256
	ctx.r9.s64 = ctx.r11.s64 + -256;
	// rlwinm r10,r10,14,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC0;
	// rlwinm r9,r9,26,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xC;
	// addis r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -131072;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r9,r8,20,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x30;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r11,5(r30)
	REX_STORE_U8(r30.u32 + 5, ctx.r11.u8);
	// lhz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 4);
	// stb r11,6(r30)
	REX_STORE_U8(r30.u32 + 6, ctx.r11.u8);
loc_824242D0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423450
	ctx.lr = 0x824242DC;
	sub_82423450(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r11,5,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82424310
	if (ctx.cr0.eq) goto loc_82424310;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82424310
	if (ctx.cr6.eq) goto loc_82424310;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-16108
	ctx.r5.s64 = ctx.r11.s64 + -16108;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,2648
	ctx.r7.s64 = 2648;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x82424310;
	sub_8240E308(ctx, base);
loc_82424310:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwimi r10,r11,27,3,4
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x18000000) | (ctx.r10.u64 & 0xFFFFFFFFE7FFFFFF);
	// ori r11,r9,32768
	ctx.r11.u64 = ctx.r9.u64 | 32768;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8242DA18) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8242DA20;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r30,r3,44
	r30.s64 = ctx.r3.s64 + 44;
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
	ctx.lr = 0x8242DA44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242d328
	ctx.lr = 0x8242DA4C;
	sub_8242D328(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8242da60
	if (ctx.cr0.lt) goto loc_8242DA60;
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_8242DA60:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242DA74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82443000
	ctx.lr = 0x8242DA7C;
	sub_82443000(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8242FF40) {
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
	ctx.lr = 0x8242FF50;
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
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
	// lfs f20,84(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 84);
	f20.f64 = double(temp.f32);
	// lwz r7,32(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f19,88(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 88);
	f19.f64 = double(temp.f32);
	// lfs f0,92(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,16(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,20(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,24(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,28(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,32(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,36(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,40(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 40);
	f31.f64 = double(temp.f32);
	// lfs f30,44(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 44);
	f30.f64 = double(temp.f32);
	// lfs f29,48(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 48);
	f29.f64 = double(temp.f32);
	// lfs f28,52(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 52);
	f28.f64 = double(temp.f32);
	// lfs f27,56(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 56);
	f27.f64 = double(temp.f32);
	// lfs f26,60(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 60);
	f26.f64 = double(temp.f32);
	// lfs f25,64(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 64);
	f25.f64 = double(temp.f32);
	// lfs f24,68(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 68);
	f24.f64 = double(temp.f32);
	// lfs f23,72(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 72);
	f23.f64 = double(temp.f32);
	// lfs f22,76(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 76);
	f22.f64 = double(temp.f32);
	// lfs f21,80(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 80);
	f21.f64 = double(temp.f32);
	// stfs f20,-172(r1)
	temp.f32 = float(f20.f64);
	REX_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// stfs f19,-168(r1)
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// stfs f0,-164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -164, temp.u32);
	// bne cr6,0x82430170
	if (!ctx.cr6.eq) goto loc_82430170;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824304f0
	if (ctx.cr6.eq) goto loc_824304F0;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// li r8,48
	ctx.r8.s64 = 48;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,216
	ctx.r9.s64 = 216;
loc_8242FFFC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfsu f13,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfsu f11,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// dcbt r11,r8
	// dcbt r10,r9
	// fmuls f18,f12,f8
	f18.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f16,f12,f4
	f16.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// lfs f17,-164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -164);
	f17.f64 = double(temp.f32);
	// fmuls f15,f12,f31
	f15.f64 = double(float(ctx.f12.f64 * f31.f64));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// fmadds f18,f11,f7,f18
	f18.f64 = double(float(std::fma(ctx.f11.f64, ctx.f7.f64, f18.f64)));
	// fmadds f16,f11,f3,f16
	f16.f64 = double(float(std::fma(ctx.f11.f64, ctx.f3.f64, f16.f64)));
	// fmadds f15,f11,f30,f15
	f15.f64 = double(float(std::fma(ctx.f11.f64, f30.f64, f15.f64)));
	// beq cr6,0x824300e8
	if (ctx.cr6.eq) goto loc_824300E8;
	// stfd f8,-472(r1)
	REX_STORE_U64(ctx.r1.u32 + -472, ctx.f8.u64);
	// fmuls f8,f12,f27
	ctx.f8.f64 = double(float(ctx.f12.f64 * f27.f64));
	// stfd f4,-480(r1)
	REX_STORE_U64(ctx.r1.u32 + -480, ctx.f4.u64);
	// fmuls f4,f12,f23
	ctx.f4.f64 = double(float(ctx.f12.f64 * f23.f64));
	// fmuls f12,f12,f19
	ctx.f12.f64 = double(float(ctx.f12.f64 * f19.f64));
	// lfs f20,-172(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -172);
	f20.f64 = double(temp.f32);
	// lfs f14,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	f14.f64 = double(temp.f32);
	// lfs f19,-168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -168);
	f19.f64 = double(temp.f32);
	// fmadds f8,f11,f26,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, f26.f64, ctx.f8.f64)));
	// fmadds f4,f11,f22,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f11.f64, f22.f64, ctx.f4.f64)));
	// fmadds f11,f11,f17,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, f17.f64, ctx.f12.f64)));
	// fmadds f12,f13,f9,f18
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, f18.f64)));
	// fmadds f18,f13,f5,f16
	f18.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, f16.f64)));
	// fmadds f17,f13,f1,f15
	f17.f64 = double(float(std::fma(ctx.f13.f64, ctx.f1.f64, f15.f64)));
	// fmadds f16,f13,f28,f8
	f16.f64 = double(float(std::fma(ctx.f13.f64, f28.f64, ctx.f8.f64)));
	// lfd f8,-472(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -472);
	// fmadds f15,f13,f24,f4
	f15.f64 = double(float(std::fma(ctx.f13.f64, f24.f64, ctx.f4.f64)));
	// lfd f4,-480(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -480);
	// fmadds f11,f13,f20,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, f20.f64, ctx.f11.f64)));
	// fmadds f13,f0,f10,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f12.f64)));
	// fmadds f12,f0,f6,f18
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, ctx.f6.f64, f18.f64)));
	// fmadds f18,f0,f2,f17
	f18.f64 = double(float(std::fma(ctx.f0.f64, ctx.f2.f64, f17.f64)));
	// fmadds f17,f0,f29,f16
	f17.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, f16.f64)));
	// fmadds f16,f0,f25,f15
	f16.f64 = double(float(std::fma(ctx.f0.f64, f25.f64, f15.f64)));
	// fmadds f11,f0,f21,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, f21.f64, ctx.f11.f64)));
	// fadds f0,f13,f14
	ctx.f0.f64 = double(float(ctx.f13.f64 + f14.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f0,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f13,f18,f0
	ctx.f13.f64 = double(float(f18.f64 + ctx.f0.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f12,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f0,f17,f12
	ctx.f0.f64 = double(float(f17.f64 + ctx.f12.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f12,f16,f13
	ctx.f12.f64 = double(float(f16.f64 + ctx.f13.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f0,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x82430154
	goto loc_82430154;
loc_824300E8:
	// fmuls f14,f12,f27
	ctx.fpscr.disableFlushMode();
	f14.f64 = double(float(ctx.f12.f64 * f27.f64));
	// stfd f8,-480(r1)
	REX_STORE_U64(ctx.r1.u32 + -480, ctx.f8.u64);
	// fmuls f8,f12,f23
	ctx.f8.f64 = double(float(ctx.f12.f64 * f23.f64));
	// fmuls f12,f12,f19
	ctx.f12.f64 = double(float(ctx.f12.f64 * f19.f64));
	// lfs f19,-168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -168);
	f19.f64 = double(temp.f32);
	// fmadds f14,f11,f26,f14
	f14.f64 = double(float(std::fma(ctx.f11.f64, f26.f64, f14.f64)));
	// fmadds f8,f11,f22,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, f22.f64, ctx.f8.f64)));
	// fmadds f11,f11,f17,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, f17.f64, ctx.f12.f64)));
	// fmadds f12,f13,f9,f18
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, f18.f64)));
	// fmadds f18,f13,f5,f16
	f18.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, f16.f64)));
	// fmadds f17,f13,f1,f15
	f17.f64 = double(float(std::fma(ctx.f13.f64, ctx.f1.f64, f15.f64)));
	// fmadds f16,f13,f28,f14
	f16.f64 = double(float(std::fma(ctx.f13.f64, f28.f64, f14.f64)));
	// fmadds f15,f13,f24,f8
	f15.f64 = double(float(std::fma(ctx.f13.f64, f24.f64, ctx.f8.f64)));
	// lfd f8,-480(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -480);
	// fmadds f11,f13,f20,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, f20.f64, ctx.f11.f64)));
	// fmadds f13,f0,f10,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f12.f64)));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmadds f12,f0,f6,f18
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, ctx.f6.f64, f18.f64)));
	// stfsu f12,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fmadds f13,f0,f2,f17
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f2.f64, f17.f64)));
	// stfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fmadds f12,f0,f29,f16
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, f16.f64)));
	// stfsu f12,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fmadds f13,f0,f25,f15
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, f25.f64, f15.f64)));
	// stfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fmadds f12,f0,f21,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, f21.f64, ctx.f11.f64)));
	// stfsu f12,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
loc_82430154:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8242fffc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242FFFC;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x822d4f4c
	ctx.lr = 0x82430164;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82430170:
	// stfd f10,-480(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -480, ctx.f10.u64);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stfd f9,-472(r1)
	REX_STORE_U64(ctx.r1.u32 + -472, ctx.f9.u64);
	// stfd f8,-320(r1)
	REX_STORE_U64(ctx.r1.u32 + -320, ctx.f8.u64);
	// stfd f7,-296(r1)
	REX_STORE_U64(ctx.r1.u32 + -296, ctx.f7.u64);
	// stfd f6,-280(r1)
	REX_STORE_U64(ctx.r1.u32 + -280, ctx.f6.u64);
	// stfd f5,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, ctx.f5.u64);
	// stfd f4,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f4.u64);
	// stfd f3,-272(r1)
	REX_STORE_U64(ctx.r1.u32 + -272, ctx.f3.u64);
	// stfd f2,-360(r1)
	REX_STORE_U64(ctx.r1.u32 + -360, ctx.f2.u64);
	// stfd f1,-288(r1)
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.f1.u64);
	// stfd f31,-352(r1)
	REX_STORE_U64(ctx.r1.u32 + -352, f31.u64);
	// stfd f30,-344(r1)
	REX_STORE_U64(ctx.r1.u32 + -344, f30.u64);
	// stfd f29,-328(r1)
	REX_STORE_U64(ctx.r1.u32 + -328, f29.u64);
	// stfd f28,-312(r1)
	REX_STORE_U64(ctx.r1.u32 + -312, f28.u64);
	// stfd f27,-368(r1)
	REX_STORE_U64(ctx.r1.u32 + -368, f27.u64);
	// lfs f10,36(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,40(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,44(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,48(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,52(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,56(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,60(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,64(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 64);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,68(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 68);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,72(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,76(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 76);
	f31.f64 = double(temp.f32);
	// lfs f30,80(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 80);
	f30.f64 = double(temp.f32);
	// lfs f29,84(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 84);
	f29.f64 = double(temp.f32);
	// lfs f28,88(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 88);
	f28.f64 = double(temp.f32);
	// lfs f27,92(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 92);
	f27.f64 = double(temp.f32);
	// lfs f0,0(r9)
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
	// lfs f18,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	f18.f64 = double(temp.f32);
	// lfs f17,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	f17.f64 = double(temp.f32);
	// lfs f16,24(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 24);
	f16.f64 = double(temp.f32);
	// lfs f15,28(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28);
	f15.f64 = double(temp.f32);
	// lfs f14,32(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32);
	f14.f64 = double(temp.f32);
	// stfs f10,-428(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -428, temp.u32);
	// stfs f9,-424(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -424, temp.u32);
	// stfs f8,-420(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -420, temp.u32);
	// stfs f7,-416(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -416, temp.u32);
	// stfs f6,-412(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -412, temp.u32);
	// stfs f5,-408(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -408, temp.u32);
	// stfs f4,-404(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + -404, temp.u32);
	// stfs f3,-400(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + -400, temp.u32);
	// stfs f2,-396(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + -396, temp.u32);
	// stfs f1,-392(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -392, temp.u32);
	// stfs f31,-388(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + -388, temp.u32);
	// stfs f30,-384(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + -384, temp.u32);
	// stfs f29,-380(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + -380, temp.u32);
	// stfs f28,-376(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + -376, temp.u32);
	// stfs f27,-372(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + -372, temp.u32);
	// lfd f10,-480(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -480);
	// lfd f9,-472(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -472);
	// lfd f8,-320(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -320);
	// lfd f7,-296(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -296);
	// lfd f6,-280(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -280);
	// lfd f5,-304(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// lfd f4,-336(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// lfd f3,-272(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -272);
	// lfd f2,-360(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + -360);
	// lfd f1,-288(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -288);
	// lfd f31,-352(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -352);
	// lfd f30,-344(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -344);
	// lfd f29,-328(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -328);
	// lfd f28,-312(r1)
	f28.u64 = REX_LOAD_U64(ctx.r1.u32 + -312);
	// lfd f27,-368(r1)
	f27.u64 = REX_LOAD_U64(ctx.r1.u32 + -368);
	// stfs f0,-464(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -464, temp.u32);
	// stfs f13,-460(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -460, temp.u32);
	// stfs f12,-456(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -456, temp.u32);
	// stfs f11,-452(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -452, temp.u32);
	// stfs f18,-448(r1)
	temp.f32 = float(f18.f64);
	REX_STORE_U32(ctx.r1.u32 + -448, temp.u32);
	// stfs f17,-444(r1)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r1.u32 + -444, temp.u32);
	// stfs f16,-440(r1)
	temp.f32 = float(f16.f64);
	REX_STORE_U32(ctx.r1.u32 + -440, temp.u32);
	// stfs f15,-436(r1)
	temp.f32 = float(f15.f64);
	REX_STORE_U32(ctx.r1.u32 + -436, temp.u32);
	// stfs f14,-432(r1)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r1.u32 + -432, temp.u32);
	// beq cr6,0x824304f0
	if (ctx.cr6.eq) goto loc_824304F0;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// li r8,48
	ctx.r8.s64 = 48;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,216
	ctx.r9.s64 = 216;
loc_824302C8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfsu f13,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfsu f11,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// dcbt r11,r8
	// dcbt r10,r9
	// fmuls f18,f12,f8
	f18.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// fmuls f19,f12,f19
	f19.f64 = double(float(ctx.f12.f64 * f19.f64));
	// fmadds f18,f11,f7,f18
	f18.f64 = double(float(std::fma(ctx.f11.f64, ctx.f7.f64, f18.f64)));
	// beq cr6,0x824303a8
	if (ctx.cr6.eq) goto loc_824303A8;
	// fmuls f16,f12,f4
	f16.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// stfd f8,-368(r1)
	REX_STORE_U64(ctx.r1.u32 + -368, ctx.f8.u64);
	// fmuls f15,f12,f31
	f15.f64 = double(float(ctx.f12.f64 * f31.f64));
	// lfs f20,-172(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -172);
	f20.f64 = double(temp.f32);
	// fmuls f14,f12,f27
	f14.f64 = double(float(ctx.f12.f64 * f27.f64));
	// lfs f17,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	f17.f64 = double(temp.f32);
	// fmuls f8,f12,f23
	ctx.f8.f64 = double(float(ctx.f12.f64 * f23.f64));
	// lfs f12,-164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -164);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f16,f11,f3,f16
	f16.f64 = double(float(std::fma(ctx.f11.f64, ctx.f3.f64, f16.f64)));
	// fmadds f15,f11,f30,f15
	f15.f64 = double(float(std::fma(ctx.f11.f64, f30.f64, f15.f64)));
	// fmadds f14,f11,f26,f14
	f14.f64 = double(float(std::fma(ctx.f11.f64, f26.f64, f14.f64)));
	// fmadds f8,f11,f22,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, f22.f64, ctx.f8.f64)));
	// fmadds f11,f11,f12,f19
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, f19.f64)));
	// fmadds f19,f13,f9,f18
	f19.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, f18.f64)));
	// fmadds f18,f13,f5,f16
	f18.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, f16.f64)));
	// fmadds f16,f13,f1,f15
	f16.f64 = double(float(std::fma(ctx.f13.f64, ctx.f1.f64, f15.f64)));
	// fmadds f15,f13,f28,f14
	f15.f64 = double(float(std::fma(ctx.f13.f64, f28.f64, f14.f64)));
	// fmadds f14,f13,f24,f8
	f14.f64 = double(float(std::fma(ctx.f13.f64, f24.f64, ctx.f8.f64)));
	// lfd f8,-368(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -368);
	// fmadds f13,f13,f20,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f20.f64, ctx.f11.f64)));
	// fmadds f11,f0,f10,f19
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, f19.f64)));
	// fmadds f19,f0,f6,f18
	f19.f64 = double(float(std::fma(ctx.f0.f64, ctx.f6.f64, f18.f64)));
	// fmadds f18,f0,f2,f16
	f18.f64 = double(float(std::fma(ctx.f0.f64, ctx.f2.f64, f16.f64)));
	// fmadds f16,f0,f29,f15
	f16.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, f15.f64)));
	// fmadds f15,f0,f25,f14
	f15.f64 = double(float(std::fma(ctx.f0.f64, f25.f64, f14.f64)));
	// fmadds f0,f0,f21,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f21.f64, ctx.f13.f64)));
	// fadds f13,f11,f17
	ctx.f13.f64 = double(float(ctx.f11.f64 + f17.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f13,f19,f11
	ctx.f13.f64 = double(float(f19.f64 + ctx.f11.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f13,f18,f11
	ctx.f13.f64 = double(float(f18.f64 + ctx.f11.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f13,f16,f11
	ctx.f13.f64 = double(float(f16.f64 + ctx.f11.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f13,f15,f11
	ctx.f13.f64 = double(float(f15.f64 + ctx.f11.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x82430418
	goto loc_82430418;
loc_824303A8:
	// fmuls f17,f12,f4
	ctx.fpscr.disableFlushMode();
	f17.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fmuls f16,f12,f31
	f16.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fmuls f15,f12,f27
	f15.f64 = double(float(ctx.f12.f64 * f27.f64));
	// fmuls f14,f12,f23
	f14.f64 = double(float(ctx.f12.f64 * f23.f64));
	// lfs f12,-164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -164);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f17,f11,f3,f17
	f17.f64 = double(float(std::fma(ctx.f11.f64, ctx.f3.f64, f17.f64)));
	// fmadds f16,f11,f30,f16
	f16.f64 = double(float(std::fma(ctx.f11.f64, f30.f64, f16.f64)));
	// fmadds f15,f11,f26,f15
	f15.f64 = double(float(std::fma(ctx.f11.f64, f26.f64, f15.f64)));
	// fmadds f14,f11,f22,f14
	f14.f64 = double(float(std::fma(ctx.f11.f64, f22.f64, f14.f64)));
	// fmadds f11,f11,f12,f19
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, f19.f64)));
	// fmadds f19,f13,f9,f18
	f19.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, f18.f64)));
	// fmadds f18,f13,f5,f17
	f18.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, f17.f64)));
	// fmadds f17,f13,f1,f16
	f17.f64 = double(float(std::fma(ctx.f13.f64, ctx.f1.f64, f16.f64)));
	// fmadds f16,f13,f28,f15
	f16.f64 = double(float(std::fma(ctx.f13.f64, f28.f64, f15.f64)));
	// fmadds f15,f13,f24,f14
	f15.f64 = double(float(std::fma(ctx.f13.f64, f24.f64, f14.f64)));
	// fmadds f13,f13,f20,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f20.f64, ctx.f11.f64)));
	// fmadds f11,f0,f10,f19
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, f19.f64)));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmadds f11,f0,f6,f18
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f6.f64, f18.f64)));
	// stfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fmadds f11,f0,f2,f17
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f2.f64, f17.f64)));
	// stfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fmadds f11,f0,f29,f16
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, f16.f64)));
	// stfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fmadds f11,f0,f25,f15
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, f25.f64, f15.f64)));
	// stfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fmadds f0,f0,f21,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f21.f64, ctx.f13.f64)));
	// stfsu f0,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
loc_82430418:
	// lfs f13,-380(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -380);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fadds f20,f13,f20
	f20.f64 = double(float(ctx.f13.f64 + f20.f64));
	// lfs f0,-168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,-376(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -376);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-372(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -372);
	ctx.f13.f64 = double(temp.f32);
	// fadds f19,f11,f0
	f19.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f11,-464(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -464);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-460(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -460);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f12,-456(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -456);
	ctx.f12.f64 = double(temp.f32);
	// fadds f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// fadds f8,f12,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// lfs f11,-452(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -452);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-448(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -448);
	ctx.f13.f64 = double(temp.f32);
	// fadds f7,f11,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// lfs f12,-444(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -444);
	ctx.f12.f64 = double(temp.f32);
	// fadds f6,f13,f6
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// fadds f5,f12,f5
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// lfs f11,-440(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -440);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-436(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -436);
	ctx.f13.f64 = double(temp.f32);
	// fadds f4,f11,f4
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f4.f64));
	// lfs f12,-432(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -432);
	ctx.f12.f64 = double(temp.f32);
	// fadds f3,f13,f3
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// fadds f2,f12,f2
	ctx.f2.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// lfs f11,-428(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -428);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-424(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -424);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f11,f1
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// lfs f12,-420(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -420);
	ctx.f12.f64 = double(temp.f32);
	// fadds f31,f13,f31
	f31.f64 = double(float(ctx.f13.f64 + f31.f64));
	// fadds f30,f12,f30
	f30.f64 = double(float(ctx.f12.f64 + f30.f64));
	// lfs f11,-416(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -416);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-412(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -412);
	ctx.f13.f64 = double(temp.f32);
	// fadds f29,f11,f29
	f29.f64 = double(float(ctx.f11.f64 + f29.f64));
	// lfs f12,-408(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -408);
	ctx.f12.f64 = double(temp.f32);
	// fadds f28,f13,f28
	f28.f64 = double(float(ctx.f13.f64 + f28.f64));
	// fadds f27,f12,f27
	f27.f64 = double(float(ctx.f12.f64 + f27.f64));
	// lfs f11,-404(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -404);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-400(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -400);
	ctx.f13.f64 = double(temp.f32);
	// fadds f26,f11,f26
	f26.f64 = double(float(ctx.f11.f64 + f26.f64));
	// lfs f12,-396(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -396);
	ctx.f12.f64 = double(temp.f32);
	// fadds f25,f13,f25
	f25.f64 = double(float(ctx.f13.f64 + f25.f64));
	// fadds f24,f12,f24
	f24.f64 = double(float(ctx.f12.f64 + f24.f64));
	// lfs f11,-392(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -392);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-388(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -388);
	ctx.f13.f64 = double(temp.f32);
	// fadds f23,f11,f23
	f23.f64 = double(float(ctx.f11.f64 + f23.f64));
	// lfs f12,-384(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -384);
	ctx.f12.f64 = double(temp.f32);
	// fadds f22,f13,f22
	f22.f64 = double(float(ctx.f13.f64 + f22.f64));
	// stfs f20,-172(r1)
	temp.f32 = float(f20.f64);
	REX_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// fadds f21,f12,f21
	f21.f64 = double(float(ctx.f12.f64 + f21.f64));
	// stfs f19,-168(r1)
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// stfs f0,-164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -164, temp.u32);
	// bdnz 0x824302c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824302C8;
loc_824304F0:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x822d4f4c
	ctx.lr = 0x824304F8;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82454F18) {
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
	// bl 0x82454260
	ctx.lr = 0x82454F38;
	sub_82454260(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82454f4c
	if (!ctx.cr6.eq) goto loc_82454F4C;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82454f78
	goto loc_82454F78;
loc_82454F4C:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,26632(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26632);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctidz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82454F78:
	// addis r11,r31,3
	ctx.r11.s64 = r31.s64 + 196608;
	// addi r11,r11,23248
	ctx.r11.s64 = ctx.r11.s64 + 23248;
	// lwz r9,1044(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1044);
	// lwz r8,1040(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 1040);
	// stw r10,1048(r11)
	REX_STORE_U32(ctx.r11.u32 + 1048, ctx.r10.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82454fa4
	if (!ctx.cr6.eq) goto loc_82454FA4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,1040(r11)
	REX_STORE_U32(ctx.r11.u32 + 1040, ctx.r10.u32);
	// lfs f0,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1056(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 1056, temp.u32);
loc_82454FA4:
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

DEFINE_REX_FUNC(sub_82456C28) {
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
	// bl 0x822d4e50
	ctx.lr = 0x82456C30;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f30
	ctx.lr = 0x82456C38;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// stw r5,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r5.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x82453d80
	ctx.lr = 0x82456C64;
	sub_82453D80(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = r31.s64 + 65536;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x824537a8
	ctx.lr = 0x82456C78;
	sub_824537A8(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// ori r9,r11,23232
	ctx.r9.u64 = ctx.r11.u64 | 23232;
	// lfs f10,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f10.f64 = double(temp.f32);
	// lwzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + ctx.r9.u32);
	// fcmpu cr6,f31,f10
	ctx.cr6.compare(f31.f64, ctx.f10.f64);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f12,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// ble cr6,0x82456ca0
	if (!ctx.cr6.gt) goto loc_82456CA0;
	// fmr f12,f10
	ctx.f12.f64 = ctx.f10.f64;
loc_82456CA0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82457ab0
	if (ctx.cr6.eq) goto loc_82457AB0;
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// addis r10,r31,1
	ctx.r10.s64 = r31.s64 + 65536;
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// addis r9,r31,1
	ctx.r9.s64 = r31.s64 + 65536;
	// addi r11,r11,12052
	ctx.r11.s64 = ctx.r11.s64 + 12052;
	// addi r10,r10,14132
	ctx.r10.s64 = ctx.r10.s64 + 14132;
	// addi r9,r9,80
	ctx.r9.s64 = ctx.r9.s64 + 80;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addis r8,r31,1
	ctx.r8.s64 = r31.s64 + 65536;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addis r3,r31,3
	ctx.r3.s64 = r31.s64 + 196608;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r8,r8,84
	ctx.r8.s64 = ctx.r8.s64 + 84;
	// addi r3,r3,23236
	ctx.r3.s64 = ctx.r3.s64 + 23236;
	// addis r7,r31,1
	ctx.r7.s64 = r31.s64 + 65536;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addis r6,r31,1
	ctx.r6.s64 = r31.s64 + 65536;
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addis r11,r31,3
	ctx.r11.s64 = r31.s64 + 196608;
	// addis r10,r31,3
	ctx.r10.s64 = r31.s64 + 196608;
	// addis r9,r31,3
	ctx.r9.s64 = r31.s64 + 196608;
	// subf r8,r28,r29
	ctx.r8.u64 = r29.u64 - r28.u64;
	// addi r7,r7,18260
	ctx.r7.s64 = ctx.r7.s64 + 18260;
	// addi r6,r6,18264
	ctx.r6.s64 = ctx.r6.s64 + 18264;
	// stw r8,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// addi r11,r11,23240
	ctx.r11.s64 = ctx.r11.s64 + 23240;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r10,r10,21140
	ctx.r10.s64 = ctx.r10.s64 + 21140;
	// stw r6,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// addi r9,r9,23220
	ctx.r9.s64 = ctx.r9.s64 + 23220;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// stw r10,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// addis r23,r31,1
	r23.s64 = r31.s64 + 65536;
	// stw r9,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// addis r22,r31,1
	r22.s64 = r31.s64 + 65536;
	// addis r21,r31,1
	r21.s64 = r31.s64 + 65536;
	// addis r20,r31,1
	r20.s64 = r31.s64 + 65536;
	// addis r19,r31,1
	r19.s64 = r31.s64 + 65536;
	// lfs f6,1992(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 1992);
	ctx.f6.f64 = double(temp.f32);
	// addis r18,r31,1
	r18.s64 = r31.s64 + 65536;
	// addis r17,r31,1
	r17.s64 = r31.s64 + 65536;
	// addis r5,r31,3
	ctx.r5.s64 = r31.s64 + 196608;
	// addis r4,r31,3
	ctx.r4.s64 = r31.s64 + 196608;
	// addi r23,r23,2184
	r23.s64 = r23.s64 + 2184;
	// addi r22,r22,2188
	r22.s64 = r22.s64 + 2188;
	// addi r21,r21,2192
	r21.s64 = r21.s64 + 2192;
	// stw r23,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r23.u32);
	// addi r20,r20,2740
	r20.s64 = r20.s64 + 2740;
	// stw r22,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r22.u32);
	// addi r19,r19,10984
	r19.s64 = r19.s64 + 10984;
	// stw r21,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r21.u32);
	// addi r18,r18,10988
	r18.s64 = r18.s64 + 10988;
	// stw r20,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r20.u32);
	// addi r17,r17,10992
	r17.s64 = r17.s64 + 10992;
	// stw r19,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r19.u32);
	// addi r5,r5,19072
	ctx.r5.s64 = ctx.r5.s64 + 19072;
	// stw r18,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r18.u32);
	// addi r4,r4,21152
	ctx.r4.s64 = ctx.r4.s64 + 21152;
	// stw r17,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r17.u32);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// stw r5,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// addis r10,r31,1
	ctx.r10.s64 = r31.s64 + 65536;
	// stw r4,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r4.u32);
	// addis r9,r31,1
	ctx.r9.s64 = r31.s64 + 65536;
	// addis r8,r31,1
	ctx.r8.s64 = r31.s64 + 65536;
	// addis r7,r31,1
	ctx.r7.s64 = r31.s64 + 65536;
	// addis r6,r31,1
	ctx.r6.s64 = r31.s64 + 65536;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// addi r10,r10,2752
	ctx.r10.s64 = ctx.r10.s64 + 2752;
	// addi r9,r9,14144
	ctx.r9.s64 = ctx.r9.s64 + 14144;
	// addi r8,r8,2208
	ctx.r8.s64 = ctx.r8.s64 + 2208;
	// addi r7,r7,11008
	ctx.r7.s64 = ctx.r7.s64 + 11008;
	// addi r6,r6,12064
	ctx.r6.s64 = ctx.r6.s64 + 12064;
	// lis r30,-32256
	r30.s64 = -2113929216;
	// lis r29,-32256
	r29.s64 = -2113929216;
	// lis r28,3
	r28.s64 = 196608;
	// lis r26,1
	r26.s64 = 65536;
	// lis r25,1
	r25.s64 = 65536;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// lis r16,2
	r16.s64 = 131072;
	// lfs f7,2008(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 2008);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,2332(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 2332);
	ctx.f8.f64 = double(temp.f32);
	// ori r27,r28,19032
	r27.u64 = r28.u64 | 19032;
	// ori r30,r3,59648
	r30.u64 = ctx.r3.u64 | 59648;
	// ori r28,r26,18272
	r28.u64 = r26.u64 | 18272;
	// ori r29,r25,38960
	r29.u64 = r25.u64 | 38960;
	// ori r3,r16,39360
	ctx.r3.u64 = r16.u64 | 39360;
loc_82456E0C:
	// lwz r26,2048(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 2048);
	// lfs f9,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r23.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lwz r25,2064(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 2064);
	// lfs f5,0(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lwz r16,2068(r11)
	r16.u64 = REX_LOAD_U32(ctx.r11.u32 + 2068);
	// rlwinm r15,r26,2,0,29
	r15.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r25,r25,r26
	r25.u64 = r26.u64 - r25.u64;
	// lwz r14,2072(r11)
	r14.u64 = REX_LOAD_U32(ctx.r11.u32 + 2072);
	// subf r16,r16,r26
	r16.u64 = r26.u64 - r16.u64;
	// lfs f0,2076(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2076);
	ctx.f0.f64 = double(temp.f32);
	// subf r26,r14,r26
	r26.u64 = r26.u64 - r14.u64;
	// fadds f2,f5,f9
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// rlwinm r25,r25,2,21,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0x7FC;
	// lfs f13,2080(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2080);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r16,r16,2,21,29
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0x7FC;
	// lfs f11,2084(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2084);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r26,r26,2,21,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0x7FC;
	// lfs f4,0(r21)
	temp.u32 = REX_LOAD_U32(r21.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f1,r25,r11
	temp.u32 = REX_LOAD_U32(r25.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// lfsx f9,r16,r11
	temp.u32 = REX_LOAD_U32(r16.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f5,f0,f1
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfsx f1,r26,r11
	temp.u32 = REX_LOAD_U32(r26.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f13,f11,f1
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// stfs f5,2088(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 2088, temp.u32);
	// stfs f0,2092(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 2092, temp.u32);
	// stfs f13,2096(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 2096, temp.u32);
	// stfsx f3,r15,r11
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r15.u32 + ctx.r11.u32, temp.u32);
	// lwz r26,2048(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 2048);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// clrlwi r26,r26,23
	r26.u64 = r26.u32 & 0x1FF;
	// stw r26,2048(r11)
	REX_STORE_U32(ctx.r11.u32 + 2048, r26.u32);
	// lfs f11,524(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 524);
	ctx.f11.f64 = double(temp.f32);
	// lwz r26,512(r8)
	r26.u64 = REX_LOAD_U32(ctx.r8.u32 + 512);
	// lfs f9,0(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lwz r25,516(r8)
	r25.u64 = REX_LOAD_U32(ctx.r8.u32 + 516);
	// rlwinm r25,r25,2,0,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r26,2,0,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f5,r25,r8
	temp.u32 = REX_LOAD_U32(r25.u32 + ctx.r8.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,528(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 528);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f11,f5,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f11.f64, ctx.f5.f64, ctx.f2.f64)));
	// stfsx f2,r26,r8
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r26.u32 + ctx.r8.u32, temp.u32);
	// lwz r25,512(r8)
	r25.u64 = REX_LOAD_U32(ctx.r8.u32 + 512);
	// lwz r26,516(r8)
	r26.u64 = REX_LOAD_U32(ctx.r8.u32 + 516);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// fmadds f1,f3,f2,f5
	ctx.f1.f64 = double(float(std::fma(ctx.f3.f64, ctx.f2.f64, ctx.f5.f64)));
	// clrlwi r26,r26,25
	r26.u64 = r26.u32 & 0x7F;
	// stfs f1,532(r8)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r8.u32 + 532, temp.u32);
	// clrlwi r25,r25,25
	r25.u64 = r25.u32 & 0x7F;
	// stw r26,516(r8)
	REX_STORE_U32(ctx.r8.u32 + 516, r26.u32);
	// stw r25,512(r8)
	REX_STORE_U32(ctx.r8.u32 + 512, r25.u32);
	// lfs f5,0(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,0(r18)
	temp.u32 = REX_LOAD_U32(r18.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lwz r25,8192(r10)
	r25.u64 = REX_LOAD_U32(ctx.r10.u32 + 8192);
	// lwz r15,8208(r10)
	r15.u64 = REX_LOAD_U32(ctx.r10.u32 + 8208);
	// subf r15,r15,r25
	r15.u64 = r25.u64 - r15.u64;
	// lwz r16,8216(r10)
	r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 8216);
	// rlwinm r15,r15,2,19,29
	r15.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0x1FFC;
	// fadds f1,f3,f5
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// lfs f0,8220(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8220);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,8224(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8224);
	ctx.f11.f64 = double(temp.f32);
	// lwz r26,8212(r10)
	r26.u64 = REX_LOAD_U32(ctx.r10.u32 + 8212);
	// lfs f2,8228(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8228);
	ctx.f2.f64 = double(temp.f32);
	// subf r26,r26,r25
	r26.u64 = r25.u64 - r26.u64;
	// lfsx f3,r15,r10
	temp.u32 = REX_LOAD_U32(r15.u32 + ctx.r10.u32);
	ctx.f3.f64 = double(temp.f32);
	// subf r16,r16,r25
	r16.u64 = r25.u64 - r16.u64;
	// rlwinm r26,r26,2,19,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0x1FFC;
	// lfs f13,0(r17)
	temp.u32 = REX_LOAD_U32(r17.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r16,r16,2,19,29
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0x1FFC;
	// lfsx f5,r26,r10
	temp.u32 = REX_LOAD_U32(r26.u32 + ctx.r10.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmuls f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfsx f3,r16,r10
	temp.u32 = REX_LOAD_U32(r16.u32 + ctx.r10.u32);
	ctx.f3.f64 = double(temp.f32);
	// rlwinm r26,r25,2,0,29
	r26.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f5,f2,f3
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// lwz r25,84(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,8232(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8232, temp.u32);
	// stfs f11,8236(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 8236, temp.u32);
	// stfs f5,8240(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + 8240, temp.u32);
	// stfsx f9,r26,r10
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r26.u32 + ctx.r10.u32, temp.u32);
	// lwz r26,8192(r10)
	r26.u64 = REX_LOAD_U32(ctx.r10.u32 + 8192);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// std r10,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r10.u64);
	// clrlwi r26,r26,21
	r26.u64 = r26.u32 & 0x7FF;
	// lwz r16,88(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r15,92(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r26,8192(r10)
	REX_STORE_U32(ctx.r10.u32 + 8192, r26.u32);
	// lfs f3,1036(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1036);
	ctx.f3.f64 = double(temp.f32);
	// lwz r26,1024(r7)
	r26.u64 = REX_LOAD_U32(ctx.r7.u32 + 1024);
	// lfs f2,1040(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1040);
	ctx.f2.f64 = double(temp.f32);
	// lwz r10,1028(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 1028);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r7
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f3,f0,f3,f1
	ctx.f3.f64 = double(float(std::fma(ctx.f0.f64, ctx.f3.f64, ctx.f1.f64)));
	// rlwinm r26,r26,2,0,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f5,0(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f2,f2,f3,f0
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f3.f64, ctx.f0.f64)));
	// lwz r14,96(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// std r11,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r11.u64);
	// std r8,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.r8.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stfsx f3,r26,r7
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r26.u32 + ctx.r7.u32, temp.u32);
	// lwz r26,1028(r7)
	r26.u64 = REX_LOAD_U32(ctx.r7.u32 + 1028);
	// stfs f2,1044(r7)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r7.u32 + 1044, temp.u32);
	// addi r25,r26,1
	r25.s64 = r26.s64 + 1;
	// lwz r26,1024(r7)
	r26.u64 = REX_LOAD_U32(ctx.r7.u32 + 1024);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// clrlwi r26,r26,24
	r26.u64 = r26.u32 & 0xFF;
	// lwz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r25,r25,24
	r25.u64 = r25.u32 & 0xFF;
	// stw r26,1024(r7)
	REX_STORE_U32(ctx.r7.u32 + 1024, r26.u32);
	// stw r25,1028(r7)
	REX_STORE_U32(ctx.r7.u32 + 1028, r25.u32);
	// lfs f3,0(r16)
	temp.u32 = REX_LOAD_U32(r16.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lwz r25,2052(r6)
	r25.u64 = REX_LOAD_U32(ctx.r6.u32 + 2052);
	// lfs f2,2064(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2064);
	ctx.f2.f64 = double(temp.f32);
	// lwz r26,2048(r6)
	r26.u64 = REX_LOAD_U32(ctx.r6.u32 + 2048);
	// rlwinm r26,r26,2,0,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r25,2,0,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f1,2060(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2060);
	ctx.f1.f64 = double(temp.f32);
	// lfsx f0,r25,r6
	temp.u32 = REX_LOAD_U32(r25.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f1,f0,f5
	ctx.f11.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f5.f64)));
	// stfsx f11,r26,r6
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r26.u32 + ctx.r6.u32, temp.u32);
	// lwz r26,2052(r6)
	r26.u64 = REX_LOAD_U32(ctx.r6.u32 + 2052);
	// lwz r25,2048(r6)
	r25.u64 = REX_LOAD_U32(ctx.r6.u32 + 2048);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// fmadds f2,f11,f2,f0
	ctx.f2.f64 = double(float(std::fma(ctx.f11.f64, ctx.f2.f64, ctx.f0.f64)));
	// clrlwi r25,r25,23
	r25.u64 = r25.u32 & 0x1FF;
	// stfs f2,2068(r6)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r6.u32 + 2068, temp.u32);
	// clrlwi r26,r26,23
	r26.u64 = r26.u32 & 0x1FF;
	// stw r25,2048(r6)
	REX_STORE_U32(ctx.r6.u32 + 2048, r25.u32);
	// stw r26,2052(r6)
	REX_STORE_U32(ctx.r6.u32 + 2052, r26.u32);
	// lfs f1,4108(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4108);
	ctx.f1.f64 = double(temp.f32);
	// lwz r26,0(r15)
	r26.u64 = REX_LOAD_U32(r15.u32 + 0);
	// lfs f2,4112(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4112);
	ctx.f2.f64 = double(temp.f32);
	// lwz r15,0(r14)
	r15.u64 = REX_LOAD_U32(r14.u32 + 0);
	// lfs f0,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r25,4096(r9)
	r25.u64 = REX_LOAD_U32(ctx.r9.u32 + 4096);
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lwz r14,4100(r9)
	r14.u64 = REX_LOAD_U32(ctx.r9.u32 + 4100);
	// stw r15,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r15.u32);
	// stw r26,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r26.u32);
	// lfs f30,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	f30.f64 = double(temp.f32);
	// subf r26,r14,r25
	r26.u64 = r25.u64 - r14.u64;
	// lwz r16,4104(r9)
	r16.u64 = REX_LOAD_U32(ctx.r9.u32 + 4104);
	// subf r16,r16,r25
	r16.u64 = r25.u64 - r16.u64;
	// lfs f29,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	f29.f64 = double(temp.f32);
	// rlwinm r26,r26,2,20,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFC;
	// fmuls f9,f29,f9
	ctx.f9.f64 = double(float(f29.f64 * ctx.f9.f64));
	// rlwinm r16,r16,2,20,29
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFC;
	// fmuls f5,f30,f5
	ctx.f5.f64 = double(float(f30.f64 * ctx.f5.f64));
	// rlwinm r25,r25,2,0,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f29,r26,r9
	temp.u32 = REX_LOAD_U32(r26.u32 + ctx.r9.u32);
	f29.f64 = double(temp.f32);
	// fmuls f1,f29,f1
	ctx.f1.f64 = double(float(f29.f64 * ctx.f1.f64));
	// lfsx f29,r16,r9
	temp.u32 = REX_LOAD_U32(r16.u32 + ctx.r9.u32);
	f29.f64 = double(temp.f32);
	// fmuls f2,f29,f2
	ctx.f2.f64 = double(float(f29.f64 * ctx.f2.f64));
	// stfs f1,4116(r9)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r9.u32 + 4116, temp.u32);
	// lwz r16,116(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stfs f2,4120(r9)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r9.u32 + 4120, temp.u32);
	// stfsx f3,r25,r9
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r25.u32 + ctx.r9.u32, temp.u32);
	// fadds f1,f5,f9
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// lwz r26,4096(r9)
	r26.u64 = REX_LOAD_U32(ctx.r9.u32 + 4096);
	// lwz r25,120(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// ld r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// ld r8,184(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// clrlwi r26,r26,22
	r26.u64 = r26.u32 & 0x3FF;
	// ld r10,192(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// stw r26,4096(r9)
	REX_STORE_U32(ctx.r9.u32 + 4096, r26.u32);
	// lwz r26,0(r25)
	r26.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// fadds f9,f1,f4
	ctx.f9.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// lwz r26,0(r16)
	r26.u64 = REX_LOAD_U32(r16.u32 + 0);
	// stw r26,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r26.u32);
	// lfs f5,124(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// bne cr6,0x824579bc
	if (!ctx.cr6.eq) goto loc_824579BC;
	// addis r4,r31,1
	ctx.r4.s64 = r31.s64 + 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r4,r4,20352
	ctx.r4.s64 = ctx.r4.s64 + 20352;
	// lis r26,1
	r26.s64 = 65536;
	// ori r5,r5,20340
	ctx.r5.u64 = ctx.r5.u64 | 20340;
	// ori r26,r26,22420
	r26.u64 = r26.u64 | 22420;
	// addis r23,r31,1
	r23.s64 = r31.s64 + 65536;
	// lwz r25,2052(r4)
	r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 2052);
	// lfs f10,2060(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 2060);
	ctx.f10.f64 = double(temp.f32);
	// lwz r24,2048(r4)
	r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 2048);
	// lfs f5,2064(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 2064);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r25,r25,2,0,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f4,r31,r5
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r5.u32);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r24,r24,2,0,29
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f3,r31,r26
	temp.u32 = REX_LOAD_U32(r31.u32 + r26.u32);
	ctx.f3.f64 = double(temp.f32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// fadds f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// addis r26,r31,1
	r26.s64 = r31.s64 + 65536;
	// addi r23,r23,22452
	r23.s64 = r23.s64 + 22452;
	// lfsx f1,r25,r4
	temp.u32 = REX_LOAD_U32(r25.u32 + ctx.r4.u32);
	ctx.f1.f64 = double(temp.f32);
	// ori r25,r5,22448
	r25.u64 = ctx.r5.u64 | 22448;
	// fmadds f10,f10,f1,f4
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f1.f64, ctx.f4.f64)));
	// stfsx f10,r24,r4
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r24.u32 + ctx.r4.u32, temp.u32);
	// addi r26,r26,22432
	r26.s64 = r26.s64 + 22432;
	// addis r22,r31,2
	r22.s64 = r31.s64 + 131072;
	// addi r22,r22,-26608
	r22.s64 = r22.s64 + -26608;
	// fmadds f5,f5,f10,f1
	ctx.f5.f64 = double(float(std::fma(ctx.f5.f64, ctx.f10.f64, ctx.f1.f64)));
	// stfs f5,2068(r4)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r4.u32 + 2068, temp.u32);
	// lwz r5,2048(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 2048);
	// addi r24,r5,1
	r24.s64 = ctx.r5.s64 + 1;
	// lwz r5,2052(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 2052);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// clrlwi r5,r5,23
	ctx.r5.u64 = ctx.r5.u32 & 0x1FF;
	// clrlwi r24,r24,23
	r24.u64 = r24.u32 & 0x1FF;
	// stw r5,2052(r4)
	REX_STORE_U32(ctx.r4.u32 + 2052, ctx.r5.u32);
	// stw r24,2048(r4)
	REX_STORE_U32(ctx.r4.u32 + 2048, r24.u32);
	// lis r24,1
	r24.s64 = 65536;
	// lwz r4,8(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f5,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// ori r4,r24,22476
	ctx.r4.u64 = r24.u64 | 22476;
	// lfsx f3,r5,r26
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + r26.u32);
	ctx.f3.f64 = double(temp.f32);
	// addis r5,r31,1
	ctx.r5.s64 = r31.s64 + 65536;
	// lfs f4,12(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f10,f3,f4,f2
	ctx.f10.f64 = double(float(std::fma(ctx.f3.f64, ctx.f4.f64, ctx.f2.f64)));
	// lfsx f1,r31,r25
	temp.u32 = REX_LOAD_U32(r31.u32 + r25.u32);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r5,22480
	ctx.r5.s64 = ctx.r5.s64 + 22480;
	// stfs f10,16(r26)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r26.u32 + 16, temp.u32);
	// lis r25,1
	r25.s64 = 65536;
	// stfs f5,4(r26)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r26.u32 + 4, temp.u32);
	// lis r24,1
	r24.s64 = 65536;
	// stfs f2,0(r26)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r26.u32 + 0, temp.u32);
	// lwz r26,8(r23)
	r26.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lfs f4,20(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r26,r26,2,0,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f3,16(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// ori r25,r25,22500
	r25.u64 = r25.u64 | 22500;
	// lfs f2,12(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfsx f10,r26,r23
	temp.u32 = REX_LOAD_U32(r26.u32 + r23.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f4,f10
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmadds f4,f3,f10,f1
	ctx.f4.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, ctx.f1.f64)));
	// lfsx f3,r31,r4
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r4.u32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,0(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// ori r4,r24,38916
	ctx.r4.u64 = r24.u64 | 38916;
	// stfs f4,0(r23)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r23.u32 + 0, temp.u32);
	// lis r26,1
	r26.s64 = 65536;
	// stfs f1,4(r23)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r23.u32 + 4, temp.u32);
	// fmadds f10,f2,f4,f5
	ctx.f10.f64 = double(float(std::fma(ctx.f2.f64, ctx.f4.f64, ctx.f5.f64)));
	// stfs f10,24(r23)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r23.u32 + 24, temp.u32);
	// lfs f5,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lwz r24,8(r5)
	r24.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r24,r24,2,0,29
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f4,16(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfsx f2,r31,r25
	temp.u32 = REX_LOAD_U32(r31.u32 + r25.u32);
	ctx.f2.f64 = double(temp.f32);
	// ori r26,r26,38944
	r26.u64 = r26.u64 | 38944;
	// fmuls f10,f2,f8
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f8.f64));
	// lfsx f2,r24,r5
	temp.u32 = REX_LOAD_U32(r24.u32 + ctx.r5.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f4,f4,f2,f3
	ctx.f4.f64 = double(float(std::fma(ctx.f4.f64, ctx.f2.f64, ctx.f3.f64)));
	// lfs f1,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// stfs f3,20(r5)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// stfs f4,0(r5)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lis r25,1
	r25.s64 = 65536;
	// stfs f1,4(r5)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lis r24,1
	r24.s64 = 65536;
	// lfs f1,12(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// ori r25,r25,41028
	r25.u64 = r25.u64 | 41028;
	// lfsx f2,r31,r4
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r4.u32);
	ctx.f2.f64 = double(temp.f32);
	// ori r24,r24,43108
	r24.u64 = r24.u64 | 43108;
	// addis r23,r31,2
	r23.s64 = r31.s64 + 131072;
	// addis r20,r31,2
	r20.s64 = r31.s64 + 131072;
	// addi r23,r23,-22416
	r23.s64 = r23.s64 + -22416;
	// addis r18,r31,2
	r18.s64 = r31.s64 + 131072;
	// addi r20,r20,-22396
	r20.s64 = r20.s64 + -22396;
	// addi r18,r18,-22368
	r18.s64 = r18.s64 + -22368;
	// lfs f4,0(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lwz r5,8(r22)
	ctx.r5.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f3,r4,r22
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + r22.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f1,f3
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f3.f64));
	// lfsx f5,r31,r26
	temp.u32 = REX_LOAD_U32(r31.u32 + r26.u32);
	ctx.f5.f64 = double(temp.f32);
	// addis r26,r31,1
	r26.s64 = r31.s64 + 65536;
	// stfs f2,0(r22)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r22.u32 + 0, temp.u32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stfs f1,16(r22)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r22.u32 + 16, temp.u32);
	// addi r26,r26,22512
	r26.s64 = r26.s64 + 22512;
	// stfs f4,4(r22)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r22.u32 + 4, temp.u32);
	// ori r5,r5,38920
	ctx.r5.u64 = ctx.r5.u64 | 38920;
	// addis r4,r31,2
	ctx.r4.s64 = r31.s64 + 131072;
	// lis r22,1
	r22.s64 = 65536;
	// addi r4,r4,-24496
	ctx.r4.s64 = ctx.r4.s64 + -24496;
	// ori r22,r22,43164
	r22.u64 = r22.u64 | 43164;
	// lfsx f3,r31,r5
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r5.u32);
	ctx.f3.f64 = double(temp.f32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lfs f4,16396(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 16396);
	ctx.f4.f64 = double(temp.f32);
	// lwz r17,16384(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 16384);
	// ori r21,r5,43136
	r21.u64 = ctx.r5.u64 | 43136;
	// lwz r16,16392(r26)
	r16.u64 = REX_LOAD_U32(r26.u32 + 16392);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lfs f2,16400(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 16400);
	ctx.f2.f64 = double(temp.f32);
	// subf r16,r16,r17
	r16.u64 = r17.u64 - r16.u64;
	// ori r19,r5,43188
	r19.u64 = ctx.r5.u64 | 43188;
	// lwz r5,16388(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 16388);
	// subf r5,r5,r17
	ctx.r5.u64 = r17.u64 - ctx.r5.u64;
	// rlwinm r16,r16,2,18,29
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0x3FFC;
	// rlwinm r5,r5,2,18,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3FFC;
	// rlwinm r17,r17,2,0,29
	r17.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r16,r26
	temp.u32 = REX_LOAD_U32(r16.u32 + r26.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f2,f1,f2
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// lfsx f1,r5,r26
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + r26.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f4,f1,f4
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// stfs f2,16408(r26)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r26.u32 + 16408, temp.u32);
	// stfs f4,16404(r26)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r26.u32 + 16404, temp.u32);
	// stfsx f10,r17,r26
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r17.u32 + r26.u32, temp.u32);
	// lwz r5,16384(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 16384);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// clrlwi r5,r5,20
	ctx.r5.u64 = ctx.r5.u32 & 0xFFF;
	// stw r5,16384(r26)
	REX_STORE_U32(r26.u32 + 16384, ctx.r5.u32);
	// lfsx f2,r31,r25
	temp.u32 = REX_LOAD_U32(r31.u32 + r25.u32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2060(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 2060);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,2052(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 2052);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f30,r5,r4
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	f30.f64 = double(temp.f32);
	// lwz r26,2048(r4)
	r26.u64 = REX_LOAD_U32(ctx.r4.u32 + 2048);
	// lfsx f10,r31,r24
	temp.u32 = REX_LOAD_U32(r31.u32 + r24.u32);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r26,r26,2,0,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f4,2064(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 2064);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f2,f1,f30,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f1.f64, f30.f64, ctx.f2.f64)));
	// stfsx f2,r26,r4
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r26.u32 + ctx.r4.u32, temp.u32);
	// lwz r5,2048(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 2048);
	// addi r26,r5,1
	r26.s64 = ctx.r5.s64 + 1;
	// fadds f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// lwz r5,2052(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 2052);
	// clrlwi r26,r26,23
	r26.u64 = r26.u32 & 0x1FF;
	// fmadds f1,f4,f2,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f4.f64, ctx.f2.f64, f30.f64)));
	// stfs f1,2068(r4)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r4.u32 + 2068, temp.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r26,2048(r4)
	REX_STORE_U32(ctx.r4.u32 + 2048, r26.u32);
	// clrlwi r5,r5,23
	ctx.r5.u64 = ctx.r5.u32 & 0x1FF;
	// stw r5,2052(r4)
	REX_STORE_U32(ctx.r4.u32 + 2052, ctx.r5.u32);
	// lwz r4,8(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f2,r5,r23
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	ctx.f2.f64 = double(temp.f32);
	// addis r4,r31,2
	ctx.r4.s64 = r31.s64 + 131072;
	// lfs f4,12(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// fmadds f1,f2,f4,f10
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f4.f64, ctx.f10.f64)));
	// lfsx f4,r31,r21
	temp.u32 = REX_LOAD_U32(r31.u32 + r21.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,0(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r4,-22336
	ctx.r4.s64 = ctx.r4.s64 + -22336;
	// stfs f1,16(r23)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r23.u32 + 16, temp.u32);
	// ori r5,r5,59604
	ctx.r5.u64 = ctx.r5.u64 | 59604;
	// stfs f2,4(r23)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r23.u32 + 4, temp.u32);
	// addis r26,r31,2
	r26.s64 = r31.s64 + 131072;
	// stfs f10,0(r23)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r23.u32 + 0, temp.u32);
	// lwz r16,8(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + 8);
	// rlwinm r16,r16,2,0,29
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f10,20(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// addi r26,r26,-5920
	r26.s64 = r26.s64 + -5920;
	// lfsx f2,r31,r22
	temp.u32 = REX_LOAD_U32(r31.u32 + r22.u32);
	ctx.f2.f64 = double(temp.f32);
	// lis r25,1
	r25.s64 = 65536;
	// lfsx f29,r16,r20
	temp.u32 = REX_LOAD_U32(r16.u32 + r20.u32);
	f29.f64 = double(temp.f32);
	// lis r23,2
	r23.s64 = 131072;
	// lfs f1,16(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f1,f1,f29,f4
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, f29.f64, ctx.f4.f64)));
	// fmuls f10,f10,f29
	ctx.f10.f64 = double(float(ctx.f10.f64 * f29.f64));
	// lfs f4,0(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// stfs f1,0(r20)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r20.u32 + 0, temp.u32);
	// addis r24,r31,2
	r24.s64 = r31.s64 + 131072;
	// lfs f30,12(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 12);
	f30.f64 = double(temp.f32);
	// ori r25,r25,59632
	r25.u64 = r25.u64 | 59632;
	// stfs f4,4(r20)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r20.u32 + 4, temp.u32);
	// ori r23,r23,2324
	r23.u64 = r23.u64 | 2324;
	// fmadds f4,f30,f1,f10
	ctx.f4.f64 = double(float(std::fma(f30.f64, ctx.f1.f64, ctx.f10.f64)));
	// stfs f4,24(r20)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r20.u32 + 24, temp.u32);
	// lwz r20,8(r18)
	r20.u64 = REX_LOAD_U32(r18.u32 + 8);
	// rlwinm r20,r20,2,0,29
	r20.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r31,r19
	temp.u32 = REX_LOAD_U32(r31.u32 + r19.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f4,f10,f8
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lfsx f29,r20,r18
	temp.u32 = REX_LOAD_U32(r20.u32 + r18.u32);
	f29.f64 = double(temp.f32);
	// addi r24,r24,2336
	r24.s64 = r24.s64 + 2336;
	// lfs f10,16(r18)
	temp.u32 = REX_LOAD_U32(r18.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f2,f10,f29,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f10.f64, f29.f64, ctx.f2.f64)));
	// lfs f1,12(r18)
	temp.u32 = REX_LOAD_U32(r18.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lis r22,2
	r22.s64 = 131072;
	// lfs f30,0(r18)
	temp.u32 = REX_LOAD_U32(r18.u32 + 0);
	f30.f64 = double(temp.f32);
	// fmuls f1,f1,f2
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// stfs f30,4(r18)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r18.u32 + 4, temp.u32);
	// lis r21,2
	r21.s64 = 131072;
	// stfs f1,20(r18)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r18.u32 + 20, temp.u32);
	// addis r17,r31,2
	r17.s64 = r31.s64 + 131072;
	// stfs f2,0(r18)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r18.u32 + 0, temp.u32);
	// lwz r20,16384(r4)
	r20.u64 = REX_LOAD_U32(ctx.r4.u32 + 16384);
	// lfs f10,16396(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16396);
	ctx.f10.f64 = double(temp.f32);
	// ori r22,r22,10552
	r22.u64 = r22.u64 | 10552;
	// addi r17,r17,10560
	r17.s64 = r17.s64 + 10560;
	// ori r21,r21,18772
	r21.u64 = r21.u64 | 18772;
	// lwz r19,16388(r4)
	r19.u64 = REX_LOAD_U32(ctx.r4.u32 + 16388);
	// lfsx f2,r31,r5
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r5.u32);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r5,r20,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r20,r19,r20
	r20.u64 = r20.u64 - r19.u64;
	// rlwinm r20,r20,2,18,29
	r20.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0x3FFC;
	// lfsx f1,r20,r4
	temp.u32 = REX_LOAD_U32(r20.u32 + ctx.r4.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f10,f1,f10
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// stfs f10,16404(r4)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r4.u32 + 16404, temp.u32);
	// stfsx f4,r5,r4
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r4.u32, temp.u32);
	// lwz r5,16384(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 16384);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// clrlwi r5,r5,20
	ctx.r5.u64 = ctx.r5.u32 & 0xFFF;
	// stw r5,16384(r4)
	REX_STORE_U32(ctx.r4.u32 + 16384, ctx.r5.u32);
	// lwz r4,8(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f4,12(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfsx f30,r5,r26
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + r26.u32);
	f30.f64 = double(temp.f32);
	// fmuls f4,f4,f30
	ctx.f4.f64 = double(float(ctx.f4.f64 * f30.f64));
	// lfsx f1,r31,r25
	temp.u32 = REX_LOAD_U32(r31.u32 + r25.u32);
	ctx.f1.f64 = double(temp.f32);
	// lfs f10,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4(r26)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r26.u32 + 4, temp.u32);
	// stfs f2,0(r26)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r26.u32 + 0, temp.u32);
	// stfs f4,16(r26)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r26.u32 + 16, temp.u32);
	// lwz r4,8196(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 8196);
	// lfsx f2,r31,r23
	temp.u32 = REX_LOAD_U32(r31.u32 + r23.u32);
	ctx.f2.f64 = double(temp.f32);
	// fadds f10,f2,f0
	ctx.f10.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// lwz r5,8192(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 8192);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f2,8204(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 8204);
	ctx.f2.f64 = double(temp.f32);
	// addis r26,r31,2
	r26.s64 = r31.s64 + 131072;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f4,r31,r22
	temp.u32 = REX_LOAD_U32(r31.u32 + r22.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f30,8212(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 8212);
	f30.f64 = double(temp.f32);
	// addi r26,r26,18784
	r26.s64 = r26.s64 + 18784;
	// lfs f29,8208(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 8208);
	f29.f64 = double(temp.f32);
	// addis r25,r31,2
	r25.s64 = r31.s64 + 131072;
	// lfsx f28,r4,r24
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + r24.u32);
	f28.f64 = double(temp.f32);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// fmadds f2,f2,f28,f10
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, f28.f64, ctx.f10.f64)));
	// addi r25,r25,22912
	r25.s64 = r25.s64 + 22912;
	// stfsx f2,r5,r24
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r5.u32 + r24.u32, temp.u32);
	// fmuls f2,f30,f28
	ctx.f2.f64 = double(float(f30.f64 * f28.f64));
	// lis r5,2
	ctx.r5.s64 = 131072;
	// ori r22,r4,39316
	r22.u64 = ctx.r4.u64 | 39316;
	// ori r23,r5,22900
	r23.u64 = ctx.r5.u64 | 22900;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// addis r19,r31,3
	r19.s64 = r31.s64 + 196608;
	// ori r20,r5,39348
	r20.u64 = ctx.r5.u64 | 39348;
	// addi r19,r19,-26208
	r19.s64 = r19.s64 + -26208;
	// fmadds f10,f29,f10,f2
	ctx.f10.f64 = double(float(std::fma(f29.f64, ctx.f10.f64, ctx.f2.f64)));
	// stfs f10,8216(r24)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r24.u32 + 8216, temp.u32);
	// lwz r5,8192(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 8192);
	// addi r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 1;
	// lwz r5,8196(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 8196);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// clrlwi r4,r4,21
	ctx.r4.u64 = ctx.r4.u32 & 0x7FF;
	// clrlwi r5,r5,21
	ctx.r5.u64 = ctx.r5.u32 & 0x7FF;
	// stw r4,8192(r24)
	REX_STORE_U32(r24.u32 + 8192, ctx.r4.u32);
	// stw r5,8196(r24)
	REX_STORE_U32(r24.u32 + 8196, ctx.r5.u32);
	// lfs f2,8204(r17)
	temp.u32 = REX_LOAD_U32(r17.u32 + 8204);
	ctx.f2.f64 = double(temp.f32);
	// lfs f10,8208(r17)
	temp.u32 = REX_LOAD_U32(r17.u32 + 8208);
	ctx.f10.f64 = double(temp.f32);
	// lwz r4,8196(r17)
	ctx.r4.u64 = REX_LOAD_U32(r17.u32 + 8196);
	// lwz r5,8192(r17)
	ctx.r5.u64 = REX_LOAD_U32(r17.u32 + 8192);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f30,r31,r21
	temp.u32 = REX_LOAD_U32(r31.u32 + r21.u32);
	f30.f64 = double(temp.f32);
	// lfsx f29,r4,r17
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + r17.u32);
	f29.f64 = double(temp.f32);
	// fmadds f4,f2,f29,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f2.f64, f29.f64, ctx.f4.f64)));
	// stfsx f4,r5,r17
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r5.u32 + r17.u32, temp.u32);
	// lwz r4,8192(r17)
	ctx.r4.u64 = REX_LOAD_U32(r17.u32 + 8192);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// fmadds f2,f10,f4,f29
	ctx.f2.f64 = double(float(std::fma(ctx.f10.f64, ctx.f4.f64, f29.f64)));
	// lwz r5,8196(r17)
	ctx.r5.u64 = REX_LOAD_U32(r17.u32 + 8196);
	// clrlwi r4,r4,21
	ctx.r4.u64 = ctx.r4.u32 & 0x7FF;
	// stfs f2,8212(r17)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r17.u32 + 8212, temp.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r4,8192(r17)
	REX_STORE_U32(r17.u32 + 8192, ctx.r4.u32);
	// clrlwi r5,r5,21
	ctx.r5.u64 = ctx.r5.u32 & 0x7FF;
	// stw r5,8196(r17)
	REX_STORE_U32(r17.u32 + 8196, ctx.r5.u32);
	// lwz r4,4100(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 4100);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f29,r4,r26
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + r26.u32);
	f29.f64 = double(temp.f32);
	// lwz r5,4096(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 4096);
	// lfs f10,4108(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4108);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f10,f10,f29,f30
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, f29.f64, f30.f64)));
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfsx f4,r31,r23
	temp.u32 = REX_LOAD_U32(r31.u32 + r23.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,4112(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4112);
	ctx.f2.f64 = double(temp.f32);
	// stfsx f10,r5,r26
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r5.u32 + r26.u32, temp.u32);
	// fmadds f2,f2,f10,f29
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f10.f64, f29.f64)));
	// stfs f2,4116(r26)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r26.u32 + 4116, temp.u32);
	// lwz r4,4096(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 4096);
	// lwz r5,4100(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 4100);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// fadds f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// clrlwi r5,r5,22
	ctx.r5.u64 = ctx.r5.u32 & 0x3FF;
	// clrlwi r4,r4,22
	ctx.r4.u64 = ctx.r4.u32 & 0x3FF;
	// stw r5,4100(r26)
	REX_STORE_U32(r26.u32 + 4100, ctx.r5.u32);
	// stw r4,4096(r26)
	REX_STORE_U32(r26.u32 + 4096, ctx.r4.u32);
	// lfs f10,16396(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 16396);
	ctx.f10.f64 = double(temp.f32);
	// lwz r4,16388(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 16388);
	// lfsx f2,r31,r22
	temp.u32 = REX_LOAD_U32(r31.u32 + r22.u32);
	ctx.f2.f64 = double(temp.f32);
	// lwz r5,16384(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 16384);
	// rlwinm r26,r5,2,0,29
	r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// rlwinm r5,r5,2,18,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3FFC;
	// lis r24,2
	r24.s64 = 131072;
	// addis r23,r31,3
	r23.s64 = r31.s64 + 196608;
	// ori r24,r24,64020
	r24.u64 = r24.u64 | 64020;
	// lis r22,3
	r22.s64 = 196608;
	// lfsx f30,r5,r25
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + r25.u32);
	f30.f64 = double(temp.f32);
	// lis r21,3
	r21.s64 = 196608;
	// fmuls f10,f30,f10
	ctx.f10.f64 = double(float(f30.f64 * ctx.f10.f64));
	// stfs f10,16404(r25)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r25.u32 + 16404, temp.u32);
	// stfsx f4,r26,r25
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r26.u32 + r25.u32, temp.u32);
	// lwz r5,16384(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 16384);
	// addi r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 1;
	// clrlwi r4,r4,20
	ctx.r4.u64 = ctx.r4.u32 & 0xFFF;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// stw r4,16384(r25)
	REX_STORE_U32(r25.u32 + 16384, ctx.r4.u32);
	// lfs f4,16(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lwz r17,8(r19)
	r17.u64 = REX_LOAD_U32(r19.u32 + 8);
	// rlwinm r17,r17,2,0,29
	r17.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f10,12(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// ori r5,r5,47572
	ctx.r5.u64 = ctx.r5.u64 | 47572;
	// lfsx f28,r17,r19
	temp.u32 = REX_LOAD_U32(r17.u32 + r19.u32);
	f28.f64 = double(temp.f32);
	// fmuls f4,f4,f28
	ctx.f4.f64 = double(float(ctx.f4.f64 * f28.f64));
	// lfsx f30,r31,r20
	temp.u32 = REX_LOAD_U32(r31.u32 + r20.u32);
	f30.f64 = double(temp.f32);
	// addis r26,r31,3
	r26.s64 = r31.s64 + 196608;
	// lfs f29,0(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 0);
	f29.f64 = double(temp.f32);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// stfs f2,0(r19)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r19.u32 + 0, temp.u32);
	// fmadds f2,f10,f2,f4
	ctx.f2.f64 = double(float(std::fma(ctx.f10.f64, ctx.f2.f64, ctx.f4.f64)));
	// stfs f2,20(r19)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r19.u32 + 20, temp.u32);
	// addi r26,r26,-17952
	r26.s64 = r26.s64 + -17952;
	// stfs f29,4(r19)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r19.u32 + 4, temp.u32);
	// ori r4,r4,55800
	ctx.r4.u64 = ctx.r4.u64 | 55800;
	// addis r25,r31,3
	r25.s64 = r31.s64 + 196608;
	// addis r18,r31,3
	r18.s64 = r31.s64 + 196608;
	// addi r25,r25,-9728
	r25.s64 = r25.s64 + -9728;
	// addi r23,r23,-1504
	r23.s64 = r23.s64 + -1504;
	// ori r22,r22,2612
	r22.u64 = r22.u64 | 2612;
	// ori r21,r21,19028
	r21.u64 = r21.u64 | 19028;
	// addi r18,r18,19040
	r18.s64 = r18.s64 + 19040;
	// lfsx f10,r31,r5
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r5.u32);
	ctx.f10.f64 = double(temp.f32);
	// lwz r5,8196(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 8196);
	// fadds f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lwz r20,8192(r26)
	r20.u64 = REX_LOAD_U32(r26.u32 + 8192);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f2,8204(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8204);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r20,r20,2,0,29
	r20.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r31,r4
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f29,8212(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8212);
	f29.f64 = double(temp.f32);
	// lfs f28,8208(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8208);
	f28.f64 = double(temp.f32);
	// lfsx f27,r5,r26
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + r26.u32);
	f27.f64 = double(temp.f32);
	// fmuls f29,f29,f27
	f29.f64 = double(float(f29.f64 * f27.f64));
	// fmadds f2,f2,f27,f4
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, f27.f64, ctx.f4.f64)));
	// stfsx f2,r20,r26
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r20.u32 + r26.u32, temp.u32);
	// lwz r4,8192(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 8192);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwz r5,8196(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 8196);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// clrlwi r4,r4,21
	ctx.r4.u64 = ctx.r4.u32 & 0x7FF;
	// fmadds f4,f28,f4,f29
	ctx.f4.f64 = double(float(std::fma(f28.f64, ctx.f4.f64, f29.f64)));
	// clrlwi r5,r5,21
	ctx.r5.u64 = ctx.r5.u32 & 0x7FF;
	// stfs f4,8216(r26)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r26.u32 + 8216, temp.u32);
	// stw r4,8192(r26)
	REX_STORE_U32(r26.u32 + 8192, ctx.r4.u32);
	// stw r5,8196(r26)
	REX_STORE_U32(r26.u32 + 8196, ctx.r5.u32);
	// lwz r4,8196(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 8196);
	// lfs f2,8204(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 8204);
	ctx.f2.f64 = double(temp.f32);
	// lfsx f29,r31,r24
	temp.u32 = REX_LOAD_U32(r31.u32 + r24.u32);
	f29.f64 = double(temp.f32);
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,8192(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 8192);
	// lfsx f4,r5,r25
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + r25.u32);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// fmadds f2,f2,f4,f10
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f4.f64, ctx.f10.f64)));
	// lfs f10,8208(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 8208);
	ctx.f10.f64 = double(temp.f32);
	// stfsx f2,r5,r25
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r5.u32 + r25.u32, temp.u32);
	// fmadds f4,f10,f2,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f10.f64, ctx.f2.f64, ctx.f4.f64)));
	// stfs f4,8212(r25)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r25.u32 + 8212, temp.u32);
	// lwz r4,8192(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 8192);
	// lwz r5,8196(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 8196);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// clrlwi r5,r5,21
	ctx.r5.u64 = ctx.r5.u32 & 0x7FF;
	// clrlwi r4,r4,21
	ctx.r4.u64 = ctx.r4.u32 & 0x7FF;
	// stw r5,8196(r25)
	REX_STORE_U32(r25.u32 + 8196, ctx.r5.u32);
	// addis r26,r31,3
	r26.s64 = r31.s64 + 196608;
	// stw r4,8192(r25)
	REX_STORE_U32(r25.u32 + 8192, ctx.r4.u32);
	// add r24,r31,r28
	r24.u64 = r31.u64 + r28.u64;
	// addi r26,r26,2624
	r26.s64 = r26.s64 + 2624;
	// add r16,r31,r29
	r16.u64 = r31.u64 + r29.u64;
	// lwz r5,4100(r23)
	ctx.r5.u64 = REX_LOAD_U32(r23.u32 + 4100);
	// lfs f10,4108(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 4108);
	ctx.f10.f64 = double(temp.f32);
	// lwz r4,4096(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 4096);
	// lfsx f2,r31,r22
	temp.u32 = REX_LOAD_U32(r31.u32 + r22.u32);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f2,f2,f13
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f13.f64));
	// lfsx f4,r5,r23
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f10,f10,f4,f29
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f4.f64, f29.f64)));
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f29,4112(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 4112);
	f29.f64 = double(temp.f32);
	// fadds f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lis r5,3
	ctx.r5.s64 = 196608;
	// fadds f13,f1,f5
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// ori r25,r5,19060
	r25.u64 = ctx.r5.u64 | 19060;
	// stfsx f10,r4,r23
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r4.u32 + r23.u32, temp.u32);
	// lwz r5,4100(r23)
	ctx.r5.u64 = REX_LOAD_U32(r23.u32 + 4100);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lwz r4,4096(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 4096);
	// clrlwi r5,r5,22
	ctx.r5.u64 = ctx.r5.u32 & 0x3FF;
	// fmadds f4,f29,f10,f4
	ctx.f4.f64 = double(float(std::fma(f29.f64, ctx.f10.f64, ctx.f4.f64)));
	// stfs f4,4116(r23)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r23.u32 + 4116, temp.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r5,4100(r23)
	REX_STORE_U32(r23.u32 + 4100, ctx.r5.u32);
	// clrlwi r5,r4,22
	ctx.r5.u64 = ctx.r4.u32 & 0x3FF;
	// stw r5,4096(r23)
	REX_STORE_U32(r23.u32 + 4096, ctx.r5.u32);
	// lwz r4,8(r18)
	ctx.r4.u64 = REX_LOAD_U32(r18.u32 + 8);
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f28,r31,r25
	temp.u32 = REX_LOAD_U32(r31.u32 + r25.u32);
	f28.f64 = double(temp.f32);
	// fadds f26,f28,f30
	f26.f64 = double(float(f28.f64 + f30.f64));
	// lfs f10,16(r18)
	temp.u32 = REX_LOAD_U32(r18.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f30,f28,f30
	f30.f64 = double(float(f28.f64 - f30.f64));
	// lfsx f28,r5,r18
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + r18.u32);
	f28.f64 = double(temp.f32);
	// fmuls f10,f10,f28
	ctx.f10.f64 = double(float(ctx.f10.f64 * f28.f64));
	// lfsx f4,r31,r21
	temp.u32 = REX_LOAD_U32(r31.u32 + r21.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f27,0(r18)
	temp.u32 = REX_LOAD_U32(r18.u32 + 0);
	f27.f64 = double(temp.f32);
	// stfs f4,0(r18)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r18.u32 + 0, temp.u32);
	// lfs f29,12(r18)
	temp.u32 = REX_LOAD_U32(r18.u32 + 12);
	f29.f64 = double(temp.f32);
	// fmadds f4,f29,f4,f10
	ctx.f4.f64 = double(float(std::fma(f29.f64, ctx.f4.f64, ctx.f10.f64)));
	// stfs f4,20(r18)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r18.u32 + 20, temp.u32);
	// stfs f27,4(r18)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r18.u32 + 4, temp.u32);
	// lwz r4,16388(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 16388);
	// lfs f29,16400(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 16400);
	f29.f64 = double(temp.f32);
	// lwz r5,16384(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 16384);
	// lwz r23,16392(r26)
	r23.u64 = REX_LOAD_U32(r26.u32 + 16392);
	// lfsx f10,r31,r27
	temp.u32 = REX_LOAD_U32(r31.u32 + r27.u32);
	ctx.f10.f64 = double(temp.f32);
	// subf r4,r4,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r4.u64;
	// fadds f10,f10,f3
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// subf r23,r23,r5
	r23.u64 = ctx.r5.u64 - r23.u64;
	// lfs f4,16396(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 16396);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r25,r5,2,0,29
	r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,18,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FFC;
	// rlwinm r5,r23,2,18,29
	ctx.r5.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0x3FFC;
	// lfsx f28,r4,r26
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + r26.u32);
	f28.f64 = double(temp.f32);
	// lfsx f3,r5,r26
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + r26.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f28,f4
	ctx.f4.f64 = double(float(f28.f64 * ctx.f4.f64));
	// fmuls f3,f3,f29
	ctx.f3.f64 = double(float(ctx.f3.f64 * f29.f64));
	// stfs f4,16404(r26)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r26.u32 + 16404, temp.u32);
	// stfs f3,16408(r26)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r26.u32 + 16408, temp.u32);
	// stfsx f2,r25,r26
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r25.u32 + r26.u32, temp.u32);
	// lwz r5,16384(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 16384);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// clrlwi r4,r5,20
	ctx.r4.u64 = ctx.r5.u32 & 0xFFF;
	// stw r4,16384(r26)
	REX_STORE_U32(r26.u32 + 16384, ctx.r4.u32);
	// lfs f2,2060(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 2060);
	ctx.f2.f64 = double(temp.f32);
	// lwz r5,2052(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 2052);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,2048(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 2048);
	// lfsx f3,r4,r24
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + r24.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f4,f2,f3,f26
	ctx.f4.f64 = double(float(std::fma(ctx.f2.f64, ctx.f3.f64, f26.f64)));
	// lfs f2,2064(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 2064);
	ctx.f2.f64 = double(temp.f32);
	// fadds f4,f4,f11
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f4,r4,r24
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r4.u32 + r24.u32, temp.u32);
	// fmadds f3,f2,f4,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f2.f64, ctx.f4.f64, ctx.f3.f64)));
	// stfs f3,2068(r24)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r24.u32 + 2068, temp.u32);
	// lwz r4,2048(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 2048);
	// fsubs f2,f1,f5
	ctx.f2.f64 = double(float(ctx.f1.f64 - ctx.f5.f64));
	// lwz r5,2052(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 2052);
	// add r25,r31,r30
	r25.u64 = r31.u64 + r30.u64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwz r17,128(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lwz r18,132(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// clrlwi r4,r4,23
	ctx.r4.u64 = ctx.r4.u32 & 0x1FF;
	// lwz r19,136(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// clrlwi r5,r5,23
	ctx.r5.u64 = ctx.r5.u32 & 0x1FF;
	// lwz r20,140(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stw r4,2048(r24)
	REX_STORE_U32(r24.u32 + 2048, ctx.r4.u32);
	// add r15,r31,r3
	r15.u64 = r31.u64 + ctx.r3.u64;
	// stw r5,2052(r24)
	REX_STORE_U32(r24.u32 + 2052, ctx.r5.u32);
	// lfs f5,2064(r16)
	temp.u32 = REX_LOAD_U32(r16.u32 + 2064);
	ctx.f5.f64 = double(temp.f32);
	// lwz r24,80(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r21,144(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r22,148(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r23,152(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r26,436(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// lfs f1,2060(r16)
	temp.u32 = REX_LOAD_U32(r16.u32 + 2060);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,2048(r16)
	ctx.r5.u64 = REX_LOAD_U32(r16.u32 + 2048);
	// lwz r4,2052(r16)
	ctx.r4.u64 = REX_LOAD_U32(r16.u32 + 2052);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f4,r4,r16
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + r16.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f1,f4,f30
	ctx.f3.f64 = double(float(std::fma(ctx.f1.f64, ctx.f4.f64, f30.f64)));
	// fadds f1,f3,f11
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// stfsx f1,r5,r16
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r5.u32 + r16.u32, temp.u32);
	// fmadds f11,f5,f1,f4
	ctx.f11.f64 = double(float(std::fma(ctx.f5.f64, ctx.f1.f64, ctx.f4.f64)));
	// stfs f11,2068(r16)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r16.u32 + 2068, temp.u32);
	// lwz r5,2048(r16)
	ctx.r5.u64 = REX_LOAD_U32(r16.u32 + 2048);
	// lwz r4,2052(r16)
	ctx.r4.u64 = REX_LOAD_U32(r16.u32 + 2052);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// clrlwi r4,r4,23
	ctx.r4.u64 = ctx.r4.u32 & 0x1FF;
	// clrlwi r5,r5,23
	ctx.r5.u64 = ctx.r5.u32 & 0x1FF;
	// stw r4,2052(r16)
	REX_STORE_U32(r16.u32 + 2052, ctx.r4.u32);
	// stw r5,2048(r16)
	REX_STORE_U32(r16.u32 + 2048, ctx.r5.u32);
	// lwz r4,8196(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 8196);
	// lfs f5,8204(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 8204);
	ctx.f5.f64 = double(temp.f32);
	// lwz r5,8192(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 8192);
	// lfs f4,8208(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 8208);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f3,r4,r25
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + r25.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f1,f5,f3,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f5.f64, ctx.f3.f64, ctx.f13.f64)));
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfsx f13,r5,r25
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r5.u32 + r25.u32, temp.u32);
	// fmadds f11,f4,f13,f3
	ctx.f11.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f3.f64)));
	// stfs f11,8212(r25)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r25.u32 + 8212, temp.u32);
	// lwz r4,8196(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 8196);
	// lwz r5,8192(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 8192);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// clrlwi r4,r4,21
	ctx.r4.u64 = ctx.r4.u32 & 0x7FF;
	// clrlwi r5,r5,21
	ctx.r5.u64 = ctx.r5.u32 & 0x7FF;
	// stw r4,8196(r25)
	REX_STORE_U32(r25.u32 + 8196, ctx.r4.u32);
	// stw r5,8192(r25)
	REX_STORE_U32(r25.u32 + 8192, ctx.r5.u32);
	// lfs f5,8204(r15)
	temp.u32 = REX_LOAD_U32(r15.u32 + 8204);
	ctx.f5.f64 = double(temp.f32);
	// lwz r4,8196(r15)
	ctx.r4.u64 = REX_LOAD_U32(r15.u32 + 8196);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f3,r4,r15
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + r15.u32);
	ctx.f3.f64 = double(temp.f32);
	// lwz r5,8192(r15)
	ctx.r5.u64 = REX_LOAD_U32(r15.u32 + 8192);
	// fmadds f2,f5,f3,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f5.f64, ctx.f3.f64, ctx.f2.f64)));
	// lfs f4,8208(r15)
	temp.u32 = REX_LOAD_U32(r15.u32 + 8208);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// stfsx f1,r5,r15
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r5.u32 + r15.u32, temp.u32);
	// fmadds f0,f4,f1,f3
	ctx.f0.f64 = double(float(std::fma(ctx.f4.f64, ctx.f1.f64, ctx.f3.f64)));
	// stfs f0,8212(r15)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r15.u32 + 8212, temp.u32);
	// lwz r5,8196(r15)
	ctx.r5.u64 = REX_LOAD_U32(r15.u32 + 8196);
	// lwz r4,8192(r15)
	ctx.r4.u64 = REX_LOAD_U32(r15.u32 + 8192);
	// addi r16,r4,1
	r16.s64 = ctx.r4.s64 + 1;
	// addi r25,r5,1
	r25.s64 = ctx.r5.s64 + 1;
	// lwz r5,156(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r4,160(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// clrlwi r16,r16,21
	r16.u64 = r16.u32 & 0x7FF;
	// clrlwi r25,r25,21
	r25.u64 = r25.u32 & 0x7FF;
	// stw r25,8196(r15)
	REX_STORE_U32(r15.u32 + 8196, r25.u32);
	// stw r16,8192(r15)
	REX_STORE_U32(r15.u32 + 8192, r16.u32);
	// b 0x824579c0
	goto loc_824579C0;
loc_824579BC:
	// lwz r26,436(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
loc_824579C0:
	// lwz r25,2052(r5)
	r25.u64 = REX_LOAD_U32(ctx.r5.u32 + 2052);
	// lfs f0,2060(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 2060);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f9,f10
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// lwz r16,2048(r5)
	r16.u64 = REX_LOAD_U32(ctx.r5.u32 + 2048);
	// rlwinm r25,r25,2,0,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r15,164(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// rlwinm r16,r16,2,0,29
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f11,2064(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 2064);
	ctx.f11.f64 = double(temp.f32);
	// lwz r14,168(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// fsubs f9,f6,f12
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// std r11,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// std r10,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.r10.u64);
	// addi r10,r26,4
	ctx.r10.s64 = r26.s64 + 4;
	// lfsx f5,r25,r5
	temp.u32 = REX_LOAD_U32(r25.u32 + ctx.r5.u32);
	ctx.f5.f64 = double(temp.f32);
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f3,0(r15)
	temp.u32 = REX_LOAD_U32(r15.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// stw r10,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r10.u32);
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// lfsx f2,r11,r26
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f13,f7,f4
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, ctx.f4.f64)));
	// stfsx f1,r16,r5
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r16.u32 + ctx.r5.u32, temp.u32);
	// ld r11,192(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// ld r10,184(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// fmadds f0,f1,f11,f5
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f11.f64, ctx.f5.f64)));
	// stfs f0,2068(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 2068, temp.u32);
	// lwz r16,2048(r5)
	r16.u64 = REX_LOAD_U32(ctx.r5.u32 + 2048);
	// lwz r25,2052(r5)
	r25.u64 = REX_LOAD_U32(ctx.r5.u32 + 2052);
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// clrlwi r16,r16,23
	r16.u64 = r16.u32 & 0x1FF;
	// clrlwi r25,r25,23
	r25.u64 = r25.u32 & 0x1FF;
	// stw r16,2048(r5)
	REX_STORE_U32(ctx.r5.u32 + 2048, r16.u32);
	// stw r25,2052(r5)
	REX_STORE_U32(ctx.r5.u32 + 2052, r25.u32);
	// lfs f11,0(r14)
	temp.u32 = REX_LOAD_U32(r14.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f4,f11,f12
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f13,2060(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 2060);
	ctx.f13.f64 = double(temp.f32);
	// lwz r25,2052(r4)
	r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 2052);
	// lwz r16,2048(r4)
	r16.u64 = REX_LOAD_U32(ctx.r4.u32 + 2048);
	// rlwinm r16,r16,2,0,29
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r25,2,0,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f5,2064(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 2064);
	ctx.f5.f64 = double(temp.f32);
	// fadds f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 + f31.f64));
	// lfsx f1,r25,r4
	temp.u32 = REX_LOAD_U32(r25.u32 + ctx.r4.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f13,f1,f3
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f1.f64, ctx.f3.f64)));
	// stfsx f0,r16,r4
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r16.u32 + ctx.r4.u32, temp.u32);
	// fmadds f13,f9,f2,f4
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f2.f64, ctx.f4.f64)));
	// stfs f13,0(r26)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r26.u32 + 0, temp.u32);
	// fmadds f11,f0,f5,f1
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f5.f64, ctx.f1.f64)));
	// stfs f11,2068(r4)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r4.u32 + 2068, temp.u32);
	// lwz r25,2052(r4)
	r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 2052);
	// lwz r16,2048(r4)
	r16.u64 = REX_LOAD_U32(ctx.r4.u32 + 2048);
	// addi r26,r25,1
	r26.s64 = r25.s64 + 1;
	// addi r25,r16,1
	r25.s64 = r16.s64 + 1;
	// clrlwi r26,r26,23
	r26.u64 = r26.u32 & 0x1FF;
	// clrlwi r25,r25,23
	r25.u64 = r25.u32 & 0x1FF;
	// stw r26,2052(r4)
	REX_STORE_U32(ctx.r4.u32 + 2052, r26.u32);
	// stw r25,2048(r4)
	REX_STORE_U32(ctx.r4.u32 + 2048, r25.u32);
	// bdnz 0x82456e0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82456E0C;
loc_82457AB0:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f7c
	ctx.lr = 0x82457ABC;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_824AD3C8) {
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
	ctx.lr = 0x824AD3D0;
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
	// bne cr6,0x824ad578
	if (!ctx.cr6.eq) goto loc_824AD578;
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
	// ble cr6,0x824ad750
	if (!ctx.cr6.gt) goto loc_824AD750;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_824AD49C:
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
	// blt cr6,0x824ad49c
	if (ctx.cr6.lt) goto loc_824AD49C;
	// b 0x824ad750
	goto loc_824AD750;
loc_824AD578:
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
	// ble cr6,0x824ad750
	if (!ctx.cr6.gt) goto loc_824AD750;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
loc_824AD5FC:
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
	// blt cr6,0x824ad5fc
	if (ctx.cr6.lt) goto loc_824AD5FC;
loc_824AD750:
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
	// bne cr6,0x824ad800
	if (!ctx.cr6.eq) goto loc_824AD800;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824ad8e8
	if (!ctx.cr6.gt) goto loc_824AD8E8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_824AD784:
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
	// vsldoi128 v9,v10,v40,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 14));
	// vsldoi128 v8,v10,v40,4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 12));
	// vsldoi128 v10,v10,v40,6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 10));
	// vsubshs v4,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vslh v3,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v8,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v28,v1,v3
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v25,v31,v9
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v24,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v23,v29,v30
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v22,v25,v28
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vsubshs v21,v10,v24
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vadduhm v20,v22,v23
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v19,v21,v4
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v18,v20,v26
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v17,v18,v19
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vsrah v16,v17,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v39,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vor v5,v5,v16
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// stvewx128 v39,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x824ad784
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AD784;
	// b 0x824ad8e8
	goto loc_824AD8E8;
loc_824AD800:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824ad8e8
	if (!ctx.cr6.gt) goto loc_824AD8E8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_824AD818:
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
	// vsldoi v8,v9,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 14));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v6,v10,v38,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 14));
	// vsubshs v31,v0,v3
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi v4,v9,v10,4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 12));
	// vsldoi128 v3,v10,v38,4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 12));
	// vsubshs v30,v0,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v9,v9,v10,6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 10));
	// vslh v28,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v10,v10,v38,6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 10));
	// vslh v25,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v25,v29
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v18,v24,v8
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v15,v23,v28
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vslh v21,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v4,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v3,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v14,v22,v6
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v6,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vadduhm v4,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v1,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v29,v14,v15
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vslh v8,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v4,v6
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v23,v29,v1
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vsubshs v28,v9,v8
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v24,v10,v3
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vadduhm v21,v25,v26
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v19,v23,v26
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v22,v28,v30
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v20,v24,v31
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v18,v21,v22
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v17,v19,v20
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
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
	// bdnz 0x824ad818
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AD818;
loc_824AD8E8:
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

