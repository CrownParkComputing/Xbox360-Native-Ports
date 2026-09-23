#include "soulcalibur2_funcs.0.h"

DEFINE_REX_FUNC(sub_820E0000) {
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
	// bl 0x822d4c88
	ctx.lr = 0x820E0010;
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

DEFINE_REX_FUNC(sub_820E4E60) {
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
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// blt cr6,0x820e4f84
	if (ctx.cr6.lt) goto loc_820E4F84;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x820e4ea8
	if (!ctx.cr6.eq) goto loc_820E4EA8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// b 0x820e4f80
	goto loc_820E4F80;
loc_820E4EA8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 80);
	// bl 0x822c8418
	ctx.lr = 0x820E4EB4;
	sub_822C8418(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820e4f10
	if (ctx.cr6.lt) goto loc_820E4F10;
	// beq cr6,0x820e4ef4
	if (ctx.cr6.eq) goto loc_820E4EF4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x820e4f44
	if (!ctx.cr6.lt) goto loc_820E4F44;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c83b8
	ctx.lr = 0x820E4EDC;
	sub_822C83B8(ctx, base);
	// bl 0x820e4bb0
	ctx.lr = 0x820E4EE0;
	sub_820E4BB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// lfs f3,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f3.f64 = double(temp.f32);
	// b 0x820e4f30
	goto loc_820E4F30;
loc_820E4EF4:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c83b8
	ctx.lr = 0x820E4F00;
	sub_822C83B8(ctx, base);
	// bl 0x820e4bb0
	ctx.lr = 0x820E4F04;
	sub_820E4BB0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// b 0x820e4f28
	goto loc_820E4F28;
loc_820E4F10:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c83b8
	ctx.lr = 0x820E4F1C;
	sub_822C83B8(ctx, base);
	// bl 0x820e4bb0
	ctx.lr = 0x820E4F20;
	sub_820E4BB0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
loc_820E4F28:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f3,15620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15620);
	ctx.f3.f64 = double(temp.f32);
loc_820E4F30:
	// li r4,60
	ctx.r4.s64 = 60;
	// fmr f2,f3
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f3.f64;
	// li r3,2
	ctx.r3.s64 = 2;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x821afa50
	ctx.lr = 0x820E4F44;
	sub_821AFA50(ctx, base);
loc_820E4F44:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e4f58
	if (ctx.cr6.eq) goto loc_820E4F58;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
loc_820E4F58:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e4aa8
	ctx.lr = 0x820E4F64;
	sub_820E4AA8(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
loc_820E4F80:
	// stw r10,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r10.u32);
loc_820E4F84:
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

DEFINE_REX_FUNC(sub_820EE428) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-28252(r10)
	REX_STORE_U32(ctx.r10.u32 + -28252, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820EEE80) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,32336
	ctx.r9.s64 = ctx.r10.s64 + 32336;
	// lis r8,-32170
	ctx.r8.s64 = -2108293120;
	// lwz r10,4892(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4892);
	// stw r11,-28256(r8)
	REX_STORE_U32(ctx.r8.u32 + -28256, ctx.r11.u32);
	// stw r11,148(r10)
	REX_STORE_U32(ctx.r10.u32 + 148, ctx.r11.u32);
	// lwz r10,4892(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4892);
	// stw r11,140(r10)
	REX_STORE_U32(ctx.r10.u32 + 140, ctx.r11.u32);
	// lwz r10,4892(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4892);
	// stw r11,140(r10)
	REX_STORE_U32(ctx.r10.u32 + 140, ctx.r11.u32);
	// lwz r10,4892(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4892);
	// stw r11,160(r10)
	REX_STORE_U32(ctx.r10.u32 + 160, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F0260) {
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
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// bl 0x820efdb8
	ctx.lr = 0x820F0288;
	sub_820EFDB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820edf60
	ctx.lr = 0x820F0290;
	sub_820EDF60(ctx, base);
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

DEFINE_REX_FUNC(sub_820F2710) {
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
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-48(r10)
	REX_STORE_U32(ctx.r10.u32 + -48, ctx.r11.u32);
	// bl 0x820f0760
	ctx.lr = 0x820F2734;
	sub_820F0760(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r11,-7072
	ctx.r3.s64 = ctx.r11.s64 + -7072;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f1090
	ctx.lr = 0x820F2750;
	sub_820F1090(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F2D80) {
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
	ctx.lr = 0x820F2D88;
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F2DAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x820f2e5c
	if (!ctx.cr6.lt) goto loc_820F2E5C;
	// stw r29,12(r30)
	REX_STORE_U32(r30.u32 + 12, r29.u32);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x820f2e3c
	if (!ctx.cr6.gt) goto loc_820F2E3C;
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
loc_820F2DD8:
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(r31.s32, r29.s32, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne cr6,0x820f2e28
	if (!ctx.cr6.eq) goto loc_820F2E28;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82202560
	ctx.lr = 0x820F2DF0;
	sub_82202560(ctx, base);
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(r31.s32, 8, ctx.xer);
	// bge cr6,0x820f2e08
	if (!ctx.cr6.lt) goto loc_820F2E08;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// bl 0x82201ac8
	ctx.lr = 0x820F2E04;
	sub_82201AC8(ctx, base);
	// b 0x820f2e0c
	goto loc_820F2E0C;
loc_820F2E08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F2E0C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f2e30
	if (ctx.cr6.eq) goto loc_820F2E30;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F2E24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f2e30
	goto loc_820F2E30;
loc_820F2E28:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82202560
	ctx.lr = 0x820F2E30;
	sub_82202560(ctx, base);
loc_820F2E30:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(r31.s32, r28.s32, ctx.xer);
	// blt cr6,0x820f2dd8
	if (ctx.cr6.lt) goto loc_820F2DD8;
loc_820F2E3C:
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r11,32336
	ctx.r3.s64 = ctx.r11.s64 + 32336;
	// bl 0x820ea210
	ctx.lr = 0x820F2E4C;
	sub_820EA210(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r10,68(r30)
	REX_STORE_U32(r30.u32 + 68, ctx.r10.u32);
loc_820F2E5C:
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

DEFINE_REX_FUNC(sub_820F9AD0) {
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
	// lhz r7,2076(r3)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 2076);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq 0x820f9bd4
	if (ctx.cr0.eq) goto loc_820F9BD4;
	// rlwinm. r11,r5,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820f9bd4
	if (!ctx.cr0.eq) goto loc_820F9BD4;
	// bl 0x820f9278
	ctx.lr = 0x820F9AF8;
	sub_820F9278(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x820f9bd0
	if (!ctx.cr6.gt) goto loc_820F9BD0;
	// addi r7,r8,48
	ctx.r7.s64 = ctx.r8.s64 + 48;
loc_820F9B0C:
	// lhz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// lwz r10,40(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mulli r11,r11,48
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(48));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820f9b34
	if (ctx.cr0.eq) goto loc_820F9B34;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820f9ba4
	if (ctx.cr6.eq) goto loc_820F9BA4;
loc_820F9B34:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820f9b44
	if (ctx.cr0.eq) goto loc_820F9B44;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820f9ba4
	if (ctx.cr6.eq) goto loc_820F9BA4;
loc_820F9B44:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820f9b54
	if (ctx.cr0.eq) goto loc_820F9B54;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x820f9ba4
	if (ctx.cr6.eq) goto loc_820F9BA4;
loc_820F9B54:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820f9b64
	if (ctx.cr0.eq) goto loc_820F9B64;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x820f9ba4
	if (ctx.cr6.eq) goto loc_820F9BA4;
loc_820F9B64:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820f9b74
	if (ctx.cr0.eq) goto loc_820F9B74;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x820f9ba4
	if (ctx.cr6.eq) goto loc_820F9BA4;
loc_820F9B74:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820f9b84
	if (ctx.cr0.eq) goto loc_820F9B84;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x820f9ba4
	if (ctx.cr6.eq) goto loc_820F9BA4;
loc_820F9B84:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820f9b94
	if (ctx.cr0.eq) goto loc_820F9B94;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x820f9ba4
	if (ctx.cr6.eq) goto loc_820F9BA4;
loc_820F9B94:
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f9bbc
	if (ctx.cr0.eq) goto loc_820F9BBC;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x820f9bbc
	if (!ctx.cr6.eq) goto loc_820F9BBC;
loc_820F9BA4:
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
	// sthx r9,r10,r8
	REX_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u16);
loc_820F9BBC:
	// lhz r11,2076(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 2076);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820f9b0c
	if (ctx.cr6.lt) goto loc_820F9B0C;
loc_820F9BD0:
	// sth r6,2076(r8)
	REX_STORE_U16(ctx.r8.u32 + 2076, ctx.r6.u16);
loc_820F9BD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FF1C8) {
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
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
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
	// addi r11,r10,528
	ctx.r11.s64 = ctx.r10.s64 + 528;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lhz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// stfs f3,68(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// subfic r8,r10,255
	ctx.xer.ca = ctx.r10.u32 <= 255;
	ctx.r8.u64 = static_cast<uint64_t>(255) - ctx.r10.u64;
	// stw r10,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r11,52(r3)
	REX_STORE_U8(ctx.r3.u32 + 52, ctx.r11.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,54(r3)
	REX_STORE_U8(ctx.r3.u32 + 54, ctx.r10.u8);
	// stb r8,53(r3)
	REX_STORE_U8(ctx.r3.u32 + 53, ctx.r8.u8);
	// stb r11,73(r3)
	REX_STORE_U8(ctx.r3.u32 + 73, ctx.r11.u8);
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
	// beq cr6,0x820ff254
	if (ctx.cr6.eq) goto loc_820FF254;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
loc_820FF254:
	// lbz r11,14(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 14);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stb r11,14(r3)
	REX_STORE_U8(ctx.r3.u32 + 14, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821027A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// bne cr6,0x821027c4
	if (!ctx.cr6.eq) goto loc_821027C4;
loc_821027B8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_821027C4:
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82102800
	if (!ctx.cr6.gt) goto loc_82102800;
	// b 0x821027f4
	goto loc_821027F4;
loc_821027D8:
	// lwz r9,80(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r9,80
	ctx.r11.s64 = ctx.r9.s64 + 80;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// bgt cr6,0x821027b8
	if (ctx.cr6.gt) goto loc_821027B8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821027b8
	if (ctx.cr6.eq) goto loc_821027B8;
loc_821027F4:
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x821027d8
	if (!ctx.cr6.eq) goto loc_821027D8;
loc_82102800:
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// subfic r11,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r11.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f13,26544(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 26544);
	ctx.f13.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f12,26540(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 26540);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fmadds f1,f0,f13,f12
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82107380) {
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
	ctx.lr = 0x82107394;
	sub_82106650(ctx, base);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,9
	ctx.r11.s64 = 9;
	// addi r31,r10,22960
	r31.s64 = ctx.r10.s64 + 22960;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x82106c48
	ctx.lr = 0x821073B0;
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
	ctx.lr = 0x821073C4;
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

DEFINE_REX_FUNC(sub_82108AC8) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// bl 0x8245e260
	ctx.lr = 0x82108AE4;
	sub_8245E260(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82108b5c
	if (ctx.cr0.lt) goto loc_82108B5C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// ori r9,r11,3696
	ctx.r9.u64 = ctx.r11.u64 | 3696;
	// lis r8,-32170
	ctx.r8.s64 = -2108293120;
	// addi r11,r10,-7072
	ctx.r11.s64 = ctx.r10.s64 + -7072;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// addi r8,r8,23644
	ctx.r8.s64 = ctx.r8.s64 + 23644;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r7,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// beq 0x82108b5c
	if (ctx.cr0.eq) goto loc_82108B5C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82108b5c
	if (ctx.cr6.eq) goto loc_82108B5C;
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r6,r9,22960
	ctx.r6.s64 = ctx.r9.s64 + 22960;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// stw r7,288(r6)
	REX_STORE_U32(ctx.r6.u32 + 288, ctx.r7.u32);
	// stw r7,280(r6)
	REX_STORE_U32(ctx.r6.u32 + 280, ctx.r7.u32);
	// stw r7,564(r6)
	REX_STORE_U32(ctx.r6.u32 + 564, ctx.r7.u32);
	// stw r7,556(r6)
	REX_STORE_U32(ctx.r6.u32 + 556, ctx.r7.u32);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// stw r10,292(r6)
	REX_STORE_U32(ctx.r6.u32 + 292, ctx.r10.u32);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// stw r11,568(r6)
	REX_STORE_U32(ctx.r6.u32 + 568, ctx.r11.u32);
loc_82108B5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210E5E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 120);
	// lbz r10,124(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 124);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// mulli r8,r11,45
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(45));
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r9,r11,-19896
	ctx.r9.s64 = ctx.r11.s64 + -19896;
loc_8210E5FC:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r5,r11,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r3,r9,4
	ctx.r3.s64 = ctx.r9.s64 + 4;
	// subfe r7,r5,r7
	temp.u8 = (~ctx.r5.u32 + ctx.r7.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r5.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 & ctx.r11.u64;
	// add r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8210e5fc
	if (ctx.cr6.eq) goto loc_8210E5FC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210FE60) {
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
	ctx.lr = 0x8210FE68;
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// li r30,0
	r30.s64 = 0;
	// lwz r31,-32480(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,124(r31)
	REX_STORE_U32(r31.u32 + 124, r30.u32);
	// beq 0x8210feb4
	if (ctx.cr0.eq) goto loc_8210FEB4;
	// lha r10,88(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 88));
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// b 0x8210fec0
	goto loc_8210FEC0;
loc_8210FEB4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,120(r31)
	REX_STORE_U32(r31.u32 + 120, r30.u32);
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
loc_8210FEC0:
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// addi r8,r9,23881
	ctx.r8.s64 = ctx.r9.s64 + 23881;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r30,23881(r9)
	REX_STORE_U8(ctx.r9.u32 + 23881, r30.u8);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stb r30,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, r30.u8);
	// lis r29,-32170
	r29.s64 = -2108293120;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lfs f31,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// addi r8,r11,408
	ctx.r8.s64 = ctx.r11.s64 + 408;
	// lfs f1,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,-28236(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -28236);
	// bl 0x820f3460
	ctx.lr = 0x8210FF0C;
	sub_820F3460(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-28236(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -28236);
	// bl 0x820f2d80
	ctx.lr = 0x8210FF18;
	sub_820F2D80(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-28236(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -28236);
	// bl 0x82202540
	ctx.lr = 0x8210FF24;
	sub_82202540(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// lfs f30,28564(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28564);
	f30.f64 = double(temp.f32);
	// lwz r11,68(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 68);
	// lfs f29,28664(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28664);
	f29.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8210FF54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// lfs f3,28660(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28660);
	ctx.f3.f64 = double(temp.f32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8210FF78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r11,7840(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7840);
	// addi r10,r11,108
	ctx.r10.s64 = ctx.r11.s64 + 108;
	// stfs f31,108(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stfs f31,112(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f31,116(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f31,120(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// stfs f31,108(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stfs f31,112(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f31,116(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f31,120(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// stw r30,152(r31)
	REX_STORE_U32(r31.u32 + 152, r30.u32);
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

DEFINE_REX_FUNC(sub_82115480) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82115488;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lbz r10,94(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 94);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,528
	ctx.r11.s64 = ctx.r11.s64 + 528;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f12,31216(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 31216);
	ctx.f12.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lhz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stfs f12,200(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f11,2372(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2372);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,16316(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16316);
	ctx.f12.f64 = double(temp.f32);
	// ori r29,r10,64
	r29.u64 = ctx.r10.u64 | 64;
	// li r9,2
	ctx.r9.s64 = 2;
	// lfs f0,1992(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// li r8,8
	ctx.r8.s64 = 8;
	// lfs f13,1996(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// li r7,253
	ctx.r7.s64 = 253;
	// stfs f11,204(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 204, temp.u32);
	// li r30,0
	r30.s64 = 0;
	// stfs f12,156(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,132(r31)
	REX_STORE_U8(r31.u32 + 132, ctx.r11.u8);
	// li r6,40
	ctx.r6.s64 = 40;
	// stw r9,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r9.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stb r9,153(r31)
	REX_STORE_U8(r31.u32 + 153, ctx.r9.u8);
	// stb r8,134(r31)
	REX_STORE_U8(r31.u32 + 134, ctx.r8.u8);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// stb r7,133(r31)
	REX_STORE_U8(r31.u32 + 133, ctx.r7.u8);
	// stfs f13,196(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// stfs f0,208(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 208, temp.u32);
	// stw r30,172(r31)
	REX_STORE_U32(r31.u32 + 172, r30.u32);
	// stb r29,94(r31)
	REX_STORE_U8(r31.u32 + 94, r29.u8);
	// lfs f12,31212(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 31212);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,2000(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 2000);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,224(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 224, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f12,212(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 212, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f11,216(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 216, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f13,220(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 220, temp.u32);
	// stb r10,152(r31)
	REX_STORE_U8(r31.u32 + 152, ctx.r10.u8);
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// sth r6,42(r31)
	REX_STORE_U16(r31.u32 + 42, ctx.r6.u16);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// sth r5,40(r31)
	REX_STORE_U16(r31.u32 + 40, ctx.r5.u16);
	// addi r6,r11,31200
	ctx.r6.s64 = ctx.r11.s64 + 31200;
	// li r5,599
	ctx.r5.s64 = 599;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r31,80
	ctx.r11.s64 = r31.s64 + 80;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x821f7d50
	ctx.lr = 0x82115584;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821155c0
	if (ctx.cr0.eq) goto loc_821155C0;
	// lhz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 16);
	// li r10,-32768
	ctx.r10.s64 = -32768;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r31,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r31.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// addi r10,r8,31180
	ctx.r10.s64 = ctx.r8.s64 + 31180;
	// lfs f0,2384(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r10,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// sth r11,16(r3)
	REX_STORE_U16(ctx.r3.u32 + 16, ctx.r11.u16);
loc_821155C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82118E68) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e70
	ctx.lr = 0x82118E70;
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r22,r11,-7072
	r22.s64 = ctx.r11.s64 + -7072;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,28292(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 28292);
	f30.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,32280(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 32280);
	f31.f64 = double(temp.f32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r27,r22
	r27.u64 = r22.u64;
	// li r28,1
	r28.s64 = 1;
	// lis r29,-32170
	r29.s64 = -2108293120;
	// addi r31,r8,32220
	r31.s64 = ctx.r8.s64 + 32220;
	// addi r30,r9,32200
	r30.s64 = ctx.r9.s64 + 32200;
	// addi r25,r10,32268
	r25.s64 = ctx.r10.s64 + 32268;
	// addi r24,r11,32256
	r24.s64 = ctx.r11.s64 + 32256;
loc_82118EC8:
	// lhz r11,88(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 88);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bne cr6,0x82118f74
	if (!ctx.cr6.eq) goto loc_82118F74;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821188f0
	ctx.lr = 0x82118EE8;
	sub_821188F0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82118f3c
	if (ctx.cr6.lt) goto loc_82118F3C;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bgt cr6,0x82118f3c
	if (ctx.cr6.gt) goto loc_82118F3C;
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
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x821f7d50
	ctx.lr = 0x82118F1C;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82118f74
	if (ctx.cr0.eq) goto loc_82118F74;
	// lhz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 16);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r26,24040(r29)
	REX_STORE_U32(r29.u32 + 24040, r26.u32);
	// sth r11,16(r3)
	REX_STORE_U16(ctx.r3.u32 + 16, ctx.r11.u16);
	// b 0x82118f70
	goto loc_82118F70;
loc_82118F3C:
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
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
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x821f7d50
	ctx.lr = 0x82118F5C;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82118f74
	if (ctx.cr0.eq) goto loc_82118F74;
	// stw r27,192(r3)
	REX_STORE_U32(ctx.r3.u32 + 192, r27.u32);
	// stw r26,212(r3)
	REX_STORE_U32(ctx.r3.u32 + 212, r26.u32);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
loc_82118F70:
	// stw r28,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r28.u32);
loc_82118F74:
	// addis r11,r22,2
	ctx.r11.s64 = r22.s64 + 131072;
	// addis r27,r27,1
	r27.s64 = r27.s64 + 65536;
	// addi r11,r11,7392
	ctx.r11.s64 = ctx.r11.s64 + 7392;
	// addi r27,r27,3696
	r27.s64 = r27.s64 + 3696;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82118ec8
	if (ctx.cr6.lt) goto loc_82118EC8;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_8211D530) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,252(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r31,r3,136
	r31.s64 = ctx.r3.s64 + 136;
	// addi r8,r31,116
	ctx.r8.s64 = r31.s64 + 116;
	// lfs f30,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f30.f64 = double(temp.f32);
	// stfs f30,264(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// stw r10,364(r3)
	REX_STORE_U32(ctx.r3.u32 + 364, ctx.r10.u32);
	// lwz r11,256(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// lfs f31,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f31.f64 = double(temp.f32);
	// stw r11,368(r3)
	REX_STORE_U32(ctx.r3.u32 + 368, ctx.r11.u32);
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// stw r11,372(r3)
	REX_STORE_U32(ctx.r3.u32 + 372, ctx.r11.u32);
	// lwz r11,264(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 264);
	// stw r11,376(r3)
	REX_STORE_U32(ctx.r3.u32 + 376, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,248(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// lfs f0,280(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x8211d5a4
	if (!ctx.cr6.eq) goto loc_8211D5A4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8211D5A4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8211d620
	if (ctx.cr0.eq) goto loc_8211D620;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e01b0
	ctx.lr = 0x8211D5B4;
	sub_820E01B0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f2,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f2.f64 = double(temp.f32);
	// addi r30,r31,132
	r30.s64 = r31.s64 + 132;
	// lfs f1,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// bl 0x820e0ec8
	ctx.lr = 0x8211D5CC;
	sub_820E0EC8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,-30548(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30548);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x820e1ec0
	ctx.lr = 0x8211D5FC;
	sub_820E1EC0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r10.u32);
	// stw r9,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r9.u32);
	// stw r8,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r8.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
loc_8211D620:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

DEFINE_REX_FUNC(sub_82120DF0) {
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
	// bl 0x822d4e68
	ctx.lr = 0x82120DF8;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x822d4f24
	ctx.lr = 0x82120E00;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32165
	r29.s64 = -2107965440;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// li r27,0
	r27.s64 = 0;
	// addi r10,r11,30520
	ctx.r10.s64 = ctx.r11.s64 + 30520;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lwz r11,-32480(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -32480);
	// addi r28,r9,-8304
	r28.s64 = ctx.r9.s64 + -8304;
	// addi r31,r11,80
	r31.s64 = ctx.r11.s64 + 80;
	// addi r25,r31,12
	r25.s64 = r31.s64 + 12;
	// stb r27,203(r11)
	REX_STORE_U8(ctx.r11.u32 + 203, r27.u8);
	// lwz r11,52(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lhz r30,8(r31)
	r30.u64 = REX_LOAD_U16(r31.u32 + 8);
	// lwz r3,496(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 496);
	// mulli r4,r30,80
	ctx.r4.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(80));
	// bl 0x82190558
	ctx.lr = 0x82120E48;
	sub_82190558(ctx, base);
	// lwz r3,496(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 496);
	// addi r23,r31,160
	r23.s64 = r31.s64 + 160;
	// rotlwi r4,r30,4
	ctx.r4.u64 = __builtin_rotateleft32(r30.u32, 4);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// bl 0x82190558
	ctx.lr = 0x82120E5C;
	sub_82190558(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821210f8
	if (ctx.cr6.eq) goto loc_821210F8;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821210f8
	if (ctx.cr6.eq) goto loc_821210F8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x821210e4
	if (!ctx.cr6.gt) goto loc_821210E4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f26,16928(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16928);
	f26.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f24,16688(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16688);
	f24.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f25,16204(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16204);
	f25.f64 = double(temp.f32);
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lfs f27,2384(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2384);
	f27.f64 = double(temp.f32);
	// lfs f31,2000(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2000);
	f31.f64 = double(temp.f32);
	// mr r26,r27
	r26.u64 = r27.u64;
	// lfs f28,1980(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1980);
	f28.f64 = double(temp.f32);
	// addi r28,r31,32
	r28.s64 = r31.s64 + 32;
	// lfs f29,1992(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1992);
	f29.f64 = double(temp.f32);
	// addi r21,r31,48
	r21.s64 = r31.s64 + 48;
	// lfs f30,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f30.f64 = double(temp.f32);
	// mr r24,r30
	r24.u64 = r30.u64;
	// addi r22,r11,9600
	r22.s64 = ctx.r11.s64 + 9600;
loc_82120ED4:
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r9,r22,-8
	ctx.r9.s64 = r22.s64 + -8;
	// add r30,r27,r10
	r30.u64 = r27.u64 + ctx.r10.u64;
	// addi r10,r30,-8
	ctx.r10.s64 = r30.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82120EEC:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82120eec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82120EEC;
	// bl 0x821fec88
	ctx.lr = 0x82120EFC;
	sub_821FEC88(ctx, base);
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// stb r11,77(r30)
	REX_STORE_U8(r30.u32 + 77, ctx.r11.u8);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// add r29,r11,r26
	r29.u64 = ctx.r11.u64 + r26.u64;
	// bl 0x821fed88
	ctx.lr = 0x82120F10;
	sub_821FED88(ctx, base);
	// lha r11,118(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 118));
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
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,12(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 12, temp.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// stfs f30,16(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 16, temp.u32);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// stfs f30,20(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 20, temp.u32);
	// stfs f30,24(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 24, temp.u32);
	// stfs f30,28(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 28, temp.u32);
	// lfs f0,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// beq cr6,0x82120f84
	if (ctx.cr6.eq) goto loc_82120F84;
	// bl 0x821fedc8
	ctx.lr = 0x82120F70;
	sub_821FEDC8(ctx, base);
	// lfs f0,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f13,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x82120f88
	goto loc_82120F88;
loc_82120F84:
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
loc_82120F88:
	// stfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 48, temp.u32);
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 52, temp.u32);
	// lfs f0,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 68, temp.u32);
	// stfs f0,64(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 64, temp.u32);
	// lhz r20,8(r31)
	r20.u64 = REX_LOAD_U16(r31.u32 + 8);
	// bl 0x821fec88
	ctx.lr = 0x82120FA4;
	sub_821FEC88(ctx, base);
	// extsw r11,r20
	ctx.r11.s64 = r20.s32;
	// divwu r10,r3,r20
	ctx.r10.u64 = uint32_t(r20.u32 ? ctx.r3.u32 / r20.u32 : 0);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mullw r11,r10,r20
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(r20.s32);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// twllei r20,0
	if (r20.s32 == 0 || r20.u32 < 0u) ppc_trap(ctx, base, 0);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 * f28.f64));
	// fdivs f23,f13,f0
	f23.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmr f1,f23
	ctx.f1.f64 = f23.f64;
	// bl 0x820e0058
	ctx.lr = 0x82120FEC;
	sub_820E0058(ctx, base);
	// stfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmr f1,f23
	ctx.f1.f64 = f23.f64;
	// bl 0x820e0000
	ctx.lr = 0x82120FF8;
	sub_820E0000(ctx, base);
	// stfs f1,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f1,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1cf8
	ctx.lr = 0x82121010;
	sub_820E1CF8(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e1b70
	ctx.lr = 0x82121020;
	sub_820E1B70(ctx, base);
	// bl 0x821fedc8
	ctx.lr = 0x82121024;
	sub_821FEDC8(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f31.f64));
	// stfs f29,4(r29)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// bl 0x821fedc8
	ctx.lr = 0x82121038;
	sub_821FEDC8(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f31.f64));
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// bl 0x820e1b70
	ctx.lr = 0x82121054;
	sub_820E1B70(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e2290
	ctx.lr = 0x82121060;
	sub_820E2290(ctx, base);
	// bl 0x821fedc8
	ctx.lr = 0x82121064;
	sub_821FEDC8(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f31.f64));
	// lfs f13,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmadds f1,f0,f27,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, f27.f64, ctx.f13.f64)));
	// bl 0x820e1cf8
	ctx.lr = 0x8212107C;
	sub_820E1CF8(ctx, base);
	// lhz r11,142(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 142);
	// lfs f12,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f26
	ctx.f12.f64 = double(float(ctx.f12.f64 * f26.f64));
	// lfs f0,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f12,4(r29)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// bne 0x821210b8
	if (!ctx.cr0.eq) goto loc_821210B8;
	// li r11,5
	ctx.r11.s64 = 5;
	// fmuls f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 * f25.f64));
	// fmuls f13,f13,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 * f25.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// stfs f13,8(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// sth r11,118(r31)
	REX_STORE_U16(r31.u32 + 118, ctx.r11.u16);
	// b 0x821210c8
	goto loc_821210C8;
loc_821210B8:
	// fmuls f0,f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * f24.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// fmuls f13,f13,f24
	ctx.f13.f64 = double(float(ctx.f13.f64 * f24.f64));
	// stfs f13,8(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
loc_821210C8:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// stfs f29,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// addi r27,r27,80
	r27.s64 = r27.s64 + 80;
	// addi r26,r26,16
	r26.s64 = r26.s64 + 16;
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
	// bne 0x82120ed4
	if (!ctx.cr0.eq) goto loc_82120ED4;
loc_821210E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,123(r31)
	REX_STORE_U8(r31.u32 + 123, ctx.r11.u8);
	// sth r10,142(r31)
	REX_STORE_U16(r31.u32 + 142, ctx.r10.u16);
	// b 0x82121108
	goto loc_82121108;
loc_821210F8:
	// stb r27,123(r31)
	REX_STORE_U8(r31.u32 + 123, r27.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-32480(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -32480);
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
loc_82121108:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x822d4f70
	ctx.lr = 0x82121114;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_8212C9A0) {
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
	ctx.lr = 0x8212C9A8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,300(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 300);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212cb24
	if (ctx.cr6.eq) goto loc_8212CB24;
	// lwz r11,288(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 288);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8212cb24
	if (!ctx.cr6.lt) goto loc_8212CB24;
	// lwz r11,292(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 292);
	// rlwinm r30,r5,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lha r31,4(r11)
	r31.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 4));
	// cmpwi r31,0
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8212cb24
	if (ctx.cr0.eq) goto loc_8212CB24;
	// cmpwi cr6,r6,-2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -2, ctx.xer);
	// beq cr6,0x8212ca50
	if (ctx.cr6.eq) goto loc_8212CA50;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x8212ca64
	if (!ctx.cr6.eq) goto loc_8212CA64;
	// lwz r11,292(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 292);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lha r10,2(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 2));
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r10,292(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 292);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// divw r8,r9,r31
	ctx.r8.u64 = uint32_t((r31.s32 && !(ctx.r9.s32 == INT32_MIN && r31.s32 == -1)) ? ctx.r9.s32 / r31.s32 : 0);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r8,r8,r31
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r31.s32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// andc r11,r31,r11
	ctx.r11.u64 = r31.u64 & ~ctx.r11.u64;
	// sth r9,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// b 0x8212ca60
	goto loc_8212CA60;
loc_8212CA50:
	// bl 0x821fec88
	ctx.lr = 0x8212CA54;
	sub_821FEC88(ctx, base);
	// divwu r11,r3,r31
	ctx.r11.u64 = uint32_t(r31.u32 ? ctx.r3.u32 / r31.u32 : 0);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// subf r27,r11,r3
	r27.u64 = ctx.r3.u64 - ctx.r11.u64;
loc_8212CA60:
	// twllei r31,0
	if (r31.s32 == 0 || r31.u32 < 0u) ppc_trap(ctx, base, 0);
loc_8212CA64:
	// lwz r11,292(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 292);
	// li r26,0
	r26.s64 = 0;
	// lwz r10,296(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 296);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lhax r11,r11,r30
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + r30.u32));
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// mulli r11,r11,132
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(132));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x8212cac8
	if (ctx.cr6.eq) goto loc_8212CAC8;
	// lhz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x8212cac8
	if (ctx.cr6.eq) goto loc_8212CAC8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8212CA9C:
	// lhz r8,6(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// rlwinm. r8,r8,0,17,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8212cac4
	if (ctx.cr0.eq) goto loc_8212CAC4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// cmplwi cr6,r8,65535
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 65535, ctx.xer);
	// bne cr6,0x8212ca9c
	if (!ctx.cr6.eq) goto loc_8212CA9C;
	// b 0x8212cac8
	goto loc_8212CAC8;
loc_8212CAC4:
	// lha r26,4(r10)
	r26.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 4));
loc_8212CAC8:
	// li r30,0
	r30.s64 = 0;
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
loc_8212CAD0:
	// lha r28,0(r31)
	r28.s64 = int16_t(REX_LOAD_U16(r31.u32 + 0));
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(r28.s32, -1, ctx.xer);
	// beq cr6,0x8212cb1c
	if (ctx.cr6.eq) goto loc_8212CB1C;
	// subf r11,r26,r28
	ctx.r11.u64 = r28.u64 - r26.u64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
	// bge 0x8212caf4
	if (!ctx.cr0.lt) goto loc_8212CAF4;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
loc_8212CAF4:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8212a760
	ctx.lr = 0x8212CB04;
	sub_8212A760(ctx, base);
	// extsh r11,r28
	ctx.r11.s64 = r28.s16;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(r30.s32, 16, ctx.xer);
	// blt cr6,0x8212cad0
	if (ctx.cr6.lt) goto loc_8212CAD0;
loc_8212CB1C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x8212cb28
	goto loc_8212CB28;
loc_8212CB24:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8212CB28:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82132EF8) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// addi r10,r10,22984
	ctx.r10.s64 = ctx.r10.s64 + 22984;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r7.u32);
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,8192
	ctx.r3.s64 = 536870912;
	// lbzx r10,r4,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// lis r6,16384
	ctx.r6.s64 = 1073741824;
	// lis r7,4096
	ctx.r7.s64 = 268435456;
	// stw r3,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r3.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r6,-28(r1)
	REX_STORE_U32(ctx.r1.u32 + -28, ctx.r6.u32);
	// lis r4,-4096
	ctx.r4.s64 = -268435456;
	// stw r7,-20(r1)
	REX_STORE_U32(ctx.r1.u32 + -20, ctx.r7.u32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r4,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// and. r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82132f5c
	if (ctx.cr0.eq) goto loc_82132F5C;
	// li r3,2
	ctx.r3.s64 = 2;
loc_82132F5C:
	// addi r10,r10,58
	ctx.r10.s64 = ctx.r10.s64 + 58;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82134100) {
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
	ctx.lr = 0x82134114;
	sub_82133B28(ctx, base);
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8213415c
	if (!ctx.cr6.lt) goto loc_8213415C;
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
	// lbz r11,23(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 23);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// b 0x82134160
	goto loc_82134160;
loc_8213415C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82134160:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82135998) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,23912
	ctx.r11.s64 = ctx.r11.s64 + 23912;
	// lwz r3,48(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82135D18) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r3,r11,23912
	ctx.r3.s64 = ctx.r11.s64 + 23912;
	// b 0x82130370
	sub_82130370(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82135FB8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r11,r11,23912
	ctx.r11.s64 = ctx.r11.s64 + 23912;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// beq cr6,0x82135ff0
	if (ctx.cr6.eq) goto loc_82135FF0;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lwz r5,32(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,28(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mulli r11,r10,324
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(324));
	// addi r9,r9,22000
	ctx.r9.s64 = ctx.r9.s64 + 22000;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82133f00
	sub_82133F00(ctx, base);
	return;
loc_82135FF0:
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lwz r5,24(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mulli r11,r10,88
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(88));
	// addi r9,r9,21824
	ctx.r9.s64 = ctx.r9.s64 + 21824;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82133330
	sub_82133330(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82138E60) {
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
	ctx.lr = 0x82138E68;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x822d4f30
	ctx.lr = 0x82138E70;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// fmr f28,f2
	f28.f64 = ctx.f2.f64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// fmr f26,f3
	f26.f64 = ctx.f3.f64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// fmr f27,f4
	f27.f64 = ctx.f4.f64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82138eac
	if (ctx.cr6.eq) goto loc_82138EAC;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// b 0x82138eb4
	goto loc_82138EB4;
loc_82138EAC:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r25,r11,23800
	r25.s64 = ctx.r11.s64 + 23800;
loc_82138EB4:
	// lwz r6,340(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82138ec8
	if (!ctx.cr6.eq) goto loc_82138EC8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r11,-24708
	ctx.r6.s64 = ctx.r11.s64 + -24708;
loc_82138EC8:
	// lwz r3,356(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82138edc
	if (!ctx.cr6.eq) goto loc_82138EDC;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
loc_82138EDC:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-29824
	ctx.r8.s64 = ctx.r11.s64 + -29824;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821366d8
	ctx.lr = 0x82138EF8;
	sub_821366D8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x821390c4
	if (ctx.cr0.eq) goto loc_821390C4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r22,68(r28)
	REX_STORE_U32(r28.u32 + 68, r22.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r31,r28,80
	r31.s64 = r28.s64 + 80;
	// li r29,1
	r29.s64 = 1;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r30,0
	r30.s64 = 0;
	// sth r29,18(r28)
	REX_STORE_U16(r28.u32 + 18, r29.u16);
	// addi r11,r31,32
	ctx.r11.s64 = r31.s64 + 32;
	// lfs f31,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f31.f64 = double(temp.f32);
	// extsw r8,r23
	ctx.r8.s64 = r23.s32;
	// lfs f30,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f30.f64 = double(temp.f32);
	// li r24,-1
	r24.s64 = -1;
	// stfs f29,112(r28)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r28.u32 + 112, temp.u32);
	// stfs f28,116(r28)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r28.u32 + 116, temp.u32);
	// std r8,80(r28)
	REX_STORE_U64(r28.u32 + 80, ctx.r8.u64);
	// stfs f27,120(r28)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r28.u32 + 120, temp.u32);
	// sth r29,88(r28)
	REX_STORE_U16(r28.u32 + 88, r29.u16);
	// stfs f30,124(r28)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r28.u32 + 124, temp.u32);
	// stb r29,90(r28)
	REX_STORE_U8(r28.u32 + 90, r29.u8);
	// stfs f31,128(r28)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 128, temp.u32);
	// stb r30,91(r28)
	REX_STORE_U8(r28.u32 + 91, r30.u8);
	// stfs f31,132(r28)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 132, temp.u32);
	// stw r11,92(r28)
	REX_STORE_U32(r28.u32 + 92, ctx.r11.u32);
	// stfs f31,136(r28)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 136, temp.u32);
	// stw r25,96(r28)
	REX_STORE_U32(r28.u32 + 96, r25.u32);
	// stfs f31,140(r28)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 140, temp.u32);
	// stw r27,100(r28)
	REX_STORE_U32(r28.u32 + 100, r27.u32);
	// stb r26,104(r28)
	REX_STORE_U8(r28.u32 + 104, r26.u8);
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r29,105(r28)
	REX_STORE_U8(r28.u32 + 105, r29.u8);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// stb r7,106(r28)
	REX_STORE_U8(r28.u32 + 106, ctx.r7.u8);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stb r30,107(r28)
	REX_STORE_U8(r28.u32 + 107, r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,108(r28)
	REX_STORE_U8(r28.u32 + 108, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r29,109(r28)
	REX_STORE_U8(r28.u32 + 109, r29.u8);
	// stb r30,110(r28)
	REX_STORE_U8(r28.u32 + 110, r30.u8);
	// stb r30,111(r28)
	REX_STORE_U8(r28.u32 + 111, r30.u8);
	// stw r24,144(r28)
	REX_STORE_U32(r28.u32 + 144, r24.u32);
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x820e72c8
	ctx.lr = 0x82138FB4;
	sub_820E72C8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-24712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24712);
	ctx.f13.f64 = double(temp.f32);
	// lwa r11,88(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 88));
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82138fe4
	if (!ctx.cr6.gt) goto loc_82138FE4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-24716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24716);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
loc_82138FE4:
	// lbz r11,375(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 375);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwa r11,80(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 80));
	// beq 0x8213900c
	if (ctx.cr0.eq) goto loc_8213900C;
	// stfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// b 0x82139030
	goto loc_82139030;
loc_8213900C:
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfs f13,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// fmuls f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
loc_82139030:
	// stfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// sth r30,104(r31)
	REX_STORE_U16(r31.u32 + 104, r30.u16);
	// stfs f30,88(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// fcmpu cr6,f26,f30
	ctx.cr6.compare(f26.f64, f30.f64);
	// stfs f31,92(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// stb r30,106(r31)
	REX_STORE_U8(r31.u32 + 106, r30.u8);
	// stfs f26,96(r31)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// stb r29,108(r31)
	REX_STORE_U8(r31.u32 + 108, r29.u8);
	// stfs f26,100(r31)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// stb r30,109(r31)
	REX_STORE_U8(r31.u32 + 109, r30.u8);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// beq cr6,0x82139064
	if (ctx.cr6.eq) goto loc_82139064;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82139064:
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// lwz r8,348(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// stb r11,107(r31)
	REX_STORE_U8(r31.u32 + 107, ctx.r11.u8);
	// lis r11,-8531
	ctx.r11.s64 = -559087616;
	// addi r9,r9,13128
	ctx.r9.s64 = ctx.r9.s64 + 13128;
	// lwz r10,332(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// stw r30,180(r31)
	REX_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r8,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r8.u32);
	// ori r8,r11,43690
	ctx.r8.u64 = ctx.r11.u64 | 43690;
	// lwz r11,1856(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 1856);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r30,196(r31)
	REX_STORE_U32(r31.u32 + 196, r30.u32);
	// stw r30,204(r31)
	REX_STORE_U32(r31.u32 + 204, r30.u32);
	// stw r11,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x821390c4
	if (!ctx.cr6.eq) goto loc_821390C4;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r26,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r26,27
	ctx.r9.u64 = r26.u32 & 0x1F;
	// slw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_821390C4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x822d4f7c
	ctx.lr = 0x821390D4;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_8214AC38) {
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
	ctx.lr = 0x8214AC40;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,48
	ctx.r4.s64 = ctx.r3.s64 + 48;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x820e0af8
	ctx.lr = 0x8214AC5C;
	sub_820E0AF8(ctx, base);
	// lha r11,88(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 88));
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x820e0590
	ctx.lr = 0x8214AC74;
	sub_820E0590(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e0250
	ctx.lr = 0x8214AC80;
	sub_820E0250(ctx, base);
	// lha r11,90(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 90));
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x820e0590
	ctx.lr = 0x8214AC98;
	sub_820E0590(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f31,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x820e1528
	ctx.lr = 0x8214ACC4;
	sub_820E1528(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f1,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1890
	ctx.lr = 0x8214ACD8;
	sub_820E1890(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e0af8
	ctx.lr = 0x8214ACE4;
	sub_820E0AF8(ctx, base);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e1028
	ctx.lr = 0x8214ACF8;
	sub_820E1028(ctx, base);
	// addi r4,r31,64
	ctx.r4.s64 = r31.s64 + 64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x820e0af8
	ctx.lr = 0x8214AD04;
	sub_820E0AF8(ctx, base);
	// lha r11,94(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 94));
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x820e0590
	ctx.lr = 0x8214AD1C;
	sub_820E0590(ctx, base);
	// lha r11,92(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 92));
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x8214a748
	ctx.lr = 0x8214AD30;
	sub_8214A748(ctx, base);
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lha r11,20(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 20));
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lfs f3,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// add r30,r11,r29
	r30.u64 = ctx.r11.u64 + r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e0ec8
	ctx.lr = 0x8214AD5C;
	sub_820E0EC8(ctx, base);
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x820e0af8
	ctx.lr = 0x8214AD68;
	sub_820E0AF8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e0590
	ctx.lr = 0x8214AD78;
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
	// lfs f0,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 52, temp.u32);
	// lfs f0,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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
	ctx.lr = 0x8214ADAC;
	sub_820E0368(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82151AE0) {
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
	// lwz r11,208(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82151be8
	if (ctx.cr6.lt) goto loc_82151BE8;
	// beq cr6,0x82151bcc
	if (ctx.cr6.eq) goto loc_82151BCC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82151c9c
	if (!ctx.cr6.lt) goto loc_82151C9C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,216(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82151b28
	if (ctx.cr6.gt) goto loc_82151B28;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82151B28:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820e0028
	ctx.lr = 0x82151B38;
	sub_820E0028(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,200(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 200);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,-23600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23600);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bne cr6,0x82151b60
	if (!ctx.cr6.eq) goto loc_82151B60;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16200(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16200);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82151b78
	goto loc_82151B78;
loc_82151B60:
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
loc_82151B78:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lfs f12,216(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,31840(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 31840);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1840(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f13,f0,f13,f12
	ctx.f13.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f13.f64, -ctx.f12.f64)));
	// lfs f0,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,216(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 216, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82151bc4
	if (ctx.cr6.gt) goto loc_82151BC4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,216(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 216, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r11.u32);
	// stb r10,188(r31)
	REX_STORE_U8(r31.u32 + 188, ctx.r10.u8);
	// b 0x82151c9c
	goto loc_82151C9C;
loc_82151BC4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82151c98
	goto loc_82151C98;
loc_82151BCC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,216(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82151bc4
	if (ctx.cr6.gt) goto loc_82151BC4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82151c98
	goto loc_82151C98;
loc_82151BE8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,216(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// ble cr6,0x82151c00
	if (!ctx.cr6.gt) goto loc_82151C00;
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
loc_82151C00:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820e0028
	ctx.lr = 0x82151C10;
	sub_820E0028(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,200(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 200);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,-23600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23600);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bne cr6,0x82151c3c
	if (!ctx.cr6.eq) goto loc_82151C3C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16200(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16200);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// b 0x82151c60
	goto loc_82151C60;
loc_82151C3C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,16036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16036);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,16200(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16200);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2008(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2008);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_82151C60:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lfs f12,216(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// addi r9,r11,13128
	ctx.r9.s64 = ctx.r11.s64 + 13128;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,31840(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 31840);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1840(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfs f0,216(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 216, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82151c98
	if (ctx.cr6.lt) goto loc_82151C98;
	// stfs f31,216(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 216, temp.u32);
	// stw r11,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r11.u32);
loc_82151C98:
	// stb r11,188(r31)
	REX_STORE_U8(r31.u32 + 188, ctx.r11.u8);
loc_82151C9C:
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

DEFINE_REX_FUNC(sub_8215D840) {
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
loc_8215D85C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c7f28
	ctx.lr = 0x8215D86C;
	sub_821C7F28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215d890
	if (ctx.cr0.eq) goto loc_8215D890;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dd228
	ctx.lr = 0x8215D87C;
	sub_821DD228(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8215d8b8
	if (ctx.cr6.eq) goto loc_8215D8B8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8215d890
	if (!ctx.cr6.eq) goto loc_8215D890;
	// li r30,2
	r30.s64 = 2;
loc_8215D890:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,33
	ctx.cr6.compare<int32_t>(r31.s32, 33, ctx.xer);
	// blt cr6,0x8215d85c
	if (ctx.cr6.lt) goto loc_8215D85C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8215D8A0:
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
loc_8215D8B8:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8215d8a0
	goto loc_8215D8A0;
}

DEFINE_REX_FUNC(sub_821610F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x820e0810
	ctx.lr = 0x82161120;
	sub_820E0810(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x820e0778
	ctx.lr = 0x8216112C;
	sub_820E0778(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x820e06e0
	ctx.lr = 0x82161138;
	sub_820E06E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x820e0590
	ctx.lr = 0x82161148;
	sub_820E0590(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e0590
	ctx.lr = 0x82161158;
	sub_820E0590(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

DEFINE_REX_FUNC(sub_82163EC0) {
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
	ctx.lr = 0x82163EC8;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x822d4f1c
	ctx.lr = 0x82163ED0;
	// stwu r1,-992(r1)
	ea = -992 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,3404(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 3404);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lfs f23,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f23.f64 = double(temp.f32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f21,17064(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 17064);
	f21.f64 = double(temp.f32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f22,2012(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2012);
	f22.f64 = double(temp.f32);
	// lfs f30,1996(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	f30.f64 = double(temp.f32);
	// beq 0x821643d8
	if (ctx.cr0.eq) goto loc_821643D8;
	// lfs f0,3408(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 3408);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// blt cr6,0x82163f30
	if (ctx.cr6.lt) goto loc_82163F30;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r4,-12
	ctx.r11.s64 = ctx.r4.s64 + -12;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82163F20:
	// lfs f13,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfsu f13,64(r11)
	ea = 64 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82163f20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82163F20;
loc_82163F30:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r24,3308
	r29.s64 = r24.s64 + 3308;
	// lfs f28,-11680(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -11680);
	f28.f64 = double(temp.f32);
	// addi r27,r24,3284
	r27.s64 = r24.s64 + 3284;
	// lfs f29,-11684(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -11684);
	f29.f64 = double(temp.f32);
	// addi r26,r24,3380
	r26.s64 = r24.s64 + 3380;
	// lfs f31,-11776(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -11776);
	f31.f64 = double(temp.f32);
	// li r28,0
	r28.s64 = 0;
	// addi r31,r24,3216
	r31.s64 = r24.s64 + 3216;
	// addi r25,r11,-11992
	r25.s64 = ctx.r11.s64 + -11992;
loc_82163F64:
	// lbzx r11,r28,r25
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + r25.u32);
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// beq cr6,0x82164054
	if (ctx.cr6.eq) goto loc_82164054;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bne cr6,0x8216412c
	if (!ctx.cr6.eq) goto loc_8216412C;
	// lwz r11,3412(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82163f94
	if (ctx.cr6.eq) goto loc_82163F94;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8216412c
	if (!ctx.cr6.gt) goto loc_8216412C;
loc_82163F94:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f21
	ctx.f0.f64 = double(float(ctx.f0.f64 * f21.f64));
	// lfs f12,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f22,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, f22.f64, ctx.f0.f64)));
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// bge cr6,0x8216403c
	if (!ctx.cr6.lt) goto loc_8216403C;
	// lfs f0,3360(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 3360);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8216402c
	if (!ctx.cr6.lt) goto loc_8216402C;
	// lfs f0,1264(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1264);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// lfs f13,1268(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1268);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lfs f12,1272(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1272);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1392(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1392);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1396(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1396);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,1400(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1400);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,416(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// stfs f23,428(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 428, temp.u32);
	// stfs f13,420(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// stfs f23,412(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 412, temp.u32);
	// stfs f12,424(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// stfs f11,400(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// stfs f10,404(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// stfs f9,408(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// bl 0x820e2320
	ctx.lr = 0x82164008;
	sub_820E2320(ctx, base);
	// lfs f0,148(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// blt cr6,0x8216401c
	if (ctx.cr6.lt) goto loc_8216401C;
	// fmuls f0,f1,f29
	ctx.f0.f64 = double(float(ctx.f1.f64 * f29.f64));
	// b 0x82164020
	goto loc_82164020;
loc_8216401C:
	// fmuls f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f28.f64));
loc_82164020:
	// lfs f13,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x82164030
	goto loc_82164030;
loc_8216402C:
	// lfs f0,3288(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 3288);
	ctx.f0.f64 = double(temp.f32);
loc_82164030:
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f21
	ctx.f13.f64 = double(float(ctx.f13.f64 * f21.f64));
	// fmadds f0,f0,f22,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f22.f64, ctx.f13.f64)));
loc_8216403C:
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f13,3196(r24)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r24.u32 + 3196, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f23,3208(r24)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(r24.u32 + 3208, temp.u32);
	// b 0x8216412c
	goto loc_8216412C;
loc_82164054:
	// lwz r11,3412(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 3412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82164070
	if (ctx.cr6.eq) goto loc_82164070;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8216412c
	if (!ctx.cr6.gt) goto loc_8216412C;
loc_82164070:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f21
	ctx.f0.f64 = double(float(ctx.f0.f64 * f21.f64));
	// lfs f12,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f22,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, f22.f64, ctx.f0.f64)));
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// bge cr6,0x82164118
	if (!ctx.cr6.lt) goto loc_82164118;
	// lfs f0,3336(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 3336);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82164108
	if (!ctx.cr6.lt) goto loc_82164108;
	// lfs f0,1008(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1008);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// lfs f13,1012(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1012);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// lfs f12,1016(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1016);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1136(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1136);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1140(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1140);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,1144(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1144);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,432(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// stfs f23,444(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 444, temp.u32);
	// stfs f13,436(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// stfs f23,396(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// stfs f12,440(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// stfs f11,384(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// stfs f10,388(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// stfs f9,392(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// bl 0x820e2320
	ctx.lr = 0x821640E4;
	sub_820E2320(ctx, base);
	// lfs f0,148(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// blt cr6,0x821640f8
	if (ctx.cr6.lt) goto loc_821640F8;
	// fmuls f0,f1,f29
	ctx.f0.f64 = double(float(ctx.f1.f64 * f29.f64));
	// b 0x821640fc
	goto loc_821640FC;
loc_821640F8:
	// fmuls f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f28.f64));
loc_821640FC:
	// lfs f13,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x8216410c
	goto loc_8216410C;
loc_82164108:
	// lfs f0,3288(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 3288);
	ctx.f0.f64 = double(temp.f32);
loc_8216410C:
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f21
	ctx.f13.f64 = double(float(ctx.f13.f64 * f21.f64));
	// fmadds f0,f0,f22,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f22.f64, ctx.f13.f64)));
loc_82164118:
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f13,3164(r24)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r24.u32 + 3164, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f23,3176(r24)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(r24.u32 + 3176, temp.u32);
loc_8216412C:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(r28.s32, 8, ctx.xer);
	// blt cr6,0x82163f64
	if (ctx.cr6.lt) goto loc_82163F64;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821643b0
	if (ctx.cr6.eq) goto loc_821643B0;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821643b0
	if (ctx.cr6.eq) goto loc_821643B0;
	// lfs f0,3216(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 3216);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// bge cr6,0x82164198
	if (!ctx.cr6.lt) goto loc_82164198;
	// lfs f13,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// bge cr6,0x8216418c
	if (!ctx.cr6.lt) goto loc_8216418C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16272(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16272);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// b 0x82164198
	goto loc_82164198;
loc_8216418C:
	// stfs f13,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// lfs f0,20(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 20, temp.u32);
loc_82164198:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f30,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f30,148(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stfs f23,156(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r4,r30,320
	ctx.r4.s64 = r30.s64 + 320;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f0,32172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x820e1df8
	ctx.lr = 0x821641C0;
	sub_820E1DF8(ctx, base);
	// lfs f0,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// lfs f12,120(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f23,236(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f13,228(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f12,232(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// bl 0x820e1ba8
	ctx.lr = 0x821641EC;
	sub_820E1BA8(ctx, base);
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f22
	ctx.f0.f64 = double(float(ctx.f0.f64 * f22.f64));
	// lfs f13,20(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f11,228(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lfs f10,176(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f9,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f9.f64 = double(temp.f32);
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f9,152(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmadds f0,f13,f21,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f21.f64, ctx.f0.f64)));
	// stfs f0,20(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 20, temp.u32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x820e1730
	ctx.lr = 0x82164234;
	sub_820E1730(ctx, base);
	// lfs f0,148(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// lfs f12,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// blt cr6,0x82164254
	if (ctx.cr6.lt) goto loc_82164254;
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f11,f30
	ctx.cr6.compare(ctx.f11.f64, f30.f64);
	// bge cr6,0x82164268
	if (!ctx.cr6.lt) goto loc_82164268;
loc_82164254:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x821642a4
	if (!ctx.cr6.lt) goto loc_821642A4;
	// fsubs f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x821642a4
	if (!ctx.cr6.lt) goto loc_821642A4;
loc_82164268:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-11688(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11688);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821642fc
	if (!ctx.cr6.lt) goto loc_821642FC;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820e1c50
	ctx.lr = 0x82164290;
	sub_820E1C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x820e2290
	ctx.lr = 0x82164298;
	sub_820E2290(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-11692(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11692);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821642dc
	goto loc_821642DC;
loc_821642A4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-11696(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11696);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821642fc
	if (!ctx.cr6.lt) goto loc_821642FC;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820e1c50
	ctx.lr = 0x821642CC;
	sub_820E1C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x820e2290
	ctx.lr = 0x821642D4;
	sub_820E2290(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-11700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11700);
	ctx.f1.f64 = double(temp.f32);
loc_821642DC:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x820e1cc0
	ctx.lr = 0x821642E4;
	sub_820E1CC0(ctx, base);
	// lfs f12,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_821642FC:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x820e0af8
	ctx.lr = 0x82164308;
	sub_820E0AF8(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x820e1ec0
	ctx.lr = 0x82164318;
	sub_820E1EC0(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x820e1ba8
	ctx.lr = 0x82164328;
	sub_820E1BA8(ctx, base);
	// lfs f0,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r30,128
	r31.s64 = r30.s64 + 128;
	// lfs f12,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// li r29,12
	r29.s64 = 12;
	// stfs f23,620(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 620, temp.u32);
	// stfs f0,608(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 608, temp.u32);
	// stfs f13,612(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 612, temp.u32);
	// stfs f12,616(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 616, temp.u32);
loc_8216434C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e0368
	ctx.lr = 0x8216435C;
	sub_820E0368(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// bne 0x8216434c
	if (!ctx.cr0.eq) goto loc_8216434C;
	// li r31,23
	r31.s64 = 23;
	// addi r28,r24,2869
	r28.s64 = r24.s64 + 2869;
	// addi r29,r30,1472
	r29.s64 = r30.s64 + 1472;
loc_82164374:
	// lbzx r11,r28,r31
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + r31.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8216439c
	if (ctx.cr6.lt) goto loc_8216439C;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bge cr6,0x8216439c
	if (!ctx.cr6.lt) goto loc_8216439C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e0368
	ctx.lr = 0x8216439C;
	sub_820E0368(ctx, base);
loc_8216439C:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,64
	r29.s64 = r29.s64 + 64;
	// cmpwi cr6,r31,31
	ctx.cr6.compare<int32_t>(r31.s32, 31, ctx.xer);
	// ble cr6,0x82164374
	if (!ctx.cr6.gt) goto loc_82164374;
	// b 0x821643d8
	goto loc_821643D8;
loc_821643B0:
	// lfs f0,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f21
	ctx.f0.f64 = double(float(ctx.f0.f64 * f21.f64));
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f22,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f22.f64, ctx.f0.f64)));
	// stfs f0,20(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 20, temp.u32);
	// lfs f0,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f21
	ctx.f13.f64 = double(float(ctx.f13.f64 * f21.f64));
	// fmadds f0,f0,f22,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f22.f64, ctx.f13.f64)));
	// stfs f0,20(r26)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r26.u32 + 20, temp.u32);
loc_821643D8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r25,r30,1472
	r25.s64 = r30.s64 + 1472;
	// li r29,9
	r29.s64 = 9;
	// mr r31,r25
	r31.u64 = r25.u64;
	// lfs f31,2020(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2020);
	f31.f64 = double(temp.f32);
loc_821643EC:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,528(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 528, temp.u32);
	// stfs f13,532(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 532, temp.u32);
	// stfs f12,536(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 536, temp.u32);
	// bl 0x820e2128
	ctx.lr = 0x8216440C;
	sub_820E2128(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// blt cr6,0x82164430
	if (ctx.cr6.lt) goto loc_82164430;
	// fsqrts f0,f1
	ctx.f0.f64 = double(float(sqrt(ctx.f1.f64)));
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fdivs f1,f23,f0
	ctx.f1.f64 = double(float(f23.f64 / ctx.f0.f64));
	// fmr f3,f1
	ctx.f3.f64 = ctx.f1.f64;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bl 0x820e0d78
	ctx.lr = 0x82164430;
	sub_820E0D78(ctx, base);
loc_82164430:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// bne 0x821643ec
	if (!ctx.cr0.eq) goto loc_821643EC;
	// addi r31,r30,1984
	r31.s64 = r30.s64 + 1984;
	// li r29,31
	r29.s64 = 31;
	// addi r26,r24,2869
	r26.s64 = r24.s64 + 2869;
loc_82164448:
	// lbzx r11,r26,r29
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + r29.u32);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82164474
	if (ctx.cr0.lt) goto loc_82164474;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x820e02d8
	ctx.lr = 0x82164464;
	sub_820E02D8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e0368
	ctx.lr = 0x82164474;
	sub_820E0368(ctx, base);
loc_82164474:
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// addi r31,r31,-64
	r31.s64 = r31.s64 + -64;
	// cmpwi cr6,r29,23
	ctx.cr6.compare<int32_t>(r29.s32, 23, ctx.xer);
	// bge cr6,0x82164448
	if (!ctx.cr6.lt) goto loc_82164448;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x820e02d8
	ctx.lr = 0x82164490;
	sub_820E02D8(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// addi r31,r11,24400
	r31.s64 = ctx.r11.s64 + 24400;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x821644A8;
	sub_822D4FA0(ctx, base);
	// addi r29,r30,64
	r29.s64 = r30.s64 + 64;
	// li r27,23
	r27.s64 = 23;
	// mr r28,r29
	r28.u64 = r29.u64;
loc_821644B4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x820e0368
	ctx.lr = 0x821644C4;
	sub_820E0368(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r28,r28,64
	r28.s64 = r28.s64 + 64;
	// bne 0x821644b4
	if (!ctx.cr0.eq) goto loc_821644B4;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r24,2952
	ctx.r10.s64 = r24.s64 + 2952;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821644DC:
	// stfsu f30,32(r10)
	ctx.fpscr.disableFlushMode();
	ea = 32 + ctx.r10.u32;
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821644dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821644DC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x821639c8
	ctx.lr = 0x821644F0;
	sub_821639C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82164500;
	sub_822D4FA0(ctx, base);
	// li r28,23
	r28.s64 = 23;
loc_82164504:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e0368
	ctx.lr = 0x82164514;
	sub_820E0368(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,64
	r29.s64 = r29.s64 + 64;
	// bne 0x82164504
	if (!ctx.cr0.eq) goto loc_82164504;
	// mr r31,r25
	r31.u64 = r25.u64;
	// li r29,23
	r29.s64 = 23;
loc_82164528:
	// lbzx r11,r26,r29
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + r29.u32);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82164548
	if (ctx.cr0.lt) goto loc_82164548;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e0368
	ctx.lr = 0x82164548;
	sub_820E0368(ctx, base);
loc_82164548:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// cmpwi cr6,r29,31
	ctx.cr6.compare<int32_t>(r29.s32, 31, ctx.xer);
	// ble cr6,0x82164528
	if (!ctx.cr6.gt) goto loc_82164528;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,964(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 964);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f30,248(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,-11792(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11792);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f28,-11796(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -11796);
	f28.f64 = double(temp.f32);
	// lfs f0,-11704(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -11704);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmuls f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 * f28.f64));
	// addi r29,r30,1088
	r29.s64 = r30.s64 + 1088;
	// lfs f25,2004(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2004);
	f25.f64 = double(temp.f32);
	// lfs f31,-11708(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11708);
	f31.f64 = double(temp.f32);
	// addi r28,r30,1024
	r28.s64 = r30.s64 + 1024;
	// lfs f26,16588(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16588);
	f26.f64 = double(temp.f32);
	// mr r31,r29
	r31.u64 = r29.u64;
	// lfs f29,-11712(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -11712);
	f29.f64 = double(temp.f32);
	// addi r25,r30,1344
	r25.s64 = r30.s64 + 1344;
	// lfs f27,-11716(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -11716);
	f27.f64 = double(temp.f32);
	// addi r23,r30,1280
	r23.s64 = r30.s64 + 1280;
	// stfs f11,240(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// addi r27,r24,3420
	r27.s64 = r24.s64 + 3420;
	// stfs f13,244(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// li r26,2
	r26.s64 = 2;
	// fmuls f24,f12,f0
	f24.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
loc_821645D4:
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x820e1df8
	ctx.lr = 0x821645E4;
	sub_820E1DF8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f2,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lfs f1,208(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82125860
	ctx.lr = 0x821645FC;
	sub_82125860(ctx, base);
	// lfs f0,3432(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 3432);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f13,212(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821647b4
	if (!ctx.cr6.gt) goto loc_821647B4;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f26
	ctx.cr6.compare(ctx.f13.f64, f26.f64);
	// ble cr6,0x821647b4
	if (!ctx.cr6.gt) goto loc_821647B4;
	// lfs f13,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lfs f12,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f11,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f10,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// stfs f13,288(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stfs f12,292(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f11,296(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f23,300(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x820e1c50
	ctx.lr = 0x82164668;
	sub_820E1C50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e2128
	ctx.lr = 0x82164670;
	sub_820E2128(ctx, base);
	// fcmpu cr6,f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f25.f64);
	// bge cr6,0x821646a0
	if (!ctx.cr6.lt) goto loc_821646A0;
	// lfs f0,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// b 0x821646ac
	goto loc_821646AC;
loc_821646A0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e2290
	ctx.lr = 0x821646AC;
	sub_820E2290(ctx, base);
loc_821646AC:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fmr f1,f24
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f24.f64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82169d00
	ctx.lr = 0x821646C0;
	sub_82169D00(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x820e1ba8
	ctx.lr = 0x821646D4;
	sub_820E1BA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x820e2290
	ctx.lr = 0x821646DC;
	sub_820E2290(ctx, base);
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lfs f12,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// stfs f0,272(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// stfs f13,276(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f12,280(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// bl 0x820e1c50
	ctx.lr = 0x82164704;
	sub_820E1C50(ctx, base);
	// lfs f0,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,212(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lfs f12,216(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// lfs f11,512(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 512);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,516(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 516);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,520(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 520);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,272(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,276(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,280(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f6.f64 = double(temp.f32);
	// stfs f30,332(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// stfs f30,348(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// stfs f30,364(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// stfs f0,320(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stfs f13,324(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stfs f12,328(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stfs f11,336(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f10,340(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f9,344(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stfs f8,352(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// stfs f7,356(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// stfs f6,360(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// bl 0x820e0250
	ctx.lr = 0x82164764;
	sub_820E0250(ctx, base);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x820e0590
	ctx.lr = 0x82164774;
	sub_820E0590(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x820e1120
	ctx.lr = 0x82164788;
	sub_820E1120(ctx, base);
	// clrlwi. r11,r22,24
	ctx.r11.u64 = r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821647ac
	if (ctx.cr0.eq) goto loc_821647AC;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, f27.f64);
	// bge cr6,0x821647a4
	if (!ctx.cr6.lt) goto loc_821647A4;
	// fmr f0,f27
	ctx.f0.f64 = f27.f64;
	// b 0x821647ec
	goto loc_821647EC;
loc_821647A4:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// ble cr6,0x821647ec
	if (!ctx.cr6.gt) goto loc_821647EC;
loc_821647AC:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f29.f64;
	// b 0x821647ec
	goto loc_821647EC;
loc_821647B4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x820e0250
	ctx.lr = 0x821647C0;
	sub_820E0250(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x820e0590
	ctx.lr = 0x821647D0;
	sub_820E0590(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x820e1120
	ctx.lr = 0x821647E4;
	sub_820E1120(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
loc_821647EC:
	// fmuls f0,f0,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * f22.f64));
	// lfs f13,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lfs f2,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f13,f21,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f21.f64, ctx.f0.f64)));
	// stfsu f0,4(r27)
	ea = 4 + r27.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	r27.u32 = ea;
	// fadds f3,f0,f31
	ctx.f3.f64 = double(float(ctx.f0.f64 + f31.f64));
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x821610f0
	ctx.lr = 0x82164814;
	sub_821610F0(ctx, base);
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// lfs f12,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stfs f23,108(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x820e0368
	ctx.lr = 0x82164840;
	sub_820E0368(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// lfs f12,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// mr r28,r23
	r28.u64 = r23.u64;
	// stfs f23,60(r31)
	temp.f32 = float(f23.f64);
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
	// mr r31,r25
	r31.u64 = r25.u64;
	// bne 0x821645d4
	if (!ctx.cr0.eq) goto loc_821645D4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// lfs f31,2016(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2016);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820e0810
	ctx.lr = 0x82164880;
	sub_820E0810(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,964(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 964);
	ctx.f13.f64 = double(temp.f32);
	// stfs f30,248(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// addi r31,r30,1152
	r31.s64 = r30.s64 + 1152;
	// stfs f30,680(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 680, temp.u32);
	// addi r5,r1,624
	ctx.r5.s64 = ctx.r1.s64 + 624;
	// stfs f23,684(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 684, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f0,-11720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11720);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// fmuls f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 * f28.f64));
	// stfs f13,244(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f0,672(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 672, temp.u32);
	// stfs f13,676(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 676, temp.u32);
	// bl 0x820e0368
	ctx.lr = 0x821648C4;
	sub_820E0368(ctx, base);
	// addi r26,r30,1408
	r26.s64 = r30.s64 + 1408;
	// addi r5,r1,624
	ctx.r5.s64 = ctx.r1.s64 + 624;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x820e0368
	ctx.lr = 0x821648D8;
	sub_820E0368(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,964(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 964);
	ctx.f13.f64 = double(temp.f32);
	// addi r28,r24,3412
	r28.s64 = r24.s64 + 3412;
	// stfs f30,132(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// li r27,2
	r27.s64 = 2;
	// stfs f30,136(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f0,-11724(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11724);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f28,-11728(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11728);
	f28.f64 = double(temp.f32);
	// fmuls f29,f0,f0
	f29.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
loc_82164908:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x820e1df8
	ctx.lr = 0x82164918;
	sub_820E1DF8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f2,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f1,192(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82125860
	ctx.lr = 0x82164930;
	sub_82125860(ctx, base);
	// lfs f0,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82164a78
	if (!ctx.cr6.gt) goto loc_82164A78;
	// lfs f0,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f13,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lfs f12,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f11,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,304(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// stfs f13,308(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// stfs f12,312(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// stfs f23,316(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// stfs f11,160(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f1,196(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f10,164(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f9,168(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x820e1c50
	ctx.lr = 0x82164984;
	sub_820E1C50(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82169d00
	ctx.lr = 0x82164998;
	sub_82169D00(ctx, base);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x820e1ba8
	ctx.lr = 0x821649A8;
	sub_820E1BA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x820e2290
	ctx.lr = 0x821649B0;
	sub_820E2290(ctx, base);
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lfs f12,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// stfs f0,256(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// stfs f13,260(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f12,264(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// bl 0x820e1c50
	ctx.lr = 0x821649D8;
	sub_820E1C50(ctx, base);
	// lfs f0,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,196(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f12,200(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// lfs f11,544(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 544);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,548(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 548);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,552(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 552);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,256(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,260(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,264(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f6.f64 = double(temp.f32);
	// stfs f30,460(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 460, temp.u32);
	// stfs f30,476(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 476, temp.u32);
	// stfs f30,492(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 492, temp.u32);
	// stfs f0,448(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 448, temp.u32);
	// stfs f13,452(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 452, temp.u32);
	// stfs f12,456(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 456, temp.u32);
	// stfs f11,464(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 464, temp.u32);
	// stfs f10,468(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 468, temp.u32);
	// stfs f9,472(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 472, temp.u32);
	// stfs f8,480(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 480, temp.u32);
	// stfs f7,484(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 484, temp.u32);
	// stfs f6,488(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 488, temp.u32);
	// bl 0x820e0250
	ctx.lr = 0x82164A38;
	sub_820E0250(ctx, base);
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x820e0590
	ctx.lr = 0x82164A48;
	sub_820E0590(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x820e1120
	ctx.lr = 0x82164A5C;
	sub_820E1120(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x82164a80
	if (ctx.cr6.gt) goto loc_82164A80;
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// bge cr6,0x82164a84
	if (!ctx.cr6.lt) goto loc_82164A84;
	// fmr f0,f28
	ctx.f0.f64 = f28.f64;
	// b 0x82164a84
	goto loc_82164A84;
loc_82164A78:
	// stfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82164A80:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64;
loc_82164A84:
	// lfs f13,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// fmuls f13,f13,f21
	ctx.f13.f64 = double(float(ctx.f13.f64 * f21.f64));
	// lfs f2,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f3,f0,f22,f13
	ctx.f3.f64 = double(float(std::fma(ctx.f0.f64, f22.f64, ctx.f13.f64)));
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfsu f3,4(r28)
	ea = 4 + r28.u32;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ea, temp.u32);
	r28.u32 = ea;
	// bl 0x821610f0
	ctx.lr = 0x82164AA8;
	sub_821610F0(ctx, base);
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// lfs f12,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stfs f23,172(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x820e0590
	ctx.lr = 0x82164AD4;
	sub_820E0590(ctx, base);
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// lfs f12,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// mr r29,r25
	r29.u64 = r25.u64;
	// stfs f23,60(r31)
	temp.f32 = float(f23.f64);
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
	// mr r31,r26
	r31.u64 = r26.u64;
	// bne 0x82164908
	if (!ctx.cr0.eq) goto loc_82164908;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,3584(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 3584);
	// addi r6,r24,3444
	ctx.r6.s64 = r24.s64 + 3444;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82161a28
	ctx.lr = 0x82164B18;
	sub_82161A28(ctx, base);
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x822d4f68
	ctx.lr = 0x82164B24;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_8219B8C8) {
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
	ctx.lr = 0x8219B8D0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// add r30,r11,r7
	r30.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r29,r10,r7
	r29.u64 = ctx.r10.u64 + ctx.r7.u64;
	// beq cr6,0x8219b948
	if (ctx.cr6.eq) goto loc_8219B948;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f12,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f11,16(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lfs f10,20(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,80(r1)
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
	// lfs f1,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e20b0
	ctx.lr = 0x8219B948;
	sub_820E20B0(ctx, base);
loc_8219B948:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8219b960
	if (ctx.cr6.eq) goto loc_8219B960;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x820e1df8
	ctx.lr = 0x8219B960;
	sub_820E1DF8(ctx, base);
loc_8219B960:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8219b98c
	if (ctx.cr6.eq) goto loc_8219B98C;
	// lfs f0,48(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// lfs f0,52(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 4, temp.u32);
	// lfs f13,56(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,8(r28)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
	// stfs f0,12(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 12, temp.u32);
loc_8219B98C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8219F2C8) {
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
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8218cb30
	ctx.lr = 0x8219F2E8;
	sub_8218CB30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8219f2f8
	if (!ctx.cr0.eq) goto loc_8219F2F8;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8219f048
	ctx.lr = 0x8219F2F8;
	sub_8219F048(ctx, base);
loc_8219F2F8:
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

DEFINE_REX_FUNC(sub_821A0AA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821A0AB0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r6,r8,6540
	ctx.r6.s64 = ctx.r8.s64 + 6540;
	// addi r9,r11,1816
	ctx.r9.s64 = ctx.r11.s64 + 1816;
	// addi r8,r10,2656
	ctx.r8.s64 = ctx.r10.s64 + 2656;
	// addi r7,r7,2600
	ctx.r7.s64 = ctx.r7.s64 + 2600;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,137
	ctx.r4.s64 = 137;
	// bl 0x821f7d50
	ctx.lr = 0x821A0AE4;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a0b00
	if (ctx.cr0.eq) goto loc_821A0B00;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x821a0b04
	goto loc_821A0B04;
loc_821A0B00:
	// li r30,0
	r30.s64 = 0;
loc_821A0B04:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x821a0b14
	if (!ctx.cr6.eq) goto loc_821A0B14;
loc_821A0B0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821a0b68
	goto loc_821A0B68;
loc_821A0B14:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r31,r30,80
	r31.s64 = r30.s64 + 80;
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// mulli r4,r29,3328
	ctx.r4.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(3328));
	// lwz r3,496(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 496);
	// addi r5,r31,12
	ctx.r5.s64 = r31.s64 + 12;
	// bl 0x82190558
	ctx.lr = 0x821A0B30;
	sub_82190558(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821a0b44
	if (!ctx.cr0.eq) goto loc_821A0B44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218cb20
	ctx.lr = 0x821A0B40;
	sub_8218CB20(ctx, base);
	// b 0x821a0b0c
	goto loc_821A0B0C;
loc_821A0B44:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r29,48(r31)
	REX_STORE_U32(r31.u32 + 48, r29.u32);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// bl 0x820e01b0
	ctx.lr = 0x821A0B5C;
	sub_820E01B0(ctx, base);
	// addi r11,r31,60
	ctx.r11.s64 = r31.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
loc_821A0B68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821A2ED8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821A2EE0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,48(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bge cr6,0x821a2f40
	if (!ctx.cr6.lt) goto loc_821A2F40;
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// stw r29,44(r31)
	REX_STORE_U32(r31.u32 + 44, r29.u32);
	// bl 0x8212c578
	ctx.lr = 0x821A2F14;
	sub_8212C578(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(r29.s32, r30.s32, ctx.xer);
	// lfs f0,2332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2332);
	ctx.f0.f64 = double(temp.f32);
	// li r11,46
	ctx.r11.s64 = 46;
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// beq cr6,0x821a2f30
	if (ctx.cr6.eq) goto loc_821A2F30;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
loc_821A2F30:
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// li r11,45
	ctx.r11.s64 = 45;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821a2f50
	goto loc_821A2F50;
loc_821A2F40:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bne cr6,0x821a2f54
	if (!ctx.cr6.eq) goto loc_821A2F54;
	// li r11,46
	ctx.r11.s64 = 46;
loc_821A2F50:
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_821A2F54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821A4078) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r11,512
	ctx.r11.s64 = 512;
	// addi r10,r10,-26560
	ctx.r10.s64 = ctx.r10.s64 + -26560;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821A4090:
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x821a4090
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A4090;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r11,r11,-7072
	ctx.r11.s64 = ctx.r11.s64 + -7072;
	// addi r11,r11,5928
	ctx.r11.s64 = ctx.r11.s64 + 5928;
loc_821A40A8:
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821A40B8:
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x821a40b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A40B8;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r11,r11,3696
	ctx.r11.s64 = ctx.r11.s64 + 3696;
	// bne 0x821a40a8
	if (!ctx.cr0.eq) goto loc_821A40A8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A6088) {
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
	ctx.lr = 0x821A6090;
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lwz r30,5932(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 5932);
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x821a6110
	if (ctx.cr6.eq) goto loc_821A6110;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a5768
	ctx.lr = 0x821A60D8;
	sub_821A5768(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a60f4
	if (ctx.cr0.eq) goto loc_821A60F4;
	// bl 0x8218cb20
	ctx.lr = 0x821A60E4;
	sub_8218CB20(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a5770
	ctx.lr = 0x821A60F0;
	sub_821A5770(ctx, base);
	// b 0x821a6108
	goto loc_821A6108;
loc_821A60F4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a5758
	ctx.lr = 0x821A60FC;
	sub_821A5758(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r30
	r30.u64 = ctx.r11.u64 & r30.u64;
loc_821A6108:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x821a6144
	if (!ctx.cr6.eq) goto loc_821A6144;
loc_821A6110:
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821a5778
	ctx.lr = 0x821A6134;
	sub_821A5778(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x821a6164
	if (!ctx.cr0.eq) goto loc_821A6164;
loc_821A613C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821a629c
	goto loc_821A629C;
loc_821A6144:
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a5120
	ctx.lr = 0x821A6164;
	sub_821A5120(ctx, base);
loc_821A6164:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a5758
	ctx.lr = 0x821A616C;
	sub_821A5758(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821a629c
	if (!ctx.cr0.eq) goto loc_821A629C;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// addi r6,r8,7280
	ctx.r6.s64 = ctx.r8.s64 + 7280;
	// addi r9,r11,24168
	ctx.r9.s64 = ctx.r11.s64 + 24168;
	// addi r8,r10,24152
	ctx.r8.s64 = ctx.r10.s64 + 24152;
	// addi r7,r7,-10000
	ctx.r7.s64 = ctx.r7.s64 + -10000;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,905
	ctx.r4.s64 = 905;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f7d50
	ctx.lr = 0x821A61A4;
	sub_821F7D50(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a61c4
	if (ctx.cr0.eq) goto loc_821A61C4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x821a61c8
	goto loc_821A61C8;
loc_821A61C4:
	// mr r31,r29
	r31.u64 = r29.u64;
loc_821A61C8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821a613c
	if (ctx.cr6.eq) goto loc_821A613C;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r5,r31,92
	ctx.r5.s64 = r31.s64 + 92;
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// li r4,17664
	ctx.r4.s64 = 17664;
	// lwz r3,496(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 496);
	// bl 0x82190558
	ctx.lr = 0x821A61E8;
	sub_82190558(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821a61fc
	if (!ctx.cr0.eq) goto loc_821A61FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8218cb20
	ctx.lr = 0x821A61F8;
	sub_8218CB20(ctx, base);
	// b 0x821a613c
	goto loc_821A613C;
loc_821A61FC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a5760
	ctx.lr = 0x821A6208;
	sub_821A5760(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a5770
	ctx.lr = 0x821A6214;
	sub_821A5770(ctx, base);
	// li r10,276
	ctx.r10.s64 = 276;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// sth r29,88(r31)
	REX_STORE_U16(r31.u32 + 88, r29.u16);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,30520
	ctx.r8.s64 = ctx.r11.s64 + 30520;
	// li r11,1
	ctx.r11.s64 = 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,90(r31)
	REX_STORE_U8(r31.u32 + 90, ctx.r11.u8);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// std r10,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r10.u64);
	// stb r11,91(r31)
	REX_STORE_U8(r31.u32 + 91, ctx.r11.u8);
	// lfs f13,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,52(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 52);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
	// stb r11,105(r31)
	REX_STORE_U8(r31.u32 + 105, ctx.r11.u8);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// stb r11,110(r31)
	REX_STORE_U8(r31.u32 + 110, ctx.r11.u8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// stfs f13,120(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// stb r29,106(r31)
	REX_STORE_U8(r31.u32 + 106, r29.u8);
	// addi r10,r10,-52
	ctx.r10.s64 = ctx.r10.s64 + -52;
	// stw r29,96(r31)
	REX_STORE_U32(r31.u32 + 96, r29.u32);
	// stw r9,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r9.u32);
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// stb r29,109(r31)
	REX_STORE_U8(r31.u32 + 109, r29.u8);
loc_821A6284:
	// stfs f13,80(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 80, temp.u32);
	// stfs f0,56(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// stfs f0,52(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 52, temp.u32);
	// stwu r29,64(r10)
	ea = 64 + ctx.r10.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821a6284
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A6284;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_821A629C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_821AF9D8) {
	REX_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x821af9e8
	if (!ctx.cr6.lt) goto loc_821AF9E8;
	// neg r4,r4
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r4.u64);
loc_821AF9E8:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AFE08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821AFE10;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// li r31,0
	r31.s64 = 0;
	// lha r11,144(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 144));
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x821afe4c
	if (!ctx.cr6.eq) goto loc_821AFE4C;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r31,2
	r31.s64 = 2;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lwz r11,1852(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1852);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821afe4c
	if (ctx.cr0.eq) goto loc_821AFE4C;
	// li r29,-1
	r29.s64 = -1;
loc_821AFE4C:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,-32044(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + -32044);
	// bl 0x82208828
	ctx.lr = 0x821AFE5C;
	sub_82208828(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x821f0998
	ctx.lr = 0x821AFE74;
	sub_821F0998(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821B19D0) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// lwz r11,504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 504);
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x821b1a80
	if (ctx.cr6.eq) goto loc_821B1A80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8212bf38
	ctx.lr = 0x821B1A04;
	sub_8212BF38(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r31,r11,-7072
	r31.s64 = ctx.r11.s64 + -7072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821cd388
	ctx.lr = 0x821B1A14;
	sub_821CD388(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8212bf38
	ctx.lr = 0x821B1A24;
	sub_8212BF38(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821cd388
	ctx.lr = 0x821B1A30;
	sub_821CD388(ctx, base);
	// lwz r11,19668(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19668);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821b1a48
	if (!ctx.cr6.eq) goto loc_821B1A48;
	// lhz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 88);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// beq cr6,0x821b1a70
	if (ctx.cr6.eq) goto loc_821B1A70;
loc_821B1A48:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,23364
	ctx.r11.u64 = ctx.r11.u64 | 23364;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821b1acc
	if (!ctx.cr6.eq) goto loc_821B1ACC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3784
	ctx.r11.u64 = ctx.r11.u64 | 3784;
	// lhzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bne cr6,0x821b1acc
	if (!ctx.cr6.eq) goto loc_821B1ACC;
loc_821B1A70:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x821dfd28
	ctx.lr = 0x821B1A7C;
	sub_821DFD28(ctx, base);
	// b 0x821b1acc
	goto loc_821B1ACC;
loc_821B1A80:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821afef0
	ctx.lr = 0x821B1A88;
	sub_821AFEF0(ctx, base);
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8212e440
	ctx.lr = 0x821B1A9C;
	sub_8212E440(ctx, base);
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// lha r3,140(r11)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 140));
	// bl 0x821dfd28
	ctx.lr = 0x821B1AB0;
	sub_821DFD28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
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
	ctx.lr = 0x821B1ACC;
	sub_8212F220(ctx, base);
loc_821B1ACC:
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

DEFINE_REX_FUNC(sub_821BB290) {
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
	ctx.lr = 0x821BB298;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// addi r30,r10,-7072
	r30.s64 = ctx.r10.s64 + -7072;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x821bb2dc
	if (ctx.cr6.lt) goto loc_821BB2DC;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x821bb2d4
	if (ctx.cr6.eq) goto loc_821BB2D4;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x821bb49c
	if (!ctx.cr6.eq) goto loc_821BB49C;
	// bl 0x821d17d8
	ctx.lr = 0x821BB2D0;
	sub_821D17D8(ctx, base);
	// b 0x821bb49c
	goto loc_821BB49C;
loc_821BB2D4:
	// bl 0x821b3420
	ctx.lr = 0x821BB2D8;
	sub_821B3420(ctx, base);
	// b 0x821bb49c
	goto loc_821BB49C;
loc_821BB2DC:
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x821d61f0
	ctx.lr = 0x821BB2E4;
	sub_821D61F0(ctx, base);
	// bl 0x821afbf0
	ctx.lr = 0x821BB2E8;
	sub_821AFBF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821cd298
	ctx.lr = 0x821BB2F0;
	sub_821CD298(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821cd298
	ctx.lr = 0x821BB2FC;
	sub_821CD298(ctx, base);
	// li r27,0
	r27.s64 = 0;
loc_821BB300:
	// li r29,0
	r29.s64 = 0;
loc_821BB304:
	// add r10,r27,r29
	ctx.r10.u64 = r27.u64 + r29.u64;
	// addi r11,r30,20028
	ctx.r11.s64 = r30.s64 + 20028;
	// rlwinm r28,r10,6,0,25
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r3,r28,r11
	ctx.r3.u64 = r28.u64 + ctx.r11.u64;
	// bl 0x820e01b0
	ctx.lr = 0x821BB318;
	sub_820E01B0(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// addi r11,r11,23724
	ctx.r11.s64 = ctx.r11.s64 + 23724;
	// add r3,r28,r11
	ctx.r3.u64 = r28.u64 + ctx.r11.u64;
	// bl 0x820e01b0
	ctx.lr = 0x821BB328;
	sub_820E01B0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,256
	ctx.cr6.compare<int32_t>(r29.s32, 256, ctx.xer);
	// blt cr6,0x821bb304
	if (ctx.cr6.lt) goto loc_821BB304;
	// addi r27,r27,256
	r27.s64 = r27.s64 + 256;
	// cmpwi cr6,r27,768
	ctx.cr6.compare<int32_t>(r27.s32, 768, ctx.xer);
	// blt cr6,0x821bb300
	if (ctx.cr6.lt) goto loc_821BB300;
	// bl 0x821b1c28
	ctx.lr = 0x821BB344;
	sub_821B1C28(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8212bf38
	ctx.lr = 0x821BB354;
	sub_8212BF38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8212bf38
	ctx.lr = 0x821BB364;
	sub_8212BF38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218e510
	ctx.lr = 0x821BB36C;
	sub_8218E510(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218e510
	ctx.lr = 0x821BB374;
	sub_8218E510(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x8218e510
	ctx.lr = 0x821BB380;
	sub_8218E510(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bb39c
	if (ctx.cr6.eq) goto loc_821BB39C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
loc_821BB39C:
	// lwz r11,496(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 496);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r11,34(r31)
	REX_STORE_U16(r31.u32 + 34, ctx.r11.u16);
	// bl 0x821b78b0
	ctx.lr = 0x821BB3AC;
	sub_821B78B0(ctx, base);
	// lha r11,28(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 28));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821bb3dc
	if (ctx.cr6.lt) goto loc_821BB3DC;
	// bne cr6,0x821bb444
	if (!ctx.cr6.eq) goto loc_821BB444;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x820f1090
	ctx.lr = 0x821BB3D4;
	sub_820F1090(ctx, base);
	// li r11,155
	ctx.r11.s64 = 155;
	// b 0x821bb440
	goto loc_821BB440;
loc_821BB3DC:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bb410
	if (!ctx.cr6.eq) goto loc_821BB410;
	// bl 0x821165a8
	ctx.lr = 0x821BB3EC;
	sub_821165A8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// sth r11,308(r31)
	REX_STORE_U16(r31.u32 + 308, ctx.r11.u16);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30
	ctx.r5.s64 = 30;
	// lfs f2,16232(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16232);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212f220
	ctx.lr = 0x821BB410;
	sub_8212F220(ctx, base);
loc_821BB410:
	// bl 0x820ec518
	ctx.lr = 0x821BB414;
	sub_820EC518(ctx, base);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-28232
	ctx.r10.s64 = ctx.r10.s64 + -28232;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,60(r10)
	REX_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820f1090
	ctx.lr = 0x821BB43C;
	sub_820F1090(ctx, base);
	// li r11,120
	ctx.r11.s64 = 120;
loc_821BB440:
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
loc_821BB444:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821c9e88
	ctx.lr = 0x821BB458;
	sub_821C9E88(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821c9e88
	ctx.lr = 0x821BB470;
	sub_821C9E88(ctx, base);
	// bl 0x821b1c98
	ctx.lr = 0x821BB474;
	sub_821B1C98(ctx, base);
	// lwz r11,540(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bb49c
	if (ctx.cr6.eq) goto loc_821BB49C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x821c7088
	ctx.lr = 0x821BB48C;
	sub_821C7088(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821c7088
	ctx.lr = 0x821BB49C;
	sub_821C7088(ctx, base);
loc_821BB49C:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bb550
	if (!ctx.cr6.eq) goto loc_821BB550;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821bb52c
	if (ctx.cr6.lt) goto loc_821BB52C;
	// lhz r11,30(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 30);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x821bb4e8
	if (!ctx.cr6.eq) goto loc_821BB4E8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x820f1090
	ctx.lr = 0x821BB4DC;
	sub_820F1090(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 220);
	// bl 0x820ef228
	ctx.lr = 0x821BB4E4;
	sub_820EF228(ctx, base);
	// bl 0x820eeed8
	ctx.lr = 0x821BB4E8;
	sub_820EEED8(ctx, base);
loc_821BB4E8:
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lhz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 28);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// stw r8,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r8.u32);
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r10,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r10.u32);
	// beq 0x821bb52c
	if (ctx.cr0.eq) goto loc_821BB52C;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// lfs f1,16788(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16788);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,828(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 828);
	// bl 0x821eb660
	ctx.lr = 0x821BB52C;
	sub_821EB660(ctx, base);
loc_821BB52C:
	// lwa r11,168(r31)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r31.u32 + 168));
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,-9828(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9828);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r11,256(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,192(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 192, temp.u32);
loc_821BB550:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821C3A88) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,432
	ctx.r8.s64 = ctx.r11.s64 + 432;
	// lfs f0,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,540(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c3ab0
	if (ctx.cr6.eq) goto loc_821C3AB0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16228);
	ctx.f0.f64 = double(temp.f32);
loc_821C3AB0:
	// lwz r9,5560(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 5560);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821c3ac8
	if (!ctx.cr6.eq) goto loc_821C3AC8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_821C3AC8:
	// lwz r7,5576(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 5576);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// addi r11,r11,-12512
	ctx.r11.s64 = ctx.r11.s64 + -12512;
	// bne cr6,0x821c3b00
	if (!ctx.cr6.eq) goto loc_821C3B00;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// beq cr6,0x821c3af4
	if (ctx.cr6.eq) goto loc_821C3AF4;
	// addi r10,r11,-32
	ctx.r10.s64 = ctx.r11.s64 + -32;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// b 0x821c3b04
	goto loc_821C3B04;
loc_821C3AF4:
	// lwz r10,872(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 872);
	// lfs f13,40(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// b 0x821c3b04
	goto loc_821C3B04;
loc_821C3B00:
	// lfs f13,5588(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 5588);
	ctx.f13.f64 = double(temp.f32);
loc_821C3B04:
	// lwz r10,5764(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5764);
	// fmuls f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lbz r9,162(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 162);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfsx f13,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq 0x821c3b30
	if (ctx.cr0.eq) goto loc_821C3B30;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,12200(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12200);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_821C3B30:
	// lwz r10,5548(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5548);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821c3b50
	if (!ctx.cr6.gt) goto loc_821C3B50;
	// lwz r11,420(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 420);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
loc_821C3B50:
	// lbz r11,202(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 202);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c3b68
	if (ctx.cr0.eq) goto loc_821C3B68;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16688(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16688);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_821C3B68:
	// lbz r11,163(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 163);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lbz r11,167(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 167);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c3b8c
	if (ctx.cr0.eq) goto loc_821C3B8C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,17064(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17064);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821c3b94
	goto loc_821C3B94;
loc_821C3B8C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2356);
	ctx.f0.f64 = double(temp.f32);
loc_821C3B94:
	// fmuls f1,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C7240) {
	REX_FUNC_PROLOGUE();
	// addi r4,r3,19272
	ctx.r4.s64 = ctx.r3.s64 + 19272;
	// b 0x821c71a8
	sub_821C71A8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821C7300) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,10152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10152);
	// lfs f13,10612(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10612);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,10148(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 10148);
	// lfs f12,10616(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10616);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,10620(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10620);
	ctx.f11.f64 = double(temp.f32);
	// lbz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// lfs f0,112(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// lfs f10,112(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r7,-9504
	ctx.r7.s64 = ctx.r7.s64 + -9504;
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// stfs f0,10628(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 10628, temp.u32);
	// lfs f10,116(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,116(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// stfs f0,10632(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 10632, temp.u32);
	// lfs f0,10628(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10628);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,10632(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10632);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,120(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,120(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// stfs f9,10636(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 10636, temp.u32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,10636(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10636);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f0,2000(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f9,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f13,10612(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 10612, temp.u32);
	// fmadds f12,f10,f0,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfs f12,10616(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 10616, temp.u32);
	// fmadds f0,f8,f0,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f11.f64)));
	// stfs f0,10620(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 10620, temp.u32);
	// lwzx r11,r9,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stfs f13,10596(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 10596, temp.u32);
	// stfs f0,10604(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 10604, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C9F70) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// lfs f13,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// addi r11,r31,32
	ctx.r11.s64 = r31.s64 + 32;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// bl 0x821f2e90
	ctx.lr = 0x821C9FC0;
	sub_821F2E90(ctx, base);
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

DEFINE_REX_FUNC(sub_821CB730) {
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
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x821cb750
	if (!ctx.cr6.eq) goto loc_821CB750;
	// lha r6,140(r3)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 140));
loc_821CB750:
	// lha r11,154(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 154));
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x821cb774
	if (!ctx.cr6.eq) goto loc_821CB774;
	// lha r11,156(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 156));
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x821cb774
	if (!ctx.cr6.eq) goto loc_821CB774;
	// lha r11,158(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 158));
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x821cb7bc
	if (ctx.cr6.eq) goto loc_821CB7BC;
loc_821CB774:
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x821cb7bc
	if (ctx.cr6.eq) goto loc_821CB7BC;
	// sth r4,88(r31)
	REX_STORE_U16(r31.u32 + 88, ctx.r4.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c9d30
	ctx.lr = 0x821CB788;
	sub_821C9D30(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,19668(r31)
	REX_STORE_U32(r31.u32 + 19668, ctx.r8.u32);
	// beq cr6,0x821cb7a0
	if (ctx.cr6.eq) goto loc_821CB7A0;
	// sth r8,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r8.u16);
loc_821CB7A0:
	// stw r8,19676(r31)
	REX_STORE_U32(r31.u32 + 19676, ctx.r8.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c9e88
	ctx.lr = 0x821CB7B8;
	sub_821C9E88(ctx, base);
	// stw r8,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r8.u32);
loc_821CB7BC:
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

DEFINE_REX_FUNC(sub_821D0C48) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lbz r11,-8935(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -8935);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r4,30
	ctx.r4.s64 = 30;
	// li r3,29
	ctx.r3.s64 = 29;
	// b 0x821d45b0
	sub_821D45B0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D0E40) {
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
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lbz r11,-8933(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -8933);
	// lwz r31,-32480(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d0ef4
	if (ctx.cr0.eq) goto loc_821D0EF4;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// ble cr6,0x821d0ee0
	if (!ctx.cr6.gt) goto loc_821D0EE0;
	// li r10,60
	ctx.r10.s64 = 60;
	// divw r10,r11,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// mulli r10,r10,60
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(60));
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// blt cr6,0x821d0ee0
	if (ctx.cr6.lt) goto loc_821D0EE0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb2c0
	ctx.lr = 0x821D0E94;
	sub_821EB2C0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// lwz r4,344(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821D0EAC;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r9,28100
	ctx.r3.s64 = ctx.r9.s64 + 28100;
	// lfd f2,7464(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 7464);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfd f1,7456(r10)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + 7456);
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x821D0EE0;
	sub_821EACB0(ctx, base);
loc_821D0EE0:
	// bl 0x821a9ce0
	ctx.lr = 0x821D0EE4;
	sub_821A9CE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821d0ef4
	if (!ctx.cr0.eq) goto loc_821D0EF4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821d4528
	ctx.lr = 0x821D0EF4;
	sub_821D4528(ctx, base);
loc_821D0EF4:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821D36E8) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D36F0) {
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
	ctx.lr = 0x821D36F8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r26,-32480(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// addi r30,r26,80
	r30.s64 = r26.s64 + 80;
	// bl 0x821afce8
	ctx.lr = 0x821D370C;
	sub_821AFCE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821d3878
	if (!ctx.cr0.eq) goto loc_821D3878;
	// bl 0x821e0020
	ctx.lr = 0x821D3718;
	sub_821E0020(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821d3878
	if (ctx.cr0.eq) goto loc_821D3878;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821d3878
	if (ctx.cr6.eq) goto loc_821D3878;
	// lwz r11,68(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 68);
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d3768
	if (!ctx.cr6.eq) goto loc_821D3768;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,30
	ctx.r4.s64 = 30;
	// li r3,2
	ctx.r3.s64 = 2;
	// lfs f3,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x821afa50
	ctx.lr = 0x821D3758;
	sub_821AFA50(ctx, base);
	// stw r25,36(r30)
	REX_STORE_U32(r30.u32 + 36, r25.u32);
	// lwz r11,68(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r26)
	REX_STORE_U32(r26.u32 + 68, ctx.r11.u32);
loc_821D3768:
	// lwz r9,36(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r29,r11,432
	r29.s64 = ctx.r11.s64 + 432;
	// addi r27,r10,28096
	r27.s64 = ctx.r10.s64 + 28096;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821d3810
	if (!ctx.cr6.eq) goto loc_821D3810;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r31,r11,13228
	r31.s64 = ctx.r11.s64 + 13228;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,36(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// bl 0x821af9d8
	ctx.lr = 0x821D37A4;
	sub_821AF9D8(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x821af9d8
	ctx.lr = 0x821D37C0;
	sub_821AF9D8(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r31,r11,-8928
	r31.s64 = ctx.r11.s64 + -8928;
	// lwz r4,-4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + -4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821d37e0
	if (!ctx.cr6.eq) goto loc_821D37E0;
	// bl 0x820e4bb0
	ctx.lr = 0x821D37D8;
	sub_820E4BB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,-4(r31)
	REX_STORE_U32(r31.u32 + -4, ctx.r3.u32);
loc_821D37E0:
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821d3800
	if (!ctx.cr6.eq) goto loc_821D3800;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x820e4bb0
	ctx.lr = 0x821D37F4;
	sub_820E4BB0(ctx, base);
	// lwz r4,-4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + -4);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_821D3800:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r7,468(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 468);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// bl 0x82174668
	ctx.lr = 0x821D3810;
	sub_82174668(ctx, base);
loc_821D3810:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
	// bl 0x821746e8
	ctx.lr = 0x821D3824;
	sub_821746E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821d3838
	if (!ctx.cr0.eq) goto loc_821D3838;
	// lwz r11,68(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 68);
	// cmpwi cr6,r11,10800
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10800, ctx.xer);
	// ble cr6,0x821d3850
	if (!ctx.cr6.gt) goto loc_821D3850;
loc_821D3838:
	// stw r25,36(r30)
	REX_STORE_U32(r30.u32 + 36, r25.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,468(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 468);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,468(r29)
	REX_STORE_U32(r29.u32 + 468, ctx.r11.u32);
	// bl 0x821746d8
	ctx.lr = 0x821D3850;
	sub_821746D8(ctx, base);
loc_821D3850:
	// lwz r11,468(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 468);
	// lwz r10,472(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 472);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x821d386c
	if (!ctx.cr6.gt) goto loc_821D386C;
	// bl 0x821d2f78
	ctx.lr = 0x821D3864;
	sub_821D2F78(ctx, base);
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x821d4528
	ctx.lr = 0x821D386C;
	sub_821D4528(ctx, base);
loc_821D386C:
	// lwz r11,68(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r26)
	REX_STORE_U32(r26.u32 + 68, ctx.r11.u32);
loc_821D3878:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_821D9038) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,16464
	ctx.r11.s64 = ctx.r3.s64 + 16464;
	// stw r9,16468(r3)
	REX_STORE_U32(ctx.r3.u32 + 16468, ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_821D9050:
	// stb r10,14(r11)
	REX_STORE_U8(ctx.r11.u32 + 14, ctx.r10.u8);
	// sth r10,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// sth r10,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r10.u16);
	// sthu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x821d9050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D9050;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D9978) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x8212bd08
	ctx.lr = 0x821D9998;
	sub_8212BD08(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r6,r8,14064
	ctx.r6.s64 = ctx.r8.s64 + 14064;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,29040
	ctx.r8.s64 = ctx.r10.s64 + 29040;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x821D99C4;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d99e0
	if (ctx.cr0.eq) goto loc_821D99E0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,31764
	ctx.r10.s64 = ctx.r10.s64 + 31764;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821d99e4
	goto loc_821D99E4;
loc_821D99E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D99E4:
	// stw r31,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, r31.u32);
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

DEFINE_REX_FUNC(sub_821DCF00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x821DCF08;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addic. r31,r3,-88
	ctx.xer.ca = ctx.r3.u32 > 87;
	r31.s64 = ctx.r3.s64 + -88;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x821dcf2c
	if (!ctx.cr0.lt) goto loc_821DCF2C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x821dcf60
	goto loc_821DCF60;
loc_821DCF2C:
	// li r28,10
	r28.s64 = 10;
	// divw r3,r31,r28
	ctx.r3.u64 = uint32_t((r28.s32 && !(r31.s32 == INT32_MIN && r28.s32 == -1)) ? r31.s32 / r28.s32 : 0);
	// bl 0x821b30e0
	ctx.lr = 0x821DCF38;
	sub_821B30E0(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 24, ctx.xer);
	// bne cr6,0x821dcf4c
	if (!ctx.cr6.eq) goto loc_821DCF4C;
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_821DCF4C:
	// divw r11,r31,r28
	ctx.r11.u64 = uint32_t((r28.s32 && !(r31.s32 == INT32_MIN && r28.s32 == -1)) ? r31.s32 / r28.s32 : 0);
	// mulli r11,r11,10
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(10));
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_821DCF60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821DE1A8) {
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
	ctx.lr = 0x821DE1B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r28,r11,432
	r28.s64 = ctx.r11.s64 + 432;
	// lhz r11,428(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 428);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821de9fc
	if (ctx.cr0.eq) goto loc_821DE9FC;
	// lbz r11,14(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 14);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x821de1dc
	if (!ctx.cr6.eq) goto loc_821DE1DC;
	// li r29,1
	r29.s64 = 1;
loc_821DE1DC:
	// lwz r11,80(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lha r11,30(r28)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r28.u32 + 30));
	// bne cr6,0x821de494
	if (!ctx.cr6.eq) goto loc_821DE494;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821de3b0
	if (ctx.cr6.eq) goto loc_821DE3B0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821de324
	if (ctx.cr6.eq) goto loc_821DE324;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821de298
	if (ctx.cr6.eq) goto loc_821DE298;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821de9f4
	if (!ctx.cr6.eq) goto loc_821DE9F4;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r31,r11,5024
	r31.s64 = ctx.r11.s64 + 5024;
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bge cr6,0x821de230
	if (!ctx.cr6.lt) goto loc_821DE230;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,12(r31)
	REX_STORE_U8(r31.u32 + 12, ctx.r11.u8);
loc_821DE230:
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r30,r10,5128
	r30.s64 = ctx.r10.s64 + 5128;
	// lbz r9,67(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 67);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x821de260
	if (!ctx.cr0.eq) goto loc_821DE260;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x821de260
	if (ctx.cr6.lt) goto loc_821DE260;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,67
	ctx.r3.s64 = 67;
	// bl 0x821dde50
	ctx.lr = 0x821DE25C;
	sub_821DDE50(ctx, base);
	// lbz r9,67(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 67);
loc_821DE260:
	// lbz r11,13(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 13);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bge cr6,0x821de27c
	if (!ctx.cr6.lt) goto loc_821DE27C;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,13(r31)
	REX_STORE_U8(r31.u32 + 13, ctx.r11.u8);
loc_821DE27C:
	// extsb. r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821de9f4
	if (!ctx.cr0.eq) goto loc_821DE9F4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821de9f4
	if (ctx.cr6.lt) goto loc_821DE9F4;
	// li r3,67
	ctx.r3.s64 = 67;
	// b 0x821de8f4
	goto loc_821DE8F4;
loc_821DE298:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r31,r11,5024
	r31.s64 = ctx.r11.s64 + 5024;
	// lbz r11,18(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 18);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bge cr6,0x821de2bc
	if (!ctx.cr6.lt) goto loc_821DE2BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,18(r31)
	REX_STORE_U8(r31.u32 + 18, ctx.r11.u8);
loc_821DE2BC:
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r30,r10,5128
	r30.s64 = ctx.r10.s64 + 5128;
	// lbz r9,70(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 70);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x821de2ec
	if (!ctx.cr0.eq) goto loc_821DE2EC;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x821de2ec
	if (ctx.cr6.lt) goto loc_821DE2EC;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,70
	ctx.r3.s64 = 70;
	// bl 0x821dde50
	ctx.lr = 0x821DE2E8;
	sub_821DDE50(ctx, base);
	// lbz r9,70(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 70);
loc_821DE2EC:
	// lbz r11,19(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 19);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bge cr6,0x821de308
	if (!ctx.cr6.lt) goto loc_821DE308;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,19(r31)
	REX_STORE_U8(r31.u32 + 19, ctx.r11.u8);
loc_821DE308:
	// extsb. r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821de9f4
	if (!ctx.cr0.eq) goto loc_821DE9F4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821de9f4
	if (ctx.cr6.lt) goto loc_821DE9F4;
	// li r3,70
	ctx.r3.s64 = 70;
	// b 0x821de8f4
	goto loc_821DE8F4;
loc_821DE324:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r31,r11,5024
	r31.s64 = ctx.r11.s64 + 5024;
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bge cr6,0x821de348
	if (!ctx.cr6.lt) goto loc_821DE348;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
loc_821DE348:
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r30,r10,5128
	r30.s64 = ctx.r10.s64 + 5128;
	// lbz r9,64(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 64);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x821de378
	if (!ctx.cr0.eq) goto loc_821DE378;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x821de378
	if (ctx.cr6.lt) goto loc_821DE378;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x821dde50
	ctx.lr = 0x821DE374;
	sub_821DDE50(ctx, base);
	// lbz r9,64(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 64);
loc_821DE378:
	// lbz r11,5(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 5);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bge cr6,0x821de394
	if (!ctx.cr6.lt) goto loc_821DE394;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r11.u8);
loc_821DE394:
	// extsb. r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821de9f4
	if (!ctx.cr0.eq) goto loc_821DE9F4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821de9f4
	if (ctx.cr6.lt) goto loc_821DE9F4;
	// li r3,64
	ctx.r3.s64 = 64;
	// b 0x821de8f4
	goto loc_821DE8F4;
loc_821DE3B0:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r31,r11,5024
	r31.s64 = ctx.r11.s64 + 5024;
	// lbz r11,5024(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 5024);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bge cr6,0x821de3d4
	if (!ctx.cr6.lt) goto loc_821DE3D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
loc_821DE3D4:
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r30,r10,5128
	r30.s64 = ctx.r10.s64 + 5128;
	// lbz r9,62(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 62);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x821de404
	if (!ctx.cr0.eq) goto loc_821DE404;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// blt cr6,0x821de404
	if (ctx.cr6.lt) goto loc_821DE404;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,62
	ctx.r3.s64 = 62;
	// bl 0x821dde50
	ctx.lr = 0x821DE400;
	sub_821DDE50(ctx, base);
	// lbz r9,62(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 62);
loc_821DE404:
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bge cr6,0x821de420
	if (!ctx.cr6.lt) goto loc_821DE420;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r11.u8);
loc_821DE420:
	// extsb. r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821de440
	if (!ctx.cr0.eq) goto loc_821DE440;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821de440
	if (ctx.cr6.lt) goto loc_821DE440;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,62
	ctx.r3.s64 = 62;
	// bl 0x821dde50
	ctx.lr = 0x821DE440;
	sub_821DDE50(ctx, base);
loc_821DE440:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x821de9f4
	if (ctx.cr6.eq) goto loc_821DE9F4;
	// lwz r11,220(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 220);
	// lha r11,88(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 88));
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// ble cr6,0x821de45c
	if (!ctx.cr6.gt) goto loc_821DE45C;
	// li r11,33
	ctx.r11.s64 = 33;
loc_821DE45C:
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-5784
	ctx.r10.s64 = ctx.r10.s64 + -5784;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lhax r3,r11,r10
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
	// bl 0x821de150
	ctx.lr = 0x821DE480;
	sub_821DE150(ctx, base);
	// lwz r11,220(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 220);
	// lha r3,88(r11)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 88));
	// bl 0x821b3110
	ctx.lr = 0x821DE48C;
	sub_821B3110(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x821de9e0
	goto loc_821DE9E0;
loc_821DE494:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821de900
	if (ctx.cr6.eq) goto loc_821DE900;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821de6b8
	if (ctx.cr6.eq) goto loc_821DE6B8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821de62c
	if (ctx.cr6.eq) goto loc_821DE62C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821de9f4
	if (!ctx.cr6.eq) goto loc_821DE9F4;
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x821de5b8
	if (ctx.cr6.eq) goto loc_821DE5B8;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x821de544
	if (ctx.cr6.eq) goto loc_821DE544;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x821de9f4
	if (!ctx.cr6.eq) goto loc_821DE9F4;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r10,r11,5024
	ctx.r10.s64 = ctx.r11.s64 + 5024;
	// lbz r11,17(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 17);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bge cr6,0x821de4f4
	if (!ctx.cr6.lt) goto loc_821DE4F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,17(r10)
	REX_STORE_U8(ctx.r10.u32 + 17, ctx.r11.u8);
loc_821DE4F4:
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r31,r10,5128
	r31.s64 = ctx.r10.s64 + 5128;
	// lbz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 80);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821de524
	if (!ctx.cr0.eq) goto loc_821DE524;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x821de524
	if (ctx.cr6.lt) goto loc_821DE524;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x821dde50
	ctx.lr = 0x821DE520;
	sub_821DDE50(ctx, base);
	// lbz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 80);
loc_821DE524:
	// extsb. r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821de9f4
	if (!ctx.cr0.eq) goto loc_821DE9F4;
	// lwz r11,220(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 220);
	// lha r11,19272(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 19272));
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// blt cr6,0x821de9f4
	if (ctx.cr6.lt) goto loc_821DE9F4;
	// li r3,80
	ctx.r3.s64 = 80;
	// b 0x821de8f4
	goto loc_821DE8F4;
loc_821DE544:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r10,r11,5024
	ctx.r10.s64 = ctx.r11.s64 + 5024;
	// lbz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 16);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bge cr6,0x821de568
	if (!ctx.cr6.lt) goto loc_821DE568;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,16(r10)
	REX_STORE_U8(ctx.r10.u32 + 16, ctx.r11.u8);
loc_821DE568:
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r31,r10,5128
	r31.s64 = ctx.r10.s64 + 5128;
	// lbz r10,69(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 69);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821de598
	if (!ctx.cr0.eq) goto loc_821DE598;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x821de598
	if (ctx.cr6.lt) goto loc_821DE598;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,69
	ctx.r3.s64 = 69;
	// bl 0x821dde50
	ctx.lr = 0x821DE594;
	sub_821DDE50(ctx, base);
	// lbz r10,69(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 69);
loc_821DE598:
	// extsb. r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821de9f4
	if (!ctx.cr0.eq) goto loc_821DE9F4;
	// lwz r11,220(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 220);
	// lha r11,19272(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 19272));
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// blt cr6,0x821de9f4
	if (ctx.cr6.lt) goto loc_821DE9F4;
	// li r3,69
	ctx.r3.s64 = 69;
	// b 0x821de8f4
	goto loc_821DE8F4;
loc_821DE5B8:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r10,r11,5024
	ctx.r10.s64 = ctx.r11.s64 + 5024;
	// lbz r11,14(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 14);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bge cr6,0x821de5dc
	if (!ctx.cr6.lt) goto loc_821DE5DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,14(r10)
	REX_STORE_U8(ctx.r10.u32 + 14, ctx.r11.u8);
loc_821DE5DC:
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r31,r10,5128
	r31.s64 = ctx.r10.s64 + 5128;
	// lbz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 68);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821de60c
	if (!ctx.cr0.eq) goto loc_821DE60C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x821de60c
	if (ctx.cr6.lt) goto loc_821DE60C;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x821dde50
	ctx.lr = 0x821DE608;
	sub_821DDE50(ctx, base);
	// lbz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 68);
loc_821DE60C:
	// extsb. r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821de9f4
	if (!ctx.cr0.eq) goto loc_821DE9F4;
	// lwz r11,220(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 220);
	// lha r11,19272(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 19272));
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// blt cr6,0x821de9f4
	if (ctx.cr6.lt) goto loc_821DE9F4;
	// li r3,68
	ctx.r3.s64 = 68;
	// b 0x821de8f4
	goto loc_821DE8F4;
loc_821DE62C:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r31,r11,5024
	r31.s64 = ctx.r11.s64 + 5024;
	// lbz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 20);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bge cr6,0x821de650
	if (!ctx.cr6.lt) goto loc_821DE650;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,20(r31)
	REX_STORE_U8(r31.u32 + 20, ctx.r11.u8);
loc_821DE650:
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r30,r10,5128
	r30.s64 = ctx.r10.s64 + 5128;
	// lbz r9,71(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 71);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x821de680
	if (!ctx.cr0.eq) goto loc_821DE680;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x821de680
	if (ctx.cr6.lt) goto loc_821DE680;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,71
	ctx.r3.s64 = 71;
	// bl 0x821dde50
	ctx.lr = 0x821DE67C;
	sub_821DDE50(ctx, base);
	// lbz r9,71(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 71);
loc_821DE680:
	// lbz r11,21(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 21);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bge cr6,0x821de69c
	if (!ctx.cr6.lt) goto loc_821DE69C;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,21(r31)
	REX_STORE_U8(r31.u32 + 21, ctx.r11.u8);
loc_821DE69C:
	// extsb. r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821de9f4
	if (!ctx.cr0.eq) goto loc_821DE9F4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821de9f4
	if (ctx.cr6.lt) goto loc_821DE9F4;
	// li r3,71
	ctx.r3.s64 = 71;
	// b 0x821de8f4
	goto loc_821DE8F4;
loc_821DE6B8:
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821de82c
	if (ctx.cr6.eq) goto loc_821DE82C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821de760
	if (ctx.cr6.eq) goto loc_821DE760;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821de9f4
	if (!ctx.cr6.eq) goto loc_821DE9F4;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r31,r11,5024
	r31.s64 = ctx.r11.s64 + 5024;
	// lbz r11,10(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bge cr6,0x821de6f8
	if (!ctx.cr6.lt) goto loc_821DE6F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,10(r31)
	REX_STORE_U8(r31.u32 + 10, ctx.r11.u8);
loc_821DE6F8:
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r30,r10,5128
	r30.s64 = ctx.r10.s64 + 5128;
	// lbz r9,81(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 81);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x821de728
	if (!ctx.cr0.eq) goto loc_821DE728;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x821de728
	if (ctx.cr6.lt) goto loc_821DE728;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,81
	ctx.r3.s64 = 81;
	// bl 0x821dde50
	ctx.lr = 0x821DE724;
	sub_821DDE50(ctx, base);
	// lbz r9,81(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 81);
loc_821DE728:
	// lbz r11,11(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bge cr6,0x821de744
	if (!ctx.cr6.lt) goto loc_821DE744;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,11(r31)
	REX_STORE_U8(r31.u32 + 11, ctx.r11.u8);
loc_821DE744:
	// extsb. r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821de9f4
	if (!ctx.cr0.eq) goto loc_821DE9F4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821de9f4
	if (ctx.cr6.lt) goto loc_821DE9F4;
	// li r3,81
	ctx.r3.s64 = 81;
	// b 0x821de8f4
	goto loc_821DE8F4;
loc_821DE760:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r30,r11,5128
	r30.s64 = ctx.r11.s64 + 5128;
	// lbz r11,5128(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 5128);
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821de9f4
	if (ctx.cr6.eq) goto loc_821DE9F4;
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1);
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821de9f4
	if (ctx.cr6.eq) goto loc_821DE9F4;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r31,r11,5024
	r31.s64 = ctx.r11.s64 + 5024;
	// lbz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bge cr6,0x821de7cc
	if (!ctx.cr6.lt) goto loc_821DE7CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,8(r31)
	REX_STORE_U8(r31.u32 + 8, ctx.r11.u8);
loc_821DE7CC:
	// lbz r9,66(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 66);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x821de7f4
	if (!ctx.cr0.eq) goto loc_821DE7F4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x821de7f4
	if (ctx.cr6.lt) goto loc_821DE7F4;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,66
	ctx.r3.s64 = 66;
	// bl 0x821dde50
	ctx.lr = 0x821DE7F0;
	sub_821DDE50(ctx, base);
	// lbz r9,66(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 66);
loc_821DE7F4:
	// lbz r11,9(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 9);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bge cr6,0x821de810
	if (!ctx.cr6.lt) goto loc_821DE810;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,9(r31)
	REX_STORE_U8(r31.u32 + 9, ctx.r11.u8);
loc_821DE810:
	// extsb. r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821de9f4
	if (!ctx.cr0.eq) goto loc_821DE9F4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821de9f4
	if (ctx.cr6.lt) goto loc_821DE9F4;
	// li r3,66
	ctx.r3.s64 = 66;
	// b 0x821de8f4
	goto loc_821DE8F4;
loc_821DE82C:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r30,r11,5128
	r30.s64 = ctx.r11.s64 + 5128;
	// lbz r11,5128(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 5128);
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821de9f4
	if (ctx.cr6.eq) goto loc_821DE9F4;
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1);
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821de9f4
	if (ctx.cr6.eq) goto loc_821DE9F4;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r31,r11,5024
	r31.s64 = ctx.r11.s64 + 5024;
	// lbz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 6);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bge cr6,0x821de898
	if (!ctx.cr6.lt) goto loc_821DE898;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,6(r31)
	REX_STORE_U8(r31.u32 + 6, ctx.r11.u8);
loc_821DE898:
	// lbz r9,65(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 65);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x821de8c0
	if (!ctx.cr0.eq) goto loc_821DE8C0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x821de8c0
	if (ctx.cr6.lt) goto loc_821DE8C0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,65
	ctx.r3.s64 = 65;
	// bl 0x821dde50
	ctx.lr = 0x821DE8BC;
	sub_821DDE50(ctx, base);
	// lbz r9,65(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 65);
loc_821DE8C0:
	// lbz r11,7(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 7);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bge cr6,0x821de8dc
	if (!ctx.cr6.lt) goto loc_821DE8DC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,7(r31)
	REX_STORE_U8(r31.u32 + 7, ctx.r11.u8);
loc_821DE8DC:
	// extsb. r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821de9f4
	if (!ctx.cr0.eq) goto loc_821DE9F4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821de9f4
	if (ctx.cr6.lt) goto loc_821DE9F4;
	// li r3,65
	ctx.r3.s64 = 65;
loc_821DE8F4:
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x821dde50
	ctx.lr = 0x821DE8FC;
	sub_821DDE50(ctx, base);
	// b 0x821de9f4
	goto loc_821DE9F4;
loc_821DE900:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r31,r11,5024
	r31.s64 = ctx.r11.s64 + 5024;
	// lbz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bge cr6,0x821de924
	if (!ctx.cr6.lt) goto loc_821DE924;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,2(r31)
	REX_STORE_U8(r31.u32 + 2, ctx.r11.u8);
loc_821DE924:
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r30,r10,5128
	r30.s64 = ctx.r10.s64 + 5128;
	// lbz r9,63(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 63);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x821de954
	if (!ctx.cr0.eq) goto loc_821DE954;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x821de954
	if (ctx.cr6.lt) goto loc_821DE954;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x821dde50
	ctx.lr = 0x821DE950;
	sub_821DDE50(ctx, base);
	// lbz r9,63(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 63);
loc_821DE954:
	// lbz r11,3(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 3);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bge cr6,0x821de970
	if (!ctx.cr6.lt) goto loc_821DE970;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,3(r31)
	REX_STORE_U8(r31.u32 + 3, ctx.r11.u8);
loc_821DE970:
	// extsb. r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821de990
	if (!ctx.cr0.eq) goto loc_821DE990;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821de990
	if (ctx.cr6.lt) goto loc_821DE990;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x821dde50
	ctx.lr = 0x821DE990;
	sub_821DDE50(ctx, base);
loc_821DE990:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x821de9f4
	if (ctx.cr6.eq) goto loc_821DE9F4;
	// lwz r11,220(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 220);
	// lha r11,88(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 88));
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// ble cr6,0x821de9ac
	if (!ctx.cr6.gt) goto loc_821DE9AC;
	// li r11,33
	ctx.r11.s64 = 33;
loc_821DE9AC:
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-5784
	ctx.r10.s64 = ctx.r10.s64 + -5784;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// lhax r3,r11,r10
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
	// bl 0x821de150
	ctx.lr = 0x821DE9D0;
	sub_821DE150(ctx, base);
	// lwz r11,220(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 220);
	// lha r3,88(r11)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 88));
	// bl 0x821b3110
	ctx.lr = 0x821DE9DC;
	sub_821B3110(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
loc_821DE9E0:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r3,288
	ctx.r3.s64 = ctx.r3.s64 + 288;
	// bl 0x821de150
	ctx.lr = 0x821DE9F4;
	sub_821DE150(ctx, base);
loc_821DE9F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,428(r28)
	REX_STORE_U16(r28.u32 + 428, ctx.r11.u16);
loc_821DE9FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822007F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200850) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200940) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,332(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 332, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200990) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,368(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 368, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200A28) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,224(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 224);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200B28) {
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
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r3,r3,260
	ctx.r3.s64 = ctx.r3.s64 + 260;
	// bl 0x822d6450
	ctx.lr = 0x82200B48;
	sub_822D6450(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,275(r31)
	REX_STORE_U8(r31.u32 + 275, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_82202A80) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f30
	ctx.lr = 0x82202A98;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(r30.s32, 6, ctx.xer);
	// fmr f27,f2
	f27.f64 = ctx.f2.f64;
	// fmr f28,f3
	f28.f64 = ctx.f3.f64;
	// fmr f26,f4
	f26.f64 = ctx.f4.f64;
	// blt cr6,0x82202ad0
	if (ctx.cr6.lt) goto loc_82202AD0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,16264(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82204b00
	ctx.lr = 0x82202AD0;
	sub_82204B00(ctx, base);
loc_82202AD0:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f30,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f30.f64 = double(temp.f32);
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// fsubs f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 - ctx.f0.f64));
	// blt cr6,0x82202b70
	if (ctx.cr6.lt) goto loc_82202B70;
	// beq cr6,0x82202b5c
	if (ctx.cr6.eq) goto loc_82202B5C;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// blt cr6,0x82202b4c
	if (ctx.cr6.lt) goto loc_82202B4C;
	// beq cr6,0x82202b38
	if (ctx.cr6.eq) goto loc_82202B38;
	// cmplwi cr6,r30,5
	ctx.cr6.compare<uint32_t>(r30.u32, 5, ctx.xer);
	// blt cr6,0x82202b2c
	if (ctx.cr6.lt) goto loc_82202B2C;
	// bne cr6,0x82202b7c
	if (!ctx.cr6.eq) goto loc_82202B7C;
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 - ctx.f0.f64));
	// stfs f31,4(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// b 0x82202b78
	goto loc_82202B78;
loc_82202B2C:
	// stfs f30,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f31,4(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// b 0x82202b68
	goto loc_82202B68;
loc_82202B38:
	// fsubs f0,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 - ctx.f0.f64));
	// stfs f30,8(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f31,0(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// b 0x82202b7c
	goto loc_82202B7C;
loc_82202B4C:
	// stfs f30,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f31,0(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// b 0x82202b7c
	goto loc_82202B7C;
loc_82202B5C:
	// stfs f30,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 - ctx.f0.f64));
	// stfs f31,8(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
loc_82202B68:
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// b 0x82202b7c
	goto loc_82202B7C;
loc_82202B70:
	// stfs f31,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
loc_82202B78:
	// stfs f30,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
loc_82202B7C:
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x82204ae0
	ctx.lr = 0x82202B8C;
	sub_82204AE0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f1,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f30.f64 - ctx.f1.f64));
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r11,21248
	ctx.r5.s64 = ctx.r11.s64 + 21248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e20b0
	ctx.lr = 0x82202BA4;
	sub_820E20B0(ctx, base);
	// fcmpu cr6,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f28.f64, f31.f64);
	// bge cr6,0x82202bb0
	if (!ctx.cr6.lt) goto loc_82202BB0;
	// fmr f28,f31
	f28.f64 = f31.f64;
loc_82202BB0:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e1cf8
	ctx.lr = 0x82202BC0;
	sub_820E1CF8(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x82202bd0
	if (ctx.cr6.gt) goto loc_82202BD0;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_82202BD0:
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x82202be4
	if (ctx.cr6.gt) goto loc_82202BE4;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_82202BE4:
	// stfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x82202bf8
	if (ctx.cr6.gt) goto loc_82202BF8;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_82202BF8:
	// stfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// lfs f3,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82204ae0
	ctx.lr = 0x82202C10;
	sub_82204AE0(ctx, base);
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f7c
	ctx.lr = 0x82202C24;
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

DEFINE_REX_FUNC(xstart) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8220A440;
	// addi r31,r1,-496
	r31.s64 = ctx.r1.s64 + -496;
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// lis r8,-32161
	ctx.r8.s64 = -2107703296;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,-11316(r9)
	REX_STORE_U32(ctx.r9.u32 + -11316, ctx.r11.u32);
	// stw r10,-11312(r8)
	REX_STORE_U32(ctx.r8.u32 + -11312, ctx.r10.u32);
	// bl 0x8220c338
	ctx.lr = 0x8220A470;
	sub_8220C338(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8220c188
	ctx.lr = 0x8220A478;
	sub_8220C188(ctx, base);
	// bl 0x8220a1d8
	ctx.lr = 0x8220A47C;
	sub_8220A1D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8220a48c
	if (ctx.cr0.eq) goto loc_8220A48C;
	// bl 0x824d40dc
	ctx.lr = 0x8220A488;
	__imp__XamLoaderTerminateTitle(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8220A48C:
	// bl 0x822d7168
	ctx.lr = 0x8220A490;
	sub_822D7168(ctx, base);
	// bl 0x8220c110
	ctx.lr = 0x8220A494;
	sub_8220C110(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8220c030
	ctx.lr = 0x8220A49C;
	sub_8220C030(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,-11464(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220a5b8
	if (ctx.cr6.eq) goto loc_8220A5B8;
	// li r28,0
	r28.s64 = 0;
	// addi r30,r31,112
	r30.s64 = r31.s64 + 112;
	// mr r29,r28
	r29.u64 = r28.u64;
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r28,96(r31)
	REX_STORE_U32(r31.u32 + 96, r28.u32);
	// bl 0x8220c020
	ctx.lr = 0x8220A4C4;
	sub_8220C020(ctx, base);
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220a5a0
	if (ctx.cr0.eq) goto loc_8220A5A0;
	// addi r10,r31,192
	ctx.r10.s64 = r31.s64 + 192;
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
loc_8220A4D8:
	// lbz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// stb r9,80(r31)
	REX_STORE_U8(r31.u32 + 80, ctx.r9.u8);
loc_8220A4E0:
	// extsb. r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220a518
	if (ctx.cr0.eq) goto loc_8220A518;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x8220a4f8
	if (ctx.cr6.eq) goto loc_8220A4F8;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8220a518
	if (!ctx.cr6.eq) goto loc_8220A518;
loc_8220A4F8:
	// stb r28,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r28.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzu r9,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// stb r9,80(r31)
	REX_STORE_U8(r31.u32 + 80, ctx.r9.u8);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8220a4e0
	goto loc_8220A4E0;
loc_8220A518:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220a59c
	if (ctx.cr6.eq) goto loc_8220A59C;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// stw r29,96(r31)
	REX_STORE_U32(r31.u32 + 96, r29.u32);
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r28,100(r31)
	REX_STORE_U32(r31.u32 + 100, r28.u32);
loc_8220A53C:
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// beq cr6,0x8220a554
	if (ctx.cr6.eq) goto loc_8220A554;
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// b 0x8220a560
	goto loc_8220A560;
loc_8220A554:
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r8,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r8.u32);
loc_8220A560:
	// lbzu r9,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// extsb. r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// stb r9,80(r31)
	REX_STORE_U8(r31.u32 + 80, ctx.r9.u8);
	// beq 0x8220a58c
	if (ctx.cr0.eq) goto loc_8220A58C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8220a53c
	if (!ctx.cr6.eq) goto loc_8220A53C;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x8220a58c
	if (ctx.cr6.eq) goto loc_8220A58C;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8220a53c
	if (!ctx.cr6.eq) goto loc_8220A53C;
loc_8220A58C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220a59c
	if (ctx.cr6.eq) goto loc_8220A59C;
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(r29.s32, 16, ctx.xer);
	// ble cr6,0x8220a4d8
	if (!ctx.cr6.gt) goto loc_8220A4D8;
loc_8220A59C:
	// stb r28,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r28.u8);
loc_8220A5A0:
	// stw r28,0(r30)
	REX_STORE_U32(r30.u32 + 0, r28.u32);
	// stwu r28,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r28.u32);
	r30.u32 = ea;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// b 0x8220a5c0
	goto loc_8220A5C0;
loc_8220A5B8:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220A5C0:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8216eaa8
	ctx.lr = 0x8220A5C8;
	sub_8216EAA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822d6410
	ctx.lr = 0x8220A5D0;
	sub_822D6410(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,27292
	ctx.r3.s64 = ctx.r11.s64 + 27292;
	// bl 0x824d422c
	ctx.lr = 0x8220A5E0;
	__imp__DbgPrint(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x824d40dc
	ctx.lr = 0x8220A5F0;
	__imp__XamLoaderTerminateTitle(ctx, base);
}

DEFINE_REX_FUNC(sub_82211300) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,28,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211370) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10544);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211698) {
	REX_FUNC_PROLOGUE();
	// lwz r3,12420(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12420);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822118B0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,10704(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 10704);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822119D0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10560(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211CD0) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r10,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// rlwinm r10,r9,13,19,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1FFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwimi r10,r11,0,29,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// clrlwi r3,r10,29
	ctx.r3.u64 = ctx.r10.u32 & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82212A30) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,642
	ctx.r11.s64 = ctx.r4.s64 + 642;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r9,r4,9
	ctx.r9.s64 = ctx.r4.s64 + 9;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// srd r10,r8,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82214CC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82214CD0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,11069(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 11069);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r30,15332(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 15332);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r28,r11,4
	r28.s64 = ctx.r11.s64 + 4;
	// bne 0x82214e0c
	if (!ctx.cr0.eq) goto loc_82214E0C;
	// lbz r11,11068(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 11068);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82214d64
	if (ctx.cr0.eq) goto loc_82214D64;
	// lwz r11,13920(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 13920);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214e0c
	if (ctx.cr6.eq) goto loc_82214E0C;
	// lwz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82214e0c
	if (!ctx.cr6.eq) goto loc_82214E0C;
	// subf r11,r30,r28
	ctx.r11.u64 = r28.u64 - r30.u64;
	// srawi. r29,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r29.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82214e0c
	if (ctx.cr0.eq) goto loc_82214E0C;
	// lwz r11,13944(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 13944);
	// lwz r3,13940(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 13940);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82214d38
	if (ctx.cr6.lt) goto loc_82214D38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215980
	ctx.lr = 0x82214D38;
	sub_82215980(ctx, base);
loc_82214D38:
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r30,3
	ctx.r10.u64 = r30.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// oris r9,r29,33024
	ctx.r9.u64 = r29.u64 | 2164260864;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r8,13940(r31)
	REX_STORE_U32(r31.u32 + 13940, ctx.r8.u32);
	// b 0x82214e0c
	goto loc_82214E0C;
loc_82214D64:
	// lwz r11,13600(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13600);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214dc8
	if (ctx.cr6.eq) goto loc_82214DC8;
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r30,3
	ctx.r10.u64 = r30.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// subf r9,r30,r28
	ctx.r9.u64 = r28.u64 - r30.u64;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// srawi. r30,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	r30.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq 0x82214e0c
	if (ctx.cr0.eq) goto loc_82214E0C;
	// lwz r11,13772(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13772);
	// addi r3,r31,13760
	ctx.r3.s64 = r31.s64 + 13760;
	// lwz r10,13776(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13776);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82214db0
	if (!ctx.cr6.gt) goto loc_82214DB0;
	// bl 0x82214938
	ctx.lr = 0x82214DAC;
	sub_82214938(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82214DB0:
	// oris r10,r30,33024
	ctx.r10.u64 = r30.u64 | 2164260864;
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,13772(r31)
	REX_STORE_U32(r31.u32 + 13772, ctx.r9.u32);
	// b 0x82214e0c
	goto loc_82214E0C;
loc_82214DC8:
	// addi r4,r28,-4
	ctx.r4.s64 = r28.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82214578
	ctx.lr = 0x82214DD4;
	sub_82214578(ctx, base);
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// subf r6,r30,r4
	ctx.r6.u64 = ctx.r4.u64 - r30.u64;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// clrlwi r10,r30,3
	ctx.r10.u64 = r30.u32 & 0x1FFFFFFF;
	// addi r8,r31,13760
	ctx.r8.s64 = r31.s64 + 13760;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// srawi r6,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82214ac8
	ctx.lr = 0x82214E08;
	sub_82214AC8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_82214E0C:
	// addi r11,r28,31
	ctx.r11.s64 = r28.s64 + 31;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// rlwinm r9,r11,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82214e38
	if (!ctx.cr6.gt) goto loc_82214E38;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82213f28
	ctx.lr = 0x82214E34;
	sub_82213F28(ctx, base);
	// b 0x82214e48
	goto loc_82214E48;
loc_82214E38:
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// stw r11,15332(r31)
	REX_STORE_U32(r31.u32 + 15332, ctx.r11.u32);
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
loc_82214E48:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8221C838) {
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
	ctx.lr = 0x8221C840;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// addi r27,r11,8
	r27.s64 = ctx.r11.s64 + 8;
	// lwz r26,4(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8221C858:
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8221c910
	if (!ctx.cr6.lt) goto loc_8221C910;
	// addi r5,r26,-1
	ctx.r5.s64 = r26.s64 + -1;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
loc_8221C870:
	// lhz r9,-2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// rlwinm r7,r5,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r28,r9,1
	r28.s64 = ctx.r9.s64 + 1;
	// lhz r30,-4(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lhz r29,0(r11)
	r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// add r9,r7,r27
	ctx.r9.u64 = ctx.r7.u64 + r27.u64;
	// lwz r31,0(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r28,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r28,r8,3,0,28
	r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r30,r30,3
	r30.u64 = __builtin_rotateleft32(r30.u32, 3);
	// rotlwi r29,r29,3
	r29.u64 = __builtin_rotateleft32(r29.u32, 3);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_8221C8B0:
	// lwz r24,-4(r9)
	r24.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r24,r7
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8221c8e8
	if (!ctx.cr6.lt) goto loc_8221C8E8;
	// lwz r24,4(r9)
	r24.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r24,r30
	ctx.cr6.compare<uint32_t>(r24.u32, r30.u32, ctx.xer);
	// ble cr6,0x8221c8e8
	if (!ctx.cr6.gt) goto loc_8221C8E8;
	// lwz r24,0(r9)
	r24.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r24,r28
	ctx.cr6.compare<uint32_t>(r24.u32, r28.u32, ctx.xer);
	// bge cr6,0x8221c8e8
	if (!ctx.cr6.lt) goto loc_8221C8E8;
	// lwz r24,8(r9)
	r24.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r24,r29
	ctx.cr6.compare<uint32_t>(r24.u32, r29.u32, ctx.xer);
	// ble cr6,0x8221c8e8
	if (!ctx.cr6.gt) goto loc_8221C8E8;
	// ori r6,r6,3
	ctx.r6.u64 = ctx.r6.u64 | 3;
loc_8221C8E8:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// bne cr6,0x8221c8b0
	if (!ctx.cr6.eq) goto loc_8221C8B0;
	// oris r9,r6,32768
	ctx.r9.u64 = ctx.r6.u64 | 2147483648;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8221c870
	if (ctx.cr6.lt) goto loc_8221C870;
loc_8221C910:
	// lwz r31,0(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x8221c924
	if (ctx.cr6.eq) goto loc_8221C924;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8221c548
	ctx.lr = 0x8221C924;
	sub_8221C548(ctx, base);
loc_8221C924:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8221c858
	if (!ctx.cr6.eq) goto loc_8221C858;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82221320) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,2,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x2;
	// rlwinm. r10,r10,23,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82221358
	if (!ctx.cr0.eq) goto loc_82221358;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r9,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// stw r9,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82221358:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// bne cr6,0x82221390
	if (!ctx.cr6.eq) goto loc_82221390;
	// clrlwi r10,r10,21
	ctx.r10.u64 = ctx.r10.u32 & 0x7FF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,21,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x7FF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,10,22,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3FF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822213b8
	goto loc_822213B8;
loc_82221390:
	// clrlwi r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,19,19,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1FFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,6,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822213B8:
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82223398) {
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
	ctx.lr = 0x822233A0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,3230
	ctx.r11.s64 = ctx.r4.s64 + 3230;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// lwzx r28,r29,r3
	r28.u64 = REX_LOAD_U32(r29.u32 + ctx.r3.u32);
	// beq cr6,0x822234a0
	if (ctx.cr6.eq) goto loc_822234A0;
	// lwz r27,48(r5)
	r27.u64 = REX_LOAD_U32(ctx.r5.u32 + 48);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r7,32(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// rlwinm r9,r27,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 12) & 0xFFF;
	// lwz r26,44(r5)
	r26.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// rlwinm r10,r7,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0xFFF;
	// lwz r25,28(r5)
	r25.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// lwz r24,36(r5)
	r24.u64 = REX_LOAD_U32(ctx.r5.u32 + 36);
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// lwz r22,0(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r30,r7,3
	r30.u64 = ctx.r7.u32 & 0x1FFFFFFF;
	// lwz r21,12(r11)
	r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r8,r9,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// lwz r20,20(r11)
	r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r3,r10,0,19,19
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// lwz r23,40(r5)
	r23.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// add r9,r31,r4
	ctx.r9.u64 = r31.u64 + ctx.r4.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r7,r27,0,3,22
	ctx.r7.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x1FFFFE00;
	// lwz r27,4(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r24,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r24.u32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
	// rlwimi r10,r4,0,30,21
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFC03) | (ctx.r10.u64 & 0x3FC);
	// lbz r8,12356(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 12356);
	// rlwimi r25,r22,0,10,21
	r25.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x3FFC00) | (r25.u64 & 0xFFFFFFFFFFC003FF);
	// rlwimi r3,r27,0,20,20
	ctx.r3.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x800) | (ctx.r3.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// rlwimi r23,r21,0,1,12
	r23.u64 = (__builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x7FF80000) | (r23.u64 & 0xFFFFFFFF8007FFFF);
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r25.u32);
	// rlwimi r7,r20,0,23,31
	ctx.r7.u64 = (__builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x1FF) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFE00);
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// rlwinm r4,r26,30,28,31
	ctx.r4.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0xF;
	// stw r23,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r23.u32);
	// stw r7,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82223468
	if (!ctx.cr6.gt) goto loc_82223468;
	// rotlwi r8,r26,0
	ctx.r8.u64 = __builtin_rotateleft32(r26.u32, 0);
	// rlwinm r8,r8,30,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0xF;
loc_82223468:
	// lwz r7,44(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// rlwimi r10,r8,2,26,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFC3);
	// lbz r9,12382(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 12382);
	// rlwinm r8,r7,26,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0xF;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82223488
	if (!ctx.cr6.lt) goto loc_82223488;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82223488:
	// ld r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 24);
	// rlwimi r10,r9,6,22,25
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3C0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFC3F);
	// or r9,r8,r6
	ctx.r9.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// std r9,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r9.u64);
	// b 0x822234ac
	goto loc_822234AC;
loc_822234A0:
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r10.u32);
loc_822234AC:
	// stwx r5,r29,r31
	REX_STORE_U32(r29.u32 + r31.u32, ctx.r5.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8222351c
	if (ctx.cr6.eq) goto loc_8222351C;
	// lwz r11,11036(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822234cc
	if (ctx.cr6.eq) goto loc_822234CC;
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
	// b 0x8222351c
	goto loc_8222351C;
loc_822234CC:
	// lwz r11,11040(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11040);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222351c
	if (ctx.cr0.eq) goto loc_8222351C;
	// lwz r11,13932(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13932);
	// lwz r3,13928(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 13928);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822234f4
	if (ctx.cr6.lt) goto loc_822234F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822158d0
	ctx.lr = 0x822234F4;
	sub_822158D0(ctx, base);
loc_822234F4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// rlwimi r11,r28,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
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
	// stw r9,13928(r31)
	REX_STORE_U32(r31.u32 + 13928, ctx.r9.u32);
loc_8222351C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_8222BE18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// vrfim128 v61,v1
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v1.f32), SIMDE_MM_FROUND_TO_NEG_INF | SIMDE_MM_FROUND_NO_EXC));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-25632
	ctx.r11.s64 = ctx.r11.s64 + -25632;
	// addi r10,r10,-25648
	ctx.r10.s64 = ctx.r10.s64 + -25648;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v12,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v8,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v7,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vsubfp128 v0,v1,v61
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vspltw128 v6,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// vspltw128 v5,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vexptefp128 v61,v61
	{
		simde__m128 x = simde_mm_load_ps(ctx.v61.f32);
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
		simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(p, simde_mm_castsi128_ps(exp_bits)));
	}
	// vspltw128 v9,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// vspltw128 v10,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vspltw128 v11,v62,3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x0));
	// vmaddfp v8,v0,v8,v12
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v13,v0,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v7,v0,v6,v7
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v0,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v8,v13,v5,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vmaddfp v9,v13,v9,v7
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v13,v13,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v10,v0,v10,v8
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vmaddfp v0,v0,v11,v9
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v0,v13,v0,v10
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vor128 v63,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vrefp128 v0,v63
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v63.f32)));
	// vor128 v9,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vor128 v10,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vnmsubfp v8,v9,v0,v12
	simde_mm_store_ps(ctx.v8.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v13,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vmaddfp v0,v0,v8,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v12,v10,v0,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v9,v0,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v12,v13,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v1,v61,v12
	simde_mm_store_ps(ctx.v1.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v12.f32)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822342D0) {
	REX_FUNC_PROLOGUE();
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// lhz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82234450) {
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
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r11,r11,-5864
	ctx.r11.s64 = ctx.r11.s64 + -5864;
	// lwz r4,44(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne 0x82234484
	if (!ctx.cr0.eq) goto loc_82234484;
	// lis r3,-32747
	ctx.r3.s64 = -2146107392;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// b 0x822344c0
	goto loc_822344C0;
loc_82234484:
	// sth r3,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// li r6,4
	ctx.r6.s64 = 4;
	// lhz r5,40(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 40);
	// addi r7,r9,17104
	ctx.r7.s64 = ctx.r9.s64 + 17104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d7830
	ctx.lr = 0x822344A0;
	sub_822D7830(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822344b4
	if (!ctx.cr0.eq) goto loc_822344B4;
	// lis r3,-32747
	ctx.r3.s64 = -2146107392;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x822344c0
	goto loc_822344C0;
loc_822344B4:
	// lhz r11,2(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_822344C0:
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

DEFINE_REX_FUNC(sub_822355E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822355E8;
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x824d3f1c
	ctx.lr = 0x82235604;
	__imp__XamGetSystemVersion(ctx, base);
	// lis r11,8202
	ctx.r11.s64 = 537526272;
	// ori r11,r11,12800
	ctx.r11.u64 = ctx.r11.u64 | 12800;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82235654
	if (ctx.cr6.lt) goto loc_82235654;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,22432
	ctx.r3.s64 = ctx.r11.s64 + 22432;
	// bl 0x824d492c
	ctx.lr = 0x82235624;
	__imp__XexGetModuleHandle(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82235654
	if (ctx.cr0.lt) goto loc_82235654;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x824d42ec
	ctx.lr = 0x8223563C;
	__imp__XexGetProcedureAddress(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82235658
	goto loc_82235658;
loc_82235654:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82235658:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x82235680
	if (ctx.cr6.eq) goto loc_82235680;
	// lis r6,8275
	ctx.r6.s64 = 542310400;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// ori r6,r6,512
	ctx.r6.u64 = ctx.r6.u64 | 512;
	// bctrl 
	ctx.lr = 0x8223567C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82235684
	goto loc_82235684;
loc_82235680:
	// bl 0x824d47cc
	ctx.lr = 0x82235684;
	__imp__NetDll_WSAStartup(ctx, base);
loc_82235684:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82236F50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82236F58;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,52(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r3,52
	r30.s64 = ctx.r3.s64 + 52;
	// li r28,0
	r28.s64 = 0;
loc_82236F6C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82236fbc
	if (ctx.cr6.eq) goto loc_82236FBC;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// beq cr6,0x82236fbc
	if (ctx.cr6.eq) goto loc_82236FBC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82236fac
	if (ctx.cr6.eq) goto loc_82236FAC;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82236fa0
	if (!ctx.cr6.eq) goto loc_82236FA0;
	// stw r28,4(r30)
	REX_STORE_U32(r30.u32 + 4, r28.u32);
loc_82236FA0:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
loc_82236FAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82236eb0
	ctx.lr = 0x82236FB4;
	sub_82236EB0(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x82236f6c
	goto loc_82236F6C;
loc_82236FBC:
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r29,r31,44
	r29.s64 = r31.s64 + 44;
loc_82236FC4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82237100
	if (ctx.cr6.eq) goto loc_82237100;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// beq cr6,0x82237100
	if (ctx.cr6.eq) goto loc_82237100;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82237008
	if (ctx.cr6.eq) goto loc_82237008;
	// lwz r8,4(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82236ffc
	if (!ctx.cr6.eq) goto loc_82236FFC;
	// stw r28,4(r29)
	REX_STORE_U32(r29.u32 + 4, r28.u32);
loc_82236FFC:
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r8.u32);
	// stw r28,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r28.u32);
loc_82237008:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822370f0
	if (!ctx.cr6.eq) goto loc_822370F0;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lbz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 60);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r10,140(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 140);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82237034
	if (ctx.cr6.eq) goto loc_82237034;
	// stb r10,60(r31)
	REX_STORE_U8(r31.u32 + 60, ctx.r10.u8);
loc_82237034:
	// lhz r10,62(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 62);
	// cmplwi cr6,r10,2048
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2048, ctx.xer);
	// blt cr6,0x82237044
	if (ctx.cr6.lt) goto loc_82237044;
	// sth r28,62(r31)
	REX_STORE_U16(r31.u32 + 62, r28.u16);
loc_82237044:
	// lhz r10,-2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lbz r8,60(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 60);
	// li r7,259
	ctx.r7.s64 = 259;
	// rlwimi r10,r8,12,0,19
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// sth r10,-2(r11)
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r10.u16);
	// lhz r10,62(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 62);
	// rlwimi r8,r10,1,20,30
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFE) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF001);
	// sth r8,-2(r11)
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r8.u16);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lhz r10,62(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 62);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,62(r31)
	REX_STORE_U16(r31.u32 + 62, ctx.r10.u16);
	// lhz r10,-2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lwz r8,212(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 212);
	// rlwinm r8,r8,0,12,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF0000;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwimi r10,r9,27,31,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// sth r10,-2(r11)
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r10.u16);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// stw r28,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822370c4
	if (ctx.cr6.eq) goto loc_822370C4;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// b 0x822370c8
	goto loc_822370C8;
loc_822370C4:
	// stw r4,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r4.u32);
loc_822370C8:
	// stw r4,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r8,240(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 240);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r10,240(r11)
	REX_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
	// b 0x822370f8
	goto loc_822370F8;
loc_822370F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82236eb0
	ctx.lr = 0x822370F8;
	sub_82236EB0(ctx, base);
loc_822370F8:
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x82236fc4
	goto loc_82236FC4;
loc_82237100:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8223DA60) {
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
	ctx.lr = 0x8223DA68;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// li r28,0
	r28.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x8223dbc4
	if (ctx.cr6.eq) goto loc_8223DBC4;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223dac8
	if (!ctx.cr6.gt) goto loc_8223DAC8;
	// addi r30,r3,20
	r30.s64 = ctx.r3.s64 + 20;
loc_8223DAAC:
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x8223b450
	ctx.lr = 0x8223DAB4;
	sub_8223B450(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwu r28,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r28.u32);
	r30.u32 = ea;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223daac
	if (ctx.cr6.lt) goto loc_8223DAAC;
loc_8223DAC8:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223db04
	if (!ctx.cr6.gt) goto loc_8223DB04;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
loc_8223DADC:
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223DAF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwu r28,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r28.u32);
	r30.u32 = ea;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223dadc
	if (ctx.cr6.lt) goto loc_8223DADC;
loc_8223DB04:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223db74
	if (ctx.cr6.eq) goto loc_8223DB74;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223db70
	if (ctx.cr6.eq) goto loc_8223DB70;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lfs f1,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223DB38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223DB50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223DB70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223DB70:
	// stw r28,76(r31)
	REX_STORE_U32(r31.u32 + 76, r28.u32);
loc_8223DB74:
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223db94
	if (ctx.cr6.eq) goto loc_8223DB94;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223DB90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,72(r31)
	REX_STORE_U32(r31.u32 + 72, r28.u32);
loc_8223DB94:
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223dbb4
	if (ctx.cr6.eq) goto loc_8223DBB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223DBB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,80(r31)
	REX_STORE_U32(r31.u32 + 80, r28.u32);
loc_8223DBB4:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,32784
	ctx.r4.u64 = ctx.r4.u64 | 32784;
	// bl 0x823cd250
	ctx.lr = 0x8223DBC4;
	sub_823CD250(ctx, base);
loc_8223DBC4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822463A8) {
	REX_FUNC_PROLOGUE();
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82246410
	if (ctx.cr6.eq) goto loc_82246410;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r10,r10,23872
	ctx.r10.s64 = ctx.r10.s64 + 23872;
	// lwz r9,544(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 544);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82246410
	if (!ctx.cr6.lt) goto loc_82246410;
	// rlwinm r8,r11,25,7,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFC;
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
	// mulli r9,r11,12
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r11,r8,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82246410
	if (!ctx.cr6.eq) goto loc_82246410;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r9,r3,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82246410
	if (!ctx.cr6.eq) goto loc_82246410;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82246410:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82246CB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82246CB8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82246ce8
	if (ctx.cr0.eq) goto loc_82246CE8;
loc_82246CD4:
	// mulli r8,r31,33
	ctx.r8.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(33));
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// add r31,r8,r11
	r31.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mr. r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82246cd4
	if (!ctx.cr0.eq) goto loc_82246CD4;
loc_82246CE8:
	// li r11,27
	ctx.r11.s64 = 27;
	// divwu r11,r31,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? r31.u32 / ctx.r11.u32 : 0);
	// mulli r11,r11,27
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(27));
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r3
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x82246d28
	goto loc_82246D28;
loc_82246D04:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x82246d24
	if (!ctx.cr6.eq) goto loc_82246D24;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x822d7938
	ctx.lr = 0x82246D1C;
	sub_822D7938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82246d3c
	if (ctx.cr0.eq) goto loc_82246D3C;
loc_82246D24:
	// lwz r30,12(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 12);
loc_82246D28:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82246d04
	if (!ctx.cr6.eq) goto loc_82246D04;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82246D34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_82246D3C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82246d34
	goto loc_82246D34;
}

DEFINE_REX_FUNC(sub_82248788) {
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
	ctx.lr = 0x822487A0;
	sub_82246220(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822487cc
	if (ctx.cr0.lt) goto loc_822487CC;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822487c0
	if (ctx.cr6.eq) goto loc_822487C0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x822487cc
	goto loc_822487CC;
loc_822487C0:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,4(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x8226ee20
	ctx.lr = 0x822487CC;
	sub_8226EE20(ctx, base);
loc_822487CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82249610) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82246220
	ctx.lr = 0x82249628;
	sub_82246220(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224965c
	if (ctx.cr6.eq) goto loc_8224965C;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x8224965c
	if (!ctx.cr6.eq) goto loc_8224965C;
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,168(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x82249664
	goto loc_82249664;
loc_8224965C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82249664:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224B0B0) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,27
	ctx.r9.s64 = 27;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// divwu r9,r10,r9
	ctx.r9.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mulli r9,r9,27
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(27));
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// beq cr6,0x8224b0f0
	if (ctx.cr6.eq) goto loc_8224B0F0;
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x8224b0fc
	goto loc_8224B0FC;
loc_8224B0F0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
loc_8224B0FC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224b110
	if (ctx.cr6.eq) goto loc_8224B110;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_8224B110:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82255b70
	ctx.lr = 0x8224B118;
	sub_82255B70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x8224B120;
	sub_82255B70(ctx, base);
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

DEFINE_REX_FUNC(sub_8224D0C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8224D0D0;
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
	// addi r31,r11,-9856
	r31.s64 = ctx.r11.s64 + -9856;
	// lwz r11,26516(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 26516);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8224d4a4
	if (!ctx.cr0.eq) goto loc_8224D4A4;
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
	// stw r11,26516(r8)
	REX_STORE_U32(ctx.r8.u32 + 26516, ctx.r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r11,248
	ctx.r11.s64 = 248;
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
	// bl 0x8224ce20
	ctx.lr = 0x8224D12C;
	sub_8224CE20(ctx, base);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// addi r9,r9,-29176
	ctx.r9.s64 = ctx.r9.s64 + -29176;
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
	// addi r9,r11,-4140
	ctx.r9.s64 = ctx.r11.s64 + -4140;
	// std r30,40(r31)
	REX_STORE_U64(r31.u32 + 40, r30.u64);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// li r9,184
	ctx.r9.s64 = 184;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// li r10,7
	ctx.r10.s64 = 7;
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
	// bl 0x82259ee8
	ctx.lr = 0x8224D188;
	sub_82259EE8(ctx, base);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// addi r9,r9,-29048
	ctx.r9.s64 = ctx.r9.s64 + -29048;
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
	// addi r9,r11,-4152
	ctx.r9.s64 = ctx.r11.s64 + -4152;
	// std r30,88(r31)
	REX_STORE_U64(r31.u32 + 88, r30.u64);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// li r9,200
	ctx.r9.s64 = 200;
	// stw r10,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,108(r31)
	REX_STORE_U32(r31.u32 + 108, r30.u32);
	// addi r11,r31,88
	ctx.r11.s64 = r31.s64 + 88;
	// stw r9,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// bl 0x82259f70
	ctx.lr = 0x8224D1E4;
	sub_82259F70(ctx, base);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,124(r31)
	REX_STORE_U32(r31.u32 + 124, r30.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r30,128(r31)
	REX_STORE_U32(r31.u32 + 128, r30.u32);
	// addi r11,r31,136
	ctx.r11.s64 = r31.s64 + 136;
	// stw r3,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// addi r11,r9,-28928
	ctx.r11.s64 = ctx.r9.s64 + -28928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// addi r9,r10,-4172
	ctx.r9.s64 = ctx.r10.s64 + -4172;
	// std r30,136(r31)
	REX_STORE_U64(r31.u32 + 136, r30.u64);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r9.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r30,144(r31)
	REX_STORE_U32(r31.u32 + 144, r30.u32);
	// stw r10,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// li r11,196
	ctx.r11.s64 = 196;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r30,156(r31)
	REX_STORE_U32(r31.u32 + 156, r30.u32);
	// stw r11,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r11.u32);
	// stw r10,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r10.u32);
	// bl 0x8224d060
	ctx.lr = 0x8224D244;
	sub_8224D060(ctx, base);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r30,172(r31)
	REX_STORE_U32(r31.u32 + 172, r30.u32);
	// addi r9,r9,-28808
	ctx.r9.s64 = ctx.r9.s64 + -28808;
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
	// li r9,212
	ctx.r9.s64 = 212;
	// addi r8,r8,-3852
	ctx.r8.s64 = ctx.r8.s64 + -3852;
	// stw r30,192(r31)
	REX_STORE_U32(r31.u32 + 192, r30.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r30,204(r31)
	REX_STORE_U32(r31.u32 + 204, r30.u32);
	// stw r9,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r8,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r8.u32);
	// addi r11,r31,184
	ctx.r11.s64 = r31.s64 + 184;
	// stw r10,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r10.u32);
	// bl 0x8224ce90
	ctx.lr = 0x8224D29C;
	sub_8224CE90(ctx, base);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,220(r31)
	REX_STORE_U32(r31.u32 + 220, r30.u32);
	// addi r9,r9,-28704
	ctx.r9.s64 = ctx.r9.s64 + -28704;
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
	// addi r9,r11,-3884
	ctx.r9.s64 = ctx.r11.s64 + -3884;
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
	// li r9,232
	ctx.r9.s64 = 232;
	// li r10,3
	ctx.r10.s64 = 3;
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
	// bl 0x8224cf10
	ctx.lr = 0x8224D2FC;
	sub_8224CF10(ctx, base);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// addi r11,r31,280
	ctx.r11.s64 = r31.s64 + 280;
	// stw r30,268(r31)
	REX_STORE_U32(r31.u32 + 268, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r3,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r3.u32);
	// addi r11,r9,-28576
	ctx.r11.s64 = ctx.r9.s64 + -28576;
	// stw r30,272(r31)
	REX_STORE_U32(r31.u32 + 272, r30.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r11.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,6
	ctx.r10.s64 = 6;
	// std r30,280(r31)
	REX_STORE_U64(r31.u32 + 280, r30.u64);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r11.u32);
	// li r11,236
	ctx.r11.s64 = 236;
	// stw r10,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r10.u32);
	// addi r9,r9,-3916
	ctx.r9.s64 = ctx.r9.s64 + -3916;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r30,300(r31)
	REX_STORE_U32(r31.u32 + 300, r30.u32);
	// stw r9,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r9.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r11,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r11.u32);
	// stw r10,308(r31)
	REX_STORE_U32(r31.u32 + 308, ctx.r10.u32);
	// bl 0x8224cf80
	ctx.lr = 0x8224D35C;
	sub_8224CF80(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r30,316(r31)
	REX_STORE_U32(r31.u32 + 316, r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,320(r31)
	REX_STORE_U32(r31.u32 + 320, r30.u32);
	// addi r9,r9,-28472
	ctx.r9.s64 = ctx.r9.s64 + -28472;
	// stw r3,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r3.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r9,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r9.u32);
	// addi r9,r11,-4184
	ctx.r9.s64 = ctx.r11.s64 + -4184;
	// li r10,7
	ctx.r10.s64 = 7;
	// std r30,328(r31)
	REX_STORE_U64(r31.u32 + 328, r30.u64);
	// stw r9,352(r31)
	REX_STORE_U32(r31.u32 + 352, ctx.r9.u32);
	// stw r10,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r10.u32);
	// li r9,240
	ctx.r9.s64 = 240;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r30,336(r31)
	REX_STORE_U32(r31.u32 + 336, r30.u32);
	// stw r30,348(r31)
	REX_STORE_U32(r31.u32 + 348, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r9,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r9.u32);
	// addi r11,r31,328
	ctx.r11.s64 = r31.s64 + 328;
	// stw r10,356(r31)
	REX_STORE_U32(r31.u32 + 356, ctx.r10.u32);
	// bl 0x8224cff0
	ctx.lr = 0x8224D3B8;
	sub_8224CFF0(ctx, base);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r30,364(r31)
	REX_STORE_U32(r31.u32 + 364, r30.u32);
	// addi r9,r9,-28272
	ctx.r9.s64 = ctx.r9.s64 + -28272;
	// stw r3,360(r31)
	REX_STORE_U32(r31.u32 + 360, ctx.r3.u32);
	// addi r10,r10,-28368
	ctx.r10.s64 = ctx.r10.s64 + -28368;
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
	// li r9,240
	ctx.r9.s64 = 240;
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
	// bl 0x8224cff0
	ctx.lr = 0x8224D418;
	sub_8224CFF0(ctx, base);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,408(r31)
	REX_STORE_U32(r31.u32 + 408, ctx.r3.u32);
	// addi r10,r10,-28152
	ctx.r10.s64 = ctx.r10.s64 + -28152;
	// stw r30,412(r31)
	REX_STORE_U32(r31.u32 + 412, r30.u32);
	// addi r9,r9,-28056
	ctx.r9.s64 = ctx.r9.s64 + -28056;
	// stw r10,416(r31)
	REX_STORE_U32(r31.u32 + 416, ctx.r10.u32);
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r9,420(r31)
	REX_STORE_U32(r31.u32 + 420, ctx.r9.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// std r30,424(r31)
	REX_STORE_U64(r31.u32 + 424, r30.u64);
	// addi r11,r31,424
	ctx.r11.s64 = r31.s64 + 424;
	// stw r10,436(r31)
	REX_STORE_U32(r31.u32 + 436, ctx.r10.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,432(r31)
	REX_STORE_U32(r31.u32 + 432, r30.u32);
	// addi r9,r8,-4652
	ctx.r9.s64 = ctx.r8.s64 + -4652;
	// stw r30,444(r31)
	REX_STORE_U32(r31.u32 + 444, r30.u32);
	// li r11,240
	ctx.r11.s64 = 240;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,448(r31)
	REX_STORE_U32(r31.u32 + 448, ctx.r9.u32);
	// stw r11,440(r31)
	REX_STORE_U32(r31.u32 + 440, ctx.r11.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r10,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r10.u32);
	// bl 0x8225a078
	ctx.lr = 0x8224D478;
	sub_8225A078(ctx, base);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r30,460(r31)
	REX_STORE_U32(r31.u32 + 460, r30.u32);
	// addi r10,r10,-27928
	ctx.r10.s64 = ctx.r10.s64 + -27928;
	// stw r3,456(r31)
	REX_STORE_U32(r31.u32 + 456, ctx.r3.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// addi r9,r9,-27832
	ctx.r9.s64 = ctx.r9.s64 + -27832;
	// stw r10,464(r31)
	REX_STORE_U32(r31.u32 + 464, ctx.r10.u32);
	// stw r9,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r9.u32);
	// addi r11,r31,472
	ctx.r11.s64 = r31.s64 + 472;
	// std r30,472(r31)
	REX_STORE_U64(r31.u32 + 472, r30.u64);
loc_8224D4A4:
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8225C120) {
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
	// lwz r5,36(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225c178
	if (ctx.cr6.eq) goto loc_8225C178;
	// lwz r10,72(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x8225c154
	if (!ctx.cr6.eq) goto loc_8225C154;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8225c17c
	goto loc_8225C17C;
loc_8225C154:
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r4,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r4.u32);
	// lis r4,-21829
	ctx.r4.s64 = -1430585344;
	// stw r10,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// ori r4,r4,52445
	ctx.r4.u64 = ctx.r4.u64 | 52445;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// bl 0x822786c8
	ctx.lr = 0x8225C178;
	sub_822786C8(ctx, base);
loc_8225C178:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225C17C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8225D540) {
	REX_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822573f8
	sub_822573F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8225D588) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
loc_8225D59C:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8225d600
	if (ctx.cr6.lt) goto loc_8225D600;
	// lwz r9,32(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// std r9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8225d600
	if (!ctx.cr6.lt) goto loc_8225D600;
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8225d600
	if (ctx.cr6.lt) goto loc_8225D600;
	// lwz r9,36(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// std r9,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r9.u64);
	// lfd f12,-8(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8225d600
	if (!ctx.cr6.lt) goto loc_8225D600;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8225d59c
	if (ctx.cr6.lt) goto loc_8225D59C;
	// blr 
	return;
loc_8225D600:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8225E9F8) {
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
	// bl 0x8225dc88
	ctx.lr = 0x8225EA1C;
	sub_8225DC88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224da00
	ctx.lr = 0x8225EA28;
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

DEFINE_REX_FUNC(sub_8225FB10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8225FB18;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lfs f1,2000(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f1.f64 = double(temp.f32);
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// bl 0x8225f5b0
	ctx.lr = 0x8225FB44;
	sub_8225F5B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225fb88
	if (ctx.cr0.eq) goto loc_8225FB88;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lfs f2,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225FB68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// lwz r3,160(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// bge 0x8225fb80
	if (!ctx.cr0.lt) goto loc_8225FB80;
loc_8225FB74:
	// bl 0x822d7b58
	ctx.lr = 0x8225FB78;
	sub_822D7B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8225fbec
	goto loc_8225FBEC;
loc_8225FB80:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8225fbe0
	goto loc_8225FBE0;
loc_8225FB88:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225f6d8
	ctx.lr = 0x8225FB98;
	sub_8225F6D8(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8225fb10
	ctx.lr = 0x8225FBA8;
	sub_8225FB10(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x8225fbb8
	if (!ctx.cr0.lt) goto loc_8225FBB8;
	// lwz r3,160(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// b 0x8225fb74
	goto loc_8225FB74;
loc_8225FBB8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8225fb10
	ctx.lr = 0x8225FBC8;
	sub_8225FB10(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// lwz r3,160(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// blt 0x8225fb74
	if (ctx.cr0.lt) goto loc_8225FB74;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8225FBE0:
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// bl 0x822d7b58
	ctx.lr = 0x8225FBE8;
	sub_822D7B58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225FBEC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82265CF0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82265d58
	if (ctx.cr6.eq) goto loc_82265D58;
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82265d58
	if (!ctx.cr6.eq) goto loc_82265D58;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225d438
	ctx.lr = 0x82265D2C;
	sub_8225D438(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// bl 0x82265310
	ctx.lr = 0x82265D40;
	sub_82265310(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82265d5c
	if (ctx.cr0.lt) goto loc_82265D5C;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,124(r30)
	REX_STORE_U32(r30.u32 + 124, ctx.r11.u32);
	// stb r10,12(r30)
	REX_STORE_U8(r30.u32 + 12, ctx.r10.u8);
loc_82265D58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82265D5C:
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

DEFINE_REX_FUNC(sub_822682A8) {
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
	ctx.lr = 0x822682B0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r29,8(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// ble cr6,0x82268358
	if (!ctx.cr6.gt) goto loc_82268358;
	// addi r27,r29,-1
	r27.s64 = r29.s64 + -1;
	// li r30,0
	r30.s64 = 0;
loc_822682E0:
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(r31.s32, r27.s32, ctx.xer);
	// add r11,r30,r10
	ctx.r11.u64 = r30.u64 + ctx.r10.u64;
	// bge cr6,0x822682f4
	if (!ctx.cr6.lt) goto loc_822682F4;
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
loc_822682F4:
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lfs f11,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f10,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f9,124(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x8225fb10
	ctx.lr = 0x82268348;
	sub_8225FB10(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(r31.s32, r29.s32, ctx.xer);
	// blt cr6,0x822682e0
	if (ctx.cr6.lt) goto loc_822682E0;
loc_82268358:
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x822d7b58
	ctx.lr = 0x82268360;
	sub_822D7B58(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8226D438) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8226D440;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226d5a4
	if (ctx.cr6.eq) goto loc_8226D5A4;
	// lwz r11,240(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r11.u32);
	// lwz r30,23664(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 23664);
	// bl 0x822469c0
	ctx.lr = 0x8226D474;
	sub_822469C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82246920
	ctx.lr = 0x8226D47C;
	sub_82246920(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8226d4f0
	if (ctx.cr0.eq) goto loc_8226D4F0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226d49c
	if (ctx.cr6.eq) goto loc_8226D49C;
	// lwz r10,240(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 240);
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// stw r10,240(r11)
	REX_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
loc_8226D49C:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226d4b0
	if (ctx.cr6.eq) goto loc_8226D4B0;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
loc_8226D4B0:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226d4c4
	if (ctx.cr6.eq) goto loc_8226D4C4;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
loc_8226D4C4:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8226d4dc
	if (!ctx.cr6.eq) goto loc_8226D4DC;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
loc_8226D4DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// b 0x8226d5a4
	goto loc_8226D5A4;
loc_8226D4F0:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x8226D4F8;
	sub_822469C0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226d514
	if (ctx.cr6.eq) goto loc_8226D514;
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// b 0x8226d51c
	goto loc_8226D51C;
loc_8226D514:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_8226D51C:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226d534
	if (ctx.cr6.eq) goto loc_8226D534;
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// b 0x8226d53c
	goto loc_8226D53C;
loc_8226D534:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_8226D53C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// bl 0x822469c0
	ctx.lr = 0x8226D554;
	sub_822469C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8225dae8
	ctx.lr = 0x8226D564;
	sub_8225DAE8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8224da00
	ctx.lr = 0x8226D570;
	sub_8224DA00(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x8226d59c
	if (!ctx.cr6.eq) goto loc_8226D59C;
	// bl 0x822567b0
	ctx.lr = 0x8226D57C;
	sub_822567B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8226d59c
	if (!ctx.cr0.eq) goto loc_8226D59C;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x8226D58C;
	sub_822469C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8225fdf0
	ctx.lr = 0x8226D59C;
	sub_8225FDF0(ctx, base);
loc_8226D59C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226ced8
	ctx.lr = 0x8226D5A4;
	sub_8226CED8(ctx, base);
loc_8226D5A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82276548) {
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
	ctx.lr = 0x82276550;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x822d6a10
	ctx.lr = 0x8227656C;
	sub_822D6A10(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822d6a10
	ctx.lr = 0x82276578;
	sub_822D6A10(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// add r31,r31,r3
	r31.u64 = r31.u64 + ctx.r3.u64;
	// addi r26,r11,1284
	r26.s64 = ctx.r11.s64 + 1284;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822d6a10
	ctx.lr = 0x8227658C;
	sub_822D6A10(ctx, base);
	// add r31,r3,r31
	r31.u64 = ctx.r3.u64 + r31.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822765a8
	if (ctx.cr6.eq) goto loc_822765A8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d6a10
	ctx.lr = 0x822765A0;
	sub_822D6A10(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + r31.u64;
	// addi r31,r11,1
	r31.s64 = ctx.r11.s64 + 1;
loc_822765A8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// rlwinm r3,r31,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82255b48
	ctx.lr = 0x822765B4;
	sub_82255B48(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822765cc
	if (!ctx.cr0.eq) goto loc_822765CC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8227663c
	goto loc_8227663C;
loc_822765CC:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822d6c18
	ctx.lr = 0x822765D8;
	sub_822D6C18(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x822d7d70
	ctx.lr = 0x822765E8;
	sub_822D7D70(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x822d7d70
	ctx.lr = 0x822765F8;
	sub_822D7D70(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82276638
	if (ctx.cr6.eq) goto loc_82276638;
	// li r4,35
	ctx.r4.s64 = 35;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x822d7b70
	ctx.lr = 0x8227660C;
	sub_822D7B70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82276628
	if (!ctx.cr0.eq) goto loc_82276628;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r11,1292
	ctx.r5.s64 = ctx.r11.s64 + 1292;
	// bl 0x822d7d70
	ctx.lr = 0x82276628;
	sub_822D7D70(ctx, base);
loc_82276628:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822d7d70
	ctx.lr = 0x82276638;
	sub_822D7D70(ctx, base);
loc_82276638:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227663C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82278448) {
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
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r31,r11,29960
	r31.s64 = ctx.r11.s64 + 29960;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d438c
	ctx.lr = 0x8227846C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r11,29988
	ctx.r3.s64 = ctx.r11.s64 + 29988;
	// bl 0x822783a0
	ctx.lr = 0x8227847C;
	sub_822783A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d437c
	ctx.lr = 0x82278484;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

DEFINE_REX_FUNC(sub_82278ED8) {
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
	ctx.lr = 0x82278EE0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82278f60
	if (!ctx.cr6.lt) goto loc_82278F60;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r27,r4,4,0,27
	r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + r27.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82278f60
	if (ctx.cr6.lt) goto loc_82278F60;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, ctx.xer);
	// blt cr6,0x82278f60
	if (ctx.cr6.lt) goto loc_82278F60;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82278f60
	if (ctx.cr6.gt) goto loc_82278F60;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82278f4c
	if (ctx.cr6.eq) goto loc_82278F4C;
	// mr r28,r30
	r28.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
loc_82278F38:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8227fbb0
	ctx.lr = 0x82278F40;
	sub_8227FBB0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// bne 0x82278f38
	if (!ctx.cr0.eq) goto loc_82278F38;
loc_82278F4C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x82278f64
	goto loc_82278F64;
loc_82278F60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82278F64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8227B0E0) {
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
	ctx.lr = 0x8227B0E8;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x8227b1ec
	if (ctx.cr6.gt) goto loc_8227B1EC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8227b144
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8227B144;
	// bdzf 4*cr6+eq,0x8227b158
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8227B158;
	// bdzf 4*cr6+eq,0x8227b16c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8227B16C;
	// bdzf 4*cr6+eq,0x8227b198
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8227B198;
	// bdzf 4*cr6+eq,0x8227b184
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8227B184;
	// bdzf 4*cr6+eq,0x8227b1ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8227B1AC;
	// bdzf 4*cr6+eq,0x8227b1bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8227B1BC;
	// bne cr6,0x8227b1cc
	if (!ctx.cr6.eq) goto loc_8227B1CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,4(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8227ad60
	ctx.lr = 0x8227B13C;
	sub_8227AD60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8227b1dc
	goto loc_8227B1DC;
loc_8227B144:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,4(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8227ad60
	ctx.lr = 0x8227B150;
	sub_8227AD60(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8227b1dc
	goto loc_8227B1DC;
loc_8227B158:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,4(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8227ad60
	ctx.lr = 0x8227B164;
	sub_8227AD60(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8227b1dc
	goto loc_8227B1DC;
loc_8227B16C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	f31.f64 = double(temp.f32);
	// bl 0x8227ad60
	ctx.lr = 0x8227B178;
	sub_8227AD60(ctx, base);
	// stfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8227b1e0
	goto loc_8227B1E0;
loc_8227B184:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,4(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8227ad60
	ctx.lr = 0x8227B190;
	sub_8227AD60(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8227b1dc
	goto loc_8227B1DC;
loc_8227B198:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8227af18
	ctx.lr = 0x8227B1A4;
	sub_8227AF18(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8227b1e4
	goto loc_8227B1E4;
loc_8227B1AC:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227afa8
	ctx.lr = 0x8227B1B8;
	sub_8227AFA8(ctx, base);
	// b 0x8227b1e4
	goto loc_8227B1E4;
loc_8227B1BC:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227b000
	ctx.lr = 0x8227B1C8;
	sub_8227B000(ctx, base);
	// b 0x8227b1e4
	goto loc_8227B1E4;
loc_8227B1CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,4(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8227ad60
	ctx.lr = 0x8227B1D8;
	sub_8227AD60(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
loc_8227B1DC:
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
loc_8227B1E0:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8227B1E4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8227b1f4
	goto loc_8227B1F4;
loc_8227B1EC:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
loc_8227B1F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8227E730) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,29924
	r30.s64 = ctx.r11.s64 + 29924;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d438c
	ctx.lr = 0x8227E758;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,30196(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 30196);
	// bl 0x8227e580
	ctx.lr = 0x8227E768;
	sub_8227E580(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d437c
	ctx.lr = 0x8227E774;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

DEFINE_REX_FUNC(sub_8227F290) {
	REX_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8227f310
	if (ctx.cr6.lt) goto loc_8227F310;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8227F2AC:
	// lhz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// blt cr6,0x8227f2c8
	if (ctx.cr6.lt) goto loc_8227F2C8;
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// bgt cr6,0x8227f2c8
	if (ctx.cr6.gt) goto loc_8227F2C8;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// b 0x8227f2f4
	goto loc_8227F2F4;
loc_8227F2C8:
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blt cr6,0x8227f2e0
	if (ctx.cr6.lt) goto loc_8227F2E0;
	// cmplwi cr6,r11,70
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 70, ctx.xer);
	// bgt cr6,0x8227f2e0
	if (ctx.cr6.gt) goto loc_8227F2E0;
	// addi r11,r11,-55
	ctx.r11.s64 = ctx.r11.s64 + -55;
	// b 0x8227f2f4
	goto loc_8227F2F4;
loc_8227F2E0:
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x8227f31c
	if (ctx.cr6.lt) goto loc_8227F31C;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// bgt cr6,0x8227f31c
	if (ctx.cr6.gt) goto loc_8227F31C;
	// addi r11,r11,-87
	ctx.r11.s64 = ctx.r11.s64 + -87;
loc_8227F2F4:
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x8227f2ac
	if (!ctx.cr6.lt) goto loc_8227F2AC;
loc_8227F310:
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8227F31C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82281190) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82281274
	if (ctx.cr6.eq) goto loc_82281274;
	// li r31,0
	r31.s64 = 0;
	// stw r31,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r31.u32);
	// lwz r11,400(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82281220
	if (!ctx.cr6.gt) goto loc_82281220;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,400(r3)
	REX_STORE_U32(ctx.r3.u32 + 400, ctx.r11.u32);
	// lwzx r11,r10,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,400(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 400);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r31.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// stw r31,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r31.u32);
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r31.u32);
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r31.u32);
	// stw r31,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r31.u32);
	// stw r31,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r31.u32);
	// stw r31,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r31.u32);
	// sth r31,32(r11)
	REX_STORE_U16(ctx.r11.u32 + 32, r31.u16);
	// sth r31,34(r11)
	REX_STORE_U16(ctx.r11.u32 + 34, r31.u16);
	// sth r31,36(r11)
	REX_STORE_U16(ctx.r11.u32 + 36, r31.u16);
	// sth r31,38(r11)
	REX_STORE_U16(ctx.r11.u32 + 38, r31.u16);
	// stb r31,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, r31.u8);
	// b 0x82281274
	goto loc_82281274;
loc_82281220:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82255b48
	ctx.lr = 0x82281228;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228126c
	if (ctx.cr0.eq) goto loc_8228126C;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r31,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// stw r31,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// stw r31,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r31.u32);
	// stw r31,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r31.u32);
	// stw r31,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r31.u32);
	// sth r31,32(r3)
	REX_STORE_U16(ctx.r3.u32 + 32, r31.u16);
	// sth r31,34(r3)
	REX_STORE_U16(ctx.r3.u32 + 34, r31.u16);
	// sth r31,36(r3)
	REX_STORE_U16(ctx.r3.u32 + 36, r31.u16);
	// sth r31,38(r3)
	REX_STORE_U16(ctx.r3.u32 + 38, r31.u16);
	// stb r31,40(r3)
	REX_STORE_U8(ctx.r3.u32 + 40, r31.u8);
	// b 0x82281270
	goto loc_82281270;
loc_8228126C:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_82281270:
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_82281274:
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

DEFINE_REX_FUNC(sub_822862E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822862F0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,-2144(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -2144);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228631C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x82286334
	if (!ctx.cr0.lt) goto loc_82286334;
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x822d7b58
	ctx.lr = 0x8228632C;
	sub_822D7B58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x822863b0
	goto loc_822863B0;
loc_82286334:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f12,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f11,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,208(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bctrl 
	ctx.lr = 0x822863A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x822d7b58
	ctx.lr = 0x822863AC;
	sub_822D7B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822863B0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82288CC0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bne cr6,0x82288cf0
	if (!ctx.cr6.eq) goto loc_82288CF0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82288d2c
	goto loc_82288D2C;
loc_82288CF0:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288D00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82288d24
	if (ctx.cr0.eq) goto loc_82288D24;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288D1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82288d2c
	goto loc_82288D2C;
loc_82288D24:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,48
	ctx.r3.u64 = ctx.r3.u64 | 48;
loc_82288D2C:
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

DEFINE_REX_FUNC(sub_8228A5B0) {
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
	ctx.lr = 0x8228A5B8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r29,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r29.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bge cr6,0x8228a5f0
	if (!ctx.cr6.lt) goto loc_8228A5F0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8228a748
	goto loc_8228A748;
loc_8228A5F0:
	// lwz r3,332(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 332);
	// lis r8,6184
	ctx.r8.s64 = 405274624;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r8,134
	ctx.r8.u64 = ctx.r8.u64 | 134;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228A628;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8228a734
	if (ctx.cr0.lt) goto loc_8228A734;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82255b48
	ctx.lr = 0x8228A638;
	sub_82255B48(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8228a66c
	if (ctx.cr0.eq) goto loc_8228A66C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
	// addi r11,r11,7896
	ctx.r11.s64 = ctx.r11.s64 + 7896;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x82284b48
	ctx.lr = 0x8228A664;
	sub_82284B48(ctx, base);
	// mr r28,r30
	r28.u64 = r30.u64;
	// b 0x8228a670
	goto loc_8228A670;
loc_8228A66C:
	// mr r28,r29
	r28.u64 = r29.u64;
loc_8228A670:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8228a684
	if (!ctx.cr6.eq) goto loc_8228A684;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x8228a734
	goto loc_8228A734;
loc_8228A684:
	// lwz r3,332(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 332);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,31368(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31368);
	// rlwinm r8,r11,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lwz r11,128(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228A6B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8228a718
	if (ctx.cr0.lt) goto loc_8228A718;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,244(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228A6E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,132(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228A708;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8228a718
	if (ctx.cr6.lt) goto loc_8228A718;
	// stw r28,0(r24)
	REX_STORE_U32(r24.u32 + 0, r28.u32);
	// mr r28,r29
	r28.u64 = r29.u64;
loc_8228A718:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8228a734
	if (ctx.cr6.eq) goto loc_8228A734;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228A734;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228A734:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228a744
	if (ctx.cr6.eq) goto loc_8228A744;
	// bl 0x82216cc8
	ctx.lr = 0x8228A744;
	sub_82216CC8(ctx, base);
loc_8228A744:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8228A748:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82291698) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r11,12
	ctx.r11.s64 = 12;
	// lvlx128 v63,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltisw128 v61,-1
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvrx128 v60,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vslw128 v61,v61,v61
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v61.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v61.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_sllv_epi32(a, shift));
	}
	// lvrx128 v59,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vsldoi128 v60,v60,v60,4
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), 12));
	// vsldoi128 v59,v59,v59,4
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), 12));
	// vor128 v62,v62,v60
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vor128 v63,v63,v59
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vmsum3fp128 v62,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v62.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32), 0xEF));
	// vxor128 v62,v62,v61
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vrlimi128 v62,v63,14,0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 228), 14));
	// stvlx128 v62,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvrx128 v62,r3,r10
	ea = ctx.r3.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82293650) {
	REX_FUNC_PROLOGUE();
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r5,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82293930) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82293938;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r30,r11,-11616
	r30.s64 = ctx.r11.s64 + -11616;
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
	// lwz r31,-11616(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -11616);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822939a0
	if (ctx.cr6.eq) goto loc_822939A0;
loc_82293958:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x82293990
	if (!ctx.cr6.eq) goto loc_82293990;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822958c0
	ctx.lr = 0x82293970;
	sub_822958C0(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82293980
	if (ctx.cr6.eq) goto loc_82293980;
	// bl 0x82255b70
	ctx.lr = 0x82293980;
	sub_82255B70(ctx, base);
loc_82293980:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x82293988;
	sub_82255B70(ctx, base);
	// mr r31,r29
	r31.u64 = r29.u64;
	// b 0x82293994
	goto loc_82293994;
loc_82293990:
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82293994:
	// addi r11,r30,8
	ctx.r11.s64 = r30.s64 + 8;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82293958
	if (!ctx.cr6.eq) goto loc_82293958;
loc_822939A0:
	// lwz r4,32(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822939d4
	if (ctx.cr6.eq) goto loc_822939D4;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822939c4
	if (ctx.cr6.eq) goto loc_822939C4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82255b70
	ctx.lr = 0x822939C0;
	sub_82255B70(ctx, base);
	// b 0x822939cc
	goto loc_822939CC;
loc_822939C4:
	// addi r3,r28,20
	ctx.r3.s64 = r28.s64 + 20;
	// bl 0x82295cf8
	ctx.lr = 0x822939CC;
	sub_82295CF8(ctx, base);
loc_822939CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r28)
	REX_STORE_U32(r28.u32 + 32, ctx.r11.u32);
loc_822939D4:
	// addi r3,r28,20
	ctx.r3.s64 = r28.s64 + 20;
	// bl 0x82295dd8
	ctx.lr = 0x822939DC;
	sub_82295DD8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822973F0) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e54
	ctx.lr = 0x822973F8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// mr r15,r7
	r15.u64 = ctx.r7.u64;
	// lbz r9,1(r5)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// lbz r8,2(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r7,3(r5)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + 3);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// or r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 | ctx.r9.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// extsh r24,r9
	r24.s64 = ctx.r9.s16;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// li r17,0
	r17.s64 = 0;
	// addi r10,r5,10
	ctx.r10.s64 = ctx.r5.s64 + 10;
	// addi r28,r11,304
	r28.s64 = ctx.r11.s64 + 304;
	// extsh r25,r8
	r25.s64 = ctx.r8.s16;
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(r24.s32, -1, ctx.xer);
	// bne cr6,0x82297660
	if (!ctx.cr6.eq) goto loc_82297660;
	// addi r18,r28,384
	r18.s64 = r28.s64 + 384;
	// addi r31,r10,-2
	r31.s64 = ctx.r10.s64 + -2;
loc_82297450:
	// lbz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2);
	// li r21,0
	r21.s64 = 0;
	// lbz r11,3(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 3);
	// li r19,0
	r19.s64 = 0;
	// lbz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 4);
	// li r26,1
	r26.s64 = 1;
	// lbz r8,5(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 5);
	// rlwimi r11,r10,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// li r29,1
	r29.s64 = 1;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwimi r8,r9,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r25,1
	r25.s64 = 1;
	// li r24,1
	r24.s64 = 1;
	// clrlwi r27,r8,16
	r27.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// mr r20,r10
	r20.u64 = ctx.r10.u64;
	// beq 0x822974c0
	if (ctx.cr0.eq) goto loc_822974C0;
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwimi r10,r7,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r8,r11,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// b 0x822974d0
	goto loc_822974D0;
loc_822974C0:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// addi r31,r10,1
	r31.s64 = ctx.r10.s64 + 1;
	// lbz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
loc_822974D0:
	// rlwinm. r8,r20,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822974f4
	if (ctx.cr0.eq) goto loc_822974F4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822974ec
	if (ctx.cr6.eq) goto loc_822974EC;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// b 0x822974f4
	goto loc_822974F4;
loc_822974EC:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
loc_822974F4:
	// andi. r9,r20,200
	ctx.r9.u64 = r20.u64 & 200;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r23,r11,4,0,27
	r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r22,r10,4,0,27
	r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82297528
	if (ctx.cr0.eq) goto loc_82297528;
	// lbz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2);
	// li r19,1
	r19.s64 = 1;
	// lbz r10,3(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 3);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// or r29,r11,r10
	r29.u64 = ctx.r11.u64 | ctx.r10.u64;
	// mr r26,r29
	r26.u64 = r29.u64;
loc_82297528:
	// rlwinm. r11,r20,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0xC0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82297548
	if (ctx.cr0.eq) goto loc_82297548;
	// lbz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2);
	// lbz r10,3(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 3);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// or r29,r11,r10
	r29.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82297548:
	// rlwinm. r11,r20,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82297584
	if (ctx.cr0.eq) goto loc_82297584;
	// lbz r9,3(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 3);
	// mr r25,r29
	r25.u64 = r29.u64;
	// lbz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// li r21,1
	r21.s64 = 1;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lbz r8,3(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 3);
	// lbzu r11,2(r31)
	ea = 2 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
	// or r24,r10,r9
	r24.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// or r29,r11,r8
	r29.u64 = ctx.r11.u64 | ctx.r8.u64;
loc_82297584:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// li r30,0
	r30.s64 = 0;
	// bl 0x82297990
	ctx.lr = 0x82297590;
	sub_82297990(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82297398
	ctx.lr = 0x822975A0;
	sub_82297398(ctx, base);
	// mr. r17,r3
	r17.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r17.s32, 0, ctx.xer);
	// blt 0x82297914
	if (ctx.cr0.lt) goto loc_82297914;
	// lwz r11,388(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 388);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82297638
	if (!ctx.cr6.gt) goto loc_82297638;
	// li r6,0
	ctx.r6.s64 = 0;
loc_822975B8:
	// lwz r11,396(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 396);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// add r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwzx r11,r6,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// beq cr6,0x822975f4
	if (ctx.cr6.eq) goto loc_822975F4;
	// mullw r9,r11,r26
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(r26.s32);
	// mullw r7,r11,r25
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(r25.s32);
	// mullw r8,r10,r24
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(r24.s32);
	// mullw r11,r10,r29
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// srawi r11,r10,14
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 14;
	// srawi r10,r9,14
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 14;
	// b 0x8229760c
	goto loc_8229760C;
loc_822975F4:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x8229760c
	if (ctx.cr6.eq) goto loc_8229760C;
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r26.s32);
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// srawi r11,r11,14
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 14;
	// srawi r10,r10,14
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 14;
loc_8229760C:
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// subf r10,r22,r10
	ctx.r10.u64 = ctx.r10.u64 - r22.u64;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r11,396(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 396);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// lwz r11,388(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 388);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822975b8
	if (ctx.cr6.lt) goto loc_822975B8;
loc_82297638:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82297a68
	ctx.lr = 0x8229764C;
	sub_82297A68(ctx, base);
	// mr. r17,r3
	r17.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r17.s32, 0, ctx.xer);
	// blt 0x82297914
	if (ctx.cr0.lt) goto loc_82297914;
	// rlwinm. r11,r20,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82297450
	if (!ctx.cr0.eq) goto loc_82297450;
	// b 0x82297914
	goto loc_82297914;
loc_82297660:
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,412(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 412);
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r27,0
	r27.s64 = 0;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,-2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r6,-1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// rotlwi r5,r9,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 | ctx.r7.u64;
	// or r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 | ctx.r6.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r11,2
	r31.s64 = ctx.r11.s64 + 2;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r10,r11,3,13,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7FFF8;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822976f8
	if (!ctx.cr6.lt) goto loc_822976F8;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// lwz r3,408(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 408);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r30,r11,9,0,22
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// beq cr6,0x822976d0
	if (ctx.cr6.eq) goto loc_822976D0;
	// bl 0x82255b70
	ctx.lr = 0x822976D0;
	sub_82255B70(ctx, base);
loc_822976D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,412(r28)
	REX_STORE_U32(r28.u32 + 412, ctx.r11.u32);
	// bl 0x82255b48
	ctx.lr = 0x822976E0;
	sub_82255B48(ctx, base);
	// stw r3,408(r28)
	REX_STORE_U32(r28.u32 + 408, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822976f4
	if (!ctx.cr0.eq) goto loc_822976F4;
	// li r17,-8
	r17.s64 = -8;
	// b 0x82297914
	goto loc_82297914;
loc_822976F4:
	// stw r30,412(r28)
	REX_STORE_U32(r28.u32 + 412, r30.u32);
loc_822976F8:
	// lwz r30,408(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 408);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x82297760
	if (!ctx.cr6.gt) goto loc_82297760;
loc_82297708:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwinm. r9,r9,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r8,4(r10)
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r8.u16);
	// beq 0x82297758
	if (ctx.cr0.eq) goto loc_82297758;
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82297758
	if (ctx.cr0.eq) goto loc_82297758;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + r30.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_82297750:
	// sthu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x82297750
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82297750;
loc_82297758:
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// blt cr6,0x82297708
	if (ctx.cr6.lt) goto loc_82297708;
loc_82297760:
	// lhz r11,380(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 380);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822977ac
	if (!ctx.cr0.eq) goto loc_822977AC;
	// lhz r11,368(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 368);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82297780
	if (ctx.cr6.lt) goto loc_82297780;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
loc_82297780:
	// lwz r11,304(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 304);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r9,r25
	ctx.r9.s64 = r25.s16;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// subf r27,r9,r11
	r27.u64 = ctx.r11.u64 - ctx.r9.u64;
loc_822977AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x82297830
	if (!ctx.cr6.gt) goto loc_82297830;
	// addi r8,r30,-8
	ctx.r8.s64 = r30.s64 + -8;
loc_822977C0:
	// lhz r10,12(r8)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + 12);
	// andi. r10,r10,18
	ctx.r10.u64 = ctx.r10.u64 & 18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822977fc
	if (ctx.cr0.eq) goto loc_822977FC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x822977ec
	if (ctx.cr6.eq) goto loc_822977EC;
	// cmpwi cr6,r10,18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 18, ctx.xer);
	// bne cr6,0x82297818
	if (!ctx.cr6.eq) goto loc_82297818;
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x82297810
	goto loc_82297810;
loc_822977EC:
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// b 0x82297814
	goto loc_82297814;
loc_822977FC:
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lbz r7,1(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 1);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
loc_82297810:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82297814:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_82297818:
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + r27.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r29.s32, ctx.xer);
	// sthu r10,8(r8)
	ea = 8 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r8.u32 = ea;
	// blt cr6,0x822977c0
	if (ctx.cr6.lt) goto loc_822977C0;
loc_82297830:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x822978c0
	if (!ctx.cr6.gt) goto loc_822978C0;
	// addi r8,r30,-6
	ctx.r8.s64 = r30.s64 + -6;
	// addi r11,r31,-2
	ctx.r11.s64 = r31.s64 + -2;
loc_82297848:
	// lhz r9,10(r8)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + 10);
	// andi. r9,r9,36
	ctx.r9.u64 = ctx.r9.u64 & 36;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82297888
	if (ctx.cr0.eq) goto loc_82297888;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x82297878
	if (ctx.cr6.eq) goto loc_82297878;
	// cmpwi cr6,r9,36
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 36, ctx.xer);
	// bne cr6,0x822978a4
	if (!ctx.cr6.eq) goto loc_822978A4;
	// lbz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x822978a0
	goto loc_822978A0;
loc_82297878:
	// lbz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// b 0x822978a0
	goto loc_822978A0;
loc_82297888:
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lbzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwimi r6,r10,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_822978A0:
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
loc_822978A4:
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// cmpw cr6,r7,r29
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r29.s32, ctx.xer);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// sthu r9,8(r8)
	ea = 8 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// blt cr6,0x82297848
	if (ctx.cr6.lt) goto loc_82297848;
loc_822978C0:
	// lwz r11,12(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 12);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822978dc
	if (ctx.cr0.eq) goto loc_822978DC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82296338
	ctx.lr = 0x822978DC;
	sub_82296338(ctx, base);
loc_822978DC:
	// lwz r11,12(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 12);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82297900
	if (ctx.cr0.eq) goto loc_82297900;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82296398
	ctx.lr = 0x82297900;
	sub_82296398(ctx, base);
loc_82297900:
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82296110
	ctx.lr = 0x82297914;
	sub_82296110(ctx, base);
loc_82297914:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ea4
	return;
}

DEFINE_REX_FUNC(sub_822ADD68) {
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
	ctx.lr = 0x822ADD70;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
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
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822ad298
	ctx.lr = 0x822ADDA8;
	sub_822AD298(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// addi r6,r31,4
	ctx.r6.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// lwz r5,31516(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 31516);
	// bge cr6,0x822ade24
	if (!ctx.cr6.lt) goto loc_822ADE24;
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
loc_822ADDC4:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// lwz r7,-4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r7,r7,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lfs f0,188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,188(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x822addf8
	if (ctx.cr6.gt) goto loc_822ADDF8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822ADDF8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ade24
	if (!ctx.cr0.eq) goto loc_822ADE24;
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x822ade10
	if (ctx.cr6.gt) goto loc_822ADE10;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822ADE10:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ade24
	if (!ctx.cr0.eq) goto loc_822ADE24;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822addc4
	if (ctx.cr6.lt) goto loc_822ADDC4;
loc_822ADE24:
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r29.u32, ctx.xer);
	// bge cr6,0x822ade8c
	if (!ctx.cr6.lt) goto loc_822ADE8C;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_822ADE38:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,188(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lfs f13,188(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x822ade60
	if (ctx.cr6.gt) goto loc_822ADE60;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822ADE60:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ade8c
	if (!ctx.cr0.eq) goto loc_822ADE8C;
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x822ade78
	if (ctx.cr6.gt) goto loc_822ADE78;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822ADE78:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ade8c
	if (!ctx.cr0.eq) goto loc_822ADE8C;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r29.u32, ctx.xer);
	// blt cr6,0x822ade38
	if (ctx.cr6.lt) goto loc_822ADE38;
loc_822ADE8C:
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// b 0x822adf04
	goto loc_822ADF04;
loc_822ADE98:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwzx r4,r3,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// lfs f0,188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,188(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822adecc
	if (ctx.cr6.gt) goto loc_822ADECC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822ADECC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822adf00
	if (!ctx.cr0.eq) goto loc_822ADF00;
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x822adee4
	if (ctx.cr6.gt) goto loc_822ADEE4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822ADEE4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822adf0c
	if (!ctx.cr0.eq) goto loc_822ADF0C;
	// lwz r4,0(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r4,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
loc_822ADEFC:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
loc_822ADF00:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
loc_822ADF04:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r29.u32, ctx.xer);
	// blt cr6,0x822ade98
	if (ctx.cr6.lt) goto loc_822ADE98;
loc_822ADF0C:
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r30.u32, ctx.xer);
	// ble cr6,0x822adf8c
	if (!ctx.cr6.gt) goto loc_822ADF8C;
loc_822ADF14:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// lwz r4,-4(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + -4);
	// lwz r3,0(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwzx r4,r4,r3
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// lfs f0,188(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,188(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x822adf4c
	if (ctx.cr6.gt) goto loc_822ADF4C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822ADF4C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822adf7c
	if (!ctx.cr0.eq) goto loc_822ADF7C;
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r10,1
	ctx.r10.s64 = 1;
	// bgt cr6,0x822adf64
	if (ctx.cr6.gt) goto loc_822ADF64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822ADF64:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822adf88
	if (!ctx.cr0.eq) goto loc_822ADF88;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzu r10,-4(r9)
	ea = -4 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822ADF7C:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822adf14
	if (ctx.cr6.lt) goto loc_822ADF14;
loc_822ADF88:
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r30.u32, ctx.xer);
loc_822ADF8C:
	// bne cr6,0x822adfd0
	if (!ctx.cr6.eq) goto loc_822ADFD0;
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r29.u32, ctx.xer);
	// beq cr6,0x822ae024
	if (ctx.cr6.eq) goto loc_822AE024;
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822adfb0
	if (ctx.cr6.eq) goto loc_822ADFB0;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
loc_822ADFB0:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r4,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// stw r3,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// b 0x822adefc
	goto loc_822ADEFC;
loc_822ADFD0:
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r29.u32, ctx.xer);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// bne cr6,0x822ae010
	if (!ctx.cr6.eq) goto loc_822AE010;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822adffc
	if (ctx.cr6.eq) goto loc_822ADFFC;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_822ADFFC:
	// lwzu r11,-4(r6)
	ea = -4 + ctx.r6.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// b 0x822adf04
	goto loc_822ADF04;
loc_822AE010:
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r4,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822adf00
	goto loc_822ADF00;
loc_822AE024:
	// stw r9,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r6,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822BB888) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f5,f0,f12
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f4,f0,f11
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24116(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24116);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f0,f10,f6
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmadds f0,f9,f5,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f5.f64, ctx.f0.f64)));
	// fmadds f0,f8,f4,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f4.f64, ctx.f0.f64)));
	// fabs f3,f0
	ctx.f3.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f3,f7
	ctx.cr6.compare(ctx.f3.f64, ctx.f7.f64);
	// bge cr6,0x822bb8dc
	if (!ctx.cr6.lt) goto loc_822BB8DC;
	// fmr f0,f7
	ctx.f0.f64 = ctx.f7.f64;
loc_822BB8DC:
	// fmuls f7,f10,f13
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f8,f8,f11,f7
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f7.f64)));
	// fmadds f9,f9,f12,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f8.f64)));
	// fsubs f9,f1,f9
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f9.f64));
	// fdivs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x822bb944
	if (ctx.cr6.lt) goto loc_822BB944;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x822bb944
	if (ctx.cr6.gt) goto loc_822BB944;
	// fmuls f10,f5,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f9,-4(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f6,f0
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f9,12(r7)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fadds f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,8(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// blr 
	return;
loc_822BB944:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2808) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x822d6450
	ctx.lr = 0x822C2834;
	sub_822D6450(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r11,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// stw r11,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r11.u32);
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 64, temp.u32);
	// lfs f0,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 68, temp.u32);
	// lfs f0,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 72, temp.u32);
	// lfs f0,76(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 76, temp.u32);
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

DEFINE_REX_FUNC(sub_822C5B40) {
	REX_FUNC_PROLOGUE();
	// lwz r3,64(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822C5B70) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,152(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 152);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822C5C98) {
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
	// lfs f0,160(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,164(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,168(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,172(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 172);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C5CD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C68E0) {
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
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x822a9aa8
	ctx.lr = 0x822C6908;
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
	ctx.lr = 0x822C6920;
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

DEFINE_REX_FUNC(sub_822C6F88) {
	REX_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r12)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r12.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822C71E8) {
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
	// stwu r1,-2480(r1)
	ea = -2480 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x822b3b48
	ctx.lr = 0x822C720C;
	sub_822B3B48(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c7238
	if (ctx.cr0.eq) goto loc_822C7238;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b5b38
	ctx.lr = 0x822C7224;
	sub_822B5B38(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mulli r5,r3,3
	ctx.r5.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(3));
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// b 0x822c7298
	goto loc_822C7298;
loc_822C7238:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,44(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// lfs f0,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_822C7298:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C72A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,2480
	ctx.r1.s64 = ctx.r1.s64 + 2480;
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

DEFINE_REX_FUNC(sub_822CA328) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x822d4f00
	ctx.lr = 0x822CA338;
	// lfs f0,56(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,60(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f6,44(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f6,f0
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f7,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f31,f13,f7
	f31.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmuls f5,f12,f0
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f29,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	f29.f64 = double(temp.f32);
	// lfs f23,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	f23.f64 = double(temp.f32);
	// fmuls f27,f13,f7
	f27.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// stfs f23,-200(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + -200, temp.u32);
	// fmuls f23,f12,f7
	f23.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// lfs f30,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	f30.f64 = double(temp.f32);
	// fmuls f28,f12,f7
	f28.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmsubs f11,f2,f9,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f2.f64, ctx.f9.f64, -ctx.f11.f64)));
	// lfs f22,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	f22.f64 = double(temp.f32);
	// fmsubs f10,f4,f9,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f4.f64, ctx.f9.f64, -ctx.f10.f64)));
	// lfs f26,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	f26.f64 = double(temp.f32);
	// fmsubs f8,f2,f9,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f2.f64, ctx.f9.f64, -ctx.f8.f64)));
	// stfs f22,-304(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + -304, temp.u32);
	// fmsubs f1,f7,f9,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f7.f64, ctx.f9.f64, -ctx.f1.f64)));
	// lfs f21,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	f21.f64 = double(temp.f32);
	// fmsubs f3,f7,f9,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f7.f64, ctx.f9.f64, -ctx.f3.f64)));
	// stfs f21,-208(r1)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// fmsubs f31,f2,f6,f31
	f31.f64 = double(float(std::fma(ctx.f2.f64, ctx.f6.f64, -f31.f64)));
	// lfs f24,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	f24.f64 = double(temp.f32);
	// fmsubs f5,f4,f9,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f4.f64, ctx.f9.f64, -ctx.f5.f64)));
	// lfs f20,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	f20.f64 = double(temp.f32);
	// fmuls f25,f13,f4
	f25.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmuls f22,f6,f0
	f22.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmsubs f27,f2,f6,f27
	f27.f64 = double(float(std::fma(ctx.f2.f64, ctx.f6.f64, -f27.f64)));
	// fmuls f11,f11,f29
	ctx.f11.f64 = double(float(ctx.f11.f64 * f29.f64));
	// fmuls f10,f10,f29
	ctx.f10.f64 = double(float(ctx.f10.f64 * f29.f64));
	// fmuls f8,f8,f30
	ctx.f8.f64 = double(float(ctx.f8.f64 * f30.f64));
	// fmsubs f23,f4,f6,f23
	f23.f64 = double(float(std::fma(ctx.f4.f64, ctx.f6.f64, -f23.f64)));
	// fmsubs f28,f4,f6,f28
	f28.f64 = double(float(std::fma(ctx.f4.f64, ctx.f6.f64, -f28.f64)));
	// fmuls f31,f31,f30
	f31.f64 = double(float(f31.f64 * f30.f64));
	// fmuls f21,f6,f0
	f21.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmsubs f25,f2,f12,f25
	f25.f64 = double(float(std::fma(ctx.f2.f64, ctx.f12.f64, -f25.f64)));
	// fmuls f19,f12,f0
	f19.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f18,f12,f0
	f18.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmsubs f11,f1,f26,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f1.f64, f26.f64, -ctx.f11.f64)));
	// fmsubs f10,f3,f30,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f3.f64, f30.f64, -ctx.f10.f64)));
	// fmsubs f8,f5,f26,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f5.f64, f26.f64, -ctx.f8.f64)));
	// fmuls f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f3,f13,f7
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmsubs f1,f7,f9,f22
	ctx.f1.f64 = double(float(std::fma(ctx.f7.f64, ctx.f9.f64, -f22.f64)));
	// stfs f1,-236(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -236, temp.u32);
	// fmsubs f1,f23,f26,f31
	ctx.f1.f64 = double(float(std::fma(f23.f64, f26.f64, -f31.f64)));
	// stfs f1,-252(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -252, temp.u32);
	// fmsubs f1,f7,f9,f21
	ctx.f1.f64 = double(float(std::fma(ctx.f7.f64, ctx.f9.f64, -f21.f64)));
	// stfs f1,-296(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -296, temp.u32);
	// fmsubs f1,f4,f9,f19
	ctx.f1.f64 = double(float(std::fma(ctx.f4.f64, ctx.f9.f64, -f19.f64)));
	// stfs f1,-272(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -272, temp.u32);
	// fnmadds f11,f27,f24,f11
	ctx.f11.f64 = double(float(-std::fma(f27.f64, f24.f64, ctx.f11.f64)));
	// stfs f11,-232(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -232, temp.u32);
	// fmadds f11,f28,f24,f10
	ctx.f11.f64 = double(float(std::fma(f28.f64, f24.f64, ctx.f10.f64)));
	// stfs f11,-276(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -276, temp.u32);
	// fmadds f11,f25,f24,f8
	ctx.f11.f64 = double(float(std::fma(f25.f64, f24.f64, ctx.f8.f64)));
	// stfs f11,-288(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -288, temp.u32);
	// fmuls f11,f13,f4
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// stfs f11,-280(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -280, temp.u32);
	// fmuls f10,f12,f7
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f1,f12,f7
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f11,f13,f4
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmuls f8,f12,f24
	ctx.f8.f64 = double(float(ctx.f12.f64 * f24.f64));
	// fmsubs f31,f4,f9,f18
	f31.f64 = double(float(std::fma(ctx.f4.f64, ctx.f9.f64, -f18.f64)));
	// fmsubs f5,f2,f9,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f2.f64, ctx.f9.f64, -ctx.f5.f64)));
	// fmsubs f0,f2,f9,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f2.f64, ctx.f9.f64, -ctx.f0.f64)));
	// fmsubs f3,f2,f6,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f2.f64, ctx.f6.f64, -ctx.f3.f64)));
	// fmuls f7,f13,f7
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmr f28,f29
	f28.f64 = f29.f64;
	// fmuls f27,f13,f4
	f27.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// stfs f27,-268(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + -268, temp.u32);
	// fmr f25,f24
	f25.f64 = f24.f64;
	// lfs f27,-200(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -200);
	f27.f64 = double(temp.f32);
	// fmuls f3,f3,f27
	ctx.f3.f64 = double(float(ctx.f3.f64 * f27.f64));
	// stfs f27,-264(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + -264, temp.u32);
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// lfs f27,-304(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -304);
	f27.f64 = double(temp.f32);
	// fmsubs f10,f4,f6,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f4.f64, ctx.f6.f64, -ctx.f10.f64)));
	// stfs f10,-240(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -240, temp.u32);
	// fmuls f31,f31,f20
	f31.f64 = double(float(f31.f64 * f20.f64));
	// stfs f27,-256(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + -256, temp.u32);
	// fmr f22,f4
	f22.f64 = ctx.f4.f64;
	// stfs f31,-260(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + -260, temp.u32);
	// fmuls f16,f6,f24
	f16.f64 = double(float(ctx.f6.f64 * f24.f64));
	// lfs f10,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f27,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	f27.f64 = double(temp.f32);
	// fmuls f18,f4,f24
	f18.f64 = double(float(ctx.f4.f64 * f24.f64));
	// fmuls f23,f13,f24
	f23.f64 = double(float(ctx.f13.f64 * f24.f64));
	// stfs f27,-200(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + -200, temp.u32);
	// fmuls f21,f13,f24
	f21.f64 = double(float(ctx.f13.f64 * f24.f64));
	// stfs f4,-304(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + -304, temp.u32);
	// fmuls f31,f6,f24
	f31.f64 = double(float(ctx.f6.f64 * f24.f64));
	// lfs f14,56(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	f14.f64 = double(temp.f32);
	// fmuls f17,f13,f29
	f17.f64 = double(float(ctx.f13.f64 * f29.f64));
	// stfs f3,-292(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + -292, temp.u32);
	// fmr f22,f20
	f22.f64 = f20.f64;
	// lfs f22,-236(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -236);
	f22.f64 = double(temp.f32);
	// fmuls f24,f12,f24
	f24.f64 = double(float(ctx.f12.f64 * f24.f64));
	// stfs f22,-236(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + -236, temp.u32);
	// fmr f19,f13
	f19.f64 = ctx.f13.f64;
	// lfs f22,-296(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -296);
	f22.f64 = double(temp.f32);
	// fmsubs f8,f30,f9,f8
	ctx.f8.f64 = double(float(std::fma(f30.f64, ctx.f9.f64, -ctx.f8.f64)));
	// stfs f22,-192(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// fmuls f27,f10,f25
	f27.f64 = double(float(ctx.f10.f64 * f25.f64));
	// stfs f10,-300(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -300, temp.u32);
	// fmuls f22,f12,f29
	f22.f64 = double(float(ctx.f12.f64 * f29.f64));
	// stfs f22,-296(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + -296, temp.u32);
	// lfs f22,-272(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -272);
	f22.f64 = double(temp.f32);
	// fmsubs f11,f2,f12,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f2.f64, ctx.f12.f64, -ctx.f11.f64)));
	// stfs f22,-272(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + -272, temp.u32);
	// fmsubs f4,f4,f6,f1
	ctx.f4.f64 = double(float(std::fma(ctx.f4.f64, ctx.f6.f64, -ctx.f1.f64)));
	// lfs f22,-280(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -280);
	f22.f64 = double(temp.f32);
	// fmsubs f7,f2,f6,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f2.f64, ctx.f6.f64, -ctx.f7.f64)));
	// stfs f11,-244(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -244, temp.u32);
	// fmsubs f11,f29,f9,f16
	ctx.f11.f64 = double(float(std::fma(f29.f64, ctx.f9.f64, -f16.f64)));
	// fmuls f5,f5,f20
	ctx.f5.f64 = double(float(ctx.f5.f64 * f20.f64));
	// stfs f22,-216(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + -216, temp.u32);
	// lfs f22,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	f22.f64 = double(temp.f32);
	// fmsubs f17,f26,f6,f17
	f17.f64 = double(float(std::fma(f26.f64, ctx.f6.f64, -f17.f64)));
	// stfs f5,-224(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// stfs f4,-172(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// fmr f3,f26
	ctx.f3.f64 = f26.f64;
	// stfs f7,-176(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -176, temp.u32);
	// fmsubs f23,f26,f9,f23
	f23.f64 = double(float(std::fma(f26.f64, ctx.f9.f64, -f23.f64)));
	// stfs f11,-204(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -204, temp.u32);
	// fmsubs f21,f26,f9,f21
	f21.f64 = double(float(std::fma(f26.f64, ctx.f9.f64, -f21.f64)));
	// stfs f0,-248(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -248, temp.u32);
	// fmuls f4,f12,f29
	ctx.f4.f64 = double(float(ctx.f12.f64 * f29.f64));
	// stfs f17,-280(r1)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r1.u32 + -280, temp.u32);
	// fmuls f7,f13,f29
	ctx.f7.f64 = double(float(ctx.f13.f64 * f29.f64));
	// stfs f6,-228(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -228, temp.u32);
	// fmsubs f11,f29,f9,f31
	ctx.f11.f64 = double(float(std::fma(f29.f64, ctx.f9.f64, -f31.f64)));
	// fmsubs f10,f30,f9,f24
	ctx.f10.f64 = double(float(std::fma(f30.f64, ctx.f9.f64, -f24.f64)));
	// lfs f1,-268(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -268);
	ctx.f1.f64 = double(temp.f32);
	// stfs f20,-184(r1)
	temp.f32 = float(f20.f64);
	REX_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// fmr f15,f30
	f15.f64 = f30.f64;
	// stfs f26,-212(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + -212, temp.u32);
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// stfs f25,-284(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + -284, temp.u32);
	// fmsubs f18,f30,f14,f18
	f18.f64 = double(float(std::fma(f30.f64, f14.f64, -f18.f64)));
	// stfs f4,-196(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + -196, temp.u32);
	// fmr f3,f2
	ctx.f3.f64 = ctx.f2.f64;
	// stfs f26,-220(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + -220, temp.u32);
	// fmr f17,f22
	f17.f64 = f22.f64;
	// stfs f12,-188(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// fmuls f8,f8,f20
	ctx.f8.f64 = double(float(ctx.f8.f64 * f20.f64));
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fmuls f9,f19,f30
	ctx.f9.f64 = double(float(f19.f64 * f30.f64));
	// fmsubs f6,f29,f14,f27
	ctx.f6.f64 = double(float(std::fma(f29.f64, f14.f64, -f27.f64)));
	// lfs f0,-296(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -296);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f3,f23,f20
	ctx.f3.f64 = double(float(f23.f64 * f20.f64));
	// fmsubs f5,f30,f5,f0
	ctx.f5.f64 = double(float(std::fma(f30.f64, ctx.f5.f64, -ctx.f0.f64)));
	// lfs f27,-200(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -200);
	f27.f64 = double(temp.f32);
	// lfs f0,-280(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -280);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f26,f21,f27
	f26.f64 = double(float(f21.f64 * f27.f64));
	// lfs f4,-304(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f23,f0,f27
	f23.f64 = double(float(ctx.f0.f64 * f27.f64));
	// stfs f22,-304(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + -304, temp.u32);
	// fmuls f24,f18,f20
	f24.f64 = double(float(f18.f64 * f20.f64));
	// stfs f22,-168(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// fmr f25,f20
	f25.f64 = f20.f64;
	// lfs f0,-260(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -260);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f22,-264(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -264);
	f22.f64 = double(temp.f32);
	// fmuls f31,f4,f29
	f31.f64 = double(float(ctx.f4.f64 * f29.f64));
	// lfs f21,-236(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -236);
	f21.f64 = double(temp.f32);
	// fmsubs f21,f21,f22,f0
	f21.f64 = double(float(std::fma(f21.f64, f22.f64, -ctx.f0.f64)));
	// lfs f19,-256(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -256);
	f19.f64 = double(temp.f32);
	// lfs f0,-224(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -224);
	ctx.f0.f64 = double(temp.f32);
	// lfs f18,-192(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -192);
	f18.f64 = double(temp.f32);
	// fmsubs f18,f18,f19,f0
	f18.f64 = double(float(std::fma(f18.f64, f19.f64, -ctx.f0.f64)));
	// lfs f0,-248(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -248);
	ctx.f0.f64 = double(temp.f32);
	// lfs f17,-272(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -272);
	f17.f64 = double(temp.f32);
	// fmsubs f17,f17,f19,f0
	f17.f64 = double(float(std::fma(f17.f64, f19.f64, -ctx.f0.f64)));
	// lfs f0,-216(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -216);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f16,f2,f12,f0
	f16.f64 = double(float(std::fma(ctx.f2.f64, ctx.f12.f64, -ctx.f0.f64)));
	// stfs f14,-296(r1)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r1.u32 + -296, temp.u32);
	// lfs f0,-240(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f14,-292(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -292);
	f14.f64 = double(temp.f32);
	// stfs f16,-256(r1)
	temp.f32 = float(f16.f64);
	REX_STORE_U32(ctx.r1.u32 + -256, temp.u32);
	// fmsubs f14,f0,f19,f14
	f14.f64 = double(float(std::fma(ctx.f0.f64, f19.f64, -f14.f64)));
	// lfs f16,-284(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -284);
	f16.f64 = double(temp.f32);
	// stfs f24,-284(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + -284, temp.u32);
	// lfs f0,-232(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f24,-244(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -244);
	f24.f64 = double(temp.f32);
	// stfs f0,-260(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -260, temp.u32);
	// fmuls f0,f27,f0
	ctx.f0.f64 = double(float(f27.f64 * ctx.f0.f64));
	// stfs f10,-244(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -244, temp.u32);
	// lfs f10,-300(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -300);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,-300(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -300, temp.u32);
	// stfs f17,-192(r1)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// fmr f17,f2
	f17.f64 = ctx.f2.f64;
	// stfs f14,-264(r1)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r1.u32 + -264, temp.u32);
	// lfs f14,-288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -288);
	f14.f64 = double(temp.f32);
	// stfs f18,-248(r1)
	temp.f32 = float(f18.f64);
	REX_STORE_U32(ctx.r1.u32 + -248, temp.u32);
	// fmuls f18,f2,f29
	f18.f64 = double(float(ctx.f2.f64 * f29.f64));
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f5,-288(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -288, temp.u32);
	// lfs f5,-276(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -276);
	ctx.f5.f64 = double(temp.f32);
	// stfd f0,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.f0.u64);
	// stfs f6,-276(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -276, temp.u32);
	// lfs f6,-252(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -252);
	ctx.f6.f64 = double(temp.f32);
	// stfs f26,-252(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + -252, temp.u32);
	// fmuls f26,f2,f28
	f26.f64 = double(float(ctx.f2.f64 * f28.f64));
	// fmuls f17,f17,f30
	f17.f64 = double(float(f17.f64 * f30.f64));
	// stfs f26,-292(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + -292, temp.u32);
	// fmuls f26,f2,f30
	f26.f64 = double(float(ctx.f2.f64 * f30.f64));
	// stfs f20,-224(r1)
	temp.f32 = float(f20.f64);
	REX_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// fnmadds f6,f24,f29,f6
	ctx.f6.f64 = double(float(-std::fma(f24.f64, f29.f64, ctx.f6.f64)));
	// stfs f21,-216(r1)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r1.u32 + -216, temp.u32);
	// fmuls f20,f4,f29
	f20.f64 = double(float(ctx.f4.f64 * f29.f64));
	// stfs f23,-232(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + -232, temp.u32);
	// stfs f4,-240(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + -240, temp.u32);
	// fmuls f21,f2,f16
	f21.f64 = double(float(ctx.f2.f64 * f16.f64));
	// fmuls f23,f2,f16
	f23.f64 = double(float(ctx.f2.f64 * f16.f64));
	// lfs f29,-296(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -296);
	f29.f64 = double(temp.f32);
	// fmuls f4,f4,f16
	ctx.f4.f64 = double(float(ctx.f4.f64 * f16.f64));
	// stfs f2,-268(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + -268, temp.u32);
	// fmuls f24,f10,f16
	f24.f64 = double(float(ctx.f10.f64 * f16.f64));
	// lfs f16,-304(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -304);
	f16.f64 = double(temp.f32);
	// lfs f0,-300(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -300);
	ctx.f0.f64 = double(temp.f32);
	// stfs f14,-300(r1)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r1.u32 + -300, temp.u32);
	// fmadds f0,f25,f14,f0
	ctx.f0.f64 = double(float(std::fma(f25.f64, f14.f64, ctx.f0.f64)));
	// lfs f14,-228(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -228);
	f14.f64 = double(temp.f32);
	// stfs f17,-228(r1)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r1.u32 + -228, temp.u32);
	// lfs f17,-220(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -220);
	f17.f64 = double(temp.f32);
	// stfs f26,-220(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + -220, temp.u32);
	// lfs f26,-212(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -212);
	f26.f64 = double(temp.f32);
	// stfs f6,-212(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -212, temp.u32);
	// fmsubs f18,f26,f10,f18
	f18.f64 = double(float(std::fma(f26.f64, ctx.f10.f64, -f18.f64)));
	// lfs f6,-204(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -204);
	ctx.f6.f64 = double(temp.f32);
	// fmsubs f13,f17,f12,f13
	ctx.f13.f64 = double(float(std::fma(f17.f64, ctx.f12.f64, -ctx.f13.f64)));
	// stfs f16,-204(r1)
	temp.f32 = float(f16.f64);
	REX_STORE_U32(ctx.r1.u32 + -204, temp.u32);
	// fmsubs f8,f6,f22,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f6.f64, f22.f64, -ctx.f8.f64)));
	// lfs f16,-196(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -196);
	f16.f64 = double(temp.f32);
	// fmadds f6,f19,f5,f0
	ctx.f6.f64 = double(float(std::fma(f19.f64, ctx.f5.f64, ctx.f0.f64)));
	// stfs f11,-196(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -196, temp.u32);
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// fmsubs f11,f15,f10,f31
	ctx.f11.f64 = double(float(std::fma(f15.f64, ctx.f10.f64, -f31.f64)));
	// lfs f31,-204(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -204);
	f31.f64 = double(temp.f32);
	// fmsubs f21,f26,f29,f21
	f21.f64 = double(float(std::fma(f26.f64, f29.f64, -f21.f64)));
	// lfd f0,-184(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// fmsubs f2,f2,f12,f1
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f12.f64, -ctx.f1.f64)));
	// lfs f15,-228(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -228);
	f15.f64 = double(temp.f32);
	// fmsubs f12,f26,f12,f9
	ctx.f12.f64 = double(float(std::fma(f26.f64, ctx.f12.f64, -ctx.f9.f64)));
	// lfs f9,-196(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -196);
	ctx.f9.f64 = double(temp.f32);
	// fmsubs f23,f26,f29,f23
	f23.f64 = double(float(std::fma(f26.f64, f29.f64, -f23.f64)));
	// lfs f1,-168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -168);
	ctx.f1.f64 = double(temp.f32);
	// fmsubs f9,f9,f19,f3
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, f19.f64, -ctx.f3.f64)));
	// lfs f3,-212(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -212);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f6,f31,f3,f6
	ctx.f6.f64 = double(float(std::fma(f31.f64, ctx.f3.f64, ctx.f6.f64)));
	// fmsubs f4,f30,f29,f4
	ctx.f4.f64 = double(float(std::fma(f30.f64, f29.f64, -ctx.f4.f64)));
	// stfs f4,-188(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// fmsubs f29,f28,f29,f24
	f29.f64 = double(float(std::fma(f28.f64, f29.f64, -f24.f64)));
	// lfs f4,-208(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f24,f18,f27
	f24.f64 = double(float(f18.f64 * f27.f64));
	// lfs f18,-252(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -252);
	f18.f64 = double(temp.f32);
	// fmuls f22,f21,f25
	f22.f64 = double(float(f21.f64 * f25.f64));
	// lfs f21,-244(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -244);
	f21.f64 = double(temp.f32);
	// fmsubs f7,f17,f14,f7
	ctx.f7.f64 = double(float(std::fma(f17.f64, f14.f64, -ctx.f7.f64)));
	// lfs f17,-284(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -284);
	f17.f64 = double(temp.f32);
	// fmsubs f21,f21,f19,f18
	f21.f64 = double(float(std::fma(f21.f64, f19.f64, -f18.f64)));
	// lfs f18,-276(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -276);
	f18.f64 = double(temp.f32);
	// fmuls f23,f23,f27
	f23.f64 = double(float(f23.f64 * f27.f64));
	// stfs f4,-208(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// fmsubs f20,f30,f10,f20
	f20.f64 = double(float(std::fma(f30.f64, ctx.f10.f64, -f20.f64)));
	// lfs f4,-172(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -172);
	ctx.f4.f64 = double(temp.f32);
	// fmsubs f27,f18,f27,f17
	f27.f64 = double(float(std::fma(f18.f64, f27.f64, -f17.f64)));
	// lfs f17,-232(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -232);
	f17.f64 = double(temp.f32);
	// fdivs f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f6.f64));
	// lfs f18,-288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -288);
	f18.f64 = double(temp.f32);
	// fmsubs f18,f18,f19,f17
	f18.f64 = double(float(std::fma(f18.f64, f19.f64, -f17.f64)));
	// lfs f17,-292(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -292);
	f17.f64 = double(temp.f32);
	// fmsubs f30,f30,f14,f16
	f30.f64 = double(float(std::fma(f30.f64, f14.f64, -f16.f64)));
	// lfs f16,-220(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -220);
	f16.f64 = double(temp.f32);
	// fmsubs f10,f26,f10,f17
	ctx.f10.f64 = double(float(std::fma(f26.f64, ctx.f10.f64, -f17.f64)));
	// lfs f17,-240(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -240);
	f17.f64 = double(temp.f32);
	// fmsubs f29,f29,f19,f22
	f29.f64 = double(float(std::fma(f29.f64, f19.f64, -f22.f64)));
	// lfs f22,-188(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -188);
	f22.f64 = double(temp.f32);
	// fmsubs f16,f26,f17,f16
	f16.f64 = double(float(std::fma(f26.f64, f17.f64, -f16.f64)));
	// lfs f6,-216(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -216);
	ctx.f6.f64 = double(temp.f32);
	// fmsubs f26,f26,f17,f15
	f26.f64 = double(float(std::fma(f26.f64, f17.f64, -f15.f64)));
	// lfs f28,-176(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -176);
	f28.f64 = double(temp.f32);
	// fmsubs f23,f22,f19,f23
	f23.f64 = double(float(std::fma(f22.f64, f19.f64, -f23.f64)));
	// lfs f22,-208(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -208);
	f22.f64 = double(temp.f32);
	// fnmadds f9,f7,f22,f9
	ctx.f9.f64 = double(float(-std::fma(ctx.f7.f64, f22.f64, ctx.f9.f64)));
	// fmsubs f24,f20,f19,f24
	f24.f64 = double(float(std::fma(f20.f64, f19.f64, -f24.f64)));
	// lfs f20,-256(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -256);
	f20.f64 = double(temp.f32);
	// fmuls f7,f0,f5
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f7,0(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f7,-260(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -260);
	ctx.f7.f64 = double(temp.f32);
	// fnmadds f6,f4,f22,f6
	ctx.f6.f64 = double(float(-std::fma(ctx.f4.f64, f22.f64, ctx.f6.f64)));
	// lfs f4,-248(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -248);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f7,f0,f7
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// stfs f7,4(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmadds f4,f28,f22,f4
	ctx.f4.f64 = double(float(std::fma(f28.f64, f22.f64, ctx.f4.f64)));
	// lfs f7,-300(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -300);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f8,f30,f22,f8
	ctx.f8.f64 = double(float(std::fma(f30.f64, f22.f64, ctx.f8.f64)));
	// lfs f28,-192(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -192);
	f28.f64 = double(temp.f32);
	// fmuls f7,f0,f7
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// lfs f19,-264(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -264);
	f19.f64 = double(temp.f32);
	// fnmadds f28,f20,f22,f28
	f28.f64 = double(float(-std::fma(f20.f64, f22.f64, f28.f64)));
	// stfs f7,8(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmr f20,f25
	f20.f64 = f25.f64;
	// fmadds f2,f2,f25,f19
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, f25.f64, f19.f64)));
	// fmadds f13,f13,f1,f21
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f1.f64, f21.f64)));
	// fnmadds f12,f12,f25,f18
	ctx.f12.f64 = double(float(-std::fma(ctx.f12.f64, f25.f64, f18.f64)));
	// fnmadds f11,f11,f31,f27
	ctx.f11.f64 = double(float(-std::fma(ctx.f11.f64, f31.f64, f27.f64)));
	// fmadds f10,f10,f31,f29
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, f31.f64, f29.f64)));
	// fnmadds f7,f16,f31,f23
	ctx.f7.f64 = double(float(-std::fma(f16.f64, f31.f64, f23.f64)));
	// fmadds f5,f26,f25,f24
	ctx.f5.f64 = double(float(std::fma(f26.f64, f25.f64, f24.f64)));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fmuls f6,f0,f6
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// stfs f6,16(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fmuls f4,f0,f4
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// stfs f4,20(r3)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f12,44(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fmuls f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// fmuls f3,f0,f3
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// stfs f3,12(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmuls f6,f0,f28
	ctx.f6.f64 = double(float(ctx.f0.f64 * f28.f64));
	// stfs f6,24(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fmuls f4,f0,f2
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// stfs f4,28(r3)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fmuls f8,f0,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfs f8,32(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f9,36(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fmuls f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f12,52(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// fmuls f13,f0,f7
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// stfs f13,56(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// fmuls f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x822d4f4c
	ctx.lr = 0x822CA8B8;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__restvmx_116) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_822D9518) {
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
	ctx.lr = 0x822D9520;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	r24.s64 = 0;
	// lwz r31,12(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
	// bl 0x822df828
	ctx.lr = 0x822D954C;
	sub_822DF828(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x822d955c
	if (!ctx.cr6.eq) goto loc_822D955C;
	// bl 0x822dbe48
	ctx.lr = 0x822D955C;
	sub_822DBE48(ctx, base);
loc_822D955C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// beq cr6,0x822d95a4
	if (ctx.cr6.eq) goto loc_822D95A4;
	// lwz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mulli r11,r31,20
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(20));
loc_822D957C:
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r7,-16(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + -16);
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x822d9598
	if (!ctx.cr6.gt) goto loc_822D9598;
	// lwz r10,-12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -12);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x822d95a4
	if (!ctx.cr6.gt) goto loc_822D95A4;
loc_822D9598:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// bne 0x822d957c
	if (!ctx.cr0.eq) goto loc_822D957C;
loc_822D95A4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822d95bc
	if (ctx.cr6.eq) goto loc_822D95BC;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mulli r11,r9,20
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(20));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r28,r11,-20
	r28.s64 = ctx.r11.s64 + -20;
loc_822D95BC:
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822d9648
	if (ctx.cr6.eq) goto loc_822D9648;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_822D95D0:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x822d9600
	if (ctx.cr6.eq) goto loc_822D9600;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x822d9630
	if (!ctx.cr6.gt) goto loc_822D9630;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 8);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x822d9630
	if (ctx.cr6.gt) goto loc_822D9630;
loc_822D9600:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r25,r8
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822d9630
	if (ctx.cr6.lt) goto loc_822D9630;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x822d9630
	if (ctx.cr6.gt) goto loc_822D9630;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822d9628
	if (!ctx.cr6.eq) goto loc_822D9628;
	// stw r9,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r9.u32);
loc_822D9628:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
loc_822D9630:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// bdnz 0x822d95d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D95D0;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822d9658
	if (!ctx.cr6.eq) goto loc_822D9658;
loc_822D9648:
	// stw r24,0(r27)
	REX_STORE_U32(r27.u32 + 0, r24.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r24,0(r26)
	REX_STORE_U32(r26.u32 + 0, r24.u32);
	// b 0x822d9664
	goto loc_822D9664;
loc_822D9658:
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mulli r11,r11,20
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(20));
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_822D9664:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_822E14C4) {
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
	// lwz r30,180(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// b 0x822e14fc
	goto loc_822E14FC;
loc_822E14FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e5ce0
	ctx.lr = 0x822E1504;
	sub_822E5CE0(ctx, base);
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

DEFINE_REX_FUNC(sub_822E2098) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r10,-11308(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -11308);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822e20bc
	if (!ctx.cr6.eq) goto loc_822E20BC;
	// lis r8,-32162
	ctx.r8.s64 = -2107768832;
	// li r10,-3
	ctx.r10.s64 = -3;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,-11308(r11)
	REX_STORE_U32(ctx.r11.u32 + -11308, ctx.r9.u32);
	// stw r10,-30488(r8)
	REX_STORE_U32(ctx.r8.u32 + -30488, ctx.r10.u32);
loc_822E20BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E4444) {
	REX_FUNC_PROLOGUE();
	PPCRegister r14{};
	PPCRegister r17{};
	// lwz r17,17520(r14)
	r17.u64 = REX_LOAD_U32(r14.u32 + 17520);
}

DEFINE_REX_FUNC(sub_822E5A88) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822e5af0
	if (ctx.cr6.lt) goto loc_822E5AF0;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r11,-11596(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11596);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822e5af0
	if (!ctx.cr6.lt) goto loc_822E5AF0;
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-11584
	ctx.r10.s64 = ctx.r10.s64 + -11584;
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822e5af0
	if (ctx.cr0.eq) goto loc_822E5AF0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x822e5af0
	if (ctx.cr6.eq) goto loc_822E5AF0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822e5b0c
	goto loc_822E5B0C;
loc_822E5AF0:
	// bl 0x822db6c0
	ctx.lr = 0x822E5AF4;
	sub_822DB6C0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822db6f8
	ctx.lr = 0x822E5B00;
	sub_822DB6F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822E5B0C:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E8E50) {
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
	// bl 0x822eef08
	ctx.lr = 0x822E8E68;
	sub_822EEF08(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_822EA460) {
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
	// addi r10,r11,-28440
	ctx.r10.s64 = ctx.r11.s64 + -28440;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x822e9ce0
	ctx.lr = 0x822EA48C;
	sub_822E9CE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e88c0
	ctx.lr = 0x822EA494;
	sub_822E88C0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822ea4b4
	if (ctx.cr6.eq) goto loc_822EA4B4;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32810
	ctx.r4.u64 = ctx.r4.u64 | 32810;
	// bl 0x823cd250
	ctx.lr = 0x822EA4B0;
	sub_823CD250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822EA4B4:
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

DEFINE_REX_FUNC(sub_822EC450) {
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
	// addi r10,r11,-28016
	ctx.r10.s64 = ctx.r11.s64 + -28016;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x822eb878
	ctx.lr = 0x822EC47C;
	sub_822EB878(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x822f42f8
	ctx.lr = 0x822EC484;
	sub_822F42F8(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// bl 0x822e8e40
	ctx.lr = 0x822EC48C;
	sub_822E8E40(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x822eeef8
	ctx.lr = 0x822EC494;
	sub_822EEEF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822eece8
	ctx.lr = 0x822EC49C;
	sub_822EECE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822ec4bc
	if (ctx.cr6.eq) goto loc_822EC4BC;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32791
	ctx.r4.u64 = ctx.r4.u64 | 32791;
	// bl 0x823cd250
	ctx.lr = 0x822EC4B8;
	sub_823CD250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822EC4BC:
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

DEFINE_REX_FUNC(sub_822ED398) {
	REX_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,48(r10)
	REX_STORE_U64(ctx.r10.u32 + 48, ctx.r11.u64);
	// stw r11,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822ED518) {
	REX_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822ED5C0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,52(r9)
	REX_STORE_U32(ctx.r9.u32 + 52, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822ED858) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// std r11,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r11.u64);
	// stw r10,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stw r9,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// std r11,64(r3)
	REX_STORE_U64(ctx.r3.u32 + 64, ctx.r11.u64);
	// std r11,72(r3)
	REX_STORE_U64(ctx.r3.u32 + 72, ctx.r11.u64);
	// std r11,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, ctx.r11.u64);
	// std r11,88(r3)
	REX_STORE_U64(ctx.r3.u32 + 88, ctx.r11.u64);
	// std r11,96(r3)
	REX_STORE_U64(ctx.r3.u32 + 96, ctx.r11.u64);
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
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EF588) {
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
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,568(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 568);
	// bl 0x822f9900
	ctx.lr = 0x822EF5BC;
	sub_822F9900(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822ef604
	if (ctx.cr6.lt) goto loc_822EF604;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,572(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 572);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822f9900
	ctx.lr = 0x822EF5D4;
	sub_822F9900(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ef5f8
	if (ctx.cr6.eq) goto loc_822EF5F8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ef5f8
	if (ctx.cr6.eq) goto loc_822EF5F8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,572(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 572);
	// bl 0x822f9880
	ctx.lr = 0x822EF5F8;
	sub_822F9880(ctx, base);
loc_822EF5F8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// bl 0x822f9880
	ctx.lr = 0x822EF604;
	sub_822F9880(ctx, base);
loc_822EF604:
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

DEFINE_REX_FUNC(sub_822F2AE8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822f2b10
	if (!ctx.cr6.eq) goto loc_822F2B10;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x822f2b5c
	goto loc_822F2B5C;
loc_822F2B10:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822f2850
	ctx.lr = 0x822F2B18;
	sub_822F2850(ctx, base);
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// li r3,624
	ctx.r3.s64 = 624;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x823cd118
	ctx.lr = 0x822F2B28;
	sub_823CD118(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822f2b3c
	if (!ctx.cr6.eq) goto loc_822F2B3C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822f2b5c
	goto loc_822F2B5C;
loc_822F2B3C:
	// li r5,624
	ctx.r5.s64 = 624;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5870
	ctx.lr = 0x822F2B4C;
	sub_822D5870(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r11.u32);
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
loc_822F2B5C:
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

DEFINE_REX_FUNC(sub_822F4EA0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822f4ed8
	if (ctx.cr6.eq) goto loc_822F4ED8;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F4ED8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822F4ED8:
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f4efc
	if (ctx.cr6.eq) goto loc_822F4EFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F4EF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
loc_822F4EFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
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

DEFINE_REX_FUNC(sub_822F6360) {
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
	ctx.lr = 0x822F638C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,220(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 220);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// andc r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 & ~r30.u64;
	// stw r7,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r7.u32);
	// lwz r6,20(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822F63AC;
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

DEFINE_REX_FUNC(sub_822F9530) {
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
	// beq cr6,0x822f9550
	if (ctx.cr6.eq) goto loc_822F9550;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x823cd250
	ctx.lr = 0x822F9550;
	sub_823CD250(ctx, base);
loc_822F9550:
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

DEFINE_REX_FUNC(sub_822F9E60) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// std r11,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822FAA70) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 16);
	// stb r9,96(r3)
	REX_STORE_U8(ctx.r3.u32 + 96, ctx.r9.u8);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822FAAB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822faad4
	if (ctx.cr6.lt) goto loc_822FAAD4;
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// ori r10,r11,13
	ctx.r10.u64 = ctx.r11.u64 | 13;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822faad4
	if (!ctx.cr6.eq) goto loc_822FAAD4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822fa4a0
	ctx.lr = 0x822FAAD4;
	sub_822FA4A0(ctx, base);
loc_822FAAD4:
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

DEFINE_REX_FUNC(sub_822FCFA0) {
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
	ctx.lr = 0x822FCFA8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r30,0(r3)
	r30.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lwz r10,208(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// li r17,0
	r17.s64 = 0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r17,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r17.u32);
	// mr r23,r17
	r23.u64 = r17.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r22,r11,-24
	r22.s64 = ctx.r11.s64 + -24;
	// bne cr6,0x822fd498
	if (!ctx.cr6.eq) goto loc_822FD498;
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// li r3,8
	ctx.r3.s64 = 8;
	// ori r18,r11,32768
	r18.u64 = ctx.r11.u64 | 32768;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x823cd118
	ctx.lr = 0x822FCFEC;
	sub_823CD118(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r3,208(r24)
	REX_STORE_U32(r24.u32 + 208, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822fd004
	if (!ctx.cr6.eq) goto loc_822FD004;
loc_822FCFFC:
	// li r23,5
	r23.s64 = 5;
	// b 0x822fd424
	goto loc_822FD424;
loc_822FD004:
	// addi r31,r30,2
	r31.s64 = r30.s64 + 2;
	// stw r17,0(r29)
	REX_STORE_U32(r29.u32 + 0, r17.u32);
	// stw r17,4(r29)
	REX_STORE_U32(r29.u32 + 4, r17.u32);
	// cmpld cr6,r31,r22
	ctx.cr6.compare<uint64_t>(r31.u64, r22.u64, ctx.xer);
	// ble cr6,0x822fd020
	if (!ctx.cr6.gt) goto loc_822FD020;
loc_822FD018:
	// li r23,6
	r23.s64 = 6;
	// b 0x822fd424
	goto loc_822FD424;
loc_822FD020:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FD034;
	sub_822EC1E8(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x822fd420
	if (!ctx.cr6.eq) goto loc_822FD420;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r31
	r30.u64 = r31.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r11,0(r29)
	REX_STORE_U16(r29.u32 + 0, ctx.r11.u16);
	// rlwinm r31,r11,4,12,27
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// mr r19,r11
	r19.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cd118
	ctx.lr = 0x822FD078;
	sub_823CD118(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r3.u32);
	// bne cr6,0x822fd08c
	if (!ctx.cr6.eq) goto loc_822FD08C;
	// li r23,5
	r23.s64 = 5;
	// b 0x822fd424
	goto loc_822FD424;
loc_822FD08C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x822FD098;
	sub_822D5870(ctx, base);
	// mr r20,r17
	r20.u64 = r17.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x822fd498
	if (ctx.cr6.eq) goto loc_822FD498;
	// mr r28,r17
	r28.u64 = r17.u64;
	// li r21,1
	r21.s64 = 1;
loc_822FD0AC:
	// addi r31,r30,2
	r31.s64 = r30.s64 + 2;
	// cmpld cr6,r31,r22
	ctx.cr6.compare<uint64_t>(r31.u64, r22.u64, ctx.xer);
	// bgt cr6,0x822fd018
	if (ctx.cr6.gt) goto loc_822FD018;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FD0CC;
	sub_822EC1E8(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x822fd420
	if (!ctx.cr6.eq) goto loc_822FD420;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// std r31,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r31.u64);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sthx r7,r9,r28
	REX_STORE_U16(ctx.r9.u32 + r28.u32, ctx.r7.u16);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + r28.u64;
	// addi r7,r6,4
	ctx.r7.s64 = ctx.r6.s64 + 4;
	// bl 0x822fb7a0
	ctx.lr = 0x822FD11C;
	sub_822FB7A0(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fd424
	if (!ctx.cr6.eq) goto loc_822FD424;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fd160
	if (ctx.cr6.eq) goto loc_822FD160;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_822FD14C:
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
	// bdnz 0x822fd14c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822FD14C;
loc_822FD160:
	// ld r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// addi r31,r4,4
	r31.s64 = ctx.r4.s64 + 4;
	// cmpld cr6,r31,r22
	ctx.cr6.compare<uint64_t>(r31.u64, r22.u64, ctx.xer);
	// bgt cr6,0x822fd018
	if (ctx.cr6.gt) goto loc_822FD018;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FD180;
	sub_822EC1E8(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x822fd420
	if (!ctx.cr6.eq) goto loc_822FD420;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r25,r31
	r25.u64 = r31.u64;
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 4);
	// std r31,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r31.u64);
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r7,8(r9)
	REX_STORE_U16(ctx.r9.u32 + 8, ctx.r7.u16);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lbz r3,1(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r3,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r4,r9,r28
	ctx.r4.u64 = ctx.r9.u64 + r28.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r11,10(r4)
	REX_STORE_U16(ctx.r4.u32 + 10, ctx.r11.u16);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 2;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// lhz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x822fd238
	if (ctx.cr6.gt) goto loc_822FD238;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822fd210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822FD210;
	// bdzf 4*cr6+eq,0x822fd228
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822FD228;
	// bne cr6,0x822fd21c
	if (!ctx.cr6.eq) goto loc_822FD21C;
loc_822FD210:
	// lhz r10,10(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// b 0x822fd230
	goto loc_822FD230;
loc_822FD21C:
	// lhz r10,10(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// b 0x822fd230
	goto loc_822FD230;
loc_822FD228:
	// lhz r10,10(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
loc_822FD230:
	// beq cr6,0x822fd238
	if (ctx.cr6.eq) goto loc_822FD238;
	// sth r21,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, r21.u16);
loc_822FD238:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// lhz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822fd2cc
	if (!ctx.cr6.eq) goto loc_822FD2CC;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// addi r6,r11,10
	ctx.r6.s64 = ctx.r11.s64 + 10;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822fb7a0
	ctx.lr = 0x822FD264;
	sub_822FB7A0(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fd424
	if (!ctx.cr6.eq) goto loc_822FD424;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// lhz r9,10(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fd2a8
	if (ctx.cr6.eq) goto loc_822FD2A8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_822FD294:
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
	// bdnz 0x822fd294
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822FD294;
loc_822FD2A8:
	// ld r30,88(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
loc_822FD2AC:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// cmplw cr6,r20,r19
	ctx.cr6.compare<uint32_t>(r20.u32, r19.u32, ctx.xer);
	// blt cr6,0x822fd0ac
	if (ctx.cr6.lt) goto loc_822FD0AC;
	// std r22,0(r24)
	REX_STORE_U64(r24.u32 + 0, r22.u64);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eac
	return;
loc_822FD2CC:
	// lhz r9,10(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// add r8,r9,r25
	ctx.r8.u64 = ctx.r9.u64 + r25.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// cmpld cr6,r8,r22
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, r22.u64, ctx.xer);
	// bgt cr6,0x822fd018
	if (ctx.cr6.gt) goto loc_822FD018;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// clrlwi r3,r9,16
	ctx.r3.u64 = ctx.r9.u32 & 0xFFFF;
	// bl 0x823cd118
	ctx.lr = 0x822FD2EC;
	sub_823CD118(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + r28.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822fcffc
	if (ctx.cr6.eq) goto loc_822FCFFC;
	// mr r31,r17
	r31.u64 = r17.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x822fd374
	if (ctx.cr6.eq) goto loc_822FD374;
loc_822FD318:
	// subf r27,r31,r26
	r27.u64 = r26.u64 - r31.u64;
	// cmplwi cr6,r27,128
	ctx.cr6.compare<uint32_t>(r27.u32, 128, ctx.xer);
	// ble cr6,0x822fd328
	if (!ctx.cr6.gt) goto loc_822FD328;
	// li r27,128
	r27.s64 = 128;
loc_822FD328:
	// clrldi r11,r31,32
	ctx.r11.u64 = r31.u64 & 0xFFFFFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FD340;
	sub_822EC1E8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r27.u32, ctx.xer);
	// bne cr6,0x822fd420
	if (!ctx.cr6.eq) goto loc_822FD420;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x822FD368;
	sub_822D4FA0(ctx, base);
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// blt cr6,0x822fd318
	if (ctx.cr6.lt) goto loc_822FD318;
loc_822FD374:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// bne cr6,0x822fd420
	if (!ctx.cr6.eq) goto loc_822FD420;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// clrldi r10,r31,32
	ctx.r10.u64 = r31.u64 & 0xFFFFFFFF;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r30,r10,r25
	r30.u64 = ctx.r10.u64 + r25.u64;
	// lhz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x822fd2ac
	if (ctx.cr6.gt) goto loc_822FD2AC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822fd3b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822FD3B0;
	// bdzf 4*cr6+eq,0x822fd3d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822FD3D8;
	// bne cr6,0x822fd408
	if (!ctx.cr6.eq) goto loc_822FD408;
loc_822FD3B0:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
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
	// b 0x822fd2ac
	goto loc_822FD2AC;
loc_822FD3D8:
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
loc_822FD3E8:
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
	// blt cr6,0x822fd3e8
	if (ctx.cr6.lt) goto loc_822FD3E8;
	// b 0x822fd2ac
	goto loc_822FD2AC;
loc_822FD408:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// b 0x822fd2ac
	goto loc_822FD2AC;
loc_822FD420:
	// li r23,3
	r23.s64 = 3;
loc_822FD424:
	// lwz r30,208(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + 208);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822fd498
	if (ctx.cr6.eq) goto loc_822FD498;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fd488
	if (ctx.cr6.eq) goto loc_822FD488;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// mr r29,r17
	r29.u64 = r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fd478
	if (ctx.cr6.eq) goto loc_822FD478;
	// mr r31,r17
	r31.u64 = r17.u64;
loc_822FD450:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823cd250
	ctx.lr = 0x822FD464;
	sub_823CD250(ctx, base);
	// lhz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822fd450
	if (ctx.cr6.lt) goto loc_822FD450;
loc_822FD478:
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x823cd250
	ctx.lr = 0x822FD484;
	sub_823CD250(ctx, base);
	// stw r17,4(r30)
	REX_STORE_U32(r30.u32 + 4, r17.u32);
loc_822FD488:
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// lwz r3,208(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 208);
	// bl 0x823cd250
	ctx.lr = 0x822FD494;
	sub_823CD250(ctx, base);
	// stw r17,208(r24)
	REX_STORE_U32(r24.u32 + 208, r17.u32);
loc_822FD498:
	// std r22,0(r24)
	REX_STORE_U64(r24.u32 + 0, r22.u64);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eac
	return;
}

DEFINE_REX_FUNC(sub_82313040) {
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
	ctx.lr = 0x82313048;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r4,1892(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1892);
	// bl 0x822f9568
	ctx.lr = 0x82313064;
	sub_822F9568(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82313138
	if (ctx.cr6.lt) goto loc_82313138;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231309c
	if (ctx.cr6.eq) goto loc_8231309C;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r4,1896(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1896);
	// bl 0x822f9320
	ctx.lr = 0x82313084;
	sub_822F9320(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8231309c
	if (ctx.cr6.eq) goto loc_8231309C;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
loc_8231309C:
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// lis r9,-32207
	ctx.r9.s64 = -2110717952;
	// addi r11,r11,7208
	ctx.r11.s64 = ctx.r11.s64 + 7208;
	// addi r10,r10,9912
	ctx.r10.s64 = ctx.r10.s64 + 9912;
	// addi r9,r9,10168
	ctx.r9.s64 = ctx.r9.s64 + 10168;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lis r8,-32207
	ctx.r8.s64 = -2110717952;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lis r7,-32207
	ctx.r7.s64 = -2110717952;
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// lis r6,-32207
	ctx.r6.s64 = -2110717952;
	// lis r5,-32207
	ctx.r5.s64 = -2110717952;
	// lis r4,-32207
	ctx.r4.s64 = -2110717952;
	// lis r29,-32207
	r29.s64 = -2110717952;
	// lis r28,-32207
	r28.s64 = -2110717952;
	// lis r27,-32207
	r27.s64 = -2110717952;
	// addi r8,r8,11584
	ctx.r8.s64 = ctx.r8.s64 + 11584;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r7,r7,11592
	ctx.r7.s64 = ctx.r7.s64 + 11592;
	// stw r8,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// addi r6,r6,12000
	ctx.r6.s64 = ctx.r6.s64 + 12000;
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// addi r5,r5,10176
	ctx.r5.s64 = ctx.r5.s64 + 10176;
	// stw r7,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// addi r4,r4,10352
	ctx.r4.s64 = ctx.r4.s64 + 10352;
	// stw r6,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r6.u32);
	// addi r11,r29,10704
	ctx.r11.s64 = r29.s64 + 10704;
	// stw r5,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// addi r10,r28,11120
	ctx.r10.s64 = r28.s64 + 11120;
	// stw r4,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r4.u32);
	// addi r9,r27,10032
	ctx.r9.s64 = r27.s64 + 10032;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// stw r9,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x82313138
	if (!ctx.cr6.eq) goto loc_82313138;
	// lis r3,80
	ctx.r3.s64 = 5242880;
loc_82313138:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823150F0) {
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
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82315114
	if (!ctx.cr6.gt) goto loc_82315114;
	// bl 0x823177f8
	ctx.lr = 0x82315114;
	sub_823177F8(ctx, base);
loc_82315114:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82316ee0
	ctx.lr = 0x8231511C;
	sub_82316EE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317390
	ctx.lr = 0x82315124;
	sub_82317390(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82315134
	if (ctx.cr6.lt) goto loc_82315134;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82328f48
	ctx.lr = 0x82315134;
	sub_82328F48(ctx, base);
loc_82315134:
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

DEFINE_REX_FUNC(sub_82317258) {
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
	ctx.lr = 0x82317260;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lhz r26,34(r3)
	r26.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x8231728c
	if (!ctx.cr6.lt) goto loc_8231728C;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,548(r27)
	REX_STORE_U32(r27.u32 + 548, r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_8231728C:
	// addi r11,r26,1
	ctx.r11.s64 = r26.s64 + 1;
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823143c0
	ctx.lr = 0x8231729C;
	sub_823143C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,548(r27)
	REX_STORE_U32(r27.u32 + 548, ctx.r3.u32);
	// beq cr6,0x82317378
	if (ctx.cr6.eq) goto loc_82317378;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x823172B4;
	sub_822D5870(ctx, base);
	// lwz r11,548(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 548);
	// li r28,1
	r28.s64 = 1;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r25.u32);
	// blt cr6,0x82317380
	if (ctx.cr6.lt) goto loc_82317380;
	// li r31,4
	r31.s64 = 4;
loc_823172CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823143c0
	ctx.lr = 0x823172D4;
	sub_823143C0(ctx, base);
	// lwz r11,548(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 548);
	// stwx r3,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,548(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 548);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82317378
	if (ctx.cr6.eq) goto loc_82317378;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x823172FC;
	sub_822D5870(ctx, base);
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(r28.s32, 6, ctx.xer);
	// ble cr6,0x8231735c
	if (!ctx.cr6.gt) goto loc_8231735C;
	// mr r29,r25
	r29.u64 = r25.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x8231735c
	if (!ctx.cr6.gt) goto loc_8231735C;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_82317314:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823143c0
	ctx.lr = 0x8231731C;
	sub_823143C0(ctx, base);
	// lwz r11,548(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 548);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// stwx r3,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r3.u32);
	// lwz r9,548(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 548);
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r9.u32);
	// lwzx r8,r11,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82317378
	if (ctx.cr6.eq) goto loc_82317378;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// rotlwi r3,r8,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x8231734C;
	sub_822D5870(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// blt cr6,0x82317314
	if (ctx.cr6.lt) goto loc_82317314;
loc_8231735C:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(r28.s32, r26.s32, ctx.xer);
	// ble cr6,0x823172cc
	if (!ctx.cr6.gt) goto loc_823172CC;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_82317378:
	// lis r25,-32761
	r25.s64 = -2147024896;
	// ori r25,r25,14
	r25.u64 = r25.u64 | 14;
loc_82317380:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82320DB0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r8,-32162
	ctx.r8.s64 = -2107768832;
	// lwz r11,-30224(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -30224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82320e08
	if (!ctx.cr6.eq) goto loc_82320E08;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r9,256
	ctx.r9.s64 = 256;
	// addi r10,r11,5504
	ctx.r10.s64 = ctx.r11.s64 + 5504;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82320DD8:
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
	// bdnz 0x82320dd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82320DD8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-30224(r8)
	REX_STORE_U32(ctx.r8.u32 + -30224, ctx.r11.u32);
loc_82320E08:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82323490) {
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
	ctx.lr = 0x82323498;
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
	// bgt cr6,0x823234c8
	if (ctx.cr6.gt) goto loc_823234C8;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
loc_823234C8:
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
	// ble cr6,0x823236b0
	if (!ctx.cr6.gt) goto loc_823236B0;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x823234fc
	if (!ctx.cr6.eq) goto loc_823234FC;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82323504
	if (!ctx.cr6.eq) goto loc_82323504;
loc_823234FC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823236b0
	if (!ctx.cr6.eq) goto loc_823236B0;
loc_82323504:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8232359c
	if (ctx.cr6.eq) goto loc_8232359C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x823236ec
	if (!ctx.cr6.eq) goto loc_823236EC;
	// subf r11,r26,r9
	ctx.r11.u64 = ctx.r9.u64 - r26.u64;
	// addi r29,r31,224
	r29.s64 = r31.s64 + 224;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8246e538
	ctx.lr = 0x8232352C;
	sub_8246E538(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823236f4
	if (ctx.cr6.lt) goto loc_823236F4;
	// lwz r11,304(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 304);
	// addi r30,r26,-1
	r30.s64 = r26.s64 + -1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823236ec
	if (!ctx.cr6.lt) goto loc_823236EC;
loc_82323544:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82319780
	ctx.lr = 0x82323554;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823236f4
	if (ctx.cr6.lt) goto loc_823236F4;
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
	// blt cr6,0x82323544
	if (ctx.cr6.lt) goto loc_82323544;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_8232359C:
	// addi r27,r31,224
	r27.s64 = r31.s64 + 224;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8246e538
	ctx.lr = 0x823235AC;
	sub_8246E538(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823236f4
	if (ctx.cr6.lt) goto loc_823236F4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82319780
	ctx.lr = 0x823235C4;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823236f4
	if (ctx.cr6.lt) goto loc_823236F4;
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
	// bne cr6,0x82323640
	if (!ctx.cr6.eq) goto loc_82323640;
	// lwz r10,304(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 304);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823236ec
	if (!ctx.cr6.gt) goto loc_823236EC;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82323604:
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
	// blt cr6,0x82323604
	if (ctx.cr6.lt) goto loc_82323604;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_82323640:
	// addic. r29,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r29.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble 0x8232368c
	if (!ctx.cr0.gt) goto loc_8232368C;
loc_82323648:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82319780
	ctx.lr = 0x82323658;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823236f4
	if (ctx.cr6.lt) goto loc_823236F4;
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
	// blt cr6,0x82323648
	if (ctx.cr6.lt) goto loc_82323648;
loc_8232368C:
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
loc_823236B0:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823236ec
	if (!ctx.cr6.gt) goto loc_823236EC;
	// li r9,1
	ctx.r9.s64 = 1;
loc_823236C0:
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
	// blt cr6,0x823236c0
	if (ctx.cr6.lt) goto loc_823236C0;
loc_823236EC:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
loc_823236F4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8232E700) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232e748
	if (ctx.cr6.eq) goto loc_8232E748;
	// lwz r11,20472(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8232e748
	if (!ctx.cr6.eq) goto loc_8232E748;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82208828
	ctx.lr = 0x8232E730;
	sub_82208828(ctx, base);
	// ld r10,20448(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 20448);
	// ld r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r11,20472(r31)
	REX_STORE_U32(r31.u32 + 20472, ctx.r11.u32);
	// std r8,20448(r31)
	REX_STORE_U64(r31.u32 + 20448, ctx.r8.u64);
loc_8232E748:
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

DEFINE_REX_FUNC(sub_8232E950) {
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
	// stw r6,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8232e9a0
	if (ctx.cr6.eq) goto loc_8232E9A0;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8232E984:
	// dcbf r11,r4
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x8232e984
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232E984;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8232e9a0
	if (ctx.cr6.eq) goto loc_8232E9A0;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// dcbf r11,r4
loc_8232E9A0:
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// bne cr6,0x8232e9c0
	if (!ctx.cr6.eq) goto loc_8232E9C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x8232ea10
	goto loc_8232EA10;
loc_8232E9C0:
	// addic. r30,r3,16
	ctx.xer.ca = ctx.r3.u32 > 4294967279;
	r30.s64 = ctx.r3.s64 + 16;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8232ea00
	if (ctx.cr0.eq) goto loc_8232EA00;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8233d448
	ctx.lr = 0x8232E9D4;
	sub_8233D448(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232e9ec
	if (ctx.cr6.eq) goto loc_8232E9EC;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x8232E9EC;
	sub_822D5870(ctx, base);
loc_8232E9EC:
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8232ea00
	if (ctx.cr6.eq) goto loc_8232EA00;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d440c
	ctx.lr = 0x8232EA00;
	__imp__RtlInitializeCriticalSection(ctx, base);
loc_8232EA00:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r3,-9
	ctx.r3.s64 = -9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232ea14
	if (ctx.cr6.eq) goto loc_8232EA14;
loc_8232EA10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232EA14:
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

DEFINE_REX_FUNC(sub_82333800) {
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
	ctx.lr = 0x82333808;
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	r21.s64 = 0;
	// li r27,1
	r27.s64 = 1;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// stw r21,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r21.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r27,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r27.u32);
	// bne cr6,0x82333834
	if (!ctx.cr6.eq) goto loc_82333834;
loc_82333828:
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x822d4eb8
	return;
loc_82333834:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// lis r10,6553
	ctx.r10.s64 = 429457408;
	// lis r9,6550
	ctx.r9.s64 = 429260800;
	// ori r8,r10,4643
	ctx.r8.u64 = ctx.r10.u64 | 4643;
	// ori r7,r9,276
	ctx.r7.u64 = ctx.r9.u64 | 276;
	// ld r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// rldimi r8,r7,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// cmpld cr6,r6,r8
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r8.u64, ctx.xer);
	// bne cr6,0x82333828
	if (!ctx.cr6.eq) goto loc_82333828;
	// lwz r31,736(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 736);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82333874
	if (ctx.cr6.eq) goto loc_82333874;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x822d4eb8
	return;
loc_82333874:
	// lwz r20,3376(r31)
	r20.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// lwz r11,24688(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24688);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r28,r11,8
	r28.s64 = ctx.r11.s64 + 8;
	// mr r30,r21
	r30.u64 = r21.u64;
	// bl 0x82366ea0
	ctx.lr = 0x823338A0;
	sub_82366EA0(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823339cc
	if (ctx.cr6.eq) goto loc_823339CC;
loc_823338AC:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82333904
	if (!ctx.cr6.eq) goto loc_82333904;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r29,r5,r30
	r29.u64 = ctx.r5.u64 + r30.u64;
	// cmplwi cr6,r29,256
	ctx.cr6.compare<uint32_t>(r29.u32, 256, ctx.xer);
	// bge cr6,0x82333908
	if (!ctx.cr6.lt) goto loc_82333908;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823338D8;
	sub_822D4FA0(ctx, base);
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r3,3376(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r29
	r30.u64 = r29.u64;
	// bl 0x82366ea0
	ctx.lr = 0x823338F8;
	sub_82366EA0(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823338ac
	if (!ctx.cr6.eq) goto loc_823338AC;
loc_82333904:
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_82333908:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x823339a0
	if (ctx.cr6.eq) goto loc_823339A0;
	// lwz r11,23968(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 23968);
	// add r29,r5,r30
	r29.u64 = ctx.r5.u64 + r30.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82333968
	if (!ctx.cr6.gt) goto loc_82333968;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82333934
	if (ctx.cr6.eq) goto loc_82333934;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,23972(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 23972);
	// bl 0x8233ff78
	ctx.lr = 0x82333934;
	sub_8233FF78(ctx, base);
loc_82333934:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,15387
	ctx.r5.s64 = ctx.r11.s64 + 15387;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8233feb8
	ctx.lr = 0x82333948;
	sub_8233FEB8(ctx, base);
	// stw r3,23972(r31)
	REX_STORE_U32(r31.u32 + 23972, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82333964
	if (!ctx.cr6.eq) goto loc_82333964;
	// li r3,-9
	ctx.r3.s64 = -9;
	// stw r21,23968(r31)
	REX_STORE_U32(r31.u32 + 23968, r21.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x822d4eb8
	return;
loc_82333964:
	// stw r29,23968(r31)
	REX_STORE_U32(r31.u32 + 23968, r29.u32);
loc_82333968:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,23972(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 23972);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x822d4fa0
	ctx.lr = 0x82333978;
	sub_822D4FA0(ctx, base);
	// lwz r11,23972(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 23972);
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x822d4fa0
	ctx.lr = 0x8233398C;
	sub_822D4FA0(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + r30.u64;
	// stw r5,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// lwz r10,23972(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 23972);
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
loc_823339A0:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823339cc
	if (ctx.cr6.eq) goto loc_823339CC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823339c0
	if (ctx.cr6.eq) goto loc_823339C0;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823339cc
	if (!ctx.cr6.eq) goto loc_823339CC;
loc_823339C0:
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x822d4eb8
	return;
loc_823339CC:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// stw r21,22096(r31)
	REX_STORE_U32(r31.u32 + 22096, r21.u32);
	// stw r21,22112(r31)
	REX_STORE_U32(r31.u32 + 22112, r21.u32);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// stw r21,22100(r31)
	REX_STORE_U32(r31.u32 + 22100, r21.u32);
	// stw r21,22104(r31)
	REX_STORE_U32(r31.u32 + 22104, r21.u32);
	// bne cr6,0x82333a90
	if (!ctx.cr6.eq) goto loc_82333A90;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82333a0c
	if (ctx.cr6.eq) goto loc_82333A0C;
	// stw r27,22112(r31)
	REX_STORE_U32(r31.u32 + 22112, r27.u32);
	// stw r21,14836(r31)
	REX_STORE_U32(r31.u32 + 14836, r21.u32);
	// b 0x82333a14
	goto loc_82333A14;
loc_82333A0C:
	// stw r21,22112(r31)
	REX_STORE_U32(r31.u32 + 22112, r21.u32);
	// stw r27,14836(r31)
	REX_STORE_U32(r31.u32 + 14836, r27.u32);
loc_82333A14:
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// rlwinm r9,r11,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// stw r10,22096(r31)
	REX_STORE_U32(r31.u32 + 22096, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82333a30
	if (ctx.cr6.eq) goto loc_82333A30;
	// stw r27,22108(r31)
	REX_STORE_U32(r31.u32 + 22108, r27.u32);
	// b 0x82333a34
	goto loc_82333A34;
loc_82333A30:
	// stw r21,22108(r31)
	REX_STORE_U32(r31.u32 + 22108, r21.u32);
loc_82333A34:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addic. r5,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r5.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r5,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// bne 0x82333a74
	if (!ctx.cr0.eq) goto loc_82333A74;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// lwz r3,3376(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82366ea0
	ctx.lr = 0x82333A60;
	sub_82366EA0(ctx, base);
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82333a94
	goto loc_82333A94;
loc_82333A74:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r9,r11,-7
	ctx.r9.s64 = ctx.r11.s64 + -7;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// b 0x82333a9c
	goto loc_82333A9C;
loc_82333A90:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82333A94:
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
loc_82333A9C:
	// lwz r6,120(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// bl 0x82337cb0
	ctx.lr = 0x82333AA8;
	sub_82337CB0(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8232eda8
	ctx.lr = 0x82333AC4;
	sub_8232EDA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82333c68
	if (!ctx.cr6.eq) goto loc_82333C68;
	// lwz r11,15364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82333ae8
	if (!ctx.cr6.eq) goto loc_82333AE8;
	// lwz r11,15432(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82333c60
	if (ctx.cr6.eq) goto loc_82333C60;
loc_82333AE8:
	// lwz r3,0(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 0);
	// lwz r29,156(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r28,160(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r24,88(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwz r23,92(r31)
	r23.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lwz r27,20408(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 20408);
	// lwz r26,20412(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 20412);
	// lwz r25,15300(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 15300);
	// beq cr6,0x82333b2c
	if (ctx.cr6.eq) goto loc_82333B2C;
	// lwz r11,736(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 736);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82333b2c
	if (!ctx.cr6.eq) goto loc_82333B2C;
	// lwz r30,3712(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 3712);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bgt cr6,0x82333b30
	if (ctx.cr6.gt) goto loc_82333B30;
loc_82333B2C:
	// li r30,30
	r30.s64 = 30;
loc_82333B30:
	// lwz r11,15432(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82333b90
	if (ctx.cr6.eq) goto loc_82333B90;
	// bl 0x82333748
	ctx.lr = 0x82333B40;
	sub_82333748(ctx, base);
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r5,22358
	ctx.r5.s64 = 1465253888;
	// lfs f2,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f2.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// stw r21,0(r22)
	REX_STORE_U32(r22.u32 + 0, r21.u32);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// ori r5,r5,20530
	ctx.r5.u64 = ctx.r5.u64 | 20530;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x823334c0
	ctx.lr = 0x82333B8C;
	sub_823334C0(ctx, base);
	// b 0x82333be0
	goto loc_82333BE0;
loc_82333B90:
	// bl 0x82333748
	ctx.lr = 0x82333B94;
	sub_82333748(ctx, base);
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r5,22349
	ctx.r5.s64 = 1464664064;
	// lfs f2,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f2.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// stw r21,0(r22)
	REX_STORE_U32(r22.u32 + 0, r21.u32);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// ori r5,r5,22067
	ctx.r5.u64 = ctx.r5.u64 | 22067;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x823334c0
	ctx.lr = 0x82333BE0;
	sub_823334C0(ctx, base);
loc_82333BE0:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,736(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 736);
	// bne cr6,0x82333c6c
	if (!ctx.cr6.eq) goto loc_82333C6C;
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// stw r24,15372(r31)
	REX_STORE_U32(r31.u32 + 15372, r24.u32);
	// stw r23,15376(r31)
	REX_STORE_U32(r31.u32 + 15376, r23.u32);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// lwz r6,120(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// bne cr6,0x82333c30
	if (!ctx.cr6.eq) goto loc_82333C30;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r5,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// addi r9,r11,-7
	ctx.r9.s64 = ctx.r11.s64 + -7;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// b 0x82333c3c
	goto loc_82333C3C;
loc_82333C30:
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
loc_82333C3C:
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// bl 0x82337cb0
	ctx.lr = 0x82333C44;
	sub_82337CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8232eda8
	ctx.lr = 0x82333C54;
	sub_8232EDA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x822d4eb8
	return;
loc_82333C60:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82332018
	ctx.lr = 0x82333C68;
	sub_82332018(ctx, base);
loc_82333C68:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82333C6C:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_82358400) {
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
	ctx.lr = 0x82358408;
	// srawi. r10,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 6;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r27,r11,r6
	r27.u64 = ctx.r6.u64 - ctx.r11.u64;
	// ble 0x823584f4
	if (!ctx.cr0.gt) goto loc_823584F4;
	// li r11,16
	ctx.r11.s64 = 16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r8,r5,32
	ctx.r8.s64 = ctx.r5.s64 + 32;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_82358430:
	// addi r7,r9,-16
	ctx.r7.s64 = ctx.r9.s64 + -16;
	// lvrx128 v63,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r6,r10,-16
	ctx.r6.s64 = ctx.r10.s64 + -16;
	// lvlx128 v62,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v61,r28,r3
	temp.u32 = r28.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r31,r9,16
	r31.s64 = ctx.r9.s64 + 16;
	// lvlx128 v60,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r10,16
	r30.s64 = ctx.r10.s64 + 16;
	// vor128 v0,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvlx128 v59,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v58,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v13,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvrx128 v57,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r29,r8,-16
	r29.s64 = ctx.r8.s64 + -16;
	// lvlx128 v56,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v12,v58,v57
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// lvrx128 v55,r11,r6
	temp.u32 = ctx.r11.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r7,r8,16
	ctx.r7.s64 = ctx.r8.s64 + 16;
	// lvlx128 v54,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v11,v56,v55
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// lvrx128 v53,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vaddubs v10,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_adds_epu8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v52,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v59,v53
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v51,r11,r31
	temp.u32 = ctx.r11.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v8,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvlx128 v50,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddubs v7,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_adds_epu8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// lvrx128 v49,r11,r30
	temp.u32 = ctx.r11.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v6,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvlx128 v48,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// vor128 v5,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// stvlx v10,0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// vaddubs v4,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_adds_epu8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// stvrx v10,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v10.u8[i]);
	// stvlx v7,0,r29
	ea = r29.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// stvrx v7,r29,r11
	ea = r29.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v7.u8[i]);
	// addi r4,r4,64
	ctx.r4.s64 = ctx.r4.s64 + 64;
	// vaddubs v3,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_adds_epu8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// stvlx v4,0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// addi r5,r5,64
	ctx.r5.s64 = ctx.r5.s64 + 64;
	// stvrx v4,r8,r11
	ea = ctx.r8.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v4.u8[i]);
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// stvlx v3,0,r7
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvrx v3,r7,r11
	ea = ctx.r7.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v3.u8[i]);
	// bdnz 0x82358430
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82358430;
loc_823584F4:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x82358530
	if (!ctx.cr6.gt) goto loc_82358530;
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// subf r8,r4,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r4.u64;
loc_82358508:
	// lbzx r10,r9,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x82358520
	if (!ctx.cr6.gt) goto loc_82358520;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82358520:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stbx r11,r8,r4
	REX_STORE_U8(ctx.r8.u32 + ctx.r4.u32, ctx.r11.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bdnz 0x82358508
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82358508;
loc_82358530:
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8235F228) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r3,-12
	ctx.r11.s64 = ctx.r3.s64 + -12;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8235F238:
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stwu r10,16(r11)
	ea = 16 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8235f238
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235F238;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8235F270) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8235F688) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8235F690;
	// lhz r30,50(r3)
	r30.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// srawi r31,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	r31.s64 = ctx.r6.s32 >> 16;
	// lhz r29,52(r3)
	r29.u64 = REX_LOAD_U16(ctx.r3.u32 + 52);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x8235f6b8
	if (!ctx.cr6.eq) goto loc_8235F6B8;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r31,1,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x8235f6c0
	goto loc_8235F6C0;
loc_8235F6B8:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x8235f6c4
	if (!ctx.cr6.eq) goto loc_8235F6C4;
loc_8235F6C0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8235F6C4:
	// srawi r6,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 1;
	// lhz r9,18(r7)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + 18);
	// lhz r8,16(r7)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 16);
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	// clrlwi r7,r6,31
	ctx.r7.u64 = ctx.r6.u32 & 0x1;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r9,r5,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + r31.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// subfic r10,r11,-15
	ctx.xer.ca = ctx.r11.u32 <= 4294967281;
	ctx.r10.u64 = static_cast<uint64_t>(-15) - ctx.r11.u64;
	// beq cr6,0x8235f700
	if (ctx.cr6.eq) goto loc_8235F700;
	// subfic r10,r11,-7
	ctx.xer.ca = ctx.r11.u32 <= 4294967289;
	ctx.r10.u64 = static_cast<uint64_t>(-7) - ctx.r11.u64;
loc_8235F700:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r6,r9,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r5,r5,r11
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// not r5,r5
	ctx.r5.u64 = ~ctx.r5.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// and r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 & ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// and r10,r5,r7
	ctx.r10.u64 = ctx.r5.u64 & ctx.r7.u64;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8235f750
	if (!ctx.cr6.lt) goto loc_8235F750;
	// subf r11,r11,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r11.u64;
	// b 0x8235f75c
	goto loc_8235F75C;
loc_8235F750:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8235f760
	if (!ctx.cr6.gt) goto loc_8235F760;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_8235F75C:
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8235F760:
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8235f770
	if (!ctx.cr6.lt) goto loc_8235F770;
	// subf r11,r10,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r10.u64;
	// b 0x8235f77c
	goto loc_8235F77C;
loc_8235F770:
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x8235f780
	if (!ctx.cr6.gt) goto loc_8235F780;
	// subf r11,r10,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r10.u64;
loc_8235F77C:
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
loc_8235F780:
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x8235f790
	if (!ctx.cr6.eq) goto loc_8235F790;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// srawi r31,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r31.s64 = r31.s32 >> 1;
loc_8235F790:
	// rlwimi r3,r31,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82364678) {
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
	ctx.lr = 0x82364680;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r21,0
	r21.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r23,1
	r23.s64 = 1;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
loc_823646A4:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne cr6,0x823646e0
	if (!ctx.cr6.eq) goto loc_823646E0;
	// lwz r8,-8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + -8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82364800
	if (ctx.cr6.eq) goto loc_82364800;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r21,r24
	r21.u64 = r24.u64;
	// stw r8,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r8.u32);
	// stw r8,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r8.u32);
	// stw r8,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// stw r8,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// b 0x823647fc
	goto loc_823647FC;
loc_823646E0:
	// lwz r8,-4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// mr r21,r24
	r21.u64 = r24.u64;
	// lwz r6,4(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r5,12(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mulli r29,r8,2276
	r29.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(2276));
	// lwz r7,20(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r31,0(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r30,16(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r25,-8(r9)
	r25.u64 = REX_LOAD_U32(ctx.r9.u32 + -8);
	// lwz r22,8(r9)
	r22.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// add r28,r5,r6
	r28.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mulli r5,r5,799
	ctx.r5.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(799));
	// mulli r27,r28,2408
	r27.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(2408));
	// mulli r7,r7,3406
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(3406));
	// mulli r6,r6,4017
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(4017));
	// mulli r4,r8,565
	ctx.r4.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(565));
	// subf r28,r5,r27
	r28.u64 = r27.u64 - ctx.r5.u64;
	// subf r26,r7,r4
	r26.u64 = ctx.r4.u64 - ctx.r7.u64;
	// add r8,r29,r4
	ctx.r8.u64 = r29.u64 + ctx.r4.u64;
	// subf r27,r6,r27
	r27.u64 = r27.u64 - ctx.r6.u64;
	// subf r7,r28,r8
	ctx.r7.u64 = ctx.r8.u64 - r28.u64;
	// subf r6,r27,r26
	ctx.r6.u64 = r26.u64 - r27.u64;
	// add r4,r30,r31
	ctx.r4.u64 = r30.u64 + r31.u64;
	// rlwinm r5,r25,11,0,20
	ctx.r5.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 11) & 0xFFFFF800;
	// add r25,r6,r7
	r25.u64 = ctx.r6.u64 + ctx.r7.u64;
	// subf r20,r6,r7
	r20.u64 = ctx.r7.u64 - ctx.r6.u64;
	// mulli r6,r31,1568
	ctx.r6.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(1568));
	// mulli r29,r4,1108
	r29.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1108));
	// addi r7,r5,128
	ctx.r7.s64 = ctx.r5.s64 + 128;
	// rlwinm r4,r22,11,0,20
	ctx.r4.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 11) & 0xFFFFF800;
	// mulli r22,r30,3784
	r22.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(3784));
	// mulli r31,r25,181
	r31.s64 = static_cast<int64_t>(r25.u64 * static_cast<uint64_t>(181));
	// add r5,r6,r29
	ctx.r5.u64 = ctx.r6.u64 + r29.u64;
	// mulli r25,r20,181
	r25.s64 = static_cast<int64_t>(r20.u64 * static_cast<uint64_t>(181));
	// add r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 + ctx.r4.u64;
	// subf r30,r4,r7
	r30.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r22,r29
	ctx.r7.u64 = r29.u64 - r22.u64;
	// addi r31,r31,128
	r31.s64 = r31.s64 + 128;
	// addi r25,r25,128
	r25.s64 = r25.s64 + 128;
	// subf r29,r5,r6
	r29.u64 = ctx.r6.u64 - ctx.r5.u64;
	// add r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r8,r28,r8
	ctx.r8.u64 = r28.u64 + ctx.r8.u64;
	// add r6,r30,r7
	ctx.r6.u64 = r30.u64 + ctx.r7.u64;
	// srawi r5,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	ctx.r5.s64 = r31.s32 >> 8;
	// subf r30,r7,r30
	r30.u64 = r30.u64 - ctx.r7.u64;
	// srawi r31,r25,8
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0xFF) != 0);
	r31.s64 = r25.s32 >> 8;
	// add r7,r26,r27
	ctx.r7.u64 = r26.u64 + r27.u64;
	// add r28,r8,r4
	r28.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r27,r5,r6
	r27.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r26,r30,r31
	r26.u64 = r30.u64 + r31.u64;
	// add r25,r29,r7
	r25.u64 = r29.u64 + ctx.r7.u64;
	// srawi r28,r28,8
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0xFF) != 0);
	r28.s64 = r28.s32 >> 8;
	// subf r7,r7,r29
	ctx.r7.u64 = r29.u64 - ctx.r7.u64;
	// srawi r27,r27,8
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0xFF) != 0);
	r27.s64 = r27.s32 >> 8;
	// stw r28,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r28.u32);
	// srawi r29,r26,8
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0xFF) != 0);
	r29.s64 = r26.s32 >> 8;
	// subf r31,r31,r30
	r31.u64 = r30.u64 - r31.u64;
	// stw r27,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r27.u32);
	// subf r6,r5,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r5.u64;
	// stw r29,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r29.u32);
	// srawi r30,r25,8
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0xFF) != 0);
	r30.s64 = r25.s32 >> 8;
	// srawi r5,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 8;
	// subf r4,r8,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r8.u64;
	// stw r30,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, r30.u32);
	// srawi r8,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	ctx.r8.s64 = r31.s32 >> 8;
	// stw r5,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r5.u32);
	// srawi r7,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 8;
	// srawi r6,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 8;
	// stw r7,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r7.u32);
	// stw r6,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r6.u32);
loc_823647FC:
	// stw r8,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r8.u32);
loc_82364800:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// rotlwi r23,r23,1
	r23.u64 = __builtin_rotateleft32(r23.u32, 1);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// bdnz 0x823646a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823646A4;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// subf r26,r11,r10
	r26.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// subf r25,r11,r9
	r25.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r10,r3,r8
	ctx.r10.u64 = ctx.r3.u64 + ctx.r8.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// subf r24,r11,r8
	r24.u64 = ctx.r8.u64 - ctx.r11.u64;
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// subf r23,r11,r9
	r23.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 + ctx.r8.u64;
	// subf r9,r11,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r22,r11,r7
	r22.u64 = ctx.r7.u64 - ctx.r11.u64;
loc_82364854:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x82364894
	if (!ctx.cr6.eq) goto loc_82364894;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823649d4
	if (ctx.cr6.eq) goto loc_823649D4;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// srawi r8,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 6;
	// stwx r8,r22,r11
	REX_STORE_U32(r22.u32 + ctx.r11.u32, ctx.r8.u32);
	// stwx r8,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// stwx r8,r23,r11
	REX_STORE_U32(r23.u32 + ctx.r11.u32, ctx.r8.u32);
	// stwx r8,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// stwx r8,r24,r11
	REX_STORE_U32(r24.u32 + ctx.r11.u32, ctx.r8.u32);
	// stwx r8,r25,r11
	REX_STORE_U32(r25.u32 + ctx.r11.u32, ctx.r8.u32);
	// stwx r8,r26,r11
	REX_STORE_U32(r26.u32 + ctx.r11.u32, ctx.r8.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x823649d4
	goto loc_823649D4;
loc_82364894:
	// lwzx r8,r26,r11
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + ctx.r11.u32);
	// lwzx r7,r22,r11
	ctx.r7.u64 = REX_LOAD_U32(r22.u32 + ctx.r11.u32);
	// mulli r4,r8,2276
	ctx.r4.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(2276));
	// lwzx r5,r23,r11
	ctx.r5.u64 = REX_LOAD_U32(r23.u32 + ctx.r11.u32);
	// lwzx r6,r24,r11
	ctx.r6.u64 = REX_LOAD_U32(r24.u32 + ctx.r11.u32);
	// lwzx r31,r9,r11
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r3,r25,r11
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + ctx.r11.u32);
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r29,r10,r11
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r28,r5,r6
	r28.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mulli r8,r8,565
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(565));
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// mulli r27,r7,3406
	r27.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(3406));
	// mulli r7,r28,2408
	ctx.r7.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(2408));
	// subf r28,r27,r8
	r28.u64 = ctx.r8.u64 - r27.u64;
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// mulli r7,r5,799
	ctx.r7.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(799));
	// mulli r6,r6,4017
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(4017));
	// add r27,r31,r3
	r27.u64 = r31.u64 + ctx.r3.u64;
	// subf r5,r7,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r7.u64;
	// subf r20,r6,r8
	r20.u64 = ctx.r8.u64 - ctx.r6.u64;
	// srawi r7,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 3;
	// srawi r6,r28,3
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x7) != 0);
	ctx.r6.s64 = r28.s32 >> 3;
	// srawi r5,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 3;
	// mulli r8,r27,1108
	ctx.r8.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(1108));
	// srawi r4,r20,3
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x7) != 0);
	ctx.r4.s64 = r20.s32 >> 3;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// mulli r31,r31,3784
	r31.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(3784));
	// subf r27,r4,r6
	r27.u64 = ctx.r6.u64 - ctx.r4.u64;
	// addi r20,r30,32
	r20.s64 = r30.s64 + 32;
	// subf r28,r5,r7
	r28.u64 = ctx.r7.u64 - ctx.r5.u64;
	// mulli r3,r3,1568
	ctx.r3.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(1568));
	// subf r31,r31,r8
	r31.u64 = ctx.r8.u64 - r31.u64;
	// rlwinm r30,r29,8,0,23
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xFFFFFF00;
	// add r19,r3,r8
	r19.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r18,r27,r28
	r18.u64 = r27.u64 + r28.u64;
	// rlwinm r29,r20,8,0,23
	r29.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 8) & 0xFFFFFF00;
	// subf r28,r27,r28
	r28.u64 = r28.u64 - r27.u64;
	// srawi r3,r31,3
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7) != 0);
	ctx.r3.s64 = r31.s32 >> 3;
	// add r8,r29,r30
	ctx.r8.u64 = r29.u64 + r30.u64;
	// srawi r31,r19,3
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x7) != 0);
	r31.s64 = r19.s32 >> 3;
	// mulli r27,r18,181
	r27.s64 = static_cast<int64_t>(r18.u64 * static_cast<uint64_t>(181));
	// mulli r28,r28,181
	r28.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(181));
	// subf r30,r30,r29
	r30.u64 = r29.u64 - r30.u64;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r5,r8,r31
	ctx.r5.u64 = ctx.r8.u64 + r31.u64;
	// addi r29,r27,128
	r29.s64 = r27.s64 + 128;
	// subf r31,r31,r8
	r31.u64 = ctx.r8.u64 - r31.u64;
	// addi r28,r28,128
	r28.s64 = r28.s64 + 128;
	// add r8,r30,r3
	ctx.r8.u64 = r30.u64 + ctx.r3.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// srawi r4,r29,8
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xFF) != 0);
	ctx.r4.s64 = r29.s32 >> 8;
	// subf r30,r3,r30
	r30.u64 = r30.u64 - ctx.r3.u64;
	// srawi r3,r28,8
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0xFF) != 0);
	ctx.r3.s64 = r28.s32 >> 8;
	// add r29,r7,r5
	r29.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r28,r4,r8
	r28.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r27,r30,r3
	r27.u64 = r30.u64 + ctx.r3.u64;
	// add r20,r31,r6
	r20.u64 = r31.u64 + ctx.r6.u64;
	// srawi r29,r29,14
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x3FFF) != 0);
	r29.s64 = r29.s32 >> 14;
	// srawi r28,r28,14
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3FFF) != 0);
	r28.s64 = r28.s32 >> 14;
	// subf r6,r6,r31
	ctx.r6.u64 = r31.u64 - ctx.r6.u64;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// subf r3,r3,r30
	ctx.r3.u64 = r30.u64 - ctx.r3.u64;
	// stwx r28,r26,r11
	REX_STORE_U32(r26.u32 + ctx.r11.u32, r28.u32);
	// srawi r31,r27,14
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3FFF) != 0);
	r31.s64 = r27.s32 >> 14;
	// subf r8,r4,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r4.u64;
	// srawi r30,r20,14
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x3FFF) != 0);
	r30.s64 = r20.s32 >> 14;
	// stwx r31,r25,r11
	REX_STORE_U32(r25.u32 + ctx.r11.u32, r31.u32);
	// srawi r6,r6,14
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 14;
	// srawi r4,r3,14
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 14;
	// stwx r30,r24,r11
	REX_STORE_U32(r24.u32 + ctx.r11.u32, r30.u32);
	// srawi r3,r8,14
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 14;
	// stwx r6,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// subf r8,r7,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r7.u64;
	// stwx r4,r23,r11
	REX_STORE_U32(r23.u32 + ctx.r11.u32, ctx.r4.u32);
	// stwx r3,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r3.u32);
	// srawi r7,r8,14
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 14;
	// stwx r7,r22,r11
	REX_STORE_U32(r22.u32 + ctx.r11.u32, ctx.r7.u32);
loc_823649D4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82364854
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82364854;
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_823754D8) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v14{};
	PPCVRegister v15{};
	PPCVRegister v16{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	uint32_t ea{};
	// add r12,r6,r6
	ctx.r12.u64 = ctx.r6.u64 + ctx.r6.u64;
	// vspltish v15,15
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_set1_epi16(short(0xF)));
	// li r0,0
	ctx.r0.s64 = 0;
	// add r6,r12,r12
	ctx.r6.u64 = ctx.r12.u64 + ctx.r12.u64;
	// addi r10,r3,256
	ctx.r10.s64 = ctx.r3.s64 + 256;
	// add r8,r7,r7
	ctx.r8.u64 = ctx.r7.u64 + ctx.r7.u64;
	// vslb v16,v15,v15
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// addi r11,r3,384
	ctx.r11.s64 = ctx.r3.s64 + 384;
	// lvx128 v27,r3,r12
	ea = (ctx.r3.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r12,r6
	ctx.r7.u64 = ctx.r12.u64 + ctx.r6.u64;
	// lvx128 v31,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r3,128
	ctx.r9.s64 = ctx.r3.s64 + 128;
	// lvx128 v29,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v0,v31,v16
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v25,r10,r12
	ea = (ctx.r10.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v2,v29,v16
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v28,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v6,v25,v16
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v24,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v3,v28,v16
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v29,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v7,v24,v16
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v25,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// lvx128 v30,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v4,v27,v16
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v28,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v1,v30,v16
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v24,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r5,16
	ctx.r11.s64 = ctx.r5.s64 + 16;
	// lvx128 v26,r9,r12
	ea = (ctx.r9.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v10,v29,v16
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vaddshs v5,v26,v16
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v31,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v30,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r8,r8
	ctx.r6.u64 = ctx.r8.u64 + ctx.r8.u64;
	// lvx128 v27,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v8,v31,v16
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v26,r9,r7
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v9,v30,v16
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stvx v1,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v11,v28,v16
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx v2,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v12,v27,v16
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx v3,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v13,v26,v16
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx v4,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v14,v25,v16
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx v5,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v15,v24,v16
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx v6,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v7,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v8,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v9,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v10,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v11,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r6,r12,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r12.u32 | (ctx.r12.u64 << 32), 2) & 0xFFFFFFFC;
	// stvx v12,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r3,256
	ctx.r10.s64 = ctx.r3.s64 + 256;
	// stvx v14,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v15,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r12,r6
	ctx.r7.u64 = ctx.r12.u64 + ctx.r6.u64;
	// addi r11,r3,384
	ctx.r11.s64 = ctx.r3.s64 + 384;
	// lvx128 v31,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v30,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v1,v30,v16
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v28,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v0,v31,v16
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v27,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v29,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r12,r7
	ctx.r6.u64 = ctx.r12.u64 + ctx.r7.u64;
	// lvx128 v26,r9,r7
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v2,v29,v16
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v25,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v4,v27,v16
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v24,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v3,v28,v16
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// add r7,r12,r6
	ctx.r7.u64 = ctx.r12.u64 + ctx.r6.u64;
	// lvx128 v31,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v6,v25,v16
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v29,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v7,v24,v16
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v28,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v5,v26,v16
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v30,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v25,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// lvx128 v24,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r5,16
	ctx.r11.s64 = ctx.r5.s64 + 16;
	// lvx128 v27,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v8,v31,v16
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v26,r9,r7
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stvx v0,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v9,v30,v16
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx v1,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stvx v2,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v10,v29,v16
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx v3,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r12,r8,r3
	ctx.r12.u64 = ctx.r8.u64 + ctx.r3.u64;
	// stvx v4,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v11,v28,v16
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx v5,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v12,v27,v16
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx v6,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v13,v26,v16
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx v7,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v14,v25,v16
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx v8,r4,r3
	ea = (ctx.r4.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v15,v24,v16
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx v9,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v10,r5,r3
	ea = (ctx.r5.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v11,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v12,r4,r12
	ea = (ctx.r4.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r10,r12
	ea = (ctx.r10.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v14,r5,r12
	ea = (ctx.r5.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v15,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8238B010) {
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
	ctx.lr = 0x8238B018;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20680(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20680);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238b1b4
	if (ctx.cr6.eq) goto loc_8238B1B4;
	// lwz r10,20684(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20684);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8238b1b4
	if (!ctx.cr6.eq) goto loc_8238B1B4;
	// lwz r11,15116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15116);
	// lwz r10,204(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8238b278
	if (!ctx.cr6.eq) goto loc_8238B278;
	// lwz r7,3776(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3776);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r29,184(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// li r30,0
	r30.s64 = 0;
	// lwz r28,15920(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 15920);
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r6,172(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// rlwinm r27,r11,1,0,30
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,164(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,220(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// srawi r6,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// bctrl 
	ctx.lr = 0x8238B098;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r5,3784(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3784);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,3780(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r7,20680(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20680);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r30,168(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 168);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// lwz r29,15916(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 15916);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r28,176(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 176);
	// rlwinm r27,r7,27,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,224(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 224);
	// srawi r7,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r7.s64 = r28.s32 >> 1;
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bctrl 
	ctx.lr = 0x8238B0FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,20680(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 20680);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// li r9,1
	ctx.r9.s64 = 1;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// lwz r10,164(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 164);
	// lwz r30,184(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 184);
	// rlwinm r27,r6,27,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// lwz r29,15920(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 15920);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r28,172(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 172);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,220(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 220);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,3776(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3776);
	// srawi r6,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r6.s64 = r28.s32 >> 1;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bctrl 
	ctx.lr = 0x8238B150;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,20680(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20680);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// li r9,1
	ctx.r9.s64 = 1;
	// cntlzw r4,r7
	ctx.r4.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// lwz r8,224(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r7,176(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 176);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r30,168(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 168);
	// rlwinm r29,r5,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r28,15916(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 15916);
	// rlwinm r27,r4,27,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// srawi r7,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// lwz r5,3784(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3784);
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// lwz r4,3780(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bctrl 
	ctx.lr = 0x8238B1AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ecc
	return;
loc_8238B1B4:
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lwz r8,204(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r5,184(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 184);
	// cntlzw r3,r11
	ctx.r3.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r9,15920(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15920);
	// srawi r6,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// lwz r11,3776(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3776);
	// and r30,r10,r4
	r30.u64 = ctx.r10.u64 & ctx.r4.u64;
	// lwz r10,164(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 164);
	// rlwinm r3,r3,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mullw r4,r6,r30
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(r30.s32);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lwz r7,220(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r6,172(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 172);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bctrl 
	ctx.lr = 0x8238B214;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20680(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20680);
	// lwz r5,3784(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3784);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,3780(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// cntlzw r25,r11
	r25.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r8,224(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,176(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 176);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r29,208(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r27,196(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwz r26,168(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 168);
	// srawi r28,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	r28.s64 = r29.s32 >> 1;
	// lwz r31,15916(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 15916);
	// mullw r11,r28,r30
	ctx.r11.s64 = int64_t(r28.s32) * int64_t(r30.s32);
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// rlwinm r31,r25,27,31,31
	r31.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 27) & 0x1;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// bctrl 
	ctx.lr = 0x8238B278;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8238B278:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82393448) {
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
	ctx.lr = 0x82393450;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,292(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82393600
	if (!ctx.cr6.gt) goto loc_82393600;
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// addi r10,r7,-2
	ctx.r10.s64 = ctx.r7.s64 + -2;
	// addi r5,r23,4
	ctx.r5.s64 = r23.s64 + 4;
	// rlwinm r27,r10,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r7,2,0,29
	r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r7,1
	r30.s64 = ctx.r7.s64 + 1;
	// mullw r24,r6,r11
	r24.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// li r22,255
	r22.s64 = 255;
loc_82393498:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x823934d0
	if (!ctx.cr6.gt) goto loc_823934D0;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// addi r10,r5,-8
	ctx.r10.s64 = ctx.r5.s64 + -8;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823934B8:
	// lbzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mulli r6,r9,315
	ctx.r6.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(315));
	// srawi r9,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 4;
	// stwu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823934b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823934B8;
loc_823934D0:
	// lwzx r11,r27,r5
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + ctx.r5.u32);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// stwx r11,r26,r5
	REX_STORE_U32(r26.u32 + ctx.r5.u32, ctx.r11.u32);
	// ble cr6,0x82393510
	if (!ctx.cr6.gt) goto loc_82393510;
	// addi r10,r30,-2
	ctx.r10.s64 = r30.s64 + -2;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823934F4:
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mulli r9,r10,226
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(226));
	// srawi r10,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 8;
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823934f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823934F4;
loc_82393510:
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r10,-4(r5)
	REX_STORE_U32(ctx.r5.u32 + -4, ctx.r10.u32);
	// ble cr6,0x82393560
	if (!ctx.cr6.gt) goto loc_82393560;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82393538:
	// lwz r6,-4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// mulli r6,r9,217
	ctx.r6.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(217));
	// srawi r9,r6,12
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 12;
	// subf r6,r9,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r9.u64;
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82393538
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82393538;
loc_82393560:
	// lwzx r10,r27,r5
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + ctx.r5.u32);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// stwx r10,r26,r5
	REX_STORE_U32(r26.u32 + ctx.r5.u32, ctx.r10.u32);
	// ble cr6,0x823935a8
	if (!ctx.cr6.gt) goto loc_823935A8;
	// addi r10,r30,-2
	ctx.r10.s64 = r30.s64 + -2;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82393580:
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r10,r3,406
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(406));
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// subf r6,r6,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r6.u64;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82393580
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82393580;
loc_823935A8:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x823935f0
	if (!ctx.cr6.gt) goto loc_823935F0;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823935BC:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// ble cr6,0x823935dc
	if (!ctx.cr6.gt) goto loc_823935DC;
	// subfic r6,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r6.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r11,r3
	temp.u8 = (ctx.r3.u32 + 0xFFFFFFFFu < ctx.r3.u32) | (ctx.r3.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r3.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 & r22.u64;
loc_823935DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stbx r11,r9,r31
	REX_STORE_U8(ctx.r9.u32 + r31.u32, ctx.r11.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x823935bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823935BC;
loc_823935F0:
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// add r31,r24,r31
	r31.u64 = r24.u64 + r31.u64;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82393498
	if (ctx.cr6.lt) goto loc_82393498;
loc_82393600:
	// lwz r29,284(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x8239363c
	if (!ctx.cr6.gt) goto loc_8239363C;
	// mullw r30,r28,r29
	r30.s64 = int64_t(r28.s32) * int64_t(r29.s32);
loc_82393618:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// bl 0x823932d0
	ctx.lr = 0x8239362C;
	sub_823932D0(ctx, base);
	// add r31,r31,r28
	r31.u64 = r31.u64 + r28.u64;
	// add r3,r30,r3
	ctx.r3.u64 = r30.u64 + ctx.r3.u64;
	// cmpw cr6,r31,r25
	ctx.cr6.compare<int32_t>(r31.s32, r25.s32, ctx.xer);
	// blt cr6,0x82393618
	if (ctx.cr6.lt) goto loc_82393618;
loc_8239363C:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x82393674
	if (!ctx.cr6.gt) goto loc_82393674;
	// mullw r30,r28,r29
	r30.s64 = int64_t(r28.s32) * int64_t(r29.s32);
loc_82393650:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// bl 0x823932d0
	ctx.lr = 0x82393664;
	sub_823932D0(ctx, base);
	// add r31,r31,r28
	r31.u64 = r31.u64 + r28.u64;
	// add r3,r30,r3
	ctx.r3.u64 = r30.u64 + ctx.r3.u64;
	// cmpw cr6,r31,r25
	ctx.cr6.compare<int32_t>(r31.s32, r25.s32, ctx.xer);
	// blt cr6,0x82393650
	if (ctx.cr6.lt) goto loc_82393650;
loc_82393674:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_82396360) {
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
	ctx.lr = 0x82396368;
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
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x823963b4
	if (!ctx.cr6.gt) goto loc_823963B4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823963a4
	if (!ctx.cr6.eq) goto loc_823963A4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823963b4
	if (ctx.cr6.eq) goto loc_823963B4;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x823963b4
	if (ctx.cr6.eq) goto loc_823963B4;
loc_823963A4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82395d40
	ctx.lr = 0x823963B4;
	sub_82395D40(ctx, base);
loc_823963B4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x823963e4
	if (!ctx.cr6.gt) goto loc_823963E4;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x823963d4
	if (!ctx.cr6.eq) goto loc_823963D4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x823963e4
	if (ctx.cr6.eq) goto loc_823963E4;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(r28.s32, 8, ctx.xer);
	// beq cr6,0x823963e4
	if (ctx.cr6.eq) goto loc_823963E4;
loc_823963D4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82396098
	ctx.lr = 0x823963E4;
	sub_82396098(ctx, base);
loc_823963E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82397BF8) {
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
	ctx.lr = 0x82397C00;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// rlwinm r25,r11,26,6,31
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// slw r31,r10,r6
	r31.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r6.u8 & 0x3F));
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// add r30,r11,r31
	r30.u64 = ctx.r11.u64 + r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r30,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x822d5870
	ctx.lr = 0x82397C38;
	sub_822D5870(ctx, base);
	// cmplwi cr6,r27,16
	ctx.cr6.compare<uint32_t>(r27.u32, 16, ctx.xer);
	// blt cr6,0x82397c4c
	if (ctx.cr6.lt) goto loc_82397C4C;
loc_82397C40:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_82397C4C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r6,r11,32768
	ctx.r6.u64 = ctx.r11.u64 | 32768;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// subf r5,r6,r31
	ctx.r5.u64 = r31.u64 - ctx.r6.u64;
	// subf r30,r6,r30
	r30.u64 = r30.u64 - ctx.r6.u64;
	// ble cr6,0x82397db4
	if (!ctx.cr6.gt) goto loc_82397DB4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
loc_82397C70:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r8,r11,26,6,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// cmplwi cr6,r10,26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 26, ctx.xer);
	// bgt cr6,0x82397c40
	if (ctx.cr6.gt) goto loc_82397C40;
	// srw. r11,r8,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82397c40
	if (!ctx.cr0.eq) goto loc_82397C40;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, ctx.xer);
	// bgt cr6,0x82397d04
	if (ctx.cr6.gt) goto loc_82397D04;
	// subf r9,r10,r27
	ctx.r9.u64 = r27.u64 - ctx.r10.u64;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// slw r11,r8,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// slw r7,r7,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// beq cr6,0x82397cb4
	if (ctx.cr6.eq) goto loc_82397CB4;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_82397CB4:
	// cmplwi cr6,r9,2048
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2048, ctx.xer);
	// bge cr6,0x82397c40
	if (!ctx.cr6.lt) goto loc_82397C40;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// beq cr6,0x82397ccc
	if (ctx.cr6.eq) goto loc_82397CCC;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_82397CCC:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r9,-2
	ctx.r10.s64 = ctx.r9.s64 + -2;
loc_82397CE0:
	// lhz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82397c40
	if (!ctx.cr6.eq) goto loc_82397C40;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82397ce0
	if (!ctx.cr6.eq) goto loc_82397CE0;
	// b 0x82397da0
	goto loc_82397DA0;
loc_82397D04:
	// subf r10,r27,r10
	ctx.r10.u64 = ctx.r10.u64 - r27.u64;
	// srw r11,r8,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
loc_82397D0C:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r11,r28
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + r28.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x82397c40
	if (ctx.cr6.gt) goto loc_82397C40;
	// bne cr6,0x82397d38
	if (!ctx.cr6.eq) goto loc_82397D38;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// sthx r9,r11,r28
	REX_STORE_U16(ctx.r11.u32 + r28.u32, ctx.r9.u16);
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r30.s32, ctx.xer);
	// bgt cr6,0x82397c40
	if (ctx.cr6.gt) goto loc_82397C40;
loc_82397D38:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lhzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + r28.u32);
	// srw r9,r8,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82397d5c
	if (ctx.cr6.eq) goto loc_82397D5C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82397D5C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82397d0c
	if (!ctx.cr6.eq) goto loc_82397D0C;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r10,r28
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82397c40
	if (!ctx.cr6.eq) goto loc_82397C40;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// beq cr6,0x82397d84
	if (ctx.cr6.eq) goto loc_82397D84;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_82397D84:
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bge cr6,0x82397c40
	if (!ctx.cr6.lt) goto loc_82397C40;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// beq cr6,0x82397d9c
	if (ctx.cr6.eq) goto loc_82397D9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_82397D9C:
	// sthx r11,r10,r28
	REX_STORE_U16(ctx.r10.u32 + r28.u32, ctx.r11.u16);
loc_82397DA0:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmpw cr6,r4,r25
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r25.s32, ctx.xer);
	// blt cr6,0x82397c70
	if (ctx.cr6.lt) goto loc_82397C70;
loc_82397DB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_823A56C8) {
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
	ctx.lr = 0x823A56D0;
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// lhz r30,6(r8)
	r30.u64 = REX_LOAD_U16(ctx.r8.u32 + 6);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r26,4(r8)
	r26.u64 = REX_LOAD_U16(ctx.r8.u32 + 4);
	// subf r8,r4,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r4.u64;
	// add r29,r4,r11
	r29.u64 = ctx.r4.u64 + ctx.r11.u64;
	// extsh r28,r30
	r28.s64 = r30.s16;
	// lhz r3,2(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 2);
	// rlwinm r27,r4,1,0,30
	r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// extsh r26,r26
	r26.s64 = r26.s16;
	// extsh r25,r3
	r25.s64 = ctx.r3.s16;
	// extsh r24,r11
	r24.s64 = ctx.r11.s16;
	// li r30,0
	r30.s64 = 0;
	// addi r23,r8,-1
	r23.s64 = ctx.r8.s64 + -1;
loc_823A5710:
	// li r3,11
	ctx.r3.s64 = 11;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
loc_823A5720:
	// lbzx r3,r11,r27
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + r27.u32);
	// add r22,r30,r8
	r22.u64 = r30.u64 + ctx.r8.u64;
	// lbzx r31,r11,r29
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// addi r21,r1,16
	r21.s64 = ctx.r1.s64 + 16;
	// mullw r3,r3,r26
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(r26.s32);
	// lbzx r20,r11,r4
	r20.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbz r19,0(r11)
	r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r31,r31,r28
	r31.s64 = int64_t(r31.s32) * int64_t(r28.s32);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + r31.u64;
	// mullw r31,r20,r25
	r31.s64 = int64_t(r20.s32) * int64_t(r25.s32);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + r31.u64;
	// mullw r31,r19,r24
	r31.s64 = int64_t(r19.s32) * int64_t(r24.s32);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + r31.u64;
	// rlwinm r31,r22,1,0,30
	r31.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sraw r3,r3,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r3.s64 = ctx.r3.s32 >> temp.u32;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthx r3,r31,r21
	REX_STORE_U16(r31.u32 + r21.u32, ctx.r3.u16);
	// bdnz 0x823a5720
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A5720;
	// addi r30,r30,35
	r30.s64 = r30.s64 + 35;
	// add r23,r23,r4
	r23.u64 = r23.u64 + ctx.r4.u64;
	// cmpwi cr6,r30,280
	ctx.cr6.compare<int32_t>(r30.s32, 280, ctx.xer);
	// blt cr6,0x823a5710
	if (ctx.cr6.lt) goto loc_823A5710;
	// lwz r3,772(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 772);
	// li r27,0
	r27.s64 = 0;
	// addi r29,r5,2
	r29.s64 = ctx.r5.s64 + 2;
loc_823A5790:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r28,r29,-1
	r28.s64 = r29.s64 + -1;
	// addi r26,r29,1
	r26.s64 = r29.s64 + 1;
	// addi r10,r1,22
	ctx.r10.s64 = ctx.r1.s64 + 22;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r8,r1,20
	ctx.r8.s64 = ctx.r1.s64 + 20;
loc_823A57AC:
	// add r11,r27,r9
	ctx.r11.u64 = r27.u64 + ctx.r9.u64;
	// lhz r5,0(r7)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// addi r4,r1,16
	ctx.r4.s64 = ctx.r1.s64 + 16;
	// lhz r31,4(r7)
	r31.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r30,6(r7)
	r30.u64 = REX_LOAD_U16(ctx.r7.u32 + 6);
	// addi r25,r1,18
	r25.s64 = ctx.r1.s64 + 18;
	// lhz r24,2(r7)
	r24.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// extsh r30,r30
	r30.s64 = r30.s16;
	// lhzx r4,r11,r4
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// extsh r24,r24
	r24.s64 = r24.s16;
	// lhzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhzx r25,r11,r25
	r25.u64 = REX_LOAD_U16(ctx.r11.u32 + r25.u32);
	// mullw r5,r4,r5
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// mullw r31,r31,r8
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r8.s32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// mullw r31,r30,r10
	r31.s64 = int64_t(r30.s32) * int64_t(ctx.r10.s32);
	// extsh r4,r25
	ctx.r4.s64 = r25.s16;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// mullw r31,r24,r4
	r31.s64 = int64_t(r24.s32) * int64_t(ctx.r4.s32);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// srawi. r5,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x823a582c
	if (!ctx.cr0.lt) goto loc_823A582C;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x823a5838
	goto loc_823A5838;
loc_823A582C:
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// ble cr6,0x823a5838
	if (!ctx.cr6.gt) goto loc_823A5838;
	// li r5,255
	ctx.r5.s64 = 255;
loc_823A5838:
	// add r31,r29,r9
	r31.u64 = r29.u64 + ctx.r9.u64;
	// addi r30,r1,24
	r30.s64 = ctx.r1.s64 + 24;
	// stb r5,-2(r31)
	REX_STORE_U8(r31.u32 + -2, ctx.r5.u8);
	// lhz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// lhz r25,6(r7)
	r25.u64 = REX_LOAD_U16(ctx.r7.u32 + 6);
	// lhz r24,2(r7)
	r24.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// lhz r31,0(r7)
	r31.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// extsh r31,r31
	r31.s64 = r31.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhzx r30,r11,r30
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + r30.u32);
	// mullw r31,r31,r4
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r4.s32);
	// mullw r4,r5,r10
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// extsh r5,r30
	ctx.r5.s64 = r30.s16;
	// extsh r30,r25
	r30.s64 = r25.s16;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + r31.u64;
	// mullw r31,r30,r5
	r31.s64 = int64_t(r30.s32) * int64_t(ctx.r5.s32);
	// extsh r30,r24
	r30.s64 = r24.s16;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + r31.u64;
	// mullw r31,r30,r8
	r31.s64 = int64_t(r30.s32) * int64_t(ctx.r8.s32);
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + r31.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// srawi. r4,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x823a589c
	if (!ctx.cr0.lt) goto loc_823A589C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823a58a8
	goto loc_823A58A8;
loc_823A589C:
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// ble cr6,0x823a58a8
	if (!ctx.cr6.gt) goto loc_823A58A8;
	// li r4,255
	ctx.r4.s64 = 255;
loc_823A58A8:
	// stbx r4,r28,r9
	REX_STORE_U8(r28.u32 + ctx.r9.u32, ctx.r4.u8);
	// addi r31,r1,26
	r31.s64 = ctx.r1.s64 + 26;
	// lhz r23,4(r7)
	r23.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// lhz r4,0(r7)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// extsh r24,r4
	r24.s64 = ctx.r4.s16;
	// lhzx r31,r11,r31
	r31.u64 = REX_LOAD_U16(ctx.r11.u32 + r31.u32);
	// mullw r8,r24,r8
	ctx.r8.s64 = int64_t(r24.s32) * int64_t(ctx.r8.s32);
	// lhz r25,6(r7)
	r25.u64 = REX_LOAD_U16(ctx.r7.u32 + 6);
	// lhz r30,2(r7)
	r30.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// extsh r4,r31
	ctx.r4.s64 = r31.s16;
	// extsh r25,r25
	r25.s64 = r25.s16;
	// extsh r31,r23
	r31.s64 = r23.s16;
	// extsh r22,r30
	r22.s64 = r30.s16;
	// mullw r31,r31,r5
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r5.s32);
	// mullw r30,r25,r4
	r30.s64 = int64_t(r25.s32) * int64_t(ctx.r4.s32);
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// add r8,r31,r8
	ctx.r8.u64 = r31.u64 + ctx.r8.u64;
	// mullw r31,r22,r10
	r31.s64 = int64_t(r22.s32) * int64_t(ctx.r10.s32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// srawi. r8,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x823a5908
	if (!ctx.cr0.lt) goto loc_823A5908;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x823a5914
	goto loc_823A5914;
loc_823A5908:
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// ble cr6,0x823a5914
	if (!ctx.cr6.gt) goto loc_823A5914;
	// li r8,255
	ctx.r8.s64 = 255;
loc_823A5914:
	// stbx r8,r29,r9
	REX_STORE_U8(r29.u32 + ctx.r9.u32, ctx.r8.u8);
	// addi r31,r1,28
	r31.s64 = ctx.r1.s64 + 28;
	// lhzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + r31.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// lhz r25,2(r7)
	r25.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// extsh r24,r8
	r24.s64 = ctx.r8.s16;
	// lhz r8,4(r7)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// lhz r30,6(r7)
	r30.u64 = REX_LOAD_U16(ctx.r7.u32 + 6);
	// extsh r31,r25
	r31.s64 = r25.s16;
	// extsh r25,r8
	r25.s64 = ctx.r8.s16;
	// extsh r30,r30
	r30.s64 = r30.s16;
	// mullw r8,r31,r5
	ctx.r8.s64 = int64_t(r31.s32) * int64_t(ctx.r5.s32);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// mullw r5,r25,r4
	ctx.r5.s64 = int64_t(r25.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mullw r10,r24,r10
	ctx.r10.s64 = int64_t(r24.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// srawi. r11,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x823a5974
	if (!ctx.cr0.lt) goto loc_823A5974;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823a5980
	goto loc_823A5980;
loc_823A5974:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x823a5980
	if (!ctx.cr6.gt) goto loc_823A5980;
	// li r11,255
	ctx.r11.s64 = 255;
loc_823A5980:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r1,22
	ctx.r10.s64 = ctx.r1.s64 + 22;
	// stbx r11,r26,r9
	REX_STORE_U8(r26.u32 + ctx.r9.u32, ctx.r11.u8);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r1,20
	ctx.r8.s64 = ctx.r1.s64 + 20;
	// bdnz 0x823a57ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A57AC;
	// addi r27,r27,35
	r27.s64 = r27.s64 + 35;
	// add r29,r29,r6
	r29.u64 = r29.u64 + ctx.r6.u64;
	// cmpwi cr6,r27,280
	ctx.cr6.compare<int32_t>(r27.s32, 280, ctx.xer);
	// blt cr6,0x823a5790
	if (ctx.cr6.lt) goto loc_823A5790;
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_823B07A0) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823afe10
	sub_823AFE10(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823B07B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// bl 0x822d4e8c
	ctx.lr = 0x823B07B8;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v63,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r5,16
	ctx.r11.s64 = ctx.r5.s64 + 16;
	// lvlx128 v62,r6,r5
	temp.u32 = ctx.r6.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// vspltish v23,1
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_set1_epi16(short(0x1)));
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lvlx128 v61,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v60,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v59,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v2,v63,v60
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// lvlx128 v58,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lvrx128 v57,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v30,v58,v59
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvrx128 v56,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v31,v62,v57
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vor128 v29,v61,v56
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vmrghb v5,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v3,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)v23.u8));
	// lvrx128 v55,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v11,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v54,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// vor128 v28,v54,v55
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vmrghb v13,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v12,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v53,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v10,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v52,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// vor128 v27,v52,v53
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v51,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v9,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v50,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// vor128 v26,v50,v51
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvrx128 v49,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v8,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v48,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v25,v48,v49
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v6,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// bne cr6,0x823b087c
	if (!ctx.cr6.eq) goto loc_823B087C;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lvrx128 v47,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v46,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v24,v46,v47
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// vmrghb v4,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_823B087C:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x823b08d8
	if (!ctx.cr6.eq) goto loc_823B08D8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r9,r11,-9312
	ctx.r9.s64 = ctx.r11.s64 + -9312;
	// lvx128 v7,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v2,v5,v2,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm v31,v13,v31,v7
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm v29,v12,v29,v7
	simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm v22,v11,v30,v7
	simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm v21,v10,v28,v7
	simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v5,v5,v2
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vperm v20,v9,v27,v7
	simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v13,v13,v31
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vperm v19,v8,v26,v7
	simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v12,v12,v29
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vperm v18,v6,v25,v7
	simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v11,v11,v22
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vperm v17,v4,v24,v7
	simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v10,v10,v21
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vaddshs v9,v9,v20
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vaddshs v8,v8,v19
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vaddshs v6,v6,v18
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vaddshs v4,v4,v17
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
loc_823B08D8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823b0914
	if (!ctx.cr6.eq) goto loc_823B0914;
	// vaddshs v5,v5,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// vaddshs v13,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v12,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v11,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v10,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v9,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v8,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v6,v6,v4
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// bne cr6,0x823b091c
	if (!ctx.cr6.eq) goto loc_823B091C;
	// vaddshs v1,v1,v23
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vspltish v3,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_set1_epi16(short(0x2)));
	// b 0x823b091c
	goto loc_823B091C;
loc_823B0914:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x823b0960
	if (!ctx.cr6.eq) goto loc_823B0960;
loc_823B091C:
	// vaddshs v7,v5,v1
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v5,v13,v1
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v4,v12,v1
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v2,v11,v1
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v31,v10,v1
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v30,v9,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v29,v8,v1
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v28,v6,v1
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v27,v7,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v13,v5,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v12,v4,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v11,v2,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v10,v31,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v9,v30,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v8,v29,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v6,v28,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor v5,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)v27.u8));
loc_823B0960:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823b0a08
	if (ctx.cr6.eq) goto loc_823B0A08;
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v45,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// addi r8,r4,64
	ctx.r8.s64 = ctx.r4.s64 + 64;
	// addi r7,r4,96
	ctx.r7.s64 = ctx.r4.s64 + 96;
	// addi r5,r4,128
	ctx.r5.s64 = ctx.r4.s64 + 128;
	// lvx128 v44,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r4,160
	r31.s64 = ctx.r4.s64 + 160;
	// lvx128 v43,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r4,192
	r30.s64 = ctx.r4.s64 + 192;
	// lvx128 v36,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r4,224
	r29.s64 = ctx.r4.s64 + 224;
	// vpkswss128 v7,v45,v44
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.s32), simde_mm_load_si128((simde__m128i*)ctx.v45.s32)));
	// lvx128 v42,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v4,v43,v36
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v36.s32), simde_mm_load_si128((simde__m128i*)ctx.v43.s32)));
	// lvx128 v41,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v39,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v5,v5,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// lvx128 v37,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v13,v13,v4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// lvx128 v35,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v34,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v33,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v3,v42,v35
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v35.s32), simde_mm_load_si128((simde__m128i*)ctx.v42.s32)));
	// lvx128 v32,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v2,v41,v34
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.s32), simde_mm_load_si128((simde__m128i*)ctx.v41.s32)));
	// lvx128 v63,r30,r11
	ea = (r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v1,v40,v33
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v33.s32), simde_mm_load_si128((simde__m128i*)ctx.v40.s32)));
	// lvx128 v62,r29,r11
	ea = (r29.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v31,v39,v32
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.s32), simde_mm_load_si128((simde__m128i*)ctx.v39.s32)));
	// vpkswss128 v7,v38,v63
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.s32), simde_mm_load_si128((simde__m128i*)ctx.v38.s32)));
	// vaddshs v12,v12,v3
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vpkswss128 v4,v37,v62
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.s32), simde_mm_load_si128((simde__m128i*)ctx.v37.s32)));
	// vaddshs v11,v11,v2
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v10,v10,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v9,v9,v31
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vaddshs v8,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v6,v6,v4
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
loc_823B0A08:
	// vpkshus128 v61,v5,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// add r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vpkshus128 v60,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vpkshus128 v59,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vpkshus128 v58,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vpkshus128 v57,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vpkshus128 v56,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vpkshus128 v55,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvlx128 v61,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// vpkshus128 v54,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvlx128 v60,r3,r6
	ea = ctx.r3.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvlx128 v59,r3,r10
	ea = ctx.r3.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvlx128 v58,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stvlx128 v57,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stvlx128 v56,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stvlx128 v55,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// stvlx128 v54,r3,r10
	ea = ctx.r3.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823CD268) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823CD280) {
	REX_FUNC_PROLOGUE();
	// lwz r11,256(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r3,332(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823CD328) {
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
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x824d417c
	ctx.lr = 0x823CD350;
	__imp__RtlInitAnsiString(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ce4f0
	ctx.lr = 0x823CD358;
	sub_823CE4F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823CD980) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823CD988;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// bge cr6,0x823cd9b8
	if (!ctx.cr6.lt) goto loc_823CD9B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823cdb1c
	if (ctx.cr6.eq) goto loc_823CDB1C;
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_823CD9A8:
	// stbx r10,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823cd9a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CD9A8;
	// b 0x823cdb1c
	goto loc_823CDB1C;
loc_823CD9B8:
	// neg r11,r3
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// vspltisb v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x4)));
	// lvsl v13,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// srawi r8,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 4;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lvsl v12,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// vslb v0,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// vor v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vspltb v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_set1_epi8(char(0xF))));
	// beq 0x823cd9f4
	if (ctx.cr0.eq) goto loc_823CD9F4;
	// stvlx v0,0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// subf r5,r11,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r11.u64;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823CD9F4:
	// rlwinm r11,r5,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823cda04
	if (!ctx.cr6.lt) goto loc_823CDA04;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_823CDA04:
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r6,9604(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 9604);
	// beq cr6,0x823cda24
	if (ctx.cr6.eq) goto loc_823CDA24;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CDA18:
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// bdnz 0x823cda18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CDA18;
loc_823CDA24:
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi. r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r7,r11,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r11,r7,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 25) & 0x1FFFFFF;
	// bne 0x823cda54
	if (!ctx.cr0.eq) goto loc_823CDA54;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cdaf0
	if (ctx.cr6.eq) goto loc_823CDAF0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823CDA44:
	// dcbzl r0,r10
	ea = (ctx.r10.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x823cda44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CDA44;
	// b 0x823cdaf0
	goto loc_823CDAF0;
loc_823CDA54:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// blt cr6,0x823cda64
	if (ctx.cr6.lt) goto loc_823CDA64;
	// li r8,4
	ctx.r8.s64 = 4;
loc_823CDA64:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823cda84
	if (ctx.cr6.eq) goto loc_823CDA84;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823CDA74:
	// rlwinm r8,r9,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// dcbzl r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x823cda74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CDA74;
loc_823CDA84:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cdaf0
	if (ctx.cr6.eq) goto loc_823CDAF0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823CDA94:
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823cdaa8
	if (!ctx.cr6.lt) goto loc_823CDAA8;
	// li r8,512
	ctx.r8.s64 = 512;
	// dcbzl r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
loc_823CDAA8:
	// li r8,16
	ctx.r8.s64 = 16;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r31,64
	r31.s64 = 64;
	// li r30,80
	r30.s64 = 80;
	// stvx128 v0,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r29,96
	r29.s64 = 96;
	// li r8,112
	ctx.r8.s64 = 112;
	// stvx128 v0,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stvx128 v0,r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r30
	ea = (ctx.r10.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r29
	ea = (ctx.r10.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x823cda94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CDA94;
loc_823CDAF0:
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x823cdb18
	if (ctx.cr6.lt) goto loc_823CDB18;
	// rlwinm r9,r11,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CDB08:
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// bdnz 0x823cdb08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CDB08;
loc_823CDB18:
	// stvrx v0,r10,r11
	ea = ctx.r10.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
loc_823CDB1C:
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823D5860) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCContext env{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x823D5868;
	// stwu r1,-2112(r1)
	ea = -2112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,2132(r1)
	REX_STORE_U32(ctx.r1.u32 + 2132, ctx.r3.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,2140(r1)
	REX_STORE_U32(ctx.r1.u32 + 2140, ctx.r4.u32);
	// stw r5,2148(r1)
	REX_STORE_U32(ctx.r1.u32 + 2148, ctx.r5.u32);
	// beq cr6,0x823d5b4c
	if (ctx.cr6.eq) goto loc_823D5B4C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823d5b4c
	if (ctx.cr6.eq) goto loc_823D5B4C;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x823ef358
	ctx.lr = 0x823D5890;
	sub_823EF358(ctx, base);
	// lis r11,-32195
	ctx.r11.s64 = -2109931520;
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r11,r11,15024
	ctx.r11.s64 = ctx.r11.s64 + 15024;
	// addi r10,r10,-22768
	ctx.r10.s64 = ctx.r10.s64 + -22768;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// stw r11,576(r1)
	REX_STORE_U32(ctx.r1.u32 + 576, ctx.r11.u32);
	// stw r10,584(r1)
	REX_STORE_U32(ctx.r1.u32 + 584, ctx.r10.u32);
	// bl 0x8247cdf0
	ctx.lr = 0x823D58B4;
	env = ctx;
	temp.s64 = ppc_setjmp(ctx.r3.u32);
	if (temp.s64 != 0) ctx = env;
	ctx.r3 = temp;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823d5990
	if (!ctx.cr0.eq) goto loc_823D5990;
	// li r5,472
	ctx.r5.s64 = 472;
	// li r4,62
	ctx.r4.s64 = 62;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823ec6b8
	ctx.lr = 0x823D58CC;
	sub_823EC6B8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D58E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r10,2148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 2148);
	// lwz r9,2140(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 2140);
	// lis r8,-32214
	ctx.r8.s64 = -2111176704;
	// stw r3,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r6,-32195
	ctx.r6.s64 = -2109931520;
	// lis r5,-32195
	ctx.r5.s64 = -2109931520;
	// stw r10,32(r7)
	REX_STORE_U32(ctx.r7.u32 + 32, ctx.r10.u32);
	// addi r10,r8,-22768
	ctx.r10.s64 = ctx.r8.s64 + -22768;
	// lis r4,-32193
	ctx.r4.s64 = -2109800448;
	// stw r9,28(r7)
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r9.u32);
	// lis r3,-32214
	ctx.r3.s64 = -2111176704;
	// stw r10,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// addi r11,r4,-4424
	ctx.r11.s64 = ctx.r4.s64 + -4424;
	// addi r10,r3,-22768
	ctx.r10.s64 = ctx.r3.s64 + -22768;
	// li r28,0
	r28.s64 = 0;
	// stw r11,20(r7)
	REX_STORE_U32(ctx.r7.u32 + 20, ctx.r11.u32);
	// addi r9,r6,15128
	ctx.r9.s64 = ctx.r6.s64 + 15128;
	// stw r10,24(r7)
	REX_STORE_U32(ctx.r7.u32 + 24, ctx.r10.u32);
	// addi r8,r5,15160
	ctx.r8.s64 = ctx.r5.s64 + 15160;
	// stw r28,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, r28.u32);
	// stw r9,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r8,16(r7)
	REX_STORE_U32(ctx.r7.u32 + 16, ctx.r8.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r28,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r28.u32);
	// bl 0x823ecc98
	ctx.lr = 0x823D5958;
	sub_823ECC98(ctx, base);
	// lis r11,-32195
	ctx.r11.s64 = -2109931520;
	// li r30,1
	r30.s64 = 1;
	// addi r11,r11,15080
	ctx.r11.s64 = ctx.r11.s64 + 15080;
	// stw r30,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,584(r1)
	REX_STORE_U32(ctx.r1.u32 + 584, ctx.r11.u32);
	// bl 0x823ecf18
	ctx.lr = 0x823D5974;
	sub_823ECF18(ctx, base);
	// lwz r11,220(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lis r10,10240
	ctx.r10.s64 = 671088640;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ori r29,r10,2
	r29.u64 = ctx.r10.u64 | 2;
	// beq cr6,0x823d59bc
	if (ctx.cr6.eq) goto loc_823D59BC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823d599c
	if (ctx.cr6.eq) goto loc_823D599C;
loc_823D5990:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
	// b 0x823d5b3c
	goto loc_823D5B3C;
loc_823D599C:
	// lwz r31,2132(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 2132);
	// lis r10,10280
	ctx.r10.s64 = 673710080;
	// lwz r11,208(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// ori r10,r10,134
	ctx.r10.u64 = ctx.r10.u64 | 134;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// b 0x823d59cc
	goto loc_823D59CC;
loc_823D59BC:
	// lwz r31,2132(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 2132);
	// lwz r11,208(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
loc_823D59CC:
	// lwz r10,212(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 64);
	// stw r28,52(r31)
	REX_STORE_U32(r31.u32 + 52, r28.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x823d5b38
	if (ctx.cr6.eq) goto loc_823D5B38;
	// lis r11,9345
	ctx.r11.s64 = 612433920;
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mullw r3,r9,r10
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// bl 0x823cd118
	ctx.lr = 0x823D5A08;
	sub_823CD118(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// beq 0x823d5a44
	if (ctx.cr0.eq) goto loc_823D5A44;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,220(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,208(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mullw r5,r9,r10
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D5A3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x823d5a50
	if (!ctx.cr0.eq) goto loc_823D5A50;
loc_823D5A44:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x823d5b3c
	goto loc_823D5B3C;
loc_823D5A50:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bne cr6,0x823d5aa4
	if (!ctx.cr6.eq) goto loc_823D5AA4;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x823d5a90
	goto loc_823D5A90;
loc_823D5A68:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823ece18
	ctx.lr = 0x823D5A78;
	sub_823ECE18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,208(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x822d4fa0
	ctx.lr = 0x823D5A88;
	sub_822D4FA0(ctx, base);
	// lwz r11,208(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
loc_823D5A90:
	// lwz r10,212(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r11,236(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823d5a68
	if (ctx.cr6.lt) goto loc_823D5A68;
	// b 0x823d5b30
	goto loc_823D5B30;
loc_823D5AA4:
	// lis r10,10280
	ctx.r10.s64 = 673710080;
	// ori r10,r10,6
	ctx.r10.u64 = ctx.r10.u64 | 6;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823d5b30
	if (!ctx.cr6.eq) goto loc_823D5B30;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x823d5b20
	goto loc_823D5B20;
loc_823D5ABC:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823ece18
	ctx.lr = 0x823D5ACC;
	sub_823ECE18(ctx, base);
	// lwz r11,208(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823d5b20
	if (!ctx.cr6.lt) goto loc_823D5B20;
	// subf r10,r31,r11
	ctx.r10.u64 = ctx.r11.u64 - r31.u64;
	// addi r11,r9,-3
	ctx.r11.s64 = ctx.r9.s64 + -3;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823D5AFC:
	// lbz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbzu r10,3(r11)
	ea = 3 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwimi r8,r10,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bdnz 0x823d5afc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D5AFC;
loc_823D5B20:
	// lwz r10,212(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r11,236(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823d5abc
	if (ctx.cr6.lt) goto loc_823D5ABC;
loc_823D5B30:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823ecb40
	ctx.lr = 0x823D5B38;
	sub_823ECB40(ctx, base);
loc_823D5B38:
	// mr r31,r28
	r31.u64 = r28.u64;
loc_823D5B3C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823ec7d0
	ctx.lr = 0x823D5B44;
	sub_823EC7D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x823d5b54
	goto loc_823D5B54;
loc_823D5B4C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_823D5B54:
	// addi r1,r1,2112
	ctx.r1.s64 = ctx.r1.s64 + 2112;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823DCB68) {
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
	ctx.lr = 0x823DCB70;
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
	// beq cr6,0x823dcba8
	if (ctx.cr6.eq) goto loc_823DCBA8;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x823DCBA4;
	sub_82413040(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_823DCBA8:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823dcbc4
	if (ctx.cr6.eq) goto loc_823DCBC4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc0b0
	ctx.lr = 0x823DCBC0;
	sub_823DC0B0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_823DCBC4:
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
	// bne 0x823dcc30
	if (!ctx.cr0.eq) goto loc_823DCC30;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x823dcc38
	goto loc_823DCC38;
loc_823DCC30:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_823DCC38:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823dcc50
	if (ctx.cr6.eq) goto loc_823DCC50;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x823DCC50;
	sub_823DC658(ctx, base);
loc_823DCC50:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823dcf18
	if (!ctx.cr6.gt) goto loc_823DCF18;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// rlwinm r25,r30,2,0,29
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
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
	// lfs f0,-13044(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -13044);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,2028(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 2028);
	ctx.f6.f64 = double(temp.f32);
loc_823DCCB4:
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
	// beq cr6,0x823dce64
	if (ctx.cr6.eq) goto loc_823DCE64;
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
loc_823DCE64:
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x823dce74
	if (ctx.cr6.lt) goto loc_823DCE74;
	// li r11,255
	ctx.r11.s64 = 255;
loc_823DCE74:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823dce8c
	if (!ctx.cr6.gt) goto loc_823DCE8C;
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// blt cr6,0x823dce90
	if (ctx.cr6.lt) goto loc_823DCE90;
	// li r4,255
	ctx.r4.s64 = 255;
	// b 0x823dce90
	goto loc_823DCE90;
loc_823DCE8C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823DCE90:
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x823dcea0
	if (ctx.cr6.lt) goto loc_823DCEA0;
	// li r11,255
	ctx.r11.s64 = 255;
loc_823DCEA0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823dceb8
	if (!ctx.cr6.gt) goto loc_823DCEB8;
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// blt cr6,0x823dcebc
	if (ctx.cr6.lt) goto loc_823DCEBC;
	// li r5,255
	ctx.r5.s64 = 255;
	// b 0x823dcebc
	goto loc_823DCEBC;
loc_823DCEB8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_823DCEBC:
	// cmpwi cr6,r6,255
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 255, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x823dcecc
	if (ctx.cr6.lt) goto loc_823DCECC;
	// li r11,255
	ctx.r11.s64 = 255;
loc_823DCECC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823dcee4
	if (!ctx.cr6.gt) goto loc_823DCEE4;
	// cmpwi cr6,r6,255
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 255, ctx.xer);
	// blt cr6,0x823dcee8
	if (ctx.cr6.lt) goto loc_823DCEE8;
	// li r6,255
	ctx.r6.s64 = 255;
	// b 0x823dcee8
	goto loc_823DCEE8;
loc_823DCEE4:
	// li r6,0
	ctx.r6.s64 = 0;
loc_823DCEE8:
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// stwux r11,r30,r25
	ea = r30.u32 + r25.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r30.u32 = ea;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823dccb4
	if (ctx.cr6.lt) goto loc_823DCCB4;
loc_823DCF18:
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

DEFINE_REX_FUNC(sub_823E4A08) {
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
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823e4a80
	if (!ctx.cr6.lt) goto loc_823E4A80;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
loc_823E4A64:
	// lfsu f13,4(r9)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x823e4a64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E4A64;
loc_823E4A80:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e4a9c
	if (ctx.cr6.eq) goto loc_823E4A9C;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x823E4A9C;
	sub_82413D40(ctx, base);
loc_823E4A9C:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e4ab8
	if (ctx.cr6.eq) goto loc_823E4AB8;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x823dc3f0
	ctx.lr = 0x823E4AB8;
	sub_823DC3F0(ctx, base);
loc_823E4AB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E77A0) {
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
loc_823E77C4:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x823e77e4
	if (!ctx.cr0.eq) goto loc_823E77E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x823e77c4
	if (!ctx.cr6.eq) goto loc_823E77C4;
loc_823E77E4:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x823e7824
	if (ctx.cr0.eq) goto loc_823E7824;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,22572
	ctx.r10.s64 = ctx.r10.s64 + 22572;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
loc_823E77FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823e781c
	if (!ctx.cr0.eq) goto loc_823E781C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823e77fc
	if (!ctx.cr6.eq) goto loc_823E77FC;
loc_823E781C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823e7840
	if (!ctx.cr0.eq) goto loc_823E7840;
loc_823E7824:
	// stw r3,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E7838;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823e7848
	goto loc_823E7848;
loc_823E7840:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16386
	ctx.r3.u64 = ctx.r3.u64 | 16386;
loc_823E7848:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EAFE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x823EAFF0;
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
	// b 0x823eb014
	goto loc_823EB014;
loc_823EB008:
	// lwz r31,36(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823eb038
	if (ctx.cr6.eq) goto loc_823EB038;
loc_823EB014:
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
	// bl 0x823e95b0
	ctx.lr = 0x823EB02C;
	sub_823E95B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823eb008
	if (!ctx.cr0.lt) goto loc_823EB008;
	// b 0x823eb03c
	goto loc_823EB03C;
loc_823EB038:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EB03C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823EC5F8) {
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
	// lbz r11,1548(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1548);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,1372(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1372);
	// beq 0x823ec62c
	if (ctx.cr0.eq) goto loc_823EC62C;
	// rlwinm r11,r11,0,22,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x300;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// bne cr6,0x823ec634
	if (!ctx.cr6.eq) goto loc_823EC634;
	// b 0x823ec640
	goto loc_823EC640;
loc_823EC62C:
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823ec640
	if (!ctx.cr0.eq) goto loc_823EC640;
loc_823EC634:
	// lwz r3,1536(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1536);
	// bl 0x823f46a8
	ctx.lr = 0x823EC63C;
	sub_823F46A8(ctx, base);
	// stw r3,1536(r31)
	REX_STORE_U32(r31.u32 + 1536, ctx.r3.u32);
loc_823EC640:
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

DEFINE_REX_FUNC(sub_823EF110) {
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
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EF134;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f6278
	ctx.lr = 0x823EF13C;
	sub_823F6278(ctx, base);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r3,r9,14676
	ctx.r3.s64 = ctx.r9.s64 + 14676;
	// bl 0x823cd328
	ctx.lr = 0x823EF148;
	sub_823CD328(ctx, base);
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

DEFINE_REX_FUNC(sub_823EF358) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32193
	ctx.r10.s64 = -2109800448;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lis r9,-32193
	ctx.r9.s64 = -2109800448;
	// lis r8,-32193
	ctx.r8.s64 = -2109800448;
	// lis r7,-32193
	ctx.r7.s64 = -2109800448;
	// lis r6,-32193
	ctx.r6.s64 = -2109800448;
	// addi r4,r10,-3824
	ctx.r4.s64 = ctx.r10.s64 + -3824;
	// addi r10,r5,14176
	ctx.r10.s64 = ctx.r5.s64 + 14176;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r9,r9,-3696
	ctx.r9.s64 = ctx.r9.s64 + -3696;
	// stw r10,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// addi r8,r8,-3744
	ctx.r8.s64 = ctx.r8.s64 + -3744;
	// stw r11,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// addi r7,r7,-3552
	ctx.r7.s64 = ctx.r7.s64 + -3552;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// addi r6,r6,-3264
	ctx.r6.s64 = ctx.r6.s64 + -3264;
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// li r5,123
	ctx.r5.s64 = 123;
	// stw r7,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r6,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// stw r11,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r5,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r5.u32);
	// stw r11,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EFFB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x823EFFC0;
	// stwu r1,-1472(r1)
	ea = -1472 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823effd8
	if (ctx.cr6.eq) goto loc_823EFFD8;
	// bl 0x823ec658
	ctx.lr = 0x823EFFD8;
	sub_823EC658(ctx, base);
loc_823EFFD8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823effec
	if (ctx.cr6.eq) goto loc_823EFFEC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ec658
	ctx.lr = 0x823EFFEC;
	sub_823EC658(ctx, base);
loc_823EFFEC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1436(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1436);
	// bl 0x823f4660
	ctx.lr = 0x823EFFF8;
	sub_823F4660(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1500(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1500);
	// bl 0x823f4660
	ctx.lr = 0x823F0004;
	sub_823F4660(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1496(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1496);
	// bl 0x823f4660
	ctx.lr = 0x823F0010;
	sub_823F4660(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1652(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1652);
	// bl 0x823f4660
	ctx.lr = 0x823F001C;
	sub_823F4660(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1656(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1656);
	// bl 0x823f4660
	ctx.lr = 0x823F0028;
	sub_823F4660(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1592(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1592);
	// bl 0x823f4660
	ctx.lr = 0x823F0034;
	sub_823F4660(ctx, base);
	// lwz r11,1372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1372);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f004c
	if (ctx.cr0.eq) goto loc_823F004C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1540(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1540);
	// bl 0x823ec5b0
	ctx.lr = 0x823F004C;
	sub_823EC5B0(ctx, base);
loc_823F004C:
	// lwz r11,1372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1372);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f0064
	if (ctx.cr0.eq) goto loc_823F0064;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1628(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1628);
	// bl 0x823f4660
	ctx.lr = 0x823F0064;
	sub_823F4660(ctx, base);
loc_823F0064:
	// lwz r11,1604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1604);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f00b0
	if (ctx.cr6.eq) goto loc_823F00B0;
	// lwz r11,1580(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1580);
	// li r10,1
	ctx.r10.s64 = 1;
	// subfic r11,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	ctx.r11.u64 = static_cast<uint64_t>(8) - ctx.r11.u64;
	// slw. r30,r10,r11
	r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble 0x823f00a4
	if (!ctx.cr0.gt) goto loc_823F00A4;
	// li r29,0
	r29.s64 = 0;
loc_823F0088:
	// lwz r11,1604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1604);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r4,r29,r11
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// bl 0x823f4660
	ctx.lr = 0x823F0098;
	sub_823F4660(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x823f0088
	if (!ctx.cr0.eq) goto loc_823F0088;
loc_823F00A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1604(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1604);
	// bl 0x823f4660
	ctx.lr = 0x823F00B0;
	sub_823F4660(ctx, base);
loc_823F00B0:
	// addi r3,r31,1380
	ctx.r3.s64 = r31.s64 + 1380;
	// bl 0x82299fd0
	ctx.lr = 0x823F00B8;
	sub_82299FD0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,1344
	ctx.r5.s64 = 1344;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823F00C8;
	sub_822D4FA0(ctx, base);
	// li r5,1696
	ctx.r5.s64 = 1696;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,1344(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 1344);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,1348(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 1348);
	// lwz r28,1352(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 1352);
	// bl 0x822d5870
	ctx.lr = 0x823F00E4;
	sub_822D5870(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,1344
	ctx.r5.s64 = 1344;
	// stw r30,1344(r31)
	REX_STORE_U32(r31.u32 + 1344, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,1348(r31)
	REX_STORE_U32(r31.u32 + 1348, r29.u32);
	// stw r28,1352(r31)
	REX_STORE_U32(r31.u32 + 1352, r28.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x823F0100;
	sub_822D4FA0(ctx, base);
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823F4FE8) {
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
	ctx.lr = 0x823F4FF0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,15258
	ctx.r11.s64 = 999948288;
	// lwz r25,4(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ori r10,r11,51696
	ctx.r10.u64 = ctx.r11.u64 | 51696;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r22,54
	r22.s64 = 54;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823f503c
	if (!ctx.cr6.gt) goto loc_823F503C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r22,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r22.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823F503C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F503C:
	// clrlwi r11,r26,29
	ctx.r11.u64 = r26.u32 & 0x7;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f5050
	if (ctx.cr6.eq) goto loc_823F5050;
	// subf r11,r11,r26
	ctx.r11.u64 = r26.u64 - ctx.r11.u64;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
loc_823F5050:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x823f5060
	if (ctx.cr6.lt) goto loc_823F5060;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(r31.s32, 2, ctx.xer);
	// blt cr6,0x823f5088
	if (ctx.cr6.lt) goto loc_823F5088;
loc_823F5060:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r10,14
	ctx.r10.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r31,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, r31.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823F5088;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F5088:
	// addi r11,r31,13
	ctx.r11.s64 = r31.s64 + 13;
	// li r24,0
	r24.s64 = 0;
	// rlwinm r23,r11,2,0,29
	r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r24
	r27.u64 = r24.u64;
	// lwzx r11,r23,r25
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f50c0
	if (ctx.cr6.eq) goto loc_823F50C0;
loc_823F50A4:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// bge cr6,0x823f5198
	if (!ctx.cr6.lt) goto loc_823F5198;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823f50a4
	if (!ctx.cr6.eq) goto loc_823F50A4;
loc_823F50C0:
	// addi r29,r26,16
	r29.s64 = r26.s64 + 16;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x823f50dc
	if (!ctx.cr6.eq) goto loc_823F50DC;
	// addi r9,r11,1752
	ctx.r9.s64 = ctx.r11.s64 + 1752;
	// b 0x823f50e4
	goto loc_823F50E4;
loc_823F50DC:
	// addi r11,r11,1752
	ctx.r11.s64 = ctx.r11.s64 + 1752;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
loc_823F50E4:
	// lis r11,15258
	ctx.r11.s64 = 999948288;
	// lwzx r31,r10,r9
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// ori r10,r11,51712
	ctx.r10.u64 = ctx.r11.u64 | 51712;
	// subf r11,r29,r10
	ctx.r11.u64 = ctx.r10.u64 - r29.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823f5100
	if (!ctx.cr6.gt) goto loc_823F5100;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_823F5100:
	// add r4,r31,r29
	ctx.r4.u64 = r31.u64 + r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f9ef8
	ctx.lr = 0x823F510C;
	sub_823F9EF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823f5164
	if (!ctx.cr6.eq) goto loc_823F5164;
	// li r28,2
	r28.s64 = 2;
loc_823F511C:
	// rlwinm r31,r31,31,1,31
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r31,50
	ctx.cr6.compare<uint32_t>(r31.u32, 50, ctx.xer);
	// bge cr6,0x823f514c
	if (!ctx.cr6.lt) goto loc_823F514C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r22,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r22.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r28,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r28.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823F514C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F514C:
	// add r4,r31,r29
	ctx.r4.u64 = r31.u64 + r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f9ef8
	ctx.lr = 0x823F5158;
	sub_823F9EF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f511c
	if (ctx.cr6.eq) goto loc_823F511C;
loc_823F5164:
	// lwz r10,76(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 76);
	// add r9,r31,r26
	ctx.r9.u64 = r31.u64 + r26.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + r29.u64;
	// stw r8,76(r25)
	REX_STORE_U32(r25.u32 + 76, ctx.r8.u32);
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r24.u32);
	// stw r24,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r24.u32);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// bne cr6,0x823f5194
	if (!ctx.cr6.eq) goto loc_823F5194;
	// stwx r11,r23,r25
	REX_STORE_U32(r23.u32 + r25.u32, ctx.r11.u32);
	// b 0x823f5198
	goto loc_823F5198;
loc_823F5194:
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_823F5198:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r7,r10,r26
	ctx.r7.u64 = ctx.r10.u64 + r26.u64;
	// subf r6,r26,r8
	ctx.r6.u64 = ctx.r8.u64 - r26.u64;
	// addi r3,r9,16
	ctx.r3.s64 = ctx.r9.s64 + 16;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_823FA360) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e78
	ctx.lr = 0x823FA368;
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r27,0
	r27.s64 = 0;
	// lwz r29,428(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 428);
	// lwz r11,220(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r28,320(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// ble cr6,0x823fa448
	if (!ctx.cr6.gt) goto loc_823FA448;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r11,12
	r30.s64 = ctx.r11.s64 + 12;
loc_823FA38C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r6,320(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 60);
	// lwz r4,56(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 56);
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// lwzx r7,r31,r4
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + ctx.r4.u32);
	// rotlwi r10,r5,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// divw. r11,r5,r6
	ctx.r11.u64 = uint32_t((ctx.r6.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r5.s32 / ctx.r6.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r10.u64;
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble 0x823fa430
	if (!ctx.cr0.gt) goto loc_823FA430;
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r6,r28,2
	ctx.r6.s64 = r28.s64 + 2;
	// rlwinm r26,r11,2,0,29
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r4,r6,r11
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// subf r11,r26,r9
	ctx.r11.u64 = ctx.r9.u64 - r26.u64;
	// subf r6,r9,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r9.u64;
loc_823FA3F0:
	// add r26,r5,r8
	r26.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r25,r4,r8
	r25.u64 = ctx.r4.u64 + ctx.r8.u64;
	// rlwinm r26,r26,2,0,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r25,2,0,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwzx r24,r26,r7
	r24.u64 = REX_LOAD_U32(r26.u32 + ctx.r7.u32);
	// stwx r24,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, r24.u32);
	// lwzx r26,r26,r9
	r26.u64 = REX_LOAD_U32(r26.u32 + ctx.r9.u32);
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r26.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r26,r6,r10
	r26.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// stwx r26,r25,r7
	REX_STORE_U32(r25.u32 + ctx.r7.u32, r26.u32);
	// lwz r26,0(r10)
	r26.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stwx r26,r25,r9
	REX_STORE_U32(r25.u32 + ctx.r9.u32, r26.u32);
	// bdnz 0x823fa3f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FA3F0;
loc_823FA430:
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r30,r30,84
	r30.s64 = r30.s64 + 84;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823fa38c
	if (ctx.cr6.lt) goto loc_823FA38C;
loc_823FA448:
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_823FDF98) {
	REX_FUNC_PROLOGUE();
	// stw r5,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823FDFB0) {
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
	ctx.lr = 0x823FDFB8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,456(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// lwz r9,316(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r25,0(r6)
	r25.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lbz r29,140(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 140);
	// lbz r26,150(r11)
	r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 150);
	// ble cr6,0x823fe07c
	if (!ctx.cr6.gt) goto loc_823FE07C;
	// rlwinm r24,r26,2,0,29
	r24.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r25
	r27.u64 = r25.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
loc_823FDFF4:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x823fe040
	if (!ctx.cr6.lt) goto loc_823FE040;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_823FE010:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x823fe038
	if (!ctx.cr6.gt) goto loc_823FE038;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823fe034
	if (ctx.cr6.eq) goto loc_823FE034;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_823FE02C:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x823fe02c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FE02C;
loc_823FE034:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
loc_823FE038:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x823fe010
	if (ctx.cr6.lt) goto loc_823FE010;
loc_823FE040:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// ble cr6,0x823fe064
	if (!ctx.cr6.gt) goto loc_823FE064;
	// addi r7,r26,-1
	ctx.r7.s64 = r26.s64 + -1;
	// lwz r8,112(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r6,r30,1
	ctx.r6.s64 = r30.s64 + 1;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823f6d28
	ctx.lr = 0x823FE064;
	sub_823F6D28(ctx, base);
loc_823FE064:
	// lwz r11,316(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 316);
	// add r30,r30,r26
	r30.u64 = r30.u64 + r26.u64;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// add r27,r24,r27
	r27.u64 = r24.u64 + r27.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823fdff4
	if (ctx.cr6.lt) goto loc_823FDFF4;
loc_823FE07C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82402690) {
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
	ctx.lr = 0x82402698;
	// li r31,8
	r31.s64 = 8;
	// lwz r11,328(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 328);
	// lwz r10,80(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 80);
	// addi r9,r5,46
	ctx.r9.s64 = ctx.r5.s64 + 46;
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// addi r10,r10,14
	ctx.r10.s64 = ctx.r10.s64 + 14;
	// addi r11,r1,-260
	ctx.r11.s64 = ctx.r1.s64 + -260;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_824026B8:
	// lhz r5,-30(r9)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + -30);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82402758
	if (!ctx.cr6.eq) goto loc_82402758;
	// lhz r4,-14(r9)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + -14);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82402758
	if (!ctx.cr6.eq) goto loc_82402758;
	// lhz r4,2(r9)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82402758
	if (!ctx.cr6.eq) goto loc_82402758;
	// lhz r4,18(r9)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + 18);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82402758
	if (!ctx.cr6.eq) goto loc_82402758;
	// lhz r4,34(r9)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + 34);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82402758
	if (!ctx.cr6.eq) goto loc_82402758;
	// lhz r4,50(r9)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + 50);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82402758
	if (!ctx.cr6.eq) goto loc_82402758;
	// lhz r4,66(r9)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + 66);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82402758
	if (!ctx.cr6.eq) goto loc_82402758;
	// lhz r5,-14(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + -14);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lhz r4,-46(r9)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + -46);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// mullw r4,r3,r5
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,-124(r11)
	REX_STORE_U32(ctx.r11.u32 + -124, ctx.r3.u32);
	// stw r3,-92(r11)
	REX_STORE_U32(ctx.r11.u32 + -92, ctx.r3.u32);
	// stw r3,-60(r11)
	REX_STORE_U32(ctx.r11.u32 + -60, ctx.r3.u32);
	// stw r3,-28(r11)
	REX_STORE_U32(ctx.r11.u32 + -28, ctx.r3.u32);
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stw r3,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r3.u32);
	// stw r3,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r3.u32);
	// stw r3,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82402908
	goto loc_82402908;
loc_82402758:
	// lhz r5,18(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 18);
	// lhz r4,-14(r9)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + -14);
	// lhz r31,82(r10)
	r31.u64 = REX_LOAD_U16(ctx.r10.u32 + 82);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r30,50(r9)
	r30.u64 = REX_LOAD_U16(ctx.r9.u32 + 50);
	// extsh r27,r31
	r27.s64 = r31.s16;
	// lhz r23,50(r10)
	r23.u64 = REX_LOAD_U16(ctx.r10.u32 + 50);
	// mullw r28,r5,r4
	r28.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// lhz r26,-14(r10)
	r26.u64 = REX_LOAD_U16(ctx.r10.u32 + -14);
	// lhz r31,98(r10)
	r31.u64 = REX_LOAD_U16(ctx.r10.u32 + 98);
	// lhz r29,66(r10)
	r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 66);
	// lhz r20,34(r10)
	r20.u64 = REX_LOAD_U16(ctx.r10.u32 + 34);
	// lhzu r4,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r4.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// lhz r22,18(r9)
	r22.u64 = REX_LOAD_U16(ctx.r9.u32 + 18);
	// lhz r25,-46(r9)
	r25.u64 = REX_LOAD_U16(ctx.r9.u32 + -46);
	// lhz r21,34(r9)
	r21.u64 = REX_LOAD_U16(ctx.r9.u32 + 34);
	// extsh r24,r30
	r24.s64 = r30.s16;
	// lhz r30,66(r9)
	r30.u64 = REX_LOAD_U16(ctx.r9.u32 + 66);
	// lhzu r5,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r5.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// extsh r30,r30
	r30.s64 = r30.s16;
	// extsh r29,r29
	r29.s64 = r29.s16;
	// extsh r21,r21
	r21.s64 = r21.s16;
	// extsh r20,r20
	r20.s64 = r20.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// mullw r3,r4,r3
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// mullw r4,r31,r30
	ctx.r4.s64 = int64_t(r31.s32) * int64_t(r30.s32);
	// mullw r31,r29,r21
	r31.s64 = int64_t(r29.s32) * int64_t(r21.s32);
	// mullw r5,r20,r5
	ctx.r5.s64 = int64_t(r20.s32) * int64_t(ctx.r5.s32);
	// add r30,r31,r3
	r30.u64 = r31.u64 + ctx.r3.u64;
	// mullw r27,r27,r24
	r27.s64 = int64_t(r27.s32) * int64_t(r24.s32);
	// add r29,r4,r5
	r29.u64 = ctx.r4.u64 + ctx.r5.u64;
	// extsh r24,r23
	r24.s64 = r23.s16;
	// extsh r25,r25
	r25.s64 = r25.s16;
	// extsh r26,r26
	r26.s64 = r26.s16;
	// extsh r23,r22
	r23.s64 = r22.s16;
	// add r22,r30,r29
	r22.u64 = r30.u64 + r29.u64;
	// add r21,r27,r28
	r21.u64 = r27.u64 + r28.u64;
	// mullw r26,r26,r25
	r26.s64 = int64_t(r26.s32) * int64_t(r25.s32);
	// mullw r25,r24,r23
	r25.s64 = int64_t(r24.s32) * int64_t(r23.s32);
	// mulli r19,r22,9633
	r19.s64 = static_cast<int64_t>(r22.u64 * static_cast<uint64_t>(9633));
	// mulli r23,r30,3196
	r23.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(3196));
	// mulli r24,r21,4433
	r24.s64 = static_cast<int64_t>(r21.u64 * static_cast<uint64_t>(4433));
	// mulli r28,r28,6270
	r28.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(6270));
	// add r22,r25,r26
	r22.u64 = r25.u64 + r26.u64;
	// add r30,r4,r3
	r30.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mulli r21,r3,12299
	r21.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(12299));
	// subf r23,r23,r19
	r23.u64 = r19.u64 - r23.u64;
	// add r3,r28,r24
	ctx.r3.u64 = r28.u64 + r24.u64;
	// rlwinm r28,r22,13,0,18
	r28.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 13) & 0xFFFFE000;
	// add r20,r21,r23
	r20.u64 = r21.u64 + r23.u64;
	// mulli r22,r30,-7373
	r22.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(-7373));
	// add r30,r28,r3
	r30.u64 = r28.u64 + ctx.r3.u64;
	// subf r21,r3,r28
	r21.u64 = r28.u64 - ctx.r3.u64;
	// add r3,r20,r22
	ctx.r3.u64 = r20.u64 + r22.u64;
	// mulli r29,r29,16069
	r29.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(16069));
	// add r20,r30,r3
	r20.u64 = r30.u64 + ctx.r3.u64;
	// subf r25,r25,r26
	r25.u64 = r26.u64 - r25.u64;
	// mulli r18,r27,15137
	r18.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(15137));
	// add r28,r31,r5
	r28.u64 = r31.u64 + ctx.r5.u64;
	// mulli r27,r4,2446
	r27.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(2446));
	// mulli r26,r31,16819
	r26.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(16819));
	// subf r29,r29,r19
	r29.u64 = r19.u64 - r29.u64;
	// mulli r5,r5,25172
	ctx.r5.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(25172));
	// addi r20,r20,1024
	r20.s64 = r20.s64 + 1024;
	// subf r4,r18,r24
	ctx.r4.u64 = r24.u64 - r18.u64;
	// rlwinm r31,r25,13,0,18
	r31.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 13) & 0xFFFFE000;
	// add r24,r26,r23
	r24.u64 = r26.u64 + r23.u64;
	// add r25,r27,r22
	r25.u64 = r27.u64 + r22.u64;
	// mulli r28,r28,-20995
	r28.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(-20995));
	// add r23,r5,r29
	r23.u64 = ctx.r5.u64 + r29.u64;
	// srawi r26,r20,11
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x7FF) != 0);
	r26.s64 = r20.s32 >> 11;
	// add r5,r31,r4
	ctx.r5.u64 = r31.u64 + ctx.r4.u64;
	// subf r27,r4,r31
	r27.u64 = r31.u64 - ctx.r4.u64;
	// stw r26,-124(r11)
	REX_STORE_U32(ctx.r11.u32 + -124, r26.u32);
	// add r4,r25,r29
	ctx.r4.u64 = r25.u64 + r29.u64;
	// add r31,r24,r28
	r31.u64 = r24.u64 + r28.u64;
	// add r29,r23,r28
	r29.u64 = r23.u64 + r28.u64;
	// subf r3,r3,r30
	ctx.r3.u64 = r30.u64 - ctx.r3.u64;
	// add r30,r5,r29
	r30.u64 = ctx.r5.u64 + r29.u64;
	// subf r5,r29,r5
	ctx.r5.u64 = ctx.r5.u64 - r29.u64;
	// addi r3,r3,1024
	ctx.r3.s64 = ctx.r3.s64 + 1024;
	// addi r29,r5,1024
	r29.s64 = ctx.r5.s64 + 1024;
	// srawi r5,r3,11
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 11;
	// addi r30,r30,1024
	r30.s64 = r30.s64 + 1024;
	// add r3,r27,r31
	ctx.r3.u64 = r27.u64 + r31.u64;
	// stw r5,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r5.u32);
	// srawi r5,r30,11
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FF) != 0);
	ctx.r5.s64 = r30.s32 >> 11;
	// addi r28,r3,1024
	r28.s64 = ctx.r3.s64 + 1024;
	// subf r31,r31,r27
	r31.u64 = r27.u64 - r31.u64;
	// stw r5,-92(r11)
	REX_STORE_U32(ctx.r11.u32 + -92, ctx.r5.u32);
	// subf r3,r4,r21
	ctx.r3.u64 = r21.u64 - ctx.r4.u64;
	// add r30,r21,r4
	r30.u64 = r21.u64 + ctx.r4.u64;
	// srawi r4,r29,11
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7FF) != 0);
	ctx.r4.s64 = r29.s32 >> 11;
	// srawi r5,r28,11
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x7FF) != 0);
	ctx.r5.s64 = r28.s32 >> 11;
	// addi r31,r31,1024
	r31.s64 = r31.s64 + 1024;
	// stw r4,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r4.u32);
	// addi r30,r30,1024
	r30.s64 = r30.s64 + 1024;
	// stw r5,-60(r11)
	REX_STORE_U32(ctx.r11.u32 + -60, ctx.r5.u32);
	// addi r3,r3,1024
	ctx.r3.s64 = ctx.r3.s64 + 1024;
	// srawi r4,r31,11
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FF) != 0);
	ctx.r4.s64 = r31.s32 >> 11;
	// srawi r5,r30,11
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FF) != 0);
	ctx.r5.s64 = r30.s32 >> 11;
	// srawi r3,r3,11
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 11;
	// stw r4,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
	// stw r5,-28(r11)
	REX_STORE_U32(ctx.r11.u32 + -28, ctx.r5.u32);
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
loc_82402908:
	// bdnz 0x824026b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824026B8;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,-404
	ctx.r10.s64 = ctx.r1.s64 + -404;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82402920:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// lwz r3,24(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x824029b4
	if (!ctx.cr6.eq) goto loc_824029B4;
	// lwz r6,28(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x824029b4
	if (!ctx.cr6.eq) goto loc_824029B4;
	// lwz r6,32(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x824029b4
	if (!ctx.cr6.eq) goto loc_824029B4;
	// lwz r6,36(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x824029b4
	if (!ctx.cr6.eq) goto loc_824029B4;
	// lwz r6,40(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x824029b4
	if (!ctx.cr6.eq) goto loc_824029B4;
	// lwz r6,44(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x824029b4
	if (!ctx.cr6.eq) goto loc_824029B4;
	// lwz r6,48(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x824029b4
	if (!ctx.cr6.eq) goto loc_824029B4;
	// lwz r6,20(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// srawi r5,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 5;
	// clrlwi r4,r5,22
	ctx.r4.u64 = ctx.r5.u32 & 0x3FF;
	// lbzx r3,r4,r8
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// stb r3,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// stb r3,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r3.u8);
	// stb r3,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r3.u8);
	// stb r3,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r3.u8);
	// stb r3,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r3.u8);
	// stb r3,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r3.u8);
	// stb r3,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r3.u8);
	// b 0x82402b24
	goto loc_82402B24;
loc_824029B4:
	// lwz r4,48(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// mulli r22,r3,12299
	r22.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(12299));
	// lwz r5,40(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r28,44(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r27,36(r10)
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r29,28(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r26,20(r10)
	r26.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwzu r6,32(r10)
	ea = 32 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r31,r5,r3
	r31.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r30,r4,r6
	r30.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r25,r28,r29
	r25.u64 = r28.u64 + r29.u64;
	// add r24,r31,r30
	r24.u64 = r31.u64 + r30.u64;
	// mulli r23,r31,3196
	r23.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(3196));
	// mulli r19,r24,9633
	r19.s64 = static_cast<int64_t>(r24.u64 * static_cast<uint64_t>(9633));
	// mulli r29,r29,6270
	r29.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(6270));
	// mulli r25,r25,4433
	r25.s64 = static_cast<int64_t>(r25.u64 * static_cast<uint64_t>(4433));
	// add r21,r26,r27
	r21.u64 = r26.u64 + r27.u64;
	// add r31,r4,r3
	r31.u64 = ctx.r4.u64 + ctx.r3.u64;
	// subf r24,r23,r19
	r24.u64 = r19.u64 - r23.u64;
	// add r3,r29,r25
	ctx.r3.u64 = r29.u64 + r25.u64;
	// rlwinm r29,r21,13,0,18
	r29.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 13) & 0xFFFFE000;
	// mulli r23,r31,-7373
	r23.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(-7373));
	// add r21,r22,r24
	r21.u64 = r22.u64 + r24.u64;
	// subf r22,r3,r29
	r22.u64 = r29.u64 - ctx.r3.u64;
	// add r31,r29,r3
	r31.u64 = r29.u64 + ctx.r3.u64;
	// add r3,r21,r23
	ctx.r3.u64 = r21.u64 + r23.u64;
	// mulli r30,r30,16069
	r30.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(16069));
	// add r29,r31,r3
	r29.u64 = r31.u64 + ctx.r3.u64;
	// subf r3,r3,r31
	ctx.r3.u64 = r31.u64 - ctx.r3.u64;
	// add r31,r29,r9
	r31.u64 = r29.u64 + ctx.r9.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// srawi r31,r31,18
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3FFFF) != 0);
	r31.s64 = r31.s32 >> 18;
	// srawi r3,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 18;
	// clrlwi r31,r31,22
	r31.u64 = r31.u32 & 0x3FF;
	// clrlwi r21,r3,22
	r21.u64 = ctx.r3.u32 & 0x3FF;
	// subf r29,r30,r19
	r29.u64 = r19.u64 - r30.u64;
	// subf r30,r27,r26
	r30.u64 = r26.u64 - r27.u64;
	// add r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lbzx r31,r31,r8
	r31.u64 = REX_LOAD_U8(r31.u32 + ctx.r8.u32);
	// mulli r6,r6,25172
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(25172));
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r31.u8);
	// mulli r31,r28,15137
	r31.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(15137));
	// mulli r28,r3,-20995
	r28.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(-20995));
	// add r3,r6,r29
	ctx.r3.u64 = ctx.r6.u64 + r29.u64;
	// lbzx r27,r21,r8
	r27.u64 = REX_LOAD_U8(r21.u32 + ctx.r8.u32);
	// rlwinm r30,r30,13,0,18
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 13) & 0xFFFFE000;
	// subf r31,r31,r25
	r31.u64 = r25.u64 - r31.u64;
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + r28.u64;
	// add r6,r30,r31
	ctx.r6.u64 = r30.u64 + r31.u64;
	// mulli r5,r5,16819
	ctx.r5.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(16819));
	// stb r27,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, r27.u8);
	// add r27,r6,r3
	r27.u64 = ctx.r6.u64 + ctx.r3.u64;
	// subf r31,r31,r30
	r31.u64 = r30.u64 - r31.u64;
	// add r27,r27,r9
	r27.u64 = r27.u64 + ctx.r9.u64;
	// subf r6,r3,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r3.u64;
	// srawi r30,r27,18
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3FFFF) != 0);
	r30.s64 = r27.s32 >> 18;
	// add r5,r5,r24
	ctx.r5.u64 = ctx.r5.u64 + r24.u64;
	// clrlwi r3,r30,22
	ctx.r3.u64 = r30.u32 & 0x3FF;
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + r28.u64;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r30,r31,r5
	r30.u64 = r31.u64 + ctx.r5.u64;
	// srawi r6,r6,18
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 18;
	// add r30,r30,r9
	r30.u64 = r30.u64 + ctx.r9.u64;
	// clrlwi r28,r6,22
	r28.u64 = ctx.r6.u32 & 0x3FF;
	// lbzx r3,r3,r8
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// srawi r30,r30,18
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3FFFF) != 0);
	r30.s64 = r30.s32 >> 18;
	// mulli r6,r4,2446
	ctx.r6.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(2446));
	// stb r3,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r3.u8);
	// lbzx r4,r28,r8
	ctx.r4.u64 = REX_LOAD_U8(r28.u32 + ctx.r8.u32);
	// stb r4,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r4.u8);
	// subf r3,r5,r31
	ctx.r3.u64 = r31.u64 - ctx.r5.u64;
	// clrlwi r5,r30,22
	ctx.r5.u64 = r30.u32 & 0x3FF;
	// add r6,r6,r23
	ctx.r6.u64 = ctx.r6.u64 + r23.u64;
	// add r4,r3,r9
	ctx.r4.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + r29.u64;
	// srawi r3,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 18;
	// lbzx r5,r5,r8
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// add r4,r22,r6
	ctx.r4.u64 = r22.u64 + ctx.r6.u64;
	// stb r5,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r5.u8);
	// subf r6,r6,r22
	ctx.r6.u64 = r22.u64 - ctx.r6.u64;
	// clrlwi r5,r3,22
	ctx.r5.u64 = ctx.r3.u32 & 0x3FF;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// lbzx r3,r5,r8
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// srawi r5,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 18;
	// srawi r4,r6,18
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 18;
	// clrlwi r6,r5,22
	ctx.r6.u64 = ctx.r5.u32 & 0x3FF;
	// clrlwi r5,r4,22
	ctx.r5.u64 = ctx.r4.u32 & 0x3FF;
	// stb r3,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r3.u8);
	// lbzx r4,r6,r8
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// stb r4,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r4.u8);
	// lbzx r3,r5,r8
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
loc_82402B24:
	// stb r3,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r3.u8);
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// bdnz 0x82402920
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82402920;
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_82417DC8) {
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
	ctx.lr = 0x82417DD0;
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
	// beq cr6,0x82417e04
	if (ctx.cr6.eq) goto loc_82417E04;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x82417E00;
	sub_82413040(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_82417E04:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82417e20
	if (ctx.cr6.eq) goto loc_82417E20;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413dd0
	ctx.lr = 0x82417E1C;
	sub_82413DD0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_82417E20:
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
	// bne 0x82417e88
	if (!ctx.cr0.eq) goto loc_82417E88;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x82417e90
	goto loc_82417E90;
loc_82417E88:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_82417E90:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82417ee8
	if (ctx.cr6.eq) goto loc_82417EE8;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// lfs f12,-10496(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -10496);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-10488(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -10488);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-10492(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -10492);
	ctx.f0.f64 = double(temp.f32);
loc_82417EB8:
	// lfs f11,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f10,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f11,f10,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f11.f64)));
	// fmadds f11,f9,f12,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f11.f64)));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r9,104(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 104);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82417eb8
	if (ctx.cr6.lt) goto loc_82417EB8;
loc_82417EE8:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82417f00
	if (ctx.cr6.eq) goto loc_82417F00;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x82417F00;
	sub_823DC658(ctx, base);
loc_82417F00:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82418108
	if (!ctx.cr6.gt) goto loc_82418108;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// rlwinm r27,r30,1,0,30
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r30,r27,r28
	r30.u64 = r28.u64 - r27.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r29,-32255
	r29.s64 = -2113863680;
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lfd f8,-9120(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + -9120);
	// lfs f9,16288(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16288);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,-7224(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -7224);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,17176(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17176);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-13044(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + -13044);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,2028(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 2028);
	ctx.f7.f64 = double(temp.f32);
loc_82417F60:
	// add r11,r10,r25
	ctx.r11.u64 = ctx.r10.u64 + r25.u64;
	// lfsx f0,r10,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 + ctx.f0.f64));
	// rlwinm r9,r4,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xC;
	// lwz r6,92(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
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
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f6,f6
	ctx.f6.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x82418088
	if (ctx.cr6.eq) goto loc_82418088;
	// extsw r9,r6
	ctx.r9.s64 = ctx.r6.s32;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r29,r5
	r29.s64 = ctx.r5.s32;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f6,88(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r29,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, r29.u64);
	// lfd f5,96(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// lfs f4,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
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
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f6,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f6,f0,f10,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f6.f64)));
	// stfs f6,16(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
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
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// fmul f0,f0,f8
	ctx.f0.f64 = ctx.f0.f64 * ctx.f8.f64;
	// lfs f6,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f6,f13,f11,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f6.f64)));
	// stfs f6,28(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f6,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fmul f5,f13,f8
	ctx.f5.f64 = ctx.f13.f64 * ctx.f8.f64;
	// fmadds f6,f13,f10,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f6.f64)));
	// stfs f6,28(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// frsp f31,f0
	f31.f64 = double(float(ctx.f0.f64));
	// lfs f0,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f13,f9,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, ctx.f0.f64)));
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// frsp f30,f5
	f30.f64 = double(float(ctx.f5.f64));
loc_82418088:
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x82418098
	if (ctx.cr6.lt) goto loc_82418098;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82418098:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824180b0
	if (!ctx.cr6.gt) goto loc_824180B0;
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// blt cr6,0x824180b4
	if (ctx.cr6.lt) goto loc_824180B4;
	// li r5,255
	ctx.r5.s64 = 255;
	// b 0x824180b4
	goto loc_824180B4;
loc_824180B0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_824180B4:
	// cmpwi cr6,r6,255
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 255, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x824180c4
	if (ctx.cr6.lt) goto loc_824180C4;
	// li r11,255
	ctx.r11.s64 = 255;
loc_824180C4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824180dc
	if (!ctx.cr6.gt) goto loc_824180DC;
	// cmpwi cr6,r6,255
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 255, ctx.xer);
	// blt cr6,0x824180e0
	if (ctx.cr6.lt) goto loc_824180E0;
	// li r6,255
	ctx.r6.s64 = 255;
	// b 0x824180e0
	goto loc_824180E0;
loc_824180DC:
	// li r6,0
	ctx.r6.s64 = 0;
loc_824180E0:
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// sthux r11,r30,r27
	ea = r30.u32 + r27.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	r30.u32 = ea;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82417f60
	if (ctx.cr6.lt) goto loc_82417F60;
loc_82418108:
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

DEFINE_REX_FUNC(sub_824204A0) {
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
	ctx.lr = 0x824204A8;
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
	// bne cr6,0x824204e8
	if (!ctx.cr6.eq) goto loc_824204E8;
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
	// li r7,2371
	ctx.r7.s64 = 2371;
	// bl 0x8240e308
	ctx.lr = 0x824204E8;
	sub_8240E308(ctx, base);
loc_824204E8:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e880
	ctx.lr = 0x824204F8;
	sub_8240E880(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82420560
	if (!ctx.cr6.eq) goto loc_82420560;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8242051c
	if (ctx.cr6.eq) goto loc_8242051C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8240e930
	ctx.lr = 0x8242051C;
	sub_8240E930(ctx, base);
loc_8242051C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82420558
	if (ctx.cr6.eq) goto loc_82420558;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82420558
	if (ctx.cr6.eq) goto loc_82420558;
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
	// li r6,58
	ctx.r6.s64 = 58;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,232(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 232);
	// bctrl 
	ctx.lr = 0x82420558;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82420558:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824205bc
	goto loc_824205BC;
loc_82420560:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8242057c
	if (ctx.cr6.eq) goto loc_8242057C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8240e930
	ctx.lr = 0x8242057C;
	sub_8240E930(ctx, base);
loc_8242057C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824205b8
	if (ctx.cr6.eq) goto loc_824205B8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824205b8
	if (ctx.cr6.eq) goto loc_824205B8;
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
	// li r6,58
	ctx.r6.s64 = 58;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,232(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 232);
	// bctrl 
	ctx.lr = 0x824205B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824205B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824205BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_824246F8) {
	REX_FUNC_PROLOGUE();
	// addi r11,r5,14
	ctx.r11.s64 = ctx.r5.s64 + 14;
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r9,r5,20
	ctx.r9.s64 = ctx.r5.s64 + 20;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwzx r10,r9,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r4,24(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82426d18
	sub_82426D18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824266F8) {
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
	// bl 0x82425928
	ctx.lr = 0x82426710;
	sub_82425928(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82426728
	if (ctx.cr0.lt) goto loc_82426728;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82425bf0
	ctx.lr = 0x82426720;
	sub_82425BF0(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_82426728:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82426740
	if (ctx.cr6.lt) goto loc_82426740;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82424a78
	ctx.lr = 0x82426738;
	sub_82424A78(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_82426740:
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

DEFINE_REX_FUNC(sub_82427918) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82427920;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x82427100
	ctx.lr = 0x82427934;
	sub_82427100(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,-5908
	ctx.r11.s64 = ctx.r11.s64 + -5908;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r3,2736(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 2736);
	// bl 0x82424850
	ctx.lr = 0x8242794C;
	sub_82424850(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// stb r11,29(r31)
	REX_STORE_U8(r31.u32 + 29, ctx.r11.u8);
	// stb r11,28(r31)
	REX_STORE_U8(r31.u32 + 28, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_824289A0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,2736(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 2736);
	// lbz r11,2144(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2144);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82428a38
	if (ctx.cr0.eq) goto loc_82428A38;
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bgt cr6,0x824289e8
	if (ctx.cr6.gt) goto loc_824289E8;
	// cmpwi cr6,r3,19
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 19, ctx.xer);
	// bge cr6,0x82428a10
	if (!ctx.cr6.lt) goto loc_82428A10;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82428a10
	if (ctx.cr6.eq) goto loc_82428A10;
	// ble cr6,0x82428a30
	if (!ctx.cr6.gt) goto loc_82428A30;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x82428a18
	if (ctx.cr6.eq) goto loc_82428A18;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82428a30
	goto loc_82428A30;
loc_824289E8:
	// cmpwi cr6,r3,33
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 33, ctx.xer);
	// bgt cr6,0x82428a20
	if (ctx.cr6.gt) goto loc_82428A20;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// bge cr6,0x82428a10
	if (!ctx.cr6.lt) goto loc_82428A10;
	// cmpwi cr6,r3,21
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 21, ctx.xer);
	// blt cr6,0x82428a30
	if (ctx.cr6.lt) goto loc_82428A30;
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// ble cr6,0x82428a18
	if (!ctx.cr6.gt) goto loc_82428A18;
	// cmpwi cr6,r3,24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 24, ctx.xer);
	// bgt cr6,0x82428a30
	if (ctx.cr6.gt) goto loc_82428A30;
loc_82428A10:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82428A18:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_82428A20:
	// cmpwi cr6,r3,43
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 43, ctx.xer);
	// blt cr6,0x82428a30
	if (ctx.cr6.lt) goto loc_82428A30;
	// cmpwi cr6,r3,44
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 44, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82428A30:
	// li r3,48
	ctx.r3.s64 = 48;
	// blr 
	return;
loc_82428A38:
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x82428a4c
	if (ctx.cr6.eq) goto loc_82428A4C;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x82428a18
	if (ctx.cr6.eq) goto loc_82428A18;
	// b 0x82428a30
	goto loc_82428A30;
loc_82428A4C:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82429C98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82429CA0;
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
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x82412d18
	ctx.lr = 0x82429CC0;
	sub_82412D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// beq 0x82429ce4
	if (ctx.cr0.eq) goto loc_82429CE4;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82427658
	ctx.lr = 0x82429CE0;
	sub_82427658(ctx, base);
	// b 0x82429ce8
	goto loc_82429CE8;
loc_82429CE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82429CE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8242C0C8) {
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
	ctx.lr = 0x8242C0D0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r25,0
	r25.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// addi r29,r5,8
	r29.s64 = ctx.r5.s64 + 8;
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// mr r26,r25
	r26.u64 = r25.u64;
	// blt 0x8242c154
	if (ctx.cr0.lt) goto loc_8242C154;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_8242C0FC:
	// add r11,r30,r26
	ctx.r11.u64 = r30.u64 + r26.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, ctx.xer);
	// beq cr6,0x8242c134
	if (ctx.cr6.eq) goto loc_8242C134;
	// ble cr6,0x8242c124
	if (!ctx.cr6.gt) goto loc_8242C124;
	// addi r30,r10,-1
	r30.s64 = ctx.r10.s64 + -1;
	// b 0x8242c128
	goto loc_8242C128;
loc_8242C124:
	// addi r26,r10,1
	r26.s64 = ctx.r10.s64 + 1;
loc_8242C128:
	// cmpw cr6,r26,r30
	ctx.cr6.compare<int32_t>(r26.s32, r30.s32, ctx.xer);
	// ble cr6,0x8242c0fc
	if (!ctx.cr6.gt) goto loc_8242C0FC;
	// b 0x8242c14c
	goto loc_8242C14C;
loc_8242C134:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8242be80
	ctx.lr = 0x8242C148;
	sub_8242BE80(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_8242C14C:
	// cmpw cr6,r26,r30
	ctx.cr6.compare<int32_t>(r26.s32, r30.s32, ctx.xer);
	// ble cr6,0x8242c274
	if (!ctx.cr6.gt) goto loc_8242C274;
loc_8242C154:
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x823cd118
	ctx.lr = 0x8242C160;
	sub_823CD118(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8242c274
	if (ctx.cr0.eq) goto loc_8242C274;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8242bd20
	ctx.lr = 0x8242C178;
	sub_8242BD20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8242c268
	if (ctx.cr0.lt) goto loc_8242C268;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8242c1c4
	if (!ctx.cr6.lt) goto loc_8242C1C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r30,r26,3,0,28
	r30.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r26,r10
	ctx.r10.u64 = ctx.r10.u64 - r26.u64;
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + ctx.r11.u64;
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r4,8
	ctx.r3.s64 = ctx.r4.s64 + 8;
	// bl 0x822d6840
	ctx.lr = 0x8242C1AC;
	sub_822D6840(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stwx r28,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r28.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// b 0x8242c234
	goto loc_8242C234;
loc_8242C1C4:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x823cd118
	ctx.lr = 0x8242C1D4;
	sub_823CD118(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x8242c25c
	if (ctx.cr0.eq) goto loc_8242C25C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r30,r26,3,0,28
	r30.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x8242C1FC;
	sub_822D4FA0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r25,r30,r27
	r25.u64 = r30.u64 + r27.u64;
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + ctx.r11.u64;
	// addi r3,r25,8
	ctx.r3.s64 = r25.s64 + 8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r11,r26,r11
	ctx.r11.u64 = ctx.r11.u64 - r26.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x822d4fa0
	ctx.lr = 0x8242C21C;
	sub_822D4FA0(ctx, base);
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x823cd250
	ctx.lr = 0x8242C228;
	sub_823CD250(ctx, base);
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// stwx r28,r30,r27
	REX_STORE_U32(r30.u32 + r27.u32, r28.u32);
	// stw r29,4(r25)
	REX_STORE_U32(r25.u32 + 4, r29.u32);
loc_8242C234:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x8242be80
	ctx.lr = 0x8242C248;
	sub_8242BE80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x8242c274
	goto loc_8242C274;
loc_8242C25C:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8242be08
	ctx.lr = 0x8242C268;
	sub_8242BE08(ctx, base);
loc_8242C268:
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823cd250
	ctx.lr = 0x8242C274;
	sub_823CD250(ctx, base);
loc_8242C274:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8242c288
	if (ctx.cr6.eq) goto loc_8242C288;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
loc_8242C288:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_824354D8) {
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
	// addi r3,r3,272
	ctx.r3.s64 = ctx.r3.s64 + 272;
	// li r31,0
	r31.s64 = 0;
	// bl 0x82434b38
	ctx.lr = 0x82435508;
	sub_82434B38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82435518
	if (ctx.cr0.eq) goto loc_82435518;
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
loc_82435518:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_82435C70) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82444298
	ctx.lr = 0x82435C9C;
	sub_82444298(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r9,r9,9960
	ctx.r9.s64 = ctx.r9.s64 + 9960;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// addi r10,r31,188
	ctx.r10.s64 = r31.s64 + 188;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r8,9840
	ctx.r8.s64 = ctx.r8.s64 + 9840;
	// addi r7,r7,9796
	ctx.r7.s64 = ctx.r7.s64 + 9796;
	// stw r11,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r11.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r7,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r7.u32);
	// stw r11,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r11.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r10,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r10.u32);
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
	// stw r9,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r9.u32);
	// stw r11,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r11.u32);
	// stw r11,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r11.u32);
	// stw r11,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r11.u32);
	// lfs f0,1992(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r11.u32);
	// lwz r9,188(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 188);
	// lwz r10,192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 192);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r10,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r10.u32);
	// stw r11,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r11.u32);
	// stw r11,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r11.u32);
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 240, temp.u32);
	// stw r30,236(r31)
	REX_STORE_U32(r31.u32 + 236, r30.u32);
	// stw r11,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r11.u32);
	// stw r11,248(r31)
	REX_STORE_U32(r31.u32 + 248, ctx.r11.u32);
	// stw r11,252(r31)
	REX_STORE_U32(r31.u32 + 252, ctx.r11.u32);
	// sth r11,256(r31)
	REX_STORE_U16(r31.u32 + 256, ctx.r11.u16);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// stw r11,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r11.u32);
	// stw r11,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r11.u32);
	// bl 0x8242d278
	ctx.lr = 0x82435D40;
	sub_8242D278(ctx, base);
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

DEFINE_REX_FUNC(sub_82438410) {
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
	ctx.lr = 0x82438418;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r6,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82438454
	if (!ctx.cr6.eq) goto loc_82438454;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,516(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 516);
	// addi r6,r1,172
	ctx.r6.s64 = ctx.r1.s64 + 172;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8243b9c0
	ctx.lr = 0x8243844C;
	sub_8243B9C0(ctx, base);
	// lwz r6,172(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82438454:
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// add r10,r28,r27
	ctx.r10.u64 = r28.u64 + r27.u64;
	// mr r30,r27
	r30.u64 = r27.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82438474
	if (!ctx.cr6.gt) goto loc_82438474;
	// subf r30,r28,r11
	r30.u64 = ctx.r11.u64 - r28.u64;
	// subf r29,r30,r27
	r29.u64 = r27.u64 - r30.u64;
loc_82438474:
	// lwz r9,104(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 104);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r11,524(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 524);
	// mullw r10,r9,r28
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(r28.s32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r9,r9,r30
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x822091c8
	ctx.lr = 0x82438498;
	sub_822091C8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824384c4
	if (ctx.cr6.eq) goto loc_824384C4;
	// lwz r9,104(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r10,172(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// mullw r11,r9,r30
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// lwz r3,524(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 524);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r9,r9,r29
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r29.s32);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822091c8
	ctx.lr = 0x824384C4;
	sub_822091C8(ctx, base);
loc_824384C4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8243A8A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8243A8B0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r30,0(r3)
	r30.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,1
	r29.s64 = 1;
	// cmplwi cr6,r30,357
	ctx.cr6.compare<uint32_t>(r30.u32, 357, ctx.xer);
	// beq cr6,0x8243a8e8
	if (ctx.cr6.eq) goto loc_8243A8E8;
	// lhz r11,2(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & r29.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r10,r11
	r29.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_8243A8E8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243a300
	ctx.lr = 0x8243A8F0;
	sub_8243A300(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8243aa2c
	if (ctx.cr6.eq) goto loc_8243AA2C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8243aa18
	if (ctx.cr6.eq) goto loc_8243AA18;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8243a990
	if (ctx.cr6.eq) goto loc_8243A990;
	// cmpwi cr6,r11,352
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 352, ctx.xer);
	// ble cr6,0x8243aa40
	if (!ctx.cr6.gt) goto loc_8243AA40;
	// cmpwi cr6,r11,354
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 354, ctx.xer);
	// ble cr6,0x8243a944
	if (!ctx.cr6.gt) goto loc_8243A944;
	// cmpwi cr6,r11,357
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 357, ctx.xer);
	// beq cr6,0x8243a938
	if (ctx.cr6.eq) goto loc_8243A938;
	// cmpwi cr6,r11,358
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 358, ctx.xer);
	// bne cr6,0x8243aa40
	if (!ctx.cr6.eq) goto loc_8243AA40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242a5b8
	ctx.lr = 0x8243A934;
	sub_8242A5B8(ctx, base);
	// b 0x8243aa20
	goto loc_8243AA20;
loc_8243A938:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243a778
	ctx.lr = 0x8243A940;
	sub_8243A778(ctx, base);
	// b 0x8243aa20
	goto loc_8243AA20;
loc_8243A944:
	// lhz r10,14(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 14);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r30,65534
	ctx.cr6.compare<uint32_t>(r30.u32, 65534, ctx.xer);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bne cr6,0x8243a978
	if (!ctx.cr6.eq) goto loc_8243A978;
	// lhz r10,18(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 18);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_8243A978:
	// lhz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// b 0x8243a9fc
	goto loc_8243A9FC;
loc_8243A990:
	// lhz r10,14(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 14);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r30,65534
	ctx.cr6.compare<uint32_t>(r30.u32, 65534, ctx.xer);
	// addi r9,r10,-32
	ctx.r9.s64 = ctx.r10.s64 + -32;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// bne cr6,0x8243a9c8
	if (!ctx.cr6.eq) goto loc_8243A9C8;
	// lhz r9,18(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 18);
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// beq cr6,0x8243a9c8
	if (ctx.cr6.eq) goto loc_8243A9C8;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
loc_8243A9C8:
	// lhz r9,2(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 2);
	// lhz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 12);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_8243A9FC:
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8243aa40
	if (!ctx.cr6.eq) goto loc_8243AA40;
loc_8243AA10:
	// li r29,0
	r29.s64 = 0;
	// b 0x8243aa40
	goto loc_8243AA40;
loc_8243AA18:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243a468
	ctx.lr = 0x8243AA20;
	sub_8243A468(ctx, base);
loc_8243AA20:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8243aa40
	if (!ctx.cr0.eq) goto loc_8243AA40;
	// b 0x8243aa10
	goto loc_8243AA10;
loc_8243AA2C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243a398
	ctx.lr = 0x8243AA34;
	sub_8243A398(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r11,r29
	r29.u64 = ctx.r11.u64 & r29.u64;
loc_8243AA40:
	// cmplwi cr6,r30,65534
	ctx.cr6.compare<uint32_t>(r30.u32, 65534, ctx.xer);
	// bne cr6,0x8243aa90
	if (!ctx.cr6.eq) goto loc_8243AA90;
	// lhz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 16);
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// blt cr6,0x8243aa8c
	if (ctx.cr6.lt) goto loc_8243AA8C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243aa90
	if (ctx.cr6.eq) goto loc_8243AA90;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8243AA64:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// bne 0x8243aa64
	if (!ctx.cr0.eq) goto loc_8243AA64;
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8243aa90
	if (ctx.cr6.eq) goto loc_8243AA90;
loc_8243AA8C:
	// li r29,0
	r29.s64 = 0;
loc_8243AA90:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82443448) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82443450;
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
	ctx.lr = 0x82443474;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82443494;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824434A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_824448F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x824448F8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r3,44
	r29.s64 = ctx.r3.s64 + 44;
	// b 0x8244497c
	goto loc_8244497C;
loc_82444908:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r3,r11,120
	ctx.r3.s64 = ctx.r11.s64 + 120;
	// lwz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// b 0x82444928
	goto loc_82444928;
loc_82444918:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// beq cr6,0x82444930
	if (ctx.cr6.eq) goto loc_82444930;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82444928:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82444918
	if (!ctx.cr6.eq) goto loc_82444918;
loc_82444930:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82443938
	ctx.lr = 0x82444938;
	sub_82443938(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
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
	ctx.lr = 0x8244495C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,84(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 84);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8242c888
	ctx.lr = 0x8244496C;
	sub_8242C888(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82444240
	ctx.lr = 0x82444974;
	sub_82444240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x8244497C;
	sub_82473600(ctx, base);
loc_8244497C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824344e8
	ctx.lr = 0x82444984;
	sub_824344E8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82444908
	if (!ctx.cr0.eq) goto loc_82444908;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8244C258) {
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
	ctx.lr = 0x8244C260;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lhz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8246e4b8
	ctx.lr = 0x8244C274;
	sub_8246E4B8(ctx, base);
	// lwz r25,0(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r30,4(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lhz r7,2(r28)
	ctx.r7.u64 = REX_LOAD_U16(r28.u32 + 2);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,4(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 4);
	// bl 0x8244b550
	ctx.lr = 0x8244C294;
	sub_8244B550(ctx, base);
	// li r26,1
	r26.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r27,-1
	r27.s64 = -1;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x8244c2bc
	if (ctx.cr6.eq) goto loc_8244C2BC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8244c2bc
	if (!ctx.cr6.eq) goto loc_8244C2BC;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r30,r26
	r30.u64 = r26.u64;
	// b 0x8244c2c8
	goto loc_8244C2C8;
loc_8244C2BC:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_8244C2C8:
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(r29.u32, 2, ctx.xer);
	// beq cr6,0x8244c2e4
	if (ctx.cr6.eq) goto loc_8244C2E4;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(r29.u32, 3, ctx.xer);
	// bne cr6,0x8244c2e8
	if (!ctx.cr6.eq) goto loc_8244C2E8;
	// li r31,16
	r31.s64 = 16;
	// b 0x8244c2e8
	goto loc_8244C2E8;
loc_8244C2E4:
	// li r31,8
	r31.s64 = 8;
loc_8244C2E8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8244c2fc
	if (!ctx.cr6.eq) goto loc_8244C2FC;
loc_8244C2F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_8244C2FC:
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8244c2f0
	if (ctx.cr6.eq) goto loc_8244C2F0;
	// lwz r7,12(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
loc_8244C314:
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r10,21(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 21);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// rlwimi r3,r26,0,31,29
	ctx.r3.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD) | (ctx.r3.u64 & 0x2);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244c390
	if (ctx.cr6.eq) goto loc_8244C390;
	// and r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 & r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8244c390
	if (ctx.cr6.eq) goto loc_8244C390;
	// lbz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// lhz r3,14(r28)
	ctx.r3.u64 = REX_LOAD_U16(r28.u32 + 14);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8244c390
	if (!ctx.cr6.eq) goto loc_8244C390;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8244c358
	if (ctx.cr6.eq) goto loc_8244C358;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x8244c35c
	goto loc_8244C35C;
loc_8244C358:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8244C35C:
	// subf r11,r10,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r10.u64;
	// srawi r3,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 31;
	// xor r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// subf. r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8244c3a4
	if (ctx.cr0.eq) goto loc_8244C3A4;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8244c390
	if (!ctx.cr6.gt) goto loc_8244C390;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8244c388
	if (ctx.cr6.eq) goto loc_8244C388;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8244c390
	if (ctx.cr6.gt) goto loc_8244C390;
loc_8244C388:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
loc_8244C390:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,25
	ctx.r8.s64 = ctx.r8.s64 + 25;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8244c314
	if (ctx.cr6.lt) goto loc_8244C314;
	// b 0x8244c3a8
	goto loc_8244C3A8;
loc_8244C3A4:
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
loc_8244C3A8:
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(r27.s32, -1, ctx.xer);
	// beq cr6,0x8244c2f0
	if (ctx.cr6.eq) goto loc_8244C2F0;
	// mulli r11,r27,25
	ctx.r11.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(25));
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_824536E0) {
	REX_FUNC_PROLOGUE();
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r9,r4,3,13,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x7FFF8;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82453724
	if (ctx.cr6.lt) goto loc_82453724;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r8,r9,r11
	ctx.r8.u64 = uint32_t((ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// addis r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 65536;
	// andc r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// addi r6,r6,-12
	ctx.r6.s64 = ctx.r6.s64 + -12;
	// twlgei r5,-1
	if (ctx.r5.s32 == -1 || ctx.r5.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// clrlwi r3,r6,16
	ctx.r3.u64 = ctx.r6.u32 & 0xFFFF;
	// blr 
	return;
loc_82453724:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82453D38) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x82453d4c
	if (!ctx.cr6.eq) goto loc_82453D4C;
	// lis r3,3
	ctx.r3.s64 = 196608;
	// ori r3,r3,23248
	ctx.r3.u64 = ctx.r3.u64 | 23248;
	// blr 
	return;
loc_82453D4C:
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bne cr6,0x82453d60
	if (!ctx.cr6.eq) goto loc_82453D60;
	// lis r3,5
	ctx.r3.s64 = 327680;
	// ori r3,r3,45680
	ctx.r3.u64 = ctx.r3.u64 | 45680;
	// blr 
	return;
loc_82453D60:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82453d74
	if (!ctx.cr6.eq) goto loc_82453D74;
	// lis r3,3
	ctx.r3.s64 = 196608;
	// ori r3,r3,24320
	ctx.r3.u64 = ctx.r3.u64 | 24320;
	// blr 
	return;
loc_82453D74:
	// lis r3,5
	ctx.r3.s64 = 327680;
	// ori r3,r3,51936
	ctx.r3.u64 = ctx.r3.u64 | 51936;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82455698) {
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
	ctx.lr = 0x824556A0;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// ori r6,r8,20
	ctx.r6.u64 = ctx.r8.u64 | 20;
	// fdivs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// lfs f31,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	f31.f64 = double(temp.f32);
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// stfs f1,0(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// std r4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,30780(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 30780);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f1,f0
	f30.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f9,f10,f13,f31
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, f31.f64)));
	// fctidz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stwx r10,r31,r6
	REX_STORE_U32(r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// stfs f1,0(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// bl 0x824538c8
	ctx.lr = 0x82455724;
	sub_824538C8(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lfs f0,30852(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 30852);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f7,f30,f0,f31
	ctx.f7.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, f31.f64)));
	// fctidz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82472e20
	ctx.lr = 0x82455740;
	sub_82472E20(ctx, base);
	// fadds f5,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(f30.f64 + f31.f64));
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r5,r8,2160
	ctx.r5.u64 = ctx.r8.u64 | 2160;
	// ori r4,r7,2164
	ctx.r4.u64 = ctx.r7.u64 | 2164;
	// ori r10,r6,2168
	ctx.r10.u64 = ctx.r6.u64 | 2168;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// stwx r3,r31,r5
	REX_STORE_U32(r31.u32 + ctx.r5.u32, ctx.r3.u32);
	// stwx r11,r31,r4
	REX_STORE_U32(r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// fctidz f4,f5
	ctx.f4.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f5.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stwx r30,r31,r10
	REX_STORE_U32(r31.u32 + ctx.r10.u32, r30.u32);
	// lfs f0,30876(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 30876);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f3,f30,f0,f31
	ctx.f3.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, f31.f64)));
	// fctidz f2,f3
	ctx.f2.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f3.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82472e20
	ctx.lr = 0x82455794;
	sub_82472E20(ctx, base);
	// addis r8,r31,1
	ctx.r8.s64 = r31.s64 + 65536;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// addi r8,r8,2208
	ctx.r8.s64 = ctx.r8.s64 + 2208;
	// lfs f0,30848(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 30848);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,512(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 512);
	// fmadds f1,f30,f0,f31
	ctx.f1.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, f31.f64)));
	// stw r3,520(r8)
	REX_STORE_U32(ctx.r8.u32 + 520, ctx.r3.u32);
	// subf r5,r3,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r3.u64;
	// clrlwi r4,r5,25
	ctx.r4.u64 = ctx.r5.u32 & 0x7F;
	// stw r4,516(r8)
	REX_STORE_U32(ctx.r8.u32 + 516, ctx.r4.u32);
	// fctidz f0,f1
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82472e20
	ctx.lr = 0x824557CC;
	sub_82472E20(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// ori r9,r11,10960
	ctx.r9.u64 = ctx.r11.u64 | 10960;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// ori r7,r8,10964
	ctx.r7.u64 = ctx.r8.u64 | 10964;
	// lfs f0,2084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2084);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f30,f0,f31
	ctx.f13.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, f31.f64)));
	// stwx r3,r31,r9
	REX_STORE_U32(r31.u32 + ctx.r9.u32, ctx.r3.u32);
	// stwx r11,r31,r7
	REX_STORE_U32(r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// fctidz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82472e20
	ctx.lr = 0x82455804;
	sub_82472E20(ctx, base);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// lfs f0,30872(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 30872);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// fmadds f11,f30,f0,f31
	ctx.f11.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, f31.f64)));
	// ori r5,r6,10968
	ctx.r5.u64 = ctx.r6.u64 | 10968;
	// stwx r3,r31,r5
	REX_STORE_U32(r31.u32 + ctx.r5.u32, ctx.r3.u32);
	// fctidz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82472e20
	ctx.lr = 0x8245582C;
	sub_82472E20(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r11,r11,11008
	ctx.r11.s64 = ctx.r11.s64 + 11008;
	// lfs f0,30868(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 30868);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,1024(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1024);
	// fmadds f9,f30,f0,f31
	ctx.f9.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, f31.f64)));
	// stw r3,1032(r11)
	REX_STORE_U32(ctx.r11.u32 + 1032, ctx.r3.u32);
	// subf r8,r3,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r3.u64;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stw r7,1028(r11)
	REX_STORE_U32(ctx.r11.u32 + 1028, ctx.r7.u32);
	// fctidz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82472e20
	ctx.lr = 0x82455864;
	sub_82472E20(ctx, base);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// lfs f0,30844(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 30844);
	ctx.f0.f64 = double(temp.f32);
	// addis r4,r31,1
	ctx.r4.s64 = r31.s64 + 65536;
	// fmadds f7,f30,f0,f31
	ctx.f7.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, f31.f64)));
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r4,r4,12064
	ctx.r4.s64 = ctx.r4.s64 + 12064;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,18244
	ctx.r9.u64 = ctx.r11.u64 | 18244;
	// lfs f0,30864(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 30864);
	ctx.f0.f64 = double(temp.f32);
	// ori r8,r10,18248
	ctx.r8.u64 = ctx.r10.u64 | 18248;
	// lwz r7,2048(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 2048);
	// fmadds f6,f30,f0,f31
	ctx.f6.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, f31.f64)));
	// stw r3,2056(r4)
	REX_STORE_U32(ctx.r4.u32 + 2056, ctx.r3.u32);
	// subf r6,r3,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r3.u64;
	// fctidz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r5,r6,23
	ctx.r5.u64 = ctx.r6.u32 & 0x1FF;
	// stw r5,2052(r4)
	REX_STORE_U32(ctx.r4.u32 + 2052, ctx.r5.u32);
	// stwx r30,r31,r8
	REX_STORE_U32(r31.u32 + ctx.r8.u32, r30.u32);
	// fctidz f4,f6
	ctx.f4.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stwx r4,r31,r9
	REX_STORE_U32(r31.u32 + ctx.r9.u32, ctx.r4.u32);
	// bl 0x82472e20
	ctx.lr = 0x824558CC;
	sub_82472E20(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,18272
	ctx.r11.s64 = ctx.r11.s64 + 18272;
	// lfs f0,30840(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 30840);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,2048(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 2048);
	// fmadds f3,f30,f0,f31
	ctx.f3.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, f31.f64)));
	// stw r3,2056(r11)
	REX_STORE_U32(ctx.r11.u32 + 2056, ctx.r3.u32);
	// subf r8,r3,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r3.u64;
	// clrlwi r7,r8,23
	ctx.r7.u64 = ctx.r8.u32 & 0x1FF;
	// stw r7,2052(r11)
	REX_STORE_U32(ctx.r11.u32 + 2052, ctx.r7.u32);
	// fctidz f2,f3
	ctx.f2.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f3.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82472e20
	ctx.lr = 0x82455904;
	sub_82472E20(ctx, base);
	// addis r5,r31,1
	ctx.r5.s64 = r31.s64 + 65536;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r5,r5,20352
	ctx.r5.s64 = ctx.r5.s64 + 20352;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lfs f0,30836(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 30836);
	ctx.f0.f64 = double(temp.f32);
	// ori r8,r4,22440
	ctx.r8.u64 = ctx.r4.u64 | 22440;
	// lwz r9,2048(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 2048);
	// fmadds f1,f30,f0,f31
	ctx.f1.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, f31.f64)));
	// ori r7,r11,22460
	ctx.r7.u64 = ctx.r11.u64 | 22460;
	// ori r6,r10,22488
	ctx.r6.u64 = ctx.r10.u64 | 22488;
	// subf r4,r3,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r3.u64;
	// stw r3,2056(r5)
	REX_STORE_U32(ctx.r5.u32 + 2056, ctx.r3.u32);
	// fctidz f0,f1
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// clrlwi r11,r4,23
	ctx.r11.u64 = ctx.r4.u32 & 0x1FF;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,2052(r5)
	REX_STORE_U32(ctx.r5.u32 + 2052, ctx.r11.u32);
	// stwx r30,r31,r8
	REX_STORE_U32(r31.u32 + ctx.r8.u32, r30.u32);
	// stwx r30,r31,r7
	REX_STORE_U32(r31.u32 + ctx.r7.u32, r30.u32);
	// stwx r30,r31,r6
	REX_STORE_U32(r31.u32 + ctx.r6.u32, r30.u32);
	// bl 0x82472e20
	ctx.lr = 0x82455960;
	sub_82472E20(ctx, base);
	// addis r29,r31,2
	r29.s64 = r31.s64 + 131072;
	// addi r29,r29,-26632
	r29.s64 = r29.s64 + -26632;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r7,r9,38900
	ctx.r7.u64 = ctx.r9.u64 | 38900;
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stwx r3,r31,r7
	REX_STORE_U32(r31.u32 + ctx.r7.u32, ctx.r3.u32);
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmadds f10,f11,f30,f31
	ctx.f10.f64 = double(float(std::fma(ctx.f11.f64, f30.f64, f31.f64)));
	// fctidz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82472e20
	ctx.lr = 0x8245599C;
	sub_82472E20(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// ori r4,r6,38936
	ctx.r4.u64 = ctx.r6.u64 | 38936;
	// lfs f0,30832(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 30832);
	ctx.f0.f64 = double(temp.f32);
	// stwx r30,r31,r4
	REX_STORE_U32(r31.u32 + ctx.r4.u32, r30.u32);
	// fmadds f8,f30,f0,f31
	ctx.f8.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, f31.f64)));
	// fctidz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82472e20
	ctx.lr = 0x824559C8;
	sub_82472E20(ctx, base);
	// addis r10,r31,2
	ctx.r10.s64 = r31.s64 + 131072;
	// addi r10,r10,-26576
	ctx.r10.s64 = ctx.r10.s64 + -26576;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r9,2048(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 2048);
	// stw r3,2056(r10)
	REX_STORE_U32(ctx.r10.u32 + 2056, ctx.r3.u32);
	// lfs f0,30828(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 30828);
	ctx.f0.f64 = double(temp.f32);
	// subf r8,r3,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r3.u64;
	// fmadds f6,f30,f0,f31
	ctx.f6.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, f31.f64)));
	// clrlwi r7,r8,23
	ctx.r7.u64 = ctx.r8.u32 & 0x1FF;
	// stw r7,2052(r10)
	REX_STORE_U32(ctx.r10.u32 + 2052, ctx.r7.u32);
	// fctidz f5,f6
	ctx.f5.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82472e20
	ctx.lr = 0x82455A00;
	sub_82472E20(ctx, base);
	// addis r5,r31,2
	ctx.r5.s64 = r31.s64 + 131072;
	// addi r5,r5,-24496
	ctx.r5.s64 = ctx.r5.s64 + -24496;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r9,2048(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 2048);
	// ori r8,r4,43128
	ctx.r8.u64 = ctx.r4.u64 | 43128;
	// lfs f0,30824(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 30824);
	ctx.f0.f64 = double(temp.f32);
	// ori r6,r11,43148
	ctx.r6.u64 = ctx.r11.u64 | 43148;
	// subf r7,r3,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r3.u64;
	// stw r3,2056(r5)
	REX_STORE_U32(ctx.r5.u32 + 2056, ctx.r3.u32);
	// ori r4,r10,43176
	ctx.r4.u64 = ctx.r10.u64 | 43176;
	// fmadds f4,f30,f0,f31
	ctx.f4.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, f31.f64)));
	// clrlwi r3,r7,23
	ctx.r3.u64 = ctx.r7.u32 & 0x1FF;
	// stw r3,2052(r5)
	REX_STORE_U32(ctx.r5.u32 + 2052, ctx.r3.u32);
	// stwx r30,r31,r8
	REX_STORE_U32(r31.u32 + ctx.r8.u32, r30.u32);
	// stwx r30,r31,r6
	REX_STORE_U32(r31.u32 + ctx.r6.u32, r30.u32);
	// stwx r30,r31,r4
	REX_STORE_U32(r31.u32 + ctx.r4.u32, r30.u32);
	// fctidz f3,f4
	ctx.f3.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f4.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82472e20
	ctx.lr = 0x82455A5C;
	sub_82472E20(ctx, base);
	// addis r29,r31,2
	r29.s64 = r31.s64 + 131072;
	// addi r29,r29,-5944
	r29.s64 = r29.s64 + -5944;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,59588
	ctx.r10.u64 = ctx.r11.u64 | 59588;
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stwx r3,r31,r10
	REX_STORE_U32(r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f2,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmadds f13,f0,f30,f31
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, f31.f64)));
	// fctidz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82472e20
	ctx.lr = 0x82455A98;
	sub_82472E20(ctx, base);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// ori r5,r7,59624
	ctx.r5.u64 = ctx.r7.u64 | 59624;
	// lfs f0,30820(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 30820);
	ctx.f0.f64 = double(temp.f32);
	// stwx r30,r31,r5
	REX_STORE_U32(r31.u32 + ctx.r5.u32, r30.u32);
	// fmadds f11,f30,f0,f31
	ctx.f11.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, f31.f64)));
	// fctidz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82472e20
	ctx.lr = 0x82455AC4;
	sub_82472E20(ctx, base);
	// addis r4,r31,2
	ctx.r4.s64 = r31.s64 + 131072;
	// addi r4,r4,-5888
	ctx.r4.s64 = ctx.r4.s64 + -5888;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lwz r11,8192(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8192);
	// stw r3,8200(r4)
	REX_STORE_U32(ctx.r4.u32 + 8200, ctx.r3.u32);
	// lfs f0,30816(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 30816);
	ctx.f0.f64 = double(temp.f32);
	// subf r9,r3,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r3.u64;
	// fmadds f9,f30,f0,f31
	ctx.f9.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, f31.f64)));
	// clrlwi r8,r9,21
	ctx.r8.u64 = ctx.r9.u32 & 0x7FF;
	// stw r8,8196(r4)
	REX_STORE_U32(ctx.r4.u32 + 8196, ctx.r8.u32);
	// fctidz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82472e20
	ctx.lr = 0x82455AFC;
	sub_82472E20(ctx, base);
	// addis r7,r31,2
	ctx.r7.s64 = r31.s64 + 131072;
	// addi r7,r7,2336
	ctx.r7.s64 = ctx.r7.s64 + 2336;
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// lwz r6,8192(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 8192);
	// stw r3,8200(r7)
	REX_STORE_U32(ctx.r7.u32 + 8200, ctx.r3.u32);
	// lfs f0,30812(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 30812);
	ctx.f0.f64 = double(temp.f32);
	// subf r4,r3,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r3.u64;
	// fmadds f7,f30,f0,f31
	ctx.f7.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, f31.f64)));
	// clrlwi r3,r4,21
	ctx.r3.u64 = ctx.r4.u32 & 0x7FF;
	// stw r3,8196(r7)
	REX_STORE_U32(ctx.r7.u32 + 8196, ctx.r3.u32);
	// fctidz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82472e20
	ctx.lr = 0x82455B34;
	sub_82472E20(ctx, base);
	// addis r11,r31,2
	ctx.r11.s64 = r31.s64 + 131072;
	// addi r11,r11,10560
	ctx.r11.s64 = ctx.r11.s64 + 10560;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lwz r10,8192(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8192);
	// stw r3,8200(r11)
	REX_STORE_U32(ctx.r11.u32 + 8200, ctx.r3.u32);
	// lfs f0,30808(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 30808);
	ctx.f0.f64 = double(temp.f32);
	// subf r8,r3,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r3.u64;
	// fmadds f5,f30,f0,f31
	ctx.f5.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, f31.f64)));
	// clrlwi r7,r8,21
	ctx.r7.u64 = ctx.r8.u32 & 0x7FF;
	// stw r7,8196(r11)
	REX_STORE_U32(ctx.r11.u32 + 8196, ctx.r7.u32);
	// fctidz f4,f5
	ctx.f4.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f5.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82472e20
	ctx.lr = 0x82455B6C;
	sub_82472E20(ctx, base);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// addis r6,r31,2
	ctx.r6.s64 = r31.s64 + 131072;
	// lfs f0,30804(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 30804);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f3,f30,f0,f31
	ctx.f3.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, f31.f64)));
	// addi r6,r6,18784
	ctx.r6.s64 = ctx.r6.s64 + 18784;
	// lwz r5,4096(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 4096);
	// stw r3,4104(r6)
	REX_STORE_U32(ctx.r6.u32 + 4104, ctx.r3.u32);
	// subf r11,r3,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r3.u64;
	// clrlwi r10,r11,22
	ctx.r10.u64 = ctx.r11.u32 & 0x3FF;
	// fctidz f2,f3
	ctx.f2.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f3.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// stw r10,4100(r6)
	REX_STORE_U32(ctx.r6.u32 + 4100, ctx.r10.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82472e20
	ctx.lr = 0x82455BA4;
	sub_82472E20(ctx, base);
	// addis r29,r31,3
	r29.s64 = r31.s64 + 196608;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// addi r29,r29,-26232
	r29.s64 = r29.s64 + -26232;
	// ori r7,r9,39300
	ctx.r7.u64 = ctx.r9.u64 | 39300;
	// lwz r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stwx r3,r31,r7
	REX_STORE_U32(r31.u32 + ctx.r7.u32, ctx.r3.u32);
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// fmadds f12,f13,f30,f31
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, f30.f64, f31.f64)));
	// fctidz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82472e20
	ctx.lr = 0x82455BE0;
	sub_82472E20(ctx, base);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// ori r3,r5,39336
	ctx.r3.u64 = ctx.r5.u64 | 39336;
	// lfs f0,30800(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 30800);
	ctx.f0.f64 = double(temp.f32);
	// stwx r30,r31,r3
	REX_STORE_U32(r31.u32 + ctx.r3.u32, r30.u32);
	// fmadds f10,f30,f0,f31
	ctx.f10.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, f31.f64)));
	// fctidz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82472e20
	ctx.lr = 0x82455C0C;
	sub_82472E20(ctx, base);
	// addis r11,r31,3
	ctx.r11.s64 = r31.s64 + 196608;
	// addi r11,r11,-26176
	ctx.r11.s64 = ctx.r11.s64 + -26176;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lwz r10,8192(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8192);
	// stw r3,8200(r11)
	REX_STORE_U32(ctx.r11.u32 + 8200, ctx.r3.u32);
	// lfs f0,30796(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 30796);
	ctx.f0.f64 = double(temp.f32);
	// subf r8,r3,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r3.u64;
	// fmadds f8,f30,f0,f31
	ctx.f8.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, f31.f64)));
	// clrlwi r7,r8,21
	ctx.r7.u64 = ctx.r8.u32 & 0x7FF;
	// stw r7,8196(r11)
	REX_STORE_U32(ctx.r11.u32 + 8196, ctx.r7.u32);
	// fctidz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82472e20
	ctx.lr = 0x82455C44;
	sub_82472E20(ctx, base);
	// addis r5,r31,3
	ctx.r5.s64 = r31.s64 + 196608;
	// addi r5,r5,-17952
	ctx.r5.s64 = ctx.r5.s64 + -17952;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// lwz r4,8192(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 8192);
	// stw r3,8200(r5)
	REX_STORE_U32(ctx.r5.u32 + 8200, ctx.r3.u32);
	// lfs f0,30792(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 30792);
	ctx.f0.f64 = double(temp.f32);
	// subf r3,r3,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r3.u64;
	// fmadds f6,f30,f0,f31
	ctx.f6.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, f31.f64)));
	// clrlwi r11,r3,21
	ctx.r11.u64 = ctx.r3.u32 & 0x7FF;
	// stw r11,8196(r5)
	REX_STORE_U32(ctx.r5.u32 + 8196, ctx.r11.u32);
	// fctidz f5,f6
	ctx.f5.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82472e20
	ctx.lr = 0x82455C7C;
	sub_82472E20(ctx, base);
	// addis r10,r31,3
	ctx.r10.s64 = r31.s64 + 196608;
	// addi r10,r10,-9728
	ctx.r10.s64 = ctx.r10.s64 + -9728;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lwz r8,8192(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8192);
	// stw r3,8200(r10)
	REX_STORE_U32(ctx.r10.u32 + 8200, ctx.r3.u32);
	// lfs f0,30788(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 30788);
	ctx.f0.f64 = double(temp.f32);
	// subf r7,r3,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r3.u64;
	// fmadds f4,f30,f0,f31
	ctx.f4.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, f31.f64)));
	// clrlwi r6,r7,21
	ctx.r6.u64 = ctx.r7.u32 & 0x7FF;
	// stw r6,8196(r10)
	REX_STORE_U32(ctx.r10.u32 + 8196, ctx.r6.u32);
	// fctidz f3,f4
	ctx.f3.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f4.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82472e20
	ctx.lr = 0x82455CB4;
	sub_82472E20(ctx, base);
	// addis r5,r31,3
	ctx.r5.s64 = r31.s64 + 196608;
	// addi r5,r5,-1504
	ctx.r5.s64 = ctx.r5.s64 + -1504;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r4,4096(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4096);
	// stw r3,4104(r5)
	REX_STORE_U32(ctx.r5.u32 + 4104, ctx.r3.u32);
	// lfs f0,30784(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 30784);
	ctx.f0.f64 = double(temp.f32);
	// subf r10,r3,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r3.u64;
	// fmadds f2,f30,f0,f31
	ctx.f2.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, f31.f64)));
	// clrlwi r9,r10,22
	ctx.r9.u64 = ctx.r10.u32 & 0x3FF;
	// stw r9,4100(r5)
	REX_STORE_U32(ctx.r5.u32 + 4100, ctx.r9.u32);
	// fctidz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f2.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f1,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82472e20
	ctx.lr = 0x82455CEC;
	sub_82472E20(ctx, base);
	// lis r8,3
	ctx.r8.s64 = 196608;
	// ori r7,r8,19012
	ctx.r7.u64 = ctx.r8.u64 | 19012;
	// addis r29,r31,3
	r29.s64 = r31.s64 + 196608;
	// addi r29,r29,19016
	r29.s64 = r29.s64 + 19016;
	// stwx r3,r31,r7
	REX_STORE_U32(r31.u32 + ctx.r7.u32, ctx.r3.u32);
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f11,f12,f30,f31
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, f30.f64, f31.f64)));
	// fctidz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82472e20
	ctx.lr = 0x82455D28;
	sub_82472E20(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// lis r3,3
	ctx.r3.s64 = 196608;
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// ori r11,r3,19048
	ctx.r11.u64 = ctx.r3.u64 | 19048;
	// lfs f0,30860(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 30860);
	ctx.f0.f64 = double(temp.f32);
	// stwx r30,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, r30.u32);
	// fmadds f9,f30,f0,f31
	ctx.f9.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, f31.f64)));
	// fctidz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82472e20
	ctx.lr = 0x82455D54;
	sub_82472E20(ctx, base);
	// addis r9,r31,3
	ctx.r9.s64 = r31.s64 + 196608;
	// addi r9,r9,19072
	ctx.r9.s64 = ctx.r9.s64 + 19072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r8,2048(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 2048);
	// stw r3,2056(r9)
	REX_STORE_U32(ctx.r9.u32 + 2056, ctx.r3.u32);
	// lfs f0,28272(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28272);
	ctx.f0.f64 = double(temp.f32);
	// subf r7,r3,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r3.u64;
	// fmadds f7,f30,f0,f31
	ctx.f7.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, f31.f64)));
	// clrlwi r6,r7,23
	ctx.r6.u64 = ctx.r7.u32 & 0x1FF;
	// stw r6,2052(r9)
	REX_STORE_U32(ctx.r9.u32 + 2052, ctx.r6.u32);
	// fctidz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82472e20
	ctx.lr = 0x82455D8C;
	sub_82472E20(ctx, base);
	// addis r5,r31,3
	ctx.r5.s64 = r31.s64 + 196608;
	// addi r5,r5,21152
	ctx.r5.s64 = ctx.r5.s64 + 21152;
	// lwz r4,2048(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 2048);
	// stw r3,2056(r5)
	REX_STORE_U32(ctx.r5.u32 + 2056, ctx.r3.u32);
	// subf r3,r3,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r3.u64;
	// clrlwi r11,r3,23
	ctx.r11.u64 = ctx.r3.u32 & 0x1FF;
	// stw r11,2052(r5)
	REX_STORE_U32(ctx.r5.u32 + 2052, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824759D8) {
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
	// bl 0x82475408
	ctx.lr = 0x824759F8;
	sub_82475408(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82475a08
	if (ctx.cr0.eq) goto loc_82475A08;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x82475A08;
	sub_82473600(ctx, base);
loc_82475A08:
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

DEFINE_REX_FUNC(sub_82477508) {
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
	ctx.lr = 0x82477510;
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f29.u64);
	// stfd f30,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,16
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16, ctx.xer);
	// lfs f30,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	f30.f64 = double(temp.f32);
	// slw r29,r10,r5
	r29.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r5.u8 & 0x3F));
	// bge cr6,0x82477564
	if (!ctx.cr6.lt) goto loc_82477564;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,3368
	ctx.r11.s64 = ctx.r11.s64 + 3368;
	// addi r9,r11,72
	ctx.r9.s64 = ctx.r11.s64 + 72;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lfsx f0,r10,r9
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f31,r10,r8
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	f31.f64 = double(temp.f32);
	// fmuls f10,f0,f30
	ctx.f10.f64 = double(float(ctx.f0.f64 * f30.f64));
	// b 0x824775b4
	goto loc_824775B4;
loc_82477564:
	// extsw r11,r29
	ctx.r11.s64 = r29.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lfd f0,26664(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 26664);
	// fdiv f29,f0,f13
	f29.f64 = ctx.f0.f64 / ctx.f13.f64;
	// lfd f0,3368(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 3368);
	// fmul f1,f29,f0
	ctx.f1.f64 = f29.f64 * ctx.f0.f64;
	// bl 0x822d4d68
	ctx.lr = 0x82477590;
	sub_822D4D68(ctx, base);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// lfd f0,23784(r8)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 23784);
	// fmul f1,f29,f0
	ctx.f1.f64 = f29.f64 * ctx.f0.f64;
	// bl 0x822d4c88
	ctx.lr = 0x824775A4;
	sub_822D4C88(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfd f0,-25040(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + -25040);
	// fmul f12,f1,f0
	ctx.f12.f64 = ctx.f1.f64 * ctx.f0.f64;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
loc_824775B4:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// bne cr6,0x824775c8
	if (!ctx.cr6.eq) goto loc_824775C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
loc_824775C8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r3,r29,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lfs f0,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// lfs f8,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// ble cr6,0x824777b0
	if (!ctx.cr6.gt) goto loc_824777B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f7,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f7.f64 = double(temp.f32);
loc_824775F4:
	// fnmsubs f13,f9,f10,f8
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f10.f64, -ctx.f8.f64)));
	// srawi r31,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	r31.s64 = ctx.r7.s32 >> 1;
	// fmuls f0,f10,f31
	ctx.f0.f64 = double(float(ctx.f10.f64 * f31.f64));
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f12,f8
	ctx.f12.f64 = ctx.f8.f64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// fmr f11,f7
	ctx.f11.f64 = ctx.f7.f64;
	// fmr f31,f13
	f31.f64 = ctx.f13.f64;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// fmuls f10,f0,f30
	ctx.f10.f64 = double(float(ctx.f0.f64 * f30.f64));
	// ble cr6,0x824776b8
	if (!ctx.cr6.gt) goto loc_824776B8;
	// addi r11,r31,3
	ctx.r11.s64 = r31.s64 + 3;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r30,8
	ctx.r11.s64 = r30.s64 + 8;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
loc_82477634:
	// lfs f6,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f6.f64 = double(temp.f32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lfs f5,-12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// stfs f4,-8(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// fsubs f3,f6,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// stfs f3,-12(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + -12, temp.u32);
	// lfs f2,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// lfs f1,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f1.f64 = double(temp.f32);
	// fadds f6,f2,f1
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// stfs f6,-4(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fsubs f5,f2,f1
	ctx.f5.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// stfs f5,-8(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lfs f4,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f1,f4,f3
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// lfs f5,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f2,f4,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fadds f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// fmsubs f5,f1,f13,f3
	ctx.f5.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, -ctx.f3.f64)));
	// stfs f5,-4(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// fmadds f4,f1,f0,f2
	ctx.f4.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f2.f64)));
	// stfs f4,0(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// blt cr6,0x82477634
	if (ctx.cr6.lt) goto loc_82477634;
loc_824776B8:
	// li r4,4
	ctx.r4.s64 = 4;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// ble cr6,0x824777a4
	if (!ctx.cr6.gt) goto loc_824777A4;
	// addi r11,r31,7
	ctx.r11.s64 = r31.s64 + 7;
	// addi r6,r30,24
	ctx.r6.s64 = r30.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + r30.u64;
loc_824776D4:
	// fnmsubs f12,f0,f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f10.f64, -ctx.f12.f64)));
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// fmadds f11,f13,f10,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f11.f64)));
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// fmadds f0,f12,f10,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f10.f64, ctx.f0.f64)));
	// fnmsubs f13,f11,f10,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f10.f64, -ctx.f13.f64)));
	// bgt cr6,0x82477790
	if (ctx.cr6.gt) goto loc_82477790;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_824776FC:
	// lfs f6,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f6.f64 = double(temp.f32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lfs f5,-12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// stfs f4,-8(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfs f1,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f2,f6,f5
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// lfs f3,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f6,f3,f1
	ctx.f6.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// fmuls f5,f6,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// fmuls f4,f6,f12
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fadds f3,f3,f1
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f1.f64));
	// stfs f3,-4(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fmsubs f1,f2,f12,f5
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f12.f64, -ctx.f5.f64)));
	// stfs f1,-12(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + -12, temp.u32);
	// fmadds f6,f2,f11,f4
	ctx.f6.f64 = double(float(std::fma(ctx.f2.f64, ctx.f11.f64, ctx.f4.f64)));
	// stfs f6,-8(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lfs f5,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f2,f4,f5
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// lfs f6,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f1,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f5,f1,f6
	ctx.f5.f64 = double(float(ctx.f1.f64 - ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f3,f5,f13
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fadds f1,f1,f6
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// fmsubs f6,f2,f13,f4
	ctx.f6.f64 = double(float(std::fma(ctx.f2.f64, ctx.f13.f64, -ctx.f4.f64)));
	// stfs f6,-4(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// fmadds f5,f2,f0,f3
	ctx.f5.f64 = double(float(std::fma(ctx.f2.f64, ctx.f0.f64, ctx.f3.f64)));
	// stfs f5,0(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// ble cr6,0x824776fc
	if (!ctx.cr6.gt) goto loc_824776FC;
loc_82477790:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// cmpw cr6,r4,r31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r31.s32, ctx.xer);
	// blt cr6,0x824776d4
	if (ctx.cr6.lt) goto loc_824776D4;
loc_824777A4:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// bgt cr6,0x824775f4
	if (ctx.cr6.gt) goto loc_824775F4;
loc_824777B0:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// ble cr6,0x82477808
	if (!ctx.cr6.gt) goto loc_82477808;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82477808
	if (!ctx.cr6.gt) goto loc_82477808;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824777D4:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f9,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fsubs f6,f10,f9
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfsu f6,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824777d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824777D4;
loc_82477808:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// ble cr6,0x824778e8
	if (!ctx.cr6.gt) goto loc_824778E8;
	// srawi r11,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r11.s64 = r29.s32 >> 1;
	// addi r4,r29,1
	ctx.r4.s64 = r29.s64 + 1;
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x824778e8
	if (!ctx.cr6.gt) goto loc_824778E8;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
loc_82477830:
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82477888
	if (!ctx.cr6.lt) goto loc_82477888;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-4(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfs f11,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsux f9,r11,r8
	ea = ctx.r11.u32 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f9.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfsx f10,r8,r10
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// stfsx f9,r8,r10
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, temp.u32);
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f7,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f7.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfsu f0,4(r7)
	ea = 4 + ctx.r7.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// stfs f7,0(r7)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82477888:
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + r29.u64;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f11,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// bgt cr6,0x824778d4
	if (ctx.cr6.gt) goto loc_824778D4;
loc_824778C0:
	// srawi r11,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// addze r8,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r8.s64 = temp.s64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x824778c0
	if (!ctx.cr6.gt) goto loc_824778C0;
loc_824778D4:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r6,r29
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r29.s32, ctx.xer);
	// blt cr6,0x82477830
	if (ctx.cr6.lt) goto loc_82477830;
loc_824778E8:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// bne cr6,0x8247799c
	if (!ctx.cr6.eq) goto loc_8247799C;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x82477958
	if (ctx.cr6.lt) goto loc_82477958;
	// extsw r11,r29
	ctx.r11.s64 = r29.s32;
	// addi r9,r3,-3
	ctx.r9.s64 = ctx.r3.s64 + -3;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f8,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 / ctx.f12.f64));
loc_8247791C:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f7,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f0,f10
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f5,f0,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stfs f6,12(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfsu f5,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// blt cr6,0x8247791c
	if (ctx.cr6.lt) goto loc_8247791C;
loc_82477958:
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8247799c
	if (!ctx.cr6.lt) goto loc_8247799C;
	// extsw r9,r29
	ctx.r9.s64 = r29.s32;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// subf r8,r10,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r10.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// fdivs f0,f8,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 / ctx.f12.f64));
loc_8247798C:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8247798c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8247798C;
loc_8247799C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

DEFINE_REX_FUNC(sub_824A84E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x824A84F0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltish v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x4)));
	// li r9,1120
	ctx.r9.s64 = 1120;
	// addi r29,r1,112
	r29.s64 = ctx.r1.s64 + 112;
	// vspltish v1,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x1)));
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vrlh v0,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, result);
	}
	// li r8,0
	ctx.r8.s64 = 0;
	// lvx128 v2,r6,r9
	ea = (ctx.r6.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// vsubshs v0,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// stvx128 v0,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824a6eb0
	ctx.lr = 0x824A8534;
	sub_824A6EB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lvx128 v2,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// vspltish v1,7
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x7)));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a7318
	ctx.lr = 0x824A854C;
	sub_824A7318(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_824A9F80) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x824A9F88;
	// li r5,48
	ctx.r5.s64 = 48;
	// lvx128 v12,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,96
	ctx.r6.s64 = 96;
	// vspltish v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x1)));
	// li r7,144
	ctx.r7.s64 = 144;
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// li r8,192
	ctx.r8.s64 = 192;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,64
	ctx.r10.s64 = 64;
	// lvx128 v11,r3,r5
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,112
	r31.s64 = 112;
	// lvx128 v10,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,160
	r30.s64 = 160;
	// lvx128 v9,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r29,208
	r29.s64 = 208;
	// lvx128 v8,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,240
	ctx.r9.s64 = 240;
	// lvx128 v62,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,256
	r28.s64 = 256;
	// lvx128 v61,r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v4,v12,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// lvx128 v60,r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v3,v11,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 14));
	// lvx128 v59,r3,r29
	ea = (ctx.r3.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v2,v10,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// vsldoi128 v31,v9,v60,2
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), 14));
	// lvx128 v7,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v30,v8,v59,2
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), 14));
	// vslh v6,v4,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v5,v3,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v58,r3,r28
	ea = (ctx.r3.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v28,v2,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r10,288
	ctx.r10.s64 = 288;
	// vslh v27,v31,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r11,336
	ctx.r11.s64 = 336;
	// vslh v26,v30,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r31,304
	r31.s64 = 304;
	// li r30,352
	r30.s64 = 352;
	// vsldoi128 v29,v7,v58,2
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), 14));
	// vaddshs v25,v6,v12
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v24,v5,v11
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// lvx128 v6,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v23,v28,v10
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// lvx128 v5,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v22,v27,v9
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// lvx128 v57,r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v21,v26,v8
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v56,r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v15,v29,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v28,v6,v57,2
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), 14));
	// vaddshs v20,v25,v4
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsldoi128 v27,v5,v56,2
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), 14));
	// vaddshs v19,v24,v3
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v18,v23,v2
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v17,v22,v31
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vaddshs v16,v21,v30
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v8,v15,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v14,v20,v1
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v12,v19,v1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v11,v18,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v10,v17,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v9,v16,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v7,v28,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v27,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v3,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v2,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v30,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v3,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v25,v8,v29
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// stvx128 v2,r4,r5
	ea = (ctx.r4.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v24,v7,v6
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvx128 v31,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v23,v4,v5
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvx128 v30,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v22,v25,v1
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v21,v24,v28
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v20,v23,v27
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vaddshs v19,v21,v1
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v18,v20,v1
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v17,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v17,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v16,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v15,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_824B0858) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e84
	ctx.lr = 0x824B0860;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// add r31,r10,r4
	r31.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// vspltish v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r29,r1,-80
	r29.s64 = ctx.r1.s64 + -80;
	// lvx128 v60,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,-64
	r28.s64 = ctx.r1.s64 + -64;
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v11,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// lvx128 v59,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v63,v60,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// lvx128 v58,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lvx128 v57,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v62,v59,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v56,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v4,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v5,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v2,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v3,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r31,r6,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// vperm128 v8,v61,v57,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v7,v58,v56,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vor v10,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vmrghb v1,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r10,r31,r5
	ctx.r10.u64 = r31.u64 + ctx.r5.u64;
	// vmrglb v31,v0,v9
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v30,v0,v8
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r30,r10,r6
	r30.u64 = ctx.r10.u64 + ctx.r6.u64;
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
	// vsldoi v6,v10,v2,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), 14));
	// vor v7,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)v29.u8));
	// vsldoi v5,v9,v31,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)v31.u8), 14));
	// vsldoi v4,v8,v28,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v28.u8), 14));
	// vslh v26,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v3,v7,v27,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)v27.u8), 14));
	// vslh v25,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v22,v26,v6
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v21,v25,v5
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v20,v24,v4
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v19,v23,v3
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v18,v22,v10
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v17,v21,v9
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v16,v20,v8
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v15,v19,v7
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
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
	// stvx128 v55,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r7,-72(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r29,-80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// stvx128 v54,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r28,-64(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// lwz r27,-56(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// stw r29,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r29.u32);
	// stwx r7,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r7.u32);
	// stwx r28,r31,r5
	REX_STORE_U32(r31.u32 + ctx.r5.u32, r28.u32);
	// stwx r27,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, r27.u32);
	// bne cr6,0x824b09c4
	if (!ctx.cr6.eq) goto loc_824B09C4;
	// lwz r7,-76(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r29,-68(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// lwz r28,-60(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// lwz r27,-52(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// stw r7,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// stw r29,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, r29.u32);
	// stw r28,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r28.u32);
	// stw r27,4(r30)
	REX_STORE_U32(r30.u32 + 4, r27.u32);
loc_824B09C4:
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x824b0b14
	if (!ctx.cr6.eq) goto loc_824B0B14;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r1,-64
	r30.s64 = ctx.r1.s64 + -64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// rlwinm r31,r31,1,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r29,r1,-80
	r29.s64 = ctx.r1.s64 + -80;
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v53,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r3,r7,r4
	ctx.r3.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lvx128 v51,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v10,v52,v53,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v49,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v50,v51,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v47,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v5,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v48,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v47,v49,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v46,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v4,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v3,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v2,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v7,v46,v48,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v1,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v31,v0,v9
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v10,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vmrghb v30,v0,v8
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v9,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vmrghb v29,v0,v7
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v28,v0,v8
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v27,v0,v7
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v0,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)v30.u8));
	// vsldoi v7,v10,v1,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), 14));
	// vsldoi v6,v9,v31,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)v31.u8), 14));
	// vor v8,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)v29.u8));
	// vsldoi v5,v0,v28,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)v28.u8), 14));
	// vslh v26,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v4,v8,v27,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v27.u8), 14));
	// vslh v24,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v22,v26,v7
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v21,v25,v6
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vslh v23,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v20,v24,v5
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v18,v22,v10
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v17,v21,v9
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v19,v23,v4
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v16,v20,v0
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v14,v18,v11
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v0,v17,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v15,v19,v8
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v12,v16,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v10,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v9,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v11,v15,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v8,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v45,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsrah v7,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v44,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvx128 v45,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,-56(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// lwz r9,-60(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// stvx128 v44,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r7,-80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// lwz r4,-76(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r3,-64(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// stwux r3,r5,r31
	ea = ctx.r5.u32 + r31.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r5.u32 = ea;
	// lwz r3,-52(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r9,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// stwx r8,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r8.u32);
	// lwz r9,-72(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stwux r7,r10,r31
	ea = ctx.r10.u32 + r31.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// lwz r8,-68(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// add r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// stwx r9,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r9.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_824B0B14:
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_824D1800) {
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
	// lis r31,-32170
	r31.s64 = -2108293120;
	// addi r11,r31,8160
	ctx.r11.s64 = r31.s64 + 8160;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823d7748
	ctx.lr = 0x824D1820;
	sub_823D7748(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21604
	ctx.r11.s64 = ctx.r11.s64 + 21604;
	// stw r11,8160(r31)
	REX_STORE_U32(r31.u32 + 8160, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824D1A40) {
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
	// lis r31,-32170
	r31.s64 = -2108293120;
	// addi r11,r31,8524
	ctx.r11.s64 = r31.s64 + 8524;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823d7748
	ctx.lr = 0x824D1A60;
	sub_823D7748(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21676
	ctx.r11.s64 = ctx.r11.s64 + 21676;
	// stw r11,8524(r31)
	REX_STORE_U32(r31.u32 + 8524, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824D1CC0) {
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
	// lis r31,-32170
	r31.s64 = -2108293120;
	// addi r11,r31,8924
	ctx.r11.s64 = r31.s64 + 8924;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823d7748
	ctx.lr = 0x824D1CE0;
	sub_823D7748(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21756
	ctx.r11.s64 = ctx.r11.s64 + 21756;
	// stw r11,8924(r31)
	REX_STORE_U32(r31.u32 + 8924, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824D1F08) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r9,r11,-26800
	ctx.r9.s64 = ctx.r11.s64 + -26800;
	// addi r11,r10,-22700
	ctx.r11.s64 = ctx.r10.s64 + -22700;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D20B8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r10,r10,-21656
	ctx.r10.s64 = ctx.r10.s64 + -21656;
	// lwz r11,-26880(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -26880);
	// stw r11,172(r10)
	REX_STORE_U32(ctx.r10.u32 + 172, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D2398) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,14160
	ctx.r3.s64 = ctx.r11.s64 + 14160;
	// b 0x822d5848
	sub_822D5848(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D28A0) {
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
	// li r5,704
	ctx.r5.s64 = 704;
	// addi r31,r11,26800
	r31.s64 = ctx.r11.s64 + 26800;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x822d5870
	ctx.lr = 0x824D28C8;
	sub_822D5870(ctx, base);
	// li r11,19
	ctx.r11.s64 = 19;
	// li r10,19
	ctx.r10.s64 = 19;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,716(r31)
	REX_STORE_U32(r31.u32 + 716, ctx.r11.u32);
	// stw r10,720(r31)
	REX_STORE_U32(r31.u32 + 720, ctx.r10.u32);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// stw r9,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r9.u32);
	// addi r3,r11,14424
	ctx.r3.s64 = ctx.r11.s64 + 14424;
	// bl 0x822d5848
	ctx.lr = 0x824D28EC;
	sub_822D5848(ctx, base);
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

DEFINE_REX_FUNC(sub_824D2FD0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,14960
	ctx.r3.s64 = ctx.r11.s64 + 14960;
	// b 0x822d5848
	sub_822D5848(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3080) {
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
	// addi r3,r11,24428
	ctx.r3.s64 = ctx.r11.s64 + 24428;
	// bl 0x82245eb8
	ctx.lr = 0x824D3098;
	sub_82245EB8(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,14976
	ctx.r3.s64 = ctx.r11.s64 + 14976;
	// bl 0x822d5848
	ctx.lr = 0x824D30A4;
	sub_822D5848(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D32D8) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r11,r11,9556
	ctx.r11.s64 = ctx.r11.s64 + 9556;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x824d440c
	ctx.lr = 0x824D32F4;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,16024
	ctx.r3.s64 = ctx.r11.s64 + 16024;
	// bl 0x822d5848
	ctx.lr = 0x824D3300;
	sub_822D5848(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D38D8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// b 0x821f5538
	sub_821F5538(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D39F8) {
	REX_FUNC_PROLOGUE();
	// li r10,256
	ctx.r10.s64 = 256;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,15284
	ctx.r11.s64 = ctx.r11.s64 + 15284;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,3268
	ctx.r11.s64 = ctx.r11.s64 + 3268;
	// addi r10,r10,-29256
	ctx.r10.s64 = ctx.r10.s64 + -29256;
loc_824D3A14:
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r10,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// stw r9,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// bdnz 0x824d3a14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824D3A14;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D3B88) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,25980
	ctx.r3.s64 = ctx.r11.s64 + 25980;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3C78) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,26444
	ctx.r3.s64 = ctx.r11.s64 + 26444;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3DD0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,29852
	ctx.r3.s64 = ctx.r11.s64 + 29852;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3F30) {
	REX_FUNC_PROLOGUE();
	// .long 0x20002f7
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4080) {
	REX_FUNC_PROLOGUE();
	// .long 0x20004b8
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D41E0) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010084
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4360) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100fc
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D44E0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101d9
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4660) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101c2
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D47E0) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000002
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4960) {
	REX_FUNC_PROLOGUE();
	// .long 0x201034d
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4AE0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100fa
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

